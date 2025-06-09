`include "vending_machine_def.v"


module change_state(clk,reset_n, current_total_nxt, input_total, output_total, return_total, i_trigger_return, wait_time, current_total);

   input clk;
   input reset_n;
   input [`kTotalBits-1:0] current_total_nxt;
   input [`kTotalBits-1:0] input_total;
   input [`kTotalBits-1:0] output_total;
   input [`kTotalBits-1:0] return_total;
   input i_trigger_return;
   input [31:0] wait_time;
   output reg [`kTotalBits-1:0] current_total;
   
   // Sequential circuit to reset or update the states
   always @(posedge clk ) begin
      if (!reset_n || i_trigger_return || wait_time == 0) begin
         // TODO: reset all states.
         current_total <= 0;
      end

      else begin
         current_total <= current_total_nxt + input_total - output_total - return_total;
         
      end
   end
endmodule 
