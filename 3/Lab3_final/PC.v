// ---------- Update program counter ----------
// PC must be updated on the rising edge (positive edge) of the clock.
module PC   (input reset,       // input (Use reset to initialize PC. Initial value must be 0)
            input clk,         // input
            input [31:0] next_pc,     // input
            input pc_write_final,
            output reg [31:0] current_pc);   // output

  always @(posedge clk) begin
    if (reset) begin
      current_pc <= 32'b0;
    end
    else begin
      if (pc_write_final) begin
        current_pc <= next_pc;
      end
    end
  end

endmodule
