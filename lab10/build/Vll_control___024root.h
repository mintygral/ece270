// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vll_control.h for the primary calling header

#ifndef VERILATED_VLL_CONTROL___024ROOT_H_
#define VERILATED_VLL_CONTROL___024ROOT_H_  // guard

#include "verilated.h"


class Vll_control__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vll_control___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(land,0,0);
        VL_OUT8(crash,0,0);
        VL_OUT8(wen,0,0);
        CData/*0:0*/ ll_control__DOT__land_n;
        CData/*0:0*/ ll_control__DOT__crash_n;
        CData/*0:0*/ ll_control__DOT__wen_n;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__bcd9_0;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__bcd9_1;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__bcd9_2;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__bcd9_3;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__co1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__co2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__co3;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co3;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__carry;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempsum;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__carry;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempsum;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__carry;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempsum;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB;
    };
    struct {
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co3;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__carry;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempsum;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__carry;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempsum;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__carry;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempsum;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*3:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a;
    };
    struct {
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a;
        CData/*0:0*/ ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(alt,15,0);
        VL_IN16(vel,15,0);
        SData/*15:0*/ ll_control__DOT__vel_check;
        SData/*15:0*/ ll_control__DOT__alt_calc__DOT__s_add;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vll_control__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vll_control___024root(Vll_control__Syms* symsp, const char* v__name);
    ~Vll_control___024root();
    VL_UNCOPYABLE(Vll_control___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
