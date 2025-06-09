// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/

  wire pc_write_cond;
  wire pc_write;
  wire i_or_d;
  wire mem_read;
  wire mem_write;
  wire mem_to_reg;
  wire ir_write;
  wire pc_source;
  wire alu_srcA;
  wire [1:0] alu_srcB;
  wire reg_write;
  wire is_ecall;

  wire clk_and_ishalted;
  wire [31:0] current_pc;
  wire [31:0] next_pc;
  wire alu_bcond;

  wire pc_write_final;
  wire [31:0] mux1_result;
  wire [31:0] mux2_result;
  wire [31:0] mux3_result;
  wire [31:0] mux4_result;
  wire [31:0] mux5_result;
  wire [31:0] mem_dout;
  wire [31:0] imm_gen_out;
  wire [1:0] alu_op;
  wire [5:0] alu_select;
  wire [31:0] alu_result;
  
  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  reg alu_bcond_reg;
  always @(posedge clk_and_ishalted) begin
      alu_bcond_reg <= alu_bcond;
  end

  assign pc_write_final = pc_write || (pc_write_cond && alu_bcond);
  assign clk_and_ishalted = clk && !(is_halted);
  assign next_pc = mux4_result;
  always @(posedge clk_and_ishalted) begin
    if (ir_write) begin
      IR <= mem_dout;
    end
    ALUOut <= alu_result;
    MDR <= mem_dout;
  end

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk_and_ishalted),         // input
    .next_pc(next_pc),     // input
    .pc_write_final(pc_write_final),
    .current_pc(current_pc)   // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk_and_ishalted),          // input
    .rs1(IR[19:15]),          // input
    .rs2(IR[24:20]),          // input
    .rd(IR[11:7]),           // input
    .rd_din(mux2_result),       // input
    .write_enable(reg_write),    // input
    .is_ecall(is_ecall),
    .rs1_dout(A),     // output
    .rs2_dout(B),      // output
    .print_reg(print_reg),     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
    .is_halted(is_halted)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk_and_ishalted),          // input
    .addr(mux1_result),         // input
    .din(B),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(mem_dout)          // output
  );
  
  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .clk(clk_and_ishalted),
    .reset(reset),
    .alu_bcond(alu_bcond_reg),
    .opcode(IR[6:0]),  // input
    .pc_write_cond(pc_write_cond),
    .pc_write(pc_write),
    .i_or_d(i_or_d),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_to_reg(mem_to_reg),
    .ir_write(ir_write),
    .pc_source(pc_source),
    .alu_op(alu_op),
    .alu_srcA(alu_srcA),
    .alu_srcB(alu_srcB),
    .reg_write(reg_write),
    .is_ecall(is_ecall)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IR),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .opcode(IR[6:0]),		//input
    .alu_op(alu_op),
    .funct3(IR[14:12]),
    .funct7_5(IR[30]),
    .alu_select(alu_select)         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_select),      // input
    .A(mux3_result),    // input  
    .B(mux5_result),    // input
    .C(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

  mux_2x1 mux1(
    .in_1(ALUOut),
    .in_2(current_pc),
    .ctrl(i_or_d),
    .out(mux1_result)
  );

  mux_2x1 mux2(
    .in_1(MDR),
    .in_2(ALUOut),
    .ctrl(mem_to_reg),
    .out(mux2_result)
  );

  mux_2x1 mux3(
    .in_1(A),
    .in_2(current_pc),
    .ctrl(alu_srcA),
    .out(mux3_result)
  );

  mux_2x1 mux4(
    .in_1(ALUOut),
    .in_2(alu_result),
    .ctrl(pc_source),
    .out(mux4_result)
  );

  mux_4x1 mux5(
    .in_1(B),
    .in_2(4),
    .in_3(imm_gen_out),
    .in_4(0),
    .ctrl(alu_srcB),
    .out(mux5_result)
  );

endmodule
