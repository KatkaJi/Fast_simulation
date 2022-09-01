#include "25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_upwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2012270();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2012270();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff6820() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff6b60() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff6ea0() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff71e0() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff7520() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x1ff7990() {
   double input = 3.43341;
   input += synapse0x1f03980();
   input += synapse0x1fe5c90();
   input += synapse0x1ff7c40();
   input += synapse0x1ff7c80();
   input += synapse0x1ff7cc0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff7990() {
   double input = input0x1ff7990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff7d00() {
   double input = 0.430439;
   input += synapse0x1ff8040();
   input += synapse0x1ff8080();
   input += synapse0x1ff80c0();
   input += synapse0x1ff8100();
   input += synapse0x1ff8140();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff7d00() {
   double input = input0x1ff7d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff8180() {
   double input = 0.443944;
   input += synapse0x1ff84c0();
   input += synapse0x1ff8500();
   input += synapse0x1ff8540();
   input += synapse0x1ff8580();
   input += synapse0x1ff85c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff8180() {
   double input = input0x1ff8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff8600() {
   double input = 0.275671;
   input += synapse0x1ff8940();
   input += synapse0x1ff8980();
   input += synapse0x1ef5b70();
   input += synapse0x1ef5bb0();
   input += synapse0x1ff8ad0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff8600() {
   double input = input0x1ff8600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff8b10() {
   double input = 0.773622;
   input += synapse0x1ff8e50();
   input += synapse0x1ff8e90();
   input += synapse0x1ff8ed0();
   input += synapse0x1ff8f10();
   input += synapse0x1ff8f50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff8b10() {
   double input = input0x1ff8b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff8f90() {
   double input = 0.4072;
   input += synapse0x1ff92d0();
   input += synapse0x1ff9310();
   input += synapse0x1ff9350();
   input += synapse0x1ff9390();
   input += synapse0x1ff93d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff8f90() {
   double input = input0x1ff8f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff9410() {
   double input = 0.31257;
   input += synapse0x1ff9750();
   input += synapse0x1ff9790();
   input += synapse0x1ff97d0();
   input += synapse0x1ff89c0();
   input += synapse0x1ff8a00();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff9410() {
   double input = input0x1ff9410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff9a20() {
   double input = -0.565544;
   input += synapse0x1ff9cd0();
   input += synapse0x1ff9d10();
   input += synapse0x1ff9d50();
   input += synapse0x1ff9d90();
   input += synapse0x1ff9dd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff9a20() {
   double input = input0x1ff9a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff9e10() {
   double input = 0.0358094;
   input += synapse0x1ffa150();
   input += synapse0x1ffa190();
   input += synapse0x1ffa1d0();
   input += synapse0x1ffa210();
   input += synapse0x1ffa250();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff9e10() {
   double input = input0x1ff9e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffa290() {
   double input = 0.0297142;
   input += synapse0x1ffa5d0();
   input += synapse0x1ffa610();
   input += synapse0x1ffa650();
   input += synapse0x1ffa690();
   input += synapse0x1ffa6d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffa290() {
   double input = input0x1ffa290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffa710() {
   double input = -5.95907;
   input += synapse0x1ffaa50();
   input += synapse0x1ffaa90();
   input += synapse0x1ffaad0();
   input += synapse0x1ffab10();
   input += synapse0x1ffab50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffa710() {
   double input = input0x1ffa710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffab90() {
   double input = 2.12539;
   input += synapse0x1ef59c0();
   input += synapse0x1ef5a00();
   input += synapse0x1ffafe0();
   input += synapse0x1ffb020();
   input += synapse0x1ffb060();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffab90() {
   double input = input0x1ffab90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffb0a0() {
   double input = -18.0635;
   input += synapse0x1ffb3e0();
   input += synapse0x1ffb420();
   input += synapse0x1ffb460();
   input += synapse0x1ffb4a0();
   input += synapse0x1ffb4e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffb0a0() {
   double input = input0x1ffb0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ff9810() {
   double input = -0.443865;
   input += synapse0x1ef6190();
   input += synapse0x1ff99a0();
   input += synapse0x1ff99e0();
   input += synapse0x1ffb930();
   input += synapse0x1ffb970();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ff9810() {
   double input = input0x1ff9810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffb9b0() {
   double input = 0.698035;
   input += synapse0x1ffbcf0();
   input += synapse0x1ffbd30();
   input += synapse0x1ffbd70();
   input += synapse0x1ffbdb0();
   input += synapse0x1ffbdf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffb9b0() {
   double input = input0x1ffb9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffbe30() {
   double input = 8.70112;
   input += synapse0x1ffc170();
   input += synapse0x1ff6a40();
   input += synapse0x1ff6a80();
   input += synapse0x1ff6d80();
   input += synapse0x1ff6dc0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffbe30() {
   double input = input0x1ffbe30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffc700() {
   double input = 0.453223;
   input += synapse0x1ffc890();
   input += synapse0x1ffc8d0();
   input += synapse0x1ffc910();
   input += synapse0x1ffc950();
   input += synapse0x1ffc990();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffc700() {
   double input = input0x1ffc700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffc9d0() {
   double input = 0.687819;
   input += synapse0x1ffcd10();
   input += synapse0x1ffcd50();
   input += synapse0x1ffcd90();
   input += synapse0x1ffcdd0();
   input += synapse0x1ffce10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffc9d0() {
   double input = input0x1ffc9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffce50() {
   double input = -1.75102;
   input += synapse0x1ffd190();
   input += synapse0x1ffd1d0();
   input += synapse0x1ffd210();
   input += synapse0x1ffd250();
   input += synapse0x1ffd290();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffce50() {
   double input = input0x1ffce50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffd2d0() {
   double input = 5.57958;
   input += synapse0x1ffd610();
   input += synapse0x1ffd650();
   input += synapse0x1ffd690();
   input += synapse0x1ffd6d0();
   input += synapse0x1ffd710();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffd2d0() {
   double input = input0x1ffd2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffd750() {
   double input = 11.6204;
   input += synapse0x1ffda90();
   input += synapse0x1ffdad0();
   input += synapse0x1ffdb10();
   input += synapse0x1ffdb50();
   input += synapse0x1ffdb90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffd750() {
   double input = input0x1ffd750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffdbd0() {
   double input = 0.266231;
   input += synapse0x1ffdf10();
   input += synapse0x1ffdf50();
   input += synapse0x1ffdf90();
   input += synapse0x1ffdfd0();
   input += synapse0x1ffe010();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffdbd0() {
   double input = input0x1ffdbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffe050() {
   double input = 1.17988;
   input += synapse0x1ffe390();
   input += synapse0x1ffe3d0();
   input += synapse0x1ffe410();
   input += synapse0x1ffe450();
   input += synapse0x1ffe490();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffe050() {
   double input = input0x1ffe050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffe4d0() {
   double input = -1.63907;
   input += synapse0x1ffe810();
   input += synapse0x1ffe850();
   input += synapse0x1ffe890();
   input += synapse0x1ffe8d0();
   input += synapse0x1ffe910();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffe4d0() {
   double input = input0x1ffe4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffe950() {
   double input = -0.679561;
   input += synapse0x1ffec90();
   input += synapse0x1ffecd0();
   input += synapse0x1ffed10();
   input += synapse0x1ffed50();
   input += synapse0x1ffed90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffe950() {
   double input = input0x1ffe950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2000860() {
   double input = -0.334175;
   input += synapse0x1ff88b0();
   input += synapse0x1ff88f0();
   input += synapse0x1ff8dc0();
   input += synapse0x1ff8e00();
   input += synapse0x1ff9240();
   input += synapse0x1ff9280();
   input += synapse0x1ff96c0();
   input += synapse0x1ff9700();
   input += synapse0x1ff9c40();
   input += synapse0x1ff9c80();
   input += synapse0x1ffa0c0();
   input += synapse0x1ffa100();
   input += synapse0x1ffa540();
   input += synapse0x1ffa580();
   input += synapse0x1ffa9c0();
   input += synapse0x1ffaa00();
   input += synapse0x1ffae40();
   input += synapse0x1ffae80();
   input += synapse0x1ffb350();
   input += synapse0x1ffb390();
   input += synapse0x1ffbc60();
   input += synapse0x1ffbca0();
   input += synapse0x1ffc0e0();
   input += synapse0x1ffc120();
   input += synapse0x1ff7740();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2000860() {
   double input = input0x2000860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1ffb630() {
   double input = -0.306552;
   input += synapse0x1ffb7c0();
   input += synapse0x1ffb800();
   input += synapse0x1ffb840();
   input += synapse0x1ffb880();
   input += synapse0x1ffb8c0();
   input += synapse0x1ff7780();
   input += synapse0x1ffda00();
   input += synapse0x1ffda40();
   input += synapse0x1ffde80();
   input += synapse0x1ffdec0();
   input += synapse0x1ffe300();
   input += synapse0x1ffe340();
   input += synapse0x1ffe780();
   input += synapse0x1ffe7c0();
   input += synapse0x1ffec00();
   input += synapse0x1ffec40();
   input += synapse0x1ff7bb0();
   input += synapse0x1ff7bf0();
   input += synapse0x1ffcc80();
   input += synapse0x1ffccc0();
   input += synapse0x1f03a50();
   input += synapse0x1f03a90();
   input += synapse0x2001310();
   input += synapse0x2001350();
   input += synapse0x2001390();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1ffb630() {
   double input = input0x1ffb630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x20013d0() {
   double input = -0.355628;
   input += synapse0x1ffaed0();
   input += synapse0x1ffaf10();
   input += synapse0x1ffaf50();
   input += synapse0x1ffaf90();
   input += synapse0x2001920();
   input += synapse0x2001960();
   input += synapse0x20019a0();
   input += synapse0x20019e0();
   input += synapse0x2001a20();
   input += synapse0x2001a60();
   input += synapse0x2001aa0();
   input += synapse0x2001ae0();
   input += synapse0x2001b20();
   input += synapse0x2001b60();
   input += synapse0x2001ba0();
   input += synapse0x2001be0();
   input += synapse0x2001560();
   input += synapse0x20015a0();
   input += synapse0x2001d30();
   input += synapse0x2001d70();
   input += synapse0x2001db0();
   input += synapse0x2001df0();
   input += synapse0x2001e30();
   input += synapse0x2001e70();
   input += synapse0x2001eb0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x20013d0() {
   double input = input0x20013d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2001ef0() {
   double input = 0.803187;
   input += synapse0x2002230();
   input += synapse0x2002270();
   input += synapse0x20022b0();
   input += synapse0x20022f0();
   input += synapse0x2002330();
   input += synapse0x2002370();
   input += synapse0x20023b0();
   input += synapse0x20023f0();
   input += synapse0x2002430();
   input += synapse0x2002470();
   input += synapse0x20024b0();
   input += synapse0x20024f0();
   input += synapse0x2002530();
   input += synapse0x2002570();
   input += synapse0x20025b0();
   input += synapse0x20025f0();
   input += synapse0x2002080();
   input += synapse0x20020c0();
   input += synapse0x2002740();
   input += synapse0x2002780();
   input += synapse0x20027c0();
   input += synapse0x2002800();
   input += synapse0x2002840();
   input += synapse0x2002880();
   input += synapse0x20028c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2001ef0() {
   double input = input0x2001ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2002900() {
   double input = 0.281643;
   input += synapse0x2002c40();
   input += synapse0x2002c80();
   input += synapse0x2002cc0();
   input += synapse0x2002d00();
   input += synapse0x2002d40();
   input += synapse0x2002d80();
   input += synapse0x2002dc0();
   input += synapse0x2002e00();
   input += synapse0x2002e40();
   input += synapse0x2002e80();
   input += synapse0x2002ec0();
   input += synapse0x2002f00();
   input += synapse0x2002f40();
   input += synapse0x2002f80();
   input += synapse0x2002fc0();
   input += synapse0x2003000();
   input += synapse0x2002a90();
   input += synapse0x2002ad0();
   input += synapse0x2003150();
   input += synapse0x2003190();
   input += synapse0x20031d0();
   input += synapse0x2003210();
   input += synapse0x2003250();
   input += synapse0x2003290();
   input += synapse0x20032d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2002900() {
   double input = input0x2002900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2003310() {
   double input = -0.0142662;
   input += synapse0x2003650();
   input += synapse0x2003690();
   input += synapse0x20036d0();
   input += synapse0x2003710();
   input += synapse0x2003750();
   input += synapse0x2003790();
   input += synapse0x20037d0();
   input += synapse0x20009f0();
   input += synapse0x2000a30();
   input += synapse0x2000a70();
   input += synapse0x2000ab0();
   input += synapse0x2000af0();
   input += synapse0x2000b30();
   input += synapse0x2000b70();
   input += synapse0x2000bb0();
   input += synapse0x2000bf0();
   input += synapse0x20034a0();
   input += synapse0x20034e0();
   input += synapse0x2000d40();
   input += synapse0x2000d80();
   input += synapse0x2000dc0();
   input += synapse0x2000e00();
   input += synapse0x2000e40();
   input += synapse0x2000e80();
   input += synapse0x2000ec0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2003310() {
   double input = input0x2003310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2000f00() {
   double input = 0.56328;
   input += synapse0x20011b0();
   input += synapse0x20048b0();
   input += synapse0x20048f0();
   input += synapse0x2004930();
   input += synapse0x2004970();
   input += synapse0x20049b0();
   input += synapse0x20049f0();
   input += synapse0x2004a30();
   input += synapse0x2004a70();
   input += synapse0x2004ab0();
   input += synapse0x2004af0();
   input += synapse0x2004b30();
   input += synapse0x2004b70();
   input += synapse0x2004bb0();
   input += synapse0x2004bf0();
   input += synapse0x2004c30();
   input += synapse0x2001090();
   input += synapse0x20010d0();
   input += synapse0x2004d80();
   input += synapse0x2004dc0();
   input += synapse0x2004e00();
   input += synapse0x2004e40();
   input += synapse0x2004e80();
   input += synapse0x2004ec0();
   input += synapse0x2004f00();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2000f00() {
   double input = input0x2000f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2004f40() {
   double input = -1.1317;
   input += synapse0x2005280();
   input += synapse0x20052c0();
   input += synapse0x2005300();
   input += synapse0x2005340();
   input += synapse0x2005380();
   input += synapse0x20053c0();
   input += synapse0x2005400();
   input += synapse0x2005440();
   input += synapse0x2005480();
   input += synapse0x20054c0();
   input += synapse0x2005500();
   input += synapse0x2005540();
   input += synapse0x2005580();
   input += synapse0x20055c0();
   input += synapse0x2005600();
   input += synapse0x2005640();
   input += synapse0x20050d0();
   input += synapse0x2005110();
   input += synapse0x2005790();
   input += synapse0x20057d0();
   input += synapse0x2005810();
   input += synapse0x2005850();
   input += synapse0x2005890();
   input += synapse0x20058d0();
   input += synapse0x2005910();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2004f40() {
   double input = input0x2004f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2005950() {
   double input = -0.357319;
   input += synapse0x2005c90();
   input += synapse0x2005cd0();
   input += synapse0x2005d10();
   input += synapse0x2005d50();
   input += synapse0x2005d90();
   input += synapse0x2005dd0();
   input += synapse0x2005e10();
   input += synapse0x2005e50();
   input += synapse0x2005e90();
   input += synapse0x2005ed0();
   input += synapse0x2005f10();
   input += synapse0x2005f50();
   input += synapse0x2005f90();
   input += synapse0x2005fd0();
   input += synapse0x2006010();
   input += synapse0x2006050();
   input += synapse0x2005ae0();
   input += synapse0x2005b20();
   input += synapse0x20061a0();
   input += synapse0x20061e0();
   input += synapse0x2006220();
   input += synapse0x2006260();
   input += synapse0x20062a0();
   input += synapse0x20062e0();
   input += synapse0x2006320();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2005950() {
   double input = input0x2005950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2006360() {
   double input = -0.441728;
   input += synapse0x20066a0();
   input += synapse0x20066e0();
   input += synapse0x2006720();
   input += synapse0x2006760();
   input += synapse0x20067a0();
   input += synapse0x20067e0();
   input += synapse0x2006820();
   input += synapse0x2006860();
   input += synapse0x20068a0();
   input += synapse0x20068e0();
   input += synapse0x2006920();
   input += synapse0x2006960();
   input += synapse0x20069a0();
   input += synapse0x20069e0();
   input += synapse0x2006a20();
   input += synapse0x2006a60();
   input += synapse0x20064f0();
   input += synapse0x2006530();
   input += synapse0x2006bb0();
   input += synapse0x2006bf0();
   input += synapse0x2006c30();
   input += synapse0x2006c70();
   input += synapse0x2006cb0();
   input += synapse0x2006cf0();
   input += synapse0x2006d30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2006360() {
   double input = input0x2006360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2006d70() {
   double input = -0.738616;
   input += synapse0x20070b0();
   input += synapse0x20070f0();
   input += synapse0x2007130();
   input += synapse0x2007170();
   input += synapse0x20071b0();
   input += synapse0x20071f0();
   input += synapse0x2007230();
   input += synapse0x2007270();
   input += synapse0x20072b0();
   input += synapse0x20072f0();
   input += synapse0x2007330();
   input += synapse0x2007370();
   input += synapse0x20073b0();
   input += synapse0x20073f0();
   input += synapse0x2007430();
   input += synapse0x2007470();
   input += synapse0x2006f00();
   input += synapse0x2006f40();
   input += synapse0x20075c0();
   input += synapse0x2007600();
   input += synapse0x2007640();
   input += synapse0x2007680();
   input += synapse0x20076c0();
   input += synapse0x2007700();
   input += synapse0x2007740();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2006d70() {
   double input = input0x2006d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2007780() {
   double input = 0.0855992;
   input += synapse0x2007ac0();
   input += synapse0x2007b00();
   input += synapse0x2007b40();
   input += synapse0x2007b80();
   input += synapse0x2007bc0();
   input += synapse0x2007c00();
   input += synapse0x2007c40();
   input += synapse0x2007c80();
   input += synapse0x2007cc0();
   input += synapse0x2007d00();
   input += synapse0x2007d40();
   input += synapse0x2007d80();
   input += synapse0x2007dc0();
   input += synapse0x2007e00();
   input += synapse0x2007e40();
   input += synapse0x2007e80();
   input += synapse0x2007910();
   input += synapse0x2007950();
   input += synapse0x2007fd0();
   input += synapse0x2008010();
   input += synapse0x2008050();
   input += synapse0x2008090();
   input += synapse0x20080d0();
   input += synapse0x2008110();
   input += synapse0x2008150();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2007780() {
   double input = input0x2007780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2008190() {
   double input = -0.386164;
   input += synapse0x20084d0();
   input += synapse0x2008510();
   input += synapse0x2008550();
   input += synapse0x2008590();
   input += synapse0x20085d0();
   input += synapse0x2008610();
   input += synapse0x2008650();
   input += synapse0x2008690();
   input += synapse0x20086d0();
   input += synapse0x2008710();
   input += synapse0x2008750();
   input += synapse0x2008790();
   input += synapse0x20087d0();
   input += synapse0x2008810();
   input += synapse0x2008850();
   input += synapse0x2008890();
   input += synapse0x2008320();
   input += synapse0x2008360();
   input += synapse0x20089e0();
   input += synapse0x2008a20();
   input += synapse0x2008a60();
   input += synapse0x2008aa0();
   input += synapse0x2008ae0();
   input += synapse0x2008b20();
   input += synapse0x2008b60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2008190() {
   double input = input0x2008190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2008ba0() {
   double input = 0.313484;
   input += synapse0x2008ee0();
   input += synapse0x2008f20();
   input += synapse0x2008f60();
   input += synapse0x2008fa0();
   input += synapse0x2008fe0();
   input += synapse0x2009020();
   input += synapse0x2009060();
   input += synapse0x20090a0();
   input += synapse0x20090e0();
   input += synapse0x2009120();
   input += synapse0x2009160();
   input += synapse0x20091a0();
   input += synapse0x20091e0();
   input += synapse0x2009220();
   input += synapse0x2009260();
   input += synapse0x20092a0();
   input += synapse0x2008d30();
   input += synapse0x2008d70();
   input += synapse0x20093f0();
   input += synapse0x2009430();
   input += synapse0x2009470();
   input += synapse0x20094b0();
   input += synapse0x20094f0();
   input += synapse0x2009530();
   input += synapse0x2009570();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2008ba0() {
   double input = input0x2008ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x20095b0() {
   double input = -0.479735;
   input += synapse0x20098f0();
   input += synapse0x2009930();
   input += synapse0x2009970();
   input += synapse0x20099b0();
   input += synapse0x20099f0();
   input += synapse0x2009a30();
   input += synapse0x2009a70();
   input += synapse0x2009ab0();
   input += synapse0x2009af0();
   input += synapse0x2009b30();
   input += synapse0x2009b70();
   input += synapse0x2009bb0();
   input += synapse0x2009bf0();
   input += synapse0x2009c30();
   input += synapse0x2009c70();
   input += synapse0x2009cb0();
   input += synapse0x2009740();
   input += synapse0x2009780();
   input += synapse0x2009e00();
   input += synapse0x2009e40();
   input += synapse0x2009e80();
   input += synapse0x2009ec0();
   input += synapse0x2009f00();
   input += synapse0x2009f40();
   input += synapse0x2009f80();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x20095b0() {
   double input = input0x20095b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2009fc0() {
   double input = 0.502674;
   input += synapse0x200a300();
   input += synapse0x1ff7b20();
   input += synapse0x1ff7b60();
   input += synapse0x1ff7f20();
   input += synapse0x1ff7f60();
   input += synapse0x1ff83a0();
   input += synapse0x1ff83e0();
   input += synapse0x1ff8820();
   input += synapse0x1ff8860();
   input += synapse0x1ff8d30();
   input += synapse0x1ff8d70();
   input += synapse0x1ff91b0();
   input += synapse0x1ff91f0();
   input += synapse0x1ff9630();
   input += synapse0x1ff9670();
   input += synapse0x1ff9bb0();
   input += synapse0x1ff9bf0();
   input += synapse0x1ffa030();
   input += synapse0x1ffa070();
   input += synapse0x1ffa4b0();
   input += synapse0x1ffa4f0();
   input += synapse0x1ffa930();
   input += synapse0x1ffa970();
   input += synapse0x1ffadb0();
   input += synapse0x1ffadf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2009fc0() {
   double input = input0x2009fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x20045e0() {
   double input = -0.273109;
   input += synapse0x2004770();
   input += synapse0x20047b0();
   input += synapse0x1ffc050();
   input += synapse0x1ffc090();
   input += synapse0x200a150();
   input += synapse0x200a190();
   input += synapse0x1ff7400();
   input += synapse0x1ff7440();
   input += synapse0x1ffcbf0();
   input += synapse0x1ffcc30();
   input += synapse0x1ffd070();
   input += synapse0x1ffd0b0();
   input += synapse0x1ffd4f0();
   input += synapse0x1ffd530();
   input += synapse0x1ffd970();
   input += synapse0x1ffd9b0();
   input += synapse0x1ffddf0();
   input += synapse0x1ffde30();
   input += synapse0x1ffe270();
   input += synapse0x1ffe2b0();
   input += synapse0x1ffe6f0();
   input += synapse0x1ffe730();
   input += synapse0x1ffeb70();
   input += synapse0x1ffebb0();
   input += synapse0x1ffb2c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x20045e0() {
   double input = input0x20045e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x200d230() {
   double input = -0.312948;
   input += synapse0x1ffb300();
   input += synapse0x200d570();
   input += synapse0x200d5b0();
   input += synapse0x200d5f0();
   input += synapse0x200d630();
   input += synapse0x200d670();
   input += synapse0x200d6b0();
   input += synapse0x200d6f0();
   input += synapse0x200d730();
   input += synapse0x200d770();
   input += synapse0x200d7b0();
   input += synapse0x200d7f0();
   input += synapse0x200d830();
   input += synapse0x200d870();
   input += synapse0x200d8b0();
   input += synapse0x200d8f0();
   input += synapse0x200d3c0();
   input += synapse0x200d400();
   input += synapse0x200da40();
   input += synapse0x200da80();
   input += synapse0x200dac0();
   input += synapse0x200db00();
   input += synapse0x200db40();
   input += synapse0x200db80();
   input += synapse0x200dbc0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x200d230() {
   double input = input0x200d230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x200dc00() {
   double input = 0.758737;
   input += synapse0x200df40();
   input += synapse0x200df80();
   input += synapse0x200dfc0();
   input += synapse0x200e000();
   input += synapse0x200e040();
   input += synapse0x200e080();
   input += synapse0x200e0c0();
   input += synapse0x200e100();
   input += synapse0x200e140();
   input += synapse0x200e180();
   input += synapse0x200e1c0();
   input += synapse0x200e200();
   input += synapse0x200e240();
   input += synapse0x200e280();
   input += synapse0x200e2c0();
   input += synapse0x200e300();
   input += synapse0x200dd90();
   input += synapse0x200ddd0();
   input += synapse0x200e450();
   input += synapse0x200e490();
   input += synapse0x200e4d0();
   input += synapse0x200e510();
   input += synapse0x200e550();
   input += synapse0x200e590();
   input += synapse0x200e5d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x200dc00() {
   double input = input0x200dc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x200e610() {
   double input = 1.18344;
   input += synapse0x200e950();
   input += synapse0x200e990();
   input += synapse0x200e9d0();
   input += synapse0x200ea10();
   input += synapse0x200ea50();
   input += synapse0x200ea90();
   input += synapse0x200ead0();
   input += synapse0x200eb10();
   input += synapse0x200eb50();
   input += synapse0x200eb90();
   input += synapse0x200ebd0();
   input += synapse0x200ec10();
   input += synapse0x200ec50();
   input += synapse0x200ec90();
   input += synapse0x200ecd0();
   input += synapse0x200ed10();
   input += synapse0x200e7a0();
   input += synapse0x200e7e0();
   input += synapse0x200ee60();
   input += synapse0x200eea0();
   input += synapse0x200eee0();
   input += synapse0x200ef20();
   input += synapse0x200ef60();
   input += synapse0x200efa0();
   input += synapse0x200efe0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x200e610() {
   double input = input0x200e610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x200f020() {
   double input = -0.312831;
   input += synapse0x200f360();
   input += synapse0x200f3a0();
   input += synapse0x200f3e0();
   input += synapse0x200f420();
   input += synapse0x200f460();
   input += synapse0x200f4a0();
   input += synapse0x200f4e0();
   input += synapse0x200f520();
   input += synapse0x200f560();
   input += synapse0x200f5a0();
   input += synapse0x200f5e0();
   input += synapse0x200f620();
   input += synapse0x200f660();
   input += synapse0x200f6a0();
   input += synapse0x200f6e0();
   input += synapse0x200f720();
   input += synapse0x200f1b0();
   input += synapse0x200f1f0();
   input += synapse0x200f870();
   input += synapse0x200f8b0();
   input += synapse0x200f8f0();
   input += synapse0x200f930();
   input += synapse0x200f970();
   input += synapse0x200f9b0();
   input += synapse0x200f9f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x200f020() {
   double input = input0x200f020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x200fa30() {
   double input = -2.08237;
   input += synapse0x200fd70();
   input += synapse0x200fdb0();
   input += synapse0x200fdf0();
   input += synapse0x200fe30();
   input += synapse0x200fe70();
   input += synapse0x200feb0();
   input += synapse0x200fef0();
   input += synapse0x200ff30();
   input += synapse0x200ff70();
   input += synapse0x200ffb0();
   input += synapse0x200fff0();
   input += synapse0x2010030();
   input += synapse0x2010070();
   input += synapse0x20100b0();
   input += synapse0x20100f0();
   input += synapse0x2010130();
   input += synapse0x200fbc0();
   input += synapse0x200fc00();
   input += synapse0x2010280();
   input += synapse0x20102c0();
   input += synapse0x2010300();
   input += synapse0x2010340();
   input += synapse0x2010380();
   input += synapse0x20103c0();
   input += synapse0x2010400();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x200fa30() {
   double input = input0x200fa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2010440() {
   double input = -0.374257;
   input += synapse0x2010780();
   input += synapse0x20107c0();
   input += synapse0x2010800();
   input += synapse0x2010840();
   input += synapse0x2010880();
   input += synapse0x20108c0();
   input += synapse0x2010900();
   input += synapse0x2010940();
   input += synapse0x2010980();
   input += synapse0x20109c0();
   input += synapse0x2010a00();
   input += synapse0x2010a40();
   input += synapse0x2010a80();
   input += synapse0x2010ac0();
   input += synapse0x2010b00();
   input += synapse0x2010b40();
   input += synapse0x20105d0();
   input += synapse0x2010610();
   input += synapse0x2010c90();
   input += synapse0x2010cd0();
   input += synapse0x2010d10();
   input += synapse0x2010d50();
   input += synapse0x2010d90();
   input += synapse0x2010dd0();
   input += synapse0x2010e10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2010440() {
   double input = input0x2010440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2010e50() {
   double input = -0.0274948;
   input += synapse0x2011190();
   input += synapse0x20111d0();
   input += synapse0x2011210();
   input += synapse0x2011250();
   input += synapse0x2011290();
   input += synapse0x20112d0();
   input += synapse0x2011310();
   input += synapse0x2011350();
   input += synapse0x2011390();
   input += synapse0x20113d0();
   input += synapse0x2011410();
   input += synapse0x2011450();
   input += synapse0x2011490();
   input += synapse0x20114d0();
   input += synapse0x2011510();
   input += synapse0x2011550();
   input += synapse0x2010fe0();
   input += synapse0x2011020();
   input += synapse0x20116a0();
   input += synapse0x20116e0();
   input += synapse0x2011720();
   input += synapse0x2011760();
   input += synapse0x20117a0();
   input += synapse0x20117e0();
   input += synapse0x2011820();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2010e50() {
   double input = input0x2010e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2011860() {
   double input = -0.397226;
   input += synapse0x2011ba0();
   input += synapse0x2011be0();
   input += synapse0x2011c20();
   input += synapse0x2011c60();
   input += synapse0x2011ca0();
   input += synapse0x2011ce0();
   input += synapse0x2011d20();
   input += synapse0x2011d60();
   input += synapse0x2011da0();
   input += synapse0x2011de0();
   input += synapse0x2011e20();
   input += synapse0x2011e60();
   input += synapse0x2011ea0();
   input += synapse0x2011ee0();
   input += synapse0x2011f20();
   input += synapse0x2011f60();
   input += synapse0x20119f0();
   input += synapse0x2011a30();
   input += synapse0x20120b0();
   input += synapse0x20120f0();
   input += synapse0x2012130();
   input += synapse0x2012170();
   input += synapse0x20121b0();
   input += synapse0x20121f0();
   input += synapse0x2012230();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2011860() {
   double input = input0x2011860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2012270() {
   double input = 0.816524;
   input += synapse0x2012490();
   input += synapse0x20124d0();
   input += synapse0x2012510();
   input += synapse0x2012550();
   input += synapse0x2012590();
   input += synapse0x20125d0();
   input += synapse0x2012610();
   input += synapse0x2012650();
   input += synapse0x2012690();
   input += synapse0x20126d0();
   input += synapse0x2012710();
   input += synapse0x2012750();
   input += synapse0x2012790();
   input += synapse0x20127d0();
   input += synapse0x2012810();
   input += synapse0x2012850();
   input += synapse0x1ff7860();
   input += synapse0x1ff78a0();
   input += synapse0x20129a0();
   input += synapse0x20129e0();
   input += synapse0x2012a20();
   input += synapse0x2012a60();
   input += synapse0x2012aa0();
   input += synapse0x2012ae0();
   input += synapse0x2012b20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2012270() {
   double input = input0x2012270();
   return (input * 40.6119)+147.237;
}

double nnFunc_25_25hi_3000ep__::synapse0x1f03980() {
   return (neuron0x1ff6820()*0.803557);
}

double nnFunc_25_25hi_3000ep__::synapse0x1fe5c90() {
   return (neuron0x1ff6b60()*-0.0139613);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7c40() {
   return (neuron0x1ff6ea0()*0.234767);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7c80() {
   return (neuron0x1ff71e0()*-3.95391);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7cc0() {
   return (neuron0x1ff7520()*3.78302);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8040() {
   return (neuron0x1ff6820()*0.289566);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8080() {
   return (neuron0x1ff6b60()*0.0291731);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff80c0() {
   return (neuron0x1ff6ea0()*-0.646235);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8100() {
   return (neuron0x1ff71e0()*-0.23683);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8140() {
   return (neuron0x1ff7520()*0.331589);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff84c0() {
   return (neuron0x1ff6820()*0.649408);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8500() {
   return (neuron0x1ff6b60()*0.0324395);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8540() {
   return (neuron0x1ff6ea0()*-0.0588699);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8580() {
   return (neuron0x1ff71e0()*-3.62778);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff85c0() {
   return (neuron0x1ff7520()*-0.0137383);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8940() {
   return (neuron0x1ff6820()*-0.445701);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8980() {
   return (neuron0x1ff6b60()*0.469812);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ef5b70() {
   return (neuron0x1ff6ea0()*0.472348);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ef5bb0() {
   return (neuron0x1ff71e0()*4.52354);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8ad0() {
   return (neuron0x1ff7520()*0.154188);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8e50() {
   return (neuron0x1ff6820()*-2.36929);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8e90() {
   return (neuron0x1ff6b60()*0.978386);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8ed0() {
   return (neuron0x1ff6ea0()*0.950892);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8f10() {
   return (neuron0x1ff71e0()*0.792821);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8f50() {
   return (neuron0x1ff7520()*0.539029);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff92d0() {
   return (neuron0x1ff6820()*2.4992);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9310() {
   return (neuron0x1ff6b60()*-0.986145);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9350() {
   return (neuron0x1ff6ea0()*0.537592);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9390() {
   return (neuron0x1ff71e0()*-1.90653);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff93d0() {
   return (neuron0x1ff7520()*0.762457);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9750() {
   return (neuron0x1ff6820()*-1.15841);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9790() {
   return (neuron0x1ff6b60()*0.503084);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff97d0() {
   return (neuron0x1ff6ea0()*0.646186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff89c0() {
   return (neuron0x1ff71e0()*1.91207);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8a00() {
   return (neuron0x1ff7520()*0.0963546);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9cd0() {
   return (neuron0x1ff6820()*2.10761);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9d10() {
   return (neuron0x1ff6b60()*-0.750156);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9d50() {
   return (neuron0x1ff6ea0()*-1.69544);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9d90() {
   return (neuron0x1ff71e0()*-4.80458);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9dd0() {
   return (neuron0x1ff7520()*-0.629031);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa150() {
   return (neuron0x1ff6820()*-1.9289);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa190() {
   return (neuron0x1ff6b60()*1.25437);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa1d0() {
   return (neuron0x1ff6ea0()*-0.720879);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa210() {
   return (neuron0x1ff71e0()*2.25748);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa250() {
   return (neuron0x1ff7520()*0.339899);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa5d0() {
   return (neuron0x1ff6820()*-1.63122);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa610() {
   return (neuron0x1ff6b60()*0.607242);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa650() {
   return (neuron0x1ff6ea0()*0.799051);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa690() {
   return (neuron0x1ff71e0()*2.88916);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa6d0() {
   return (neuron0x1ff7520()*0.0299674);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaa50() {
   return (neuron0x1ff6820()*0.44735);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaa90() {
   return (neuron0x1ff6b60()*0.0223238);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaad0() {
   return (neuron0x1ff6ea0()*-0.584596);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffab10() {
   return (neuron0x1ff71e0()*14.2383);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffab50() {
   return (neuron0x1ff7520()*-5.76962);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ef59c0() {
   return (neuron0x1ff6820()*0.0650904);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ef5a00() {
   return (neuron0x1ff6b60()*-0.00111805);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffafe0() {
   return (neuron0x1ff6ea0()*-0.0205325);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb020() {
   return (neuron0x1ff71e0()*-1.05519);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb060() {
   return (neuron0x1ff7520()*-0.990697);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb3e0() {
   return (neuron0x1ff6820()*-2.09021);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb420() {
   return (neuron0x1ff6b60()*0.021738);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb460() {
   return (neuron0x1ff6ea0()*-0.764825);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb4a0() {
   return (neuron0x1ff71e0()*18.337);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb4e0() {
   return (neuron0x1ff7520()*-12.0681);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ef6190() {
   return (neuron0x1ff6820()*-0.142463);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff99a0() {
   return (neuron0x1ff6b60()*-0.295891);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff99e0() {
   return (neuron0x1ff6ea0()*0.128742);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb930() {
   return (neuron0x1ff71e0()*3.78476);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb970() {
   return (neuron0x1ff7520()*-0.289192);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbcf0() {
   return (neuron0x1ff6820()*-0.820444);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbd30() {
   return (neuron0x1ff6b60()*-0.183602);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbd70() {
   return (neuron0x1ff6ea0()*0.129111);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbdb0() {
   return (neuron0x1ff71e0()*2.22737);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbdf0() {
   return (neuron0x1ff7520()*0.449209);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc170() {
   return (neuron0x1ff6820()*0.0509893);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff6a40() {
   return (neuron0x1ff6b60()*-0.0168821);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff6a80() {
   return (neuron0x1ff6ea0()*0.0766955);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff6d80() {
   return (neuron0x1ff71e0()*-7.15996);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff6dc0() {
   return (neuron0x1ff7520()*8.39464);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc890() {
   return (neuron0x1ff6820()*-2.52114);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc8d0() {
   return (neuron0x1ff6b60()*1.4171);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc910() {
   return (neuron0x1ff6ea0()*2.11669);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc950() {
   return (neuron0x1ff71e0()*4.62301);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc990() {
   return (neuron0x1ff7520()*0.14292);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcd10() {
   return (neuron0x1ff6820()*-1.49809);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcd50() {
   return (neuron0x1ff6b60()*0.65193);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcd90() {
   return (neuron0x1ff6ea0()*0.293541);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcdd0() {
   return (neuron0x1ff71e0()*0.855982);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffce10() {
   return (neuron0x1ff7520()*0.327563);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd190() {
   return (neuron0x1ff6820()*-0.0348537);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd1d0() {
   return (neuron0x1ff6b60()*-0.00641895);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd210() {
   return (neuron0x1ff6ea0()*-0.0692526);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd250() {
   return (neuron0x1ff71e0()*5.22243);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd290() {
   return (neuron0x1ff7520()*-5.42382);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd610() {
   return (neuron0x1ff6820()*0.0876055);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd650() {
   return (neuron0x1ff6b60()*-0.00412461);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd690() {
   return (neuron0x1ff6ea0()*-0.286182);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd6d0() {
   return (neuron0x1ff71e0()*-6.6297);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd710() {
   return (neuron0x1ff7520()*5.10755);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffda90() {
   return (neuron0x1ff6820()*6.99199);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdad0() {
   return (neuron0x1ff6b60()*0.0323103);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdb10() {
   return (neuron0x1ff6ea0()*2.80222);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdb50() {
   return (neuron0x1ff71e0()*2.1404);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdb90() {
   return (neuron0x1ff7520()*8.48592);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdf10() {
   return (neuron0x1ff6820()*0.392953);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdf50() {
   return (neuron0x1ff6b60()*-0.296793);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdf90() {
   return (neuron0x1ff6ea0()*-0.319028);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdfd0() {
   return (neuron0x1ff71e0()*-4.88706);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe010() {
   return (neuron0x1ff7520()*0.138353);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe390() {
   return (neuron0x1ff6820()*-1.0721);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe3d0() {
   return (neuron0x1ff6b60()*-0.0034899);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe410() {
   return (neuron0x1ff6ea0()*-1.15606);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe450() {
   return (neuron0x1ff71e0()*-3.09343);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe490() {
   return (neuron0x1ff7520()*1.87834);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe810() {
   return (neuron0x1ff6820()*0.0535155);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe850() {
   return (neuron0x1ff6b60()*-0.0144984);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe890() {
   return (neuron0x1ff6ea0()*0.525702);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe8d0() {
   return (neuron0x1ff71e0()*4.30028);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe910() {
   return (neuron0x1ff7520()*-4.36496);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffec90() {
   return (neuron0x1ff6820()*0.0433659);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffecd0() {
   return (neuron0x1ff6b60()*-0.256137);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffed10() {
   return (neuron0x1ff6ea0()*-0.823369);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffed50() {
   return (neuron0x1ff71e0()*-5.27804);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffed90() {
   return (neuron0x1ff7520()*0.0434725);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff88b0() {
   return (neuron0x1ff7990()*0.502494);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff88f0() {
   return (neuron0x1ff7d00()*-0.651167);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8dc0() {
   return (neuron0x1ff8180()*0.458879);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8e00() {
   return (neuron0x1ff8600()*-0.575088);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9240() {
   return (neuron0x1ff8b10()*-0.785393);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9280() {
   return (neuron0x1ff8f90()*-0.304778);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff96c0() {
   return (neuron0x1ff9410()*-0.0345081);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9700() {
   return (neuron0x1ff9a20()*-0.737907);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9c40() {
   return (neuron0x1ff9e10()*0.0166554);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9c80() {
   return (neuron0x1ffa290()*-0.199459);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa0c0() {
   return (neuron0x1ffa710()*1.24078);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa100() {
   return (neuron0x1ffab90()*0.426263);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa540() {
   return (neuron0x1ffb0a0()*0.909336);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa580() {
   return (neuron0x1ff9810()*-1.13856);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa9c0() {
   return (neuron0x1ffb9b0()*-1.45809);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaa00() {
   return (neuron0x1ffbe30()*0.3893);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffae40() {
   return (neuron0x1ffc700()*-0.500166);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffae80() {
   return (neuron0x1ffc9d0()*0.271029);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb350() {
   return (neuron0x1ffce50()*1.11906);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb390() {
   return (neuron0x1ffd2d0()*0.99045);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbc60() {
   return (neuron0x1ffd750()*-0.890082);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffbca0() {
   return (neuron0x1ffdbd0()*0.792623);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc0e0() {
   return (neuron0x1ffe050()*0.462713);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc120() {
   return (neuron0x1ffe4d0()*-0.687484);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7740() {
   return (neuron0x1ffe950()*1.13482);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb7c0() {
   return (neuron0x1ff7990()*0.103377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb800() {
   return (neuron0x1ff7d00()*0.0528134);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb840() {
   return (neuron0x1ff8180()*0.314069);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb880() {
   return (neuron0x1ff8600()*-0.502842);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb8c0() {
   return (neuron0x1ff8b10()*-0.592309);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7780() {
   return (neuron0x1ff8f90()*0.341236);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffda00() {
   return (neuron0x1ff9410()*-0.0716369);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffda40() {
   return (neuron0x1ff9a20()*0.0681401);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffde80() {
   return (neuron0x1ff9e10()*0.133945);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffdec0() {
   return (neuron0x1ffa290()*0.223711);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe300() {
   return (neuron0x1ffa710()*-0.264231);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe340() {
   return (neuron0x1ffab90()*-0.467323);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe780() {
   return (neuron0x1ffb0a0()*0.0140041);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe7c0() {
   return (neuron0x1ff9810()*-0.657938);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffec00() {
   return (neuron0x1ffb9b0()*-0.381303);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffec40() {
   return (neuron0x1ffbe30()*-0.0196877);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7bb0() {
   return (neuron0x1ffc700()*-0.0439652);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7bf0() {
   return (neuron0x1ffc9d0()*0.0262798);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcc80() {
   return (neuron0x1ffce50()*-0.480264);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffccc0() {
   return (neuron0x1ffd2d0()*-0.272327);
}

double nnFunc_25_25hi_3000ep__::synapse0x1f03a50() {
   return (neuron0x1ffd750()*0.158771);
}

double nnFunc_25_25hi_3000ep__::synapse0x1f03a90() {
   return (neuron0x1ffdbd0()*-0.0953143);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001310() {
   return (neuron0x1ffe050()*-0.297352);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001350() {
   return (neuron0x1ffe4d0()*0.20828);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001390() {
   return (neuron0x1ffe950()*0.113503);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaed0() {
   return (neuron0x1ff7990()*-1.0874);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaf10() {
   return (neuron0x1ff7d00()*0.404211);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaf50() {
   return (neuron0x1ff8180()*-0.232301);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffaf90() {
   return (neuron0x1ff8600()*-0.45197);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001920() {
   return (neuron0x1ff8b10()*-0.334178);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001960() {
   return (neuron0x1ff8f90()*-0.611642);
}

double nnFunc_25_25hi_3000ep__::synapse0x20019a0() {
   return (neuron0x1ff9410()*-0.304746);
}

double nnFunc_25_25hi_3000ep__::synapse0x20019e0() {
   return (neuron0x1ff9a20()*-0.192397);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001a20() {
   return (neuron0x1ff9e10()*-1.20481);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001a60() {
   return (neuron0x1ffa290()*-0.941151);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001aa0() {
   return (neuron0x1ffa710()*-0.768069);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001ae0() {
   return (neuron0x1ffab90()*-0.0471251);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001b20() {
   return (neuron0x1ffb0a0()*-0.914185);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001b60() {
   return (neuron0x1ff9810()*-0.256396);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001ba0() {
   return (neuron0x1ffb9b0()*-0.026208);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001be0() {
   return (neuron0x1ffbe30()*0.46546);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001560() {
   return (neuron0x1ffc700()*-0.340966);
}

double nnFunc_25_25hi_3000ep__::synapse0x20015a0() {
   return (neuron0x1ffc9d0()*-0.341024);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001d30() {
   return (neuron0x1ffce50()*0.40495);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001d70() {
   return (neuron0x1ffd2d0()*-0.92483);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001db0() {
   return (neuron0x1ffd750()*-0.261186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001df0() {
   return (neuron0x1ffdbd0()*-0.462442);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001e30() {
   return (neuron0x1ffe050()*0.23773);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001e70() {
   return (neuron0x1ffe4d0()*0.220634);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001eb0() {
   return (neuron0x1ffe950()*-0.0156215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002230() {
   return (neuron0x1ff7990()*-0.655156);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002270() {
   return (neuron0x1ff7d00()*0.299003);
}

double nnFunc_25_25hi_3000ep__::synapse0x20022b0() {
   return (neuron0x1ff8180()*-0.181944);
}

double nnFunc_25_25hi_3000ep__::synapse0x20022f0() {
   return (neuron0x1ff8600()*1.11333);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002330() {
   return (neuron0x1ff8b10()*0.744951);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002370() {
   return (neuron0x1ff8f90()*0.559456);
}

double nnFunc_25_25hi_3000ep__::synapse0x20023b0() {
   return (neuron0x1ff9410()*-0.275325);
}

double nnFunc_25_25hi_3000ep__::synapse0x20023f0() {
   return (neuron0x1ff9a20()*0.523921);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002430() {
   return (neuron0x1ff9e10()*0.515179);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002470() {
   return (neuron0x1ffa290()*0.0274323);
}

double nnFunc_25_25hi_3000ep__::synapse0x20024b0() {
   return (neuron0x1ffa710()*1.0186);
}

double nnFunc_25_25hi_3000ep__::synapse0x20024f0() {
   return (neuron0x1ffab90()*-0.172413);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002530() {
   return (neuron0x1ffb0a0()*-1.05835);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002570() {
   return (neuron0x1ff9810()*1.14633);
}

double nnFunc_25_25hi_3000ep__::synapse0x20025b0() {
   return (neuron0x1ffb9b0()*1.37);
}

double nnFunc_25_25hi_3000ep__::synapse0x20025f0() {
   return (neuron0x1ffbe30()*-0.353479);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002080() {
   return (neuron0x1ffc700()*1.27591);
}

double nnFunc_25_25hi_3000ep__::synapse0x20020c0() {
   return (neuron0x1ffc9d0()*0.499532);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002740() {
   return (neuron0x1ffce50()*-0.0399445);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002780() {
   return (neuron0x1ffd2d0()*-1.71241);
}

double nnFunc_25_25hi_3000ep__::synapse0x20027c0() {
   return (neuron0x1ffd750()*0.736948);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002800() {
   return (neuron0x1ffdbd0()*-1.02344);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002840() {
   return (neuron0x1ffe050()*0.65985);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002880() {
   return (neuron0x1ffe4d0()*0.441565);
}

double nnFunc_25_25hi_3000ep__::synapse0x20028c0() {
   return (neuron0x1ffe950()*-0.513725);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002c40() {
   return (neuron0x1ff7990()*-1.21298);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002c80() {
   return (neuron0x1ff7d00()*-0.0233346);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002cc0() {
   return (neuron0x1ff8180()*-0.54477);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002d00() {
   return (neuron0x1ff8600()*0.599216);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002d40() {
   return (neuron0x1ff8b10()*0.184734);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002d80() {
   return (neuron0x1ff8f90()*-0.756748);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002dc0() {
   return (neuron0x1ff9410()*0.723839);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002e00() {
   return (neuron0x1ff9a20()*0.688956);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002e40() {
   return (neuron0x1ff9e10()*0.550632);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002e80() {
   return (neuron0x1ffa290()*0.771891);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002ec0() {
   return (neuron0x1ffa710()*-0.296812);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002f00() {
   return (neuron0x1ffab90()*1.68462);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002f40() {
   return (neuron0x1ffb0a0()*-3.23306);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002f80() {
   return (neuron0x1ff9810()*0.803029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002fc0() {
   return (neuron0x1ffb9b0()*0.926202);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003000() {
   return (neuron0x1ffbe30()*-1.26401);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002a90() {
   return (neuron0x1ffc700()*0.386271);
}

double nnFunc_25_25hi_3000ep__::synapse0x2002ad0() {
   return (neuron0x1ffc9d0()*0.0777201);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003150() {
   return (neuron0x1ffce50()*-2.3885);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003190() {
   return (neuron0x1ffd2d0()*1.00422);
}

double nnFunc_25_25hi_3000ep__::synapse0x20031d0() {
   return (neuron0x1ffd750()*0.631493);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003210() {
   return (neuron0x1ffdbd0()*-0.234526);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003250() {
   return (neuron0x1ffe050()*-0.256219);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003290() {
   return (neuron0x1ffe4d0()*1.05213);
}

double nnFunc_25_25hi_3000ep__::synapse0x20032d0() {
   return (neuron0x1ffe950()*0.0500738);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003650() {
   return (neuron0x1ff7990()*0.266105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003690() {
   return (neuron0x1ff7d00()*0.942759);
}

double nnFunc_25_25hi_3000ep__::synapse0x20036d0() {
   return (neuron0x1ff8180()*0.511702);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003710() {
   return (neuron0x1ff8600()*0.0598027);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003750() {
   return (neuron0x1ff8b10()*1.0291);
}

double nnFunc_25_25hi_3000ep__::synapse0x2003790() {
   return (neuron0x1ff8f90()*0.211727);
}

double nnFunc_25_25hi_3000ep__::synapse0x20037d0() {
   return (neuron0x1ff9410()*0.458454);
}

double nnFunc_25_25hi_3000ep__::synapse0x20009f0() {
   return (neuron0x1ff9a20()*0.216277);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000a30() {
   return (neuron0x1ff9e10()*0.780682);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000a70() {
   return (neuron0x1ffa290()*0.320096);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000ab0() {
   return (neuron0x1ffa710()*0.516628);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000af0() {
   return (neuron0x1ffab90()*0.379879);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000b30() {
   return (neuron0x1ffb0a0()*0.559417);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000b70() {
   return (neuron0x1ff9810()*0.882103);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000bb0() {
   return (neuron0x1ffb9b0()*0.484697);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000bf0() {
   return (neuron0x1ffbe30()*0.218788);
}

double nnFunc_25_25hi_3000ep__::synapse0x20034a0() {
   return (neuron0x1ffc700()*0.719251);
}

double nnFunc_25_25hi_3000ep__::synapse0x20034e0() {
   return (neuron0x1ffc9d0()*-0.511687);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000d40() {
   return (neuron0x1ffce50()*0.63741);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000d80() {
   return (neuron0x1ffd2d0()*-0.416004);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000dc0() {
   return (neuron0x1ffd750()*1.17928);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000e00() {
   return (neuron0x1ffdbd0()*0.079825);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000e40() {
   return (neuron0x1ffe050()*0.375896);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000e80() {
   return (neuron0x1ffe4d0()*0.0440695);
}

double nnFunc_25_25hi_3000ep__::synapse0x2000ec0() {
   return (neuron0x1ffe950()*-0.566896);
}

double nnFunc_25_25hi_3000ep__::synapse0x20011b0() {
   return (neuron0x1ff7990()*0.395495);
}

double nnFunc_25_25hi_3000ep__::synapse0x20048b0() {
   return (neuron0x1ff7d00()*-0.244612);
}

double nnFunc_25_25hi_3000ep__::synapse0x20048f0() {
   return (neuron0x1ff8180()*0.744912);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004930() {
   return (neuron0x1ff8600()*0.233114);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004970() {
   return (neuron0x1ff8b10()*0.368294);
}

double nnFunc_25_25hi_3000ep__::synapse0x20049b0() {
   return (neuron0x1ff8f90()*0.739198);
}

double nnFunc_25_25hi_3000ep__::synapse0x20049f0() {
   return (neuron0x1ff9410()*0.202565);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004a30() {
   return (neuron0x1ff9a20()*-0.570344);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004a70() {
   return (neuron0x1ff9e10()*0.236126);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004ab0() {
   return (neuron0x1ffa290()*0.598726);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004af0() {
   return (neuron0x1ffa710()*-0.0679779);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004b30() {
   return (neuron0x1ffab90()*0.102847);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004b70() {
   return (neuron0x1ffb0a0()*1.40443);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004bb0() {
   return (neuron0x1ff9810()*0.651949);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004bf0() {
   return (neuron0x1ffb9b0()*-0.147479);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004c30() {
   return (neuron0x1ffbe30()*-0.389734);
}

double nnFunc_25_25hi_3000ep__::synapse0x2001090() {
   return (neuron0x1ffc700()*0.116589);
}

double nnFunc_25_25hi_3000ep__::synapse0x20010d0() {
   return (neuron0x1ffc9d0()*0.804678);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004d80() {
   return (neuron0x1ffce50()*-1.11236);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004dc0() {
   return (neuron0x1ffd2d0()*-0.039317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004e00() {
   return (neuron0x1ffd750()*-0.62071);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004e40() {
   return (neuron0x1ffdbd0()*0.14432);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004e80() {
   return (neuron0x1ffe050()*-1.19929);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004ec0() {
   return (neuron0x1ffe4d0()*-0.013412);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004f00() {
   return (neuron0x1ffe950()*0.957365);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005280() {
   return (neuron0x1ff7990()*0.806485);
}

double nnFunc_25_25hi_3000ep__::synapse0x20052c0() {
   return (neuron0x1ff7d00()*-0.0538056);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005300() {
   return (neuron0x1ff8180()*0.512695);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005340() {
   return (neuron0x1ff8600()*-1.8297);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005380() {
   return (neuron0x1ff8b10()*-0.460985);
}

double nnFunc_25_25hi_3000ep__::synapse0x20053c0() {
   return (neuron0x1ff8f90()*-0.212714);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005400() {
   return (neuron0x1ff9410()*-0.207612);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005440() {
   return (neuron0x1ff9a20()*-0.304784);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005480() {
   return (neuron0x1ff9e10()*0.247009);
}

double nnFunc_25_25hi_3000ep__::synapse0x20054c0() {
   return (neuron0x1ffa290()*-0.0053128);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005500() {
   return (neuron0x1ffa710()*-1.24283);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005540() {
   return (neuron0x1ffab90()*-0.306099);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005580() {
   return (neuron0x1ffb0a0()*2.14221);
}

double nnFunc_25_25hi_3000ep__::synapse0x20055c0() {
   return (neuron0x1ff9810()*-1.35894);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005600() {
   return (neuron0x1ffb9b0()*-2.43815);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005640() {
   return (neuron0x1ffbe30()*-0.0454695);
}

double nnFunc_25_25hi_3000ep__::synapse0x20050d0() {
   return (neuron0x1ffc700()*-1.64368);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005110() {
   return (neuron0x1ffc9d0()*-0.67298);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005790() {
   return (neuron0x1ffce50()*-0.375676);
}

double nnFunc_25_25hi_3000ep__::synapse0x20057d0() {
   return (neuron0x1ffd2d0()*2.09328);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005810() {
   return (neuron0x1ffd750()*-1.14334);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005850() {
   return (neuron0x1ffdbd0()*0.991402);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005890() {
   return (neuron0x1ffe050()*-0.00879711);
}

double nnFunc_25_25hi_3000ep__::synapse0x20058d0() {
   return (neuron0x1ffe4d0()*-0.565787);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005910() {
   return (neuron0x1ffe950()*0.947815);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005c90() {
   return (neuron0x1ff7990()*-0.676607);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005cd0() {
   return (neuron0x1ff7d00()*0.836746);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005d10() {
   return (neuron0x1ff8180()*-0.796598);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005d50() {
   return (neuron0x1ff8600()*0.727481);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005d90() {
   return (neuron0x1ff8b10()*0.0639541);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005dd0() {
   return (neuron0x1ff8f90()*0.813982);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005e10() {
   return (neuron0x1ff9410()*-1.23591);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005e50() {
   return (neuron0x1ff9a20()*0.633155);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005e90() {
   return (neuron0x1ff9e10()*-0.66631);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005ed0() {
   return (neuron0x1ffa290()*-0.465067);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005f10() {
   return (neuron0x1ffa710()*1.93281);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005f50() {
   return (neuron0x1ffab90()*0.750676);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005f90() {
   return (neuron0x1ffb0a0()*-3.68159);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005fd0() {
   return (neuron0x1ff9810()*1.17482);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006010() {
   return (neuron0x1ffb9b0()*2.22569);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006050() {
   return (neuron0x1ffbe30()*-0.182451);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005ae0() {
   return (neuron0x1ffc700()*0.743155);
}

double nnFunc_25_25hi_3000ep__::synapse0x2005b20() {
   return (neuron0x1ffc9d0()*-0.234075);
}

double nnFunc_25_25hi_3000ep__::synapse0x20061a0() {
   return (neuron0x1ffce50()*6.3956);
}

double nnFunc_25_25hi_3000ep__::synapse0x20061e0() {
   return (neuron0x1ffd2d0()*-5.4528);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006220() {
   return (neuron0x1ffd750()*3.96518);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006260() {
   return (neuron0x1ffdbd0()*-1.56527);
}

double nnFunc_25_25hi_3000ep__::synapse0x20062a0() {
   return (neuron0x1ffe050()*0.371443);
}

double nnFunc_25_25hi_3000ep__::synapse0x20062e0() {
   return (neuron0x1ffe4d0()*0.639715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006320() {
   return (neuron0x1ffe950()*-1.12762);
}

double nnFunc_25_25hi_3000ep__::synapse0x20066a0() {
   return (neuron0x1ff7990()*0.157966);
}

double nnFunc_25_25hi_3000ep__::synapse0x20066e0() {
   return (neuron0x1ff7d00()*-0.207707);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006720() {
   return (neuron0x1ff8180()*0.655828);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006760() {
   return (neuron0x1ff8600()*-0.980663);
}

double nnFunc_25_25hi_3000ep__::synapse0x20067a0() {
   return (neuron0x1ff8b10()*-0.762891);
}

double nnFunc_25_25hi_3000ep__::synapse0x20067e0() {
   return (neuron0x1ff8f90()*-0.497571);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006820() {
   return (neuron0x1ff9410()*-0.733238);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006860() {
   return (neuron0x1ff9a20()*-0.0686169);
}

double nnFunc_25_25hi_3000ep__::synapse0x20068a0() {
   return (neuron0x1ff9e10()*-0.854653);
}

double nnFunc_25_25hi_3000ep__::synapse0x20068e0() {
   return (neuron0x1ffa290()*-0.422027);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006920() {
   return (neuron0x1ffa710()*-1.08903);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006960() {
   return (neuron0x1ffab90()*0.26017);
}

double nnFunc_25_25hi_3000ep__::synapse0x20069a0() {
   return (neuron0x1ffb0a0()*1.42356);
}

double nnFunc_25_25hi_3000ep__::synapse0x20069e0() {
   return (neuron0x1ff9810()*-0.831649);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006a20() {
   return (neuron0x1ffb9b0()*-1.59941);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006a60() {
   return (neuron0x1ffbe30()*0.347904);
}

double nnFunc_25_25hi_3000ep__::synapse0x20064f0() {
   return (neuron0x1ffc700()*-1.38031);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006530() {
   return (neuron0x1ffc9d0()*-0.746476);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006bb0() {
   return (neuron0x1ffce50()*-0.116848);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006bf0() {
   return (neuron0x1ffd2d0()*1.82972);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006c30() {
   return (neuron0x1ffd750()*-0.758045);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006c70() {
   return (neuron0x1ffdbd0()*0.890247);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006cb0() {
   return (neuron0x1ffe050()*-0.464418);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006cf0() {
   return (neuron0x1ffe4d0()*-0.0975428);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006d30() {
   return (neuron0x1ffe950()*0.80333);
}

double nnFunc_25_25hi_3000ep__::synapse0x20070b0() {
   return (neuron0x1ff7990()*-0.0511307);
}

double nnFunc_25_25hi_3000ep__::synapse0x20070f0() {
   return (neuron0x1ff7d00()*0.282122);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007130() {
   return (neuron0x1ff8180()*0.170102);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007170() {
   return (neuron0x1ff8600()*-1.18535);
}

double nnFunc_25_25hi_3000ep__::synapse0x20071b0() {
   return (neuron0x1ff8b10()*-0.242603);
}

double nnFunc_25_25hi_3000ep__::synapse0x20071f0() {
   return (neuron0x1ff8f90()*-0.526309);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007230() {
   return (neuron0x1ff9410()*0.0320764);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007270() {
   return (neuron0x1ff9a20()*0.181853);
}

double nnFunc_25_25hi_3000ep__::synapse0x20072b0() {
   return (neuron0x1ff9e10()*-0.0816466);
}

double nnFunc_25_25hi_3000ep__::synapse0x20072f0() {
   return (neuron0x1ffa290()*0.101061);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007330() {
   return (neuron0x1ffa710()*-0.235517);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007370() {
   return (neuron0x1ffab90()*0.191215);
}

double nnFunc_25_25hi_3000ep__::synapse0x20073b0() {
   return (neuron0x1ffb0a0()*0.533556);
}

double nnFunc_25_25hi_3000ep__::synapse0x20073f0() {
   return (neuron0x1ff9810()*-0.591067);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007430() {
   return (neuron0x1ffb9b0()*-0.675782);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007470() {
   return (neuron0x1ffbe30()*0.301607);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006f00() {
   return (neuron0x1ffc700()*-0.508308);
}

double nnFunc_25_25hi_3000ep__::synapse0x2006f40() {
   return (neuron0x1ffc9d0()*-0.627997);
}

double nnFunc_25_25hi_3000ep__::synapse0x20075c0() {
   return (neuron0x1ffce50()*-0.555336);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007600() {
   return (neuron0x1ffd2d0()*0.53616);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007640() {
   return (neuron0x1ffd750()*-1.03074);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007680() {
   return (neuron0x1ffdbd0()*-0.0236178);
}

double nnFunc_25_25hi_3000ep__::synapse0x20076c0() {
   return (neuron0x1ffe050()*-0.541612);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007700() {
   return (neuron0x1ffe4d0()*-0.612391);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007740() {
   return (neuron0x1ffe950()*0.286148);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007ac0() {
   return (neuron0x1ff7990()*-0.528084);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007b00() {
   return (neuron0x1ff7d00()*0.371193);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007b40() {
   return (neuron0x1ff8180()*-0.210384);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007b80() {
   return (neuron0x1ff8600()*1.03266);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007bc0() {
   return (neuron0x1ff8b10()*0.522956);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007c00() {
   return (neuron0x1ff8f90()*0.620673);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007c40() {
   return (neuron0x1ff9410()*0.190035);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007c80() {
   return (neuron0x1ff9a20()*0.00858687);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007cc0() {
   return (neuron0x1ff9e10()*1.05981);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007d00() {
   return (neuron0x1ffa290()*0.632227);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007d40() {
   return (neuron0x1ffa710()*0.490109);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007d80() {
   return (neuron0x1ffab90()*0.14101);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007dc0() {
   return (neuron0x1ffb0a0()*-1.09238);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007e00() {
   return (neuron0x1ff9810()*0.732749);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007e40() {
   return (neuron0x1ffb9b0()*0.838343);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007e80() {
   return (neuron0x1ffbe30()*-0.0815916);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007910() {
   return (neuron0x1ffc700()*1.25613);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007950() {
   return (neuron0x1ffc9d0()*0.59998);
}

double nnFunc_25_25hi_3000ep__::synapse0x2007fd0() {
   return (neuron0x1ffce50()*0.172622);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008010() {
   return (neuron0x1ffd2d0()*-1.43136);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008050() {
   return (neuron0x1ffd750()*0.590367);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008090() {
   return (neuron0x1ffdbd0()*-0.475823);
}

double nnFunc_25_25hi_3000ep__::synapse0x20080d0() {
   return (neuron0x1ffe050()*0.259792);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008110() {
   return (neuron0x1ffe4d0()*0.527806);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008150() {
   return (neuron0x1ffe950()*-0.699876);
}

double nnFunc_25_25hi_3000ep__::synapse0x20084d0() {
   return (neuron0x1ff7990()*0.325152);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008510() {
   return (neuron0x1ff7d00()*-0.0187799);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008550() {
   return (neuron0x1ff8180()*-0.144754);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008590() {
   return (neuron0x1ff8600()*0.129587);
}

double nnFunc_25_25hi_3000ep__::synapse0x20085d0() {
   return (neuron0x1ff8b10()*0.200133);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008610() {
   return (neuron0x1ff8f90()*0.166656);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008650() {
   return (neuron0x1ff9410()*-0.728582);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008690() {
   return (neuron0x1ff9a20()*-0.0894045);
}

double nnFunc_25_25hi_3000ep__::synapse0x20086d0() {
   return (neuron0x1ff9e10()*0.439752);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008710() {
   return (neuron0x1ffa290()*-0.39818);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008750() {
   return (neuron0x1ffa710()*-1.79536);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008790() {
   return (neuron0x1ffab90()*-0.0792497);
}

double nnFunc_25_25hi_3000ep__::synapse0x20087d0() {
   return (neuron0x1ffb0a0()*-0.819265);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008810() {
   return (neuron0x1ff9810()*0.0158339);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008850() {
   return (neuron0x1ffb9b0()*0.249231);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008890() {
   return (neuron0x1ffbe30()*-0.683474);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008320() {
   return (neuron0x1ffc700()*0.264222);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008360() {
   return (neuron0x1ffc9d0()*0.682501);
}

double nnFunc_25_25hi_3000ep__::synapse0x20089e0() {
   return (neuron0x1ffce50()*-1.59899);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008a20() {
   return (neuron0x1ffd2d0()*1.09617);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008a60() {
   return (neuron0x1ffd750()*-0.951784);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008aa0() {
   return (neuron0x1ffdbd0()*-0.225844);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008ae0() {
   return (neuron0x1ffe050()*0.861561);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008b20() {
   return (neuron0x1ffe4d0()*-1.42381);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008b60() {
   return (neuron0x1ffe950()*-0.262563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008ee0() {
   return (neuron0x1ff7990()*-0.496875);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008f20() {
   return (neuron0x1ff7d00()*0.223269);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008f60() {
   return (neuron0x1ff8180()*-0.55682);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008fa0() {
   return (neuron0x1ff8600()*0.6019);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008fe0() {
   return (neuron0x1ff8b10()*0.191026);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009020() {
   return (neuron0x1ff8f90()*0.233078);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009060() {
   return (neuron0x1ff9410()*-0.0289412);
}

double nnFunc_25_25hi_3000ep__::synapse0x20090a0() {
   return (neuron0x1ff9a20()*0.0107749);
}

double nnFunc_25_25hi_3000ep__::synapse0x20090e0() {
   return (neuron0x1ff9e10()*-0.0657121);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009120() {
   return (neuron0x1ffa290()*0.111731);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009160() {
   return (neuron0x1ffa710()*-0.105178);
}

double nnFunc_25_25hi_3000ep__::synapse0x20091a0() {
   return (neuron0x1ffab90()*-0.03807);
}

double nnFunc_25_25hi_3000ep__::synapse0x20091e0() {
   return (neuron0x1ffb0a0()*-0.267104);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009220() {
   return (neuron0x1ff9810()*0.410658);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009260() {
   return (neuron0x1ffb9b0()*1.11789);
}

double nnFunc_25_25hi_3000ep__::synapse0x20092a0() {
   return (neuron0x1ffbe30()*-0.997096);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008d30() {
   return (neuron0x1ffc700()*0.236376);
}

double nnFunc_25_25hi_3000ep__::synapse0x2008d70() {
   return (neuron0x1ffc9d0()*-0.104874);
}

double nnFunc_25_25hi_3000ep__::synapse0x20093f0() {
   return (neuron0x1ffce50()*-0.300332);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009430() {
   return (neuron0x1ffd2d0()*-0.403471);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009470() {
   return (neuron0x1ffd750()*0.920771);
}

double nnFunc_25_25hi_3000ep__::synapse0x20094b0() {
   return (neuron0x1ffdbd0()*-0.935082);
}

double nnFunc_25_25hi_3000ep__::synapse0x20094f0() {
   return (neuron0x1ffe050()*0.54239);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009530() {
   return (neuron0x1ffe4d0()*0.322848);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009570() {
   return (neuron0x1ffe950()*-0.356732);
}

double nnFunc_25_25hi_3000ep__::synapse0x20098f0() {
   return (neuron0x1ff7990()*-0.524676);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009930() {
   return (neuron0x1ff7d00()*-0.177787);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009970() {
   return (neuron0x1ff8180()*0.537035);
}

double nnFunc_25_25hi_3000ep__::synapse0x20099b0() {
   return (neuron0x1ff8600()*-0.319987);
}

double nnFunc_25_25hi_3000ep__::synapse0x20099f0() {
   return (neuron0x1ff8b10()*-1.1247);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009a30() {
   return (neuron0x1ff8f90()*0.181239);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009a70() {
   return (neuron0x1ff9410()*-0.868836);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009ab0() {
   return (neuron0x1ff9a20()*0.0943182);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009af0() {
   return (neuron0x1ff9e10()*0.289896);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009b30() {
   return (neuron0x1ffa290()*-1.11492);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009b70() {
   return (neuron0x1ffa710()*-0.450236);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009bb0() {
   return (neuron0x1ffab90()*-0.397811);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009bf0() {
   return (neuron0x1ffb0a0()*-1.85906);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009c30() {
   return (neuron0x1ff9810()*-0.511248);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009c70() {
   return (neuron0x1ffb9b0()*-0.681354);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009cb0() {
   return (neuron0x1ffbe30()*-0.879874);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009740() {
   return (neuron0x1ffc700()*-0.481731);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009780() {
   return (neuron0x1ffc9d0()*-0.280846);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009e00() {
   return (neuron0x1ffce50()*-1.08615);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009e40() {
   return (neuron0x1ffd2d0()*-0.0180522);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009e80() {
   return (neuron0x1ffd750()*-1.23199);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009ec0() {
   return (neuron0x1ffdbd0()*-0.20757);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009f00() {
   return (neuron0x1ffe050()*-0.232029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009f40() {
   return (neuron0x1ffe4d0()*-1.30155);
}

double nnFunc_25_25hi_3000ep__::synapse0x2009f80() {
   return (neuron0x1ffe950()*0.142783);
}

double nnFunc_25_25hi_3000ep__::synapse0x200a300() {
   return (neuron0x1ff7990()*0.242514);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7b20() {
   return (neuron0x1ff7d00()*0.107296);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7b60() {
   return (neuron0x1ff8180()*0.127042);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7f20() {
   return (neuron0x1ff8600()*0.0709298);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7f60() {
   return (neuron0x1ff8b10()*0.289138);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff83a0() {
   return (neuron0x1ff8f90()*0.559595);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff83e0() {
   return (neuron0x1ff9410()*0.450104);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8820() {
   return (neuron0x1ff9a20()*-0.555474);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8860() {
   return (neuron0x1ff9e10()*-0.153884);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8d30() {
   return (neuron0x1ffa290()*0.579847);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff8d70() {
   return (neuron0x1ffa710()*-0.656493);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff91b0() {
   return (neuron0x1ffab90()*1.82388);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff91f0() {
   return (neuron0x1ffb0a0()*0.805388);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9630() {
   return (neuron0x1ff9810()*0.090049);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9670() {
   return (neuron0x1ffb9b0()*-1.1631);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9bb0() {
   return (neuron0x1ffbe30()*3.75471);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff9bf0() {
   return (neuron0x1ffc700()*-0.496387);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa030() {
   return (neuron0x1ffc9d0()*0.672766);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa070() {
   return (neuron0x1ffce50()*0.653844);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa4b0() {
   return (neuron0x1ffd2d0()*2.29332);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa4f0() {
   return (neuron0x1ffd750()*-0.696985);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa930() {
   return (neuron0x1ffdbd0()*0.766197);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffa970() {
   return (neuron0x1ffe050()*-0.255598);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffadb0() {
   return (neuron0x1ffe4d0()*-0.0136435);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffadf0() {
   return (neuron0x1ffe950()*1.34392);
}

double nnFunc_25_25hi_3000ep__::synapse0x2004770() {
   return (neuron0x1ff7990()*-1.48682);
}

double nnFunc_25_25hi_3000ep__::synapse0x20047b0() {
   return (neuron0x1ff7d00()*0.043986);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc050() {
   return (neuron0x1ff8180()*0.445382);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffc090() {
   return (neuron0x1ff8600()*0.389082);
}

double nnFunc_25_25hi_3000ep__::synapse0x200a150() {
   return (neuron0x1ff8b10()*-0.597675);
}

double nnFunc_25_25hi_3000ep__::synapse0x200a190() {
   return (neuron0x1ff8f90()*0.364656);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7400() {
   return (neuron0x1ff9410()*0.0251313);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7440() {
   return (neuron0x1ff9a20()*0.152627);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcbf0() {
   return (neuron0x1ff9e10()*0.505878);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffcc30() {
   return (neuron0x1ffa290()*0.0676213);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd070() {
   return (neuron0x1ffa710()*0.520259);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd0b0() {
   return (neuron0x1ffab90()*-0.296614);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd4f0() {
   return (neuron0x1ffb0a0()*0.280395);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd530() {
   return (neuron0x1ff9810()*-0.0300826);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd970() {
   return (neuron0x1ffb9b0()*0.0655671);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffd9b0() {
   return (neuron0x1ffbe30()*-6.90507);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffddf0() {
   return (neuron0x1ffc700()*-0.335409);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffde30() {
   return (neuron0x1ffc9d0()*-0.129427);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe270() {
   return (neuron0x1ffce50()*0.489981);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe2b0() {
   return (neuron0x1ffd2d0()*-0.33881);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe6f0() {
   return (neuron0x1ffd750()*2.71172);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffe730() {
   return (neuron0x1ffdbd0()*0.125183);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffeb70() {
   return (neuron0x1ffe050()*-1.27338);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffebb0() {
   return (neuron0x1ffe4d0()*0.496384);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb2c0() {
   return (neuron0x1ffe950()*0.211073);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ffb300() {
   return (neuron0x1ff7990()*0.0334652);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d570() {
   return (neuron0x1ff7d00()*-1.09849);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d5b0() {
   return (neuron0x1ff8180()*0.136467);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d5f0() {
   return (neuron0x1ff8600()*-0.5198);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d630() {
   return (neuron0x1ff8b10()*-0.912474);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d670() {
   return (neuron0x1ff8f90()*-0.108778);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d6b0() {
   return (neuron0x1ff9410()*-0.249029);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d6f0() {
   return (neuron0x1ff9a20()*-0.429415);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d730() {
   return (neuron0x1ff9e10()*-0.699398);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d770() {
   return (neuron0x1ffa290()*-0.481956);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d7b0() {
   return (neuron0x1ffa710()*-0.259881);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d7f0() {
   return (neuron0x1ffab90()*-0.126604);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d830() {
   return (neuron0x1ffb0a0()*-0.301615);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d870() {
   return (neuron0x1ff9810()*-1.10159);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d8b0() {
   return (neuron0x1ffb9b0()*-1.17528);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d8f0() {
   return (neuron0x1ffbe30()*-0.0636638);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d3c0() {
   return (neuron0x1ffc700()*-0.75148);
}

double nnFunc_25_25hi_3000ep__::synapse0x200d400() {
   return (neuron0x1ffc9d0()*-0.0744332);
}

double nnFunc_25_25hi_3000ep__::synapse0x200da40() {
   return (neuron0x1ffce50()*-0.125761);
}

double nnFunc_25_25hi_3000ep__::synapse0x200da80() {
   return (neuron0x1ffd2d0()*0.71312);
}

double nnFunc_25_25hi_3000ep__::synapse0x200dac0() {
   return (neuron0x1ffd750()*-0.816549);
}

double nnFunc_25_25hi_3000ep__::synapse0x200db00() {
   return (neuron0x1ffdbd0()*-0.198605);
}

double nnFunc_25_25hi_3000ep__::synapse0x200db40() {
   return (neuron0x1ffe050()*-0.76326);
}

double nnFunc_25_25hi_3000ep__::synapse0x200db80() {
   return (neuron0x1ffe4d0()*-0.192867);
}

double nnFunc_25_25hi_3000ep__::synapse0x200dbc0() {
   return (neuron0x1ffe950()*0.0907343);
}

double nnFunc_25_25hi_3000ep__::synapse0x200df40() {
   return (neuron0x1ff7990()*0.273314);
}

double nnFunc_25_25hi_3000ep__::synapse0x200df80() {
   return (neuron0x1ff7d00()*0.30929);
}

double nnFunc_25_25hi_3000ep__::synapse0x200dfc0() {
   return (neuron0x1ff8180()*-1.08197);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e000() {
   return (neuron0x1ff8600()*1.58555);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e040() {
   return (neuron0x1ff8b10()*0.438894);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e080() {
   return (neuron0x1ff8f90()*0.721201);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e0c0() {
   return (neuron0x1ff9410()*-0.00120925);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e100() {
   return (neuron0x1ff9a20()*0.180256);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e140() {
   return (neuron0x1ff9e10()*0.0551947);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e180() {
   return (neuron0x1ffa290()*0.213256);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e1c0() {
   return (neuron0x1ffa710()*0.972563);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e200() {
   return (neuron0x1ffab90()*-0.41132);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e240() {
   return (neuron0x1ffb0a0()*-1.97089);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e280() {
   return (neuron0x1ff9810()*1.59859);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e2c0() {
   return (neuron0x1ffb9b0()*2.11765);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e300() {
   return (neuron0x1ffbe30()*-0.228587);
}

double nnFunc_25_25hi_3000ep__::synapse0x200dd90() {
   return (neuron0x1ffc700()*1.76871);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ddd0() {
   return (neuron0x1ffc9d0()*0.464658);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e450() {
   return (neuron0x1ffce50()*0.165057);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e490() {
   return (neuron0x1ffd2d0()*-1.55914);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e4d0() {
   return (neuron0x1ffd750()*1.57728);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e510() {
   return (neuron0x1ffdbd0()*-0.855427);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e550() {
   return (neuron0x1ffe050()*-0.0358497);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e590() {
   return (neuron0x1ffe4d0()*0.686819);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e5d0() {
   return (neuron0x1ffe950()*-1.39215);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e950() {
   return (neuron0x1ff7990()*0.599137);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e990() {
   return (neuron0x1ff7d00()*0.293023);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e9d0() {
   return (neuron0x1ff8180()*1.2943);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ea10() {
   return (neuron0x1ff8600()*0.237796);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ea50() {
   return (neuron0x1ff8b10()*0.838381);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ea90() {
   return (neuron0x1ff8f90()*0.470724);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ead0() {
   return (neuron0x1ff9410()*1.15096);
}

double nnFunc_25_25hi_3000ep__::synapse0x200eb10() {
   return (neuron0x1ff9a20()*-0.73817);
}

double nnFunc_25_25hi_3000ep__::synapse0x200eb50() {
   return (neuron0x1ff9e10()*1.39687);
}

double nnFunc_25_25hi_3000ep__::synapse0x200eb90() {
   return (neuron0x1ffa290()*1.3791);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ebd0() {
   return (neuron0x1ffa710()*-4.15403);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ec10() {
   return (neuron0x1ffab90()*0.506277);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ec50() {
   return (neuron0x1ffb0a0()*-4.55955);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ec90() {
   return (neuron0x1ff9810()*0.567685);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ecd0() {
   return (neuron0x1ffb9b0()*-0.495263);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ed10() {
   return (neuron0x1ffbe30()*7.36917);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e7a0() {
   return (neuron0x1ffc700()*0.388658);
}

double nnFunc_25_25hi_3000ep__::synapse0x200e7e0() {
   return (neuron0x1ffc9d0()*0.620637);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ee60() {
   return (neuron0x1ffce50()*-0.237004);
}

double nnFunc_25_25hi_3000ep__::synapse0x200eea0() {
   return (neuron0x1ffd2d0()*4.82198);
}

double nnFunc_25_25hi_3000ep__::synapse0x200eee0() {
   return (neuron0x1ffd750()*-5.10834);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ef20() {
   return (neuron0x1ffdbd0()*0.698529);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ef60() {
   return (neuron0x1ffe050()*0.882449);
}

double nnFunc_25_25hi_3000ep__::synapse0x200efa0() {
   return (neuron0x1ffe4d0()*-2.00841);
}

double nnFunc_25_25hi_3000ep__::synapse0x200efe0() {
   return (neuron0x1ffe950()*0.78182);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f360() {
   return (neuron0x1ff7990()*0.0147571);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f3a0() {
   return (neuron0x1ff7d00()*-0.213975);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f3e0() {
   return (neuron0x1ff8180()*0.279159);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f420() {
   return (neuron0x1ff8600()*0.563959);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f460() {
   return (neuron0x1ff8b10()*0.558799);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f4a0() {
   return (neuron0x1ff8f90()*0.295909);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f4e0() {
   return (neuron0x1ff9410()*0.0791877);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f520() {
   return (neuron0x1ff9a20()*0.492461);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f560() {
   return (neuron0x1ff9e10()*-0.346547);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f5a0() {
   return (neuron0x1ffa290()*0.386828);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f5e0() {
   return (neuron0x1ffa710()*-0.443572);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f620() {
   return (neuron0x1ffab90()*1.72018);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f660() {
   return (neuron0x1ffb0a0()*-1.19155);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f6a0() {
   return (neuron0x1ff9810()*0.416203);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f6e0() {
   return (neuron0x1ffb9b0()*0.464297);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f720() {
   return (neuron0x1ffbe30()*0.880998);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f1b0() {
   return (neuron0x1ffc700()*0.682994);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f1f0() {
   return (neuron0x1ffc9d0()*0.0079495);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f870() {
   return (neuron0x1ffce50()*-0.700471);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f8b0() {
   return (neuron0x1ffd2d0()*1.39656);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f8f0() {
   return (neuron0x1ffd750()*-1.36798);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f930() {
   return (neuron0x1ffdbd0()*-0.192531);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f970() {
   return (neuron0x1ffe050()*0.410673);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f9b0() {
   return (neuron0x1ffe4d0()*-0.6192);
}

double nnFunc_25_25hi_3000ep__::synapse0x200f9f0() {
   return (neuron0x1ffe950()*-0.0185313);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fd70() {
   return (neuron0x1ff7990()*-1.4505);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fdb0() {
   return (neuron0x1ff7d00()*0.882119);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fdf0() {
   return (neuron0x1ff8180()*0.319944);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fe30() {
   return (neuron0x1ff8600()*-2.62709);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fe70() {
   return (neuron0x1ff8b10()*-1.51786);
}

double nnFunc_25_25hi_3000ep__::synapse0x200feb0() {
   return (neuron0x1ff8f90()*-2.29241);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fef0() {
   return (neuron0x1ff9410()*-1.37372);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ff30() {
   return (neuron0x1ff9a20()*-0.105828);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ff70() {
   return (neuron0x1ff9e10()*-0.503955);
}

double nnFunc_25_25hi_3000ep__::synapse0x200ffb0() {
   return (neuron0x1ffa290()*-1.67482);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fff0() {
   return (neuron0x1ffa710()*-10.3599);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010030() {
   return (neuron0x1ffab90()*-0.210421);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010070() {
   return (neuron0x1ffb0a0()*20.3895);
}

double nnFunc_25_25hi_3000ep__::synapse0x20100b0() {
   return (neuron0x1ff9810()*-2.81357);
}

double nnFunc_25_25hi_3000ep__::synapse0x20100f0() {
   return (neuron0x1ffb9b0()*-3.16257);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010130() {
   return (neuron0x1ffbe30()*8.03486);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fbc0() {
   return (neuron0x1ffc700()*-2.77501);
}

double nnFunc_25_25hi_3000ep__::synapse0x200fc00() {
   return (neuron0x1ffc9d0()*-1.2661);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010280() {
   return (neuron0x1ffce50()*1.42996);
}

double nnFunc_25_25hi_3000ep__::synapse0x20102c0() {
   return (neuron0x1ffd2d0()*9.46663);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010300() {
   return (neuron0x1ffd750()*-5.07658);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010340() {
   return (neuron0x1ffdbd0()*0.670401);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010380() {
   return (neuron0x1ffe050()*0.909623);
}

double nnFunc_25_25hi_3000ep__::synapse0x20103c0() {
   return (neuron0x1ffe4d0()*4.29212);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010400() {
   return (neuron0x1ffe950()*0.856089);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010780() {
   return (neuron0x1ff7990()*0.453465);
}

double nnFunc_25_25hi_3000ep__::synapse0x20107c0() {
   return (neuron0x1ff7d00()*0.451458);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010800() {
   return (neuron0x1ff8180()*-1.03992);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010840() {
   return (neuron0x1ff8600()*0.862915);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010880() {
   return (neuron0x1ff8b10()*0.150208);
}

double nnFunc_25_25hi_3000ep__::synapse0x20108c0() {
   return (neuron0x1ff8f90()*-0.367226);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010900() {
   return (neuron0x1ff9410()*-0.721848);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010940() {
   return (neuron0x1ff9a20()*1.00046);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010980() {
   return (neuron0x1ff9e10()*-0.135883);
}

double nnFunc_25_25hi_3000ep__::synapse0x20109c0() {
   return (neuron0x1ffa290()*-0.50456);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010a00() {
   return (neuron0x1ffa710()*0.0102322);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010a40() {
   return (neuron0x1ffab90()*0.551996);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010a80() {
   return (neuron0x1ffb0a0()*-1.88553);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010ac0() {
   return (neuron0x1ff9810()*0.0559963);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010b00() {
   return (neuron0x1ffb9b0()*1.39834);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010b40() {
   return (neuron0x1ffbe30()*-1.64901);
}

double nnFunc_25_25hi_3000ep__::synapse0x20105d0() {
   return (neuron0x1ffc700()*0.97187);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010610() {
   return (neuron0x1ffc9d0()*0.10276);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010c90() {
   return (neuron0x1ffce50()*-0.722906);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010cd0() {
   return (neuron0x1ffd2d0()*-0.274683);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010d10() {
   return (neuron0x1ffd750()*3.10836);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010d50() {
   return (neuron0x1ffdbd0()*-1.07221);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010d90() {
   return (neuron0x1ffe050()*-1.18184);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010dd0() {
   return (neuron0x1ffe4d0()*-0.121003);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010e10() {
   return (neuron0x1ffe950()*-1.16051);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011190() {
   return (neuron0x1ff7990()*0.265326);
}

double nnFunc_25_25hi_3000ep__::synapse0x20111d0() {
   return (neuron0x1ff7d00()*-2.33421);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011210() {
   return (neuron0x1ff8180()*0.308958);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011250() {
   return (neuron0x1ff8600()*-0.0432083);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011290() {
   return (neuron0x1ff8b10()*-0.291466);
}

double nnFunc_25_25hi_3000ep__::synapse0x20112d0() {
   return (neuron0x1ff8f90()*0.390495);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011310() {
   return (neuron0x1ff9410()*-0.042251);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011350() {
   return (neuron0x1ff9a20()*-0.426848);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011390() {
   return (neuron0x1ff9e10()*0.217283);
}

double nnFunc_25_25hi_3000ep__::synapse0x20113d0() {
   return (neuron0x1ffa290()*0.484391);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011410() {
   return (neuron0x1ffa710()*-1.32494);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011450() {
   return (neuron0x1ffab90()*0.708621);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011490() {
   return (neuron0x1ffb0a0()*-2.91428);
}

double nnFunc_25_25hi_3000ep__::synapse0x20114d0() {
   return (neuron0x1ff9810()*-0.458966);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011510() {
   return (neuron0x1ffb9b0()*-1.44105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011550() {
   return (neuron0x1ffbe30()*1.99975);
}

double nnFunc_25_25hi_3000ep__::synapse0x2010fe0() {
   return (neuron0x1ffc700()*-0.683879);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011020() {
   return (neuron0x1ffc9d0()*0.563535);
}

double nnFunc_25_25hi_3000ep__::synapse0x20116a0() {
   return (neuron0x1ffce50()*-0.311785);
}

double nnFunc_25_25hi_3000ep__::synapse0x20116e0() {
   return (neuron0x1ffd2d0()*3.21392);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011720() {
   return (neuron0x1ffd750()*2.39259);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011760() {
   return (neuron0x1ffdbd0()*0.458841);
}

double nnFunc_25_25hi_3000ep__::synapse0x20117a0() {
   return (neuron0x1ffe050()*-0.230193);
}

double nnFunc_25_25hi_3000ep__::synapse0x20117e0() {
   return (neuron0x1ffe4d0()*-0.266015);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011820() {
   return (neuron0x1ffe950()*0.580865);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011ba0() {
   return (neuron0x1ff7990()*6.44938);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011be0() {
   return (neuron0x1ff7d00()*-1.14278);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011c20() {
   return (neuron0x1ff8180()*1.1133);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011c60() {
   return (neuron0x1ff8600()*-0.76661);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011ca0() {
   return (neuron0x1ff8b10()*0.244414);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011ce0() {
   return (neuron0x1ff8f90()*-0.0935252);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011d20() {
   return (neuron0x1ff9410()*0.0955449);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011d60() {
   return (neuron0x1ff9a20()*-0.962591);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011da0() {
   return (neuron0x1ff9e10()*-1.35834);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011de0() {
   return (neuron0x1ffa290()*0.765655);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011e20() {
   return (neuron0x1ffa710()*3.95673);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011e60() {
   return (neuron0x1ffab90()*-0.67945);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011ea0() {
   return (neuron0x1ffb0a0()*-9.33102);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011ee0() {
   return (neuron0x1ff9810()*-1.27652);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011f20() {
   return (neuron0x1ffb9b0()*-1.23164);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011f60() {
   return (neuron0x1ffbe30()*0.864883);
}

double nnFunc_25_25hi_3000ep__::synapse0x20119f0() {
   return (neuron0x1ffc700()*-0.323046);
}

double nnFunc_25_25hi_3000ep__::synapse0x2011a30() {
   return (neuron0x1ffc9d0()*1.09481);
}

double nnFunc_25_25hi_3000ep__::synapse0x20120b0() {
   return (neuron0x1ffce50()*0.711442);
}

double nnFunc_25_25hi_3000ep__::synapse0x20120f0() {
   return (neuron0x1ffd2d0()*5.64557);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012130() {
   return (neuron0x1ffd750()*3.57491);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012170() {
   return (neuron0x1ffdbd0()*1.02474);
}

double nnFunc_25_25hi_3000ep__::synapse0x20121b0() {
   return (neuron0x1ffe050()*-3.78821);
}

double nnFunc_25_25hi_3000ep__::synapse0x20121f0() {
   return (neuron0x1ffe4d0()*-0.0450662);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012230() {
   return (neuron0x1ffe950()*0.781337);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012490() {
   return (neuron0x2000860()*1.25238);
}

double nnFunc_25_25hi_3000ep__::synapse0x20124d0() {
   return (neuron0x1ffb630()*0.00813457);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012510() {
   return (neuron0x20013d0()*1.93259);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012550() {
   return (neuron0x2001ef0()*-1.46062);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012590() {
   return (neuron0x2002900()*4.674);
}

double nnFunc_25_25hi_3000ep__::synapse0x20125d0() {
   return (neuron0x2003310()*1.40568);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012610() {
   return (neuron0x2000f00()*-1.59609);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012650() {
   return (neuron0x2004f40()*2.95331);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012690() {
   return (neuron0x2005950()*-2.04792);
}

double nnFunc_25_25hi_3000ep__::synapse0x20126d0() {
   return (neuron0x2006360()*2.37922);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012710() {
   return (neuron0x2006d70()*1.29454);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012750() {
   return (neuron0x2007780()*-1.71215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012790() {
   return (neuron0x2008190()*-2.807);
}

double nnFunc_25_25hi_3000ep__::synapse0x20127d0() {
   return (neuron0x2008ba0()*-0.431972);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012810() {
   return (neuron0x20095b0()*-3.01901);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012850() {
   return (neuron0x2009fc0()*3.50733);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff7860() {
   return (neuron0x20045e0()*-1.14938);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ff78a0() {
   return (neuron0x200d230()*-2.41691);
}

double nnFunc_25_25hi_3000ep__::synapse0x20129a0() {
   return (neuron0x200dc00()*-2.33764);
}

double nnFunc_25_25hi_3000ep__::synapse0x20129e0() {
   return (neuron0x200e610()*-8.1694);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012a20() {
   return (neuron0x200f020()*2.27683);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012a60() {
   return (neuron0x200fa30()*8.38753);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012aa0() {
   return (neuron0x2010440()*0.887526);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012ae0() {
   return (neuron0x2010e50()*-3.00223);
}

double nnFunc_25_25hi_3000ep__::synapse0x2012b20() {
   return (neuron0x2011860()*7.53551);
}

