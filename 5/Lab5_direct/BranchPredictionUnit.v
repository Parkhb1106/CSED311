module BranchPredictionUnit (
    input reset,
    input clk,
    input [31:0] current_pc,
    input [31:0] ID_EX_pc,
    input [31:0] pc_correct,
    input prediction_sucess,
    input prediction_taken,
    output reg [31:0] pc_predict);     // output

    reg [24:0] tag_table [31:0];
    reg [31:0] btb [31:0];
    reg [1:0] pht [31:0];
    reg [4:0] bhsr;

    wire [31:0] current_pc_add_4_inBranchPrediction;
    wire [4:0] btb_idx;
    wire [24:0] tag;
    wire [4:0] idx_xor_bhsr;

    add pc_4_adder(
    .A(current_pc),
    .B(32'b100),
    .C(current_pc_add_4_inBranchPrediction)
    );

    assign btb_idx = current_pc[6:2];
    assign tag = current_pc[31:7];
    assign idx_xor_bhsr = bhsr ^ btb_idx;

    always@(*) begin
        if((tag_table[btb_idx] == tag) && (btb[btb_idx] != 0) && (pht[idx_xor_bhsr] == 2'b10 || pht[idx_xor_bhsr] == 2'b11)) begin
            pc_predict = btb[btb_idx];
        end
        else begin
            pc_predict = current_pc_add_4_inBranchPrediction;
        end
    end

    always @(posedge clk) begin
        if (reset) begin // Initialization of BTB
            integer i;
            for (i = 0; i <= 31; i = i + 1) begin
                btb[i] <= 32'b0;
                tag_table[i] <= 25'b0;
                pht[i] <= 2'b0;
            end
        end
        else begin
            // btb, tag update
            if ((prediction_sucess == 0) && (pc_correct != ID_EX_pc + 4)) begin
                btb[ID_EX_pc[6:2]] <= pc_correct;
                tag_table[ID_EX_pc[6:2]] <= ID_EX_pc[31:7];
            end

            // pht, bhsr update
            if (prediction_taken) begin
                integer pht_entry = {27'b0, bhsr} ^ {27'b0, ID_EX_pc[6:2]};
                if ((pc_correct == ID_EX_pc + 4)) begin // not taken
                    case (pht[pht_entry])
                        2'b00 : pht[pht_entry] <= 2'b00;
                        2'b01 : pht[pht_entry] <= 2'b00;
                        2'b10 : pht[pht_entry] <= 2'b01;
                        2'b11 : pht[pht_entry] <= 2'b10;
                        default: pht[pht_entry] <= 2'b00;
                    endcase

                    bhsr <= {bhsr[3:0], 1'b0};
                end
                else begin // taken
                    case (pht[pht_entry])
                        2'b00 : pht[pht_entry] <= 2'b01;
                        2'b01 : pht[pht_entry] <= 2'b10;
                        2'b10 : pht[pht_entry] <= 2'b11;
                        2'b11 : pht[pht_entry] <= 2'b11;
                        default: pht[pht_entry] <= 2'b00;
                    endcase

                    bhsr <= {bhsr[3:0], 1'b1};
                end
            end
        end
    end


    
    
endmodule
