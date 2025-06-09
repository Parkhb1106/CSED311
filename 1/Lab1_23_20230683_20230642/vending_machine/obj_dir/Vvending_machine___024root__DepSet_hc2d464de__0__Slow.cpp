// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine___024root.h"

VL_ATTR_COLD void Vvending_machine___024root___eval_static(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvending_machine___024root___eval_initial__TOP(Vvending_machine___024root* vlSelf);
VL_ATTR_COLD void Vvending_machine___024root____Vm_traceActivitySetAll(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine___024root___eval_initial(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvending_machine___024root___eval_initial__TOP(vlSelf);
    Vvending_machine___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vvending_machine___024root___eval_initial__TOP(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 4U;
    vlSelfRef.vending_machine__DOT__item_price[0U] = 0x190U;
    vlSelfRef.vending_machine__DOT__item_price[1U] = 0x1f4U;
    vlSelfRef.vending_machine__DOT__item_price[2U] = 0x3e8U;
    vlSelfRef.vending_machine__DOT__item_price[3U] = 0x7d0U;
    vlSelfRef.vending_machine__DOT__coin_value[0U] = 0x64U;
    vlSelfRef.vending_machine__DOT__coin_value[1U] = 0x1f4U;
    vlSelfRef.vending_machine__DOT__coin_value[2U] = 0x3e8U;
    vlSelfRef.o_return_coin = 0U;
    vlSelfRef.vending_machine__DOT__wait_time = 0x64U;
    vlSelfRef.o_available_item = 0U;
    vlSelfRef.vending_machine__DOT__input_total = 0U;
    vlSelfRef.vending_machine__DOT__output_total = 0U;
    vlSelfRef.vending_machine__DOT__return_total = 0U;
    vlSelfRef.vending_machine__DOT__current_total_nxt = 0U;
}

VL_ATTR_COLD void Vvending_machine___024root___eval_final(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvending_machine___024root___eval_phase__stl(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine___024root___eval_settle(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_settle\n"); );
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
            Vvending_machine___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vending_machine.v", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvending_machine___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vvending_machine___024root___stl_sequent__TOP__0(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine___024root___eval_stl(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vvending_machine___024root___stl_sequent__TOP__0(vlSelf);
        Vvending_machine___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vvending_machine___024root___stl_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vending_machine__DOT__current_total_nxt 
        = vlSelfRef.vending_machine__DOT__current_total;
    vlSelfRef.vending_machine__DOT__return_total = 0U;
    vlSelfRef.vending_machine__DOT__input_total = 0U;
    if ((0U != (IData)(vlSelfRef.i_input_coin))) {
        if ((1U & (IData)(vlSelfRef.i_input_coin))) {
            vlSelfRef.vending_machine__DOT__input_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__input_total 
                                  + vlSelfRef.vending_machine__DOT__coin_value
                                  [0U]));
        }
        if ((2U & (IData)(vlSelfRef.i_input_coin))) {
            vlSelfRef.vending_machine__DOT__input_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__input_total 
                                  + vlSelfRef.vending_machine__DOT__coin_value
                                  [1U]));
        }
        if ((4U & (IData)(vlSelfRef.i_input_coin))) {
            vlSelfRef.vending_machine__DOT__input_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__input_total 
                                  + vlSelfRef.vending_machine__DOT__coin_value
                                  [2U]));
        }
        vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 3U;
    }
    vlSelfRef.o_available_item = 0U;
    if ((vlSelfRef.vending_machine__DOT__current_total 
         >= vlSelfRef.vending_machine__DOT__item_price
         [0U])) {
        vlSelfRef.o_available_item = (1U | (IData)(vlSelfRef.o_available_item));
    }
    if ((vlSelfRef.vending_machine__DOT__current_total 
         >= vlSelfRef.vending_machine__DOT__item_price
         [1U])) {
        vlSelfRef.o_available_item = (2U | (IData)(vlSelfRef.o_available_item));
    }
    if ((vlSelfRef.vending_machine__DOT__current_total 
         >= vlSelfRef.vending_machine__DOT__item_price
         [2U])) {
        vlSelfRef.o_available_item = (4U | (IData)(vlSelfRef.o_available_item));
    }
    if ((vlSelfRef.vending_machine__DOT__current_total 
         >= vlSelfRef.vending_machine__DOT__item_price
         [3U])) {
        vlSelfRef.o_available_item = (8U | (IData)(vlSelfRef.o_available_item));
    }
    vlSelfRef.vending_machine__DOT__output_total = 0U;
    if ((0U != (IData)(vlSelfRef.i_select_item))) {
        if (((vlSelfRef.vending_machine__DOT__current_total 
              >= ((1U & (IData)(vlSelfRef.i_select_item)) 
                  * vlSelfRef.vending_machine__DOT__item_price
                  [0U])) & (IData)(vlSelfRef.i_select_item))) {
            vlSelfRef.vending_machine__DOT__output_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__output_total 
                                  + vlSelfRef.vending_machine__DOT__item_price
                                  [0U]));
        }
        if (((vlSelfRef.vending_machine__DOT__current_total 
              >= ((1U & ((IData)(vlSelfRef.i_select_item) 
                         >> 1U)) * vlSelfRef.vending_machine__DOT__item_price
                  [1U])) & ((IData)(vlSelfRef.i_select_item) 
                            >> 1U))) {
            vlSelfRef.vending_machine__DOT__output_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__output_total 
                                  + vlSelfRef.vending_machine__DOT__item_price
                                  [1U]));
        }
        if (((vlSelfRef.vending_machine__DOT__current_total 
              >= ((1U & ((IData)(vlSelfRef.i_select_item) 
                         >> 2U)) * vlSelfRef.vending_machine__DOT__item_price
                  [2U])) & ((IData)(vlSelfRef.i_select_item) 
                            >> 2U))) {
            vlSelfRef.vending_machine__DOT__output_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__output_total 
                                  + vlSelfRef.vending_machine__DOT__item_price
                                  [2U]));
        }
        if (((vlSelfRef.vending_machine__DOT__current_total 
              >= ((1U & ((IData)(vlSelfRef.i_select_item) 
                         >> 3U)) * vlSelfRef.vending_machine__DOT__item_price
                  [3U])) & ((IData)(vlSelfRef.i_select_item) 
                            >> 3U))) {
            vlSelfRef.vending_machine__DOT__output_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__output_total 
                                  + vlSelfRef.vending_machine__DOT__item_price
                                  [3U]));
        }
        vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 4U;
    }
    if ((0U != (IData)(vlSelfRef.o_return_coin))) {
        if ((1U & (IData)(vlSelfRef.o_return_coin))) {
            vlSelfRef.vending_machine__DOT__return_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__return_total 
                                  + ((1U & (IData)(vlSelfRef.o_return_coin)) 
                                     * vlSelfRef.vending_machine__DOT__coin_value
                                     [0U])));
        }
        if ((2U & (IData)(vlSelfRef.o_return_coin))) {
            vlSelfRef.vending_machine__DOT__return_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__return_total 
                                  + ((1U & ((IData)(vlSelfRef.o_return_coin) 
                                            >> 1U)) 
                                     * vlSelfRef.vending_machine__DOT__coin_value
                                     [1U])));
        }
        if ((4U & (IData)(vlSelfRef.o_return_coin))) {
            vlSelfRef.vending_machine__DOT__return_total 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__return_total 
                                  + ((1U & ((IData)(vlSelfRef.o_return_coin) 
                                            >> 2U)) 
                                     * vlSelfRef.vending_machine__DOT__coin_value
                                     [2U])));
        }
        vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 3U;
    }
    vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
        = vlSelfRef.vending_machine__DOT__current_total;
    vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin 
        = vlSelfRef.o_return_coin;
    if (vlSelfRef.reset_n) {
        if (((0U == vlSelfRef.vending_machine__DOT__wait_time) 
             | (IData)(vlSelfRef.i_trigger_return))) {
            vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__unnamedblk1__DOT__i = 0xffffffffU;
            if ((vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                 >= vlSelfRef.vending_machine__DOT__coin_value
                 [2U])) {
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                    = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                                      - vlSelfRef.vending_machine__DOT__coin_value
                                      [2U]));
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin 
                    = (4U | (IData)(vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin));
            }
            if ((vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                 >= vlSelfRef.vending_machine__DOT__coin_value
                 [1U])) {
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                    = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                                      - vlSelfRef.vending_machine__DOT__coin_value
                                      [1U]));
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin 
                    = (2U | (IData)(vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin));
            }
            if ((vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                 >= vlSelfRef.vending_machine__DOT__coin_value
                 [0U])) {
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                    = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total 
                                      - vlSelfRef.vending_machine__DOT__coin_value
                                      [0U]));
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin 
                    = (1U | (IData)(vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin));
            }
        }
    } else {
        vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin = 0U;
    }
}

VL_ATTR_COLD void Vvending_machine___024root___eval_triggers__stl(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD bool Vvending_machine___024root___eval_phase__stl(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvending_machine___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vvending_machine___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__nba(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvending_machine___024root____Vm_traceActivitySetAll(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vvending_machine___024root___ctor_var_reset(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->i_input_coin = VL_RAND_RESET_I(3);
    vlSelf->i_select_item = VL_RAND_RESET_I(4);
    vlSelf->i_trigger_return = VL_RAND_RESET_I(1);
    vlSelf->o_available_item = VL_RAND_RESET_I(4);
    vlSelf->o_output_item = VL_RAND_RESET_I(4);
    vlSelf->o_return_coin = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->vending_machine__DOT__item_price[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vending_machine__DOT__coin_value[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->vending_machine__DOT__current_total = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__current_total_nxt = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__input_total = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__output_total = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__return_total = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__wait_time = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__coin_required = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__remaining_total = VL_RAND_RESET_I(31);
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin = VL_RAND_RESET_I(3);
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__current_temp = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
