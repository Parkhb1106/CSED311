// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
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
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__clk;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_he30476b8_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid;
    top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid = 0;
    CData/*4:0*/ __Vdly__top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr;
    __Vdly__top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v0 = 0;
    IData/*24:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32;
    __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32;
    __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v0 = 0;
    CData/*1:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32;
    __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 = 0;
    CData/*1:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33;
    __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33;
    __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0 = 0;
    IData/*23:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*3:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v0 = 0;
    CData/*0:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    __VdlyVal__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0;
    CData/*3:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v0 = 0;
    CData/*0:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0;
    CData/*3:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    VL_ZERO_W(128, __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16);
    CData/*3:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    VL_ZERO_W(128, __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 0U;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 = 0U;
    __Vdly__top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr 
        = vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 = 0U;
    __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 2U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 3U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 4U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 5U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 6U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 7U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 8U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 9U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0xaU;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0xbU;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0xcU;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0xdU;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0xeU;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0xfU;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__i = 0x10U;
    }
    if (VL_UNLIKELY(vlSelfRef.reset)) {
        vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(8, Vtop__ConstPool__CONST_he30476b8_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write) 
             & (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U];
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 
                = (0x3fffU & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr);
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_stall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_predict = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct7_5 = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_stall 
            = vlSelfRef.top__DOT__cpu__DOT__is_stall;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelfRef.top__DOT__cpu__DOT__read_data_2;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelfRef.top__DOT__cpu__DOT__read_data_1;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_predict 
            = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_predict;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src 
            = vlSelfRef.top__DOT__cpu__DOT__alu_src;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0xfU));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode 
            = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3 
            = (7U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                     >> 0xcU));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct7_5 
            = (1U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                     >> 0x1eU));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][0U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                          & vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][3U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i);
        }
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v0 = 1U;
    } else {
        if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update) {
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty;
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v16 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U];
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U];
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__valid__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid;
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v16 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag;
            __VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx;
            __VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16 = 1U;
        }
        if (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_sucess)) 
             & (vlSelfRef.top__DOT__cpu__DOT__pc_correct 
                != ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc)))) {
            __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 
                = (vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
                   >> 7U);
            __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 
                = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
                            >> 2U));
            __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 
                = vlSelfRef.top__DOT__cpu__DOT__pc_correct;
            __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 
                = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
                            >> 2U));
            __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32 = 1U;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__prediction_taken) {
            vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr) 
                   ^ (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
                               >> 2U)));
            if ((vlSelfRef.top__DOT__cpu__DOT__pc_correct 
                 == ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc))) {
                __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 
                    = ((2U & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht
                        [(0x1fU & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry)])
                        ? ((1U & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht
                            [(0x1fU & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry)])
                            ? 2U : 1U) : 0U);
                __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 
                    = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry);
                __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32 = 1U;
                __Vdly__top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr 
                    = (0x1eU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr) 
                                << 1U));
            } else {
                __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 
                    = ((2U & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht
                        [(0x1fU & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry)])
                        ? 3U : ((1U & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht
                                 [(0x1fU & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry)])
                                 ? 2U : 1U));
                __VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 
                    = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__unnamedblk2__DOT__pht_entry);
                __VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33 = 1U;
                __Vdly__top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr 
                    = (1U | (0x1eU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr) 
                                      << 1U)));
            }
        }
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_imm = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_bcond = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write = 0U;
    } else {
        if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_imm 
                = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_bcond 
                = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data 
                = vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write;
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state 
            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write 
            = vlSelfRef.top__DOT__cpu__DOT__mem_write_final;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_jal = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_jal 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal 
            = vlSelfRef.top__DOT__cpu__DOT__is_jal;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_jalr = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_jalr 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr 
            = vlSelfRef.top__DOT__cpu__DOT__is_jalr;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_branch = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_branch = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_branch 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch 
            = vlSelfRef.top__DOT__cpu__DOT__is_branch;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0 = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted = 0U;
    } else {
        if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
                = vlSelfRef.top__DOT__cpu__DOT__mem_dout;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_or_mem_to_reg;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_4;
            vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted 
                = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived) 
             & (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0x32U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr, 4U);
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U];
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U];
        } else if ((0U < vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter)) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                = (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                   - (IData)(1U));
        } else {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        }
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted 
            = vlSelfRef.top__DOT__cpu__DOT__IF_ID_is_halted;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_or_mem_to_reg = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_or_mem_to_reg 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_or_mem_to_reg;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_or_mem_to_reg = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_or_mem_to_reg 
            = vlSelfRef.top__DOT__cpu__DOT__pc_or_mem_to_reg;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read 
            = vlSelfRef.top__DOT__cpu__DOT__mem_read;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_4 = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_add_4 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4 = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4 
            = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_add_4;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[0xfU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__dirty__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__dirty__v16] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__dirty__v16;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[1U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[2U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[3U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[4U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[4U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[4U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[4U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[5U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[5U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[5U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[5U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[6U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[6U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[6U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[6U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[7U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[7U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[7U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[7U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[8U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[8U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[8U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[8U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[9U][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[9U][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[9U][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[9U][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xaU][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xaU][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xaU][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xaU][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xbU][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xbU][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xbU][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xbU][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xcU][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xcU][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xcU][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xcU][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xdU][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xdU][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xdU][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xdU][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xeU][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xeU][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xeU][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xeU][3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xfU][0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xfU][1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xfU][2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[0xfU][3U] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__data_bank__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][0U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][1U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][2U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_bank__v16][3U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_bank__v16[3U];
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[0xfU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__valid__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__valid__v16] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__valid__v16;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[0xfU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__tag_bank__v16;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table[__VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag_table__v32;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb[__VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb__v32;
    }
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr 
        = __Vdly__top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr;
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[__VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v32;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33) {
        vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht[__VdlyDim0__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_prediction_unit__DOT__pht__v33;
    }
    if (__VdlySet__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][0U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][1U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][2U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U];
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][3U] 
            = __VdlyVal__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U];
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__din = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__IF_ID_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_predict = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_add_4 = 0U;
    } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__IF_ID_write) 
                & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_cache_ready))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_predict 
            = vlSelfRef.top__DOT__cpu__DOT__pc_predict;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc = vlSelfRef.top__DOT__cpu__DOT__current_pc;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc_add_4 
            = vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result = 0U;
        vlSelfRef.top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
            vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
                = vlSelfRef.top__DOT__cpu__DOT__alu_result;
        }
        if (vlSelfRef.top__DOT__cpu__DOT____Vcellinp__pc__pc_write) {
            vlSelfRef.top__DOT__cpu__DOT__current_pc 
                = vlSelfRef.top__DOT__cpu__DOT__next_pc;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__B 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm_sl1 = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm, 1U);
    vlSelfRef.top__DOT__cpu__DOT__mux_alusrc__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_3 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_opcode;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct3;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7_5 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_funct7_5;
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
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__FuncCode 
        = (0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                   >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__btype = 
        (3U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op));
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__ID_EX_pc 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__A 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result 
        = (vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm 
           + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc);
    vlSelfRef.top__DOT__cpu__DOT__is_ready = (0U == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__or___DOT__A = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelfRef.top__DOT__cpu__DOT__prediction_taken 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_branch) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
              | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)));
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__g = (3U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo = 
        (3U & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
               >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag = 
        (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
         >> 8U);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx = 
        (0xfU & (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result 
                 >> 4U));
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
    vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder__DOT__C 
        = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready 
        = vlSelfRef.top__DOT__cpu__DOT__is_ready;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready));
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__prediction_taken 
        = vlSelfRef.top__DOT__cpu__DOT__prediction_taken;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_block[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_block[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_block[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_block[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U];
    vlSelfRef.top__DOT__cpu__DOT__mem_dout = (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo), 5U)))
                                                ? 0U
                                                : (
                                                   vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                   [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo), 5U))))) 
                                              | (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                 [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo), 5U))));
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
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 0U;
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
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[3U] = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__is_hit = 1U;
    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state)))) {
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][0U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][1U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][2U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
                    = ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx] 
                        << 8U) | ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx) 
                                  << 4U));
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read = 0U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 1U;
            }
            vlSelfRef.top__DOT__cpu__DOT__is_hit = 0U;
        }
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state 
            = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))
                ? ((IData)(top__DOT__cpu__DOT____Vcellinp__cache__is_input_valid)
                    ? 0U : 3U) : ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready)
                                   ? 1U : 2U));
    } else if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 1U;
        vlSelfRef.top__DOT__cpu__DOT__is_hit = 0U;
        if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid) {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_input_valid = 0U;
            vlSelfRef.top__DOT__cpu__DOT__is_hit = 1U;
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 0U;
        } else {
            vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 1U;
        }
    } else if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx] 
                & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                   == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                   [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]))) {
        vlSelfRef.top__DOT__cpu__DOT__is_hit = 1U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state = 3U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__is_hit = 0U;
        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state 
            = (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dirty
               [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]
                ? 2U : 1U);
    }
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_add_4;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__mem_dout;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[0U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[1U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[2U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_din[3U];
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__cache__DOT__mem_addr, 4U);
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_write;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_read;
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
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__current_state))) {
            if (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_data_mem_output_valid) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 0U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[0U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[1U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[2U];
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                    = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_mem_dout[3U];
            }
        } else if ((vlSelfRef.top__DOT__cpu__DOT__cache__DOT__valid
                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx] 
                    & (vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag 
                       == vlSelfRef.top__DOT__cpu__DOT__cache__DOT__tag_bank
                       [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx]))) {
            if (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write) {
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_valid = 1U;
                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_dirty = 1U;
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))) {
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][0U];
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][1U];
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                            = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                            [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][2U];
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    } else {
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][0U]))));
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                         [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                          [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][0U]))) 
                                       >> 0x20U));
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U])) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data))));
                        vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                         [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data))) 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__bo))) {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][0U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                    [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                                [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][2U]))));
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                     [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                                                                 [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][2U]))) 
                                   >> 0x20U));
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[0U] 
                        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[1U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][1U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[2U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][2U];
                    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__cache_update_data[3U] 
                        = vlSelfRef.top__DOT__cpu__DOT__cache__DOT__data_bank
                        [vlSelfRef.top__DOT__cpu__DOT__cache__DOT__idx][3U];
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_hit 
        = vlSelfRef.top__DOT__cpu__DOT__is_hit;
    vlSelfRef.top__DOT__cpu__DOT__is_output_valid = 
        (3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__cache__DOT__next_state));
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__A 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__tag 
        = (vlSelfRef.top__DOT__cpu__DOT__current_pc 
           >> 7U);
    vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4 
        = ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__current_pc);
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__current_pc 
                    >> 2U));
    vlSelfRef.top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelfRef.top__DOT__cpu__DOT__is_output_valid;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_4_adder__DOT__A 
        = vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc_4_adder__DOT__C 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__current_pc_add_4_inBranchPrediction 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc_add_4;
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__idx_xor_bhsr 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__bhsr) 
           ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__btb_idx));
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
    vlSelfRef.top__DOT__cpu__DOT__branch_prediction_unit__DOT__pc_predict 
        = vlSelfRef.top__DOT__cpu__DOT__pc_predict;
    vlSelfRef.top__DOT__cpu__DOT__mux_pc__DOT__in_2 
        = vlSelfRef.top__DOT__cpu__DOT__pc_predict;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelfRef.clk) {
        if (vlSelfRef.reset) {
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
            vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
            __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (0x1fU & vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd)))) {
        __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result;
        __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd);
        __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[__VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    }
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg))
            ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_0
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg))
                ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_or_mem_to_reg))
                    ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
                    : 0U)));
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
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write 
            = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    }
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd 
                    >> 0U));
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = 0U;
    } else if (vlSelfRef.top__DOT__cpu__DOT__is_cache_ready) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write 
            = vlSelfRef.top__DOT__cpu__DOT__reg_write_final;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = (0x1fU 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U));
    }
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__EX_MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
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
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs1_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1))
            ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1))
                ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs1))
                    ? vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result
                    : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__Forwarding_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2__DOT__ctrl 
        = vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2;
    vlSelfRef.top__DOT__cpu__DOT__mux_forwardrs2_result 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2))
            ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2))
                ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_result
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__Forwarding_rs2))
                    ? vlSelfRef.top__DOT__cpu__DOT__mux_regwrite_result
                    : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
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
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__ID_EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__IF_ID_flush))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__IF_ID_write) 
                & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_cache_ready))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = vlSelfRef.top__DOT__cpu__DOT__instr;
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
    vlSelfRef.top__DOT__cpu__DOT__instr = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelfRef.top__DOT__cpu__DOT__is_cache_ready = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ready) 
         & ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_hit) 
            & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_output_valid)));
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
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__instr;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst;
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__hazarddectection_unit__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall__DOT__in_1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__in_1 
        = vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result;
    vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result;
    vlSelfRef.top__DOT__cpu__DOT__or___DOT__B = vlSelfRef.top__DOT__cpu__DOT__branch_taken;
    vlSelfRef.top__DOT__cpu__DOT__pc_src1 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
                                             | (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_taken));
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
    if (vlSelfRef.top__DOT__cpu__DOT__pc_src1) {
        vlSelfRef.top__DOT__cpu__DOT__or___DOT__C = 1U;
        vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__ctrl = 1U;
        vlSelfRef.top__DOT__cpu__DOT__pc_correct = vlSelfRef.top__DOT__cpu__DOT__pc_imm_adder_result;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__or___DOT__C = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc1__DOT__ctrl = 0U;
        vlSelfRef.top__DOT__cpu__DOT__pc_correct = vlSelfRef.top__DOT__cpu__DOT__mux_pcsrc2_result;
    }
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__read_data_2 = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelfRef.top__DOT__cpu__DOT__read_data_1 = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rs1];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__read_data_2;
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
    vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding__DOT__out 
        = vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding_result;
    vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten = (0xaU 
                                                == vlSelfRef.top__DOT__cpu__DOT__mux_ecall_forwarding_result);
    vlSelfRef.top__DOT__cpu__DOT__and___DOT__B = vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten;
    vlSelfRef.top__DOT__cpu__DOT__IF_ID_is_halted = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_is_ten));
    vlSelfRef.top__DOT__cpu__DOT__and___DOT__C = vlSelfRef.top__DOT__cpu__DOT__IF_ID_is_halted;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
