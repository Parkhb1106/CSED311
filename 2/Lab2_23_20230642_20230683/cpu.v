// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)

  /***** Wire declarations *****/
wire [31:0] next_pc_nj;

wire clk_and_ishalted;
wire not_is_halted;

wire [31:0] instr;

wire is_jal;
wire is_jalr;
wire branch;
wire mem_read;
wire mem_to_reg;
wire mem_write;
wire alu_src;
wire write_enable;
wire pc_to_reg;
wire is_ecall;

wire [31:0] read_data_1;
wire [31:0] read_data_2;
wire [31:0] alu_result;
wire [5:0] alu_op;
wire alu_bcond;
wire [31:0] mux_1_result;
wire [31:0] mux_3_result;
wire [31:0] mux_4_result;
wire [31:0] mux_5_result;
wire [31:0] mem_dout;
wire [31:0] imm_gen_out;
wire [31:0] jump_adder_result;

wire pc_src1;
wire and_result;

wire [31:0] current_pc;
wire [31:0] next_pc;


  /***** Register declarations *****/


  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk_and_ishalted),         // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk_and_ishalted),     // input
    .addr(current_pc),    // input
    .dout(instr)     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk_and_ishalted),          // input
    .rs1 (instr[19:15]),          // input
    .rs2 (instr[24:20]),          // input
    .rd (instr[11:7]),           // input
    .rd_din (mux_3_result),       // input
    .write_enable (write_enable), // input
    .is_ecall(is_ecall),
    .rs1_dout (read_data_1),     // output
    .rs2_dout (read_data_2),     // output
    .print_reg (print_reg),  //DO NOT TOUCH THIS
    .is_halted (is_halted)
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(instr[6:0]),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(instr),  // input
    .imm_gen_out(imm_gen_out)    // output
  );



  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode(instr[6:0]),		//input
    .funct3(instr[14:12]),
    .funct7_5(instr[30]),
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .A(read_data_1),    // input  
    .B(mux_4_result),    // input
    .C(alu_result),  // output
    .alu_bcond(alu_bcond)    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk_and_ishalted),        // input
    .addr (alu_result),       // input
    .din (read_data_2),        // input
    .mem_read (mem_read),   // input
    .mem_write (mem_write),  // input
    .dout (mem_dout)        // output
  );

 // ---------- OR ----------
  or_gate or_(
    .A (is_jal),      // input
    .B (and_result),        // input
    .C (pc_src1)      // output
  );

 // ---------- AND ----------
  and_gate and_(
    .A (branch),      // input
    .B (alu_bcond),        // input
    .C (and_result)       // output
  );

  add pc_adder(
    .A(current_pc),      // input
    .B(32'b100),      // input
    .C(next_pc_nj)       // output
  );

  add jump_adder(
    .A(current_pc),      // input
    .B(imm_gen_out),      // input
    .C(jump_adder_result)       // output
  );

  mux  mux1(
    .in_1(jump_adder_result),      // input 1
    .in_2(next_pc_nj),      // input 0
    .ctrl(pc_src1),      // input
    .out(mux_1_result)       // output
  );

  mux  mux2(
    .in_1(alu_result),      // input 1
    .in_2(mux_1_result),      // input 0
    .ctrl(is_jalr),      // input
    .out(next_pc)       // output
  );

  mux  mux3(
    .in_1(next_pc_nj),      // input 1
    .in_2(mux_5_result),      // input 0
    .ctrl(pc_to_reg),      // input
    .out(mux_3_result)       // output
  );

  mux  mux4(
    .in_1(imm_gen_out),      // input 1
    .in_2(read_data_2),      // input 0
    .ctrl(alu_src),      // input
    .out(mux_4_result)       // output
  );

  mux  mux5(
    .in_1(mem_dout),      // input 1
    .in_2(alu_result),      // input 0
    .ctrl(mem_to_reg),      // input
    .out(mux_5_result)       // output
  );

 // ---------- AND ----------
  and_gate calcul_clk(
    .A (clk),      // input
    .B (not_is_halted),        // input
    .C (clk_and_ishalted)       // output
  );

 // ---------- AND ----------
  not_gate not_(
    .A (is_halted),      // input
    .B (not_is_halted)        // output
  );

endmodule
