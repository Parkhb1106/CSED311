 `include "opcodes.v"

module HazardDetectionUnit (
    input [6:0] opcode ,  // input
    input [31:0] rs1,
    input [31:0] rs2,
    input [31:0] ID_EX_rd,
    input [31:0] EX_MEM_rd,
    input ID_EX_mem_read,
    input EX_MEM_mem_read,
    input ID_EX_reg_write,
    output reg pc_write,        // output
    output reg IF_ID_write,
    output reg is_stall);     // output

    always@(*) begin
        is_stall = 0;
        if(opcode == `ECALL) begin
            if (17 == ID_EX_rd && ID_EX_reg_write) begin
                is_stall = 1;
            end
            if (17 == EX_MEM_rd && EX_MEM_mem_read) begin
                is_stall = 1;
            end
        end
        else if(ID_EX_mem_read) begin
            if (rs1 == ID_EX_rd && (opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM || opcode == `LOAD || opcode == `STORE || opcode == `JALR || opcode == `BRANCH)) begin
                is_stall = 1;
            end
            if (rs2 == ID_EX_rd && (opcode == `ARITHMETIC || opcode == `STORE || opcode == `BRANCH)) begin
                is_stall = 1;
            end
        end

        pc_write = !is_stall;
        IF_ID_write = !is_stall;
    end

    
endmodule
