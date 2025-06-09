`include "vending_machine_def.v"


module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,wait_time,o_return_coin ,item_price,coin_value,current_total,i_trigger_return);
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];
	input [`kTotalBits-1:0] current_total;
	input i_trigger_return;
	output reg [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	reg [`kTotalBits-1:0] coin_required;
	reg [`kTotalBits-1:0] remaining_total;
	reg [`kNumCoins-1:0] nxt_return_coin;

	// initiate values
	initial begin
		// TODO: initiate values
		o_return_coin = 0;
		wait_time = `kWaitTime;
	end



	always @(*) begin
		// TODO: o_return_coin
		remaining_total = current_total;
		nxt_return_coin = o_return_coin;
		if (!reset_n) begin
			// TODO: reset all states.
			nxt_return_coin = 0;
		end

		else if (wait_time == 0 || i_trigger_return) begin
			for (int i = `kNumCoins-1; i >= 0; i = i - 1) begin
            	if (remaining_total >= coin_value[i]) begin
            	    nxt_return_coin[i] = 1;
            	    remaining_total = remaining_total - coin_value[i];
            	end
       		end
		end

	end

	always @(posedge clk ) begin
		// TODO: reset all states.
		if (!reset_n) begin
			o_return_coin <= 0;
			wait_time <= `kWaitTime;
		end

		else begin
			o_return_coin <= nxt_return_coin;

			// TODO: update coin return time
			if (i_input_coin) begin
				wait_time <= `kWaitTime;
			end
		
			else if (i_select_item) begin
				coin_required = 0;
				for (int i = 0; i < `kNumItems; i += 1) begin
					coin_required += i_select_item[i] * item_price[i];
				end
				if (current_total >= coin_required) begin
					wait_time <= `kWaitTime;
				end
			end

			else if (wait_time > 0) begin
				// TODO: update all states.
				wait_time <= wait_time - 1;
			end
		end
	end
endmodule 
