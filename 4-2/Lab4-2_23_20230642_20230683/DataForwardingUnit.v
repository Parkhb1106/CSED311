`include "opcodes.v"

module DataForwardingUnit (
    input is_ecall,
    input [31:0] ID_EX_rs1,
    input [31:0] ID_EX_rs2,
    input [31:0] EX_MEM_rd,
    input [31:0] MEM_WB_rd,
    input EX_MEM_reg_write,
    input MEM_WB_reg_write,
    input MEM_WB_mem_read,
    output reg [1:0] Forwarding_rs1,
    output reg [1:0] Forwarding_rs2,
    output reg [1:0] Forwarding_ecall);     // output

    always@(*) begin
        Forwarding_rs1 = 0;
        Forwarding_rs2 = 0;
        Forwarding_ecall = 0;
        if(ID_EX_rs1 != 0) begin
            if ((ID_EX_rs1 == EX_MEM_rd) && EX_MEM_reg_write) begin
                Forwarding_rs1 = 1;
            end
            else if ((ID_EX_rs1 == MEM_WB_rd) && MEM_WB_reg_write) begin
                Forwarding_rs1 = 2;
            end
        end
        if(ID_EX_rs2 != 0) begin
            if ((ID_EX_rs2 == EX_MEM_rd) && EX_MEM_reg_write) begin
                Forwarding_rs2 = 1;
            end
            else if ((ID_EX_rs2 == MEM_WB_rd) && MEM_WB_reg_write) begin
                Forwarding_rs2 = 2;
            end
        end
        if(is_ecall) begin
            if ((17 == EX_MEM_rd) && EX_MEM_reg_write) begin
                Forwarding_ecall = 1;
            end
            else if ((17 == MEM_WB_rd) && MEM_WB_reg_write) begin
                Forwarding_ecall = 2;
            end
        end
    end

endmodule
