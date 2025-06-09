// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine___024root.h"

void Vvending_machine___024root___ico_sequent__TOP__0(Vvending_machine___024root* vlSelf);

void Vvending_machine___024root___eval_ico(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vvending_machine___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vvending_machine___024root___ico_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vvending_machine___024root___eval_triggers__ico(Vvending_machine___024root* vlSelf);

bool Vvending_machine___024root___eval_phase__ico(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vvending_machine___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vvending_machine___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vvending_machine___024root___eval_act(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vvending_machine___024root___nba_sequent__TOP__0(Vvending_machine___024root* vlSelf);

void Vvending_machine___024root___eval_nba(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvending_machine___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vvending_machine___024root___nba_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__vending_machine__DOT__wait_time;
    __Vdly__vending_machine__DOT__wait_time = 0;
    // Body
    __Vdly__vending_machine__DOT__wait_time = vlSelfRef.vending_machine__DOT__wait_time;
    vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 4U;
    vlSelfRef.o_output_item = 0U;
    if (((vlSelfRef.vending_machine__DOT__current_total 
          >= ((1U & (IData)(vlSelfRef.i_select_item)) 
              * vlSelfRef.vending_machine__DOT__item_price
              [0U])) & (IData)(vlSelfRef.i_select_item))) {
        vlSelfRef.o_output_item = (1U | (IData)(vlSelfRef.o_output_item));
    }
    if (((vlSelfRef.vending_machine__DOT__current_total 
          >= ((1U & ((IData)(vlSelfRef.i_select_item) 
                     >> 1U)) * vlSelfRef.vending_machine__DOT__item_price
              [1U])) & ((IData)(vlSelfRef.i_select_item) 
                        >> 1U))) {
        vlSelfRef.o_output_item = (2U | (IData)(vlSelfRef.o_output_item));
    }
    if (((vlSelfRef.vending_machine__DOT__current_total 
          >= ((1U & ((IData)(vlSelfRef.i_select_item) 
                     >> 2U)) * vlSelfRef.vending_machine__DOT__item_price
              [2U])) & ((IData)(vlSelfRef.i_select_item) 
                        >> 2U))) {
        vlSelfRef.o_output_item = (4U | (IData)(vlSelfRef.o_output_item));
    }
    if (((vlSelfRef.vending_machine__DOT__current_total 
          >= ((1U & ((IData)(vlSelfRef.i_select_item) 
                     >> 3U)) * vlSelfRef.vending_machine__DOT__item_price
              [3U])) & ((IData)(vlSelfRef.i_select_item) 
                        >> 3U))) {
        vlSelfRef.o_output_item = (8U | (IData)(vlSelfRef.o_output_item));
    }
    if ((0U != (IData)(vlSelfRef.i_input_coin))) {
        vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 3U;
    }
    if (vlSelfRef.reset_n) {
        if ((1U & (~ (IData)((0U != (IData)(vlSelfRef.i_input_coin)))))) {
            if ((0U != (IData)(vlSelfRef.i_select_item))) {
                vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__unnamedblk2__DOT__i = 4U;
            }
        }
        if ((0U != (IData)(vlSelfRef.i_input_coin))) {
            __Vdly__vending_machine__DOT__wait_time = 0x64U;
        } else if ((0U != (IData)(vlSelfRef.i_select_item))) {
            vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                = (0x7fffffffU & ((1U & (IData)(vlSelfRef.i_select_item)) 
                                  * vlSelfRef.vending_machine__DOT__item_price
                                  [0U]));
            vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                                  + ((1U & ((IData)(vlSelfRef.i_select_item) 
                                            >> 1U)) 
                                     * vlSelfRef.vending_machine__DOT__item_price
                                     [1U])));
            vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                                  + ((1U & ((IData)(vlSelfRef.i_select_item) 
                                            >> 2U)) 
                                     * vlSelfRef.vending_machine__DOT__item_price
                                     [2U])));
            vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                = (0x7fffffffU & (vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required 
                                  + ((1U & ((IData)(vlSelfRef.i_select_item) 
                                            >> 3U)) 
                                     * vlSelfRef.vending_machine__DOT__item_price
                                     [3U])));
            if ((vlSelfRef.vending_machine__DOT__current_total 
                 >= vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__coin_required)) {
                __Vdly__vending_machine__DOT__wait_time = 0x64U;
            }
        } else if ((0U < vlSelfRef.vending_machine__DOT__wait_time)) {
            __Vdly__vending_machine__DOT__wait_time 
                = (vlSelfRef.vending_machine__DOT__wait_time 
                   - (IData)(1U));
        }
    } else {
        __Vdly__vending_machine__DOT__wait_time = 0x64U;
    }
    vlSelfRef.vending_machine__DOT__current_total = 
        ((1U & (((~ (IData)(vlSelfRef.reset_n)) | (IData)(vlSelfRef.i_trigger_return)) 
                | (0U == vlSelfRef.vending_machine__DOT__wait_time)))
          ? 0U : (0x7fffffffU & (((vlSelfRef.vending_machine__DOT__current_total_nxt 
                                   + vlSelfRef.vending_machine__DOT__input_total) 
                                  - vlSelfRef.vending_machine__DOT__output_total) 
                                 - vlSelfRef.vending_machine__DOT__return_total)));
    vlSelfRef.vending_machine__DOT__return_total = 0U;
    if ((0U != (IData)(vlSelfRef.i_select_item))) {
        vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 4U;
    }
    vlSelfRef.o_return_coin = ((IData)(vlSelfRef.reset_n)
                                ? (IData)(vlSelfRef.vending_machine__DOT__check_time_and_coin_module__DOT__nxt_return_coin)
                                : 0U);
    if ((0U != (IData)(vlSelfRef.o_return_coin))) {
        vlSelfRef.vending_machine__DOT__calculate_current_state_module__DOT__i = 3U;
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
    }
    vlSelfRef.vending_machine__DOT__wait_time = __Vdly__vending_machine__DOT__wait_time;
    vlSelfRef.vending_machine__DOT__current_total_nxt 
        = vlSelfRef.vending_machine__DOT__current_total;
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

void Vvending_machine___024root___eval_triggers__act(Vvending_machine___024root* vlSelf);

bool Vvending_machine___024root___eval_phase__act(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvending_machine___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvending_machine___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvending_machine___024root___eval_phase__nba(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvending_machine___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__nba(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

void Vvending_machine___024root___eval(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval\n"); );
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
            Vvending_machine___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vending_machine.v", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vvending_machine___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vvending_machine___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vending_machine.v", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vvending_machine___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vending_machine.v", 9, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvending_machine___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvending_machine___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvending_machine___024root___eval_debug_assertions(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelfRef.i_input_coin & 0xf8U))) {
        Verilated::overWidthError("i_input_coin");}
    if (VL_UNLIKELY((vlSelfRef.i_select_item & 0xf0U))) {
        Verilated::overWidthError("i_select_item");}
    if (VL_UNLIKELY((vlSelfRef.i_trigger_return & 0xfeU))) {
        Verilated::overWidthError("i_trigger_return");}
}
#endif  // VL_DEBUG
