// ---------- Immediate Generator ----------
module ImmediateGenerator (input [31:0] part_of_inst,  // input
                            output reg [31:0] imm_gen_out);    // output

  wire [6:0] opcode;
  assign opcode = part_of_inst[6:0];

  always @(*) begin
    case (opcode)
      `ARITHMETIC_IMM, `LOAD, `JALR: // I-type
        imm_gen_out = {{20{part_of_inst[31]}}, part_of_inst[31:20]}; 
        
      `STORE: // S-type
        imm_gen_out = {{20{part_of_inst[31]}}, part_of_inst[31:25], part_of_inst[11:7]}; 
        
      `BRANCH: // B-type
        imm_gen_out = {{19{part_of_inst[31]}}, part_of_inst[31], part_of_inst[7], part_of_inst[30:25], part_of_inst[11:8], 1'b0}; 
        
      `LUI, `AUIPC: // U-type
        imm_gen_out = {part_of_inst[31:12], 12'b0}; 
        
      `JAL: // J-type
        imm_gen_out = {{11{part_of_inst[31]}}, part_of_inst[31], part_of_inst[19:12], part_of_inst[20], part_of_inst[30:21], 1'b0}; 
        
      default: 
        imm_gen_out = 32'b0;
    endcase
  end

endmodule
