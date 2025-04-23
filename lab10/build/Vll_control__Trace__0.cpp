// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_control__Syms.h"


void Vll_control___024root__trace_chg_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vll_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_chg_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vll_control___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vll_control___024root__trace_chg_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->ll_control__DOT__alt_calc__DOT__s_add),16);
        bufp->chgCData(oldp+1,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0),4);
        bufp->chgCData(oldp+2,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1),4);
        bufp->chgCData(oldp+3,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2),4);
        bufp->chgCData(oldp+4,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3),4);
        bufp->chgSData(oldp+5,((((0x8000U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                      >> 3U))) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                                              << 0xfU) 
                                             | ((0xffff8000U 
                                                 & (((~ 
                                                      ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                       | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                                     << 0xfU) 
                                                    & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                       << 0xcU))) 
                                                | ((((~ 
                                                      (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                    << 0xfU) 
                                                   | (0xffff8000U 
                                                      & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                          << 0xfU) 
                                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                             << 0xcU) 
                                                            & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2) 
                                                               << 0xfU)))))))) 
                                 | ((0x4000U & ((((~ 
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                    | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                       >> 2U))) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1)) 
                                                 << 0xeU) 
                                                | ((0xffffc000U 
                                                    & (((~ 
                                                         ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                                        << 0xeU) 
                                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                          << 0xcU))) 
                                                   | ((((~ 
                                                         (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                           >> 2U) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                       << 0xeU) 
                                                      | (0xffffc000U 
                                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                             << 0xeU) 
                                                            & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                                << 0xcU) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1) 
                                                                  << 0xeU)))))))) 
                                    | ((0x2000U & (
                                                   (((~ 
                                                      ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                          >> 1U))) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0)) 
                                                    << 0xdU) 
                                                   | ((0xffffe000U 
                                                       & (((~ 
                                                            ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                                           << 0xdU) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                             << 0xcU))) 
                                                      | ((((~ 
                                                            (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                              >> 1U) 
                                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                          << 0xdU) 
                                                         | (0xffffe000U 
                                                            & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                                << 0xdU) 
                                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                                   << 0xcU) 
                                                                  & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0) 
                                                                     << 0xdU)))))))) 
                                       | (0x1000U & 
                                          ((((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                            | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))) 
                                           << 0xcU))))) 
                                | (((0x800U & ((((~ 
                                                  ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                      >> 3U))) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                                                << 0xbU) 
                                               | ((0xfffff800U 
                                                   & (((~ 
                                                        ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                                       << 0xbU) 
                                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                         << 8U))) 
                                                  | ((((~ 
                                                        (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                          >> 3U) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                      << 0xbU) 
                                                     | (0xfffff800U 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                            << 0xbU) 
                                                           & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                               << 8U) 
                                                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2) 
                                                                 << 0xbU)))))))) 
                                    | ((0x400U & ((
                                                   ((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                         >> 2U))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1)) 
                                                   << 0xaU) 
                                                  | ((0xfffffc00U 
                                                      & (((~ 
                                                           ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                            << 8U))) 
                                                     | ((((~ 
                                                           (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                             >> 2U) 
                                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                                          & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                         << 0xaU) 
                                                        | (0xfffffc00U 
                                                           & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                               << 0xaU) 
                                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                                  << 8U) 
                                                                 & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1) 
                                                                    << 0xaU)))))))) 
                                       | ((0x200U & 
                                           ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                     >> 1U))) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0)) 
                                             << 9U) 
                                            | ((0xfffffe00U 
                                                & (((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                                    << 9U) 
                                                   & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                      << 8U))) 
                                               | ((((~ 
                                                     (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                       >> 1U) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                   << 9U) 
                                                  | (0xfffffe00U 
                                                     & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                         << 9U) 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                            << 8U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0) 
                                                              << 9U)))))))) 
                                          | (0x100U 
                                             & ((((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                                 | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a))) 
                                                << 8U))))) 
                                   | (((0x80U & (((
                                                   (~ 
                                                    ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                     | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                        >> 3U))) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                                                  << 7U) 
                                                 | ((0xffffff80U 
                                                     & (((~ 
                                                          ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                                         << 7U) 
                                                        & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                           << 4U))) 
                                                    | ((((~ 
                                                          (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                            >> 3U) 
                                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                        << 7U) 
                                                       | (0xffffff80U 
                                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                              << 7U) 
                                                             & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                                 << 4U) 
                                                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2) 
                                                                   << 7U)))))))) 
                                       | ((0x40U & 
                                           ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                     >> 2U))) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1)) 
                                             << 6U) 
                                            | ((0xffffffc0U 
                                                & (((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                      << 4U))) 
                                               | ((((~ 
                                                     (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                   << 6U) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                         << 6U) 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                            << 4U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1) 
                                                              << 6U)))))))) 
                                          | ((0x20U 
                                              & ((((~ 
                                                    ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                     | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                        >> 1U))) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0)) 
                                                  << 5U) 
                                                 | ((0xffffffe0U 
                                                     & (((~ 
                                                          ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                                         << 5U) 
                                                        & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                           << 4U))) 
                                                    | ((((~ 
                                                          (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                            >> 1U) 
                                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                        << 5U) 
                                                       | (0xffffffe0U 
                                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                              << 5U) 
                                                             & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                                 << 4U) 
                                                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0) 
                                                                   << 5U)))))))) 
                                             | (0x10U 
                                                & ((((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                                    | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a))) 
                                                   << 4U))))) 
                                      | ((8U & ((((~ 
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                    | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                       >> 3U))) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                                                 << 3U) 
                                                | ((0xfffffff8U 
                                                    & (((~ 
                                                         ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                                   | ((((~ 
                                                         (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                           >> 3U) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                       << 3U) 
                                                      | (0xfffffff8U 
                                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                             << 3U) 
                                                            & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2) 
                                                                  << 3U)))))))) 
                                         | ((4U & (
                                                   (((~ 
                                                      ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                          >> 2U))) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)) 
                                                    << 2U) 
                                                   | ((0xfffffffcU 
                                                       & (((~ 
                                                            ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                                           << 2U) 
                                                          & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                                      | ((((~ 
                                                            (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                              >> 2U) 
                                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                          << 2U) 
                                                         | (0xfffffffcU 
                                                            & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                                << 2U) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                                  & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1) 
                                                                     << 2U)))))))) 
                                            | ((2U 
                                                & ((((~ 
                                                      ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                          >> 1U))) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0)) 
                                                    << 1U) 
                                                   | ((0xfffffffeU 
                                                       & (((~ 
                                                            ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                                           << 1U) 
                                                          & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                                      | ((((~ 
                                                            (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                              >> 1U) 
                                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                          << 1U) 
                                                         | (0xfffffffeU 
                                                            & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                                << 1U) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                                  & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0) 
                                                                     << 1U)))))))) 
                                               | (1U 
                                                  & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                                     | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a))))))))))),16);
        bufp->chgBit(oldp+6,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co1));
        bufp->chgBit(oldp+7,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co2));
        bufp->chgBit(oldp+8,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co3));
        bufp->chgCData(oldp+9,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                             | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                >> 3U))) 
                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)) 
                                        << 3U) | ((0xfffffff8U 
                                                   & (((~ 
                                                        ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2))) 
                                                       << 3U) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB))) 
                                                  | ((((~ 
                                                        (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                          >> 3U) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2))) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                      << 3U) 
                                                     | (0xfffffff8U 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                            << 3U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2) 
                                                                 << 3U)))))))) 
                                | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                   >> 2U))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1)) 
                                           << 2U) | 
                                          ((0xfffffffcU 
                                            & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                                << 2U) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB))) 
                                           | ((((~ 
                                                 (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                   >> 2U) 
                                                  | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1))) 
                                                & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                     << 2U) 
                                                    & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1) 
                                                          << 2U)))))))) 
                                   | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                      >> 1U))) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0)) 
                                              << 1U) 
                                             | ((0xfffffffeU 
                                                 & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                                     << 1U) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB))) 
                                                | ((((~ 
                                                      (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                        >> 1U) 
                                                       | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0))) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                    << 1U) 
                                                   | (0xfffffffeU 
                                                      & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                          << 1U) 
                                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                            & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0) 
                                                               << 1U)))))))) 
                                      | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB)) 
                                               | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB)) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgCData(oldp+10,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                 >> 3U))) 
                                          & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)) 
                                         << 3U) | (
                                                   (0xfffffff8U 
                                                    & (((~ 
                                                         ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2))) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB))) 
                                                   | ((((~ 
                                                         (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                           >> 3U) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2))) 
                                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                       << 3U) 
                                                      | (0xfffffff8U 
                                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                             << 3U) 
                                                            & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2) 
                                                                  << 3U)))))))) 
                                 | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                 | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                    >> 2U))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1)) 
                                            << 2U) 
                                           | ((0xfffffffcU 
                                               & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB))) 
                                              | ((((~ 
                                                    (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                      >> 2U) 
                                                     | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1))) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                  << 2U) 
                                                 | (0xfffffffcU 
                                                    & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                        << 2U) 
                                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1) 
                                                             << 2U)))))))) 
                                    | ((2U & ((((~ 
                                                 ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                     >> 1U))) 
                                                & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0)) 
                                               << 1U) 
                                              | ((0xfffffffeU 
                                                  & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                                      << 1U) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB))) 
                                                 | ((((~ 
                                                       (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                         >> 1U) 
                                                        | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0))) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                     << 1U) 
                                                    | (0xfffffffeU 
                                                       & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0) 
                                                                << 1U)))))))) 
                                       | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB)) 
                                                | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB)) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgCData(oldp+11,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                 >> 3U))) 
                                          & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)) 
                                         << 3U) | (
                                                   (0xfffffff8U 
                                                    & (((~ 
                                                         ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2))) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB))) 
                                                   | ((((~ 
                                                         (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                           >> 3U) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2))) 
                                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                       << 3U) 
                                                      | (0xfffffff8U 
                                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                             << 3U) 
                                                            & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2) 
                                                                  << 3U)))))))) 
                                 | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                 | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                    >> 2U))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1)) 
                                            << 2U) 
                                           | ((0xfffffffcU 
                                               & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB))) 
                                              | ((((~ 
                                                    (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                      >> 2U) 
                                                     | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1))) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                  << 2U) 
                                                 | (0xfffffffcU 
                                                    & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                        << 2U) 
                                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1) 
                                                             << 2U)))))))) 
                                    | ((2U & ((((~ 
                                                 ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                     >> 1U))) 
                                                & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0)) 
                                               << 1U) 
                                              | ((0xfffffffeU 
                                                  & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                                      << 1U) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB))) 
                                                 | ((((~ 
                                                       (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                         >> 1U) 
                                                        | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0))) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                     << 1U) 
                                                    | (0xfffffffeU 
                                                       & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0) 
                                                                << 1U)))))))) 
                                       | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB)) 
                                                | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB)) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgCData(oldp+12,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                 >> 3U))) 
                                          & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)) 
                                         << 3U) | (
                                                   (0xfffffff8U 
                                                    & (((~ 
                                                         ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2))) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB))) 
                                                   | ((((~ 
                                                         (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                           >> 3U) 
                                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2))) 
                                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                                       << 3U) 
                                                      | (0xfffffff8U 
                                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                             << 3U) 
                                                            & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                               & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2) 
                                                                  << 3U)))))))) 
                                 | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                 | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                    >> 2U))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1)) 
                                            << 2U) 
                                           | ((0xfffffffcU 
                                               & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB))) 
                                              | ((((~ 
                                                    (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                      >> 2U) 
                                                     | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1))) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                  << 2U) 
                                                 | (0xfffffffcU 
                                                    & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                        << 2U) 
                                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1) 
                                                             << 2U)))))))) 
                                    | ((2U & ((((~ 
                                                 ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                     >> 1U))) 
                                                & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0)) 
                                               << 1U) 
                                              | ((0xfffffffeU 
                                                  & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                                      << 1U) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB))) 
                                                 | ((((~ 
                                                       (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                         >> 1U) 
                                                        | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0))) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                     << 1U) 
                                                    | (0xfffffffeU 
                                                       & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0) 
                                                                << 1U)))))))) 
                                       | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB)) 
                                                | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB)) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgBit(oldp+13,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__carry));
        bufp->chgCData(oldp+14,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempsum),4);
        bufp->chgCData(oldp+15,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB),4);
        bufp->chgBit(oldp+16,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)) 
                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                   >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+17,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+18,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+19,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+20,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+21,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+22,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+23,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+24,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+25,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+26,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+27,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB))));
        bufp->chgBit(oldp+28,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB)) 
                                     | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB)) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                     >> 1U))));
        bufp->chgBit(oldp+30,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                             >> 1U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                            >> 1U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                     >> 2U))));
        bufp->chgBit(oldp+32,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                             >> 2U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                            >> 2U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                  >> 2U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                     >> 3U))));
        bufp->chgBit(oldp+34,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                             >> 3U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)) 
                                     | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2))) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                            >> 3U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)))))))));
        bufp->chgBit(oldp+35,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__carry));
        bufp->chgCData(oldp+36,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempsum),4);
        bufp->chgCData(oldp+37,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB),4);
        bufp->chgBit(oldp+38,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)) 
                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                   >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+39,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+40,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+41,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+42,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+43,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+44,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+45,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+46,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+47,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+48,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+49,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB))));
        bufp->chgBit(oldp+50,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB)) 
                                     | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB)) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                     >> 1U))));
        bufp->chgBit(oldp+52,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                             >> 1U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                            >> 1U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                     >> 2U))));
        bufp->chgBit(oldp+54,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                             >> 2U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                            >> 2U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                  >> 2U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                     >> 3U))));
        bufp->chgBit(oldp+56,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                             >> 3U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)) 
                                     | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2))) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                            >> 3U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)))))))));
        bufp->chgBit(oldp+57,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__carry));
        bufp->chgCData(oldp+58,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempsum),4);
        bufp->chgCData(oldp+59,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB),4);
        bufp->chgBit(oldp+60,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)) 
                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                   >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+61,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+62,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+63,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+64,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+65,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+66,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+67,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+68,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+69,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+70,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+71,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB))));
        bufp->chgBit(oldp+72,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB)) 
                                     | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB)) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+73,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                     >> 1U))));
        bufp->chgBit(oldp+74,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                             >> 1U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                            >> 1U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                     >> 2U))));
        bufp->chgBit(oldp+76,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                             >> 2U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                            >> 2U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                  >> 2U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                     >> 3U))));
        bufp->chgBit(oldp+78,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                             >> 3U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)) 
                                     | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2))) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                            >> 3U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)))))))));
        bufp->chgCData(oldp+79,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                  << 3U) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))),4);
        bufp->chgCData(oldp+80,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB),4);
        bufp->chgBit(oldp+81,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)) 
                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                   >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+82,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+83,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+84,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+85,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+86,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+87,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+88,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+89,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+90,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+91,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+92,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB))));
        bufp->chgBit(oldp+93,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB)) 
                                     | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB)) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                     >> 1U))));
        bufp->chgBit(oldp+95,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                             >> 1U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                            >> 1U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+96,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                     >> 2U))));
        bufp->chgBit(oldp+97,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                             >> 2U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1)) 
                                     | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                            >> 2U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                  >> 2U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                     >> 3U))));
        bufp->chgBit(oldp+99,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                             >> 3U))) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)) 
                                     | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                             | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2))) 
                                         & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                            >> 3U)) 
                                        | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2))) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                              & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)))))))));
        bufp->chgSData(oldp+100,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                   << 0xcU) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                                << 8U) 
                                               | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0))))),16);
        bufp->chgBit(oldp+101,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co1));
        bufp->chgBit(oldp+102,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co2));
        bufp->chgBit(oldp+103,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co3));
        bufp->chgCData(oldp+104,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                               | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                  >> 3U))) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                                          << 3U) | 
                                         ((0xfffffff8U 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                               << 3U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                    >> 3U) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                              << 3U) 
                                             | (0xfffffff8U 
                                                & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2) 
                                                         << 3U)))))))) 
                                  | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                     >> 2U))) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)) 
                                             << 2U) 
                                            | ((0xfffffffcU 
                                                & (((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                               | ((((~ 
                                                     (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                   << 2U) 
                                                  | (0xfffffffcU 
                                                     & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                         << 2U) 
                                                        & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1) 
                                                              << 2U)))))))) 
                                     | ((2U & ((((~ 
                                                  ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                      >> 1U))) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0)) 
                                                << 1U) 
                                               | ((0xfffffffeU 
                                                   & (((~ 
                                                        ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                                       << 1U) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                                  | ((((~ 
                                                        (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                          >> 1U) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                      << 1U) 
                                                     | (0xfffffffeU 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0) 
                                                                 << 1U)))))))) 
                                        | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                                 | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgCData(oldp+105,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                               | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                  >> 3U))) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                                          << 3U) | 
                                         ((0xfffffff8U 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                               << 3U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                    >> 3U) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                              << 3U) 
                                             | (0xfffffff8U 
                                                & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2) 
                                                         << 3U)))))))) 
                                  | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                     >> 2U))) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1)) 
                                             << 2U) 
                                            | ((0xfffffffcU 
                                                & (((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))) 
                                               | ((((~ 
                                                     (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                   << 2U) 
                                                  | (0xfffffffcU 
                                                     & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                         << 2U) 
                                                        & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1) 
                                                              << 2U)))))))) 
                                     | ((2U & ((((~ 
                                                  ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                      >> 1U))) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0)) 
                                                << 1U) 
                                               | ((0xfffffffeU 
                                                   & (((~ 
                                                        ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                                       << 1U) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))) 
                                                  | ((((~ 
                                                        (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                          >> 1U) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                      << 1U) 
                                                     | (0xfffffffeU 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0) 
                                                                 << 1U)))))))) 
                                        | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                                 | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgCData(oldp+106,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                               | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                  >> 3U))) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                                          << 3U) | 
                                         ((0xfffffff8U 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                               << 3U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                    >> 3U) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                              << 3U) 
                                             | (0xfffffff8U 
                                                & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2) 
                                                         << 3U)))))))) 
                                  | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                     >> 2U))) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1)) 
                                             << 2U) 
                                            | ((0xfffffffcU 
                                                & (((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))) 
                                               | ((((~ 
                                                     (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                   << 2U) 
                                                  | (0xfffffffcU 
                                                     & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                         << 2U) 
                                                        & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1) 
                                                              << 2U)))))))) 
                                     | ((2U & ((((~ 
                                                  ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                      >> 1U))) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0)) 
                                                << 1U) 
                                               | ((0xfffffffeU 
                                                   & (((~ 
                                                        ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                                       << 1U) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))) 
                                                  | ((((~ 
                                                        (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                          >> 1U) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                      << 1U) 
                                                     | (0xfffffffeU 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0) 
                                                                 << 1U)))))))) 
                                        | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                                 | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgCData(oldp+107,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                               | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                  >> 3U))) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                                          << 3U) | 
                                         ((0xfffffff8U 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                               << 3U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                    >> 3U) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                              << 3U) 
                                             | (0xfffffff8U 
                                                & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2) 
                                                         << 3U)))))))) 
                                  | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                  | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                     >> 2U))) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1)) 
                                             << 2U) 
                                            | ((0xfffffffcU 
                                                & (((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))) 
                                               | ((((~ 
                                                     (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                                   << 2U) 
                                                  | (0xfffffffcU 
                                                     & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                         << 2U) 
                                                        & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1) 
                                                              << 2U)))))))) 
                                     | ((2U & ((((~ 
                                                  ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                   | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                      >> 1U))) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0)) 
                                                << 1U) 
                                               | ((0xfffffffeU 
                                                   & (((~ 
                                                        ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                                       << 1U) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))) 
                                                  | ((((~ 
                                                        (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                          >> 1U) 
                                                         | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                                      << 1U) 
                                                     | (0xfffffffeU 
                                                        & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                            << 1U) 
                                                           & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0) 
                                                                 << 1U)))))))) 
                                        | (1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                                 | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)))))))),4);
        bufp->chgBit(oldp+108,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__carry));
        bufp->chgCData(oldp+109,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempsum),4);
        bufp->chgCData(oldp+110,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB),4);
        bufp->chgBit(oldp+111,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                  | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                                 & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                    >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+112,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+113,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+114,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+115,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0))));
        bufp->chgBit(oldp+116,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0) 
                                      >> 1U))));
        bufp->chgBit(oldp+118,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+119,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0) 
                                      >> 2U))));
        bufp->chgBit(oldp+120,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0) 
                                      >> 3U))));
        bufp->chgBit(oldp+122,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+123,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+124,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+125,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+126,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))));
        bufp->chgBit(oldp+127,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                      | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                      >> 1U))));
        bufp->chgBit(oldp+129,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                              >> 1U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                             >> 1U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                      >> 2U))));
        bufp->chgBit(oldp+131,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                              >> 2U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                             >> 2U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                  >> 2U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                      >> 3U))));
        bufp->chgBit(oldp+133,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                             >> 3U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                  >> 3U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)))))))));
        bufp->chgBit(oldp+134,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__carry));
        bufp->chgCData(oldp+135,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempsum),4);
        bufp->chgCData(oldp+136,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB),4);
        bufp->chgBit(oldp+137,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                  | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                                 & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                    >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+138,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+139,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+140,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+141,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1))));
        bufp->chgBit(oldp+142,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                      >> 1U))));
        bufp->chgBit(oldp+144,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                      >> 2U))));
        bufp->chgBit(oldp+146,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+147,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                      >> 3U))));
        bufp->chgBit(oldp+148,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+149,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+150,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+151,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+152,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))));
        bufp->chgBit(oldp+153,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                      | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                      >> 1U))));
        bufp->chgBit(oldp+155,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                              >> 1U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                             >> 1U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                      >> 2U))));
        bufp->chgBit(oldp+157,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                              >> 2U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                             >> 2U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                  >> 2U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                      >> 3U))));
        bufp->chgBit(oldp+159,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                             >> 3U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                  >> 3U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)))))))));
        bufp->chgBit(oldp+160,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__carry));
        bufp->chgCData(oldp+161,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempsum),4);
        bufp->chgCData(oldp+162,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB),4);
        bufp->chgBit(oldp+163,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                  | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                                 & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                    >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+164,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+165,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+166,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+167,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2))));
        bufp->chgBit(oldp+168,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+169,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                      >> 1U))));
        bufp->chgBit(oldp+170,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+171,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                      >> 2U))));
        bufp->chgBit(oldp+172,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+173,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                      >> 3U))));
        bufp->chgBit(oldp+174,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+175,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+176,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+177,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+178,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))));
        bufp->chgBit(oldp+179,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                      | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                      >> 1U))));
        bufp->chgBit(oldp+181,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                              >> 1U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                             >> 1U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+182,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                      >> 2U))));
        bufp->chgBit(oldp+183,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                              >> 2U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                             >> 2U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                  >> 2U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                      >> 3U))));
        bufp->chgBit(oldp+185,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                             >> 3U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                  >> 3U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)))))))));
        bufp->chgCData(oldp+186,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                   << 3U) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                              << 2U) 
                                             | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                 << 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))),4);
        bufp->chgCData(oldp+187,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB),4);
        bufp->chgBit(oldp+188,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                  | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                                 & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                    >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)))));
        bufp->chgBit(oldp+189,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout0));
        bufp->chgBit(oldp+190,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout1));
        bufp->chgBit(oldp+191,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout2));
        bufp->chgBit(oldp+192,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3))));
        bufp->chgBit(oldp+193,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a));
        bufp->chgBit(oldp+194,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                      >> 1U))));
        bufp->chgBit(oldp+195,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a));
        bufp->chgBit(oldp+196,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                      >> 2U))));
        bufp->chgBit(oldp+197,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a));
        bufp->chgBit(oldp+198,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                      >> 3U))));
        bufp->chgBit(oldp+199,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a));
        bufp->chgBit(oldp+200,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0));
        bufp->chgBit(oldp+201,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1));
        bufp->chgBit(oldp+202,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2));
        bufp->chgBit(oldp+203,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))));
        bufp->chgBit(oldp+204,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                      | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                         & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))));
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                      >> 1U))));
        bufp->chgBit(oldp+206,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                              >> 1U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                             >> 1U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0)))))))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                      >> 2U))));
        bufp->chgBit(oldp+208,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                              >> 2U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                             >> 2U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                  >> 2U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1)))))))));
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                      >> 3U))));
        bufp->chgBit(oldp+210,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                                      | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                          & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                             >> 3U)) 
                                         | (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                  >> 3U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                               & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)))))))));
    }
    bufp->chgBit(oldp+211,(vlSelf->clk));
    bufp->chgBit(oldp+212,(vlSelf->rst));
    bufp->chgSData(oldp+213,(vlSelf->alt),16);
    bufp->chgSData(oldp+214,(vlSelf->vel),16);
    bufp->chgBit(oldp+215,(vlSelf->land));
    bufp->chgBit(oldp+216,(vlSelf->crash));
    bufp->chgBit(oldp+217,(vlSelf->wen));
    bufp->chgBit(oldp+218,(vlSelf->ll_control__DOT__land_n));
    bufp->chgBit(oldp+219,(vlSelf->ll_control__DOT__crash_n));
    bufp->chgBit(oldp+220,(vlSelf->ll_control__DOT__wen_n));
    bufp->chgBit(oldp+221,(((9U < (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                    << 3U) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))) 
                            | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0) 
                                & ((IData)(vlSelf->vel) 
                                   >> 0xfU)) | (((IData)(vlSelf->alt) 
                                                 >> 0xfU) 
                                                & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout2))))));
    bufp->chgBit(oldp+222,(((9U < (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                    << 3U) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))) 
                            | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0) 
                                & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                   >> 3U)) | (((IData)(vlSelf->alt) 
                                               >> 0xfU) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout2))))));
    bufp->chgCData(oldp+223,((0xfU & (IData)(vlSelf->vel))),4);
    bufp->chgCData(oldp+224,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 4U))),4);
    bufp->chgCData(oldp+225,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 8U))),4);
    bufp->chgCData(oldp+226,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+227,((0xfU & (IData)(vlSelf->alt))),4);
    bufp->chgBit(oldp+228,((1U & (IData)(vlSelf->alt))));
    bufp->chgBit(oldp+229,((1U & (IData)(vlSelf->vel))));
    bufp->chgBit(oldp+230,((1U & ((IData)(vlSelf->alt) 
                                  >> 1U))));
    bufp->chgBit(oldp+231,((1U & ((IData)(vlSelf->vel) 
                                  >> 1U))));
    bufp->chgBit(oldp+232,((1U & ((IData)(vlSelf->alt) 
                                  >> 2U))));
    bufp->chgBit(oldp+233,((1U & ((IData)(vlSelf->vel) 
                                  >> 2U))));
    bufp->chgBit(oldp+234,((1U & ((IData)(vlSelf->alt) 
                                  >> 3U))));
    bufp->chgBit(oldp+235,((1U & ((IData)(vlSelf->vel) 
                                  >> 3U))));
    bufp->chgCData(oldp+236,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 4U))),4);
    bufp->chgBit(oldp+237,((1U & ((IData)(vlSelf->alt) 
                                  >> 4U))));
    bufp->chgBit(oldp+238,((1U & ((IData)(vlSelf->vel) 
                                  >> 4U))));
    bufp->chgBit(oldp+239,((1U & ((IData)(vlSelf->alt) 
                                  >> 5U))));
    bufp->chgBit(oldp+240,((1U & ((IData)(vlSelf->vel) 
                                  >> 5U))));
    bufp->chgBit(oldp+241,((1U & ((IData)(vlSelf->alt) 
                                  >> 6U))));
    bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->vel) 
                                  >> 6U))));
    bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->alt) 
                                  >> 7U))));
    bufp->chgBit(oldp+244,((1U & ((IData)(vlSelf->vel) 
                                  >> 7U))));
    bufp->chgCData(oldp+245,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 8U))),4);
    bufp->chgBit(oldp+246,((1U & ((IData)(vlSelf->alt) 
                                  >> 8U))));
    bufp->chgBit(oldp+247,((1U & ((IData)(vlSelf->vel) 
                                  >> 8U))));
    bufp->chgBit(oldp+248,((1U & ((IData)(vlSelf->alt) 
                                  >> 9U))));
    bufp->chgBit(oldp+249,((1U & ((IData)(vlSelf->vel) 
                                  >> 9U))));
    bufp->chgBit(oldp+250,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+251,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+252,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xbU))));
    bufp->chgBit(oldp+253,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xbU))));
    bufp->chgCData(oldp+254,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+255,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0) 
                             & ((IData)(vlSelf->vel) 
                                >> 0xfU)) | (((IData)(vlSelf->alt) 
                                              >> 0xfU) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout2)))));
    bufp->chgBit(oldp+256,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+257,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+258,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+259,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+260,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+261,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+262,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+263,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+264,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0) 
                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                >> 3U)) | (((IData)(vlSelf->alt) 
                                            >> 0xfU) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout2)))));
}

void Vll_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_cleanup\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
