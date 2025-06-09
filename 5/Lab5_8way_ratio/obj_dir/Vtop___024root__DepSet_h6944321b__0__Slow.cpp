// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__B = 4U;
    vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__B = 4U;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__in_2 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__in_2 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__in_2 = 0x11U;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_4 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_4 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_4 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_4 = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h37edc241_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha12b071a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hff6fb0c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6d51447d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h675ff796_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h0ed44f5c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h3c40c180_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h81d70658_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h621af196_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__ID_EX_pc 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__A 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd 
                    >> 0U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__in_1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__or___DOT__A = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7_5 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct7_5;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm;
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__A 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__B 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__din = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state)))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 2U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 3U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 4U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 5U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 6U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 7U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 8U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 2U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 3U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 4U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 5U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 6U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 7U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 8U;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_3 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm_sl1 = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm, 1U);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__g = (3U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result);
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__read_data_2 = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelfRef.top__DOT__cpu__DOT__prediction_taken 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
              | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)));
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.miss_count = vlSelfRef.top__DOT__cpu__DOT__cache__DOT___miss_count;
    vlSelfRef.hit_count = vlSelfRef.top__DOT__cpu__DOT__cache__DOT___hit_count;
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag 
        = (vlSelfRef.top__DOT__cpu__DOT__current_pc 
           >> 7U);
    vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4 
        = ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__current_pc);
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                    >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result 
        = (vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm 
           + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag = 
        (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
         >> 5U);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo = 
        (3U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
               >> 2U));
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx = 
        (1U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
               >> 4U));
    vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1 = 0U;
    if ((0U != vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1)) {
        if (((vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 
              == vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1 = 1U;
        } else if (((vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 
                     == vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd) 
                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1 = 2U;
        }
        if (((vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 
              == vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1 = 2U;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2 = 0U;
    if ((0U != vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2)) {
        if (((vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 
              == vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2 = 1U;
        } else if (((vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 
                     == vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd) 
                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2 = 2U;
        }
        if (((vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 
              == vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2 = 2U;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
    vlSelfRef.top__DOT__cpu__DOT__is_ready = (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_op = 0x3fU;
            } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_op = 0x3fU;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_op 
                    = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                            ? (3U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            : 0x3fU) : 0x3fU);
            } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))) {
                    vlSelfRef.top__DOT__cpu__DOT__alu_op 
                        = (4U | (3U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)));
                    vlSelfRef.top__DOT__cpu__DOT__alu_op 
                        = ((0x3cU & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)) 
                           | ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                               ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                   ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                            ? 2U : 3U))
                               : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                   ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                            ? 1U : 0U))));
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_op = 0x3fU;
                }
            } else {
                vlSelfRef.top__DOT__cpu__DOT__alu_op = 0x3fU;
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__alu_op = 0x3fU;
        }
    } else {
        vlSelfRef.top__DOT__cpu__DOT__alu_op = ((0x20U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                   ? 0x3fU
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                    ? 0x3fU
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                      ? 
                                                     ((3U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)) 
                                                      | (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct7_5)
                                                           ? 1U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                              ? 4U
                                                              : 5U)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                              ? 0xbU
                                                              : 8U))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                             ? 2U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                              ? 0xaU
                                                              : 0U)))) 
                                                         << 2U))
                                                      : 0x3fU)
                                                     : 0x3fU)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                   ? 0x3fU
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                    ? 0x3fU
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                      ? 
                                                     (3U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                      : 0x3fU)
                                                     : 0x3fU))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                   ? 0x3fU
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                    ? 0x3fU
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                      ? 
                                                     ((3U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)) 
                                                      | (((4U 
                                                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                             ? 4U
                                                             : 5U)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                             ? 0xbU
                                                             : 8U))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                            ? 2U
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3))
                                                             ? 0xaU
                                                             : 0U))) 
                                                         << 2U))
                                                      : 0x3fU)
                                                     : 0x3fU)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                   ? 0x3fU
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                    ? 0x3fU
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode))
                                                      ? 
                                                     (3U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                                                      : 0x3fU)
                                                     : 0x3fU)))));
    }
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg))
            ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg))
                ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg))
                    ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
                    : 0U)));
    vlSelfRef.print_reg[0U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelfRef.print_reg[1U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelfRef.print_reg[2U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelfRef.print_reg[3U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelfRef.print_reg[4U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelfRef.print_reg[5U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelfRef.print_reg[6U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelfRef.print_reg[7U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelfRef.print_reg[8U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelfRef.print_reg[9U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelfRef.print_reg[0xaU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelfRef.print_reg[0xbU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelfRef.print_reg[0xcU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelfRef.print_reg[0xdU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelfRef.print_reg[0xeU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelfRef.print_reg[0xfU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelfRef.print_reg[0x10U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelfRef.print_reg[0x11U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelfRef.print_reg[0x12U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelfRef.print_reg[0x13U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelfRef.print_reg[0x14U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelfRef.print_reg[0x15U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelfRef.print_reg[0x16U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelfRef.print_reg[0x17U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelfRef.print_reg[0x18U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelfRef.print_reg[0x19U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelfRef.print_reg[0x1aU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelfRef.print_reg[0x1bU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelfRef.print_reg[0x1cU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelfRef.print_reg[0x1dU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelfRef.print_reg[0x1eU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelfRef.print_reg[0x1fU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__A 
        = vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__read_data_2;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_taken 
        = vlSelfRef.top__DOT__cpu__DOT__prediction_taken;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__instr = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelfRef.top__DOT__miss_count = vlSelfRef.miss_count;
    vlSelfRef.top__DOT__hit_count = vlSelfRef.hit_count;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__C 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc_add_4_inBranchPrediction 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__idx_xor_bhsr 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr) 
           ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx));
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__C 
        = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = ((0x40U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 0x1fU))) 
                                                          << 0x15U) 
                                                         | (0x100000U 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0xbU))) 
                                                        | (((0xff000U 
                                                             & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst) 
                                                            | (0x800U 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 9U))) 
                                                           | (0x7feU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                 >> 0x14U))))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xdU) 
                                                        | (((0x1000U 
                                                             & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                >> 0x13U)) 
                                                            | (0x800U 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                  << 4U))) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                    >> 7U)))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U))))));
    vlSelfRef.top__DOT__cpu__DOT__is_stall = 0U;
    if ((0x73U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if (((0x11U == vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__is_stall = 1U;
        }
        if (((0x11U == vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read))) {
            vlSelfRef.top__DOT__cpu__DOT__is_stall = 1U;
        }
    } else if (vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read) {
        if ((((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
             & ((((((0x33U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                    | (0x13U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                   | (3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                  | (0x23U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                 | (0x67U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                | (0x63U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))))) {
            vlSelfRef.top__DOT__cpu__DOT__is_stall = 1U;
        }
        if ((((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x14U)) == vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
             & (((0x33U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                 | (0x23U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                | (0x63U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))))) {
            vlSelfRef.top__DOT__cpu__DOT__is_stall = 1U;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__pc_write = (1U & 
                                              (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)));
    vlSelfRef.top__DOT__cpu__DOT__IF_ID_write = (1U 
                                                 & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)));
    __Vtableidx1 = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__is_jal = Vtop__ConstPool__TABLE_h37edc241_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_jalr = Vtop__ConstPool__TABLE_ha12b071a_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_branch = Vtop__ConstPool__TABLE_hff6fb0c7_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_h675ff796_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_src = Vtop__ConstPool__TABLE_h0ed44f5c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__reg_write = Vtop__ConstPool__TABLE_h3c40c180_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__pc_or_mem_to_reg 
        = Vtop__ConstPool__TABLE_h81d70658_0[__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_h621af196_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode 
        = (0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                   >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__btype = 
        (3U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_3 
        = vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_3 
        = vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_3 
        = vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1))
            ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1))
                ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1))
                    ? vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result
                    : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2))
            ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2))
                ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2))
                    ? vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result
                    : 0U)));
    vlSelfRef.top__DOT__print_reg[0U] = vlSelfRef.print_reg
        [0U];
    vlSelfRef.top__DOT__print_reg[1U] = vlSelfRef.print_reg
        [1U];
    vlSelfRef.top__DOT__print_reg[2U] = vlSelfRef.print_reg
        [2U];
    vlSelfRef.top__DOT__print_reg[3U] = vlSelfRef.print_reg
        [3U];
    vlSelfRef.top__DOT__print_reg[4U] = vlSelfRef.print_reg
        [4U];
    vlSelfRef.top__DOT__print_reg[5U] = vlSelfRef.print_reg
        [5U];
    vlSelfRef.top__DOT__print_reg[6U] = vlSelfRef.print_reg
        [6U];
    vlSelfRef.top__DOT__print_reg[7U] = vlSelfRef.print_reg
        [7U];
    vlSelfRef.top__DOT__print_reg[8U] = vlSelfRef.print_reg
        [8U];
    vlSelfRef.top__DOT__print_reg[9U] = vlSelfRef.print_reg
        [9U];
    vlSelfRef.top__DOT__print_reg[0xaU] = vlSelfRef.print_reg
        [0xaU];
    vlSelfRef.top__DOT__print_reg[0xbU] = vlSelfRef.print_reg
        [0xbU];
    vlSelfRef.top__DOT__print_reg[0xcU] = vlSelfRef.print_reg
        [0xcU];
    vlSelfRef.top__DOT__print_reg[0xdU] = vlSelfRef.print_reg
        [0xdU];
    vlSelfRef.top__DOT__print_reg[0xeU] = vlSelfRef.print_reg
        [0xeU];
    vlSelfRef.top__DOT__print_reg[0xfU] = vlSelfRef.print_reg
        [0xfU];
    vlSelfRef.top__DOT__print_reg[0x10U] = vlSelfRef.print_reg
        [0x10U];
    vlSelfRef.top__DOT__print_reg[0x11U] = vlSelfRef.print_reg
        [0x11U];
    vlSelfRef.top__DOT__print_reg[0x12U] = vlSelfRef.print_reg
        [0x12U];
    vlSelfRef.top__DOT__print_reg[0x13U] = vlSelfRef.print_reg
        [0x13U];
    vlSelfRef.top__DOT__print_reg[0x14U] = vlSelfRef.print_reg
        [0x14U];
    vlSelfRef.top__DOT__print_reg[0x15U] = vlSelfRef.print_reg
        [0x15U];
    vlSelfRef.top__DOT__print_reg[0x16U] = vlSelfRef.print_reg
        [0x16U];
    vlSelfRef.top__DOT__print_reg[0x17U] = vlSelfRef.print_reg
        [0x17U];
    vlSelfRef.top__DOT__print_reg[0x18U] = vlSelfRef.print_reg
        [0x18U];
    vlSelfRef.top__DOT__print_reg[0x19U] = vlSelfRef.print_reg
        [0x19U];
    vlSelfRef.top__DOT__print_reg[0x1aU] = vlSelfRef.print_reg
        [0x1aU];
    vlSelfRef.top__DOT__print_reg[0x1bU] = vlSelfRef.print_reg
        [0x1bU];
    vlSelfRef.top__DOT__print_reg[0x1cU] = vlSelfRef.print_reg
        [0x1cU];
    vlSelfRef.top__DOT__print_reg[0x1dU] = vlSelfRef.print_reg
        [0x1dU];
    vlSelfRef.top__DOT__print_reg[0x1eU] = vlSelfRef.print_reg
        [0x1eU];
    vlSelfRef.top__DOT__print_reg[0x1fU] = vlSelfRef.print_reg
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0U] = vlSelfRef.print_reg
        [0U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[1U] = vlSelfRef.print_reg
        [1U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[2U] = vlSelfRef.print_reg
        [2U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[3U] = vlSelfRef.print_reg
        [3U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[4U] = vlSelfRef.print_reg
        [4U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[5U] = vlSelfRef.print_reg
        [5U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[6U] = vlSelfRef.print_reg
        [6U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[7U] = vlSelfRef.print_reg
        [7U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[8U] = vlSelfRef.print_reg
        [8U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[9U] = vlSelfRef.print_reg
        [9U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xaU] = 
        vlSelfRef.print_reg[0xaU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xbU] = 
        vlSelfRef.print_reg[0xbU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xcU] = 
        vlSelfRef.print_reg[0xcU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xdU] = 
        vlSelfRef.print_reg[0xdU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xeU] = 
        vlSelfRef.print_reg[0xeU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xfU] = 
        vlSelfRef.print_reg[0xfU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x10U] 
        = vlSelfRef.print_reg[0x10U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x11U] 
        = vlSelfRef.print_reg[0x11U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x12U] 
        = vlSelfRef.print_reg[0x12U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x13U] 
        = vlSelfRef.print_reg[0x13U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x14U] 
        = vlSelfRef.print_reg[0x14U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x15U] 
        = vlSelfRef.print_reg[0x15U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x16U] 
        = vlSelfRef.print_reg[0x16U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x17U] 
        = vlSelfRef.print_reg[0x17U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x18U] 
        = vlSelfRef.print_reg[0x18U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x19U] 
        = vlSelfRef.print_reg[0x19U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1aU] 
        = vlSelfRef.print_reg[0x1aU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1bU] 
        = vlSelfRef.print_reg[0x1bU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1cU] 
        = vlSelfRef.print_reg[0x1cU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1dU] 
        = vlSelfRef.print_reg[0x1dU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1eU] 
        = vlSelfRef.print_reg[0x1eU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1fU] 
        = vlSelfRef.print_reg[0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelfRef.print_reg[0U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelfRef.print_reg[1U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelfRef.print_reg[2U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelfRef.print_reg[3U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelfRef.print_reg[4U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelfRef.print_reg[5U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelfRef.print_reg[6U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelfRef.print_reg[7U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelfRef.print_reg[8U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelfRef.print_reg[9U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelfRef.print_reg[0xaU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelfRef.print_reg[0xbU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelfRef.print_reg[0xcU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelfRef.print_reg[0xdU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelfRef.print_reg[0xeU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelfRef.print_reg[0xfU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelfRef.print_reg[0x10U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelfRef.print_reg[0x11U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelfRef.print_reg[0x12U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelfRef.print_reg[0x13U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelfRef.print_reg[0x14U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelfRef.print_reg[0x15U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelfRef.print_reg[0x16U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelfRef.print_reg[0x17U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelfRef.print_reg[0x18U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelfRef.print_reg[0x19U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelfRef.print_reg[0x1aU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelfRef.print_reg[0x1bU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelfRef.print_reg[0x1cU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelfRef.print_reg[0x1dU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelfRef.print_reg[0x1eU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelfRef.print_reg[0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__instr;
    vlSelfRef.top__DOT__cpu__DOT__miss_count = vlSelfRef.top__DOT__miss_count;
    vlSelfRef.top__DOT__cpu__DOT__hit_count = vlSelfRef.top__DOT__hit_count;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__C 
        = vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc_add_4_inBranchPrediction;
    vlSelfRef.top__DOT__cpu__DOT__pc_predict = (((vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table
                                                  [vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx] 
                                                  == vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag) 
                                                 & ((0U 
                                                     != 
                                                     vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb
                                                     [vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx]) 
                                                    & ((2U 
                                                        == 
                                                        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht
                                                        [vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__idx_xor_bhsr]) 
                                                       | (3U 
                                                          == 
                                                          vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht
                                                          [vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__idx_xor_bhsr]))))
                                                 ? 
                                                vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb
                                                [vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx]
                                                 : vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4);
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__IF_ID_write 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_write;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__pc_write 
        = vlSelfRef.top__DOT__cpu__DOT__pc_write;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__is_stall 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelfRef.top__DOT__cpu__DOT__is_jal;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelfRef.top__DOT__cpu__DOT__is_jalr;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch 
        = vlSelfRef.top__DOT__cpu__DOT__is_branch;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
        = vlSelfRef.top__DOT__cpu__DOT__alu_src;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_or_mem_to_reg 
        = vlSelfRef.top__DOT__cpu__DOT__pc_or_mem_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write;
    vlSelfRef.top__DOT__cpu__DOT__mem_write_final = 
        ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_write));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write;
    vlSelfRef.top__DOT__cpu__DOT__reg_write_final = 
        ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__reg_write));
    if (vlSelfRef.top__DOT__cpu__DOT__is_ecall) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 1U;
        vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__ctrl = 1U;
        vlSelfRef.top__DOT__cpu__DOT__and___DOT__A = 1U;
        vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__is_ecall = 1U;
        vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mux_ecall_result = 0x11U;
        if (((0x11U == vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall = 1U;
        } else if (((0x11U == vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd) 
                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))) {
            vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall = 2U;
        }
        vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rs1 = 0x11U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__ctrl = 0U;
        vlSelfRef.top__DOT__cpu__DOT__and___DOT__A = 0U;
        vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__is_ecall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mux_ecall_result 
            = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU));
        vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rs1 
            = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU));
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read = 0U;
    if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][3U];
    } else {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[3U] = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__A = vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src)
            ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm
            : vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__miss_count 
        = vlSelfRef.top__DOT__cpu__DOT__miss_count;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__hit_count 
        = vlSelfRef.top__DOT__cpu__DOT__hit_count;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_predict 
        = vlSelfRef.top__DOT__cpu__DOT__pc_predict;
    vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__pc_predict;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt1__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write_final;
    vlSelfRef.top__DOT__cpu__DOT__mux_halt2__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write_final;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_ecall_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_ecall 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rs1;
    vlSelfRef.top__DOT__cpu__DOT__read_data_1 = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rs1];
    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state)))) {
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set][0U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set][1U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set][2U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set][3U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
                    = ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set] 
                        << 5U) | ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx) 
                                  << 4U));
            }
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U];
    } else {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U];
        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr, 4U);
    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state)))) {
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read = 0U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 1U;
            }
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read;
    } else {
        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 1U;
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 0U;
            }
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read;
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[3U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 0U;
    vlSelfRef.top__DOT__cpu__DOT__is_hit = 1U;
    vlSelfRef.top__DOT__cpu__DOT__mem_dout = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 0U;
    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid)
                    ? 0U : 3U);
        } else {
            vlSelfRef.top__DOT__cpu__DOT__is_hit = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready)
                    ? 1U : 2U);
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        vlSelfRef.top__DOT__cpu__DOT__is_hit = 0U;
        if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid) {
            vlSelfRef.top__DOT__cpu__DOT__is_hit = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[0U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[1U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[2U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[3U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 0U;
        } else {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 1U;
        }
    } else {
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [0U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [0U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [1U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [1U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [2U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [2U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 2U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [3U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [3U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 3U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [4U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [4U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 4U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [5U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [5U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 5U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [6U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [6U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 6U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
             [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
             [7U] & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                     == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                     [7U]))) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit = 7U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit = 1U;
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
            [0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 0U;
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [1U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [1U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 1U;
        }
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [2U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [2U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 2U;
        }
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [3U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [3U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 3U;
        }
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [4U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [4U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 4U;
        }
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [5U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [5U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 5U;
        }
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [6U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [6U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 6U;
        }
        if (VL_GTS_III(32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                       [7U], vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__j 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__LRU_bank
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                [7U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict = 7U;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__check_hit) {
            if (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) {
                vlSelfRef.top__DOT__cpu__DOT__mem_dout 
                    = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))
                            ? vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][3U]
                            : vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][2U])
                        : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))
                            ? vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][1U]
                            : vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                           [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][0U]));
            } else {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 1U;
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))) {
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][0U];
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][1U];
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][2U];
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    } else {
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][0U]))));
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                         [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                         [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                          [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                          [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][0U]))) 
                                       >> 0x20U));
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][3U])) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data))));
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                         [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                         [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data))) 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][0U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][2U]))));
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                                 [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                                                                 [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][2U]))) 
                                   >> 0x20U));
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][1U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][2U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_hit][3U];
                }
            }
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 3U;
            vlSelfRef.top__DOT__cpu__DOT__is_hit = 1U;
        } else {
            vlSelfRef.top__DOT__cpu__DOT__is_hit = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state 
                = (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
                   [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                   [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__which_set_evict]
                    ? 2U : 1U);
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__B = vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result;
    vlSelfRef.top__DOT__cpu__DOT__alu_result = ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result, vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)
                                                    : 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result, vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result, vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)
                                                    : 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result, vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                     ^ vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result))
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                    ^ vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                     | vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result))
                                                    : 
                                                   (~ 
                                                    (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                     & vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                    | vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                    & vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   (~ vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result)
                                                    : vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode))
                                                    ? 
                                                   (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                    - vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)
                                                    : 
                                                   (vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
                                                    + vlSelfRef.top__DOT__cpu__DOT__mux_alusrc_result)))));
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 0U;
    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__btype))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__btype))) {
            if (VL_GTS_III(32, 0U, vlSelfRef.top__DOT__cpu__DOT__alu_result)) {
                vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 1U;
            }
        } else if (VL_LTES_III(32, 0U, vlSelfRef.top__DOT__cpu__DOT__alu_result)) {
            vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 1U;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__btype))) {
        if ((0U != vlSelfRef.top__DOT__cpu__DOT__alu_result)) {
            vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 1U;
        }
    } else if ((0U == vlSelfRef.top__DOT__cpu__DOT__alu_result)) {
        vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 1U;
    }
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__read_data_1;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__read_data_1;
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall))
            ? vlSelfRef.top__DOT__cpu__DOT__read_data_1
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall))
                ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_ecall))
                    ? vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result
                    : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__mem_dout;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_hit 
        = vlSelfRef.top__DOT__cpu__DOT__is_hit;
    vlSelfRef.top__DOT__cpu__DOT__is_output_valid = 
        (3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state));
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__C = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)
            ? vlSelfRef.top__DOT__cpu__DOT__alu_result
            : vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4);
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
    vlSelfRef.top__DOT__cpu__DOT__branch_taken = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_bcond));
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding_result;
    vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten = (0xaU 
                                                == vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding_result);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelfRef.top__DOT__cpu__DOT__is_output_valid;
    vlSelfRef.top__DOT__cpu__DOT__is_cache_ready = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready) 
         & ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit) 
            & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_output_valid)));
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result;
    vlSelfRef.top__DOT__cpu__DOT__or___DOT__B = vlSelfRef.top__DOT__cpu__DOT__branch_taken;
    vlSelfRef.top__DOT__cpu__DOT__pc_src1 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
                                             | (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_taken));
    vlSelfRef.top__DOT__cpu__DOT__and___DOT__B = vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten;
    vlSelfRef.top__DOT__cpu__DOT__IF_ID_is_halted = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten));
    if (vlSelfRef.top__DOT__cpu__DOT__pc_src1) {
        vlSelfRef.top__DOT__cpu__DOT__or___DOT__C = 1U;
        vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__ctrl = 1U;
        vlSelfRef.top__DOT__cpu__DOT__pc_correct = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__or___DOT__C = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__ctrl = 0U;
        vlSelfRef.top__DOT__cpu__DOT__pc_correct = vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result;
    }
    vlSelfRef.top__DOT__cpu__DOT__and___DOT__C = vlSelfRef.top__DOT__cpu__DOT__IF_ID_is_halted;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_correct 
        = vlSelfRef.top__DOT__cpu__DOT__pc_correct;
    vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__pc_correct;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__pc_correct;
    vlSelfRef.top__DOT__cpu__DOT__prediction_sucess 
        = ((vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_predict 
            == vlSelfRef.top__DOT__cpu__DOT__pc_correct) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_stall));
    if (vlSelfRef.top__DOT__cpu__DOT__prediction_sucess) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_sucess = 1U;
        vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__ctrl = 1U;
        vlSelfRef.top__DOT__cpu__DOT__next_pc = vlSelfRef.top__DOT__cpu__DOT__pc_predict;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_sucess = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__ctrl = 0U;
        vlSelfRef.top__DOT__cpu__DOT__next_pc = vlSelfRef.top__DOT__cpu__DOT__pc_correct;
    }
    vlSelfRef.top__DOT__cpu__DOT__IF_ID_flush = (1U 
                                                 & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_sucess)));
    vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush = vlSelfRef.top__DOT__cpu__DOT__IF_ID_flush;
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__pc_write) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__IF_ID_flush) 
              | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_cache_ready)));
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__pc_write 
        = vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    vlSelf->miss_count = VL_RAND_RESET_I(32);
    vlSelf->hit_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__hit_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__hit_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc_add_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_or_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ID_EX_funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__ID_EX_funct7_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_add_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_or_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_add_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_add_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__rs1_is_ten = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_or_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_src1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_src2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Forwarding_rs1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__Forwarding_rs2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__Forwarding_ecall = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__current_pc_add_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__read_data_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__read_data_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc2_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_adder_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_write_final = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write_final = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_alusrc_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm_sl1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__is_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_cache_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_correct = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_predict = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__prediction_sucess = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc_predict = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_predict = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__prediction_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__reg_file__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_correct = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_sucess = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_predict = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc_add_4_inBranchPrediction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__idx_xor_bhsr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pc__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pc__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pc__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_pc__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_4_adder__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_4_adder__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_4_adder__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_or_mem_to_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazarddectection_unit__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt1__DOT__in_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt1__DOT__in_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt1__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt1__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt2__DOT__in_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt2__DOT__in_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt2__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_halt2__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_ecall__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_ecall__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__and___DOT__A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__and___DOT__B = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__and___DOT__C = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__or___DOT__A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__or___DOT__B = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__or___DOT__C = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc1__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc2__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_pcsrc2__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__FuncCode = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__btype = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_ecall = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_forwardrs2__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_alusrc__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_alusrc__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_alusrc__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_alusrc__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_adder__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_adder__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_adder__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__g = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__idx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag = VL_RAND_RESET_I(27);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_block);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem_dout);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__tag_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(27);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dirty[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_bank[__Vi0][__Vi1]);
        }
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_update = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_update_data);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_update_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__which_set = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__which_set_hit = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__which_set_evict = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__check_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU_bank[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT___miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT___hit_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__access_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vi0]);
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite__DOT__in_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite__DOT__in_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__mux_regwrite__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
