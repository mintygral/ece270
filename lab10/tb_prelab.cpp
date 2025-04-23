// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================
// Include common routines
#include <verilated.h>

// Verilator using new C++?  Need to include these now (sstep2021)
#include <iostream>
using namespace std;

// Include FST tracing constructs
#include "verilated_fst_c.h"
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
VerilatedFstC* tfp = new VerilatedFstC;

// Current simulation time (64-bit unsigned)
vluint64_t main_time = 0;
// Called by $time in Verilog
double sc_time_stamp()
{
  return main_time; // Note does conversion to real, to match SystemC
}

int concat(int w, int a, int b)
{
  return (a << w) | b;
}

int intssenc (int x) {
    switch (x) {
        case -2: return 64; // dash
        case -1: return 0;  // blank
        case 0 : return 63;
        case 1 : return 6;
        case 2 : return 91;
        case 3 : return 79;
        case 4 : return 102;
        case 5 : return 109;
        case 6 : return 125;
        case 7 : return 7;
        case 8 : return 127;
        case 9 : return 103;
        case 10: return 119;
        case 11: return 124;
        case 12: return 57;
        case 13: return 94;
        case 14: return 121;
        case 15: return 113;
    }
    // uhhh this should not happen
    assert(false);
    return -255;
}

int intssdec (int x) {
    switch (x) {
        case 64: return -2; // dash
        case 0: return -1;  // blank
        case 63 : return 0;
        case 6 : return 1;
        case 91 : return 2;
        case 79 : return 3;
        case 102 : return 4;
        case 109 : return 5;
        case 125 : return 6;
        case 7 : return 7;
        case 127 : return 8;
        case 103 : return 9;
        case 119: return 10;
        case 124: return 11;
        case 57: return 12;
        case 94: return 13;
        case 121: return 14;
        case 113: return 15;
        default: return -2;
    }
    // uhhh this should not happen
    assert(false);
    return -255;
}

std::string bin(int b)
{
  std::string ans;
  while (b != 0)
  {
    ans += b % 2 == 0 ? "0" : "1";
    b /= 2;
  }
  std::reverse(ans.begin(), ans.end());
  return ans;
}

int pin(int a, int b) {
  return (a >> b) & 1;
}

// Include model header for submodules
// fa fa4 bcdadd1 bcdadd4 bcd9comp1 bcdaddsub4
#if defined(FA)
    #include "Vfa.h"
    #define VMODEL Vfa
    #define MODEL fa
#elif defined(FA4)
    #include "Vfa4.h"
    #define VMODEL Vfa4
    #define MODEL fa4
#elif defined(BCDADD1)
    #include "Vbcdadd1.h"
    #define VMODEL Vbcdadd1
    #define MODEL bcdadd1
#elif defined(BCDADD4)
    #include "Vbcdadd4.h"
    #define VMODEL Vbcdadd4
    #define MODEL bcdadd4
#elif defined(BCD9COMP1)
    #include "Vbcd9comp1.h"
    #define VMODEL Vbcd9comp1
    #define MODEL bcd9comp1
#elif defined(BCDADDSUB4)
    #include "Vbcdaddsub4.h"
    #define VMODEL Vbcdaddsub4
    #define MODEL bcdaddsub4
#else
    #error "No module specified"
#endif

void eval(VMODEL *MODEL) {
    contextp->timeInc(1);
    MODEL->eval();
    tfp->dump(contextp->time());
}

static int passed_test_count = 0; // every time we perform a test, and the test passes, increment this by one.
static int total_test_count = 0;  // every time we perform a test, increment this by one.

void update_tests(int passed, int total, std::string test) {
  // add tests to global test variables
  passed_test_count += passed;
  total_test_count += total;
  // perform sanity check on global test variables
  assert(passed_test_count <= total_test_count);
  // let TA know if this set of tests failed
  std::cout << "Part " << test << ": " << std::to_string(passed) << " out of " << std::to_string(total) << " tests passed.\n";
}

int main(int argc, char **argv)
{
  // This is a more complicated example, please also see the simpler examples/make_hello_c.

  // Prevent unused variable warnings
  if (0 && argc && argv) {}

  int passed_subtests = 0; // if we have multiple subtests, we need to know how many passed for each
  int total_subtests = 0;

  // Set debug level, 0 is off, 9 is highest presently used
  // May be overridden by commandArgs
  contextp->debug(0);

  // Randomization reset policy
  // May be overridden by commandArgs
  contextp->randReset(2);

  // Verilator must compute traced signals
  contextp->traceEverOn(true);

  // Pass arguments so Verilated code can see them, e.g. $value$plusargs
  // This needs to be called before you create any model
  contextp->commandArgs(argc, argv);

  VMODEL* MODEL = new VMODEL; // create instance of our module under test

  #if defined(FA)
    std::cout << "Testing fa...\n";
    for (int i = 0; i < 8; i++) {
      fa->ci = pin(i, 2);
      fa->a =  pin(i, 1);
      fa->b =  pin(i, 0);
      fa->eval();

      if(fa->s == pin((fa->a + fa->b + fa->ci), 0)) {
        passed_subtests++;
      }
      else {
        std::cout << "fa: " << std::to_string(fa->a) << "+" << std::to_string(fa->b) << "+" << std::to_string(fa->ci);
        std::cout << ", got s=" << std::to_string(fa->s) << " but expected s=";
        std::cout << std::to_string(pin((fa->a + fa->b + fa->ci), 0)) << std::endl;
      }

      if(fa->co == pin((fa->a + fa->b + fa->ci), 1)) {
        passed_subtests++;
      }
      else {
        std::cout << "fa: " << std::to_string(fa->a) << "+" << std::to_string(fa->b) << "+" << std::to_string(fa->ci);
        std::cout << ", got co=" << std::to_string(fa->co) << " but expected co=";
        std::cout << std::to_string(pin((fa->a + fa->b + fa->ci), 1)) << std::endl;
      }
      total_subtests += 2;
    }
  #elif defined(FA4)
    std::cout << "Testing fa4...\n";
    for (int i = 0; i < 0x1FF; i++) {
      fa4->ci = pin(i, 8);
      fa4->a =  (i & 0xF0) >> 4;
      fa4->b =  i & 0xF;
      fa4->eval();

      if(fa4->s == ((fa4->a + fa4->b + fa4->ci) & 0xF)) {
        passed_subtests++;
      }
      else {
        std::cout << "fa4: " << std::to_string(fa4->a) << "+" << std::to_string(fa4->b) << "+" << std::to_string(fa4->ci);
        std::cout << ", got s=" << std::to_string(fa4->s) << " but expected s=";
        std::cout << std::to_string(((fa4->a + fa4->b + fa4->ci) & 0xF)) << std::endl;
      }

      if(fa4->co == pin(fa4->a + fa4->b + fa4->ci, 4)) {
        passed_subtests++;
      }
      else {
        std::cout << "fa4: " << std::to_string(fa4->a) << "+" << std::to_string(fa4->b) << "+" << std::to_string(fa4->ci);
        std::cout << ", got co=" << std::to_string(fa4->co) << " but expected co=";
        std::cout << std::to_string(pin(fa4->a + fa4->b + fa4->ci, 4)) << std::endl;
      }

      total_subtests += 2;
    }
  #elif defined(BCDADD1)
    std::cout << "Testing bcdadd1...\n";
    for (int i = 0; i < 0x1FF; i++) {
      bcdadd1->ci = pin(i, 8);
      bcdadd1->a  = (i & 0xF0) >> 4;
      bcdadd1->b  = i & 0xF;
      bcdadd1->eval();

      int sum = bcdadd1->a + bcdadd1->b + bcdadd1->ci;
      int expsum = ((sum > 9) || pin(sum, 4)) ? (sum + 6) & 0xF : sum & 0xF;
      int corrco = (sum > 9) || pin(sum, 4);

      if(bcdadd1->s == (expsum)) {
        passed_subtests++;
      }
      else {
        std::cout << "bcdadd1: " << std::to_string(bcdadd1->a) << "+" << std::to_string(bcdadd1->b) << "+" << std::to_string(bcdadd1->ci);
        std::cout << ", got s=" << std::to_string(bcdadd1->s) << " but expected s=";
        std::cout << std::to_string(expsum) << std::endl;
      }

      if(bcdadd1->co == corrco) {
        passed_subtests++;
      }
      else {
        std::cout << "bcdadd1: " << std::to_string(bcdadd1->a) << "+" << std::to_string(bcdadd1->b) << "+" << std::to_string(bcdadd1->ci);
        std::cout << ", got co=" << std::to_string(bcdadd1->co) << " but expected co=";
        std::cout << std::to_string(corrco) << std::endl;
      }

      total_subtests += 2;
    }
  #elif defined(BCDADD4)
    std::cout << "Testing bcdadd4...\n";
    bcdadd4->a = 0x5678;
    bcdadd4->b = 0x1111;
    bcdadd4->ci = 0;
    bcdadd4->eval();
    if (bcdadd4->s == 0x6789) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 5678 + 1111 + 0, ";
      std::cout << "got s=" << std::to_string(bcdadd4->s) << " but expected s=6789";
      std::cout << std::endl;
    }
    if (bcdadd4->co == 0) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 5678 + 1111 + 0, ";
      std::cout << "got co=1 but expected co=0";
      std::cout << std::endl;
    }
    total_subtests+=2;
    
    /*************************************************************/

    bcdadd4->a = 0x4321;
    bcdadd4->b = 0x6789;
    bcdadd4->ci = 0;
    bcdadd4->eval();
    if (bcdadd4->s == 0x1110) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 4321 + 6789 + 0, ";
      std::cout << "got s=" << std::to_string(bcdadd4->s) << " but expected s=1110";
      std::cout << std::endl;
    }
    if (bcdadd4->co == 1) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 4321 + 6789 + 0, ";
      std::cout << "got co=0 but expected co=1";
      std::cout << std::endl;
    }
    total_subtests+=2;
    
    /*************************************************************/

    bcdadd4->a = 0x9999;
    bcdadd4->b = 0x0;
    bcdadd4->ci = 1;
    bcdadd4->eval();
    if (bcdadd4->s == 0) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 9999 + 0 + 1, ";
      std::cout << "got s=" << std::to_string(bcdadd4->s) << " but expected s=0";
      std::cout << std::endl;
    }
    if (bcdadd4->co == 1) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 9999 + 0 + 1, ";
      std::cout << "got co=0 but expected co=1";
      std::cout << std::endl;
    }
    total_subtests+=2;

    /*************************************************************/

    bcdadd4->a = 0x9999;
    bcdadd4->b = 0x1;
    bcdadd4->ci = 1;
    bcdadd4->eval();
    if (bcdadd4->s == 1) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 9999 + 1 + 1, ";
      std::cout << "got s=" << std::to_string(bcdadd4->s) << " but expected s=1";
      std::cout << std::endl;
    }
    if (bcdadd4->co == 1) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdadd4: 9999 + 1 + 1, ";
      std::cout << "got co=0 but expected co=1";
      std::cout << std::endl;
    }
    total_subtests+=2;

    /*************************************************************/

    for (int i = 0; i < 0x100; i++) {
      bcdadd4->a = i;
      for (int j = 0; j < 0x100; j++) {
        bcdadd4->b = j;
        for (int k = 0; k < 2; k++) {
          bcdadd4->ci = k;
          bcdadd4->eval();

          int sum[8];
          int cco[9];
          cco[0] = bcdadd4->ci;

          for (int m = 0; m < 8; m++) {
            // a and b for ssM
            int a = (bcdadd4->a & (0xF << (m*4))) >> (m*4);
            int b = (bcdadd4->b & (0xF << (m*4))) >> (m*4);
            int apb = a + b + cco[m];
            // std::cout << "a: " << std::to_string(a);
            // std::cout << ", b: " << std::to_string(b);
            // std::cout << ", ci: " << std::to_string(cco[m]);
            // std::cout << ", apb: " << std::to_string(apb);
            // std::cout << ", m: " << std::to_string(m);
            // sum displayed on ssX
            sum[m] = ((apb > 9) || pin(apb, 4)) ? (apb + 6) & 0xF : apb & 0xF;
            // cco[0] is bcdadd4-> ci, cco[8:1] is generated
            cco[m+1] = (apb > 9) || pin(apb, 4);
            // std::cout << ", cco[" << std::to_string(m) << "]: " << std::to_string(cco[m]);
            // std::cout << ", sum[" << std::to_string(m) << "]: " << std::to_string(sum[m]);
            // std::cout << std::endl;
            int outdigit = (bcdadd4->s & (0xF << (m*4))) >> (m*4);
            if(outdigit == sum[m]) {
              passed_subtests++;
            }
            else {
              std::cout << "bcdadd4 brutetest (digit " << std::to_string(m) << "): ";
              std::cout << std::to_string(bcdadd4->a) << "+" << std::to_string(bcdadd4->b) << "+" << std::to_string(cco[m]);
              std::cout << ", got s=" << std::to_string(outdigit) << " but expected s=";
              std::cout << std::to_string(sum[m]) << std::endl;
            }
            total_subtests++;
          }
          // std::cout << std::endl;

          if(bcdadd4->co == cco[8]) {
            passed_subtests++;
          }
          else {
            std::cout << "bcdadd4 brutetest (digit " << std::to_string(8) << "): ";
            std::cout << std::to_string(bcdadd4->a) << "+" << std::to_string(bcdadd4->b) << "+" << std::to_string(cco[8]);
            std::cout << ", got co=" << std::to_string(bcdadd4->co) << " but expected co=";
            std::cout << std::to_string(cco[8]) << std::endl;
          }
          total_subtests++;
        }
      }
    }
  #elif defined(BCD9COMP1)
    std::cout << "Testing bcd9comp1...\n";
    for (int i = 0; i < 10; i++) {
      bcd9comp1->in = i;
      bcd9comp1->eval();
      if (bcd9comp1->out == (i<9 ? 9-i : 0)) {
        passed_subtests++;
      }
      else {
        std::cout << "bcd9comp1: in = " << std::to_string(i);
        std::cout << ", out = " << std::to_string(bcd9comp1->out);
        std::cout << ", but expected out=" << std::to_string(i<9 ? 9-i : 0);
        std::cout << std::endl;
      }
      total_subtests++;
    }
  #elif defined(BCDADDSUB4)
    std::cout << "Testing bcdaddsub4...\n";
    bcdaddsub4->a = 0x1234;
    bcdaddsub4->b = 0x1111;
    bcdaddsub4->op = 0;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x2345) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " + " << std::hex << bcdaddsub4->b << " ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=2345";
      std::cout << std::endl;
    }
    total_subtests++;
    bcdaddsub4->op = 1;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x123) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " - " << std::hex << bcdaddsub4->b << " ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=123";
      std::cout << std::endl;
    }
    total_subtests++;
    
    /*************************************************************/

    bcdaddsub4->a = 0x4321;
    bcdaddsub4->b = 0x6789;
    bcdaddsub4->op = 0;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x1110) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " + " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=1110";
      std::cout << std::endl;
    }
    total_subtests++;
    bcdaddsub4->op = 1;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x7532) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " - " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=7532";
      std::cout << std::endl;
    }
    total_subtests++;
    
    /*************************************************************/

    bcdaddsub4->a = 0x9998;
    bcdaddsub4->b = 0x9999;
    bcdaddsub4->op = 0;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x9997) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " + " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=9997";
      std::cout << std::endl;
    }
    total_subtests++;
    bcdaddsub4->op = 1;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x9999) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " - " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=9999";
      std::cout << std::endl;
    }
    total_subtests++;

    /*************************************************************/

    bcdaddsub4->a = 0x0;
    bcdaddsub4->b = 0x1;
    bcdaddsub4->op = 0;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 1) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " + " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=1";
      std::cout << std::endl;
    }
    total_subtests++;
    bcdaddsub4->op = 1;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x9999) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " - " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=9999";
      std::cout << std::endl;
    }
    total_subtests++;

    /*************************************************************/

    bcdaddsub4->a = 0x5432;
    bcdaddsub4->b = 0x5678;
    bcdaddsub4->op = 0;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x1110) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " + " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=1110";
      std::cout << std::endl;
    }
    total_subtests++;
    bcdaddsub4->op = 1;
    bcdaddsub4->eval();
    if (bcdaddsub4->s == 0x9754) {
      passed_subtests++;
    }
    else {
      std::cout << "bcdaddsub4: " << std::hex << bcdaddsub4->a << " - " << std::hex << bcdaddsub4->b << ", ";
      std::cout << "got s=" << std::hex << bcdaddsub4->s << " but expected s=9754";
      std::cout << std::endl;
    }
    total_subtests++;
  #else
    #error "No module specified"
  #endif
  
  update_tests(passed_subtests, total_subtests, "1");
  /***********************************/

  passed_subtests = 0;
  total_subtests = 0;

  /***********************************/
  // END TESTS
  /*************************************************************************/

  // good to have to detect bugs
  assert(passed_test_count <= total_test_count);

  if (passed_test_count == total_test_count)
  {
    std::cout << "ALL " << std::to_string(total_test_count) << " TESTS PASSED"
              << "\n";
  }
  else
  {
    std::cout << "ERROR: " << std::to_string(passed_test_count) << "/" << std::to_string(total_test_count) << " tests passed.\n";
  }

  // Final model cleanups
  MODEL->final();

  // Destroy models
  delete MODEL;
  MODEL = NULL;

  // Fin
  return 0;
}
