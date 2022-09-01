#include "25_25hi_5000ep_1C_new_moved_random_sectorB_midwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2809c80();
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
         return neuron0x2809c80();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x27ee1f0() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x27ee530() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x27ee870() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x27eebb0() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x27eeef0() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x27ef360() {
   double input = -1.62453;
   input += synapse0x27dd530();
   input += synapse0x27ef610();
   input += synapse0x27ef650();
   input += synapse0x27ef690();
   input += synapse0x27ef6d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27ef360() {
   double input = input0x27ef360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27ef710() {
   double input = -2.60212;
   input += synapse0x27efa50();
   input += synapse0x27efa90();
   input += synapse0x27efad0();
   input += synapse0x27efb10();
   input += synapse0x27efb50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27ef710() {
   double input = input0x27ef710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27efb90() {
   double input = 1.68404;
   input += synapse0x27efed0();
   input += synapse0x27eff10();
   input += synapse0x27eff50();
   input += synapse0x27eff90();
   input += synapse0x27effd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27efb90() {
   double input = input0x27efb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f0010() {
   double input = 7.82234;
   input += synapse0x27f0350();
   input += synapse0x27f0390();
   input += synapse0x26689c0();
   input += synapse0x2668a00();
   input += synapse0x27f04e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f0010() {
   double input = input0x27f0010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f0520() {
   double input = -0.430751;
   input += synapse0x27f0860();
   input += synapse0x27f08a0();
   input += synapse0x27f08e0();
   input += synapse0x27f0920();
   input += synapse0x27f0960();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f0520() {
   double input = input0x27f0520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f09a0() {
   double input = 1.19864;
   input += synapse0x27f0ce0();
   input += synapse0x27f0d20();
   input += synapse0x27f0d60();
   input += synapse0x27f0da0();
   input += synapse0x27f0de0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f09a0() {
   double input = input0x27f09a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f0e20() {
   double input = 0.424677;
   input += synapse0x27f1160();
   input += synapse0x27f11a0();
   input += synapse0x27f11e0();
   input += synapse0x27f03d0();
   input += synapse0x27f0410();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f0e20() {
   double input = input0x27f0e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f1430() {
   double input = 1.6196;
   input += synapse0x27f16e0();
   input += synapse0x27f1720();
   input += synapse0x27f1760();
   input += synapse0x27f17a0();
   input += synapse0x27f17e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f1430() {
   double input = input0x27f1430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f1820() {
   double input = -1.26969;
   input += synapse0x27f1b60();
   input += synapse0x27f1ba0();
   input += synapse0x27f1be0();
   input += synapse0x27f1c20();
   input += synapse0x27f1c60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f1820() {
   double input = input0x27f1820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f1ca0() {
   double input = -1.07599;
   input += synapse0x27f1fe0();
   input += synapse0x27f2020();
   input += synapse0x27f2060();
   input += synapse0x27f20a0();
   input += synapse0x27f20e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f1ca0() {
   double input = input0x27f1ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f2120() {
   double input = 11.1933;
   input += synapse0x27f2460();
   input += synapse0x27f24a0();
   input += synapse0x27f24e0();
   input += synapse0x27f2520();
   input += synapse0x27f2560();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f2120() {
   double input = input0x27f2120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f25a0() {
   double input = 1.46277;
   input += synapse0x2668810();
   input += synapse0x2668850();
   input += synapse0x27f29f0();
   input += synapse0x27f2a30();
   input += synapse0x27f2a70();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f25a0() {
   double input = input0x27f25a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f2ab0() {
   double input = 1.65433;
   input += synapse0x27f2df0();
   input += synapse0x27f2e30();
   input += synapse0x27f2e70();
   input += synapse0x27f2eb0();
   input += synapse0x27f2ef0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f2ab0() {
   double input = input0x27f2ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27766e0() {
   double input = -10.8041;
   input += synapse0x2776870();
   input += synapse0x27dd4d0();
   input += synapse0x27f13d0();
   input += synapse0x27f3340();
   input += synapse0x27f3380();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27766e0() {
   double input = input0x27766e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f33c0() {
   double input = -16.4446;
   input += synapse0x27f3700();
   input += synapse0x27f3740();
   input += synapse0x27f3780();
   input += synapse0x27f37c0();
   input += synapse0x27f3800();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f33c0() {
   double input = input0x27f33c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f3840() {
   double input = -0.547485;
   input += synapse0x27f3b80();
   input += synapse0x27ee410();
   input += synapse0x27ee450();
   input += synapse0x27ee750();
   input += synapse0x27ee790();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f3840() {
   double input = input0x27f3840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f4110() {
   double input = 5.05457;
   input += synapse0x27f42a0();
   input += synapse0x27f42e0();
   input += synapse0x27f4320();
   input += synapse0x27f4360();
   input += synapse0x27f43a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f4110() {
   double input = input0x27f4110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f43e0() {
   double input = -13.6194;
   input += synapse0x27f4720();
   input += synapse0x27f4760();
   input += synapse0x27f47a0();
   input += synapse0x27f47e0();
   input += synapse0x27f4820();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f43e0() {
   double input = input0x27f43e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f4860() {
   double input = 0.766385;
   input += synapse0x27f4ba0();
   input += synapse0x27f4be0();
   input += synapse0x27f4c20();
   input += synapse0x27f4c60();
   input += synapse0x27f4ca0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f4860() {
   double input = input0x27f4860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f4ce0() {
   double input = -6.27805;
   input += synapse0x27f5020();
   input += synapse0x27f5060();
   input += synapse0x27f50a0();
   input += synapse0x27f50e0();
   input += synapse0x27f5120();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f4ce0() {
   double input = input0x27f4ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f5160() {
   double input = 2.81992;
   input += synapse0x27f54a0();
   input += synapse0x27f54e0();
   input += synapse0x27f5520();
   input += synapse0x27f5560();
   input += synapse0x27f55a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f5160() {
   double input = input0x27f5160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f55e0() {
   double input = 8.50112;
   input += synapse0x27f5920();
   input += synapse0x27f5960();
   input += synapse0x27f59a0();
   input += synapse0x27f59e0();
   input += synapse0x27f5a20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f55e0() {
   double input = input0x27f55e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f5a60() {
   double input = -0.90495;
   input += synapse0x27f5da0();
   input += synapse0x27f5de0();
   input += synapse0x27f5e20();
   input += synapse0x27f5e60();
   input += synapse0x27f5ea0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f5a60() {
   double input = input0x27f5a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f5ee0() {
   double input = 2.79314;
   input += synapse0x27f6220();
   input += synapse0x27f6260();
   input += synapse0x27f62a0();
   input += synapse0x27f62e0();
   input += synapse0x27f6320();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f5ee0() {
   double input = input0x27f5ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f6360() {
   double input = 17.3695;
   input += synapse0x27f66a0();
   input += synapse0x27f66e0();
   input += synapse0x27f6720();
   input += synapse0x27f6760();
   input += synapse0x27f67a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f6360() {
   double input = input0x27f6360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f8270() {
   double input = 0.851891;
   input += synapse0x27f02c0();
   input += synapse0x27f0300();
   input += synapse0x27f07d0();
   input += synapse0x27f0810();
   input += synapse0x27f0c50();
   input += synapse0x27f0c90();
   input += synapse0x27f10d0();
   input += synapse0x27f1110();
   input += synapse0x27f1650();
   input += synapse0x27f1690();
   input += synapse0x27f1ad0();
   input += synapse0x27f1b10();
   input += synapse0x27f1f50();
   input += synapse0x27f1f90();
   input += synapse0x27f23d0();
   input += synapse0x27f2410();
   input += synapse0x27f2850();
   input += synapse0x27f2890();
   input += synapse0x27f2d60();
   input += synapse0x27f2da0();
   input += synapse0x27f1340();
   input += synapse0x27f1380();
   input += synapse0x27f3670();
   input += synapse0x27f36b0();
   input += synapse0x27f3af0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f8270() {
   double input = input0x27f8270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f3040() {
   double input = -1.12783;
   input += synapse0x27f31d0();
   input += synapse0x27f3210();
   input += synapse0x27f3250();
   input += synapse0x27f3290();
   input += synapse0x27f32d0();
   input += synapse0x27f3b30();
   input += synapse0x27f4f90();
   input += synapse0x27f4fd0();
   input += synapse0x27f5410();
   input += synapse0x27f5450();
   input += synapse0x27f5890();
   input += synapse0x27f58d0();
   input += synapse0x27f5d10();
   input += synapse0x27f5d50();
   input += synapse0x27f6190();
   input += synapse0x27f61d0();
   input += synapse0x27f6610();
   input += synapse0x27f6650();
   input += synapse0x27ef580();
   input += synapse0x27ef5c0();
   input += synapse0x27ef110();
   input += synapse0x27ef150();
   input += synapse0x27f8d20();
   input += synapse0x27f8d60();
   input += synapse0x27f8da0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f3040() {
   double input = input0x27f3040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f8de0() {
   double input = 0.0389505;
   input += synapse0x27f28e0();
   input += synapse0x27f2920();
   input += synapse0x27f2960();
   input += synapse0x27f29a0();
   input += synapse0x27f9330();
   input += synapse0x27f9370();
   input += synapse0x27f93b0();
   input += synapse0x27f93f0();
   input += synapse0x27f9430();
   input += synapse0x27f9470();
   input += synapse0x27f94b0();
   input += synapse0x27f94f0();
   input += synapse0x27f9530();
   input += synapse0x27f9570();
   input += synapse0x27f95b0();
   input += synapse0x27f95f0();
   input += synapse0x27f8f70();
   input += synapse0x27f8fb0();
   input += synapse0x27f9740();
   input += synapse0x27f9780();
   input += synapse0x27f97c0();
   input += synapse0x27f9800();
   input += synapse0x27f9840();
   input += synapse0x27f9880();
   input += synapse0x27f98c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f8de0() {
   double input = input0x27f8de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f9900() {
   double input = -0.767468;
   input += synapse0x27f9c40();
   input += synapse0x27f9c80();
   input += synapse0x27f9cc0();
   input += synapse0x27f9d00();
   input += synapse0x27f9d40();
   input += synapse0x27f9d80();
   input += synapse0x27f9dc0();
   input += synapse0x27f9e00();
   input += synapse0x27f9e40();
   input += synapse0x27f9e80();
   input += synapse0x27f9ec0();
   input += synapse0x27f9f00();
   input += synapse0x27f9f40();
   input += synapse0x27f9f80();
   input += synapse0x27f9fc0();
   input += synapse0x27fa000();
   input += synapse0x27f9a90();
   input += synapse0x27f9ad0();
   input += synapse0x27fa150();
   input += synapse0x27fa190();
   input += synapse0x27fa1d0();
   input += synapse0x27fa210();
   input += synapse0x27fa250();
   input += synapse0x27fa290();
   input += synapse0x27fa2d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f9900() {
   double input = input0x27f9900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fa310() {
   double input = 0.863753;
   input += synapse0x27fa650();
   input += synapse0x27fa690();
   input += synapse0x27fa6d0();
   input += synapse0x27fa710();
   input += synapse0x27fa750();
   input += synapse0x27fa790();
   input += synapse0x27fa7d0();
   input += synapse0x27fa810();
   input += synapse0x27fa850();
   input += synapse0x27fa890();
   input += synapse0x27fa8d0();
   input += synapse0x27fa910();
   input += synapse0x27fa950();
   input += synapse0x27fa990();
   input += synapse0x27fa9d0();
   input += synapse0x27faa10();
   input += synapse0x27fa4a0();
   input += synapse0x27fa4e0();
   input += synapse0x27fab60();
   input += synapse0x27faba0();
   input += synapse0x27fabe0();
   input += synapse0x27fac20();
   input += synapse0x27fac60();
   input += synapse0x27faca0();
   input += synapse0x27face0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fa310() {
   double input = input0x27fa310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fad20() {
   double input = 1.26953;
   input += synapse0x27fb060();
   input += synapse0x27fb0a0();
   input += synapse0x27fb0e0();
   input += synapse0x27fb120();
   input += synapse0x27fb160();
   input += synapse0x27fb1a0();
   input += synapse0x27fb1e0();
   input += synapse0x27f8400();
   input += synapse0x27f8440();
   input += synapse0x27f8480();
   input += synapse0x27f84c0();
   input += synapse0x27f8500();
   input += synapse0x27f8540();
   input += synapse0x27f8580();
   input += synapse0x27f85c0();
   input += synapse0x27f8600();
   input += synapse0x27faeb0();
   input += synapse0x27faef0();
   input += synapse0x27f8750();
   input += synapse0x27f8790();
   input += synapse0x27f87d0();
   input += synapse0x27f8810();
   input += synapse0x27f8850();
   input += synapse0x27f8890();
   input += synapse0x27f88d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fad20() {
   double input = input0x27fad20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27f8910() {
   double input = 0.582185;
   input += synapse0x27f8bc0();
   input += synapse0x27fc2c0();
   input += synapse0x27fc300();
   input += synapse0x27fc340();
   input += synapse0x27fc380();
   input += synapse0x27fc3c0();
   input += synapse0x27fc400();
   input += synapse0x27fc440();
   input += synapse0x27fc480();
   input += synapse0x27fc4c0();
   input += synapse0x27fc500();
   input += synapse0x27fc540();
   input += synapse0x27fc580();
   input += synapse0x27fc5c0();
   input += synapse0x27fc600();
   input += synapse0x27fc640();
   input += synapse0x27f8aa0();
   input += synapse0x27f8ae0();
   input += synapse0x27fc790();
   input += synapse0x27fc7d0();
   input += synapse0x27fc810();
   input += synapse0x27fc850();
   input += synapse0x27fc890();
   input += synapse0x27fc8d0();
   input += synapse0x27fc910();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27f8910() {
   double input = input0x27f8910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fc950() {
   double input = 0.87391;
   input += synapse0x27fcc90();
   input += synapse0x27fccd0();
   input += synapse0x27fcd10();
   input += synapse0x27fcd50();
   input += synapse0x27fcd90();
   input += synapse0x27fcdd0();
   input += synapse0x27fce10();
   input += synapse0x27fce50();
   input += synapse0x27fce90();
   input += synapse0x27fced0();
   input += synapse0x27fcf10();
   input += synapse0x27fcf50();
   input += synapse0x27fcf90();
   input += synapse0x27fcfd0();
   input += synapse0x27fd010();
   input += synapse0x27fd050();
   input += synapse0x27fcae0();
   input += synapse0x27fcb20();
   input += synapse0x27fd1a0();
   input += synapse0x27fd1e0();
   input += synapse0x27fd220();
   input += synapse0x27fd260();
   input += synapse0x27fd2a0();
   input += synapse0x27fd2e0();
   input += synapse0x27fd320();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fc950() {
   double input = input0x27fc950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fd360() {
   double input = 0.340777;
   input += synapse0x27fd6a0();
   input += synapse0x27fd6e0();
   input += synapse0x27fd720();
   input += synapse0x27fd760();
   input += synapse0x27fd7a0();
   input += synapse0x27fd7e0();
   input += synapse0x27fd820();
   input += synapse0x27fd860();
   input += synapse0x27fd8a0();
   input += synapse0x27fd8e0();
   input += synapse0x27fd920();
   input += synapse0x27fd960();
   input += synapse0x27fd9a0();
   input += synapse0x27fd9e0();
   input += synapse0x27fda20();
   input += synapse0x27fda60();
   input += synapse0x27fd4f0();
   input += synapse0x27fd530();
   input += synapse0x27fdbb0();
   input += synapse0x27fdbf0();
   input += synapse0x27fdc30();
   input += synapse0x27fdc70();
   input += synapse0x27fdcb0();
   input += synapse0x27fdcf0();
   input += synapse0x27fdd30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fd360() {
   double input = input0x27fd360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fdd70() {
   double input = -0.51911;
   input += synapse0x27fe0b0();
   input += synapse0x27fe0f0();
   input += synapse0x27fe130();
   input += synapse0x27fe170();
   input += synapse0x27fe1b0();
   input += synapse0x27fe1f0();
   input += synapse0x27fe230();
   input += synapse0x27fe270();
   input += synapse0x27fe2b0();
   input += synapse0x27fe2f0();
   input += synapse0x27fe330();
   input += synapse0x27fe370();
   input += synapse0x27fe3b0();
   input += synapse0x27fe3f0();
   input += synapse0x27fe430();
   input += synapse0x27fe470();
   input += synapse0x27fdf00();
   input += synapse0x27fdf40();
   input += synapse0x27fe5c0();
   input += synapse0x27fe600();
   input += synapse0x27fe640();
   input += synapse0x27fe680();
   input += synapse0x27fe6c0();
   input += synapse0x27fe700();
   input += synapse0x27fe740();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fdd70() {
   double input = input0x27fdd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fe780() {
   double input = 1.24557;
   input += synapse0x27feac0();
   input += synapse0x27feb00();
   input += synapse0x27feb40();
   input += synapse0x27feb80();
   input += synapse0x27febc0();
   input += synapse0x27fec00();
   input += synapse0x27fec40();
   input += synapse0x27fec80();
   input += synapse0x27fecc0();
   input += synapse0x27fed00();
   input += synapse0x27fed40();
   input += synapse0x27fed80();
   input += synapse0x27fedc0();
   input += synapse0x27fee00();
   input += synapse0x27fee40();
   input += synapse0x27fee80();
   input += synapse0x27fe910();
   input += synapse0x27fe950();
   input += synapse0x27fefd0();
   input += synapse0x27ff010();
   input += synapse0x27ff050();
   input += synapse0x27ff090();
   input += synapse0x27ff0d0();
   input += synapse0x27ff110();
   input += synapse0x27ff150();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fe780() {
   double input = input0x27fe780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27ff190() {
   double input = 0.564956;
   input += synapse0x27ff4d0();
   input += synapse0x27ff510();
   input += synapse0x27ff550();
   input += synapse0x27ff590();
   input += synapse0x27ff5d0();
   input += synapse0x27ff610();
   input += synapse0x27ff650();
   input += synapse0x27ff690();
   input += synapse0x27ff6d0();
   input += synapse0x27ff710();
   input += synapse0x27ff750();
   input += synapse0x27ff790();
   input += synapse0x27ff7d0();
   input += synapse0x27ff810();
   input += synapse0x27ff850();
   input += synapse0x27ff890();
   input += synapse0x27ff320();
   input += synapse0x27ff360();
   input += synapse0x27ff9e0();
   input += synapse0x27ffa20();
   input += synapse0x27ffa60();
   input += synapse0x27ffaa0();
   input += synapse0x27ffae0();
   input += synapse0x27ffb20();
   input += synapse0x27ffb60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27ff190() {
   double input = input0x27ff190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27ffba0() {
   double input = -1.38403;
   input += synapse0x27ffee0();
   input += synapse0x27fff20();
   input += synapse0x27fff60();
   input += synapse0x27fffa0();
   input += synapse0x27fffe0();
   input += synapse0x2800020();
   input += synapse0x2800060();
   input += synapse0x28000a0();
   input += synapse0x28000e0();
   input += synapse0x2800120();
   input += synapse0x2800160();
   input += synapse0x28001a0();
   input += synapse0x28001e0();
   input += synapse0x2800220();
   input += synapse0x2800260();
   input += synapse0x28002a0();
   input += synapse0x27ffd30();
   input += synapse0x27ffd70();
   input += synapse0x28003f0();
   input += synapse0x2800430();
   input += synapse0x2800470();
   input += synapse0x28004b0();
   input += synapse0x28004f0();
   input += synapse0x2800530();
   input += synapse0x2800570();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27ffba0() {
   double input = input0x27ffba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x28005b0() {
   double input = 1.72594;
   input += synapse0x28008f0();
   input += synapse0x2800930();
   input += synapse0x2800970();
   input += synapse0x28009b0();
   input += synapse0x28009f0();
   input += synapse0x2800a30();
   input += synapse0x2800a70();
   input += synapse0x2800ab0();
   input += synapse0x2800af0();
   input += synapse0x2800b30();
   input += synapse0x2800b70();
   input += synapse0x2800bb0();
   input += synapse0x2800bf0();
   input += synapse0x2800c30();
   input += synapse0x2800c70();
   input += synapse0x2800cb0();
   input += synapse0x2800740();
   input += synapse0x2800780();
   input += synapse0x2800e00();
   input += synapse0x2800e40();
   input += synapse0x2800e80();
   input += synapse0x2800ec0();
   input += synapse0x2800f00();
   input += synapse0x2800f40();
   input += synapse0x2800f80();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x28005b0() {
   double input = input0x28005b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2800fc0() {
   double input = 0.463551;
   input += synapse0x2801300();
   input += synapse0x2801340();
   input += synapse0x2801380();
   input += synapse0x28013c0();
   input += synapse0x2801400();
   input += synapse0x2801440();
   input += synapse0x2801480();
   input += synapse0x28014c0();
   input += synapse0x2801500();
   input += synapse0x2801540();
   input += synapse0x2801580();
   input += synapse0x28015c0();
   input += synapse0x2801600();
   input += synapse0x2801640();
   input += synapse0x2801680();
   input += synapse0x28016c0();
   input += synapse0x2801150();
   input += synapse0x2801190();
   input += synapse0x2801810();
   input += synapse0x2801850();
   input += synapse0x2801890();
   input += synapse0x28018d0();
   input += synapse0x2801910();
   input += synapse0x2801950();
   input += synapse0x2801990();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2800fc0() {
   double input = input0x2800fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x28019d0() {
   double input = -0.512585;
   input += synapse0x2801d10();
   input += synapse0x27ef4f0();
   input += synapse0x27ef530();
   input += synapse0x27ef930();
   input += synapse0x27ef970();
   input += synapse0x27efdb0();
   input += synapse0x27efdf0();
   input += synapse0x27f0230();
   input += synapse0x27f0270();
   input += synapse0x27f0740();
   input += synapse0x27f0780();
   input += synapse0x27f0bc0();
   input += synapse0x27f0c00();
   input += synapse0x27f1040();
   input += synapse0x27f1080();
   input += synapse0x27f15c0();
   input += synapse0x27f1600();
   input += synapse0x27f1a40();
   input += synapse0x27f1a80();
   input += synapse0x27f1ec0();
   input += synapse0x27f1f00();
   input += synapse0x27f2340();
   input += synapse0x27f2380();
   input += synapse0x27f27c0();
   input += synapse0x27f2800();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x28019d0() {
   double input = input0x28019d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x27fbff0() {
   double input = 1.95469;
   input += synapse0x27fc180();
   input += synapse0x27fc1c0();
   input += synapse0x27f3a60();
   input += synapse0x27f3aa0();
   input += synapse0x2801b60();
   input += synapse0x2801ba0();
   input += synapse0x27eedd0();
   input += synapse0x27eee10();
   input += synapse0x27f4600();
   input += synapse0x27f4640();
   input += synapse0x27f4a80();
   input += synapse0x27f4ac0();
   input += synapse0x27f4f00();
   input += synapse0x27f4f40();
   input += synapse0x27f5380();
   input += synapse0x27f53c0();
   input += synapse0x27f5800();
   input += synapse0x27f5840();
   input += synapse0x27f5c80();
   input += synapse0x27f5cc0();
   input += synapse0x27f6100();
   input += synapse0x27f6140();
   input += synapse0x27f6580();
   input += synapse0x27f65c0();
   input += synapse0x27f2cd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x27fbff0() {
   double input = input0x27fbff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2804c40() {
   double input = -0.296269;
   input += synapse0x27f2d10();
   input += synapse0x2804f80();
   input += synapse0x2804fc0();
   input += synapse0x2805000();
   input += synapse0x2805040();
   input += synapse0x2805080();
   input += synapse0x28050c0();
   input += synapse0x2805100();
   input += synapse0x2805140();
   input += synapse0x2805180();
   input += synapse0x28051c0();
   input += synapse0x2805200();
   input += synapse0x2805240();
   input += synapse0x2805280();
   input += synapse0x28052c0();
   input += synapse0x2805300();
   input += synapse0x2804dd0();
   input += synapse0x2804e10();
   input += synapse0x2805450();
   input += synapse0x2805490();
   input += synapse0x28054d0();
   input += synapse0x2805510();
   input += synapse0x2805550();
   input += synapse0x2805590();
   input += synapse0x28055d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2804c40() {
   double input = input0x2804c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2805610() {
   double input = 1.97596;
   input += synapse0x2805950();
   input += synapse0x2805990();
   input += synapse0x28059d0();
   input += synapse0x2805a10();
   input += synapse0x2805a50();
   input += synapse0x2805a90();
   input += synapse0x2805ad0();
   input += synapse0x2805b10();
   input += synapse0x2805b50();
   input += synapse0x2805b90();
   input += synapse0x2805bd0();
   input += synapse0x2805c10();
   input += synapse0x2805c50();
   input += synapse0x2805c90();
   input += synapse0x2805cd0();
   input += synapse0x2805d10();
   input += synapse0x28057a0();
   input += synapse0x28057e0();
   input += synapse0x2805e60();
   input += synapse0x2805ea0();
   input += synapse0x2805ee0();
   input += synapse0x2805f20();
   input += synapse0x2805f60();
   input += synapse0x2805fa0();
   input += synapse0x2805fe0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2805610() {
   double input = input0x2805610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2806020() {
   double input = 1.13796;
   input += synapse0x2806360();
   input += synapse0x28063a0();
   input += synapse0x28063e0();
   input += synapse0x2806420();
   input += synapse0x2806460();
   input += synapse0x28064a0();
   input += synapse0x28064e0();
   input += synapse0x2806520();
   input += synapse0x2806560();
   input += synapse0x28065a0();
   input += synapse0x28065e0();
   input += synapse0x2806620();
   input += synapse0x2806660();
   input += synapse0x28066a0();
   input += synapse0x28066e0();
   input += synapse0x2806720();
   input += synapse0x28061b0();
   input += synapse0x28061f0();
   input += synapse0x2806870();
   input += synapse0x28068b0();
   input += synapse0x28068f0();
   input += synapse0x2806930();
   input += synapse0x2806970();
   input += synapse0x28069b0();
   input += synapse0x28069f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2806020() {
   double input = input0x2806020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2806a30() {
   double input = -0.669254;
   input += synapse0x2806d70();
   input += synapse0x2806db0();
   input += synapse0x2806df0();
   input += synapse0x2806e30();
   input += synapse0x2806e70();
   input += synapse0x2806eb0();
   input += synapse0x2806ef0();
   input += synapse0x2806f30();
   input += synapse0x2806f70();
   input += synapse0x2806fb0();
   input += synapse0x2806ff0();
   input += synapse0x2807030();
   input += synapse0x2807070();
   input += synapse0x28070b0();
   input += synapse0x28070f0();
   input += synapse0x2807130();
   input += synapse0x2806bc0();
   input += synapse0x2806c00();
   input += synapse0x2807280();
   input += synapse0x28072c0();
   input += synapse0x2807300();
   input += synapse0x2807340();
   input += synapse0x2807380();
   input += synapse0x28073c0();
   input += synapse0x2807400();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2806a30() {
   double input = input0x2806a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2807440() {
   double input = 0.884813;
   input += synapse0x2807780();
   input += synapse0x28077c0();
   input += synapse0x2807800();
   input += synapse0x2807840();
   input += synapse0x2807880();
   input += synapse0x28078c0();
   input += synapse0x2807900();
   input += synapse0x2807940();
   input += synapse0x2807980();
   input += synapse0x28079c0();
   input += synapse0x2807a00();
   input += synapse0x2807a40();
   input += synapse0x2807a80();
   input += synapse0x2807ac0();
   input += synapse0x2807b00();
   input += synapse0x2807b40();
   input += synapse0x28075d0();
   input += synapse0x2807610();
   input += synapse0x2807c90();
   input += synapse0x2807cd0();
   input += synapse0x2807d10();
   input += synapse0x2807d50();
   input += synapse0x2807d90();
   input += synapse0x2807dd0();
   input += synapse0x2807e10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2807440() {
   double input = input0x2807440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2807e50() {
   double input = -1.75944;
   input += synapse0x2808190();
   input += synapse0x28081d0();
   input += synapse0x2808210();
   input += synapse0x2808250();
   input += synapse0x2808290();
   input += synapse0x28082d0();
   input += synapse0x2808310();
   input += synapse0x2808350();
   input += synapse0x2808390();
   input += synapse0x28083d0();
   input += synapse0x2808410();
   input += synapse0x2808450();
   input += synapse0x2808490();
   input += synapse0x28084d0();
   input += synapse0x2808510();
   input += synapse0x2808550();
   input += synapse0x2807fe0();
   input += synapse0x2808020();
   input += synapse0x28086a0();
   input += synapse0x28086e0();
   input += synapse0x2808720();
   input += synapse0x2808760();
   input += synapse0x28087a0();
   input += synapse0x28087e0();
   input += synapse0x2808820();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2807e50() {
   double input = input0x2807e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2808860() {
   double input = -0.940203;
   input += synapse0x2808ba0();
   input += synapse0x2808be0();
   input += synapse0x2808c20();
   input += synapse0x2808c60();
   input += synapse0x2808ca0();
   input += synapse0x2808ce0();
   input += synapse0x2808d20();
   input += synapse0x2808d60();
   input += synapse0x2808da0();
   input += synapse0x2808de0();
   input += synapse0x2808e20();
   input += synapse0x2808e60();
   input += synapse0x2808ea0();
   input += synapse0x2808ee0();
   input += synapse0x2808f20();
   input += synapse0x2808f60();
   input += synapse0x28089f0();
   input += synapse0x2808a30();
   input += synapse0x28090b0();
   input += synapse0x28090f0();
   input += synapse0x2809130();
   input += synapse0x2809170();
   input += synapse0x28091b0();
   input += synapse0x28091f0();
   input += synapse0x2809230();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2808860() {
   double input = input0x2808860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2809270() {
   double input = -1.19213;
   input += synapse0x28095b0();
   input += synapse0x28095f0();
   input += synapse0x2809630();
   input += synapse0x2809670();
   input += synapse0x28096b0();
   input += synapse0x28096f0();
   input += synapse0x2809730();
   input += synapse0x2809770();
   input += synapse0x28097b0();
   input += synapse0x28097f0();
   input += synapse0x2809830();
   input += synapse0x2809870();
   input += synapse0x28098b0();
   input += synapse0x28098f0();
   input += synapse0x2809930();
   input += synapse0x2809970();
   input += synapse0x2809400();
   input += synapse0x2809440();
   input += synapse0x2809ac0();
   input += synapse0x2809b00();
   input += synapse0x2809b40();
   input += synapse0x2809b80();
   input += synapse0x2809bc0();
   input += synapse0x2809c00();
   input += synapse0x2809c40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2809270() {
   double input = input0x2809270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2809c80() {
   double input = -1.22745;
   input += synapse0x2809ea0();
   input += synapse0x2809ee0();
   input += synapse0x2809f20();
   input += synapse0x2809f60();
   input += synapse0x2809fa0();
   input += synapse0x2809fe0();
   input += synapse0x280a020();
   input += synapse0x280a060();
   input += synapse0x280a0a0();
   input += synapse0x280a0e0();
   input += synapse0x280a120();
   input += synapse0x280a160();
   input += synapse0x280a1a0();
   input += synapse0x280a1e0();
   input += synapse0x280a220();
   input += synapse0x280a260();
   input += synapse0x27ef230();
   input += synapse0x27ef270();
   input += synapse0x280a3b0();
   input += synapse0x280a3f0();
   input += synapse0x280a430();
   input += synapse0x280a470();
   input += synapse0x280a4b0();
   input += synapse0x280a4f0();
   input += synapse0x280a530();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2809c80() {
   double input = input0x2809c80();
   return (input * 3.57394)+135.817;
}

double nnFunc_25_25hi_3000ep__::synapse0x27dd530() {
   return (neuron0x27ee1f0()*3.31201);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef610() {
   return (neuron0x27ee530()*-1.58207);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef650() {
   return (neuron0x27ee870()*0.733896);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef690() {
   return (neuron0x27eebb0()*9.07337);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef6d0() {
   return (neuron0x27eeef0()*-0.999764);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efa50() {
   return (neuron0x27ee1f0()*1.09202);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efa90() {
   return (neuron0x27ee530()*-5.79653);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efad0() {
   return (neuron0x27ee870()*-2.35805);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efb10() {
   return (neuron0x27eebb0()*1.29215);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efb50() {
   return (neuron0x27eeef0()*0.231339);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efed0() {
   return (neuron0x27ee1f0()*0.187706);
}

double nnFunc_25_25hi_3000ep__::synapse0x27eff10() {
   return (neuron0x27ee530()*0.734671);
}

double nnFunc_25_25hi_3000ep__::synapse0x27eff50() {
   return (neuron0x27ee870()*1.61669);
}

double nnFunc_25_25hi_3000ep__::synapse0x27eff90() {
   return (neuron0x27eebb0()*3.19409);
}

double nnFunc_25_25hi_3000ep__::synapse0x27effd0() {
   return (neuron0x27eeef0()*1.20665);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0350() {
   return (neuron0x27ee1f0()*-0.305967);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0390() {
   return (neuron0x27ee530()*-0.539712);
}

double nnFunc_25_25hi_3000ep__::synapse0x26689c0() {
   return (neuron0x27ee870()*-3.06591);
}

double nnFunc_25_25hi_3000ep__::synapse0x2668a00() {
   return (neuron0x27eebb0()*-0.541326);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f04e0() {
   return (neuron0x27eeef0()*-0.464038);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0860() {
   return (neuron0x27ee1f0()*2.98374);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f08a0() {
   return (neuron0x27ee530()*-0.596849);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f08e0() {
   return (neuron0x27ee870()*-7.38164);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0920() {
   return (neuron0x27eebb0()*-1.87033);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0960() {
   return (neuron0x27eeef0()*-0.795519);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0ce0() {
   return (neuron0x27ee1f0()*-3.41774);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0d20() {
   return (neuron0x27ee530()*0.358395);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0d60() {
   return (neuron0x27ee870()*2.61215);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0da0() {
   return (neuron0x27eebb0()*-1.90029);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0de0() {
   return (neuron0x27eeef0()*0.397812);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1160() {
   return (neuron0x27ee1f0()*-0.214151);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f11a0() {
   return (neuron0x27ee530()*1.06192);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f11e0() {
   return (neuron0x27ee870()*1.02807);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f03d0() {
   return (neuron0x27eebb0()*-4.79344);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0410() {
   return (neuron0x27eeef0()*1.51072);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f16e0() {
   return (neuron0x27ee1f0()*-0.768514);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1720() {
   return (neuron0x27ee530()*1.74);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1760() {
   return (neuron0x27ee870()*1.21381);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f17a0() {
   return (neuron0x27eebb0()*-2.53165);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f17e0() {
   return (neuron0x27eeef0()*1.10382);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1b60() {
   return (neuron0x27ee1f0()*-0.0886358);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1ba0() {
   return (neuron0x27ee530()*0.0587642);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1be0() {
   return (neuron0x27ee870()*-0.885808);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1c20() {
   return (neuron0x27eebb0()*-4.90804);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1c60() {
   return (neuron0x27eeef0()*1.06711);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1fe0() {
   return (neuron0x27ee1f0()*3.19066);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2020() {
   return (neuron0x27ee530()*-0.747783);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2060() {
   return (neuron0x27ee870()*-3.85563);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f20a0() {
   return (neuron0x27eebb0()*-0.166354);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f20e0() {
   return (neuron0x27eeef0()*-0.135329);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2460() {
   return (neuron0x27ee1f0()*0.0643807);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f24a0() {
   return (neuron0x27ee530()*0.937686);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f24e0() {
   return (neuron0x27ee870()*0.529844);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2520() {
   return (neuron0x27eebb0()*15.6166);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2560() {
   return (neuron0x27eeef0()*-5.44937);
}

double nnFunc_25_25hi_3000ep__::synapse0x2668810() {
   return (neuron0x27ee1f0()*-2.46905);
}

double nnFunc_25_25hi_3000ep__::synapse0x2668850() {
   return (neuron0x27ee530()*0.115515);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f29f0() {
   return (neuron0x27ee870()*2.3885);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2a30() {
   return (neuron0x27eebb0()*0.787383);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2a70() {
   return (neuron0x27eeef0()*1.00708);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2df0() {
   return (neuron0x27ee1f0()*-1.37706);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2e30() {
   return (neuron0x27ee530()*-0.366832);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2e70() {
   return (neuron0x27ee870()*3.4335);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2eb0() {
   return (neuron0x27eebb0()*0.498213);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2ef0() {
   return (neuron0x27eeef0()*0.82405);
}

double nnFunc_25_25hi_3000ep__::synapse0x2776870() {
   return (neuron0x27ee1f0()*-0.0116732);
}

double nnFunc_25_25hi_3000ep__::synapse0x27dd4d0() {
   return (neuron0x27ee530()*-0.374013);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f13d0() {
   return (neuron0x27ee870()*0.0203856);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3340() {
   return (neuron0x27eebb0()*-12.2596);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3380() {
   return (neuron0x27eeef0()*1.29762);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3700() {
   return (neuron0x27ee1f0()*0.00636326);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3740() {
   return (neuron0x27ee530()*0.00836044);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3780() {
   return (neuron0x27ee870()*0.0351769);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f37c0() {
   return (neuron0x27eebb0()*-12.1093);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3800() {
   return (neuron0x27eeef0()*9.96827);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3b80() {
   return (neuron0x27ee1f0()*4.01425);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ee410() {
   return (neuron0x27ee530()*-1.33251);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ee450() {
   return (neuron0x27ee870()*-6.29875);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ee750() {
   return (neuron0x27eebb0()*-3.58332);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ee790() {
   return (neuron0x27eeef0()*-0.552646);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f42a0() {
   return (neuron0x27ee1f0()*0.049656);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f42e0() {
   return (neuron0x27ee530()*-0.11164);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4320() {
   return (neuron0x27ee870()*0.654663);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4360() {
   return (neuron0x27eebb0()*13.2098);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f43a0() {
   return (neuron0x27eeef0()*0.60358);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4720() {
   return (neuron0x27ee1f0()*0.0200559);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4760() {
   return (neuron0x27ee530()*-0.296788);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f47a0() {
   return (neuron0x27ee870()*0.191623);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f47e0() {
   return (neuron0x27eebb0()*-9.34893);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4820() {
   return (neuron0x27eeef0()*8.12627);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4ba0() {
   return (neuron0x27ee1f0()*-3.17227);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4be0() {
   return (neuron0x27ee530()*0.50925);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4c20() {
   return (neuron0x27ee870()*2.6169);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4c60() {
   return (neuron0x27eebb0()*-0.586009);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4ca0() {
   return (neuron0x27eeef0()*0.810291);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5020() {
   return (neuron0x27ee1f0()*0.0274821);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5060() {
   return (neuron0x27ee530()*0.352282);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f50a0() {
   return (neuron0x27ee870()*0.469436);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f50e0() {
   return (neuron0x27eebb0()*-13.6272);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5120() {
   return (neuron0x27eeef0()*-2.36308);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f54a0() {
   return (neuron0x27ee1f0()*0.0483119);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f54e0() {
   return (neuron0x27ee530()*-0.36058);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5520() {
   return (neuron0x27ee870()*0.591752);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5560() {
   return (neuron0x27eebb0()*0.849197);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f55a0() {
   return (neuron0x27eeef0()*-1.64571);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5920() {
   return (neuron0x27ee1f0()*0.0621237);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5960() {
   return (neuron0x27ee530()*0.233348);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f59a0() {
   return (neuron0x27ee870()*0.551215);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f59e0() {
   return (neuron0x27eebb0()*9.98022);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5a20() {
   return (neuron0x27eeef0()*-2.47478);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5da0() {
   return (neuron0x27ee1f0()*2.8167);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5de0() {
   return (neuron0x27ee530()*-0.807636);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5e20() {
   return (neuron0x27ee870()*-1.6256);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5e60() {
   return (neuron0x27eebb0()*-0.238247);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5ea0() {
   return (neuron0x27eeef0()*-1.20437);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6220() {
   return (neuron0x27ee1f0()*-2.56237);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6260() {
   return (neuron0x27ee530()*0.836953);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f62a0() {
   return (neuron0x27ee870()*2.09147);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f62e0() {
   return (neuron0x27eebb0()*4.39499);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6320() {
   return (neuron0x27eeef0()*2.79522);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f66a0() {
   return (neuron0x27ee1f0()*-0.0227586);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f66e0() {
   return (neuron0x27ee530()*0.563589);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6720() {
   return (neuron0x27ee870()*-0.181556);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6760() {
   return (neuron0x27eebb0()*11.7353);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f67a0() {
   return (neuron0x27eeef0()*-12.4961);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f02c0() {
   return (neuron0x27ef360()*-1.57209);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0300() {
   return (neuron0x27ef710()*-0.712727);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f07d0() {
   return (neuron0x27efb90()*0.767095);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0810() {
   return (neuron0x27f0010()*-1.20555);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0c50() {
   return (neuron0x27f0520()*-0.547329);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0c90() {
   return (neuron0x27f09a0()*2.48183);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f10d0() {
   return (neuron0x27f0e20()*0.453332);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1110() {
   return (neuron0x27f1430()*1.22775);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1650() {
   return (neuron0x27f1820()*1.81225);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1690() {
   return (neuron0x27f1ca0()*-0.595066);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1ad0() {
   return (neuron0x27f2120()*-1.00202);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1b10() {
   return (neuron0x27f25a0()*0.31535);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1f50() {
   return (neuron0x27f2ab0()*0.650847);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1f90() {
   return (neuron0x27766e0()*2.56452);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f23d0() {
   return (neuron0x27f33c0()*4.36701);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2410() {
   return (neuron0x27f3840()*-0.623687);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2850() {
   return (neuron0x27f4110()*-1.97785);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2890() {
   return (neuron0x27f43e0()*2.6804);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2d60() {
   return (neuron0x27f4860()*0.31277);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2da0() {
   return (neuron0x27f4ce0()*1.5373);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1340() {
   return (neuron0x27f5160()*-0.446054);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1380() {
   return (neuron0x27f55e0()*-1.05776);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3670() {
   return (neuron0x27f5a60()*-0.115337);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f36b0() {
   return (neuron0x27f5ee0()*0.655549);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3af0() {
   return (neuron0x27f6360()*-3.5444);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f31d0() {
   return (neuron0x27ef360()*0.750314);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3210() {
   return (neuron0x27ef710()*0.649696);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3250() {
   return (neuron0x27efb90()*0.120691);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3290() {
   return (neuron0x27f0010()*2.68718);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f32d0() {
   return (neuron0x27f0520()*0.240393);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3b30() {
   return (neuron0x27f09a0()*-2.67399);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4f90() {
   return (neuron0x27f0e20()*0.179964);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4fd0() {
   return (neuron0x27f1430()*-0.334555);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5410() {
   return (neuron0x27f1820()*-2.35398);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5450() {
   return (neuron0x27f1ca0()*-0.916439);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5890() {
   return (neuron0x27f2120()*2.27799);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f58d0() {
   return (neuron0x27f25a0()*0.0897262);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5d10() {
   return (neuron0x27f2ab0()*-0.203914);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5d50() {
   return (neuron0x27766e0()*-2.67054);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6190() {
   return (neuron0x27f33c0()*-7.09648);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f61d0() {
   return (neuron0x27f3840()*0.105435);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6610() {
   return (neuron0x27f4110()*1.08861);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6650() {
   return (neuron0x27f43e0()*-2.99719);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef580() {
   return (neuron0x27f4860()*0.0268608);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef5c0() {
   return (neuron0x27f4ce0()*-3.17557);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef110() {
   return (neuron0x27f5160()*0.277671);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef150() {
   return (neuron0x27f55e0()*3.95793);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8d20() {
   return (neuron0x27f5a60()*0.190823);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8d60() {
   return (neuron0x27f5ee0()*-0.0369451);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8da0() {
   return (neuron0x27f6360()*5.09961);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f28e0() {
   return (neuron0x27ef360()*0.362833);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2920() {
   return (neuron0x27ef710()*0.763908);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2960() {
   return (neuron0x27efb90()*-0.4434);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f29a0() {
   return (neuron0x27f0010()*0.614161);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9330() {
   return (neuron0x27f0520()*-0.191586);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9370() {
   return (neuron0x27f09a0()*-0.697866);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f93b0() {
   return (neuron0x27f0e20()*0.343753);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f93f0() {
   return (neuron0x27f1430()*0.0872256);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9430() {
   return (neuron0x27f1820()*-0.927545);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9470() {
   return (neuron0x27f1ca0()*-0.381022);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f94b0() {
   return (neuron0x27f2120()*0.614508);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f94f0() {
   return (neuron0x27f25a0()*0.0772559);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9530() {
   return (neuron0x27f2ab0()*-0.118013);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9570() {
   return (neuron0x27766e0()*-1.29945);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f95b0() {
   return (neuron0x27f33c0()*-1.80972);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f95f0() {
   return (neuron0x27f3840()*0.44346);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8f70() {
   return (neuron0x27f4110()*0.933021);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8fb0() {
   return (neuron0x27f43e0()*-1.2318);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9740() {
   return (neuron0x27f4860()*-0.296075);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9780() {
   return (neuron0x27f4ce0()*-1.12511);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f97c0() {
   return (neuron0x27f5160()*0.953128);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9800() {
   return (neuron0x27f55e0()*1.0382);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9840() {
   return (neuron0x27f5a60()*0.442921);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9880() {
   return (neuron0x27f5ee0()*0.0565472);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f98c0() {
   return (neuron0x27f6360()*1.5002);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9c40() {
   return (neuron0x27ef360()*1.80477);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9c80() {
   return (neuron0x27ef710()*-0.680015);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9cc0() {
   return (neuron0x27efb90()*-0.855339);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9d00() {
   return (neuron0x27f0010()*1.46261);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9d40() {
   return (neuron0x27f0520()*-0.0415113);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9d80() {
   return (neuron0x27f09a0()*-1.49594);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9dc0() {
   return (neuron0x27f0e20()*-1.58806);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9e00() {
   return (neuron0x27f1430()*-1.04906);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9e40() {
   return (neuron0x27f1820()*-2.00152);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9e80() {
   return (neuron0x27f1ca0()*-0.182363);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9ec0() {
   return (neuron0x27f2120()*7.13805);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9f00() {
   return (neuron0x27f25a0()*-0.845283);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9f40() {
   return (neuron0x27f2ab0()*-0.626225);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9f80() {
   return (neuron0x27766e0()*-4.80197);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9fc0() {
   return (neuron0x27f33c0()*-10.6005);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa000() {
   return (neuron0x27f3840()*-0.144037);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9a90() {
   return (neuron0x27f4110()*3.95456);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f9ad0() {
   return (neuron0x27f43e0()*-5.32336);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa150() {
   return (neuron0x27f4860()*-0.912334);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa190() {
   return (neuron0x27f4ce0()*-4.21781);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa1d0() {
   return (neuron0x27f5160()*2.34143);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa210() {
   return (neuron0x27f55e0()*1.16436);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa250() {
   return (neuron0x27f5a60()*0.174489);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa290() {
   return (neuron0x27f5ee0()*-0.986491);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa2d0() {
   return (neuron0x27f6360()*6.99224);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa650() {
   return (neuron0x27ef360()*-0.180713);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa690() {
   return (neuron0x27ef710()*-0.0913457);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa6d0() {
   return (neuron0x27efb90()*0.446828);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa710() {
   return (neuron0x27f0010()*0.249548);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa750() {
   return (neuron0x27f0520()*-0.151448);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa790() {
   return (neuron0x27f09a0()*2.19939);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa7d0() {
   return (neuron0x27f0e20()*-0.681702);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa810() {
   return (neuron0x27f1430()*0.0908153);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa850() {
   return (neuron0x27f1820()*0.45844);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa890() {
   return (neuron0x27f1ca0()*0.466293);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa8d0() {
   return (neuron0x27f2120()*-4.99339);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa910() {
   return (neuron0x27f25a0()*0.188538);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa950() {
   return (neuron0x27f2ab0()*0.0575804);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa990() {
   return (neuron0x27766e0()*3.29986);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa9d0() {
   return (neuron0x27f33c0()*10.3232);
}

double nnFunc_25_25hi_3000ep__::synapse0x27faa10() {
   return (neuron0x27f3840()*0.226599);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa4a0() {
   return (neuron0x27f4110()*-4.188);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fa4e0() {
   return (neuron0x27f43e0()*7.71524);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fab60() {
   return (neuron0x27f4860()*0.455729);
}

double nnFunc_25_25hi_3000ep__::synapse0x27faba0() {
   return (neuron0x27f4ce0()*2.68354);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fabe0() {
   return (neuron0x27f5160()*-1.41806);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fac20() {
   return (neuron0x27f55e0()*-1.38137);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fac60() {
   return (neuron0x27f5a60()*-0.845446);
}

double nnFunc_25_25hi_3000ep__::synapse0x27faca0() {
   return (neuron0x27f5ee0()*0.70269);
}

double nnFunc_25_25hi_3000ep__::synapse0x27face0() {
   return (neuron0x27f6360()*-5.22113);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb060() {
   return (neuron0x27ef360()*-1.72372);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb0a0() {
   return (neuron0x27ef710()*0.999963);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb0e0() {
   return (neuron0x27efb90()*1.12502);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb120() {
   return (neuron0x27f0010()*-0.883831);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb160() {
   return (neuron0x27f0520()*0.351421);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb1a0() {
   return (neuron0x27f09a0()*2.73948);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fb1e0() {
   return (neuron0x27f0e20()*2.28754);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8400() {
   return (neuron0x27f1430()*0.965855);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8440() {
   return (neuron0x27f1820()*2.09086);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8480() {
   return (neuron0x27f1ca0()*0.634915);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f84c0() {
   return (neuron0x27f2120()*-10.3128);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8500() {
   return (neuron0x27f25a0()*0.466474);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8540() {
   return (neuron0x27f2ab0()*1.20572);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8580() {
   return (neuron0x27766e0()*0.611148);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f85c0() {
   return (neuron0x27f33c0()*14.2271);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8600() {
   return (neuron0x27f3840()*-0.163337);
}

double nnFunc_25_25hi_3000ep__::synapse0x27faeb0() {
   return (neuron0x27f4110()*-7.62723);
}

double nnFunc_25_25hi_3000ep__::synapse0x27faef0() {
   return (neuron0x27f43e0()*7.29061);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8750() {
   return (neuron0x27f4860()*0.541308);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8790() {
   return (neuron0x27f4ce0()*6.13237);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f87d0() {
   return (neuron0x27f5160()*-2.70437);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8810() {
   return (neuron0x27f55e0()*-1.09457);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8850() {
   return (neuron0x27f5a60()*0.0190652);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8890() {
   return (neuron0x27f5ee0()*0.478632);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f88d0() {
   return (neuron0x27f6360()*-13.8263);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8bc0() {
   return (neuron0x27ef360()*-0.81638);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc2c0() {
   return (neuron0x27ef710()*-0.19521);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc300() {
   return (neuron0x27efb90()*0.0439612);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc340() {
   return (neuron0x27f0010()*-1.41635);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc380() {
   return (neuron0x27f0520()*-0.22827);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc3c0() {
   return (neuron0x27f09a0()*2.34799);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc400() {
   return (neuron0x27f0e20()*0.756338);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc440() {
   return (neuron0x27f1430()*1.32766);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc480() {
   return (neuron0x27f1820()*1.90202);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc4c0() {
   return (neuron0x27f1ca0()*-0.312309);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc500() {
   return (neuron0x27f2120()*-2.34628);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc540() {
   return (neuron0x27f25a0()*0.0704818);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc580() {
   return (neuron0x27f2ab0()*1.29487);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc5c0() {
   return (neuron0x27766e0()*2.43482);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc600() {
   return (neuron0x27f33c0()*5.36301);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc640() {
   return (neuron0x27f3840()*-0.232837);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8aa0() {
   return (neuron0x27f4110()*-2.05187);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f8ae0() {
   return (neuron0x27f43e0()*3.3039);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc790() {
   return (neuron0x27f4860()*1.21342);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc7d0() {
   return (neuron0x27f4ce0()*2.18026);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc810() {
   return (neuron0x27f5160()*-1.02187);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc850() {
   return (neuron0x27f55e0()*-0.985407);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc890() {
   return (neuron0x27f5a60()*-0.74163);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc8d0() {
   return (neuron0x27f5ee0()*0.953648);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc910() {
   return (neuron0x27f6360()*-4.38203);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcc90() {
   return (neuron0x27ef360()*-0.586903);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fccd0() {
   return (neuron0x27ef710()*2.64932);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcd10() {
   return (neuron0x27efb90()*-3.12916);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcd50() {
   return (neuron0x27f0010()*-2.23028);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcd90() {
   return (neuron0x27f0520()*0.066491);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcdd0() {
   return (neuron0x27f09a0()*0.251173);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fce10() {
   return (neuron0x27f0e20()*0.821566);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fce50() {
   return (neuron0x27f1430()*1.26503);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fce90() {
   return (neuron0x27f1820()*5.80988);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fced0() {
   return (neuron0x27f1ca0()*-0.904437);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcf10() {
   return (neuron0x27f2120()*-3.69176);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcf50() {
   return (neuron0x27f25a0()*0.39647);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcf90() {
   return (neuron0x27f2ab0()*-0.145327);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcfd0() {
   return (neuron0x27766e0()*2.1178);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd010() {
   return (neuron0x27f33c0()*9.38642);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd050() {
   return (neuron0x27f3840()*-0.183448);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcae0() {
   return (neuron0x27f4110()*-4.94093);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fcb20() {
   return (neuron0x27f43e0()*7.48018);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd1a0() {
   return (neuron0x27f4860()*0.431429);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd1e0() {
   return (neuron0x27f4ce0()*8.99823);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd220() {
   return (neuron0x27f5160()*-2.30501);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd260() {
   return (neuron0x27f55e0()*-9.4905);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd2a0() {
   return (neuron0x27f5a60()*-0.151704);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd2e0() {
   return (neuron0x27f5ee0()*0.635185);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd320() {
   return (neuron0x27f6360()*-14.4358);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd6a0() {
   return (neuron0x27ef360()*-0.904144);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd6e0() {
   return (neuron0x27ef710()*0.620488);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd720() {
   return (neuron0x27efb90()*-0.472156);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd760() {
   return (neuron0x27f0010()*0.0707355);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd7a0() {
   return (neuron0x27f0520()*-0.442258);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd7e0() {
   return (neuron0x27f09a0()*1.95529);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd820() {
   return (neuron0x27f0e20()*-0.471721);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd860() {
   return (neuron0x27f1430()*-0.847529);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd8a0() {
   return (neuron0x27f1820()*1.64845);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd8e0() {
   return (neuron0x27f1ca0()*0.476497);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd920() {
   return (neuron0x27f2120()*-5.20616);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd960() {
   return (neuron0x27f25a0()*-0.0144954);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd9a0() {
   return (neuron0x27f2ab0()*-0.0703511);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd9e0() {
   return (neuron0x27766e0()*5.59399);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fda20() {
   return (neuron0x27f33c0()*11.4605);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fda60() {
   return (neuron0x27f3840()*-0.551553);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd4f0() {
   return (neuron0x27f4110()*-0.552653);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fd530() {
   return (neuron0x27f43e0()*4.13864);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdbb0() {
   return (neuron0x27f4860()*0.0880114);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdbf0() {
   return (neuron0x27f4ce0()*0.982917);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdc30() {
   return (neuron0x27f5160()*-1.27126);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdc70() {
   return (neuron0x27f55e0()*-6.15419);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdcb0() {
   return (neuron0x27f5a60()*-0.231966);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdcf0() {
   return (neuron0x27f5ee0()*-0.170689);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdd30() {
   return (neuron0x27f6360()*-4.24391);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe0b0() {
   return (neuron0x27ef360()*0.805421);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe0f0() {
   return (neuron0x27ef710()*0.577596);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe130() {
   return (neuron0x27efb90()*-0.297502);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe170() {
   return (neuron0x27f0010()*0.176868);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe1b0() {
   return (neuron0x27f0520()*0.616008);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe1f0() {
   return (neuron0x27f09a0()*-1.46314);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe230() {
   return (neuron0x27f0e20()*-0.186611);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe270() {
   return (neuron0x27f1430()*-0.678054);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe2b0() {
   return (neuron0x27f1820()*-0.740571);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe2f0() {
   return (neuron0x27f1ca0()*-0.271355);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe330() {
   return (neuron0x27f2120()*1.29928);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe370() {
   return (neuron0x27f25a0()*-0.949665);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe3b0() {
   return (neuron0x27f2ab0()*-0.807326);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe3f0() {
   return (neuron0x27766e0()*-1.49963);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe430() {
   return (neuron0x27f33c0()*-3.38264);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe470() {
   return (neuron0x27f3840()*0.0742397);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdf00() {
   return (neuron0x27f4110()*0.540521);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fdf40() {
   return (neuron0x27f43e0()*-2.64179);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe5c0() {
   return (neuron0x27f4860()*-0.289584);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe600() {
   return (neuron0x27f4ce0()*-1.24654);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe640() {
   return (neuron0x27f5160()*0.672878);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe680() {
   return (neuron0x27f55e0()*0.893483);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe6c0() {
   return (neuron0x27f5a60()*0.422178);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe700() {
   return (neuron0x27f5ee0()*-0.589627);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe740() {
   return (neuron0x27f6360()*2.76692);
}

double nnFunc_25_25hi_3000ep__::synapse0x27feac0() {
   return (neuron0x27ef360()*-0.421236);
}

double nnFunc_25_25hi_3000ep__::synapse0x27feb00() {
   return (neuron0x27ef710()*-0.394373);
}

double nnFunc_25_25hi_3000ep__::synapse0x27feb40() {
   return (neuron0x27efb90()*1.44424);
}

double nnFunc_25_25hi_3000ep__::synapse0x27feb80() {
   return (neuron0x27f0010()*-0.051361);
}

double nnFunc_25_25hi_3000ep__::synapse0x27febc0() {
   return (neuron0x27f0520()*0.620845);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fec00() {
   return (neuron0x27f09a0()*0.93425);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fec40() {
   return (neuron0x27f0e20()*2.73468);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fec80() {
   return (neuron0x27f1430()*1.86353);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fecc0() {
   return (neuron0x27f1820()*0.664299);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fed00() {
   return (neuron0x27f1ca0()*-0.478831);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fed40() {
   return (neuron0x27f2120()*0.975438);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fed80() {
   return (neuron0x27f25a0()*1.65156);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fedc0() {
   return (neuron0x27f2ab0()*1.67619);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fee00() {
   return (neuron0x27766e0()*-4.71476);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fee40() {
   return (neuron0x27f33c0()*-4.67619);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fee80() {
   return (neuron0x27f3840()*0.940506);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe910() {
   return (neuron0x27f4110()*0.643856);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fe950() {
   return (neuron0x27f43e0()*-12.9815);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fefd0() {
   return (neuron0x27f4860()*1.35644);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff010() {
   return (neuron0x27f4ce0()*-2.10038);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff050() {
   return (neuron0x27f5160()*2.21592);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff090() {
   return (neuron0x27f55e0()*4.20023);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff0d0() {
   return (neuron0x27f5a60()*0.449499);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff110() {
   return (neuron0x27f5ee0()*2.20409);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff150() {
   return (neuron0x27f6360()*2.96203);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff4d0() {
   return (neuron0x27ef360()*-0.901437);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff510() {
   return (neuron0x27ef710()*-0.608662);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff550() {
   return (neuron0x27efb90()*0.587312);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff590() {
   return (neuron0x27f0010()*-0.917504);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff5d0() {
   return (neuron0x27f0520()*0.394219);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff610() {
   return (neuron0x27f09a0()*1.90108);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff650() {
   return (neuron0x27f0e20()*0.95383);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff690() {
   return (neuron0x27f1430()*1.0424);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff6d0() {
   return (neuron0x27f1820()*1.49571);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff710() {
   return (neuron0x27f1ca0()*-0.396338);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff750() {
   return (neuron0x27f2120()*-1.49146);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff790() {
   return (neuron0x27f25a0()*0.0532192);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff7d0() {
   return (neuron0x27f2ab0()*0.79712);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff810() {
   return (neuron0x27766e0()*1.78809);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff850() {
   return (neuron0x27f33c0()*3.4199);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff890() {
   return (neuron0x27f3840()*-0.336444);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff320() {
   return (neuron0x27f4110()*-1.35172);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff360() {
   return (neuron0x27f43e0()*1.69366);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ff9e0() {
   return (neuron0x27f4860()*1.10665);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffa20() {
   return (neuron0x27f4ce0()*1.34985);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffa60() {
   return (neuron0x27f5160()*-0.423816);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffaa0() {
   return (neuron0x27f55e0()*-0.899113);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffae0() {
   return (neuron0x27f5a60()*0.289674);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffb20() {
   return (neuron0x27f5ee0()*0.705056);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffb60() {
   return (neuron0x27f6360()*-2.66546);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffee0() {
   return (neuron0x27ef360()*-0.0324734);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fff20() {
   return (neuron0x27ef710()*0.423547);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fff60() {
   return (neuron0x27efb90()*-0.35951);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fffa0() {
   return (neuron0x27f0010()*0.303303);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fffe0() {
   return (neuron0x27f0520()*0.11321);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800020() {
   return (neuron0x27f09a0()*-1.47902);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800060() {
   return (neuron0x27f0e20()*0.3064);
}

double nnFunc_25_25hi_3000ep__::synapse0x28000a0() {
   return (neuron0x27f1430()*0.281997);
}

double nnFunc_25_25hi_3000ep__::synapse0x28000e0() {
   return (neuron0x27f1820()*-2.19485);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800120() {
   return (neuron0x27f1ca0()*-0.0597431);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800160() {
   return (neuron0x27f2120()*3.78671);
}

double nnFunc_25_25hi_3000ep__::synapse0x28001a0() {
   return (neuron0x27f25a0()*-0.859241);
}

double nnFunc_25_25hi_3000ep__::synapse0x28001e0() {
   return (neuron0x27f2ab0()*-0.38569);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800220() {
   return (neuron0x27766e0()*-0.12998);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800260() {
   return (neuron0x27f33c0()*-4.40958);
}

double nnFunc_25_25hi_3000ep__::synapse0x28002a0() {
   return (neuron0x27f3840()*0.325515);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffd30() {
   return (neuron0x27f4110()*1.50013);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ffd70() {
   return (neuron0x27f43e0()*-1.85656);
}

double nnFunc_25_25hi_3000ep__::synapse0x28003f0() {
   return (neuron0x27f4860()*-1.02466);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800430() {
   return (neuron0x27f4ce0()*-0.899187);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800470() {
   return (neuron0x27f5160()*-0.11891);
}

double nnFunc_25_25hi_3000ep__::synapse0x28004b0() {
   return (neuron0x27f55e0()*1.57876);
}

double nnFunc_25_25hi_3000ep__::synapse0x28004f0() {
   return (neuron0x27f5a60()*1.00237);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800530() {
   return (neuron0x27f5ee0()*0.14787);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800570() {
   return (neuron0x27f6360()*4.04239);
}

double nnFunc_25_25hi_3000ep__::synapse0x28008f0() {
   return (neuron0x27ef360()*0.839563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800930() {
   return (neuron0x27ef710()*1.16525);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800970() {
   return (neuron0x27efb90()*1.38792);
}

double nnFunc_25_25hi_3000ep__::synapse0x28009b0() {
   return (neuron0x27f0010()*1.45114);
}

double nnFunc_25_25hi_3000ep__::synapse0x28009f0() {
   return (neuron0x27f0520()*0.642647);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800a30() {
   return (neuron0x27f09a0()*0.568365);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800a70() {
   return (neuron0x27f0e20()*0.142782);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800ab0() {
   return (neuron0x27f1430()*0.403068);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800af0() {
   return (neuron0x27f1820()*-0.752897);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800b30() {
   return (neuron0x27f1ca0()*0.650465);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800b70() {
   return (neuron0x27f2120()*2.32029);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800bb0() {
   return (neuron0x27f25a0()*0.93154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800bf0() {
   return (neuron0x27f2ab0()*0.954578);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800c30() {
   return (neuron0x27766e0()*-0.947094);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800c70() {
   return (neuron0x27f33c0()*-0.219793);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800cb0() {
   return (neuron0x27f3840()*1.08353);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800740() {
   return (neuron0x27f4110()*0.855788);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800780() {
   return (neuron0x27f43e0()*0.561598);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800e00() {
   return (neuron0x27f4860()*1.32002);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800e40() {
   return (neuron0x27f4ce0()*-0.099607);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800e80() {
   return (neuron0x27f5160()*1.15457);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800ec0() {
   return (neuron0x27f55e0()*1.36064);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800f00() {
   return (neuron0x27f5a60()*0.60087);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800f40() {
   return (neuron0x27f5ee0()*1.66828);
}

double nnFunc_25_25hi_3000ep__::synapse0x2800f80() {
   return (neuron0x27f6360()*2.23723);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801300() {
   return (neuron0x27ef360()*0.9261);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801340() {
   return (neuron0x27ef710()*-3.42603);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801380() {
   return (neuron0x27efb90()*0.500102);
}

double nnFunc_25_25hi_3000ep__::synapse0x28013c0() {
   return (neuron0x27f0010()*-0.101421);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801400() {
   return (neuron0x27f0520()*0.151307);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801440() {
   return (neuron0x27f09a0()*-0.867903);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801480() {
   return (neuron0x27f0e20()*-0.262047);
}

double nnFunc_25_25hi_3000ep__::synapse0x28014c0() {
   return (neuron0x27f1430()*0.446501);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801500() {
   return (neuron0x27f1820()*-0.41503);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801540() {
   return (neuron0x27f1ca0()*-0.486572);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801580() {
   return (neuron0x27f2120()*11.6368);
}

double nnFunc_25_25hi_3000ep__::synapse0x28015c0() {
   return (neuron0x27f25a0()*-0.164323);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801600() {
   return (neuron0x27f2ab0()*0.939799);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801640() {
   return (neuron0x27766e0()*-4.08292);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801680() {
   return (neuron0x27f33c0()*-4.98887);
}

double nnFunc_25_25hi_3000ep__::synapse0x28016c0() {
   return (neuron0x27f3840()*0.439394);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801150() {
   return (neuron0x27f4110()*0.083633);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801190() {
   return (neuron0x27f43e0()*-1.18597);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801810() {
   return (neuron0x27f4860()*0.751731);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801850() {
   return (neuron0x27f4ce0()*3.20831);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801890() {
   return (neuron0x27f5160()*3.26133);
}

double nnFunc_25_25hi_3000ep__::synapse0x28018d0() {
   return (neuron0x27f55e0()*-2.92974);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801910() {
   return (neuron0x27f5a60()*1.12898);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801950() {
   return (neuron0x27f5ee0()*-1.06771);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801990() {
   return (neuron0x27f6360()*5.69492);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801d10() {
   return (neuron0x27ef360()*-0.00325562);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef4f0() {
   return (neuron0x27ef710()*-0.291139);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef530() {
   return (neuron0x27efb90()*-0.339429);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef930() {
   return (neuron0x27f0010()*1.69686);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef970() {
   return (neuron0x27f0520()*-0.0128235);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efdb0() {
   return (neuron0x27f09a0()*-1.78685);
}

double nnFunc_25_25hi_3000ep__::synapse0x27efdf0() {
   return (neuron0x27f0e20()*0.253442);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0230() {
   return (neuron0x27f1430()*0.0591456);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0270() {
   return (neuron0x27f1820()*-0.848419);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0740() {
   return (neuron0x27f1ca0()*-0.422233);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0780() {
   return (neuron0x27f2120()*-0.271238);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0bc0() {
   return (neuron0x27f25a0()*-0.0984456);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f0c00() {
   return (neuron0x27f2ab0()*-0.105839);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1040() {
   return (neuron0x27766e0()*-0.0338891);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1080() {
   return (neuron0x27f33c0()*-1.12102);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f15c0() {
   return (neuron0x27f3840()*0.318412);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1600() {
   return (neuron0x27f4110()*-1.0021);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1a40() {
   return (neuron0x27f43e0()*-1.52218);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1a80() {
   return (neuron0x27f4860()*-0.155449);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1ec0() {
   return (neuron0x27f4ce0()*-1.22615);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f1f00() {
   return (neuron0x27f5160()*-0.1572);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2340() {
   return (neuron0x27f55e0()*0.878959);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2380() {
   return (neuron0x27f5a60()*0.495556);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f27c0() {
   return (neuron0x27f5ee0()*0.697814);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2800() {
   return (neuron0x27f6360()*0.237191);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc180() {
   return (neuron0x27ef360()*-0.0675378);
}

double nnFunc_25_25hi_3000ep__::synapse0x27fc1c0() {
   return (neuron0x27ef710()*-0.0474064);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3a60() {
   return (neuron0x27efb90()*1.69152);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f3aa0() {
   return (neuron0x27f0010()*0.456727);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801b60() {
   return (neuron0x27f0520()*0.286397);
}

double nnFunc_25_25hi_3000ep__::synapse0x2801ba0() {
   return (neuron0x27f09a0()*2.2913);
}

double nnFunc_25_25hi_3000ep__::synapse0x27eedd0() {
   return (neuron0x27f0e20()*-0.899741);
}

double nnFunc_25_25hi_3000ep__::synapse0x27eee10() {
   return (neuron0x27f1430()*-0.950544);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4600() {
   return (neuron0x27f1820()*1.89362);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4640() {
   return (neuron0x27f1ca0()*1.76986);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4a80() {
   return (neuron0x27f2120()*0.395988);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4ac0() {
   return (neuron0x27f25a0()*0.75276);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4f00() {
   return (neuron0x27f2ab0()*0.888687);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f4f40() {
   return (neuron0x27766e0()*-0.0431297);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5380() {
   return (neuron0x27f33c0()*2.95286);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f53c0() {
   return (neuron0x27f3840()*-0.414705);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5800() {
   return (neuron0x27f4110()*-0.842611);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5840() {
   return (neuron0x27f43e0()*3.31578);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5c80() {
   return (neuron0x27f4860()*0.988474);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f5cc0() {
   return (neuron0x27f4ce0()*0.523435);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6100() {
   return (neuron0x27f5160()*1.64285);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6140() {
   return (neuron0x27f55e0()*-0.151764);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f6580() {
   return (neuron0x27f5a60()*-1.32337);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f65c0() {
   return (neuron0x27f5ee0()*-1.255);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2cd0() {
   return (neuron0x27f6360()*-0.957386);
}

double nnFunc_25_25hi_3000ep__::synapse0x27f2d10() {
   return (neuron0x27ef360()*-0.362115);
}

double nnFunc_25_25hi_3000ep__::synapse0x2804f80() {
   return (neuron0x27ef710()*2.5648);
}

double nnFunc_25_25hi_3000ep__::synapse0x2804fc0() {
   return (neuron0x27efb90()*0.358864);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805000() {
   return (neuron0x27f0010()*0.0692896);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805040() {
   return (neuron0x27f0520()*0.0905111);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805080() {
   return (neuron0x27f09a0()*-0.270848);
}

double nnFunc_25_25hi_3000ep__::synapse0x28050c0() {
   return (neuron0x27f0e20()*-0.460228);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805100() {
   return (neuron0x27f1430()*0.0602562);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805140() {
   return (neuron0x27f1820()*1.22883);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805180() {
   return (neuron0x27f1ca0()*-0.224356);
}

double nnFunc_25_25hi_3000ep__::synapse0x28051c0() {
   return (neuron0x27f2120()*-3.98788);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805200() {
   return (neuron0x27f25a0()*-0.649065);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805240() {
   return (neuron0x27f2ab0()*-0.00974643);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805280() {
   return (neuron0x27766e0()*4.02788);
}

double nnFunc_25_25hi_3000ep__::synapse0x28052c0() {
   return (neuron0x27f33c0()*5.92349);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805300() {
   return (neuron0x27f3840()*-0.217341);
}

double nnFunc_25_25hi_3000ep__::synapse0x2804dd0() {
   return (neuron0x27f4110()*-1.81832);
}

double nnFunc_25_25hi_3000ep__::synapse0x2804e10() {
   return (neuron0x27f43e0()*3.98886);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805450() {
   return (neuron0x27f4860()*-0.395538);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805490() {
   return (neuron0x27f4ce0()*2.09376);
}

double nnFunc_25_25hi_3000ep__::synapse0x28054d0() {
   return (neuron0x27f5160()*-1.48339);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805510() {
   return (neuron0x27f55e0()*-3.46284);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805550() {
   return (neuron0x27f5a60()*-0.898515);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805590() {
   return (neuron0x27f5ee0()*-0.937183);
}

double nnFunc_25_25hi_3000ep__::synapse0x28055d0() {
   return (neuron0x27f6360()*-3.63566);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805950() {
   return (neuron0x27ef360()*0.672163);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805990() {
   return (neuron0x27ef710()*1.00198);
}

double nnFunc_25_25hi_3000ep__::synapse0x28059d0() {
   return (neuron0x27efb90()*-0.972731);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805a10() {
   return (neuron0x27f0010()*0.202215);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805a50() {
   return (neuron0x27f0520()*1.27771);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805a90() {
   return (neuron0x27f09a0()*1.98629);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805ad0() {
   return (neuron0x27f0e20()*2.75053);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805b10() {
   return (neuron0x27f1430()*2.31806);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805b50() {
   return (neuron0x27f1820()*2.42461);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805b90() {
   return (neuron0x27f1ca0()*-0.33887);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805bd0() {
   return (neuron0x27f2120()*-0.976301);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805c10() {
   return (neuron0x27f25a0()*0.551989);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805c50() {
   return (neuron0x27f2ab0()*1.06345);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805c90() {
   return (neuron0x27766e0()*4.36814);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805cd0() {
   return (neuron0x27f33c0()*4.68659);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805d10() {
   return (neuron0x27f3840()*0.72621);
}

double nnFunc_25_25hi_3000ep__::synapse0x28057a0() {
   return (neuron0x27f4110()*0.119586);
}

double nnFunc_25_25hi_3000ep__::synapse0x28057e0() {
   return (neuron0x27f43e0()*1.64435);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805e60() {
   return (neuron0x27f4860()*1.72304);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805ea0() {
   return (neuron0x27f4ce0()*2.87886);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805ee0() {
   return (neuron0x27f5160()*-1.23013);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805f20() {
   return (neuron0x27f55e0()*-0.255061);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805f60() {
   return (neuron0x27f5a60()*1.18129);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805fa0() {
   return (neuron0x27f5ee0()*2.19688);
}

double nnFunc_25_25hi_3000ep__::synapse0x2805fe0() {
   return (neuron0x27f6360()*-4.77744);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806360() {
   return (neuron0x27ef360()*-0.167796);
}

double nnFunc_25_25hi_3000ep__::synapse0x28063a0() {
   return (neuron0x27ef710()*0.693372);
}

double nnFunc_25_25hi_3000ep__::synapse0x28063e0() {
   return (neuron0x27efb90()*0.831984);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806420() {
   return (neuron0x27f0010()*-2.37715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806460() {
   return (neuron0x27f0520()*0.276212);
}

double nnFunc_25_25hi_3000ep__::synapse0x28064a0() {
   return (neuron0x27f09a0()*2.38767);
}

double nnFunc_25_25hi_3000ep__::synapse0x28064e0() {
   return (neuron0x27f0e20()*-0.247072);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806520() {
   return (neuron0x27f1430()*0.097549);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806560() {
   return (neuron0x27f1820()*2.23432);
}

double nnFunc_25_25hi_3000ep__::synapse0x28065a0() {
   return (neuron0x27f1ca0()*0.91281);
}

double nnFunc_25_25hi_3000ep__::synapse0x28065e0() {
   return (neuron0x27f2120()*-4.52629);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806620() {
   return (neuron0x27f25a0()*0.33503);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806660() {
   return (neuron0x27f2ab0()*0.489304);
}

double nnFunc_25_25hi_3000ep__::synapse0x28066a0() {
   return (neuron0x27766e0()*2.50125);
}

double nnFunc_25_25hi_3000ep__::synapse0x28066e0() {
   return (neuron0x27f33c0()*7.17253);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806720() {
   return (neuron0x27f3840()*0.259124);
}

double nnFunc_25_25hi_3000ep__::synapse0x28061b0() {
   return (neuron0x27f4110()*-3.8868);
}

double nnFunc_25_25hi_3000ep__::synapse0x28061f0() {
   return (neuron0x27f43e0()*5.06346);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806870() {
   return (neuron0x27f4860()*1.09084);
}

double nnFunc_25_25hi_3000ep__::synapse0x28068b0() {
   return (neuron0x27f4ce0()*2.96324);
}

double nnFunc_25_25hi_3000ep__::synapse0x28068f0() {
   return (neuron0x27f5160()*0.0807428);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806930() {
   return (neuron0x27f55e0()*-2.06273);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806970() {
   return (neuron0x27f5a60()*-0.401378);
}

double nnFunc_25_25hi_3000ep__::synapse0x28069b0() {
   return (neuron0x27f5ee0()*0.426469);
}

double nnFunc_25_25hi_3000ep__::synapse0x28069f0() {
   return (neuron0x27f6360()*-6.41317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806d70() {
   return (neuron0x27ef360()*0.479698);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806db0() {
   return (neuron0x27ef710()*0.223927);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806df0() {
   return (neuron0x27efb90()*0.217044);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806e30() {
   return (neuron0x27f0010()*1.33802);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806e70() {
   return (neuron0x27f0520()*-0.316164);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806eb0() {
   return (neuron0x27f09a0()*-0.519961);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806ef0() {
   return (neuron0x27f0e20()*0.366012);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806f30() {
   return (neuron0x27f1430()*0.468898);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806f70() {
   return (neuron0x27f1820()*0.21056);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806fb0() {
   return (neuron0x27f1ca0()*-0.896527);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806ff0() {
   return (neuron0x27f2120()*1.15799);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807030() {
   return (neuron0x27f25a0()*0.52255);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807070() {
   return (neuron0x27f2ab0()*-0.384065);
}

double nnFunc_25_25hi_3000ep__::synapse0x28070b0() {
   return (neuron0x27766e0()*-1.65009);
}

double nnFunc_25_25hi_3000ep__::synapse0x28070f0() {
   return (neuron0x27f33c0()*-3.39526);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807130() {
   return (neuron0x27f3840()*0.214887);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806bc0() {
   return (neuron0x27f4110()*-0.448943);
}

double nnFunc_25_25hi_3000ep__::synapse0x2806c00() {
   return (neuron0x27f43e0()*-1.46724);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807280() {
   return (neuron0x27f4860()*0.124996);
}

double nnFunc_25_25hi_3000ep__::synapse0x28072c0() {
   return (neuron0x27f4ce0()*-3.36829);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807300() {
   return (neuron0x27f5160()*-0.439639);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807340() {
   return (neuron0x27f55e0()*0.167743);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807380() {
   return (neuron0x27f5a60()*-0.0870366);
}

double nnFunc_25_25hi_3000ep__::synapse0x28073c0() {
   return (neuron0x27f5ee0()*0.866595);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807400() {
   return (neuron0x27f6360()*3.43483);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807780() {
   return (neuron0x27ef360()*0.233961);
}

double nnFunc_25_25hi_3000ep__::synapse0x28077c0() {
   return (neuron0x27ef710()*0.339095);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807800() {
   return (neuron0x27efb90()*0.892244);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807840() {
   return (neuron0x27f0010()*0.572557);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807880() {
   return (neuron0x27f0520()*0.399552);
}

double nnFunc_25_25hi_3000ep__::synapse0x28078c0() {
   return (neuron0x27f09a0()*0.815172);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807900() {
   return (neuron0x27f0e20()*0.0567107);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807940() {
   return (neuron0x27f1430()*0.502699);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807980() {
   return (neuron0x27f1820()*0.776031);
}

double nnFunc_25_25hi_3000ep__::synapse0x28079c0() {
   return (neuron0x27f1ca0()*0.0407826);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807a00() {
   return (neuron0x27f2120()*0.3842);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807a40() {
   return (neuron0x27f25a0()*-0.104502);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807a80() {
   return (neuron0x27f2ab0()*0.831556);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807ac0() {
   return (neuron0x27766e0()*0.110877);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807b00() {
   return (neuron0x27f33c0()*0.844436);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807b40() {
   return (neuron0x27f3840()*-0.293912);
}

double nnFunc_25_25hi_3000ep__::synapse0x28075d0() {
   return (neuron0x27f4110()*0.05933);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807610() {
   return (neuron0x27f43e0()*0.330598);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807c90() {
   return (neuron0x27f4860()*0.673276);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807cd0() {
   return (neuron0x27f4ce0()*0.522006);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807d10() {
   return (neuron0x27f5160()*0.654158);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807d50() {
   return (neuron0x27f55e0()*0.170099);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807d90() {
   return (neuron0x27f5a60()*-0.486962);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807dd0() {
   return (neuron0x27f5ee0()*0.503752);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807e10() {
   return (neuron0x27f6360()*0.216105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808190() {
   return (neuron0x27ef360()*-0.928612);
}

double nnFunc_25_25hi_3000ep__::synapse0x28081d0() {
   return (neuron0x27ef710()*-0.794195);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808210() {
   return (neuron0x27efb90()*-0.857754);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808250() {
   return (neuron0x27f0010()*-0.000311987);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808290() {
   return (neuron0x27f0520()*-0.42684);
}

double nnFunc_25_25hi_3000ep__::synapse0x28082d0() {
   return (neuron0x27f09a0()*-2.22424);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808310() {
   return (neuron0x27f0e20()*-0.651304);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808350() {
   return (neuron0x27f1430()*-0.109986);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808390() {
   return (neuron0x27f1820()*-1.33725);
}

double nnFunc_25_25hi_3000ep__::synapse0x28083d0() {
   return (neuron0x27f1ca0()*-0.504889);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808410() {
   return (neuron0x27f2120()*0.34476);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808450() {
   return (neuron0x27f25a0()*-0.812632);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808490() {
   return (neuron0x27f2ab0()*-0.608115);
}

double nnFunc_25_25hi_3000ep__::synapse0x28084d0() {
   return (neuron0x27766e0()*-1.61335);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808510() {
   return (neuron0x27f33c0()*-2.63447);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808550() {
   return (neuron0x27f3840()*-0.163444);
}

double nnFunc_25_25hi_3000ep__::synapse0x2807fe0() {
   return (neuron0x27f4110()*0.348818);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808020() {
   return (neuron0x27f43e0()*-2.33812);
}

double nnFunc_25_25hi_3000ep__::synapse0x28086a0() {
   return (neuron0x27f4860()*-1.39594);
}

double nnFunc_25_25hi_3000ep__::synapse0x28086e0() {
   return (neuron0x27f4ce0()*-1.72713);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808720() {
   return (neuron0x27f5160()*-0.127483);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808760() {
   return (neuron0x27f55e0()*-0.120727);
}

double nnFunc_25_25hi_3000ep__::synapse0x28087a0() {
   return (neuron0x27f5a60()*0.171186);
}

double nnFunc_25_25hi_3000ep__::synapse0x28087e0() {
   return (neuron0x27f5ee0()*-0.341842);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808820() {
   return (neuron0x27f6360()*1.42335);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808ba0() {
   return (neuron0x27ef360()*-1.23411);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808be0() {
   return (neuron0x27ef710()*0.580778);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808c20() {
   return (neuron0x27efb90()*-0.20376);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808c60() {
   return (neuron0x27f0010()*0.106138);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808ca0() {
   return (neuron0x27f0520()*-0.71525);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808ce0() {
   return (neuron0x27f09a0()*-0.602234);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808d20() {
   return (neuron0x27f0e20()*0.623403);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808d60() {
   return (neuron0x27f1430()*1.38615);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808da0() {
   return (neuron0x27f1820()*3.14842);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808de0() {
   return (neuron0x27f1ca0()*-0.649994);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808e20() {
   return (neuron0x27f2120()*-4.26931);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808e60() {
   return (neuron0x27f25a0()*-0.897643);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808ea0() {
   return (neuron0x27f2ab0()*-0.715742);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808ee0() {
   return (neuron0x27766e0()*8.12538);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808f20() {
   return (neuron0x27f33c0()*2.44931);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808f60() {
   return (neuron0x27f3840()*0.0431046);
}

double nnFunc_25_25hi_3000ep__::synapse0x28089f0() {
   return (neuron0x27f4110()*0.443276);
}

double nnFunc_25_25hi_3000ep__::synapse0x2808a30() {
   return (neuron0x27f43e0()*-0.839328);
}

double nnFunc_25_25hi_3000ep__::synapse0x28090b0() {
   return (neuron0x27f4860()*-0.273654);
}

double nnFunc_25_25hi_3000ep__::synapse0x28090f0() {
   return (neuron0x27f4ce0()*-4.63138);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809130() {
   return (neuron0x27f5160()*-4.84858);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809170() {
   return (neuron0x27f55e0()*4.69748);
}

double nnFunc_25_25hi_3000ep__::synapse0x28091b0() {
   return (neuron0x27f5a60()*0.133648);
}

double nnFunc_25_25hi_3000ep__::synapse0x28091f0() {
   return (neuron0x27f5ee0()*0.341072);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809230() {
   return (neuron0x27f6360()*-12.351);
}

double nnFunc_25_25hi_3000ep__::synapse0x28095b0() {
   return (neuron0x27ef360()*1.29327);
}

double nnFunc_25_25hi_3000ep__::synapse0x28095f0() {
   return (neuron0x27ef710()*-0.17951);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809630() {
   return (neuron0x27efb90()*-0.95042);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809670() {
   return (neuron0x27f0010()*0.169085);
}

double nnFunc_25_25hi_3000ep__::synapse0x28096b0() {
   return (neuron0x27f0520()*-0.534454);
}

double nnFunc_25_25hi_3000ep__::synapse0x28096f0() {
   return (neuron0x27f09a0()*-1.82582);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809730() {
   return (neuron0x27f0e20()*-1.35424);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809770() {
   return (neuron0x27f1430()*-1.9224);
}

double nnFunc_25_25hi_3000ep__::synapse0x28097b0() {
   return (neuron0x27f1820()*-1.77726);
}

double nnFunc_25_25hi_3000ep__::synapse0x28097f0() {
   return (neuron0x27f1ca0()*-0.364922);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809830() {
   return (neuron0x27f2120()*1.90603);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809870() {
   return (neuron0x27f25a0()*-0.642803);
}

double nnFunc_25_25hi_3000ep__::synapse0x28098b0() {
   return (neuron0x27f2ab0()*-0.926142);
}

double nnFunc_25_25hi_3000ep__::synapse0x28098f0() {
   return (neuron0x27766e0()*-2.85867);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809930() {
   return (neuron0x27f33c0()*-4.75363);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809970() {
   return (neuron0x27f3840()*0.167815);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809400() {
   return (neuron0x27f4110()*2.23203);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809440() {
   return (neuron0x27f43e0()*-3.12223);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809ac0() {
   return (neuron0x27f4860()*-0.891003);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809b00() {
   return (neuron0x27f4ce0()*-2.02032);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809b40() {
   return (neuron0x27f5160()*1.36206);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809b80() {
   return (neuron0x27f55e0()*1.15955);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809bc0() {
   return (neuron0x27f5a60()*-0.460824);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809c00() {
   return (neuron0x27f5ee0()*-0.637288);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809c40() {
   return (neuron0x27f6360()*3.97162);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809ea0() {
   return (neuron0x27f8270()*0.185776);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809ee0() {
   return (neuron0x27f3040()*-6.34127);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809f20() {
   return (neuron0x27f8de0()*-1.71833);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809f60() {
   return (neuron0x27f9900()*-7.76599);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809fa0() {
   return (neuron0x27fa310()*-9.64311);
}

double nnFunc_25_25hi_3000ep__::synapse0x2809fe0() {
   return (neuron0x27fad20()*9.36306);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a020() {
   return (neuron0x27f8910()*4.0926);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a060() {
   return (neuron0x27fc950()*8.93602);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a0a0() {
   return (neuron0x27fd360()*-10.2626);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a0e0() {
   return (neuron0x27fdd70()*-3.20846);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a120() {
   return (neuron0x27fe780()*7.86563);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a160() {
   return (neuron0x27ff190()*3.23311);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a1a0() {
   return (neuron0x27ffba0()*4.37207);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a1e0() {
   return (neuron0x28005b0()*-4.82948);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a220() {
   return (neuron0x2800fc0()*6.23958);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a260() {
   return (neuron0x28019d0()*4.84531);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef230() {
   return (neuron0x27fbff0()*-11.7547);
}

double nnFunc_25_25hi_3000ep__::synapse0x27ef270() {
   return (neuron0x2804c40()*4.33013);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a3b0() {
   return (neuron0x2805610()*7.73344);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a3f0() {
   return (neuron0x2806020()*-7.63586);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a430() {
   return (neuron0x2806a30()*3.61561);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a470() {
   return (neuron0x2807440()*-4.68386);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a4b0() {
   return (neuron0x2807e50()*4.12079);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a4f0() {
   return (neuron0x2808860()*14.3072);
}

double nnFunc_25_25hi_3000ep__::synapse0x280a530() {
   return (neuron0x2809270()*-6.47722);
}

