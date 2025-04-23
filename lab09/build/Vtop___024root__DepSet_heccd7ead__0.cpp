// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_hc52109ef_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT____Vcellinp__s1__button = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaaaaaU 
                                                         & vlSelf->pb)));
    vlSelf->__VdfgTmp_he62d57a5__0 = (0U != (0xfU & 
                                             ((vlSelf->pb 
                                               >> 4U) 
                                              | (vlSelf->pb 
                                                 >> 0xcU))));
    vlSelf->__VdfgTmp_heb42506b__0 = (0U != (3U & (
                                                   (vlSelf->pb 
                                                    >> 2U) 
                                                   | ((vlSelf->pb 
                                                       >> 6U) 
                                                      | ((vlSelf->pb 
                                                          >> 0xaU) 
                                                         | ((vlSelf->pb 
                                                             >> 0xeU) 
                                                            | (vlSelf->pb 
                                                               >> 0x12U)))))));
    vlSelf->top__DOT__s1__DOT__next_seq = (((~ (IData)(
                                                       (((0U 
                                                          != 
                                                          (0xfff00U 
                                                           & vlSelf->pb)) 
                                                         | (IData)(vlSelf->__VdfgTmp_he62d57a5__0)) 
                                                        | (IData)(vlSelf->__VdfgTmp_heb42506b__0)))) 
                                            & (8U == (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))
                                            ? ((0xfeU 
                                                & ((IData)(vlSelf->top__DOT__seq) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->top__DOT____Vcellinp__s1__button))
                                            : (IData)(vlSelf->top__DOT__seq));
    __Vtableidx1 = ((((IData)(vlSelf->top__DOT____Vcellinp__s1__button) 
                      == (1U & ((IData)(vlSelf->top__DOT__seq) 
                                >> (7U & (~ (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))))) 
                     << 5U) | (((0x10U == (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->pb 
                                                         >> 0x10U)))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->pb 
                                                            >> 8U)))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__VdfgTmp_he62d57a5__0) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_heb42506b__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT____Vcellinp__s1__button)))))) 
                                << 4U) | (IData)(vlSelf->top__DOT__s2__DOT__lockstate)));
    vlSelf->top__DOT__s2__DOT__n_lockstate = Vtop__ConstPool__TABLE_hc52109ef_0
        [__Vtableidx1];
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__csc__DOT__count;
    __Vdly__top__DOT__csc__DOT__count = 0;
    CData/*0:0*/ __Vdly__top__DOT__csc__DOT__next_hzX;
    __Vdly__top__DOT__csc__DOT__next_hzX = 0;
    // Body
    __Vdly__top__DOT__csc__DOT__count = vlSelf->top__DOT__csc__DOT__count;
    __Vdly__top__DOT__csc__DOT__next_hzX = vlSelf->top__DOT__csc__DOT__next_hzX;
    if (vlSelf->reset) {
        __Vdly__top__DOT__csc__DOT__count = 0U;
        __Vdly__top__DOT__csc__DOT__next_hzX = 0U;
    } else if ((0x31U == (IData)(vlSelf->top__DOT__csc__DOT__count))) {
        __Vdly__top__DOT__csc__DOT__next_hzX = (1U 
                                                & (~ (IData)(vlSelf->top__DOT__csc__DOT__next_hzX)));
        __Vdly__top__DOT__csc__DOT__count = 0U;
    } else {
        __Vdly__top__DOT__csc__DOT__count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__csc__DOT__count)));
    }
    vlSelf->top__DOT__keyclk = ((~ (IData)(vlSelf->reset)) 
                                & (IData)(vlSelf->top__DOT__sk1__DOT__Q1));
    vlSelf->top__DOT__csc__DOT__count = __Vdly__top__DOT__csc__DOT__count;
    vlSelf->top__DOT__csc__DOT__next_hzX = __Vdly__top__DOT__csc__DOT__next_hzX;
    vlSelf->top__DOT__sk1__DOT__Q1 = ((~ (IData)(vlSelf->reset)) 
                                      & (0U != (0xfffffU 
                                                & vlSelf->pb)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->top__DOT__seq = 0U;
        vlSelf->top__DOT__s2__DOT__lockstate = 8U;
    } else {
        vlSelf->top__DOT__seq = vlSelf->top__DOT__s1__DOT__next_seq;
        vlSelf->top__DOT__s2__DOT__lockstate = vlSelf->top__DOT__s2__DOT__n_lockstate;
    }
    vlSelf->right = vlSelf->top__DOT__seq;
    vlSelf->blue = 0U;
    vlSelf->blue = (1U & (~ ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                             >> 3U)));
    vlSelf->green = 0U;
    vlSelf->green = ((1U & ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                            >> 3U)) && ((1U & (~ ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                                                  >> 2U))) 
                                        && ((1U & (~ 
                                                   ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                                                    >> 1U))) 
                                            && (1U 
                                                & (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))));
    vlSelf->top__DOT__s1__DOT__next_seq = (((~ (IData)(
                                                       (((0U 
                                                          != 
                                                          (0xfff00U 
                                                           & vlSelf->pb)) 
                                                         | (IData)(vlSelf->__VdfgTmp_he62d57a5__0)) 
                                                        | (IData)(vlSelf->__VdfgTmp_heb42506b__0)))) 
                                            & (8U == (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))
                                            ? ((0xfeU 
                                                & ((IData)(vlSelf->top__DOT__seq) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->top__DOT____Vcellinp__s1__button))
                                            : (IData)(vlSelf->top__DOT__seq));
    __Vtableidx1 = ((((IData)(vlSelf->top__DOT____Vcellinp__s1__button) 
                      == (1U & ((IData)(vlSelf->top__DOT__seq) 
                                >> (7U & (~ (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))))) 
                     << 5U) | (((0x10U == (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->pb 
                                                         >> 0x10U)))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->pb 
                                                            >> 8U)))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__VdfgTmp_he62d57a5__0) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_heb42506b__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT____Vcellinp__s1__button)))))) 
                                << 4U) | (IData)(vlSelf->top__DOT__s2__DOT__lockstate)));
    vlSelf->top__DOT__s2__DOT__n_lockstate = Vtop__ConstPool__TABLE_hc52109ef_0
        [__Vtableidx1];
    vlSelf->top__DOT__ss = 0ULL;
    if ((8U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))) {
                    vlSelf->top__DOT__ss = 0x3977383800670606ULL;
                }
            } else {
                vlSelf->top__DOT__ss = ((1U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))
                                         ? 0x3f737954ULL
                                         : 0ULL);
            }
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
        if ((2U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
            if ((1U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
                vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
                vlSelf->top__DOT__ss = (0x80ULL | vlSelf->top__DOT__ss);
            } else {
                vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
                vlSelf->top__DOT__ss = (0x8000ULL | vlSelf->top__DOT__ss);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
            vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
            vlSelf->top__DOT__ss = (0x800000ULL | vlSelf->top__DOT__ss);
        } else {
            vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
            vlSelf->top__DOT__ss = (0x80000000ULL | vlSelf->top__DOT__ss);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
        if ((1U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
            vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
            vlSelf->top__DOT__ss = (0x8000000000ULL 
                                    | vlSelf->top__DOT__ss);
        } else {
            vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
            vlSelf->top__DOT__ss = (0x800000000000ULL 
                                    | vlSelf->top__DOT__ss);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
        vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
        vlSelf->top__DOT__ss = (0x80000000000000ULL 
                                | vlSelf->top__DOT__ss);
    } else {
        vlSelf->top__DOT__ss = 0x6d79393e5079ULL;
        vlSelf->top__DOT__ss = (0x8000000000000000ULL 
                                | vlSelf->top__DOT__ss);
    }
    vlSelf->ss7 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 0x38U)));
    vlSelf->ss6 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 0x30U)));
    vlSelf->ss5 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 0x28U)));
    vlSelf->ss4 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 0x20U)));
    vlSelf->ss3 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 0x18U)));
    vlSelf->ss2 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 0x10U)));
    vlSelf->ss1 = (0xffU & (IData)((vlSelf->top__DOT__ss 
                                    >> 8U)));
    vlSelf->ss0 = (0xffU & (IData)(vlSelf->top__DOT__ss));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->red = 0U;
    if ((8U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__s2__DOT__lockstate))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))) {
                    vlSelf->red = vlSelf->top__DOT__csc__DOT__next_hzX;
                }
            } else if ((1U & (~ (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))) {
                vlSelf->red = 0U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__s2__DOT__lockstate) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__s2__DOT__lockstate)))) {
                vlSelf->red = 0U;
            }
        }
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
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
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
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
    // Body
    if (VL_UNLIKELY((vlSelf->hz100 & 0xfeU))) {
        Verilated::overWidthError("hz100");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->pb & 0xffe00000U))) {
        Verilated::overWidthError("pb");}
    if (VL_UNLIKELY((vlSelf->txready & 0xfeU))) {
        Verilated::overWidthError("txready");}
    if (VL_UNLIKELY((vlSelf->rxready & 0xfeU))) {
        Verilated::overWidthError("rxready");}
}
#endif  // VL_DEBUG
