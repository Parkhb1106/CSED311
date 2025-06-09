module BranchPredictionUnit (
    input clk,
    input [31:0] current_pc,
    input [31:0] pc_correct,
    input prediction_sucess,
    output reg [31:0] pc_predict);     // output

    wire [31:0] current_pc_add_4_inBranchPrediction;
    add pc_4_adder(
    .A(current_pc),
    .B(32'b100),
    .C(current_pc_add_4_inBranchPrediction)
    );

    always@(*) begin
        pc_predict = current_pc_add_4_inBranchPrediction;
    end

    always @(posedge clk) begin
    end
    
endmodule
