// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [31:0] IF_ID_inst;           // will be used in ID stage
  reg [31:0] IF_ID_pc;             // will be used in EX stage
  reg [31:0] IF_ID_pc_add_4;       // will be used in WB stage

  /***** ID/EX pipeline registers *****/
  // From the control unit
  //reg ID_EX_alu_op;         // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_is_jal;         // will be used in MEM stage
  reg ID_EX_is_jalr;        // will be used in MEM stage
  reg ID_EX_is_branch;      // will be used in MEM stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg [1:0] ID_EX_pc_or_mem_to_reg; // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [6:0] ID_EX_opcode;
  reg [2:0] ID_EX_funct3;
  reg ID_EX_funct7_5;
  reg [31:0] ID_EX_rs1;
  reg [31:0] ID_EX_rs2;
  reg [31:0] ID_EX_rd;
  reg [31:0] ID_EX_pc;             // will be used in EX stage
  reg [31:0] ID_EX_pc_add_4;       // will be used in WB stage
  reg ID_EX_is_halted;

  reg IF_ID_write;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_is_jal;        // will be used in MEM stage
  reg EX_MEM_is_jalr;       // will be used in MEM stage
  reg EX_MEM_is_branch;     // will be used in MEM stage
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg [1:0] EX_MEM_pc_or_mem_to_reg; // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] EX_MEM_alu_result;
  reg EX_MEM_alu_bcond;
  reg [31:0] EX_MEM_dmem_data;
  reg [31:0] EX_MEM_rd;
  reg [31:0] EX_MEM_pc_add_imm;
  reg [31:0] EX_MEM_pc_add_4;
  reg EX_MEM_is_halted;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg [1:0] MEM_WB_pc_or_mem_to_reg; // will be used in WB stage
  reg MEM_WB_mem_read;      // will be used in MEM stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_0;
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_mem_to_reg_src_2;
  reg [31:0] MEM_WB_rd;
  reg MEM_WB_is_halted;

  reg is_stall;
  reg rs1_is_ten;
  reg branch_taken;

  wire is_jal;
  wire is_jalr;
  wire is_branch;
  wire alu_src;
  wire [1:0] pc_or_mem_to_reg;
  wire pc_write;
  wire reg_write;
  wire mem_read;
  wire mem_write;
  wire pc_src1;
  wire pc_src2;
  wire is_ecall;
  wire IF_ID_is_halted;

  wire alu_bcond;
  wire ID_EX_halted;
  wire [1:0] Forwarding_rs1;
  wire [1:0] Forwarding_rs2;
  wire [1:0] Forwarding_ecall;
  wire [31:0] current_pc;
  wire [31:0] current_pc_add_4;
  wire [31:0] next_pc;
  wire [31:0] read_data_1;
  wire [31:0] read_data_2;
  wire [31:0] instr;
  wire [31:0] imm_gen_out;
  wire [5:0] alu_op;
  wire [31:0] mux_regwrite_result;
  wire [31:0] mux_forwardrs2_result;
  wire [31:0] mux_forwardrs1_result;
  wire [31:0] mux_ecall_result;
  wire [31:0] mux_pcsrc2_result;
  wire [31:0] mux_ecall_forwarding_result;
  wire [31:0] alu_result;
  wire [31:0] pc_imm_adder_result;
  wire [31:0] mem_dout;

  wire mem_write_final;
  wire reg_write_final;
  wire [31:0] mux_alusrc_result;
  wire [31:0] ID_EX_imm_sl1;

  assign is_halted = MEM_WB_is_halted;

  /***** For control hazard *****/
  wire [31:0] pc_correct;
  wire [31:0] pc_predict;
  reg prediction_sucess;
  wire IF_ID_flush;
  wire ID_EX_flush;
  reg [31:0] IF_ID_pc_predict;
  reg [31:0] ID_EX_pc_predict;
  reg ID_EX_is_stall;

  BranchPredictionUnit branch_prediction_unit(
    .clk (clk),        // input
    .current_pc(current_pc),
    .pc_correct(pc_correct),
    .prediction_sucess(prediction_sucess),
    .pc_predict(pc_predict)
  );

  mux_2x1 mux_pc(
    .in_1(pc_correct),
    .in_2(pc_predict),
    .ctrl(prediction_sucess),
    .out(next_pc)
  );

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .pc_write(pc_write),
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(instr)     // output
  );

  add pc_4_adder(
    .A(current_pc),
    .B(32'b100),
    .C(current_pc_add_4)
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
    if (reset || IF_ID_flush) begin
      IF_ID_inst <= 0;           
      IF_ID_pc <= 0;             
      IF_ID_pc_add_4 <= 0;   
      IF_ID_pc_predict <= 0;   
    end
    else if (IF_ID_write) begin
      IF_ID_inst <= instr;
      IF_ID_pc <= current_pc;
      IF_ID_pc_add_4 <= current_pc_add_4;
      IF_ID_pc_predict <= pc_predict;
    end
  end

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (mux_ecall_result[4:0]),          // input
    .rs2 (IF_ID_inst[24:20]),          // input
    .rd (MEM_WB_rd[4:0]),           // input
    .rd_din (mux_regwrite_result),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (read_data_1),     // output
    .rs2_dout (read_data_2),      // output
    .print_reg(print_reg)
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(IF_ID_inst[6:0]),  // input
    .is_jal(is_jal),
    .is_jalr(is_jalr),
    .is_branch(is_branch),
    .mem_read(mem_read),      // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(reg_write),  // output
    .pc_or_mem_to_reg(pc_or_mem_to_reg),
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  HazardDetectionUnit hazarddectection_unit (
    .opcode(IF_ID_inst[6:0]),
    .rs1({27'b0, IF_ID_inst[19:15]}),
    .rs2({27'b0, IF_ID_inst[24:20]}),
    .ID_EX_rd(ID_EX_rd),
    .EX_MEM_rd(EX_MEM_rd),
    .ID_EX_mem_read(ID_EX_mem_read),
    .EX_MEM_mem_read(EX_MEM_mem_read),
    .ID_EX_reg_write(ID_EX_reg_write),
    .pc_write(pc_write),
    .IF_ID_write(IF_ID_write),
    .is_stall(is_stall)
  );

  mux_2x1 #(.data_width(1)) mux_halt1(
    .in_1(mem_write),
    .in_2(0),
    .ctrl(is_stall),
    .out(mem_write_final)
  );

  mux_2x1 #(.data_width(1)) mux_halt2(
    .in_1(reg_write),
    .in_2(0),
    .ctrl(is_stall),
    .out(reg_write_final)
  );
  
  mux_2x1 mux_ecall(
    .in_1({27'b0, IF_ID_inst[19:15]}),
    .in_2(32'b10001), // rs1
    .ctrl(is_ecall),
    .out(mux_ecall_result)
  );

  mux_4x1 mux_ecall_forwarding(
    .in_1(read_data_1),
    .in_2(EX_MEM_alu_result),
    .in_3(mux_regwrite_result),
    .in_4(0),
    .ctrl(Forwarding_ecall),
    .out(mux_ecall_forwarding_result)
  );
  
  always @(*) begin
    if (mux_ecall_forwarding_result == 10) begin
      rs1_is_ten = 1;
    end
    else begin
      rs1_is_ten = 0;
    end
  end

  and_gate and_(
    .A(is_ecall),
    .B(rs1_is_ten),
    .C(IF_ID_is_halted)
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset || ID_EX_flush) begin
      ID_EX_alu_src <= 0;        
      ID_EX_is_jal <= 0;         
      ID_EX_is_jalr <= 0;        
      ID_EX_is_branch <= 0;      
      ID_EX_mem_write <= 0;      
      ID_EX_mem_read <= 0;       
      ID_EX_pc_or_mem_to_reg <= 0; 
      ID_EX_reg_write <= 0; 

      ID_EX_rs1_data <= 0;
      ID_EX_rs2_data <= 0;
      ID_EX_imm <= 0;
      ID_EX_opcode <= 0;
      ID_EX_funct3 <= 0;
      ID_EX_funct7_5 <= 0;
      ID_EX_rs1 <= 0;
      ID_EX_rs2 <= 0;
      ID_EX_rd <= 0;
      ID_EX_pc <= 0;             
      ID_EX_pc_add_4 <= 0;
      ID_EX_is_halted <= 0;   
      ID_EX_pc_predict <= 0;   

      ID_EX_is_stall <= 0;
    end

    else begin
      ID_EX_alu_src <= alu_src;        
      ID_EX_is_jal <= is_jal;         
      ID_EX_is_jalr <= is_jalr;        
      ID_EX_is_branch <= is_branch;      
      ID_EX_mem_write <= mem_write_final;      
      ID_EX_mem_read <= mem_read;       
      ID_EX_pc_or_mem_to_reg <= pc_or_mem_to_reg; 
      ID_EX_reg_write <= reg_write_final;

      ID_EX_rs1_data <= read_data_1;
      ID_EX_rs2_data <= read_data_2;
      ID_EX_imm <= imm_gen_out;
      ID_EX_opcode <= IF_ID_inst[6:0];
      ID_EX_funct3 <= IF_ID_inst[14:12];
      ID_EX_funct7_5 <= IF_ID_inst[30];

      ID_EX_rs1 <= {27'b0, IF_ID_inst[19:15]};
      ID_EX_rs2 <= {27'b0, IF_ID_inst[24:20]};
      ID_EX_rd <= {27'b0, IF_ID_inst[11:7]};
      ID_EX_pc <= IF_ID_pc;             
      ID_EX_pc_add_4 <= IF_ID_pc_add_4;  
      ID_EX_is_halted <= IF_ID_is_halted;
      ID_EX_pc_predict <= IF_ID_pc_predict;

      ID_EX_is_stall <= is_stall;
    end
  end

  always @(*) begin
    if (ID_EX_is_branch && alu_bcond) begin
      branch_taken = 1;
    end
    else begin
      branch_taken = 0;
    end
  end  

  or_gate or_(
    .A(ID_EX_is_jal),
    .B(branch_taken),
    .C(pc_src1)
  );

  mux_2x1 mux_pcsrc1(
    .in_1(mux_pcsrc2_result),
    .in_2(pc_imm_adder_result),
    .ctrl(pc_src1),
    .out(pc_correct)
  );

  mux_2x1 mux_pcsrc2(
    .in_1(ID_EX_pc_add_4),
    .in_2(alu_result),
    .ctrl(ID_EX_is_jalr),
    .out(mux_pcsrc2_result)
  );

  always @(*) begin
    if (pc_correct == ID_EX_pc_predict || ID_EX_is_stall) begin
      prediction_sucess = 1;
    end
    else begin
      prediction_sucess = 0;
    end
  end

  assign IF_ID_flush = !prediction_sucess;
  assign ID_EX_flush = !prediction_sucess;

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode(ID_EX_opcode),  // input
    .funct3(ID_EX_funct3),
    .funct7_5(ID_EX_funct7_5),
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .A(mux_forwardrs1_result),    // input  
    .B(mux_alusrc_result),    // input
    .C(alu_result),  // output
    .alu_bcond(alu_bcond) // output
  );

  DataForwardingUnit forwarding_unit(
    .is_ecall(is_ecall),
    .ID_EX_rs1(ID_EX_rs1),
    .ID_EX_rs2(ID_EX_rs2),
    .EX_MEM_rd(EX_MEM_rd),
    .MEM_WB_rd(MEM_WB_rd),
    .EX_MEM_reg_write(EX_MEM_reg_write),
    .MEM_WB_reg_write(MEM_WB_reg_write),
    .MEM_WB_mem_read(MEM_WB_mem_read),
    .Forwarding_rs1(Forwarding_rs1),
    .Forwarding_rs2(Forwarding_rs2),
    .Forwarding_ecall(Forwarding_ecall)
  );

  mux_4x1 mux_forwardrs1(
    .in_1(ID_EX_rs1_data),
    .in_2(EX_MEM_alu_result),
    .in_3(mux_regwrite_result),
    .in_4(0),
    .ctrl(Forwarding_rs1),
    .out(mux_forwardrs1_result)
  );

  mux_4x1 mux_forwardrs2(
    .in_1(ID_EX_rs2_data),
    .in_2(EX_MEM_alu_result),
    .in_3(mux_regwrite_result),
    .in_4(0),
    .ctrl(Forwarding_rs2),
    .out(mux_forwardrs2_result)
  );

  mux_2x1 mux_alusrc(
    .in_1(mux_forwardrs2_result),
    .in_2(ID_EX_imm),
    .ctrl(ID_EX_alu_src),
    .out(mux_alusrc_result)
  );

  assign ID_EX_imm_sl1 = ID_EX_imm << 1;

  add pc_imm_adder(
    .A(ID_EX_pc),
    .B(ID_EX_imm),
    .C(pc_imm_adder_result)
  );


  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_is_jal <= 0;        
      EX_MEM_is_jalr <= 0;      
      EX_MEM_is_branch <= 0;    
      EX_MEM_mem_write <= 0;    
      EX_MEM_mem_read <= 0;      
      EX_MEM_is_branch <= 0;   
      EX_MEM_pc_or_mem_to_reg <= 0;
      EX_MEM_reg_write <= 0;     
     
      EX_MEM_alu_result <= 0;
      EX_MEM_alu_bcond <= 0;
      EX_MEM_dmem_data <= 0;
      EX_MEM_rd <= 0;
      EX_MEM_pc_add_imm <= 0;
      EX_MEM_pc_add_4 <= 0;
      EX_MEM_is_halted <= 0;
    end
    else begin
      EX_MEM_is_jal <= ID_EX_is_jal;        
      EX_MEM_is_jalr <= ID_EX_is_jalr;      
      EX_MEM_is_branch <= ID_EX_is_branch;    
      EX_MEM_mem_write <= ID_EX_mem_write;   
      EX_MEM_mem_read <= ID_EX_mem_read;
      EX_MEM_pc_or_mem_to_reg <= ID_EX_pc_or_mem_to_reg;
      EX_MEM_reg_write <= ID_EX_reg_write;
     
      EX_MEM_alu_result <= alu_result;
      EX_MEM_alu_bcond <= alu_bcond;
      EX_MEM_dmem_data <= mux_forwardrs2_result;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_pc_add_imm <= pc_imm_adder_result;
      EX_MEM_pc_add_4 <= ID_EX_pc_add_4;
      EX_MEM_is_halted <= ID_EX_is_halted;
    end
  end

  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (EX_MEM_alu_result),     // input
    .din (EX_MEM_dmem_data),       // input
    .mem_read (EX_MEM_mem_read),   // input
    .mem_write (EX_MEM_mem_write),  // input
    .dout (mem_dout)        // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_pc_or_mem_to_reg <= 0; 
      MEM_WB_reg_write <= 0;
      MEM_WB_mem_read <= 0;
      
      MEM_WB_mem_to_reg_src_0 <= 0;
      MEM_WB_mem_to_reg_src_1 <= 0;
      MEM_WB_mem_to_reg_src_2 <= 0;
      MEM_WB_rd <= 0;
      MEM_WB_is_halted <= 0;
    end
    else begin
      MEM_WB_pc_or_mem_to_reg <= EX_MEM_pc_or_mem_to_reg; 
      MEM_WB_reg_write <= EX_MEM_reg_write;
      MEM_WB_mem_read <= EX_MEM_mem_read;
      
      MEM_WB_mem_to_reg_src_0 <= EX_MEM_alu_result;
      MEM_WB_mem_to_reg_src_1 <= mem_dout;
      MEM_WB_mem_to_reg_src_2 <= EX_MEM_pc_add_4;
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_is_halted <= EX_MEM_is_halted;
    end
  end

  mux_4x1 mux_regwrite(
    .in_1(MEM_WB_mem_to_reg_src_0),
    .in_2(MEM_WB_mem_to_reg_src_1),
    .in_3(MEM_WB_mem_to_reg_src_2),
    .in_4(0),
    .ctrl(MEM_WB_pc_or_mem_to_reg),
    .out(mux_regwrite_result)
  );

  
endmodule

