#include "25_25hi_5000ep_1C_new_moved_random_sectorA_midwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2e99e70();
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
         return neuron0x2e99e70();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7e3e0() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7e720() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7ea60() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7eda0() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7f0e0() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x2e7f550() {
   double input = -6.00599;
   input += synapse0x2e6d720();
   input += synapse0x2e7f800();
   input += synapse0x2e7f840();
   input += synapse0x2e7f880();
   input += synapse0x2e7f8c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7f550() {
   double input = input0x2e7f550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e7f900() {
   double input = 0.79523;
   input += synapse0x2e7fc40();
   input += synapse0x2e7fc80();
   input += synapse0x2e7fcc0();
   input += synapse0x2e7fd00();
   input += synapse0x2e7fd40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7f900() {
   double input = input0x2e7f900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e7fd80() {
   double input = -1.38575;
   input += synapse0x2e800c0();
   input += synapse0x2e80100();
   input += synapse0x2e80140();
   input += synapse0x2e80180();
   input += synapse0x2e801c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e7fd80() {
   double input = input0x2e7fd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e80200() {
   double input = -2.30099;
   input += synapse0x2e80540();
   input += synapse0x2e80580();
   input += synapse0x2cf8870();
   input += synapse0x2cf88b0();
   input += synapse0x2e806d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e80200() {
   double input = input0x2e80200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e80710() {
   double input = 1.17615;
   input += synapse0x2e80a50();
   input += synapse0x2e80a90();
   input += synapse0x2e80ad0();
   input += synapse0x2e80b10();
   input += synapse0x2e80b50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e80710() {
   double input = input0x2e80710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e80b90() {
   double input = 0.110911;
   input += synapse0x2e80ed0();
   input += synapse0x2e80f10();
   input += synapse0x2e80f50();
   input += synapse0x2e80f90();
   input += synapse0x2e80fd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e80b90() {
   double input = input0x2e80b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e81010() {
   double input = 0.421355;
   input += synapse0x2e81350();
   input += synapse0x2e81390();
   input += synapse0x2e813d0();
   input += synapse0x2e805c0();
   input += synapse0x2e80600();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e81010() {
   double input = input0x2e81010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e81620() {
   double input = 0.547117;
   input += synapse0x2e818d0();
   input += synapse0x2e81910();
   input += synapse0x2e81950();
   input += synapse0x2e81990();
   input += synapse0x2e819d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e81620() {
   double input = input0x2e81620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e81a10() {
   double input = 0.588651;
   input += synapse0x2e81d50();
   input += synapse0x2e81d90();
   input += synapse0x2e81dd0();
   input += synapse0x2e81e10();
   input += synapse0x2e81e50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e81a10() {
   double input = input0x2e81a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e81e90() {
   double input = 1.89621;
   input += synapse0x2e821d0();
   input += synapse0x2e82210();
   input += synapse0x2e82250();
   input += synapse0x2e82290();
   input += synapse0x2e822d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e81e90() {
   double input = input0x2e81e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e82310() {
   double input = 0.302485;
   input += synapse0x2e82650();
   input += synapse0x2e82690();
   input += synapse0x2e826d0();
   input += synapse0x2e82710();
   input += synapse0x2e82750();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e82310() {
   double input = input0x2e82310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e82790() {
   double input = 46.5577;
   input += synapse0x2cf86c0();
   input += synapse0x2cf8700();
   input += synapse0x2e82be0();
   input += synapse0x2e82c20();
   input += synapse0x2e82c60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e82790() {
   double input = input0x2e82790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e82ca0() {
   double input = 7.11331;
   input += synapse0x2e82fe0();
   input += synapse0x2e83020();
   input += synapse0x2e83060();
   input += synapse0x2e830a0();
   input += synapse0x2e830e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e82ca0() {
   double input = input0x2e82ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e068d0() {
   double input = 4.18976;
   input += synapse0x2e06a60();
   input += synapse0x2e6d6c0();
   input += synapse0x2e815c0();
   input += synapse0x2e83530();
   input += synapse0x2e83570();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e068d0() {
   double input = input0x2e068d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e835b0() {
   double input = -0.965202;
   input += synapse0x2e838f0();
   input += synapse0x2e83930();
   input += synapse0x2e83970();
   input += synapse0x2e839b0();
   input += synapse0x2e839f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e835b0() {
   double input = input0x2e835b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e83a30() {
   double input = 0.966716;
   input += synapse0x2e83d70();
   input += synapse0x2e7e600();
   input += synapse0x2e7e640();
   input += synapse0x2e7e940();
   input += synapse0x2e7e980();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e83a30() {
   double input = input0x2e83a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e84300() {
   double input = 4.97487;
   input += synapse0x2e84490();
   input += synapse0x2e844d0();
   input += synapse0x2e84510();
   input += synapse0x2e84550();
   input += synapse0x2e84590();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e84300() {
   double input = input0x2e84300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e845d0() {
   double input = -0.617805;
   input += synapse0x2e84910();
   input += synapse0x2e84950();
   input += synapse0x2e84990();
   input += synapse0x2e849d0();
   input += synapse0x2e84a10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e845d0() {
   double input = input0x2e845d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e84a50() {
   double input = -0.177634;
   input += synapse0x2e84d90();
   input += synapse0x2e84dd0();
   input += synapse0x2e84e10();
   input += synapse0x2e84e50();
   input += synapse0x2e84e90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e84a50() {
   double input = input0x2e84a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e84ed0() {
   double input = 6.54038;
   input += synapse0x2e85210();
   input += synapse0x2e85250();
   input += synapse0x2e85290();
   input += synapse0x2e852d0();
   input += synapse0x2e85310();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e84ed0() {
   double input = input0x2e84ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e85350() {
   double input = -2.57017;
   input += synapse0x2e85690();
   input += synapse0x2e856d0();
   input += synapse0x2e85710();
   input += synapse0x2e85750();
   input += synapse0x2e85790();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e85350() {
   double input = input0x2e85350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e857d0() {
   double input = 2.29237;
   input += synapse0x2e85b10();
   input += synapse0x2e85b50();
   input += synapse0x2e85b90();
   input += synapse0x2e85bd0();
   input += synapse0x2e85c10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e857d0() {
   double input = input0x2e857d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e85c50() {
   double input = -4.00652;
   input += synapse0x2e85f90();
   input += synapse0x2e85fd0();
   input += synapse0x2e86010();
   input += synapse0x2e86050();
   input += synapse0x2e86090();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e85c50() {
   double input = input0x2e85c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e860d0() {
   double input = -0.847284;
   input += synapse0x2e86410();
   input += synapse0x2e86450();
   input += synapse0x2e86490();
   input += synapse0x2e864d0();
   input += synapse0x2e86510();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e860d0() {
   double input = input0x2e860d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e86550() {
   double input = -1.92397;
   input += synapse0x2e86890();
   input += synapse0x2e868d0();
   input += synapse0x2e86910();
   input += synapse0x2e86950();
   input += synapse0x2e86990();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e86550() {
   double input = input0x2e86550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e88460() {
   double input = 1.14193;
   input += synapse0x2e804b0();
   input += synapse0x2e804f0();
   input += synapse0x2e809c0();
   input += synapse0x2e80a00();
   input += synapse0x2e80e40();
   input += synapse0x2e80e80();
   input += synapse0x2e812c0();
   input += synapse0x2e81300();
   input += synapse0x2e81840();
   input += synapse0x2e81880();
   input += synapse0x2e81cc0();
   input += synapse0x2e81d00();
   input += synapse0x2e82140();
   input += synapse0x2e82180();
   input += synapse0x2e825c0();
   input += synapse0x2e82600();
   input += synapse0x2e82a40();
   input += synapse0x2e82a80();
   input += synapse0x2e82f50();
   input += synapse0x2e82f90();
   input += synapse0x2e81530();
   input += synapse0x2e81570();
   input += synapse0x2e83860();
   input += synapse0x2e838a0();
   input += synapse0x2e83ce0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e88460() {
   double input = input0x2e88460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e83230() {
   double input = 1.62096;
   input += synapse0x2e833c0();
   input += synapse0x2e83400();
   input += synapse0x2e83440();
   input += synapse0x2e83480();
   input += synapse0x2e834c0();
   input += synapse0x2e83d20();
   input += synapse0x2e85180();
   input += synapse0x2e851c0();
   input += synapse0x2e85600();
   input += synapse0x2e85640();
   input += synapse0x2e85a80();
   input += synapse0x2e85ac0();
   input += synapse0x2e85f00();
   input += synapse0x2e85f40();
   input += synapse0x2e86380();
   input += synapse0x2e863c0();
   input += synapse0x2e86800();
   input += synapse0x2e86840();
   input += synapse0x2e7f770();
   input += synapse0x2e7f7b0();
   input += synapse0x2e7f300();
   input += synapse0x2e7f340();
   input += synapse0x2e88f10();
   input += synapse0x2e88f50();
   input += synapse0x2e88f90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e83230() {
   double input = input0x2e83230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e88fd0() {
   double input = -0.6354;
   input += synapse0x2e82ad0();
   input += synapse0x2e82b10();
   input += synapse0x2e82b50();
   input += synapse0x2e82b90();
   input += synapse0x2e89520();
   input += synapse0x2e89560();
   input += synapse0x2e895a0();
   input += synapse0x2e895e0();
   input += synapse0x2e89620();
   input += synapse0x2e89660();
   input += synapse0x2e896a0();
   input += synapse0x2e896e0();
   input += synapse0x2e89720();
   input += synapse0x2e89760();
   input += synapse0x2e897a0();
   input += synapse0x2e897e0();
   input += synapse0x2e89160();
   input += synapse0x2e891a0();
   input += synapse0x2e89930();
   input += synapse0x2e89970();
   input += synapse0x2e899b0();
   input += synapse0x2e899f0();
   input += synapse0x2e89a30();
   input += synapse0x2e89a70();
   input += synapse0x2e89ab0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e88fd0() {
   double input = input0x2e88fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e89af0() {
   double input = 1.90458;
   input += synapse0x2e89e30();
   input += synapse0x2e89e70();
   input += synapse0x2e89eb0();
   input += synapse0x2e89ef0();
   input += synapse0x2e89f30();
   input += synapse0x2e89f70();
   input += synapse0x2e89fb0();
   input += synapse0x2e89ff0();
   input += synapse0x2e8a030();
   input += synapse0x2e8a070();
   input += synapse0x2e8a0b0();
   input += synapse0x2e8a0f0();
   input += synapse0x2e8a130();
   input += synapse0x2e8a170();
   input += synapse0x2e8a1b0();
   input += synapse0x2e8a1f0();
   input += synapse0x2e89c80();
   input += synapse0x2e89cc0();
   input += synapse0x2e8a340();
   input += synapse0x2e8a380();
   input += synapse0x2e8a3c0();
   input += synapse0x2e8a400();
   input += synapse0x2e8a440();
   input += synapse0x2e8a480();
   input += synapse0x2e8a4c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e89af0() {
   double input = input0x2e89af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8a500() {
   double input = 0.961033;
   input += synapse0x2e8a840();
   input += synapse0x2e8a880();
   input += synapse0x2e8a8c0();
   input += synapse0x2e8a900();
   input += synapse0x2e8a940();
   input += synapse0x2e8a980();
   input += synapse0x2e8a9c0();
   input += synapse0x2e8aa00();
   input += synapse0x2e8aa40();
   input += synapse0x2e8aa80();
   input += synapse0x2e8aac0();
   input += synapse0x2e8ab00();
   input += synapse0x2e8ab40();
   input += synapse0x2e8ab80();
   input += synapse0x2e8abc0();
   input += synapse0x2e8ac00();
   input += synapse0x2e8a690();
   input += synapse0x2e8a6d0();
   input += synapse0x2e8ad50();
   input += synapse0x2e8ad90();
   input += synapse0x2e8add0();
   input += synapse0x2e8ae10();
   input += synapse0x2e8ae50();
   input += synapse0x2e8ae90();
   input += synapse0x2e8aed0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8a500() {
   double input = input0x2e8a500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8af10() {
   double input = -0.112719;
   input += synapse0x2e8b250();
   input += synapse0x2e8b290();
   input += synapse0x2e8b2d0();
   input += synapse0x2e8b310();
   input += synapse0x2e8b350();
   input += synapse0x2e8b390();
   input += synapse0x2e8b3d0();
   input += synapse0x2e885f0();
   input += synapse0x2e88630();
   input += synapse0x2e88670();
   input += synapse0x2e886b0();
   input += synapse0x2e886f0();
   input += synapse0x2e88730();
   input += synapse0x2e88770();
   input += synapse0x2e887b0();
   input += synapse0x2e887f0();
   input += synapse0x2e8b0a0();
   input += synapse0x2e8b0e0();
   input += synapse0x2e88940();
   input += synapse0x2e88980();
   input += synapse0x2e889c0();
   input += synapse0x2e88a00();
   input += synapse0x2e88a40();
   input += synapse0x2e88a80();
   input += synapse0x2e88ac0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8af10() {
   double input = input0x2e8af10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e88b00() {
   double input = -2.14248;
   input += synapse0x2e88db0();
   input += synapse0x2e8c4b0();
   input += synapse0x2e8c4f0();
   input += synapse0x2e8c530();
   input += synapse0x2e8c570();
   input += synapse0x2e8c5b0();
   input += synapse0x2e8c5f0();
   input += synapse0x2e8c630();
   input += synapse0x2e8c670();
   input += synapse0x2e8c6b0();
   input += synapse0x2e8c6f0();
   input += synapse0x2e8c730();
   input += synapse0x2e8c770();
   input += synapse0x2e8c7b0();
   input += synapse0x2e8c7f0();
   input += synapse0x2e8c830();
   input += synapse0x2e88c90();
   input += synapse0x2e88cd0();
   input += synapse0x2e8c980();
   input += synapse0x2e8c9c0();
   input += synapse0x2e8ca00();
   input += synapse0x2e8ca40();
   input += synapse0x2e8ca80();
   input += synapse0x2e8cac0();
   input += synapse0x2e8cb00();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e88b00() {
   double input = input0x2e88b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8cb40() {
   double input = 0.782671;
   input += synapse0x2e8ce80();
   input += synapse0x2e8cec0();
   input += synapse0x2e8cf00();
   input += synapse0x2e8cf40();
   input += synapse0x2e8cf80();
   input += synapse0x2e8cfc0();
   input += synapse0x2e8d000();
   input += synapse0x2e8d040();
   input += synapse0x2e8d080();
   input += synapse0x2e8d0c0();
   input += synapse0x2e8d100();
   input += synapse0x2e8d140();
   input += synapse0x2e8d180();
   input += synapse0x2e8d1c0();
   input += synapse0x2e8d200();
   input += synapse0x2e8d240();
   input += synapse0x2e8ccd0();
   input += synapse0x2e8cd10();
   input += synapse0x2e8d390();
   input += synapse0x2e8d3d0();
   input += synapse0x2e8d410();
   input += synapse0x2e8d450();
   input += synapse0x2e8d490();
   input += synapse0x2e8d4d0();
   input += synapse0x2e8d510();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8cb40() {
   double input = input0x2e8cb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8d550() {
   double input = -2.32474;
   input += synapse0x2e8d890();
   input += synapse0x2e8d8d0();
   input += synapse0x2e8d910();
   input += synapse0x2e8d950();
   input += synapse0x2e8d990();
   input += synapse0x2e8d9d0();
   input += synapse0x2e8da10();
   input += synapse0x2e8da50();
   input += synapse0x2e8da90();
   input += synapse0x2e8dad0();
   input += synapse0x2e8db10();
   input += synapse0x2e8db50();
   input += synapse0x2e8db90();
   input += synapse0x2e8dbd0();
   input += synapse0x2e8dc10();
   input += synapse0x2e8dc50();
   input += synapse0x2e8d6e0();
   input += synapse0x2e8d720();
   input += synapse0x2e8dda0();
   input += synapse0x2e8dde0();
   input += synapse0x2e8de20();
   input += synapse0x2e8de60();
   input += synapse0x2e8dea0();
   input += synapse0x2e8dee0();
   input += synapse0x2e8df20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8d550() {
   double input = input0x2e8d550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8df60() {
   double input = -0.454998;
   input += synapse0x2e8e2a0();
   input += synapse0x2e8e2e0();
   input += synapse0x2e8e320();
   input += synapse0x2e8e360();
   input += synapse0x2e8e3a0();
   input += synapse0x2e8e3e0();
   input += synapse0x2e8e420();
   input += synapse0x2e8e460();
   input += synapse0x2e8e4a0();
   input += synapse0x2e8e4e0();
   input += synapse0x2e8e520();
   input += synapse0x2e8e560();
   input += synapse0x2e8e5a0();
   input += synapse0x2e8e5e0();
   input += synapse0x2e8e620();
   input += synapse0x2e8e660();
   input += synapse0x2e8e0f0();
   input += synapse0x2e8e130();
   input += synapse0x2e8e7b0();
   input += synapse0x2e8e7f0();
   input += synapse0x2e8e830();
   input += synapse0x2e8e870();
   input += synapse0x2e8e8b0();
   input += synapse0x2e8e8f0();
   input += synapse0x2e8e930();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8df60() {
   double input = input0x2e8df60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8e970() {
   double input = -0.53517;
   input += synapse0x2e8ecb0();
   input += synapse0x2e8ecf0();
   input += synapse0x2e8ed30();
   input += synapse0x2e8ed70();
   input += synapse0x2e8edb0();
   input += synapse0x2e8edf0();
   input += synapse0x2e8ee30();
   input += synapse0x2e8ee70();
   input += synapse0x2e8eeb0();
   input += synapse0x2e8eef0();
   input += synapse0x2e8ef30();
   input += synapse0x2e8ef70();
   input += synapse0x2e8efb0();
   input += synapse0x2e8eff0();
   input += synapse0x2e8f030();
   input += synapse0x2e8f070();
   input += synapse0x2e8eb00();
   input += synapse0x2e8eb40();
   input += synapse0x2e8f1c0();
   input += synapse0x2e8f200();
   input += synapse0x2e8f240();
   input += synapse0x2e8f280();
   input += synapse0x2e8f2c0();
   input += synapse0x2e8f300();
   input += synapse0x2e8f340();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8e970() {
   double input = input0x2e8e970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8f380() {
   double input = 0.358524;
   input += synapse0x2e8f6c0();
   input += synapse0x2e8f700();
   input += synapse0x2e8f740();
   input += synapse0x2e8f780();
   input += synapse0x2e8f7c0();
   input += synapse0x2e8f800();
   input += synapse0x2e8f840();
   input += synapse0x2e8f880();
   input += synapse0x2e8f8c0();
   input += synapse0x2e8f900();
   input += synapse0x2e8f940();
   input += synapse0x2e8f980();
   input += synapse0x2e8f9c0();
   input += synapse0x2e8fa00();
   input += synapse0x2e8fa40();
   input += synapse0x2e8fa80();
   input += synapse0x2e8f510();
   input += synapse0x2e8f550();
   input += synapse0x2e8fbd0();
   input += synapse0x2e8fc10();
   input += synapse0x2e8fc50();
   input += synapse0x2e8fc90();
   input += synapse0x2e8fcd0();
   input += synapse0x2e8fd10();
   input += synapse0x2e8fd50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8f380() {
   double input = input0x2e8f380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8fd90() {
   double input = 0.0535306;
   input += synapse0x2e900d0();
   input += synapse0x2e90110();
   input += synapse0x2e90150();
   input += synapse0x2e90190();
   input += synapse0x2e901d0();
   input += synapse0x2e90210();
   input += synapse0x2e90250();
   input += synapse0x2e90290();
   input += synapse0x2e902d0();
   input += synapse0x2e90310();
   input += synapse0x2e90350();
   input += synapse0x2e90390();
   input += synapse0x2e903d0();
   input += synapse0x2e90410();
   input += synapse0x2e90450();
   input += synapse0x2e90490();
   input += synapse0x2e8ff20();
   input += synapse0x2e8ff60();
   input += synapse0x2e905e0();
   input += synapse0x2e90620();
   input += synapse0x2e90660();
   input += synapse0x2e906a0();
   input += synapse0x2e906e0();
   input += synapse0x2e90720();
   input += synapse0x2e90760();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8fd90() {
   double input = input0x2e8fd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e907a0() {
   double input = 0.259712;
   input += synapse0x2e90ae0();
   input += synapse0x2e90b20();
   input += synapse0x2e90b60();
   input += synapse0x2e90ba0();
   input += synapse0x2e90be0();
   input += synapse0x2e90c20();
   input += synapse0x2e90c60();
   input += synapse0x2e90ca0();
   input += synapse0x2e90ce0();
   input += synapse0x2e90d20();
   input += synapse0x2e90d60();
   input += synapse0x2e90da0();
   input += synapse0x2e90de0();
   input += synapse0x2e90e20();
   input += synapse0x2e90e60();
   input += synapse0x2e90ea0();
   input += synapse0x2e90930();
   input += synapse0x2e90970();
   input += synapse0x2e90ff0();
   input += synapse0x2e91030();
   input += synapse0x2e91070();
   input += synapse0x2e910b0();
   input += synapse0x2e910f0();
   input += synapse0x2e91130();
   input += synapse0x2e91170();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e907a0() {
   double input = input0x2e907a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e911b0() {
   double input = -0.415338;
   input += synapse0x2e914f0();
   input += synapse0x2e91530();
   input += synapse0x2e91570();
   input += synapse0x2e915b0();
   input += synapse0x2e915f0();
   input += synapse0x2e91630();
   input += synapse0x2e91670();
   input += synapse0x2e916b0();
   input += synapse0x2e916f0();
   input += synapse0x2e91730();
   input += synapse0x2e91770();
   input += synapse0x2e917b0();
   input += synapse0x2e917f0();
   input += synapse0x2e91830();
   input += synapse0x2e91870();
   input += synapse0x2e918b0();
   input += synapse0x2e91340();
   input += synapse0x2e91380();
   input += synapse0x2e91a00();
   input += synapse0x2e91a40();
   input += synapse0x2e91a80();
   input += synapse0x2e91ac0();
   input += synapse0x2e91b00();
   input += synapse0x2e91b40();
   input += synapse0x2e91b80();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e911b0() {
   double input = input0x2e911b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e91bc0() {
   double input = 0.16952;
   input += synapse0x2e91f00();
   input += synapse0x2e7f6e0();
   input += synapse0x2e7f720();
   input += synapse0x2e7fb20();
   input += synapse0x2e7fb60();
   input += synapse0x2e7ffa0();
   input += synapse0x2e7ffe0();
   input += synapse0x2e80420();
   input += synapse0x2e80460();
   input += synapse0x2e80930();
   input += synapse0x2e80970();
   input += synapse0x2e80db0();
   input += synapse0x2e80df0();
   input += synapse0x2e81230();
   input += synapse0x2e81270();
   input += synapse0x2e817b0();
   input += synapse0x2e817f0();
   input += synapse0x2e81c30();
   input += synapse0x2e81c70();
   input += synapse0x2e820b0();
   input += synapse0x2e820f0();
   input += synapse0x2e82530();
   input += synapse0x2e82570();
   input += synapse0x2e829b0();
   input += synapse0x2e829f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e91bc0() {
   double input = input0x2e91bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e8c1e0() {
   double input = 0.78516;
   input += synapse0x2e8c370();
   input += synapse0x2e8c3b0();
   input += synapse0x2e83c50();
   input += synapse0x2e83c90();
   input += synapse0x2e91d50();
   input += synapse0x2e91d90();
   input += synapse0x2e7efc0();
   input += synapse0x2e7f000();
   input += synapse0x2e847f0();
   input += synapse0x2e84830();
   input += synapse0x2e84c70();
   input += synapse0x2e84cb0();
   input += synapse0x2e850f0();
   input += synapse0x2e85130();
   input += synapse0x2e85570();
   input += synapse0x2e855b0();
   input += synapse0x2e859f0();
   input += synapse0x2e85a30();
   input += synapse0x2e85e70();
   input += synapse0x2e85eb0();
   input += synapse0x2e862f0();
   input += synapse0x2e86330();
   input += synapse0x2e86770();
   input += synapse0x2e867b0();
   input += synapse0x2e82ec0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e8c1e0() {
   double input = input0x2e8c1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e94e30() {
   double input = -0.27523;
   input += synapse0x2e82f00();
   input += synapse0x2e95170();
   input += synapse0x2e951b0();
   input += synapse0x2e951f0();
   input += synapse0x2e95230();
   input += synapse0x2e95270();
   input += synapse0x2e952b0();
   input += synapse0x2e952f0();
   input += synapse0x2e95330();
   input += synapse0x2e95370();
   input += synapse0x2e953b0();
   input += synapse0x2e953f0();
   input += synapse0x2e95430();
   input += synapse0x2e95470();
   input += synapse0x2e954b0();
   input += synapse0x2e954f0();
   input += synapse0x2e94fc0();
   input += synapse0x2e95000();
   input += synapse0x2e95640();
   input += synapse0x2e95680();
   input += synapse0x2e956c0();
   input += synapse0x2e95700();
   input += synapse0x2e95740();
   input += synapse0x2e95780();
   input += synapse0x2e957c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e94e30() {
   double input = input0x2e94e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e95800() {
   double input = 1.74344;
   input += synapse0x2e95b40();
   input += synapse0x2e95b80();
   input += synapse0x2e95bc0();
   input += synapse0x2e95c00();
   input += synapse0x2e95c40();
   input += synapse0x2e95c80();
   input += synapse0x2e95cc0();
   input += synapse0x2e95d00();
   input += synapse0x2e95d40();
   input += synapse0x2e95d80();
   input += synapse0x2e95dc0();
   input += synapse0x2e95e00();
   input += synapse0x2e95e40();
   input += synapse0x2e95e80();
   input += synapse0x2e95ec0();
   input += synapse0x2e95f00();
   input += synapse0x2e95990();
   input += synapse0x2e959d0();
   input += synapse0x2e96050();
   input += synapse0x2e96090();
   input += synapse0x2e960d0();
   input += synapse0x2e96110();
   input += synapse0x2e96150();
   input += synapse0x2e96190();
   input += synapse0x2e961d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e95800() {
   double input = input0x2e95800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e96210() {
   double input = 0.207711;
   input += synapse0x2e96550();
   input += synapse0x2e96590();
   input += synapse0x2e965d0();
   input += synapse0x2e96610();
   input += synapse0x2e96650();
   input += synapse0x2e96690();
   input += synapse0x2e966d0();
   input += synapse0x2e96710();
   input += synapse0x2e96750();
   input += synapse0x2e96790();
   input += synapse0x2e967d0();
   input += synapse0x2e96810();
   input += synapse0x2e96850();
   input += synapse0x2e96890();
   input += synapse0x2e968d0();
   input += synapse0x2e96910();
   input += synapse0x2e963a0();
   input += synapse0x2e963e0();
   input += synapse0x2e96a60();
   input += synapse0x2e96aa0();
   input += synapse0x2e96ae0();
   input += synapse0x2e96b20();
   input += synapse0x2e96b60();
   input += synapse0x2e96ba0();
   input += synapse0x2e96be0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e96210() {
   double input = input0x2e96210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e96c20() {
   double input = -0.646226;
   input += synapse0x2e96f60();
   input += synapse0x2e96fa0();
   input += synapse0x2e96fe0();
   input += synapse0x2e97020();
   input += synapse0x2e97060();
   input += synapse0x2e970a0();
   input += synapse0x2e970e0();
   input += synapse0x2e97120();
   input += synapse0x2e97160();
   input += synapse0x2e971a0();
   input += synapse0x2e971e0();
   input += synapse0x2e97220();
   input += synapse0x2e97260();
   input += synapse0x2e972a0();
   input += synapse0x2e972e0();
   input += synapse0x2e97320();
   input += synapse0x2e96db0();
   input += synapse0x2e96df0();
   input += synapse0x2e97470();
   input += synapse0x2e974b0();
   input += synapse0x2e974f0();
   input += synapse0x2e97530();
   input += synapse0x2e97570();
   input += synapse0x2e975b0();
   input += synapse0x2e975f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e96c20() {
   double input = input0x2e96c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e97630() {
   double input = 1.78298;
   input += synapse0x2e97970();
   input += synapse0x2e979b0();
   input += synapse0x2e979f0();
   input += synapse0x2e97a30();
   input += synapse0x2e97a70();
   input += synapse0x2e97ab0();
   input += synapse0x2e97af0();
   input += synapse0x2e97b30();
   input += synapse0x2e97b70();
   input += synapse0x2e97bb0();
   input += synapse0x2e97bf0();
   input += synapse0x2e97c30();
   input += synapse0x2e97c70();
   input += synapse0x2e97cb0();
   input += synapse0x2e97cf0();
   input += synapse0x2e97d30();
   input += synapse0x2e977c0();
   input += synapse0x2e97800();
   input += synapse0x2e97e80();
   input += synapse0x2e97ec0();
   input += synapse0x2e97f00();
   input += synapse0x2e97f40();
   input += synapse0x2e97f80();
   input += synapse0x2e97fc0();
   input += synapse0x2e98000();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e97630() {
   double input = input0x2e97630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e98040() {
   double input = -0.441295;
   input += synapse0x2e98380();
   input += synapse0x2e983c0();
   input += synapse0x2e98400();
   input += synapse0x2e98440();
   input += synapse0x2e98480();
   input += synapse0x2e984c0();
   input += synapse0x2e98500();
   input += synapse0x2e98540();
   input += synapse0x2e98580();
   input += synapse0x2e985c0();
   input += synapse0x2e98600();
   input += synapse0x2e98640();
   input += synapse0x2e98680();
   input += synapse0x2e986c0();
   input += synapse0x2e98700();
   input += synapse0x2e98740();
   input += synapse0x2e981d0();
   input += synapse0x2e98210();
   input += synapse0x2e98890();
   input += synapse0x2e988d0();
   input += synapse0x2e98910();
   input += synapse0x2e98950();
   input += synapse0x2e98990();
   input += synapse0x2e989d0();
   input += synapse0x2e98a10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e98040() {
   double input = input0x2e98040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e98a50() {
   double input = -0.127812;
   input += synapse0x2e98d90();
   input += synapse0x2e98dd0();
   input += synapse0x2e98e10();
   input += synapse0x2e98e50();
   input += synapse0x2e98e90();
   input += synapse0x2e98ed0();
   input += synapse0x2e98f10();
   input += synapse0x2e98f50();
   input += synapse0x2e98f90();
   input += synapse0x2e98fd0();
   input += synapse0x2e99010();
   input += synapse0x2e99050();
   input += synapse0x2e99090();
   input += synapse0x2e990d0();
   input += synapse0x2e99110();
   input += synapse0x2e99150();
   input += synapse0x2e98be0();
   input += synapse0x2e98c20();
   input += synapse0x2e992a0();
   input += synapse0x2e992e0();
   input += synapse0x2e99320();
   input += synapse0x2e99360();
   input += synapse0x2e993a0();
   input += synapse0x2e993e0();
   input += synapse0x2e99420();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e98a50() {
   double input = input0x2e98a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e99460() {
   double input = -0.0275673;
   input += synapse0x2e997a0();
   input += synapse0x2e997e0();
   input += synapse0x2e99820();
   input += synapse0x2e99860();
   input += synapse0x2e998a0();
   input += synapse0x2e998e0();
   input += synapse0x2e99920();
   input += synapse0x2e99960();
   input += synapse0x2e999a0();
   input += synapse0x2e999e0();
   input += synapse0x2e99a20();
   input += synapse0x2e99a60();
   input += synapse0x2e99aa0();
   input += synapse0x2e99ae0();
   input += synapse0x2e99b20();
   input += synapse0x2e99b60();
   input += synapse0x2e995f0();
   input += synapse0x2e99630();
   input += synapse0x2e99cb0();
   input += synapse0x2e99cf0();
   input += synapse0x2e99d30();
   input += synapse0x2e99d70();
   input += synapse0x2e99db0();
   input += synapse0x2e99df0();
   input += synapse0x2e99e30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e99460() {
   double input = input0x2e99460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2e99e70() {
   double input = 1.30285;
   input += synapse0x2e9a090();
   input += synapse0x2e9a0d0();
   input += synapse0x2e9a110();
   input += synapse0x2e9a150();
   input += synapse0x2e9a190();
   input += synapse0x2e9a1d0();
   input += synapse0x2e9a210();
   input += synapse0x2e9a250();
   input += synapse0x2e9a290();
   input += synapse0x2e9a2d0();
   input += synapse0x2e9a310();
   input += synapse0x2e9a350();
   input += synapse0x2e9a390();
   input += synapse0x2e9a3d0();
   input += synapse0x2e9a410();
   input += synapse0x2e9a450();
   input += synapse0x2e7f420();
   input += synapse0x2e7f460();
   input += synapse0x2e9a5a0();
   input += synapse0x2e9a5e0();
   input += synapse0x2e9a620();
   input += synapse0x2e9a660();
   input += synapse0x2e9a6a0();
   input += synapse0x2e9a6e0();
   input += synapse0x2e9a720();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2e99e70() {
   double input = input0x2e99e70();
   return (input * 3.74251)+135.245;
}

double nnFunc_25_25hi_3000ep__::synapse0x2e6d720() {
   return (neuron0x2e7e3e0()*0.0251882);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f800() {
   return (neuron0x2e7e720()*-0.148527);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f840() {
   return (neuron0x2e7ea60()*0.294996);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f880() {
   return (neuron0x2e7eda0()*8.6533);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f8c0() {
   return (neuron0x2e7f0e0()*0.536148);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fc40() {
   return (neuron0x2e7e3e0()*-2.52039);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fc80() {
   return (neuron0x2e7e720()*0.651853);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fcc0() {
   return (neuron0x2e7ea60()*3.18499);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fd00() {
   return (neuron0x2e7eda0()*2.31314);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fd40() {
   return (neuron0x2e7f0e0()*1.02258);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e800c0() {
   return (neuron0x2e7e3e0()*4.667);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80100() {
   return (neuron0x2e7e720()*-0.358483);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80140() {
   return (neuron0x2e7ea60()*-6.40889);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80180() {
   return (neuron0x2e7eda0()*5.68978);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e801c0() {
   return (neuron0x2e7f0e0()*-1.60056);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80540() {
   return (neuron0x2e7e3e0()*-1.14561);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80580() {
   return (neuron0x2e7e720()*1.54692);
}

double nnFunc_25_25hi_3000ep__::synapse0x2cf8870() {
   return (neuron0x2e7ea60()*1.01199);
}

double nnFunc_25_25hi_3000ep__::synapse0x2cf88b0() {
   return (neuron0x2e7eda0()*13.833);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e806d0() {
   return (neuron0x2e7f0e0()*-1.75321);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80a50() {
   return (neuron0x2e7e3e0()*-3.69679);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80a90() {
   return (neuron0x2e7e720()*0.720675);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80ad0() {
   return (neuron0x2e7ea60()*11.7034);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80b10() {
   return (neuron0x2e7eda0()*-4.78246);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80b50() {
   return (neuron0x2e7f0e0()*0.804883);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80ed0() {
   return (neuron0x2e7e3e0()*-2.86064);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80f10() {
   return (neuron0x2e7e720()*2.87229);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80f50() {
   return (neuron0x2e7ea60()*0.0907808);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80f90() {
   return (neuron0x2e7eda0()*7.20209);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80fd0() {
   return (neuron0x2e7f0e0()*2.30908);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81350() {
   return (neuron0x2e7e3e0()*-0.763829);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81390() {
   return (neuron0x2e7e720()*0.990978);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e813d0() {
   return (neuron0x2e7ea60()*0.947865);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e805c0() {
   return (neuron0x2e7eda0()*5.54809);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80600() {
   return (neuron0x2e7f0e0()*0.4596);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e818d0() {
   return (neuron0x2e7e3e0()*-0.137946);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81910() {
   return (neuron0x2e7e720()*0.173171);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81950() {
   return (neuron0x2e7ea60()*-1.51549);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81990() {
   return (neuron0x2e7eda0()*4.85386);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e819d0() {
   return (neuron0x2e7f0e0()*-2.59862);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81d50() {
   return (neuron0x2e7e3e0()*-2.3494);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81d90() {
   return (neuron0x2e7e720()*0.393085);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81dd0() {
   return (neuron0x2e7ea60()*5.35224);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81e10() {
   return (neuron0x2e7eda0()*-0.988574);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81e50() {
   return (neuron0x2e7f0e0()*0.6955);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e821d0() {
   return (neuron0x2e7e3e0()*-0.918828);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82210() {
   return (neuron0x2e7e720()*1.40527);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82250() {
   return (neuron0x2e7ea60()*3.41147);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82290() {
   return (neuron0x2e7eda0()*-1.21261);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e822d0() {
   return (neuron0x2e7f0e0()*1.85887);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82650() {
   return (neuron0x2e7e3e0()*-0.503069);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82690() {
   return (neuron0x2e7e720()*0.994813);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e826d0() {
   return (neuron0x2e7ea60()*0.73535);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82710() {
   return (neuron0x2e7eda0()*7.42889);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82750() {
   return (neuron0x2e7f0e0()*-0.153952);
}

double nnFunc_25_25hi_3000ep__::synapse0x2cf86c0() {
   return (neuron0x2e7e3e0()*0.0279319);
}

double nnFunc_25_25hi_3000ep__::synapse0x2cf8700() {
   return (neuron0x2e7e720()*-0.924237);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82be0() {
   return (neuron0x2e7ea60()*0.180169);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82c20() {
   return (neuron0x2e7eda0()*-44.1741);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82c60() {
   return (neuron0x2e7f0e0()*-23.8345);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82fe0() {
   return (neuron0x2e7e3e0()*4.19704e-05);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83020() {
   return (neuron0x2e7e720()*0.444753);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83060() {
   return (neuron0x2e7ea60()*-0.136524);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e830a0() {
   return (neuron0x2e7eda0()*-21.3377);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e830e0() {
   return (neuron0x2e7f0e0()*6.1988);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e06a60() {
   return (neuron0x2e7e3e0()*-1.68264);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e6d6c0() {
   return (neuron0x2e7e720()*2.6092);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e815c0() {
   return (neuron0x2e7ea60()*1.55862);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83530() {
   return (neuron0x2e7eda0()*-3.50854);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83570() {
   return (neuron0x2e7f0e0()*2.51082);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e838f0() {
   return (neuron0x2e7e3e0()*4.14708);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83930() {
   return (neuron0x2e7e720()*-1.60944);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83970() {
   return (neuron0x2e7ea60()*-6.30848);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e839b0() {
   return (neuron0x2e7eda0()*3.96351);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e839f0() {
   return (neuron0x2e7f0e0()*-0.898049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83d70() {
   return (neuron0x2e7e3e0()*1.68857);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7e600() {
   return (neuron0x2e7e720()*-0.500571);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7e640() {
   return (neuron0x2e7ea60()*-1.36047);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7e940() {
   return (neuron0x2e7eda0()*-16.0589);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7e980() {
   return (neuron0x2e7f0e0()*0.946647);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84490() {
   return (neuron0x2e7e3e0()*0.0654248);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e844d0() {
   return (neuron0x2e7e720()*-0.669409);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84510() {
   return (neuron0x2e7ea60()*0.945783);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84550() {
   return (neuron0x2e7eda0()*-0.98587);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84590() {
   return (neuron0x2e7f0e0()*-6.50024);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84910() {
   return (neuron0x2e7e3e0()*2.0215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84950() {
   return (neuron0x2e7e720()*0.098774);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84990() {
   return (neuron0x2e7ea60()*-1.7215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e849d0() {
   return (neuron0x2e7eda0()*-1.49805);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84a10() {
   return (neuron0x2e7f0e0()*-0.565083);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84d90() {
   return (neuron0x2e7e3e0()*-3.03521);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84dd0() {
   return (neuron0x2e7e720()*1.9679);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84e10() {
   return (neuron0x2e7ea60()*1.81768);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84e50() {
   return (neuron0x2e7eda0()*11.4138);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84e90() {
   return (neuron0x2e7f0e0()*0.341085);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85210() {
   return (neuron0x2e7e3e0()*0.0623126);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85250() {
   return (neuron0x2e7e720()*0.018445);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85290() {
   return (neuron0x2e7ea60()*0.55462);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e852d0() {
   return (neuron0x2e7eda0()*-12.3433);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85310() {
   return (neuron0x2e7f0e0()*1.6311);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85690() {
   return (neuron0x2e7e3e0()*4.16927);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e856d0() {
   return (neuron0x2e7e720()*-0.587302);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85710() {
   return (neuron0x2e7ea60()*-8.14563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85750() {
   return (neuron0x2e7eda0()*7.19199);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85790() {
   return (neuron0x2e7f0e0()*-2.19826);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85b10() {
   return (neuron0x2e7e3e0()*-1.77916);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85b50() {
   return (neuron0x2e7e720()*0.697022);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85b90() {
   return (neuron0x2e7ea60()*-0.366762);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85bd0() {
   return (neuron0x2e7eda0()*0.212779);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85c10() {
   return (neuron0x2e7f0e0()*1.65453);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85f90() {
   return (neuron0x2e7e3e0()*-0.172741);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85fd0() {
   return (neuron0x2e7e720()*-0.251741);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86010() {
   return (neuron0x2e7ea60()*-1.36549);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86050() {
   return (neuron0x2e7eda0()*2.43563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86090() {
   return (neuron0x2e7f0e0()*-1.20129);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86410() {
   return (neuron0x2e7e3e0()*-0.410671);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86450() {
   return (neuron0x2e7e720()*1.62942);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86490() {
   return (neuron0x2e7ea60()*1.03026);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e864d0() {
   return (neuron0x2e7eda0()*6.72946);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86510() {
   return (neuron0x2e7f0e0()*0.0488597);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86890() {
   return (neuron0x2e7e3e0()*1.53676);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e868d0() {
   return (neuron0x2e7e720()*-0.713922);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86910() {
   return (neuron0x2e7ea60()*-1.6948);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86950() {
   return (neuron0x2e7eda0()*-0.609742);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86990() {
   return (neuron0x2e7f0e0()*-1.54458);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e804b0() {
   return (neuron0x2e7f550()*4.39678);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e804f0() {
   return (neuron0x2e7f900()*2.18209);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e809c0() {
   return (neuron0x2e7fd80()*0.665924);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80a00() {
   return (neuron0x2e80200()*4.19353);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80e40() {
   return (neuron0x2e80710()*1.13801);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80e80() {
   return (neuron0x2e80b90()*5.7642);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e812c0() {
   return (neuron0x2e81010()*0.981803);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81300() {
   return (neuron0x2e81620()*0.0659617);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81840() {
   return (neuron0x2e81a10()*1.05653);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81880() {
   return (neuron0x2e81e90()*0.175357);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81cc0() {
   return (neuron0x2e82310()*2.67214);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81d00() {
   return (neuron0x2e82790()*-2.14045);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82140() {
   return (neuron0x2e82ca0()*0.778183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82180() {
   return (neuron0x2e068d0()*0.613328);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e825c0() {
   return (neuron0x2e835b0()*0.221471);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82600() {
   return (neuron0x2e83a30()*-2.06122);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82a40() {
   return (neuron0x2e84300()*0.719366);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82a80() {
   return (neuron0x2e845d0()*1.73581);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82f50() {
   return (neuron0x2e84a50()*4.80178);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82f90() {
   return (neuron0x2e84ed0()*-0.219212);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81530() {
   return (neuron0x2e85350()*3.57326);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81570() {
   return (neuron0x2e857d0()*-2.42722);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83860() {
   return (neuron0x2e85c50()*3.96205);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e838a0() {
   return (neuron0x2e860d0()*1.84112);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83ce0() {
   return (neuron0x2e86550()*0.353619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e833c0() {
   return (neuron0x2e7f550()*0.952226);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83400() {
   return (neuron0x2e7f900()*1.3619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83440() {
   return (neuron0x2e7fd80()*1.27317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83480() {
   return (neuron0x2e80200()*0.0922668);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e834c0() {
   return (neuron0x2e80710()*0.727567);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83d20() {
   return (neuron0x2e80b90()*0.486105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85180() {
   return (neuron0x2e81010()*0.100212);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e851c0() {
   return (neuron0x2e81620()*0.581632);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85600() {
   return (neuron0x2e81a10()*-0.114926);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85640() {
   return (neuron0x2e81e90()*1.74642);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85a80() {
   return (neuron0x2e82310()*1.31362);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85ac0() {
   return (neuron0x2e82790()*1.393);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85f00() {
   return (neuron0x2e82ca0()*0.535512);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85f40() {
   return (neuron0x2e068d0()*0.496151);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86380() {
   return (neuron0x2e835b0()*1.50196);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e863c0() {
   return (neuron0x2e83a30()*1.99227);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86800() {
   return (neuron0x2e84300()*0.805148);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86840() {
   return (neuron0x2e845d0()*0.37628);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f770() {
   return (neuron0x2e84a50()*-0.132588);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f7b0() {
   return (neuron0x2e84ed0()*1.43029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f300() {
   return (neuron0x2e85350()*0.276244);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f340() {
   return (neuron0x2e857d0()*1.55744);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88f10() {
   return (neuron0x2e85c50()*0.679665);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88f50() {
   return (neuron0x2e860d0()*-0.653995);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88f90() {
   return (neuron0x2e86550()*0.651817);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82ad0() {
   return (neuron0x2e7f550()*-3.00422);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82b10() {
   return (neuron0x2e7f900()*-1.17227);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82b50() {
   return (neuron0x2e7fd80()*-0.132598);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82b90() {
   return (neuron0x2e80200()*-3.07706);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89520() {
   return (neuron0x2e80710()*-0.506283);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89560() {
   return (neuron0x2e80b90()*-3.64215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e895a0() {
   return (neuron0x2e81010()*-1.15186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e895e0() {
   return (neuron0x2e81620()*0.625259);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89620() {
   return (neuron0x2e81a10()*-0.0333343);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89660() {
   return (neuron0x2e81e90()*0.300077);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e896a0() {
   return (neuron0x2e82310()*-1.54088);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e896e0() {
   return (neuron0x2e82790()*1.30998);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89720() {
   return (neuron0x2e82ca0()*-0.340314);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89760() {
   return (neuron0x2e068d0()*0.0275948);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e897a0() {
   return (neuron0x2e835b0()*0.0813756);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e897e0() {
   return (neuron0x2e83a30()*1.78029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89160() {
   return (neuron0x2e84300()*-0.698775);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e891a0() {
   return (neuron0x2e845d0()*-0.759245);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89930() {
   return (neuron0x2e84a50()*-2.62365);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89970() {
   return (neuron0x2e84ed0()*0.521883);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e899b0() {
   return (neuron0x2e85350()*-1.48029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e899f0() {
   return (neuron0x2e857d0()*1.85793);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89a30() {
   return (neuron0x2e85c50()*-2.07561);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89a70() {
   return (neuron0x2e860d0()*-1.75583);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89ab0() {
   return (neuron0x2e86550()*-0.411197);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89e30() {
   return (neuron0x2e7f550()*4.52239);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89e70() {
   return (neuron0x2e7f900()*2.79418);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89eb0() {
   return (neuron0x2e7fd80()*0.810519);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89ef0() {
   return (neuron0x2e80200()*4.04693);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89f30() {
   return (neuron0x2e80710()*1.3691);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89f70() {
   return (neuron0x2e80b90()*4.73038);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89fb0() {
   return (neuron0x2e81010()*1.50149);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89ff0() {
   return (neuron0x2e81620()*-0.641659);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a030() {
   return (neuron0x2e81a10()*0.534329);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a070() {
   return (neuron0x2e81e90()*1.03673);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a0b0() {
   return (neuron0x2e82310()*2.83563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a0f0() {
   return (neuron0x2e82790()*-0.858854);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a130() {
   return (neuron0x2e82ca0()*1.56564);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a170() {
   return (neuron0x2e068d0()*0.488725);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a1b0() {
   return (neuron0x2e835b0()*0.32415);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a1f0() {
   return (neuron0x2e83a30()*-0.852143);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89c80() {
   return (neuron0x2e84300()*0.765109);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e89cc0() {
   return (neuron0x2e845d0()*1.38715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a340() {
   return (neuron0x2e84a50()*4.8491);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a380() {
   return (neuron0x2e84ed0()*0.790069);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a3c0() {
   return (neuron0x2e85350()*3.10799);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a400() {
   return (neuron0x2e857d0()*-1.38584);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a440() {
   return (neuron0x2e85c50()*3.11162);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a480() {
   return (neuron0x2e860d0()*2.44657);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a4c0() {
   return (neuron0x2e86550()*0.649634);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a840() {
   return (neuron0x2e7f550()*-2.36621);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a880() {
   return (neuron0x2e7f900()*-0.0927484);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a8c0() {
   return (neuron0x2e7fd80()*0.725717);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a900() {
   return (neuron0x2e80200()*-3.88041);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a940() {
   return (neuron0x2e80710()*-0.462321);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a980() {
   return (neuron0x2e80b90()*-3.49738);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a9c0() {
   return (neuron0x2e81010()*-0.611544);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8aa00() {
   return (neuron0x2e81620()*0.413277);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8aa40() {
   return (neuron0x2e81a10()*-0.662008);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8aa80() {
   return (neuron0x2e81e90()*1.51651);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8aac0() {
   return (neuron0x2e82310()*-1.26887);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ab00() {
   return (neuron0x2e82790()*2.06933);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ab40() {
   return (neuron0x2e82ca0()*-0.321619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ab80() {
   return (neuron0x2e068d0()*-0.262823);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8abc0() {
   return (neuron0x2e835b0()*1.40294);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ac00() {
   return (neuron0x2e83a30()*3.20259);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a690() {
   return (neuron0x2e84300()*0.548912);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8a6d0() {
   return (neuron0x2e845d0()*-1.02076);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ad50() {
   return (neuron0x2e84a50()*-4.03335);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ad90() {
   return (neuron0x2e84ed0()*0.529867);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8add0() {
   return (neuron0x2e85350()*-2.54723);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ae10() {
   return (neuron0x2e857d0()*2.82451);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ae50() {
   return (neuron0x2e85c50()*-1.80897);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ae90() {
   return (neuron0x2e860d0()*-2.10048);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8aed0() {
   return (neuron0x2e86550()*0.954677);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b250() {
   return (neuron0x2e7f550()*0.777367);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b290() {
   return (neuron0x2e7f900()*0.0607946);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b2d0() {
   return (neuron0x2e7fd80()*-0.346193);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b310() {
   return (neuron0x2e80200()*1.63121);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b350() {
   return (neuron0x2e80710()*-0.0144368);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b390() {
   return (neuron0x2e80b90()*1.32483);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b3d0() {
   return (neuron0x2e81010()*0.320624);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e885f0() {
   return (neuron0x2e81620()*0.0228055);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88630() {
   return (neuron0x2e81a10()*0.114566);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88670() {
   return (neuron0x2e81e90()*-0.322683);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e886b0() {
   return (neuron0x2e82310()*0.410507);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e886f0() {
   return (neuron0x2e82790()*-0.754513);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88730() {
   return (neuron0x2e82ca0()*0.673563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88770() {
   return (neuron0x2e068d0()*0.582994);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e887b0() {
   return (neuron0x2e835b0()*-0.703025);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e887f0() {
   return (neuron0x2e83a30()*-1.6942);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b0a0() {
   return (neuron0x2e84300()*0.489028);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8b0e0() {
   return (neuron0x2e845d0()*0.146452);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88940() {
   return (neuron0x2e84a50()*1.99805);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88980() {
   return (neuron0x2e84ed0()*0.381208);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e889c0() {
   return (neuron0x2e85350()*0.619353);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88a00() {
   return (neuron0x2e857d0()*-0.98382);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88a40() {
   return (neuron0x2e85c50()*0.503183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88a80() {
   return (neuron0x2e860d0()*1.02295);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88ac0() {
   return (neuron0x2e86550()*-0.0313796);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88db0() {
   return (neuron0x2e7f550()*-1.54222);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c4b0() {
   return (neuron0x2e7f900()*-1.75176);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c4f0() {
   return (neuron0x2e7fd80()*-1.62561);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c530() {
   return (neuron0x2e80200()*-0.230569);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c570() {
   return (neuron0x2e80710()*-1.10995);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c5b0() {
   return (neuron0x2e80b90()*-0.55499);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c5f0() {
   return (neuron0x2e81010()*-0.115245);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c630() {
   return (neuron0x2e81620()*-0.587102);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c670() {
   return (neuron0x2e81a10()*0.198929);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c6b0() {
   return (neuron0x2e81e90()*-1.55838);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c6f0() {
   return (neuron0x2e82310()*-1.55399);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c730() {
   return (neuron0x2e82790()*-0.986984);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c770() {
   return (neuron0x2e82ca0()*-0.131988);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c7b0() {
   return (neuron0x2e068d0()*-0.488075);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c7f0() {
   return (neuron0x2e835b0()*-0.77022);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c830() {
   return (neuron0x2e83a30()*-1.71804);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88c90() {
   return (neuron0x2e84300()*-0.623455);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e88cd0() {
   return (neuron0x2e845d0()*-0.0629124);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c980() {
   return (neuron0x2e84a50()*-0.0299903);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c9c0() {
   return (neuron0x2e84ed0()*-0.817488);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ca00() {
   return (neuron0x2e85350()*0.0759221);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ca40() {
   return (neuron0x2e857d0()*-0.292819);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ca80() {
   return (neuron0x2e85c50()*-1.01187);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cac0() {
   return (neuron0x2e860d0()*0.646289);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cb00() {
   return (neuron0x2e86550()*-1.1186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ce80() {
   return (neuron0x2e7f550()*-0.967868);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cec0() {
   return (neuron0x2e7f900()*0.171543);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cf00() {
   return (neuron0x2e7fd80()*0.797751);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cf40() {
   return (neuron0x2e80200()*-4.57047);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cf80() {
   return (neuron0x2e80710()*-0.293626);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cfc0() {
   return (neuron0x2e80b90()*-2.37211);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d000() {
   return (neuron0x2e81010()*-1.25959);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d040() {
   return (neuron0x2e81620()*0.696407);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d080() {
   return (neuron0x2e81a10()*-1.16217);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d0c0() {
   return (neuron0x2e81e90()*1.15913);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d100() {
   return (neuron0x2e82310()*-1.79218);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d140() {
   return (neuron0x2e82790()*2.21322);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d180() {
   return (neuron0x2e82ca0()*-1.02332);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d1c0() {
   return (neuron0x2e068d0()*-0.167299);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d200() {
   return (neuron0x2e835b0()*1.01835);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d240() {
   return (neuron0x2e83a30()*3.82891);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ccd0() {
   return (neuron0x2e84300()*-0.0608526);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8cd10() {
   return (neuron0x2e845d0()*-0.666418);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d390() {
   return (neuron0x2e84a50()*-4.03682);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d3d0() {
   return (neuron0x2e84ed0()*1.48764);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d410() {
   return (neuron0x2e85350()*-2.3285);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d450() {
   return (neuron0x2e857d0()*2.41802);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d490() {
   return (neuron0x2e85c50()*-1.58528);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d4d0() {
   return (neuron0x2e860d0()*-2.72315);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d510() {
   return (neuron0x2e86550()*0.814934);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d890() {
   return (neuron0x2e7f550()*-4.14681);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d8d0() {
   return (neuron0x2e7f900()*-1.16927);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d910() {
   return (neuron0x2e7fd80()*-1.4349);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d950() {
   return (neuron0x2e80200()*2.26665);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d990() {
   return (neuron0x2e80710()*-0.849201);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d9d0() {
   return (neuron0x2e80b90()*1.21715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8da10() {
   return (neuron0x2e81010()*-0.0543142);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8da50() {
   return (neuron0x2e81620()*1.57091);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8da90() {
   return (neuron0x2e81a10()*0.0938906);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dad0() {
   return (neuron0x2e81e90()*-0.988049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8db10() {
   return (neuron0x2e82310()*-0.301993);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8db50() {
   return (neuron0x2e82790()*-8.74982);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8db90() {
   return (neuron0x2e82ca0()*-5.5856);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dbd0() {
   return (neuron0x2e068d0()*-0.457344);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dc10() {
   return (neuron0x2e835b0()*-1.18261);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dc50() {
   return (neuron0x2e83a30()*-2.90743);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d6e0() {
   return (neuron0x2e84300()*0.834238);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8d720() {
   return (neuron0x2e845d0()*0.236723);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dda0() {
   return (neuron0x2e84a50()*1.71518);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dde0() {
   return (neuron0x2e84ed0()*3.1468);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8de20() {
   return (neuron0x2e85350()*0.97358);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8de60() {
   return (neuron0x2e857d0()*-2.67433);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dea0() {
   return (neuron0x2e85c50()*-1.89715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8dee0() {
   return (neuron0x2e860d0()*1.2209);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8df20() {
   return (neuron0x2e86550()*-0.377494);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e2a0() {
   return (neuron0x2e7f550()*-4.44543);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e2e0() {
   return (neuron0x2e7f900()*-1.46671);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e320() {
   return (neuron0x2e7fd80()*-0.442621);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e360() {
   return (neuron0x2e80200()*-5.07883);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e3a0() {
   return (neuron0x2e80710()*-1.21676);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e3e0() {
   return (neuron0x2e80b90()*-5.31999);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e420() {
   return (neuron0x2e81010()*-0.635997);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e460() {
   return (neuron0x2e81620()*0.129068);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e4a0() {
   return (neuron0x2e81a10()*0.0844451);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e4e0() {
   return (neuron0x2e81e90()*0.367817);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e520() {
   return (neuron0x2e82310()*-2.88068);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e560() {
   return (neuron0x2e82790()*2.86164);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e5a0() {
   return (neuron0x2e82ca0()*-0.809369);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e5e0() {
   return (neuron0x2e068d0()*-0.0142833);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e620() {
   return (neuron0x2e835b0()*0.396646);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e660() {
   return (neuron0x2e83a30()*2.51577);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e0f0() {
   return (neuron0x2e84300()*-0.951186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e130() {
   return (neuron0x2e845d0()*-1.02041);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e7b0() {
   return (neuron0x2e84a50()*-5.19402);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e7f0() {
   return (neuron0x2e84ed0()*0.74942);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e830() {
   return (neuron0x2e85350()*-3.07745);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e870() {
   return (neuron0x2e857d0()*3.38585);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e8b0() {
   return (neuron0x2e85c50()*-3.8965);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e8f0() {
   return (neuron0x2e860d0()*-2.37812);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8e930() {
   return (neuron0x2e86550()*-0.105017);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ecb0() {
   return (neuron0x2e7f550()*3.16257);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ecf0() {
   return (neuron0x2e7f900()*0.304688);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ed30() {
   return (neuron0x2e7fd80()*-0.377299);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ed70() {
   return (neuron0x2e80200()*3.67043);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8edb0() {
   return (neuron0x2e80710()*0.728142);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8edf0() {
   return (neuron0x2e80b90()*4.74735);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ee30() {
   return (neuron0x2e81010()*0.317863);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ee70() {
   return (neuron0x2e81620()*-0.951781);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8eeb0() {
   return (neuron0x2e81a10()*0.745866);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8eef0() {
   return (neuron0x2e81e90()*-0.443697);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ef30() {
   return (neuron0x2e82310()*1.64971);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ef70() {
   return (neuron0x2e82790()*-2.5049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8efb0() {
   return (neuron0x2e82ca0()*0.277841);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8eff0() {
   return (neuron0x2e068d0()*0.0786287);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f030() {
   return (neuron0x2e835b0()*-0.467689);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f070() {
   return (neuron0x2e83a30()*-2.33909);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8eb00() {
   return (neuron0x2e84300()*0.692096);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8eb40() {
   return (neuron0x2e845d0()*0.481442);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f1c0() {
   return (neuron0x2e84a50()*4.40045);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f200() {
   return (neuron0x2e84ed0()*-1.41118);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f240() {
   return (neuron0x2e85350()*2.24816);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f280() {
   return (neuron0x2e857d0()*-3.15785);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f2c0() {
   return (neuron0x2e85c50()*2.74721);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f300() {
   return (neuron0x2e860d0()*1.52215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f340() {
   return (neuron0x2e86550()*-0.845121);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f6c0() {
   return (neuron0x2e7f550()*-1.36647);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f700() {
   return (neuron0x2e7f900()*-0.744421);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f740() {
   return (neuron0x2e7fd80()*-0.0617455);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f780() {
   return (neuron0x2e80200()*-2.62315);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f7c0() {
   return (neuron0x2e80710()*-0.377895);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f800() {
   return (neuron0x2e80b90()*-2.74387);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f840() {
   return (neuron0x2e81010()*-0.0688758);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f880() {
   return (neuron0x2e81620()*0.00486049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f8c0() {
   return (neuron0x2e81a10()*0.178254);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f900() {
   return (neuron0x2e81e90()*0.427931);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f940() {
   return (neuron0x2e82310()*-0.982963);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f980() {
   return (neuron0x2e82790()*3.32079);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f9c0() {
   return (neuron0x2e82ca0()*-1.40009);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fa00() {
   return (neuron0x2e068d0()*-0.225343);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fa40() {
   return (neuron0x2e835b0()*0.600942);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fa80() {
   return (neuron0x2e83a30()*1.96517);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f510() {
   return (neuron0x2e84300()*-0.834833);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8f550() {
   return (neuron0x2e845d0()*-0.377403);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fbd0() {
   return (neuron0x2e84a50()*-2.80639);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fc10() {
   return (neuron0x2e84ed0()*0.327358);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fc50() {
   return (neuron0x2e85350()*-1.45784);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fc90() {
   return (neuron0x2e857d0()*1.71003);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fcd0() {
   return (neuron0x2e85c50()*-2.20132);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fd10() {
   return (neuron0x2e860d0()*-1.30285);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8fd50() {
   return (neuron0x2e86550()*0.537265);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e900d0() {
   return (neuron0x2e7f550()*-3.04408);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90110() {
   return (neuron0x2e7f900()*-0.857601);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90150() {
   return (neuron0x2e7fd80()*-0.106904);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90190() {
   return (neuron0x2e80200()*-3.25172);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e901d0() {
   return (neuron0x2e80710()*-0.406067);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90210() {
   return (neuron0x2e80b90()*-3.13076);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90250() {
   return (neuron0x2e81010()*-1.0501);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90290() {
   return (neuron0x2e81620()*0.484834);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e902d0() {
   return (neuron0x2e81a10()*-0.166775);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90310() {
   return (neuron0x2e81e90()*0.422941);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90350() {
   return (neuron0x2e82310()*-1.55866);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90390() {
   return (neuron0x2e82790()*1.41637);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e903d0() {
   return (neuron0x2e82ca0()*-0.90543);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90410() {
   return (neuron0x2e068d0()*-0.233119);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90450() {
   return (neuron0x2e835b0()*-0.214458);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90490() {
   return (neuron0x2e83a30()*2.06206);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ff20() {
   return (neuron0x2e84300()*-0.51712);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8ff60() {
   return (neuron0x2e845d0()*-0.271459);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e905e0() {
   return (neuron0x2e84a50()*-2.94566);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90620() {
   return (neuron0x2e84ed0()*0.915162);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90660() {
   return (neuron0x2e85350()*-2.25773);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e906a0() {
   return (neuron0x2e857d0()*2.55135);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e906e0() {
   return (neuron0x2e85c50()*-2.67468);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90720() {
   return (neuron0x2e860d0()*-1.41729);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90760() {
   return (neuron0x2e86550()*-0.270661);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90ae0() {
   return (neuron0x2e7f550()*4.57682);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90b20() {
   return (neuron0x2e7f900()*0.80482);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90b60() {
   return (neuron0x2e7fd80()*0.172343);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90ba0() {
   return (neuron0x2e80200()*4.18461);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90be0() {
   return (neuron0x2e80710()*0.438638);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90c20() {
   return (neuron0x2e80b90()*3.93714);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90c60() {
   return (neuron0x2e81010()*1.97801);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90ca0() {
   return (neuron0x2e81620()*-1.03659);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90ce0() {
   return (neuron0x2e81a10()*-0.289405);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90d20() {
   return (neuron0x2e81e90()*-0.18077);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90d60() {
   return (neuron0x2e82310()*2.75479);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90da0() {
   return (neuron0x2e82790()*-14.4715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90de0() {
   return (neuron0x2e82ca0()*-5.78674);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90e20() {
   return (neuron0x2e068d0()*1.25357);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90e60() {
   return (neuron0x2e835b0()*-0.224121);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90ea0() {
   return (neuron0x2e83a30()*-2.18849);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90930() {
   return (neuron0x2e84300()*-4.29636);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90970() {
   return (neuron0x2e845d0()*0.476014);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e90ff0() {
   return (neuron0x2e84a50()*3.74571);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91030() {
   return (neuron0x2e84ed0()*-2.5113);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91070() {
   return (neuron0x2e85350()*1.9412);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e910b0() {
   return (neuron0x2e857d0()*-1.15316);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e910f0() {
   return (neuron0x2e85c50()*4.09508);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91130() {
   return (neuron0x2e860d0()*3.39206);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91170() {
   return (neuron0x2e86550()*-0.245555);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e914f0() {
   return (neuron0x2e7f550()*-0.892896);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91530() {
   return (neuron0x2e7f900()*0.0415766);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91570() {
   return (neuron0x2e7fd80()*0.0100233);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e915b0() {
   return (neuron0x2e80200()*0.488474);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e915f0() {
   return (neuron0x2e80710()*0.0575182);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91630() {
   return (neuron0x2e80b90()*0.884213);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91670() {
   return (neuron0x2e81010()*0.366474);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e916b0() {
   return (neuron0x2e81620()*-0.224171);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e916f0() {
   return (neuron0x2e81a10()*0.201982);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91730() {
   return (neuron0x2e81e90()*-0.641563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91770() {
   return (neuron0x2e82310()*-0.0588092);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e917b0() {
   return (neuron0x2e82790()*1.73774);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e917f0() {
   return (neuron0x2e82ca0()*-0.363895);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91830() {
   return (neuron0x2e068d0()*1.00143);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91870() {
   return (neuron0x2e835b0()*0.112194);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e918b0() {
   return (neuron0x2e83a30()*-0.679311);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91340() {
   return (neuron0x2e84300()*0.0332684);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91380() {
   return (neuron0x2e845d0()*-1.15347);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91a00() {
   return (neuron0x2e84a50()*0.547439);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91a40() {
   return (neuron0x2e84ed0()*-0.893679);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91a80() {
   return (neuron0x2e85350()*0.643288);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91ac0() {
   return (neuron0x2e857d0()*-0.813608);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91b00() {
   return (neuron0x2e85c50()*-2.5636);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91b40() {
   return (neuron0x2e860d0()*0.275305);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91b80() {
   return (neuron0x2e86550()*0.495619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91f00() {
   return (neuron0x2e7f550()*2.52941);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f6e0() {
   return (neuron0x2e7f900()*0.887324);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f720() {
   return (neuron0x2e7fd80()*0.473576);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fb20() {
   return (neuron0x2e80200()*1.78271);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7fb60() {
   return (neuron0x2e80710()*0.758502);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7ffa0() {
   return (neuron0x2e80b90()*2.29615);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7ffe0() {
   return (neuron0x2e81010()*0.276771);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80420() {
   return (neuron0x2e81620()*0.0415708);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80460() {
   return (neuron0x2e81a10()*-0.157785);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80930() {
   return (neuron0x2e81e90()*0.502677);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80970() {
   return (neuron0x2e82310()*1.09623);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80db0() {
   return (neuron0x2e82790()*-1.19504);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e80df0() {
   return (neuron0x2e82ca0()*0.707502);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81230() {
   return (neuron0x2e068d0()*0.596503);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81270() {
   return (neuron0x2e835b0()*0.198552);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e817b0() {
   return (neuron0x2e83a30()*-1.37906);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e817f0() {
   return (neuron0x2e84300()*0.157139);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81c30() {
   return (neuron0x2e845d0()*0.886708);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e81c70() {
   return (neuron0x2e84a50()*2.69029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e820b0() {
   return (neuron0x2e84ed0()*-0.00930282);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e820f0() {
   return (neuron0x2e85350()*1.57882);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82530() {
   return (neuron0x2e857d0()*-1.73644);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82570() {
   return (neuron0x2e85c50()*1.80246);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e829b0() {
   return (neuron0x2e860d0()*1.09152);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e829f0() {
   return (neuron0x2e86550()*-0.0473598);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c370() {
   return (neuron0x2e7f550()*-1.0433);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e8c3b0() {
   return (neuron0x2e7f900()*0.49372);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83c50() {
   return (neuron0x2e7fd80()*1.50537);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e83c90() {
   return (neuron0x2e80200()*-2.5133);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91d50() {
   return (neuron0x2e80710()*-0.616597);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e91d90() {
   return (neuron0x2e80b90()*-1.85385);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7efc0() {
   return (neuron0x2e81010()*-0.844896);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f000() {
   return (neuron0x2e81620()*0.327001);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e847f0() {
   return (neuron0x2e81a10()*-0.564585);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84830() {
   return (neuron0x2e81e90()*0.51838);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84c70() {
   return (neuron0x2e82310()*-0.971948);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e84cb0() {
   return (neuron0x2e82790()*0.95734);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e850f0() {
   return (neuron0x2e82ca0()*-0.459423);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85130() {
   return (neuron0x2e068d0()*-0.0692266);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85570() {
   return (neuron0x2e835b0()*0.652499);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e855b0() {
   return (neuron0x2e83a30()*2.67129);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e859f0() {
   return (neuron0x2e84300()*0.104383);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85a30() {
   return (neuron0x2e845d0()*-0.354536);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85e70() {
   return (neuron0x2e84a50()*-2.71047);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e85eb0() {
   return (neuron0x2e84ed0()*0.809943);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e862f0() {
   return (neuron0x2e85350()*-0.867186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86330() {
   return (neuron0x2e857d0()*0.84849);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e86770() {
   return (neuron0x2e85c50()*-1.22048);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e867b0() {
   return (neuron0x2e860d0()*-1.71712);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82ec0() {
   return (neuron0x2e86550()*1.06034);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e82f00() {
   return (neuron0x2e7f550()*-3.17768);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95170() {
   return (neuron0x2e7f900()*-1.39297);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e951b0() {
   return (neuron0x2e7fd80()*-0.0574777);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e951f0() {
   return (neuron0x2e80200()*-2.92693);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95230() {
   return (neuron0x2e80710()*-0.920568);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95270() {
   return (neuron0x2e80b90()*-3.64231);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e952b0() {
   return (neuron0x2e81010()*-0.99497);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e952f0() {
   return (neuron0x2e81620()*0.499122);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95330() {
   return (neuron0x2e81a10()*-0.0717638);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95370() {
   return (neuron0x2e81e90()*0.776914);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e953b0() {
   return (neuron0x2e82310()*-1.98268);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e953f0() {
   return (neuron0x2e82790()*1.72995);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95430() {
   return (neuron0x2e82ca0()*-1.13254);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95470() {
   return (neuron0x2e068d0()*-0.346732);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e954b0() {
   return (neuron0x2e835b0()*0.796706);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e954f0() {
   return (neuron0x2e83a30()*2.4093);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e94fc0() {
   return (neuron0x2e84300()*-0.540501);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95000() {
   return (neuron0x2e845d0()*-0.634632);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95640() {
   return (neuron0x2e84a50()*-3.06066);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95680() {
   return (neuron0x2e84ed0()*1.10688);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e956c0() {
   return (neuron0x2e85350()*-2.24281);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95700() {
   return (neuron0x2e857d0()*2.79868);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95740() {
   return (neuron0x2e85c50()*-2.4977);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95780() {
   return (neuron0x2e860d0()*-1.34136);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e957c0() {
   return (neuron0x2e86550()*0.455584);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95b40() {
   return (neuron0x2e7f550()*-2.21216);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95b80() {
   return (neuron0x2e7f900()*0.913388);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95bc0() {
   return (neuron0x2e7fd80()*0.0140514);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95c00() {
   return (neuron0x2e80200()*-1.15302);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95c40() {
   return (neuron0x2e80710()*-0.725014);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95c80() {
   return (neuron0x2e80b90()*-1.65221);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95cc0() {
   return (neuron0x2e81010()*0.638945);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95d00() {
   return (neuron0x2e81620()*0.109968);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95d40() {
   return (neuron0x2e81a10()*-0.00424981);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95d80() {
   return (neuron0x2e81e90()*1.27417);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95dc0() {
   return (neuron0x2e82310()*-0.289895);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95e00() {
   return (neuron0x2e82790()*8.12217);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95e40() {
   return (neuron0x2e82ca0()*2.84843);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95e80() {
   return (neuron0x2e068d0()*0.617666);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95ec0() {
   return (neuron0x2e835b0()*1.17581);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95f00() {
   return (neuron0x2e83a30()*2.86727);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e95990() {
   return (neuron0x2e84300()*0.249307);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e959d0() {
   return (neuron0x2e845d0()*0.221425);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96050() {
   return (neuron0x2e84a50()*-0.704034);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96090() {
   return (neuron0x2e84ed0()*18.857);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e960d0() {
   return (neuron0x2e85350()*-0.30664);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96110() {
   return (neuron0x2e857d0()*2.39172);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96150() {
   return (neuron0x2e85c50()*-4.51776);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96190() {
   return (neuron0x2e860d0()*0.168912);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e961d0() {
   return (neuron0x2e86550()*-0.363842);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96550() {
   return (neuron0x2e7f550()*-2.99641);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96590() {
   return (neuron0x2e7f900()*-0.463106);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e965d0() {
   return (neuron0x2e7fd80()*0.0700486);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96610() {
   return (neuron0x2e80200()*-2.6291);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96650() {
   return (neuron0x2e80710()*-0.160152);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96690() {
   return (neuron0x2e80b90()*-2.67594);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e966d0() {
   return (neuron0x2e81010()*-0.772368);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96710() {
   return (neuron0x2e81620()*1.25736);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96750() {
   return (neuron0x2e81a10()*0.33114);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96790() {
   return (neuron0x2e81e90()*-0.196704);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e967d0() {
   return (neuron0x2e82310()*-1.4105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96810() {
   return (neuron0x2e82790()*5.55329);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96850() {
   return (neuron0x2e82ca0()*2.31112);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96890() {
   return (neuron0x2e068d0()*0.356982);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e968d0() {
   return (neuron0x2e835b0()*0.344485);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96910() {
   return (neuron0x2e83a30()*1.66932);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e963a0() {
   return (neuron0x2e84300()*0.851033);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e963e0() {
   return (neuron0x2e845d0()*0.12975);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96a60() {
   return (neuron0x2e84a50()*-2.76186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96aa0() {
   return (neuron0x2e84ed0()*2.19228);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96ae0() {
   return (neuron0x2e85350()*-1.84693);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96b20() {
   return (neuron0x2e857d0()*2.41444);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96b60() {
   return (neuron0x2e85c50()*-1.4433);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96ba0() {
   return (neuron0x2e860d0()*-1.49152);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96be0() {
   return (neuron0x2e86550()*0.254348);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96f60() {
   return (neuron0x2e7f550()*4.33057);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96fa0() {
   return (neuron0x2e7f900()*1.8871);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96fe0() {
   return (neuron0x2e7fd80()*-0.297014);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97020() {
   return (neuron0x2e80200()*4.99897);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97060() {
   return (neuron0x2e80710()*1.41617);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e970a0() {
   return (neuron0x2e80b90()*5.51249);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e970e0() {
   return (neuron0x2e81010()*1.54465);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97120() {
   return (neuron0x2e81620()*-0.663984);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97160() {
   return (neuron0x2e81a10()*-0.0491874);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e971a0() {
   return (neuron0x2e81e90()*-0.612727);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e971e0() {
   return (neuron0x2e82310()*2.50503);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97220() {
   return (neuron0x2e82790()*-3.27888);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97260() {
   return (neuron0x2e82ca0()*1.38014);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e972a0() {
   return (neuron0x2e068d0()*0.0277142);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e972e0() {
   return (neuron0x2e835b0()*-0.908877);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97320() {
   return (neuron0x2e83a30()*-3.54052);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96db0() {
   return (neuron0x2e84300()*1.00201);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e96df0() {
   return (neuron0x2e845d0()*0.996342);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97470() {
   return (neuron0x2e84a50()*5.61741);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e974b0() {
   return (neuron0x2e84ed0()*-1.34984);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e974f0() {
   return (neuron0x2e85350()*3.90535);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97530() {
   return (neuron0x2e857d0()*-3.57409);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97570() {
   return (neuron0x2e85c50()*3.98158);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e975b0() {
   return (neuron0x2e860d0()*2.42543);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e975f0() {
   return (neuron0x2e86550()*-0.389028);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97970() {
   return (neuron0x2e7f550()*3.72295);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e979b0() {
   return (neuron0x2e7f900()*2.00411);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e979f0() {
   return (neuron0x2e7fd80()*1.31375);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97a30() {
   return (neuron0x2e80200()*5.13932);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97a70() {
   return (neuron0x2e80710()*2.13495);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97ab0() {
   return (neuron0x2e80b90()*0.670148);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97af0() {
   return (neuron0x2e81010()*2.91456);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97b30() {
   return (neuron0x2e81620()*4.68975);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97b70() {
   return (neuron0x2e81a10()*2.71087);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97bb0() {
   return (neuron0x2e81e90()*2.01255);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97bf0() {
   return (neuron0x2e82310()*3.52829);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97c30() {
   return (neuron0x2e82790()*-71.5039);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97c70() {
   return (neuron0x2e82ca0()*4.12564);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97cb0() {
   return (neuron0x2e068d0()*0.883923);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97cf0() {
   return (neuron0x2e835b0()*0.129158);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97d30() {
   return (neuron0x2e83a30()*-3.30044);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e977c0() {
   return (neuron0x2e84300()*-14.6155);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97800() {
   return (neuron0x2e845d0()*1.21886);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97e80() {
   return (neuron0x2e84a50()*5.99147);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97ec0() {
   return (neuron0x2e84ed0()*-7.24466);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97f00() {
   return (neuron0x2e85350()*2.42788);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97f40() {
   return (neuron0x2e857d0()*0.767886);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97f80() {
   return (neuron0x2e85c50()*0.198202);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e97fc0() {
   return (neuron0x2e860d0()*3.55979);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98000() {
   return (neuron0x2e86550()*-0.317189);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98380() {
   return (neuron0x2e7f550()*2.07948);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e983c0() {
   return (neuron0x2e7f900()*0.66006);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98400() {
   return (neuron0x2e7fd80()*0.273261);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98440() {
   return (neuron0x2e80200()*2.96669);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98480() {
   return (neuron0x2e80710()*0.565338);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e984c0() {
   return (neuron0x2e80b90()*3.4612);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98500() {
   return (neuron0x2e81010()*0.905926);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98540() {
   return (neuron0x2e81620()*-0.911968);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98580() {
   return (neuron0x2e81a10()*0.382634);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e985c0() {
   return (neuron0x2e81e90()*-0.493529);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98600() {
   return (neuron0x2e82310()*1.04133);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98640() {
   return (neuron0x2e82790()*-1.68988);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98680() {
   return (neuron0x2e82ca0()*0.216515);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e986c0() {
   return (neuron0x2e068d0()*-0.0410375);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98700() {
   return (neuron0x2e835b0()*-0.397093);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98740() {
   return (neuron0x2e83a30()*-1.71923);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e981d0() {
   return (neuron0x2e84300()*0.538247);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98210() {
   return (neuron0x2e845d0()*0.930235);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98890() {
   return (neuron0x2e84a50()*2.78102);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e988d0() {
   return (neuron0x2e84ed0()*-1.0264);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98910() {
   return (neuron0x2e85350()*1.53297);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98950() {
   return (neuron0x2e857d0()*-2.26269);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98990() {
   return (neuron0x2e85c50()*2.11997);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e989d0() {
   return (neuron0x2e860d0()*1.81941);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98a10() {
   return (neuron0x2e86550()*-0.169823);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98d90() {
   return (neuron0x2e7f550()*4.09937);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98dd0() {
   return (neuron0x2e7f900()*1.14673);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98e10() {
   return (neuron0x2e7fd80()*0.422963);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98e50() {
   return (neuron0x2e80200()*4.54952);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98e90() {
   return (neuron0x2e80710()*1.65183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98ed0() {
   return (neuron0x2e80b90()*6.16228);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98f10() {
   return (neuron0x2e81010()*0.71549);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98f50() {
   return (neuron0x2e81620()*-0.577503);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98f90() {
   return (neuron0x2e81a10()*0.0552866);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98fd0() {
   return (neuron0x2e81e90()*-0.283928);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99010() {
   return (neuron0x2e82310()*2.27728);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99050() {
   return (neuron0x2e82790()*-2.76628);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99090() {
   return (neuron0x2e82ca0()*1.45011);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e990d0() {
   return (neuron0x2e068d0()*0.686327);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99110() {
   return (neuron0x2e835b0()*0.0104284);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99150() {
   return (neuron0x2e83a30()*-2.47403);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98be0() {
   return (neuron0x2e84300()*1.38521);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e98c20() {
   return (neuron0x2e845d0()*1.61177);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e992a0() {
   return (neuron0x2e84a50()*5.17882);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e992e0() {
   return (neuron0x2e84ed0()*-1.14265);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99320() {
   return (neuron0x2e85350()*3.89567);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99360() {
   return (neuron0x2e857d0()*-3.57325);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e993a0() {
   return (neuron0x2e85c50()*4.15985);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e993e0() {
   return (neuron0x2e860d0()*2.91106);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99420() {
   return (neuron0x2e86550()*0.432818);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e997a0() {
   return (neuron0x2e7f550()*-3.06114);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e997e0() {
   return (neuron0x2e7f900()*-2.11461);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99820() {
   return (neuron0x2e7fd80()*-0.102277);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99860() {
   return (neuron0x2e80200()*-2.94844);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e998a0() {
   return (neuron0x2e80710()*-1.61317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e998e0() {
   return (neuron0x2e80b90()*-4.03782);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99920() {
   return (neuron0x2e81010()*-0.668442);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99960() {
   return (neuron0x2e81620()*0.868289);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e999a0() {
   return (neuron0x2e81a10()*0.453711);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e999e0() {
   return (neuron0x2e81e90()*-0.291149);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99a20() {
   return (neuron0x2e82310()*-1.64632);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99a60() {
   return (neuron0x2e82790()*1.86314);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99aa0() {
   return (neuron0x2e82ca0()*-0.0625076);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99ae0() {
   return (neuron0x2e068d0()*0.200268);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99b20() {
   return (neuron0x2e835b0()*0.301472);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99b60() {
   return (neuron0x2e83a30()*1.37382);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e995f0() {
   return (neuron0x2e84300()*-0.990962);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99630() {
   return (neuron0x2e845d0()*0.0772756);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99cb0() {
   return (neuron0x2e84a50()*-3.44014);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99cf0() {
   return (neuron0x2e84ed0()*0.743932);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99d30() {
   return (neuron0x2e85350()*-2.17677);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99d70() {
   return (neuron0x2e857d0()*2.77784);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99db0() {
   return (neuron0x2e85c50()*-3.03644);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99df0() {
   return (neuron0x2e860d0()*-2.01751);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e99e30() {
   return (neuron0x2e86550()*-0.710569);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a090() {
   return (neuron0x2e88460()*-1.63003);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a0d0() {
   return (neuron0x2e83230()*-13.75);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a110() {
   return (neuron0x2e88fd0()*2.77093);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a150() {
   return (neuron0x2e89af0()*-5.99743);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a190() {
   return (neuron0x2e8a500()*-13.5897);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a1d0() {
   return (neuron0x2e8af10()*8.09401);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a210() {
   return (neuron0x2e88b00()*16.9618);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a250() {
   return (neuron0x2e8cb40()*-14.8457);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a290() {
   return (neuron0x2e8d550()*18.0741);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a2d0() {
   return (neuron0x2e8df60()*0.625325);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a310() {
   return (neuron0x2e8e970()*1.05223);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a350() {
   return (neuron0x2e8f380()*-5.48105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a390() {
   return (neuron0x2e8fd90()*-1.55446);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a3d0() {
   return (neuron0x2e907a0()*2.78093);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a410() {
   return (neuron0x2e911b0()*12.3424);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a450() {
   return (neuron0x2e91bc0()*0.131464);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f420() {
   return (neuron0x2e8c1e0()*-11.642);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e7f460() {
   return (neuron0x2e94e30()*-1.31753);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a5a0() {
   return (neuron0x2e95800()*-10.4882);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a5e0() {
   return (neuron0x2e96210()*2.40921);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a620() {
   return (neuron0x2e96c20()*2.02307);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a660() {
   return (neuron0x2e97630()*3.0405);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a6a0() {
   return (neuron0x2e98040()*2.22108);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a6e0() {
   return (neuron0x2e98a50()*2.33468);
}

double nnFunc_25_25hi_3000ep__::synapse0x2e9a720() {
   return (neuron0x2e99460()*7.12659);
}

