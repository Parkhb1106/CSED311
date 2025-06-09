// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+42,0,"hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+43+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+79,0,"hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+112,0,"IF_ID_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"IF_ID_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"IF_ID_pc_add_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"ID_EX_alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"ID_EX_is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"ID_EX_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"ID_EX_is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"ID_EX_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"ID_EX_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"ID_EX_pc_or_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"ID_EX_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"ID_EX_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"ID_EX_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"ID_EX_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"ID_EX_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+127,0,"ID_EX_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+128,0,"ID_EX_funct7_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"ID_EX_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"ID_EX_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"ID_EX_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ID_EX_pc_add_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"ID_EX_is_halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"IF_ID_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"EX_MEM_is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"EX_MEM_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"EX_MEM_is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"EX_MEM_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"EX_MEM_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"EX_MEM_pc_or_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+142,0,"EX_MEM_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"EX_MEM_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"EX_MEM_alu_bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"EX_MEM_dmem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"EX_MEM_pc_add_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EX_MEM_pc_add_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"EX_MEM_is_halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"MEM_WB_pc_or_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+151,0,"MEM_WB_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"MEM_WB_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"MEM_WB_mem_to_reg_src_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"MEM_WB_mem_to_reg_src_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"MEM_WB_mem_to_reg_src_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"MEM_WB_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"MEM_WB_is_halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"is_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rs1_is_ten",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"pc_or_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+166,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"pc_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"pc_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"IF_ID_is_halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"alu_bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"ID_EX_halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"Forwarding_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+177,0,"Forwarding_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+178,0,"Forwarding_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+179,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"current_pc_add_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"imm_gen_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"mux_regwrite_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"mux_forwardrs2_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"mux_forwardrs1_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"mux_ecall_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"mux_pcsrc2_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"mux_ecall_forwarding_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"pc_imm_adder_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"mem_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"mem_write_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"reg_write_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"mux_alusrc_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"ID_EX_imm_sl1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"is_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"is_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"is_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"is_cache_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"pc_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"pc_predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"prediction_sucess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"IF_ID_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"ID_EX_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"IF_ID_pc_predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"ID_EX_pc_predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"ID_EX_is_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"prediction_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+214,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"alu_bcond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"FuncCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+221,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+222,0,"funct7_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("and_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+224,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("branch_prediction_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+227,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"ID_EX_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"pc_correct",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"prediction_sucess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"prediction_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"pc_predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("tag_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+235+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 24,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("btb", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+267+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pht", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+331,0,"bhsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+332,0,"current_pc_add_4_inBranchPrediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"btb_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+334,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+335,0,"idx_xor_bhsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("pc_4_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"pht_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+721,0,"LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"log2_NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"log2_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+341,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"is_input_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+344,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+345,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"is_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"is_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+351,0,"is_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+353,0,"hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+354,0,"is_data_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"is_data_mem_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+357,0,"bo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declArray(c+360,0,"data_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+364,0,"data_mem_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+368,0,"is_data_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"is_data_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+372,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+373,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+374,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+375,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+376,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+377,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+378,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+379,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+380,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+381,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+382,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+383,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+384,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+385,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+386,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+387,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+388,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+392,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+396,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+400,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dirty", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+404,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+408,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+412,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+416,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+420,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+424,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+428,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+432,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+436,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+440,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+444,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+448,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+452,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+456,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+460,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+464,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+468,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+472,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+476,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+480,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+484,0,"cache_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+485,0,"cache_update_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+489,0,"cache_update_dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"cache_update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+491,0,"mem_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+495,0,"is_data_mem_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"which_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+498,0,"which_set_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+499,0,"which_set_evict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+500,0,"check_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+502,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("LRU_bank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+503,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+504,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+505,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+506,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+507,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+508,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+509,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+510,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+511,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+512,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+513,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+514,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+515,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+516,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+517,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+518,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+519,0,"access_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+724,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+520,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"is_input_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+523,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+524,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+526,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+530,0,"is_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+531,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+535,0,"mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+536,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+537,0,"delay_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+538,0,"request_arrived",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+539,0,"part_of_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+540,0,"is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"is_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"pc_or_mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+548,0,"is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forwarding_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+549,0,"is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+550,0,"ID_EX_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+551,0,"ID_EX_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+552,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"MEM_WB_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+554,0,"EX_MEM_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"MEM_WB_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"MEM_WB_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"Forwarding_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+558,0,"Forwarding_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+559,0,"Forwarding_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hazarddectection_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+560,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+561,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+565,0,"ID_EX_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"EX_MEM_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"ID_EX_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"IF_ID_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"is_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+724,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+571,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+573,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+576,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"part_of_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"imm_gen_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_alusrc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+582,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_ecall", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+586,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_ecall_forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+590,0,"in_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"in_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_forwardrs1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,0,"in_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,0,"in_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+599,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_forwardrs2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"in_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"in_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_halt1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+726,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+606,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+607,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+608,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+609,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_halt2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+726,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+611,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+612,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+616,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_pcsrc1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+620,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+621,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_pcsrc2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+624,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+625,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_regwrite", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+627,0,"in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"in_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"in_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+631,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("or_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+632,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+635,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+637,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+638,0,"pc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+639,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_4_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+641,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_imm_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+645,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+646,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+649,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+650,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+651,0,"rd_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+652,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"rs1_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"rs2_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+655+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+687,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+688+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+720,(0x20U),32);
    bufp->fullIData(oldp+721,(0x10U),32);
    bufp->fullIData(oldp+722,(4U),32);
    bufp->fullIData(oldp+723,(2U),32);
    bufp->fullIData(oldp+724,(0x4000U),32);
    bufp->fullIData(oldp+725,(0x32U),32);
    bufp->fullIData(oldp+726,(1U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullBit(oldp+2,(vlSelfRef.clk));
    bufp->fullBit(oldp+3,(vlSelfRef.is_halted));
    bufp->fullIData(oldp+4,(vlSelfRef.miss_count),32);
    bufp->fullIData(oldp+5,(vlSelfRef.hit_count),32);
    bufp->fullIData(oldp+6,(vlSelfRef.print_reg[0]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.print_reg[1]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.print_reg[2]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.print_reg[3]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.print_reg[4]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.print_reg[5]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.print_reg[6]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.print_reg[7]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.print_reg[8]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.print_reg[9]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.print_reg[10]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.print_reg[11]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.print_reg[12]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.print_reg[13]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.print_reg[14]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.print_reg[15]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.print_reg[16]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.print_reg[17]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.print_reg[18]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.print_reg[19]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.print_reg[20]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.print_reg[21]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.print_reg[22]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.print_reg[23]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.print_reg[24]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.print_reg[25]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.print_reg[26]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.print_reg[27]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.print_reg[28]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.print_reg[29]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.print_reg[30]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.print_reg[31]),32);
    bufp->fullBit(oldp+38,(vlSelfRef.top__DOT__reset));
    bufp->fullBit(oldp+39,(vlSelfRef.top__DOT__clk));
    bufp->fullBit(oldp+40,(vlSelfRef.top__DOT__is_halted));
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__miss_count),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__hit_count),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__clk));
    bufp->fullBit(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__is_halted));
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__miss_count),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__cpu__DOT__hit_count),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc),32);
    bufp->fullIData(oldp+114,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_add_4),32);
    bufp->fullBit(oldp+115,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src));
    bufp->fullBit(oldp+116,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal));
    bufp->fullBit(oldp+117,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr));
    bufp->fullBit(oldp+118,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch));
    bufp->fullBit(oldp+119,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write));
    bufp->fullBit(oldp+120,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read));
    bufp->fullCData(oldp+121,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_or_mem_to_reg),2);
    bufp->fullBit(oldp+122,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write));
    bufp->fullIData(oldp+123,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data),32);
    bufp->fullIData(oldp+124,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data),32);
    bufp->fullIData(oldp+125,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm),32);
    bufp->fullCData(oldp+126,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode),7);
    bufp->fullCData(oldp+127,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3),3);
    bufp->fullBit(oldp+128,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct7_5));
    bufp->fullIData(oldp+129,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1),32);
    bufp->fullIData(oldp+130,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2),32);
    bufp->fullIData(oldp+131,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd),32);
    bufp->fullIData(oldp+132,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc),32);
    bufp->fullIData(oldp+133,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4),32);
    bufp->fullBit(oldp+134,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted));
    bufp->fullBit(oldp+135,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_write));
    bufp->fullBit(oldp+136,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_jal));
    bufp->fullBit(oldp+137,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_jalr));
    bufp->fullBit(oldp+138,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_branch));
    bufp->fullBit(oldp+139,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write));
    bufp->fullBit(oldp+140,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read));
    bufp->fullCData(oldp+141,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_or_mem_to_reg),2);
    bufp->fullBit(oldp+142,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write));
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result),32);
    bufp->fullBit(oldp+144,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_bcond));
    bufp->fullIData(oldp+145,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data),32);
    bufp->fullIData(oldp+146,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd),32);
    bufp->fullIData(oldp+147,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_imm),32);
    bufp->fullIData(oldp+148,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_4),32);
    bufp->fullBit(oldp+149,(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted));
    bufp->fullCData(oldp+150,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg),2);
    bufp->fullBit(oldp+151,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read));
    bufp->fullBit(oldp+152,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write));
    bufp->fullIData(oldp+153,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2),32);
    bufp->fullIData(oldp+156,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd),32);
    bufp->fullBit(oldp+157,(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted));
    bufp->fullBit(oldp+158,(vlSelfRef.top__DOT__cpu__DOT__is_stall));
    bufp->fullBit(oldp+159,(vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten));
    bufp->fullBit(oldp+160,(vlSelfRef.top__DOT__cpu__DOT__branch_taken));
    bufp->fullBit(oldp+161,(vlSelfRef.top__DOT__cpu__DOT__is_jal));
    bufp->fullBit(oldp+162,(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+163,(vlSelfRef.top__DOT__cpu__DOT__is_branch));
    bufp->fullBit(oldp+164,(vlSelfRef.top__DOT__cpu__DOT__alu_src));
    bufp->fullCData(oldp+165,(vlSelfRef.top__DOT__cpu__DOT__pc_or_mem_to_reg),2);
    bufp->fullBit(oldp+166,(vlSelfRef.top__DOT__cpu__DOT__pc_write));
    bufp->fullBit(oldp+167,(vlSelfRef.top__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+168,(vlSelfRef.top__DOT__cpu__DOT__mem_read));
    bufp->fullBit(oldp+169,(vlSelfRef.top__DOT__cpu__DOT__mem_write));
    bufp->fullBit(oldp+170,(vlSelfRef.top__DOT__cpu__DOT__pc_src1));
    bufp->fullBit(oldp+171,(vlSelfRef.top__DOT__cpu__DOT__pc_src2));
    bufp->fullBit(oldp+172,(vlSelfRef.top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+173,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_is_halted));
    bufp->fullBit(oldp+174,(vlSelfRef.top__DOT__cpu__DOT__alu_bcond));
    bufp->fullBit(oldp+175,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_halted));
    bufp->fullCData(oldp+176,(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1),2);
    bufp->fullCData(oldp+177,(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2),2);
    bufp->fullCData(oldp+178,(vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall),2);
    bufp->fullIData(oldp+179,(vlSelfRef.top__DOT__cpu__DOT__current_pc),32);
    bufp->fullIData(oldp+180,(vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4),32);
    bufp->fullIData(oldp+181,(vlSelfRef.top__DOT__cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+182,(vlSelfRef.top__DOT__cpu__DOT__read_data_1),32);
    bufp->fullIData(oldp+183,(vlSelfRef.top__DOT__cpu__DOT__read_data_2),32);
    bufp->fullIData(oldp+184,(vlSelfRef.top__DOT__cpu__DOT__instr),32);
    bufp->fullIData(oldp+185,(vlSelfRef.top__DOT__cpu__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+186,(vlSelfRef.top__DOT__cpu__DOT__alu_op),6);
    bufp->fullIData(oldp+187,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result),32);
    bufp->fullIData(oldp+188,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result),32);
    bufp->fullIData(oldp+189,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result),32);
    bufp->fullIData(oldp+190,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_result),32);
    bufp->fullIData(oldp+191,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result),32);
    bufp->fullIData(oldp+192,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding_result),32);
    bufp->fullIData(oldp+193,(vlSelfRef.top__DOT__cpu__DOT__alu_result),32);
    bufp->fullIData(oldp+194,(vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result),32);
    bufp->fullIData(oldp+195,(vlSelfRef.top__DOT__cpu__DOT__mem_dout),32);
    bufp->fullBit(oldp+196,(vlSelfRef.top__DOT__cpu__DOT__mem_write_final));
    bufp->fullBit(oldp+197,(vlSelfRef.top__DOT__cpu__DOT__reg_write_final));
    bufp->fullIData(oldp+198,(vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result),32);
    bufp->fullIData(oldp+199,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm_sl1),32);
    bufp->fullBit(oldp+200,(vlSelfRef.top__DOT__cpu__DOT__is_ready));
    bufp->fullBit(oldp+201,(vlSelfRef.top__DOT__cpu__DOT__is_output_valid));
    bufp->fullBit(oldp+202,(vlSelfRef.top__DOT__cpu__DOT__is_hit));
    bufp->fullBit(oldp+203,(vlSelfRef.top__DOT__cpu__DOT__is_cache_ready));
    bufp->fullIData(oldp+204,(vlSelfRef.top__DOT__cpu__DOT__pc_correct),32);
    bufp->fullIData(oldp+205,(vlSelfRef.top__DOT__cpu__DOT__pc_predict),32);
    bufp->fullBit(oldp+206,(vlSelfRef.top__DOT__cpu__DOT__prediction_sucess));
    bufp->fullBit(oldp+207,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_flush));
    bufp->fullBit(oldp+208,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush));
    bufp->fullIData(oldp+209,(vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_predict),32);
    bufp->fullIData(oldp+210,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_predict),32);
    bufp->fullBit(oldp+211,(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_stall));
    bufp->fullBit(oldp+212,(vlSelfRef.top__DOT__cpu__DOT__prediction_taken));
    bufp->fullCData(oldp+213,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op),6);
    bufp->fullIData(oldp+214,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__A),32);
    bufp->fullIData(oldp+215,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__B),32);
    bufp->fullIData(oldp+216,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__C),32);
    bufp->fullBit(oldp+217,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond));
    bufp->fullCData(oldp+218,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode),4);
    bufp->fullCData(oldp+219,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__btype),2);
    bufp->fullCData(oldp+220,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode),7);
    bufp->fullCData(oldp+221,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3),3);
    bufp->fullBit(oldp+222,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7_5));
    bufp->fullCData(oldp+223,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op),6);
    bufp->fullBit(oldp+224,(vlSelfRef.top__DOT__cpu__DOT__and___DOT__A));
    bufp->fullBit(oldp+225,(vlSelfRef.top__DOT__cpu__DOT__and___DOT__B));
    bufp->fullBit(oldp+226,(vlSelfRef.top__DOT__cpu__DOT__and___DOT__C));
    bufp->fullBit(oldp+227,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__reset));
    bufp->fullBit(oldp+228,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__clk));
    bufp->fullIData(oldp+229,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc),32);
    bufp->fullIData(oldp+230,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__ID_EX_pc),32);
    bufp->fullIData(oldp+231,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_correct),32);
    bufp->fullBit(oldp+232,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_sucess));
    bufp->fullBit(oldp+233,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_taken));
    bufp->fullIData(oldp+234,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_predict),32);
    bufp->fullIData(oldp+235,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0]),25);
    bufp->fullIData(oldp+236,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[1]),25);
    bufp->fullIData(oldp+237,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[2]),25);
    bufp->fullIData(oldp+238,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[3]),25);
    bufp->fullIData(oldp+239,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[4]),25);
    bufp->fullIData(oldp+240,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[5]),25);
    bufp->fullIData(oldp+241,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[6]),25);
    bufp->fullIData(oldp+242,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[7]),25);
    bufp->fullIData(oldp+243,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[8]),25);
    bufp->fullIData(oldp+244,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[9]),25);
    bufp->fullIData(oldp+245,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[10]),25);
    bufp->fullIData(oldp+246,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[11]),25);
    bufp->fullIData(oldp+247,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[12]),25);
    bufp->fullIData(oldp+248,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[13]),25);
    bufp->fullIData(oldp+249,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[14]),25);
    bufp->fullIData(oldp+250,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[15]),25);
    bufp->fullIData(oldp+251,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[16]),25);
    bufp->fullIData(oldp+252,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[17]),25);
    bufp->fullIData(oldp+253,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[18]),25);
    bufp->fullIData(oldp+254,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[19]),25);
    bufp->fullIData(oldp+255,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[20]),25);
    bufp->fullIData(oldp+256,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[21]),25);
    bufp->fullIData(oldp+257,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[22]),25);
    bufp->fullIData(oldp+258,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[23]),25);
    bufp->fullIData(oldp+259,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[24]),25);
    bufp->fullIData(oldp+260,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[25]),25);
    bufp->fullIData(oldp+261,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[26]),25);
    bufp->fullIData(oldp+262,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[27]),25);
    bufp->fullIData(oldp+263,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[28]),25);
    bufp->fullIData(oldp+264,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[29]),25);
    bufp->fullIData(oldp+265,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[30]),25);
    bufp->fullIData(oldp+266,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[31]),25);
    bufp->fullIData(oldp+267,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0]),32);
    bufp->fullIData(oldp+268,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[1]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[2]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[3]),32);
    bufp->fullIData(oldp+271,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[4]),32);
    bufp->fullIData(oldp+272,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[5]),32);
    bufp->fullIData(oldp+273,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[6]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[7]),32);
    bufp->fullIData(oldp+275,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[8]),32);
    bufp->fullIData(oldp+276,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[9]),32);
    bufp->fullIData(oldp+277,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[10]),32);
    bufp->fullIData(oldp+278,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[11]),32);
    bufp->fullIData(oldp+279,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[12]),32);
    bufp->fullIData(oldp+280,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[13]),32);
    bufp->fullIData(oldp+281,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[14]),32);
    bufp->fullIData(oldp+282,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[15]),32);
    bufp->fullIData(oldp+283,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[16]),32);
    bufp->fullIData(oldp+284,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[17]),32);
    bufp->fullIData(oldp+285,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[18]),32);
    bufp->fullIData(oldp+286,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[19]),32);
    bufp->fullIData(oldp+287,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[20]),32);
    bufp->fullIData(oldp+288,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[21]),32);
    bufp->fullIData(oldp+289,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[22]),32);
    bufp->fullIData(oldp+290,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[23]),32);
    bufp->fullIData(oldp+291,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[24]),32);
    bufp->fullIData(oldp+292,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[25]),32);
    bufp->fullIData(oldp+293,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[26]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[27]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[28]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[29]),32);
    bufp->fullIData(oldp+297,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[30]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[31]),32);
    bufp->fullCData(oldp+299,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0]),2);
    bufp->fullCData(oldp+300,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[1]),2);
    bufp->fullCData(oldp+301,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[2]),2);
    bufp->fullCData(oldp+302,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[3]),2);
    bufp->fullCData(oldp+303,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[4]),2);
    bufp->fullCData(oldp+304,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[5]),2);
    bufp->fullCData(oldp+305,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[6]),2);
    bufp->fullCData(oldp+306,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[7]),2);
    bufp->fullCData(oldp+307,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[8]),2);
    bufp->fullCData(oldp+308,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[9]),2);
    bufp->fullCData(oldp+309,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[10]),2);
    bufp->fullCData(oldp+310,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[11]),2);
    bufp->fullCData(oldp+311,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[12]),2);
    bufp->fullCData(oldp+312,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[13]),2);
    bufp->fullCData(oldp+313,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[14]),2);
    bufp->fullCData(oldp+314,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[15]),2);
    bufp->fullCData(oldp+315,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[16]),2);
    bufp->fullCData(oldp+316,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[17]),2);
    bufp->fullCData(oldp+317,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[18]),2);
    bufp->fullCData(oldp+318,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[19]),2);
    bufp->fullCData(oldp+319,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[20]),2);
    bufp->fullCData(oldp+320,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[21]),2);
    bufp->fullCData(oldp+321,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[22]),2);
    bufp->fullCData(oldp+322,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[23]),2);
    bufp->fullCData(oldp+323,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[24]),2);
    bufp->fullCData(oldp+324,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[25]),2);
    bufp->fullCData(oldp+325,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[26]),2);
    bufp->fullCData(oldp+326,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[27]),2);
    bufp->fullCData(oldp+327,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[28]),2);
    bufp->fullCData(oldp+328,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[29]),2);
    bufp->fullCData(oldp+329,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[30]),2);
    bufp->fullCData(oldp+330,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[31]),2);
    bufp->fullCData(oldp+331,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr),5);
    bufp->fullIData(oldp+332,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc_add_4_inBranchPrediction),32);
    bufp->fullCData(oldp+333,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx),5);
    bufp->fullIData(oldp+334,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag),25);
    bufp->fullCData(oldp+335,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__idx_xor_bhsr),5);
    bufp->fullIData(oldp+336,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__A),32);
    bufp->fullIData(oldp+337,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__B),32);
    bufp->fullIData(oldp+338,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__C),32);
    bufp->fullIData(oldp+339,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+340,(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry),32);
    bufp->fullBit(oldp+341,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset));
    bufp->fullBit(oldp+342,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk));
    bufp->fullBit(oldp+343,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_input_valid));
    bufp->fullIData(oldp+344,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__addr),32);
    bufp->fullBit(oldp+345,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read));
    bufp->fullBit(oldp+346,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write));
    bufp->fullIData(oldp+347,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__din),32);
    bufp->fullBit(oldp+348,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_ready));
    bufp->fullBit(oldp+349,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_output_valid));
    bufp->fullIData(oldp+350,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dout),32);
    bufp->fullBit(oldp+351,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_hit));
    bufp->fullIData(oldp+352,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_count),32);
    bufp->fullIData(oldp+353,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_count),32);
    bufp->fullBit(oldp+354,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready));
    bufp->fullBit(oldp+355,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid));
    bufp->fullCData(oldp+356,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__g),2);
    bufp->fullCData(oldp+357,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo),2);
    bufp->fullCData(oldp+358,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx),2);
    bufp->fullIData(oldp+359,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag),26);
    bufp->fullWData(oldp+360,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_block),128);
    bufp->fullWData(oldp+364,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout),128);
    bufp->fullBit(oldp+368,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read));
    bufp->fullBit(oldp+369,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write));
    bufp->fullCData(oldp+370,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state),2);
    bufp->fullCData(oldp+371,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state),2);
    bufp->fullIData(oldp+372,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][0U]),26);
    bufp->fullIData(oldp+373,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][1U]),26);
    bufp->fullIData(oldp+374,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][2U]),26);
    bufp->fullIData(oldp+375,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [0U][3U]),26);
    bufp->fullIData(oldp+376,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][0U]),26);
    bufp->fullIData(oldp+377,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][1U]),26);
    bufp->fullIData(oldp+378,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][2U]),26);
    bufp->fullIData(oldp+379,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [1U][3U]),26);
    bufp->fullIData(oldp+380,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][0U]),26);
    bufp->fullIData(oldp+381,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][1U]),26);
    bufp->fullIData(oldp+382,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][2U]),26);
    bufp->fullIData(oldp+383,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [2U][3U]),26);
    bufp->fullIData(oldp+384,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][0U]),26);
    bufp->fullIData(oldp+385,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][1U]),26);
    bufp->fullIData(oldp+386,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][2U]),26);
    bufp->fullIData(oldp+387,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                              [3U][3U]),26);
    bufp->fullBit(oldp+388,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+389,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+390,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+391,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+392,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+393,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+394,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+395,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [1U][3U]));
    bufp->fullBit(oldp+396,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][0U]));
    bufp->fullBit(oldp+397,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][1U]));
    bufp->fullBit(oldp+398,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][2U]));
    bufp->fullBit(oldp+399,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [2U][3U]));
    bufp->fullBit(oldp+400,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][0U]));
    bufp->fullBit(oldp+401,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][1U]));
    bufp->fullBit(oldp+402,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][2U]));
    bufp->fullBit(oldp+403,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                            [3U][3U]));
    bufp->fullBit(oldp+404,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][0U]));
    bufp->fullBit(oldp+405,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][1U]));
    bufp->fullBit(oldp+406,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][2U]));
    bufp->fullBit(oldp+407,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [0U][3U]));
    bufp->fullBit(oldp+408,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][0U]));
    bufp->fullBit(oldp+409,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][1U]));
    bufp->fullBit(oldp+410,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][2U]));
    bufp->fullBit(oldp+411,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [1U][3U]));
    bufp->fullBit(oldp+412,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][0U]));
    bufp->fullBit(oldp+413,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][1U]));
    bufp->fullBit(oldp+414,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][2U]));
    bufp->fullBit(oldp+415,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [2U][3U]));
    bufp->fullBit(oldp+416,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][0U]));
    bufp->fullBit(oldp+417,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][1U]));
    bufp->fullBit(oldp+418,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][2U]));
    bufp->fullBit(oldp+419,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                            [3U][3U]));
    bufp->fullWData(oldp+420,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][0U]),128);
    bufp->fullWData(oldp+424,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][1U]),128);
    bufp->fullWData(oldp+428,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][2U]),128);
    bufp->fullWData(oldp+432,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [0U][3U]),128);
    bufp->fullWData(oldp+436,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][0U]),128);
    bufp->fullWData(oldp+440,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][1U]),128);
    bufp->fullWData(oldp+444,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][2U]),128);
    bufp->fullWData(oldp+448,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [1U][3U]),128);
    bufp->fullWData(oldp+452,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][0U]),128);
    bufp->fullWData(oldp+456,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][1U]),128);
    bufp->fullWData(oldp+460,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][2U]),128);
    bufp->fullWData(oldp+464,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [2U][3U]),128);
    bufp->fullWData(oldp+468,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][0U]),128);
    bufp->fullWData(oldp+472,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][1U]),128);
    bufp->fullWData(oldp+476,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][2U]),128);
    bufp->fullWData(oldp+480,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                              [3U][3U]),128);
    bufp->fullBit(oldp+484,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update));
    bufp->fullWData(oldp+485,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data),128);
    bufp->fullBit(oldp+489,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty));
    bufp->fullBit(oldp+490,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid));
    bufp->fullWData(oldp+491,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din),128);
    bufp->fullBit(oldp+495,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid));
    bufp->fullIData(oldp+496,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr),32);
    bufp->fullCData(oldp+497,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set),2);
    bufp->fullCData(oldp+498,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit),2);
    bufp->fullCData(oldp+499,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict),2);
    bufp->fullBit(oldp+500,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit));
    bufp->fullIData(oldp+501,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i),32);
    bufp->fullIData(oldp+502,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j),32);
    bufp->fullIData(oldp+503,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [0U][0U]),32);
    bufp->fullIData(oldp+504,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [0U][1U]),32);
    bufp->fullIData(oldp+505,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [0U][2U]),32);
    bufp->fullIData(oldp+506,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [0U][3U]),32);
    bufp->fullIData(oldp+507,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [1U][0U]),32);
    bufp->fullIData(oldp+508,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [1U][1U]),32);
    bufp->fullIData(oldp+509,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [1U][2U]),32);
    bufp->fullIData(oldp+510,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [1U][3U]),32);
    bufp->fullIData(oldp+511,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [2U][0U]),32);
    bufp->fullIData(oldp+512,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [2U][1U]),32);
    bufp->fullIData(oldp+513,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [2U][2U]),32);
    bufp->fullIData(oldp+514,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [2U][3U]),32);
    bufp->fullIData(oldp+515,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [3U][0U]),32);
    bufp->fullIData(oldp+516,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [3U][1U]),32);
    bufp->fullIData(oldp+517,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [3U][2U]),32);
    bufp->fullIData(oldp+518,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                              [3U][3U]),32);
    bufp->fullBit(oldp+519,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__access_valid));
    bufp->fullBit(oldp+520,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset));
    bufp->fullBit(oldp+521,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk));
    bufp->fullBit(oldp+522,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid));
    bufp->fullIData(oldp+523,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr),32);
    bufp->fullBit(oldp+524,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read));
    bufp->fullBit(oldp+525,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write));
    bufp->fullWData(oldp+526,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din),128);
    bufp->fullBit(oldp+530,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid));
    bufp->fullWData(oldp+531,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout),128);
    bufp->fullBit(oldp+535,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready));
    bufp->fullIData(oldp+536,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i),32);
    bufp->fullIData(oldp+537,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter),32);
    bufp->fullBit(oldp+538,(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived));
    bufp->fullCData(oldp+539,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst),7);
    bufp->fullBit(oldp+540,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal));
    bufp->fullBit(oldp+541,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr));
    bufp->fullBit(oldp+542,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch));
    bufp->fullBit(oldp+543,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read));
    bufp->fullBit(oldp+544,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write));
    bufp->fullBit(oldp+545,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src));
    bufp->fullBit(oldp+546,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable));
    bufp->fullCData(oldp+547,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_or_mem_to_reg),2);
    bufp->fullBit(oldp+548,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall));
    bufp->fullBit(oldp+549,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__is_ecall));
    bufp->fullIData(oldp+550,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1),32);
    bufp->fullIData(oldp+551,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2),32);
    bufp->fullIData(oldp+552,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd),32);
    bufp->fullIData(oldp+553,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd),32);
    bufp->fullBit(oldp+554,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write));
    bufp->fullBit(oldp+555,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write));
    bufp->fullBit(oldp+556,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_mem_read));
    bufp->fullCData(oldp+557,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs1),2);
    bufp->fullCData(oldp+558,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs2),2);
    bufp->fullCData(oldp+559,(vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_ecall),2);
    bufp->fullCData(oldp+560,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__opcode),7);
    bufp->fullIData(oldp+561,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs1),32);
    bufp->fullIData(oldp+562,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs2),32);
    bufp->fullIData(oldp+563,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_rd),32);
    bufp->fullIData(oldp+564,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_rd),32);
    bufp->fullBit(oldp+565,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_mem_read));
    bufp->fullBit(oldp+566,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_mem_read));
    bufp->fullBit(oldp+567,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_reg_write));
    bufp->fullBit(oldp+568,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__pc_write));
    bufp->fullBit(oldp+569,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__IF_ID_write));
    bufp->fullBit(oldp+570,(vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__is_stall));
    bufp->fullBit(oldp+571,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__reset));
    bufp->fullBit(oldp+572,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__clk));
    bufp->fullIData(oldp+573,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr),32);
    bufp->fullIData(oldp+574,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout),32);
    bufp->fullIData(oldp+575,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i),32);
    bufp->fullIData(oldp+576,(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr),32);
    bufp->fullIData(oldp+577,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst),32);
    bufp->fullIData(oldp+578,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+579,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode),7);
    bufp->fullIData(oldp+580,(vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__in_1),32);
    bufp->fullIData(oldp+581,(vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__in_2),32);
    bufp->fullBit(oldp+582,(vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__ctrl));
    bufp->fullIData(oldp+583,(vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__out),32);
    bufp->fullIData(oldp+584,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__in_1),32);
    bufp->fullIData(oldp+585,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__in_2),32);
    bufp->fullBit(oldp+586,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__ctrl));
    bufp->fullIData(oldp+587,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__out),32);
    bufp->fullIData(oldp+588,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_1),32);
    bufp->fullIData(oldp+589,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_2),32);
    bufp->fullIData(oldp+590,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_3),32);
    bufp->fullIData(oldp+591,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_4),32);
    bufp->fullCData(oldp+592,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__ctrl),2);
    bufp->fullIData(oldp+593,(vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__out),32);
    bufp->fullIData(oldp+594,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_1),32);
    bufp->fullIData(oldp+595,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_2),32);
    bufp->fullIData(oldp+596,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_3),32);
    bufp->fullIData(oldp+597,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_4),32);
    bufp->fullCData(oldp+598,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__ctrl),2);
    bufp->fullIData(oldp+599,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__out),32);
    bufp->fullIData(oldp+600,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_1),32);
    bufp->fullIData(oldp+601,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_2),32);
    bufp->fullIData(oldp+602,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_3),32);
    bufp->fullIData(oldp+603,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_4),32);
    bufp->fullCData(oldp+604,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__ctrl),2);
    bufp->fullIData(oldp+605,(vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__out),32);
    bufp->fullBit(oldp+606,(vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__in_1));
    bufp->fullBit(oldp+607,(vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__in_2));
    bufp->fullBit(oldp+608,(vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__ctrl));
    bufp->fullBit(oldp+609,(vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__out));
    bufp->fullBit(oldp+610,(vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__in_1));
    bufp->fullBit(oldp+611,(vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__in_2));
    bufp->fullBit(oldp+612,(vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__ctrl));
    bufp->fullBit(oldp+613,(vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__out));
    bufp->fullIData(oldp+614,(vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__in_1),32);
    bufp->fullIData(oldp+615,(vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__in_2),32);
    bufp->fullBit(oldp+616,(vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__ctrl));
    bufp->fullIData(oldp+617,(vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__out),32);
    bufp->fullIData(oldp+618,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_1),32);
    bufp->fullIData(oldp+619,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_2),32);
    bufp->fullBit(oldp+620,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__ctrl));
    bufp->fullIData(oldp+621,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__out),32);
    bufp->fullIData(oldp+622,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_1),32);
    bufp->fullIData(oldp+623,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_2),32);
    bufp->fullBit(oldp+624,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__ctrl));
    bufp->fullIData(oldp+625,(vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__out),32);
    bufp->fullIData(oldp+626,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_1),32);
    bufp->fullIData(oldp+627,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_2),32);
    bufp->fullIData(oldp+628,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_3),32);
    bufp->fullIData(oldp+629,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_4),32);
    bufp->fullCData(oldp+630,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__ctrl),2);
    bufp->fullIData(oldp+631,(vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__out),32);
    bufp->fullBit(oldp+632,(vlSelfRef.top__DOT__cpu__DOT__or___DOT__A));
    bufp->fullBit(oldp+633,(vlSelfRef.top__DOT__cpu__DOT__or___DOT__B));
    bufp->fullBit(oldp+634,(vlSelfRef.top__DOT__cpu__DOT__or___DOT__C));
    bufp->fullBit(oldp+635,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset));
    bufp->fullBit(oldp+636,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk));
    bufp->fullIData(oldp+637,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc),32);
    bufp->fullBit(oldp+638,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__pc_write));
    bufp->fullIData(oldp+639,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc),32);
    bufp->fullIData(oldp+640,(vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__A),32);
    bufp->fullIData(oldp+641,(vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__B),32);
    bufp->fullIData(oldp+642,(vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__C),32);
    bufp->fullIData(oldp+643,(vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__A),32);
    bufp->fullIData(oldp+644,(vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__B),32);
    bufp->fullIData(oldp+645,(vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__C),32);
    bufp->fullBit(oldp+646,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset));
    bufp->fullBit(oldp+647,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk));
    bufp->fullCData(oldp+648,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1),5);
    bufp->fullCData(oldp+649,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2),5);
    bufp->fullCData(oldp+650,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd),5);
    bufp->fullIData(oldp+651,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din),32);
    bufp->fullBit(oldp+652,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable));
    bufp->fullIData(oldp+653,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout),32);
    bufp->fullIData(oldp+654,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout),32);
    bufp->fullIData(oldp+655,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+656,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+657,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+658,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+659,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+660,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+661,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+662,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+663,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+664,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+665,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+666,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+667,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+668,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+669,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+670,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+671,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+672,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+673,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+674,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+675,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+676,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+677,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+678,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+679,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+680,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+681,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+682,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+683,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+684,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+685,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+686,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+687,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i),32);
    bufp->fullIData(oldp+688,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+689,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+690,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+691,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+692,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+693,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+694,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+695,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+696,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+697,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+698,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+699,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+700,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+701,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+702,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+703,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+704,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+705,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+706,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+707,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+708,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+709,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+710,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+711,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+712,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+713,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+714,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+715,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+716,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+717,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+718,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+719,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
}
