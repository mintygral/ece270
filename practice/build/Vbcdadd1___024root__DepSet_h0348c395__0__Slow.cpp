// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbcdadd1.h for the primary calling header

#include "Vbcdadd1__pch.h"
#include "Vbcdadd1__Syms.h"
#include "Vbcdadd1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbcdadd1___024root___dump_triggers__stl(Vbcdadd1___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbcdadd1___024root___eval_triggers__stl(Vbcdadd1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbcdadd1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcdadd1___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbcdadd1___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
