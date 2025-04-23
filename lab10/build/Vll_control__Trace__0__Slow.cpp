// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_control__Syms.h"


VL_ATTR_COLD void Vll_control___024root__trace_init_sub__TOP__0(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+216,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"crash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ll_control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+216,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"crash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"land_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"crash_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"wen_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"av_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+266,0,"vel_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("alt_calc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+267,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"bcd9_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"bcd9_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"bcd9_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"bcd9_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"co1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"co2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"co3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"co_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"co_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"s_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"s_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bcd9_0_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+224,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("bcd9_1_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+225,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("bcd9_2_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("bcd9_3_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"co1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"co2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"co3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("add0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+231,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+233,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+238,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+240,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+242,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+244,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+46,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+58,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+61,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+58,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+249,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+251,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+253,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+61,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+256,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+256,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+257,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+259,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+261,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+263,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+88,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+89,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_subtract2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+101,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+271,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+102,0,"co1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"co2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"co3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+107,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("add0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+271,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+112,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+271,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+231,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+233,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+112,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+119,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+102,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+102,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+238,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+240,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+242,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+244,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+143,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+147,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+103,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+161,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+164,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+103,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+161,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+249,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+251,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+253,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+164,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+265,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"tempsum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"tempB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+189,0,"temp_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+265,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+257,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+259,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+261,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+263,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+189,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"Cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"Cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"Cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bit40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+194,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit41", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+196,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit42", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit43", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+200,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vll_control___024root__trace_init_top(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_init_top\n"); );
    // Body
    Vll_control___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vll_control___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vll_control___024root__trace_register(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vll_control___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vll_control___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vll_control___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vll_control___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_control___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_const_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_control___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+266,(vlSelf->ll_control__DOT__vel_check),16);
    bufp->fullBit(oldp+267,(0U));
    bufp->fullBit(oldp+268,(vlSelf->ll_control__DOT__alt_calc__DOT__co1));
    bufp->fullBit(oldp+269,(vlSelf->ll_control__DOT__alt_calc__DOT__co2));
    bufp->fullBit(oldp+270,(vlSelf->ll_control__DOT__alt_calc__DOT__co3));
    bufp->fullBit(oldp+271,(1U));
}

VL_ATTR_COLD void Vll_control___024root__trace_full_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_control___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_full_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_control___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_control___024root__trace_full_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->ll_control__DOT__alt_calc__DOT__s_add),16);
    bufp->fullCData(oldp+2,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0),4);
    bufp->fullCData(oldp+3,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1),4);
    bufp->fullCData(oldp+4,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2),4);
    bufp->fullCData(oldp+5,(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3),4);
    bufp->fullSData(oldp+6,((((0x8000U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
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
                              | ((0x4000U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
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
                                 | ((0x2000U & ((((~ 
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
                                    | (0x1000U & ((
                                                   ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                                   | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))) 
                                                  << 0xcU))))) 
                             | (((0x800U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
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
                                 | ((0x400U & ((((~ 
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
                                    | ((0x200U & ((
                                                   ((~ 
                                                     ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
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
                                       | (0x100U & 
                                          ((((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                            | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                               & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a))) 
                                           << 8U))))) 
                                | (((0x80U & ((((~ 
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
                                    | ((0x40U & (((
                                                   (~ 
                                                    ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
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
                                       | ((0x20U & 
                                           ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
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
                                   | ((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
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
                                      | ((4U & ((((~ 
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
                                         | ((2U & (
                                                   (((~ 
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
                                            | (1U & 
                                               (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                                 & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                                | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a))))))))))),16);
    bufp->fullBit(oldp+7,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co1));
    bufp->fullBit(oldp+8,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co2));
    bufp->fullBit(oldp+9,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__co3));
    bufp->fullCData(oldp+10,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
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
                                         << 2U) | (
                                                   (0xfffffffcU 
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
    bufp->fullCData(oldp+11,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)) 
                                      << 3U) | ((0xfffffff8U 
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
                                         << 2U) | (
                                                   (0xfffffffcU 
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
                                 | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullCData(oldp+12,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)) 
                                      << 3U) | ((0xfffffff8U 
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
                                         << 2U) | (
                                                   (0xfffffffcU 
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
                                 | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullCData(oldp+13,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                              >> 3U))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)) 
                                      << 3U) | ((0xfffffff8U 
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
                                         << 2U) | (
                                                   (0xfffffffcU 
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
                                 | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullBit(oldp+14,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__carry));
    bufp->fullCData(oldp+15,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempsum),4);
    bufp->fullCData(oldp+16,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB),4);
    bufp->fullBit(oldp+17,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)) 
                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+18,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+19,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+20,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+21,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+22,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+23,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+24,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+25,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+26,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+27,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+28,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB))));
    bufp->fullBit(oldp+29,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB)) 
                                  | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB)) 
                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                          >> 1U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                         >> 1U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                            >> 1U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                  >> 2U))));
    bufp->fullBit(oldp+33,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                          >> 2U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                         >> 2U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                            >> 2U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                  >> 3U))));
    bufp->fullBit(oldp+35,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                          >> 3U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)) 
                                  | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2))) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                         >> 3U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                            >> 3U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__tempB) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add0__DOT__result__DOT__Cout2)))))))));
    bufp->fullBit(oldp+36,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__carry));
    bufp->fullCData(oldp+37,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempsum),4);
    bufp->fullCData(oldp+38,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB),4);
    bufp->fullBit(oldp+39,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)) 
                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+40,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+41,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+42,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+43,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+44,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+45,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+46,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+47,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+48,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+49,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+50,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB))));
    bufp->fullBit(oldp+51,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB)) 
                                  | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB)) 
                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                  >> 1U))));
    bufp->fullBit(oldp+53,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                          >> 1U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                         >> 1U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                            >> 1U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                  >> 2U))));
    bufp->fullBit(oldp+55,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                          >> 2U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                         >> 2U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                            >> 2U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                  >> 3U))));
    bufp->fullBit(oldp+57,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                          >> 3U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)) 
                                  | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2))) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                         >> 3U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                            >> 3U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__tempB) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add1__DOT__result__DOT__Cout2)))))))));
    bufp->fullBit(oldp+58,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__carry));
    bufp->fullCData(oldp+59,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempsum),4);
    bufp->fullCData(oldp+60,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB),4);
    bufp->fullBit(oldp+61,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)) 
                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+62,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+63,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+64,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+65,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+66,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+67,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+68,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+69,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+70,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+71,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+72,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB))));
    bufp->fullBit(oldp+73,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB)) 
                                  | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB)) 
                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                  >> 1U))));
    bufp->fullBit(oldp+75,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                          >> 1U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                         >> 1U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                            >> 1U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                  >> 2U))));
    bufp->fullBit(oldp+77,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                          >> 2U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                         >> 2U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                            >> 2U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                  >> 3U))));
    bufp->fullBit(oldp+79,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                          >> 3U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)) 
                                  | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                          | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2))) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                         >> 3U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                            >> 3U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__tempB) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add2__DOT__result__DOT__Cout2)))))))));
    bufp->fullCData(oldp+80,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))),4);
    bufp->fullCData(oldp+81,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB),4);
    bufp->fullBit(oldp+82,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                              | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)) 
                             & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+83,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+84,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+85,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+86,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+87,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+88,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+89,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+90,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+91,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+92,(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+93,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB))));
    bufp->fullBit(oldp+94,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB)) 
                                  | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB)) 
                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                  >> 1U))));
    bufp->fullBit(oldp+96,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                          >> 1U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit41__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                         >> 1U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                            >> 1U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                  >> 2U))));
    bufp->fullBit(oldp+98,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                          >> 2U))) 
                                   & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1)) 
                                  | (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__bit42__DOT____VdfgTmp_he56c0e7a__0)) 
                                      & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                         >> 2U)) | 
                                     (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                            >> 2U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1))) 
                                       & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                      | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                         & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+99,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                  >> 3U))));
    bufp->fullBit(oldp+100,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                           >> 3U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                          >> 3U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                             >> 3U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__tempB) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT__Cout2)))))))));
    bufp->fullSData(oldp+101,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                << 0xcU) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                                << 4U) 
                                               | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0))))),16);
    bufp->fullBit(oldp+102,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co1));
    bufp->fullBit(oldp+103,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co2));
    bufp->fullBit(oldp+104,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__co3));
    bufp->fullCData(oldp+105,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                               >> 3U))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                                       << 3U) | ((0xfffffff8U 
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
                               | ((4U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                               | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                                  >> 2U))) 
                                           & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)) 
                                          << 2U) | 
                                         ((0xfffffffcU 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                               << 2U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
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
                                  | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullCData(oldp+106,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                               >> 3U))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                                       << 3U) | ((0xfffffff8U 
                                                  & (((~ 
                                                       ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                                        | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                                      << 3U) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))) 
                                                 | ((((~ 
                                                       (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
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
                                          << 2U) | 
                                         ((0xfffffffcU 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                               << 2U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
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
                                  | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullCData(oldp+107,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                               >> 3U))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                                       << 3U) | ((0xfffffff8U 
                                                  & (((~ 
                                                       ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                                        | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                                      << 3U) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))) 
                                                 | ((((~ 
                                                       (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
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
                                          << 2U) | 
                                         ((0xfffffffcU 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                               << 2U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
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
                                  | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullCData(oldp+108,(((8U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                            | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                               >> 3U))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                                       << 3U) | ((0xfffffff8U 
                                                  & (((~ 
                                                       ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                                        | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                                      << 3U) 
                                                     & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))) 
                                                 | ((((~ 
                                                       (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
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
                                          << 2U) | 
                                         ((0xfffffffcU 
                                           & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                                   | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                               << 2U) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))) 
                                          | ((((~ (
                                                   ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
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
                                  | ((2U & ((((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
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
    bufp->fullBit(oldp+109,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__carry));
    bufp->fullCData(oldp+110,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempsum),4);
    bufp->fullCData(oldp+111,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB),4);
    bufp->fullBit(oldp+112,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                               | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                 >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+113,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+114,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+115,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+116,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0))));
    bufp->fullBit(oldp+117,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0) 
                                   >> 1U))));
    bufp->fullBit(oldp+119,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0) 
                                   >> 2U))));
    bufp->fullBit(oldp+121,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_0) 
                                   >> 3U))));
    bufp->fullBit(oldp+123,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+124,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+125,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+126,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+127,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB))));
    bufp->fullBit(oldp+128,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a)) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                   | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                   >> 1U))));
    bufp->fullBit(oldp+130,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                           >> 1U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                          >> 1U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit41__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                   >> 2U))));
    bufp->fullBit(oldp+132,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                           >> 2U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                          >> 2U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                             >> 2U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit42__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                              >> 2U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                   >> 3U))));
    bufp->fullBit(oldp+134,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                           >> 3U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                          >> 3U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                             >> 3U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT____Vcellinp__bit43__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__tempB) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add0__DOT__result__DOT__Cout2)))))))));
    bufp->fullBit(oldp+135,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__carry));
    bufp->fullCData(oldp+136,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempsum),4);
    bufp->fullCData(oldp+137,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB),4);
    bufp->fullBit(oldp+138,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                               | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                 >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+139,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+140,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+141,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+142,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1))));
    bufp->fullBit(oldp+143,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                   >> 1U))));
    bufp->fullBit(oldp+145,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+146,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                   >> 2U))));
    bufp->fullBit(oldp+147,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+148,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_1) 
                                   >> 3U))));
    bufp->fullBit(oldp+149,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+150,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+151,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+152,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+153,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB))));
    bufp->fullBit(oldp+154,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a)) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                   | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                   >> 1U))));
    bufp->fullBit(oldp+156,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                           >> 1U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                          >> 1U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit41__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                   >> 2U))));
    bufp->fullBit(oldp+158,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                           >> 2U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                          >> 2U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                             >> 2U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit42__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                              >> 2U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                   >> 3U))));
    bufp->fullBit(oldp+160,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                           >> 3U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                          >> 3U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                             >> 3U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT____Vcellinp__bit43__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__tempB) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add1__DOT__result__DOT__Cout2)))))))));
    bufp->fullBit(oldp+161,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__carry));
    bufp->fullCData(oldp+162,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempsum),4);
    bufp->fullCData(oldp+163,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB),4);
    bufp->fullBit(oldp+164,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                               | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                 >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+165,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+166,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+167,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+168,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2))));
    bufp->fullBit(oldp+169,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+170,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                   >> 1U))));
    bufp->fullBit(oldp+171,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+172,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                   >> 2U))));
    bufp->fullBit(oldp+173,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+174,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_2) 
                                   >> 3U))));
    bufp->fullBit(oldp+175,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+176,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+177,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+178,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+179,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB))));
    bufp->fullBit(oldp+180,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a)) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                   | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+181,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                   >> 1U))));
    bufp->fullBit(oldp+182,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                           >> 1U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                          >> 1U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit41__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+183,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                   >> 2U))));
    bufp->fullBit(oldp+184,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                           >> 2U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                          >> 2U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                             >> 2U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit42__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                              >> 2U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                   >> 3U))));
    bufp->fullBit(oldp+186,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                           >> 3U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                          >> 3U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                             >> 3U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT____Vcellinp__bit43__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__tempB) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add2__DOT__result__DOT__Cout2)))))))));
    bufp->fullCData(oldp+187,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                << 3U) | (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                            << 1U) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))),4);
    bufp->fullCData(oldp+188,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB),4);
    bufp->fullBit(oldp+189,(((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                               | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                 >> 3U)) | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)))));
    bufp->fullBit(oldp+190,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout0));
    bufp->fullBit(oldp+191,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout1));
    bufp->fullBit(oldp+192,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout2));
    bufp->fullBit(oldp+193,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3))));
    bufp->fullBit(oldp+194,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a));
    bufp->fullBit(oldp+195,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                   >> 1U))));
    bufp->fullBit(oldp+196,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a));
    bufp->fullBit(oldp+197,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                   >> 2U))));
    bufp->fullBit(oldp+198,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a));
    bufp->fullBit(oldp+199,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                   >> 3U))));
    bufp->fullBit(oldp+200,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a));
    bufp->fullBit(oldp+201,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0));
    bufp->fullBit(oldp+202,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1));
    bufp->fullBit(oldp+203,(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2));
    bufp->fullBit(oldp+204,((1U & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB))));
    bufp->fullBit(oldp+205,((1U & (((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a)) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                   | ((~ (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB)) 
                                      & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit40__a))))));
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                   >> 1U))));
    bufp->fullBit(oldp+207,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                           >> 1U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                          >> 1U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit41__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout0)))))))));
    bufp->fullBit(oldp+208,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                   >> 2U))));
    bufp->fullBit(oldp+209,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                           >> 2U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                          >> 2U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                             >> 2U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit42__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                              >> 2U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout1)))))))));
    bufp->fullBit(oldp+210,((1U & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                   >> 3U))));
    bufp->fullBit(oldp+211,((1U & (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                        | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                           >> 3U))) 
                                    & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)) 
                                   | (((~ ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                           | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                       & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                          >> 3U)) | 
                                      (((~ (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                             >> 3U) 
                                            | (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2))) 
                                        & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a)) 
                                       | ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
                                          & (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__tempB) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT__Cout2)))))))));
    bufp->fullBit(oldp+212,(vlSelf->clk));
    bufp->fullBit(oldp+213,(vlSelf->rst));
    bufp->fullSData(oldp+214,(vlSelf->alt),16);
    bufp->fullSData(oldp+215,(vlSelf->vel),16);
    bufp->fullBit(oldp+216,(vlSelf->land));
    bufp->fullBit(oldp+217,(vlSelf->crash));
    bufp->fullBit(oldp+218,(vlSelf->wen));
    bufp->fullBit(oldp+219,(vlSelf->ll_control__DOT__land_n));
    bufp->fullBit(oldp+220,(vlSelf->ll_control__DOT__crash_n));
    bufp->fullBit(oldp+221,(vlSelf->ll_control__DOT__wen_n));
    bufp->fullBit(oldp+222,(((9U < (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
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
    bufp->fullBit(oldp+223,(((9U < (((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__result__DOT____Vcellinp__bit43__a) 
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
    bufp->fullCData(oldp+224,((0xfU & (IData)(vlSelf->vel))),4);
    bufp->fullCData(oldp+225,((0xfU & ((IData)(vlSelf->vel) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+226,((0xfU & ((IData)(vlSelf->vel) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+227,((0xfU & ((IData)(vlSelf->vel) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+228,((0xfU & (IData)(vlSelf->alt))),4);
    bufp->fullBit(oldp+229,((1U & (IData)(vlSelf->alt))));
    bufp->fullBit(oldp+230,((1U & (IData)(vlSelf->vel))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelf->alt) 
                                   >> 1U))));
    bufp->fullBit(oldp+232,((1U & ((IData)(vlSelf->vel) 
                                   >> 1U))));
    bufp->fullBit(oldp+233,((1U & ((IData)(vlSelf->alt) 
                                   >> 2U))));
    bufp->fullBit(oldp+234,((1U & ((IData)(vlSelf->vel) 
                                   >> 2U))));
    bufp->fullBit(oldp+235,((1U & ((IData)(vlSelf->alt) 
                                   >> 3U))));
    bufp->fullBit(oldp+236,((1U & ((IData)(vlSelf->vel) 
                                   >> 3U))));
    bufp->fullCData(oldp+237,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+238,((1U & ((IData)(vlSelf->alt) 
                                   >> 4U))));
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelf->vel) 
                                   >> 4U))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->alt) 
                                   >> 5U))));
    bufp->fullBit(oldp+241,((1U & ((IData)(vlSelf->vel) 
                                   >> 5U))));
    bufp->fullBit(oldp+242,((1U & ((IData)(vlSelf->alt) 
                                   >> 6U))));
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->vel) 
                                   >> 6U))));
    bufp->fullBit(oldp+244,((1U & ((IData)(vlSelf->alt) 
                                   >> 7U))));
    bufp->fullBit(oldp+245,((1U & ((IData)(vlSelf->vel) 
                                   >> 7U))));
    bufp->fullCData(oldp+246,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+247,((1U & ((IData)(vlSelf->alt) 
                                   >> 8U))));
    bufp->fullBit(oldp+248,((1U & ((IData)(vlSelf->vel) 
                                   >> 8U))));
    bufp->fullBit(oldp+249,((1U & ((IData)(vlSelf->alt) 
                                   >> 9U))));
    bufp->fullBit(oldp+250,((1U & ((IData)(vlSelf->vel) 
                                   >> 9U))));
    bufp->fullBit(oldp+251,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+252,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+253,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+254,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+255,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+256,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0) 
                              & ((IData)(vlSelf->vel) 
                                 >> 0xfU)) | (((IData)(vlSelf->alt) 
                                               >> 0xfU) 
                                              & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_adder1__DOT__add3__DOT__adder__DOT__Cout2)))));
    bufp->fullBit(oldp+257,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+258,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+259,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+260,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+262,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+264,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+265,((((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__bit43__DOT____VdfgTmp_he56c0e7a__0) 
                              & ((IData)(vlSelf->ll_control__DOT__alt_calc__DOT__bcd9_3) 
                                 >> 3U)) | (((IData)(vlSelf->alt) 
                                             >> 0xfU) 
                                            & (IData)(vlSelf->ll_control__DOT__alt_calc__DOT__u_subtract2__DOT__add3__DOT__adder__DOT__Cout2)))));
}
