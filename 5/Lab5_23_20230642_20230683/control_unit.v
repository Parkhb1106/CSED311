`include "opcodes.v"

module control_unit (
    input [6:0] part_of_inst ,  // input
    output reg is_jal,        // output
    output reg is_jalr,       // output
    output reg is_branch,        // output
    output reg mem_read,      // output
    output reg mem_write,     // output
    output reg alu_src,       // output
    output reg write_enable,  // output
    output reg [1:0] pc_or_mem_to_reg,     // output
    output reg is_ecall);     // output (ecall inst)

    always@(*) begin
        is_jal = (part_of_inst == `JAL);
        is_jalr = (part_of_inst == `JALR);
        is_branch = (part_of_inst == `BRANCH);
        mem_read = (part_of_inst == `LOAD);
        mem_write = (part_of_inst == `STORE);
        alu_src = ((part_of_inst != `ARITHMETIC) && (part_of_inst != `BRANCH));
        write_enable = ((part_of_inst != `STORE) && (part_of_inst != `BRANCH));
        if (part_of_inst == `JAL || part_of_inst == `JALR) begin
            pc_or_mem_to_reg = 2;
        end
        else if (part_of_inst == `LOAD) begin
            pc_or_mem_to_reg = 1;
        end
        else begin
            pc_or_mem_to_reg = 0;
        end
        is_ecall = (part_of_inst == `ECALL);
    end
    
endmodule


