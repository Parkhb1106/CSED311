`include "opcodes.v"
`include "alu_func.v"

module alu_control_unit (
    input [6:0] opcode,
    input [2:0] funct3,
    input funct7_5,
    output reg [5:0] alu_op);

    always @(*) begin
        case (opcode)
            `ARITHMETIC: begin // R-Type
                if (funct7_5) begin
                    alu_op [5:2] = 4'b0001; // SUB
                end

                else begin
                    case (funct3) 
                        `FUNCT3_ADD: alu_op [5:2] = `FUNC_ADD;
                        `FUNCT3_AND: alu_op [5:2] = `FUNC_AND;
                        `FUNCT3_SLL: alu_op [5:2] = `FUNC_LLS;
                        `FUNCT3_XOR: alu_op [5:2] = `FUNC_XOR;
                        `FUNCT3_SRL: alu_op [5:2] = `FUNC_LRS;
                        `FUNCT3_OR: alu_op [5:2] = `FUNC_OR;
                        default: alu_op [5:2] = `FUNC_ID;
                    endcase
                end
            end

            `ARITHMETIC_IMM: begin // I-Type (Arithmetic_Immediate)
                case (funct3) 
                    `FUNCT3_ADD: alu_op [5:2] = `FUNC_ADD;
                    `FUNCT3_XOR: alu_op [5:2] = `FUNC_XOR;
                    `FUNCT3_OR: alu_op [5:2] = `FUNC_OR;
                    `FUNCT3_AND: alu_op [5:2] = `FUNC_AND;
                    `FUNCT3_SLL: alu_op [5:2] = `FUNC_LLS;
                    `FUNCT3_SRL: alu_op [5:2] = `FUNC_LRS;
                    default: alu_op [5:2] = `FUNC_ID;
                endcase
            end

            `LOAD, `STORE, `JALR: alu_op [5:2] = `FUNC_ADD;

            `BRANCH: begin
                alu_op [5:2] = 4'b0001; // SUB
                case (funct3)
                    `FUNCT3_BEQ: alu_op [1:0] = `EQ;
                    `FUNCT3_BNE: alu_op [1:0] = `NE;
                    `FUNCT3_BGE: alu_op [1:0] = `GE;
                    `FUNCT3_BLT: alu_op [1:0] = `LT;
                    default: alu_op [1:0] = `EQ; // Not Branch
                endcase
            end

            default: alu_op [5:0] = 6'b111111;
        endcase
    end

endmodule
