module BranchPredictionUnit (
    input reset,
    input clk,
    input [31:0] current_pc,
    input [31:0] ID_EX_pc,
    input [31:0] pc_correct,
    input prediction_sucess,
    output reg [31:0] pc_predict);     // output

    reg [24:0] tag_table [31:0];
    reg [31:0] btb [31:0];

    wire [31:0] current_pc_add_4_inBranchPrediction;
    wire [4:0] btb_idx;
    wire [24:0] tag;

    initial begin // Initialization of BTB   
        integer i;
        for (i = 0; i < 32; i = i + 1) begin
            btb[i] = 32'b0;
        end
    end

    add pc_4_adder(
    .A(current_pc),
    .B(32'b100),
    .C(current_pc_add_4_inBranchPrediction)
    );

    assign btb_idx = current_pc[6:2];
    assign tag = current_pc[31:7];

    always@(*) begin
        if((tag_table[btb_idx] == tag) && (btb[btb_idx] != 0)) begin
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
            end
        end
        else begin
            if ((prediction_sucess == 0) && (pc_correct != ID_EX_pc + 4)) begin // Update of BTB
                btb[ID_EX_pc[6:2]] <= pc_correct;
                tag_table[ID_EX_pc[6:2]] <= ID_EX_pc[31:7];
            end
        end
    end
    
    
endmodule
