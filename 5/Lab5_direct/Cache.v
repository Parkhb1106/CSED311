`include "alu_func.v"

module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 16
               //parameter NUM_WAYS = 1
               ) (
    input reset,
    input clk,

    input is_input_valid,
    input [31:0] addr,
    input mem_read,
    input mem_write,
    input [31:0] din,

    output is_ready,
    output is_output_valid,
    output [31:0] dout,
    output reg is_hit);
  // Wire declarations
  wire is_data_mem_ready;
  wire is_data_mem_output_valid;

  wire [1:0] g;
  wire [1:0] bo;
  wire [3:0] idx; // log(2)NUM_SETS
  wire [23:0] tag; // 32-g-bo-idx

  wire [LINE_SIZE * 8 - 1:0] data_block;
  wire [LINE_SIZE * 8 - 1:0] data_mem_dout;

  // Reg declarations

  reg is_data_mem_read;
  reg is_data_mem_write;
  reg [1:0] current_state;
  reg [1:0] next_state;

  reg [23:0] tag_bank [NUM_SETS-1:0];
  reg valid [NUM_SETS-1:0];
  reg dirty [NUM_SETS-1:0];
  reg [LINE_SIZE * 8 - 1:0] data_bank [NUM_SETS-1:0];

  reg cache_update;
  reg [LINE_SIZE * 8 - 1:0]cache_update_data;
  //reg [23:0] cache_update_tag;
  reg cache_update_dirty;
  reg cache_update_valid;

  reg [LINE_SIZE * 8 - 1:0] mem_din;
  reg is_data_mem_input_valid;
  reg [31:0] mem_addr;

  // You might need registers to keep the status.
  assign g = addr[1:0];
  assign bo = addr[3:2];
  assign idx = addr[7:4];
  assign tag = addr[31:8];

  assign is_ready = is_data_mem_ready;
  // assign is_hit = (tag_bank[idx] == tag) && (valid[idx] == 1);
  assign is_output_valid = (next_state == `NONE);
  assign data_block = data_bank[idx];
  assign dout = data_bank[idx][32 * bo +: 32];
  
  integer i;

  always@(posedge clk) begin
    if (reset) begin
      current_state <= `ACCESS;
      for (i = 0; i <= NUM_SETS-1; i = i + 1) begin
        tag_bank[i] <= 24'b0;
        valid[i] <= 1'b0;
        dirty[i] <= 1'b0;
        data_bank[i] <= 0;
      end
    end
    else begin
      current_state <= next_state;
      if(cache_update) begin
        data_bank[idx] <= cache_update_data;
        tag_bank[idx] <= tag;
        valid[idx] <= cache_update_valid;
        dirty[idx] <= cache_update_dirty;
      end
    end
  end

  always@(*) begin
    is_data_mem_input_valid = 0;
    cache_update=0;
    cache_update_data=0;
    cache_update_valid = 0;
    cache_update_dirty = 0;
    is_hit = 1;
    mem_din = 0;
    is_data_mem_write = 0;
    is_data_mem_read = 0;
    mem_addr = 0;

      case (current_state)
        `NONE: begin
          if (is_input_valid) begin
            next_state = `ACCESS;
          end
          else begin
            next_state = `NONE;
          end
        end

        `ACCESS: begin
          if ((valid[idx] == 1) &&(tag == tag_bank[idx]) ) begin // hit
            if (mem_write) begin//write
              cache_update=1;
              cache_update_valid = 1;
              cache_update_dirty = 1;
              case (bo)
                2'b00: cache_update_data = {data_bank[idx][127:32], din};
                2'b01: cache_update_data = {data_bank[idx][127:64], din, data_bank[idx][31:0]};
                2'b10: cache_update_data = {data_bank[idx][127:96], din, data_bank[idx][63:0]};
                2'b11: cache_update_data = {din, data_bank[idx][95:0]};
              endcase
            end

            next_state = `NONE;
            is_hit = 1;
          end
          else begin // miss
            is_hit=0; //cache_stall 켜짐.
            if(dirty[idx]) begin
              next_state = `WRITE_BACK;
            end
            else begin
              next_state = `ALLOCATE;
            end
          end
        end

        `WRITE_BACK: begin
          is_hit=0;
          if (is_data_mem_ready) begin
            mem_addr = {tag_bank[idx], idx, 4'b0000};//addr랑 writeback 해야하는 라인 주소 다름
            is_data_mem_input_valid = 1;
            is_data_mem_write =1;
            is_data_mem_read =0;
            mem_din = data_bank[idx];
            next_state = `ALLOCATE;
          end
          else begin
            next_state =`WRITE_BACK;
          end
        end

        `ALLOCATE: begin
          is_data_mem_read =1;
          is_data_mem_write =0;
          mem_addr = addr;
          is_data_mem_input_valid = 1;
          is_hit = 0;
          if (is_data_mem_output_valid) begin
            is_hit = 1;
            cache_update = 1;
            cache_update_data = data_mem_dout;
            cache_update_valid = 1;
            cache_update_dirty = 0;
            is_data_mem_input_valid = 0;
            next_state = `ACCESS;
          end

          else begin
            next_state =`ALLOCATE;
          end
        end

        default: next_state = `ACCESS;
      endcase
  end


  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(is_data_mem_input_valid),
    .addr(mem_addr >> 4),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(is_data_mem_read),
    .mem_write(is_data_mem_write),
    .din(mem_din),

    // is output from the data memory valid?
    .is_output_valid(is_data_mem_output_valid),
    .dout(data_mem_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );
endmodule
