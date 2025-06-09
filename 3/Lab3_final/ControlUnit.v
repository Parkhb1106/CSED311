`include "states.v"
`include "opcodes.v"

module ControlUnit (
        input reset,
        input clk,
        input [6:0] opcode,  // input (OPCODE)
        input alu_bcond,
        output reg pc_write_cond,
        output reg pc_write,
        output reg i_or_d,
        output reg mem_read,
        output reg mem_write,
        output reg mem_to_reg,
        output reg ir_write,
        output reg pc_source,
        output reg [1:0] alu_op,
        output reg alu_srcA,
        output reg [1:0] alu_srcB,
        output reg reg_write,
        output reg is_ecall
        // output reg pvs_written
        );

    reg [2:0] state;
    reg [2:0] next_state;

    always@(posedge clk) begin
        if (reset) begin
            state <= `IF;
        end

        else begin
            state <= next_state;
        end
    end

    always@(*) begin
        case (state)
            
            `IF: begin
                next_state = `ID;
            end

            `ID: begin
                if (opcode == `ECALL) begin
                    next_state = `IF;
                end
                else if (opcode == `JALR || opcode == `JAL) begin
                    next_state = `WB;
                end
                else begin
                    next_state = `EX1;
                end
            end

            `EX1: begin
                if (opcode == `BRANCH) begin // BRANCH taken
                    next_state = `EX2;
                end
                else if (opcode == `LOAD || opcode == `STORE) begin // LD & SD
                    next_state = `MEM;
                end
                else if (opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM) begin // I-type, R-type, JAL, JALR
                    next_state = `WB;
                end
                else begin
                    next_state = `IF;
                end
            end
                
            `EX2:
                next_state = `IF;

            `MEM: begin
                if (opcode == `LOAD) begin
                    next_state = `WB;
                end
                else begin // SD
                    next_state = `IF;
                end
            end

            `WB: begin
                if (opcode == `JALR || opcode == `JAL) begin // I-type, R-type, JAL, JALR
                    next_state = `IF;
                end
                else begin
                    next_state = `IF;
                end
            end

            default: 
                next_state = `IF;

        endcase
    end

    always @(*) begin
        mem_read=0; 
        mem_to_reg=0; 
        mem_write=0;
        pc_source=0; 
        pc_write =0; 
        pc_write_cond=0;
        alu_srcA=0; 
        alu_srcB=0; 
        alu_op = `ALU;
        i_or_d=0; 
        ir_write=0; 
        reg_write=0; 
        is_ecall=0; 
        
        case (state)    
            `IF: begin
                mem_read=1;
                ir_write=1;
                alu_op = `ALU_NOP;
            end

            `ID: begin
                // ALUOut = PC+4
                alu_srcA=0;   alu_srcB=1;
                alu_op = `ALU_ADD;
                if(opcode==`ECALL) begin
                    // PC=PC+4
                    alu_srcA = 0; alu_srcB = 1;
                    alu_op = `ALU_ADD;
                    pc_source = 0;
                    pc_write = 1;
                end
            end

            `EX1: begin
                case (opcode)
                    `ARITHMETIC: begin
                        // ALUOut = A+B
                        alu_srcA=1;   alu_srcB=0;
                        alu_op = `ALU;
                    end
                    `ARITHMETIC_IMM: begin
                        // ALUOut = A+Imm
                        alu_srcA=1;   alu_srcB=2;
                        alu_op = `ALU;
                    end
                    `LOAD, `STORE: begin
                        //ALUOut = A+Imm
                        alu_srcA=1;   alu_srcB=2;
                        alu_op = `ALU_ADD;
                    end
                    `BRANCH: begin
                        // calculate cond: A-B
                        alu_srcA=1;   alu_srcB=0;
                        alu_op = `ALU_SUB;
                    end
                    default: begin
                        alu_op = `ALU_NOP;
                    end
                endcase
            end

            `EX2: begin
                if(opcode==`BRANCH) begin
                    // PC = PC+Imm
                    alu_srcA=0;   alu_srcB=2;
                    if(alu_bcond==0) begin
                        // PC = PC+4
                        alu_srcB=1;
                    end
                    alu_op = `ALU_ADD;
                    pc_source=0;
                    pc_write=1;
                    pc_write_cond=1;
                end
            end

            `MEM: begin
                i_or_d=1;
                if(opcode==`LOAD) begin
                    // MDR = MEM[ALUOut]
                    mem_read=1;
                end
                if(opcode==`STORE) begin
                    // MEM[ALUOut] = B
                    mem_write=1;

                    // PC=PC+4
                    alu_srcA = 0; alu_srcB = 1;
                    alu_op = `ALU_ADD;
                    pc_source = 0;
                    pc_write = 1;
                end
            end

            `WB: begin
                case (opcode)
                    `ARITHMETIC,`ARITHMETIC_IMM: begin
                        // rd = ALUOut
                        reg_write = 1;
                        mem_to_reg = 0;

                        // PC=PC+4
                        alu_srcA = 0; alu_srcB = 1;
                        alu_op = `ALU_ADD;
                        pc_source = 0;
                        pc_write = 1;
                    end
                    `LOAD: begin
                        // rd = MDR
                        reg_write = 1;
                        mem_to_reg = 1;

                        // PC=PC+4
                        alu_srcA = 0; alu_srcB = 1;
                        alu_op = `ALU_ADD;
                        pc_source = 0;
                        pc_write = 1;
                    end
                    `JAL: begin 
                        // rd = ALUOut
                        reg_write = 1;
                        mem_to_reg = 0;
                        // PC = PC+Imm
                        alu_srcA=0;   alu_srcB=2;
                        alu_op = `ALU_ADD;
                        pc_source=0;
                        pc_write=1;
                    end
                    `JALR: begin
                        // rd = ALUOut
                        reg_write = 1;
                        mem_to_reg = 0;
                        // PC = A+Imm
                        alu_srcA=1;   alu_srcB=2;
                        alu_op = `ALU_ADD;
                        pc_source=0;
                        pc_write=1;
                    end
                    default: begin
                        alu_srcA=0;   alu_srcB=0;
                    end
                endcase
            end
            default: begin
                alu_srcA=0;   alu_srcB=0;
            end
        endcase

        is_ecall = (opcode == `ECALL);    
    end

endmodule

