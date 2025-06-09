// Do not submit this file.
module top(input reset,
           input clk,
           output is_halted,
           output integer miss_count,
           output integer hit_count,
           output [31:0] print_reg [0:31]);

  cpu cpu(
    .reset(reset), 
    .clk(clk),
    .is_halted(is_halted),
    .miss_count(miss_count),
    .hit_count(hit_count),
    .print_reg(print_reg)
  );

endmodule
