#include "25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_downwing/nnFunc_25_25hi_5000ep_weight.h"
#include <cmath>

double nnFunc_25_25hi_5000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x24e07e0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_5000ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x24e07e0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c4d90() {
   return input0;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c50d0() {
   return input1;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c5410() {
   return input2;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c5750() {
   return input3;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c5a90() {
   return input4;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c5f00() {
   double input = -0.225617;
   input += synapse0x23d1f10();
   input += synapse0x24b4200();
   input += synapse0x24c61b0();
   input += synapse0x24c61f0();
   input += synapse0x24c6230();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c5f00() {
   double input = input0x24c5f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c6270() {
   double input = 2.88648;
   input += synapse0x24c65b0();
   input += synapse0x24c65f0();
   input += synapse0x24c6630();
   input += synapse0x24c6670();
   input += synapse0x24c66b0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c6270() {
   double input = input0x24c6270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c66f0() {
   double input = -4.66117;
   input += synapse0x24c6a30();
   input += synapse0x24c6a70();
   input += synapse0x24c6ab0();
   input += synapse0x24c6af0();
   input += synapse0x24c6b30();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c66f0() {
   double input = input0x24c66f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c6b70() {
   double input = 11.6461;
   input += synapse0x24c6eb0();
   input += synapse0x24c6ef0();
   input += synapse0x23c4100();
   input += synapse0x23c4140();
   input += synapse0x24c7040();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c6b70() {
   double input = input0x24c6b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c7080() {
   double input = 15.7859;
   input += synapse0x24c73c0();
   input += synapse0x24c7400();
   input += synapse0x24c7440();
   input += synapse0x24c7480();
   input += synapse0x24c74c0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c7080() {
   double input = input0x24c7080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c7500() {
   double input = 0.68929;
   input += synapse0x24c7840();
   input += synapse0x24c7880();
   input += synapse0x24c78c0();
   input += synapse0x24c7900();
   input += synapse0x24c7940();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c7500() {
   double input = input0x24c7500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c7980() {
   double input = 0.376714;
   input += synapse0x24c7cc0();
   input += synapse0x24c7d00();
   input += synapse0x24c7d40();
   input += synapse0x24c6f30();
   input += synapse0x24c6f70();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c7980() {
   double input = input0x24c7980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c7f90() {
   double input = 0.681002;
   input += synapse0x24c8240();
   input += synapse0x24c8280();
   input += synapse0x24c82c0();
   input += synapse0x24c8300();
   input += synapse0x24c8340();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c7f90() {
   double input = input0x24c7f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c8380() {
   double input = -7.18416;
   input += synapse0x24c86c0();
   input += synapse0x24c8700();
   input += synapse0x24c8740();
   input += synapse0x24c8780();
   input += synapse0x24c87c0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c8380() {
   double input = input0x24c8380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c8800() {
   double input = 0.416673;
   input += synapse0x24c8b40();
   input += synapse0x24c8b80();
   input += synapse0x24c8bc0();
   input += synapse0x24c8c00();
   input += synapse0x24c8c40();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c8800() {
   double input = input0x24c8800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c8c80() {
   double input = -1.39945;
   input += synapse0x24c8fc0();
   input += synapse0x24c9000();
   input += synapse0x24c9040();
   input += synapse0x24c9080();
   input += synapse0x24c90c0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c8c80() {
   double input = input0x24c8c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c9100() {
   double input = -0.451429;
   input += synapse0x23c3f50();
   input += synapse0x23c3f90();
   input += synapse0x24c9550();
   input += synapse0x24c9590();
   input += synapse0x24c95d0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c9100() {
   double input = input0x24c9100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c9610() {
   double input = -8.15469;
   input += synapse0x24c9950();
   input += synapse0x24c9990();
   input += synapse0x24c99d0();
   input += synapse0x24c9a10();
   input += synapse0x24c9a50();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c9610() {
   double input = input0x24c9610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c7d80() {
   double input = 18.999;
   input += synapse0x23c4720();
   input += synapse0x24c7f10();
   input += synapse0x24c7f50();
   input += synapse0x24c9ea0();
   input += synapse0x24c9ee0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c7d80() {
   double input = input0x24c7d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c9f20() {
   double input = -0.99393;
   input += synapse0x24ca260();
   input += synapse0x24ca2a0();
   input += synapse0x24ca2e0();
   input += synapse0x24ca320();
   input += synapse0x24ca360();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c9f20() {
   double input = input0x24c9f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24ca3a0() {
   double input = 16.2237;
   input += synapse0x24ca6e0();
   input += synapse0x24c4fb0();
   input += synapse0x24c4ff0();
   input += synapse0x24c52f0();
   input += synapse0x24c5330();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24ca3a0() {
   double input = input0x24ca3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cac70() {
   double input = -0.587823;
   input += synapse0x24cae00();
   input += synapse0x24cae40();
   input += synapse0x24cae80();
   input += synapse0x24caec0();
   input += synapse0x24caf00();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cac70() {
   double input = input0x24cac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24caf40() {
   double input = -0.741452;
   input += synapse0x24cb280();
   input += synapse0x24cb2c0();
   input += synapse0x24cb300();
   input += synapse0x24cb340();
   input += synapse0x24cb380();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24caf40() {
   double input = input0x24caf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cb3c0() {
   double input = -0.481177;
   input += synapse0x24cb700();
   input += synapse0x24cb740();
   input += synapse0x24cb780();
   input += synapse0x24cb7c0();
   input += synapse0x24cb800();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cb3c0() {
   double input = input0x24cb3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cb840() {
   double input = -2.83076;
   input += synapse0x24cbb80();
   input += synapse0x24cbbc0();
   input += synapse0x24cbc00();
   input += synapse0x24cbc40();
   input += synapse0x24cbc80();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cb840() {
   double input = input0x24cb840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cbcc0() {
   double input = 0.704672;
   input += synapse0x24cc000();
   input += synapse0x24cc040();
   input += synapse0x24cc080();
   input += synapse0x24cc0c0();
   input += synapse0x24cc100();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cbcc0() {
   double input = input0x24cbcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cc140() {
   double input = -0.543136;
   input += synapse0x24cc480();
   input += synapse0x24cc4c0();
   input += synapse0x24cc500();
   input += synapse0x24cc540();
   input += synapse0x24cc580();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cc140() {
   double input = input0x24cc140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cc5c0() {
   double input = -0.551332;
   input += synapse0x24cc900();
   input += synapse0x24cc940();
   input += synapse0x24cc980();
   input += synapse0x24cc9c0();
   input += synapse0x24cca00();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cc5c0() {
   double input = input0x24cc5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cca40() {
   double input = -0.228231;
   input += synapse0x24ccd80();
   input += synapse0x24ccdc0();
   input += synapse0x24cce00();
   input += synapse0x24cce40();
   input += synapse0x24cce80();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cca40() {
   double input = input0x24cca40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24ccec0() {
   double input = -0.525768;
   input += synapse0x24cd200();
   input += synapse0x24cd240();
   input += synapse0x24cd280();
   input += synapse0x24cd2c0();
   input += synapse0x24cd300();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24ccec0() {
   double input = input0x24ccec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cedd0() {
   double input = 0.458564;
   input += synapse0x24c6e20();
   input += synapse0x24c6e60();
   input += synapse0x24c7330();
   input += synapse0x24c7370();
   input += synapse0x24c77b0();
   input += synapse0x24c77f0();
   input += synapse0x24c7c30();
   input += synapse0x24c7c70();
   input += synapse0x24c81b0();
   input += synapse0x24c81f0();
   input += synapse0x24c8630();
   input += synapse0x24c8670();
   input += synapse0x24c8ab0();
   input += synapse0x24c8af0();
   input += synapse0x24c8f30();
   input += synapse0x24c8f70();
   input += synapse0x24c93b0();
   input += synapse0x24c93f0();
   input += synapse0x24c98c0();
   input += synapse0x24c9900();
   input += synapse0x24ca1d0();
   input += synapse0x24ca210();
   input += synapse0x24ca650();
   input += synapse0x24ca690();
   input += synapse0x24c5cb0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cedd0() {
   double input = input0x24cedd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24c9ba0() {
   double input = 0.0626885;
   input += synapse0x24c9d30();
   input += synapse0x24c9d70();
   input += synapse0x24c9db0();
   input += synapse0x24c9df0();
   input += synapse0x24c9e30();
   input += synapse0x24c5cf0();
   input += synapse0x24cbf70();
   input += synapse0x24cbfb0();
   input += synapse0x24cc3f0();
   input += synapse0x24cc430();
   input += synapse0x24cc870();
   input += synapse0x24cc8b0();
   input += synapse0x24cccf0();
   input += synapse0x24ccd30();
   input += synapse0x24cd170();
   input += synapse0x24cd1b0();
   input += synapse0x24c6120();
   input += synapse0x24c6160();
   input += synapse0x24cb1f0();
   input += synapse0x24cb230();
   input += synapse0x23d1fe0();
   input += synapse0x23d2020();
   input += synapse0x24cf880();
   input += synapse0x24cf8c0();
   input += synapse0x24cf900();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24c9ba0() {
   double input = input0x24c9ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cf940() {
   double input = -0.625665;
   input += synapse0x24c9440();
   input += synapse0x24c9480();
   input += synapse0x24c94c0();
   input += synapse0x24c9500();
   input += synapse0x24cfe90();
   input += synapse0x24cfed0();
   input += synapse0x24cff10();
   input += synapse0x24cff50();
   input += synapse0x24cff90();
   input += synapse0x24cffd0();
   input += synapse0x24d0010();
   input += synapse0x24d0050();
   input += synapse0x24d0090();
   input += synapse0x24d00d0();
   input += synapse0x24d0110();
   input += synapse0x24d0150();
   input += synapse0x24cfad0();
   input += synapse0x24cfb10();
   input += synapse0x24d02a0();
   input += synapse0x24d02e0();
   input += synapse0x24d0320();
   input += synapse0x24d0360();
   input += synapse0x24d03a0();
   input += synapse0x24d03e0();
   input += synapse0x24d0420();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cf940() {
   double input = input0x24cf940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d0460() {
   double input = 0.445114;
   input += synapse0x24d07a0();
   input += synapse0x24d07e0();
   input += synapse0x24d0820();
   input += synapse0x24d0860();
   input += synapse0x24d08a0();
   input += synapse0x24d08e0();
   input += synapse0x24d0920();
   input += synapse0x24d0960();
   input += synapse0x24d09a0();
   input += synapse0x24d09e0();
   input += synapse0x24d0a20();
   input += synapse0x24d0a60();
   input += synapse0x24d0aa0();
   input += synapse0x24d0ae0();
   input += synapse0x24d0b20();
   input += synapse0x24d0b60();
   input += synapse0x24d05f0();
   input += synapse0x24d0630();
   input += synapse0x24d0cb0();
   input += synapse0x24d0cf0();
   input += synapse0x24d0d30();
   input += synapse0x24d0d70();
   input += synapse0x24d0db0();
   input += synapse0x24d0df0();
   input += synapse0x24d0e30();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d0460() {
   double input = input0x24d0460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d0e70() {
   double input = -0.807903;
   input += synapse0x24d11b0();
   input += synapse0x24d11f0();
   input += synapse0x24d1230();
   input += synapse0x24d1270();
   input += synapse0x24d12b0();
   input += synapse0x24d12f0();
   input += synapse0x24d1330();
   input += synapse0x24d1370();
   input += synapse0x24d13b0();
   input += synapse0x24d13f0();
   input += synapse0x24d1430();
   input += synapse0x24d1470();
   input += synapse0x24d14b0();
   input += synapse0x24d14f0();
   input += synapse0x24d1530();
   input += synapse0x24d1570();
   input += synapse0x24d1000();
   input += synapse0x24d1040();
   input += synapse0x24d16c0();
   input += synapse0x24d1700();
   input += synapse0x24d1740();
   input += synapse0x24d1780();
   input += synapse0x24d17c0();
   input += synapse0x24d1800();
   input += synapse0x24d1840();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d0e70() {
   double input = input0x24d0e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d1880() {
   double input = -0.325523;
   input += synapse0x24d1bc0();
   input += synapse0x24d1c00();
   input += synapse0x24d1c40();
   input += synapse0x24d1c80();
   input += synapse0x24d1cc0();
   input += synapse0x24d1d00();
   input += synapse0x24d1d40();
   input += synapse0x24cef60();
   input += synapse0x24cefa0();
   input += synapse0x24cefe0();
   input += synapse0x24cf020();
   input += synapse0x24cf060();
   input += synapse0x24cf0a0();
   input += synapse0x24cf0e0();
   input += synapse0x24cf120();
   input += synapse0x24cf160();
   input += synapse0x24d1a10();
   input += synapse0x24d1a50();
   input += synapse0x24cf2b0();
   input += synapse0x24cf2f0();
   input += synapse0x24cf330();
   input += synapse0x24cf370();
   input += synapse0x24cf3b0();
   input += synapse0x24cf3f0();
   input += synapse0x24cf430();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d1880() {
   double input = input0x24d1880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24cf470() {
   double input = 1.48484;
   input += synapse0x24cf720();
   input += synapse0x24d2e20();
   input += synapse0x24d2e60();
   input += synapse0x24d2ea0();
   input += synapse0x24d2ee0();
   input += synapse0x24d2f20();
   input += synapse0x24d2f60();
   input += synapse0x24d2fa0();
   input += synapse0x24d2fe0();
   input += synapse0x24d3020();
   input += synapse0x24d3060();
   input += synapse0x24d30a0();
   input += synapse0x24d30e0();
   input += synapse0x24d3120();
   input += synapse0x24d3160();
   input += synapse0x24d31a0();
   input += synapse0x24cf600();
   input += synapse0x24cf640();
   input += synapse0x24d32f0();
   input += synapse0x24d3330();
   input += synapse0x24d3370();
   input += synapse0x24d33b0();
   input += synapse0x24d33f0();
   input += synapse0x24d3430();
   input += synapse0x24d3470();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24cf470() {
   double input = input0x24cf470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d34b0() {
   double input = 0.351397;
   input += synapse0x24d37f0();
   input += synapse0x24d3830();
   input += synapse0x24d3870();
   input += synapse0x24d38b0();
   input += synapse0x24d38f0();
   input += synapse0x24d3930();
   input += synapse0x24d3970();
   input += synapse0x24d39b0();
   input += synapse0x24d39f0();
   input += synapse0x24d3a30();
   input += synapse0x24d3a70();
   input += synapse0x24d3ab0();
   input += synapse0x24d3af0();
   input += synapse0x24d3b30();
   input += synapse0x24d3b70();
   input += synapse0x24d3bb0();
   input += synapse0x24d3640();
   input += synapse0x24d3680();
   input += synapse0x24d3d00();
   input += synapse0x24d3d40();
   input += synapse0x24d3d80();
   input += synapse0x24d3dc0();
   input += synapse0x24d3e00();
   input += synapse0x24d3e40();
   input += synapse0x24d3e80();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d34b0() {
   double input = input0x24d34b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d3ec0() {
   double input = 0.456379;
   input += synapse0x24d4200();
   input += synapse0x24d4240();
   input += synapse0x24d4280();
   input += synapse0x24d42c0();
   input += synapse0x24d4300();
   input += synapse0x24d4340();
   input += synapse0x24d4380();
   input += synapse0x24d43c0();
   input += synapse0x24d4400();
   input += synapse0x24d4440();
   input += synapse0x24d4480();
   input += synapse0x24d44c0();
   input += synapse0x24d4500();
   input += synapse0x24d4540();
   input += synapse0x24d4580();
   input += synapse0x24d45c0();
   input += synapse0x24d4050();
   input += synapse0x24d4090();
   input += synapse0x24d4710();
   input += synapse0x24d4750();
   input += synapse0x24d4790();
   input += synapse0x24d47d0();
   input += synapse0x24d4810();
   input += synapse0x24d4850();
   input += synapse0x24d4890();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d3ec0() {
   double input = input0x24d3ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d48d0() {
   double input = 3.37385;
   input += synapse0x24d4c10();
   input += synapse0x24d4c50();
   input += synapse0x24d4c90();
   input += synapse0x24d4cd0();
   input += synapse0x24d4d10();
   input += synapse0x24d4d50();
   input += synapse0x24d4d90();
   input += synapse0x24d4dd0();
   input += synapse0x24d4e10();
   input += synapse0x24d4e50();
   input += synapse0x24d4e90();
   input += synapse0x24d4ed0();
   input += synapse0x24d4f10();
   input += synapse0x24d4f50();
   input += synapse0x24d4f90();
   input += synapse0x24d4fd0();
   input += synapse0x24d4a60();
   input += synapse0x24d4aa0();
   input += synapse0x24d5120();
   input += synapse0x24d5160();
   input += synapse0x24d51a0();
   input += synapse0x24d51e0();
   input += synapse0x24d5220();
   input += synapse0x24d5260();
   input += synapse0x24d52a0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d48d0() {
   double input = input0x24d48d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d52e0() {
   double input = 0.467911;
   input += synapse0x24d5620();
   input += synapse0x24d5660();
   input += synapse0x24d56a0();
   input += synapse0x24d56e0();
   input += synapse0x24d5720();
   input += synapse0x24d5760();
   input += synapse0x24d57a0();
   input += synapse0x24d57e0();
   input += synapse0x24d5820();
   input += synapse0x24d5860();
   input += synapse0x24d58a0();
   input += synapse0x24d58e0();
   input += synapse0x24d5920();
   input += synapse0x24d5960();
   input += synapse0x24d59a0();
   input += synapse0x24d59e0();
   input += synapse0x24d5470();
   input += synapse0x24d54b0();
   input += synapse0x24d5b30();
   input += synapse0x24d5b70();
   input += synapse0x24d5bb0();
   input += synapse0x24d5bf0();
   input += synapse0x24d5c30();
   input += synapse0x24d5c70();
   input += synapse0x24d5cb0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d52e0() {
   double input = input0x24d52e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d5cf0() {
   double input = 0.30138;
   input += synapse0x24d6030();
   input += synapse0x24d6070();
   input += synapse0x24d60b0();
   input += synapse0x24d60f0();
   input += synapse0x24d6130();
   input += synapse0x24d6170();
   input += synapse0x24d61b0();
   input += synapse0x24d61f0();
   input += synapse0x24d6230();
   input += synapse0x24d6270();
   input += synapse0x24d62b0();
   input += synapse0x24d62f0();
   input += synapse0x24d6330();
   input += synapse0x24d6370();
   input += synapse0x24d63b0();
   input += synapse0x24d63f0();
   input += synapse0x24d5e80();
   input += synapse0x24d5ec0();
   input += synapse0x24d6540();
   input += synapse0x24d6580();
   input += synapse0x24d65c0();
   input += synapse0x24d6600();
   input += synapse0x24d6640();
   input += synapse0x24d6680();
   input += synapse0x24d66c0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d5cf0() {
   double input = input0x24d5cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d6700() {
   double input = 1.43521;
   input += synapse0x24d6a40();
   input += synapse0x24d6a80();
   input += synapse0x24d6ac0();
   input += synapse0x24d6b00();
   input += synapse0x24d6b40();
   input += synapse0x24d6b80();
   input += synapse0x24d6bc0();
   input += synapse0x24d6c00();
   input += synapse0x24d6c40();
   input += synapse0x24d6c80();
   input += synapse0x24d6cc0();
   input += synapse0x24d6d00();
   input += synapse0x24d6d40();
   input += synapse0x24d6d80();
   input += synapse0x24d6dc0();
   input += synapse0x24d6e00();
   input += synapse0x24d6890();
   input += synapse0x24d68d0();
   input += synapse0x24d6f50();
   input += synapse0x24d6f90();
   input += synapse0x24d6fd0();
   input += synapse0x24d7010();
   input += synapse0x24d7050();
   input += synapse0x24d7090();
   input += synapse0x24d70d0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d6700() {
   double input = input0x24d6700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d7110() {
   double input = 0.218911;
   input += synapse0x24d7450();
   input += synapse0x24d7490();
   input += synapse0x24d74d0();
   input += synapse0x24d7510();
   input += synapse0x24d7550();
   input += synapse0x24d7590();
   input += synapse0x24d75d0();
   input += synapse0x24d7610();
   input += synapse0x24d7650();
   input += synapse0x24d7690();
   input += synapse0x24d76d0();
   input += synapse0x24d7710();
   input += synapse0x24d7750();
   input += synapse0x24d7790();
   input += synapse0x24d77d0();
   input += synapse0x24d7810();
   input += synapse0x24d72a0();
   input += synapse0x24d72e0();
   input += synapse0x24d7960();
   input += synapse0x24d79a0();
   input += synapse0x24d79e0();
   input += synapse0x24d7a20();
   input += synapse0x24d7a60();
   input += synapse0x24d7aa0();
   input += synapse0x24d7ae0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d7110() {
   double input = input0x24d7110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d7b20() {
   double input = -0.352913;
   input += synapse0x24d7e60();
   input += synapse0x24d7ea0();
   input += synapse0x24d7ee0();
   input += synapse0x24d7f20();
   input += synapse0x24d7f60();
   input += synapse0x24d7fa0();
   input += synapse0x24d7fe0();
   input += synapse0x24d8020();
   input += synapse0x24d8060();
   input += synapse0x24d80a0();
   input += synapse0x24d80e0();
   input += synapse0x24d8120();
   input += synapse0x24d8160();
   input += synapse0x24d81a0();
   input += synapse0x24d81e0();
   input += synapse0x24d8220();
   input += synapse0x24d7cb0();
   input += synapse0x24d7cf0();
   input += synapse0x24d8370();
   input += synapse0x24d83b0();
   input += synapse0x24d83f0();
   input += synapse0x24d8430();
   input += synapse0x24d8470();
   input += synapse0x24d84b0();
   input += synapse0x24d84f0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d7b20() {
   double input = input0x24d7b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d8530() {
   double input = 0.30695;
   input += synapse0x24d8870();
   input += synapse0x24c6090();
   input += synapse0x24c60d0();
   input += synapse0x24c6490();
   input += synapse0x24c64d0();
   input += synapse0x24c6910();
   input += synapse0x24c6950();
   input += synapse0x24c6d90();
   input += synapse0x24c6dd0();
   input += synapse0x24c72a0();
   input += synapse0x24c72e0();
   input += synapse0x24c7720();
   input += synapse0x24c7760();
   input += synapse0x24c7ba0();
   input += synapse0x24c7be0();
   input += synapse0x24c8120();
   input += synapse0x24c8160();
   input += synapse0x24c85a0();
   input += synapse0x24c85e0();
   input += synapse0x24c8a20();
   input += synapse0x24c8a60();
   input += synapse0x24c8ea0();
   input += synapse0x24c8ee0();
   input += synapse0x24c9320();
   input += synapse0x24c9360();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d8530() {
   double input = input0x24d8530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24d2b50() {
   double input = 1.23666;
   input += synapse0x24d2ce0();
   input += synapse0x24d2d20();
   input += synapse0x24ca5c0();
   input += synapse0x24ca600();
   input += synapse0x24d86c0();
   input += synapse0x24d8700();
   input += synapse0x24c5970();
   input += synapse0x24c59b0();
   input += synapse0x24cb160();
   input += synapse0x24cb1a0();
   input += synapse0x24cb5e0();
   input += synapse0x24cb620();
   input += synapse0x24cba60();
   input += synapse0x24cbaa0();
   input += synapse0x24cbee0();
   input += synapse0x24cbf20();
   input += synapse0x24cc360();
   input += synapse0x24cc3a0();
   input += synapse0x24cc7e0();
   input += synapse0x24cc820();
   input += synapse0x24ccc60();
   input += synapse0x24ccca0();
   input += synapse0x24cd0e0();
   input += synapse0x24cd120();
   input += synapse0x24c9830();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24d2b50() {
   double input = input0x24d2b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24db7a0() {
   double input = -1.19692;
   input += synapse0x24c9870();
   input += synapse0x24dbae0();
   input += synapse0x24dbb20();
   input += synapse0x24dbb60();
   input += synapse0x24dbba0();
   input += synapse0x24dbbe0();
   input += synapse0x24dbc20();
   input += synapse0x24dbc60();
   input += synapse0x24dbca0();
   input += synapse0x24dbce0();
   input += synapse0x24dbd20();
   input += synapse0x24dbd60();
   input += synapse0x24dbda0();
   input += synapse0x24dbde0();
   input += synapse0x24dbe20();
   input += synapse0x24dbe60();
   input += synapse0x24db930();
   input += synapse0x24db970();
   input += synapse0x24dbfb0();
   input += synapse0x24dbff0();
   input += synapse0x24dc030();
   input += synapse0x24dc070();
   input += synapse0x24dc0b0();
   input += synapse0x24dc0f0();
   input += synapse0x24dc130();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24db7a0() {
   double input = input0x24db7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24dc170() {
   double input = -1.12063;
   input += synapse0x24dc4b0();
   input += synapse0x24dc4f0();
   input += synapse0x24dc530();
   input += synapse0x24dc570();
   input += synapse0x24dc5b0();
   input += synapse0x24dc5f0();
   input += synapse0x24dc630();
   input += synapse0x24dc670();
   input += synapse0x24dc6b0();
   input += synapse0x24dc6f0();
   input += synapse0x24dc730();
   input += synapse0x24dc770();
   input += synapse0x24dc7b0();
   input += synapse0x24dc7f0();
   input += synapse0x24dc830();
   input += synapse0x24dc870();
   input += synapse0x24dc300();
   input += synapse0x24dc340();
   input += synapse0x24dc9c0();
   input += synapse0x24dca00();
   input += synapse0x24dca40();
   input += synapse0x24dca80();
   input += synapse0x24dcac0();
   input += synapse0x24dcb00();
   input += synapse0x24dcb40();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24dc170() {
   double input = input0x24dc170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24dcb80() {
   double input = 0.785696;
   input += synapse0x24dcec0();
   input += synapse0x24dcf00();
   input += synapse0x24dcf40();
   input += synapse0x24dcf80();
   input += synapse0x24dcfc0();
   input += synapse0x24dd000();
   input += synapse0x24dd040();
   input += synapse0x24dd080();
   input += synapse0x24dd0c0();
   input += synapse0x24dd100();
   input += synapse0x24dd140();
   input += synapse0x24dd180();
   input += synapse0x24dd1c0();
   input += synapse0x24dd200();
   input += synapse0x24dd240();
   input += synapse0x24dd280();
   input += synapse0x24dcd10();
   input += synapse0x24dcd50();
   input += synapse0x24dd3d0();
   input += synapse0x24dd410();
   input += synapse0x24dd450();
   input += synapse0x24dd490();
   input += synapse0x24dd4d0();
   input += synapse0x24dd510();
   input += synapse0x24dd550();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24dcb80() {
   double input = input0x24dcb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24dd590() {
   double input = 1.26049;
   input += synapse0x24dd8d0();
   input += synapse0x24dd910();
   input += synapse0x24dd950();
   input += synapse0x24dd990();
   input += synapse0x24dd9d0();
   input += synapse0x24dda10();
   input += synapse0x24dda50();
   input += synapse0x24dda90();
   input += synapse0x24ddad0();
   input += synapse0x24ddb10();
   input += synapse0x24ddb50();
   input += synapse0x24ddb90();
   input += synapse0x24ddbd0();
   input += synapse0x24ddc10();
   input += synapse0x24ddc50();
   input += synapse0x24ddc90();
   input += synapse0x24dd720();
   input += synapse0x24dd760();
   input += synapse0x24ddde0();
   input += synapse0x24dde20();
   input += synapse0x24dde60();
   input += synapse0x24ddea0();
   input += synapse0x24ddee0();
   input += synapse0x24ddf20();
   input += synapse0x24ddf60();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24dd590() {
   double input = input0x24dd590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24ddfa0() {
   double input = -1.27037;
   input += synapse0x24de2e0();
   input += synapse0x24de320();
   input += synapse0x24de360();
   input += synapse0x24de3a0();
   input += synapse0x24de3e0();
   input += synapse0x24de420();
   input += synapse0x24de460();
   input += synapse0x24de4a0();
   input += synapse0x24de4e0();
   input += synapse0x24de520();
   input += synapse0x24de560();
   input += synapse0x24de5a0();
   input += synapse0x24de5e0();
   input += synapse0x24de620();
   input += synapse0x24de660();
   input += synapse0x24de6a0();
   input += synapse0x24de130();
   input += synapse0x24de170();
   input += synapse0x24de7f0();
   input += synapse0x24de830();
   input += synapse0x24de870();
   input += synapse0x24de8b0();
   input += synapse0x24de8f0();
   input += synapse0x24de930();
   input += synapse0x24de970();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24ddfa0() {
   double input = input0x24ddfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24de9b0() {
   double input = -0.686792;
   input += synapse0x24decf0();
   input += synapse0x24ded30();
   input += synapse0x24ded70();
   input += synapse0x24dedb0();
   input += synapse0x24dedf0();
   input += synapse0x24dee30();
   input += synapse0x24dee70();
   input += synapse0x24deeb0();
   input += synapse0x24deef0();
   input += synapse0x24def30();
   input += synapse0x24def70();
   input += synapse0x24defb0();
   input += synapse0x24deff0();
   input += synapse0x24df030();
   input += synapse0x24df070();
   input += synapse0x24df0b0();
   input += synapse0x24deb40();
   input += synapse0x24deb80();
   input += synapse0x24df200();
   input += synapse0x24df240();
   input += synapse0x24df280();
   input += synapse0x24df2c0();
   input += synapse0x24df300();
   input += synapse0x24df340();
   input += synapse0x24df380();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24de9b0() {
   double input = input0x24de9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24df3c0() {
   double input = 0.550179;
   input += synapse0x24df700();
   input += synapse0x24df740();
   input += synapse0x24df780();
   input += synapse0x24df7c0();
   input += synapse0x24df800();
   input += synapse0x24df840();
   input += synapse0x24df880();
   input += synapse0x24df8c0();
   input += synapse0x24df900();
   input += synapse0x24df940();
   input += synapse0x24df980();
   input += synapse0x24df9c0();
   input += synapse0x24dfa00();
   input += synapse0x24dfa40();
   input += synapse0x24dfa80();
   input += synapse0x24dfac0();
   input += synapse0x24df550();
   input += synapse0x24df590();
   input += synapse0x24dfc10();
   input += synapse0x24dfc50();
   input += synapse0x24dfc90();
   input += synapse0x24dfcd0();
   input += synapse0x24dfd10();
   input += synapse0x24dfd50();
   input += synapse0x24dfd90();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24df3c0() {
   double input = input0x24df3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24dfdd0() {
   double input = -0.00978478;
   input += synapse0x24e0110();
   input += synapse0x24e0150();
   input += synapse0x24e0190();
   input += synapse0x24e01d0();
   input += synapse0x24e0210();
   input += synapse0x24e0250();
   input += synapse0x24e0290();
   input += synapse0x24e02d0();
   input += synapse0x24e0310();
   input += synapse0x24e0350();
   input += synapse0x24e0390();
   input += synapse0x24e03d0();
   input += synapse0x24e0410();
   input += synapse0x24e0450();
   input += synapse0x24e0490();
   input += synapse0x24e04d0();
   input += synapse0x24dff60();
   input += synapse0x24dffa0();
   input += synapse0x24e0620();
   input += synapse0x24e0660();
   input += synapse0x24e06a0();
   input += synapse0x24e06e0();
   input += synapse0x24e0720();
   input += synapse0x24e0760();
   input += synapse0x24e07a0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24dfdd0() {
   double input = input0x24dfdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x24e07e0() {
   double input = 0.386582;
   input += synapse0x24e0a00();
   input += synapse0x24e0a40();
   input += synapse0x24e0a80();
   input += synapse0x24e0ac0();
   input += synapse0x24e0b00();
   input += synapse0x24e0b40();
   input += synapse0x24e0b80();
   input += synapse0x24e0bc0();
   input += synapse0x24e0c00();
   input += synapse0x24e0c40();
   input += synapse0x24e0c80();
   input += synapse0x24e0cc0();
   input += synapse0x24e0d00();
   input += synapse0x24e0d40();
   input += synapse0x24e0d80();
   input += synapse0x24e0dc0();
   input += synapse0x24c5dd0();
   input += synapse0x24c5e10();
   input += synapse0x24e0f10();
   input += synapse0x24e0f50();
   input += synapse0x24e0f90();
   input += synapse0x24e0fd0();
   input += synapse0x24e1010();
   input += synapse0x24e1050();
   input += synapse0x24e1090();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x24e07e0() {
   double input = input0x24e07e0();
   return (input * 43.5728)+176.774;
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23d1f10() {
   return (neuron0x24c4d90()*1.55655);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24b4200() {
   return (neuron0x24c50d0()*-0.732457);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c61b0() {
   return (neuron0x24c5410()*-2.04347);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c61f0() {
   return (neuron0x24c5750()*2.9664);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6230() {
   return (neuron0x24c5a90()*-0.306984);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c65b0() {
   return (neuron0x24c4d90()*0.0268976);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c65f0() {
   return (neuron0x24c50d0()*-0.000112673);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6630() {
   return (neuron0x24c5410()*0.00251689);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6670() {
   return (neuron0x24c5750()*2.41078);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c66b0() {
   return (neuron0x24c5a90()*1.93025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6a30() {
   return (neuron0x24c4d90()*0.607213);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6a70() {
   return (neuron0x24c50d0()*-0.0242007);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6ab0() {
   return (neuron0x24c5410()*0.0429732);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6af0() {
   return (neuron0x24c5750()*-7.65153);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6b30() {
   return (neuron0x24c5a90()*-5.00067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6eb0() {
   return (neuron0x24c4d90()*6.89149);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6ef0() {
   return (neuron0x24c50d0()*0.0179201);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23c4100() {
   return (neuron0x24c5410()*3.17992);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23c4140() {
   return (neuron0x24c5750()*-6.51758);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7040() {
   return (neuron0x24c5a90()*-2.44085);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c73c0() {
   return (neuron0x24c4d90()*1.71387);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7400() {
   return (neuron0x24c50d0()*-0.0236704);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7440() {
   return (neuron0x24c5410()*0.446133);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7480() {
   return (neuron0x24c5750()*14.936);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c74c0() {
   return (neuron0x24c5a90()*9.63443);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7840() {
   return (neuron0x24c4d90()*-0.928931);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7880() {
   return (neuron0x24c50d0()*0.663578);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c78c0() {
   return (neuron0x24c5410()*1.05321);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7900() {
   return (neuron0x24c5750()*-3.0796);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7940() {
   return (neuron0x24c5a90()*-0.0464867);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7cc0() {
   return (neuron0x24c4d90()*-4.37674);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7d00() {
   return (neuron0x24c50d0()*0.197243);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7d40() {
   return (neuron0x24c5410()*-0.566951);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6f30() {
   return (neuron0x24c5750()*-1.09886);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6f70() {
   return (neuron0x24c5a90()*0.372082);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8240() {
   return (neuron0x24c4d90()*2.51892);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8280() {
   return (neuron0x24c50d0()*-0.0585996);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c82c0() {
   return (neuron0x24c5410()*1.70194);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8300() {
   return (neuron0x24c5750()*-1.40371);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8340() {
   return (neuron0x24c5a90()*-1.35039);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c86c0() {
   return (neuron0x24c4d90()*-10.3411);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8700() {
   return (neuron0x24c50d0()*0.0626072);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8740() {
   return (neuron0x24c5410()*-4.14506);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8780() {
   return (neuron0x24c5750()*17.7388);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c87c0() {
   return (neuron0x24c5a90()*-2.91148);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8b40() {
   return (neuron0x24c4d90()*0.648488);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8b80() {
   return (neuron0x24c50d0()*1.37108);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8bc0() {
   return (neuron0x24c5410()*2.00797);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8c00() {
   return (neuron0x24c5750()*-9.2262);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8c40() {
   return (neuron0x24c5a90()*-0.0100127);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8fc0() {
   return (neuron0x24c4d90()*1.31785);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9000() {
   return (neuron0x24c50d0()*-0.962648);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9040() {
   return (neuron0x24c5410()*-0.612972);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9080() {
   return (neuron0x24c5750()*1.3151);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c90c0() {
   return (neuron0x24c5a90()*-1.19126);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23c3f50() {
   return (neuron0x24c4d90()*1.38608);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23c3f90() {
   return (neuron0x24c50d0()*-0.866826);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9550() {
   return (neuron0x24c5410()*-1.19575);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9590() {
   return (neuron0x24c5750()*1.37986);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c95d0() {
   return (neuron0x24c5a90()*-0.382627);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9950() {
   return (neuron0x24c4d90()*-8.01279);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9990() {
   return (neuron0x24c50d0()*-0.0169747);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c99d0() {
   return (neuron0x24c5410()*-4.50821);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9a10() {
   return (neuron0x24c5750()*3.32292);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9a50() {
   return (neuron0x24c5a90()*-3.11773);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23c4720() {
   return (neuron0x24c4d90()*0.59638);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7f10() {
   return (neuron0x24c50d0()*0.00434757);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7f50() {
   return (neuron0x24c5410()*0.72685);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9ea0() {
   return (neuron0x24c5750()*18.5672);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9ee0() {
   return (neuron0x24c5a90()*6.63896);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca260() {
   return (neuron0x24c4d90()*2.88411);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca2a0() {
   return (neuron0x24c50d0()*-0.918385);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca2e0() {
   return (neuron0x24c5410()*-0.610796);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca320() {
   return (neuron0x24c5750()*0.438746);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca360() {
   return (neuron0x24c5a90()*-1.2872);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca6e0() {
   return (neuron0x24c4d90()*-0.0672523);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c4fb0() {
   return (neuron0x24c50d0()*0.0171702);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c4ff0() {
   return (neuron0x24c5410()*-0.405153);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c52f0() {
   return (neuron0x24c5750()*22.1048);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c5330() {
   return (neuron0x24c5a90()*13.3721);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cae00() {
   return (neuron0x24c4d90()*1.80815);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cae40() {
   return (neuron0x24c50d0()*-0.366185);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cae80() {
   return (neuron0x24c5410()*-1.63629);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24caec0() {
   return (neuron0x24c5750()*3.4252);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24caf00() {
   return (neuron0x24c5a90()*-0.213428);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb280() {
   return (neuron0x24c4d90()*-3.36431);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb2c0() {
   return (neuron0x24c50d0()*1.64017);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb300() {
   return (neuron0x24c5410()*-0.677442);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb340() {
   return (neuron0x24c5750()*-4.17131);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb380() {
   return (neuron0x24c5a90()*-0.614839);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb700() {
   return (neuron0x24c4d90()*-0.720044);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb740() {
   return (neuron0x24c50d0()*0.285122);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb780() {
   return (neuron0x24c5410()*-0.290502);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb7c0() {
   return (neuron0x24c5750()*-3.39524);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb800() {
   return (neuron0x24c5a90()*0.245801);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbb80() {
   return (neuron0x24c4d90()*8.2606);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbbc0() {
   return (neuron0x24c50d0()*-2.06452);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbc00() {
   return (neuron0x24c5410()*-2.98333);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbc40() {
   return (neuron0x24c5750()*-0.157298);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbc80() {
   return (neuron0x24c5a90()*-2.04674);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc000() {
   return (neuron0x24c4d90()*-1.24978);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc040() {
   return (neuron0x24c50d0()*1.32558);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc080() {
   return (neuron0x24c5410()*2.94235);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc0c0() {
   return (neuron0x24c5750()*-7.90165);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc100() {
   return (neuron0x24c5a90()*0.911638);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc480() {
   return (neuron0x24c4d90()*2.70888);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc4c0() {
   return (neuron0x24c50d0()*-0.709889);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc500() {
   return (neuron0x24c5410()*-2.53192);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc540() {
   return (neuron0x24c5750()*4.63341);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc580() {
   return (neuron0x24c5a90()*-0.780127);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc900() {
   return (neuron0x24c4d90()*0.937954);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc940() {
   return (neuron0x24c50d0()*-0.688211);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc980() {
   return (neuron0x24c5410()*-2.61021);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc9c0() {
   return (neuron0x24c5750()*6.49087);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cca00() {
   return (neuron0x24c5a90()*-0.952848);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ccd80() {
   return (neuron0x24c4d90()*0.886649);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ccdc0() {
   return (neuron0x24c50d0()*-0.016328);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cce00() {
   return (neuron0x24c5410()*1.22025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cce40() {
   return (neuron0x24c5750()*1.16578);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cce80() {
   return (neuron0x24c5a90()*-0.307783);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd200() {
   return (neuron0x24c4d90()*0.29934);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd240() {
   return (neuron0x24c50d0()*0.0173849);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd280() {
   return (neuron0x24c5410()*1.31243);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd2c0() {
   return (neuron0x24c5750()*-1.4182);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd300() {
   return (neuron0x24c5a90()*-1.12222);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6e20() {
   return (neuron0x24c5f00()*0.471276);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6e60() {
   return (neuron0x24c6270()*0.212784);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7330() {
   return (neuron0x24c66f0()*1.04072);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7370() {
   return (neuron0x24c6b70()*0.679268);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c77b0() {
   return (neuron0x24c7080()*-0.693731);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c77f0() {
   return (neuron0x24c7500()*0.477174);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7c30() {
   return (neuron0x24c7980()*1.45831);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7c70() {
   return (neuron0x24c7f90()*0.195702);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c81b0() {
   return (neuron0x24c8380()*-0.293358);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c81f0() {
   return (neuron0x24c8800()*1.01381);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8630() {
   return (neuron0x24c8c80()*0.524591);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8670() {
   return (neuron0x24c9100()*0.0598611);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8ab0() {
   return (neuron0x24c9610()*0.343963);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8af0() {
   return (neuron0x24c7d80()*-1.17853);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8f30() {
   return (neuron0x24c9f20()*-0.738021);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8f70() {
   return (neuron0x24ca3a0()*0.619055);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c93b0() {
   return (neuron0x24cac70()*-1.09605);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c93f0() {
   return (neuron0x24caf40()*1.02599);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c98c0() {
   return (neuron0x24cb3c0()*-0.504564);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9900() {
   return (neuron0x24cb840()*-1.19321);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca1d0() {
   return (neuron0x24cbcc0()*0.443902);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca210() {
   return (neuron0x24cc140()*-0.701248);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca650() {
   return (neuron0x24cc5c0()*0.388125);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca690() {
   return (neuron0x24cca40()*0.581771);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c5cb0() {
   return (neuron0x24ccec0()*1.04347);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9d30() {
   return (neuron0x24c5f00()*1.23841);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9d70() {
   return (neuron0x24c6270()*-0.461696);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9db0() {
   return (neuron0x24c66f0()*-0.387302);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9df0() {
   return (neuron0x24c6b70()*-0.435399);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9e30() {
   return (neuron0x24c7080()*-0.605848);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c5cf0() {
   return (neuron0x24c7500()*-0.157647);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbf70() {
   return (neuron0x24c7980()*0.0596622);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbfb0() {
   return (neuron0x24c7f90()*0.0482744);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc3f0() {
   return (neuron0x24c8380()*0.37432);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc430() {
   return (neuron0x24c8800()*0.343471);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc870() {
   return (neuron0x24c8c80()*0.357817);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc8b0() {
   return (neuron0x24c9100()*0.0472988);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cccf0() {
   return (neuron0x24c9610()*-0.258804);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ccd30() {
   return (neuron0x24c7d80()*-0.75843);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd170() {
   return (neuron0x24c9f20()*-0.202649);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd1b0() {
   return (neuron0x24ca3a0()*0.700452);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6120() {
   return (neuron0x24cac70()*-0.863102);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6160() {
   return (neuron0x24caf40()*-0.707271);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb1f0() {
   return (neuron0x24cb3c0()*-1.0545);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb230() {
   return (neuron0x24cb840()*-1.0975);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23d1fe0() {
   return (neuron0x24cbcc0()*-0.807146);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x23d2020() {
   return (neuron0x24cc140()*-1.4411);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf880() {
   return (neuron0x24cc5c0()*0.292229);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf8c0() {
   return (neuron0x24cca40()*0.38947);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf900() {
   return (neuron0x24ccec0()*0.676014);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9440() {
   return (neuron0x24c5f00()*-0.614517);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9480() {
   return (neuron0x24c6270()*-2.09744);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c94c0() {
   return (neuron0x24c66f0()*1.54301);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9500() {
   return (neuron0x24c6b70()*-0.588637);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cfe90() {
   return (neuron0x24c7080()*-0.926672);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cfed0() {
   return (neuron0x24c7500()*-0.537873);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cff10() {
   return (neuron0x24c7980()*0.156329);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cff50() {
   return (neuron0x24c7f90()*0.727834);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cff90() {
   return (neuron0x24c8380()*0.83997);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cffd0() {
   return (neuron0x24c8800()*-0.510607);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0010() {
   return (neuron0x24c8c80()*-0.67047);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0050() {
   return (neuron0x24c9100()*0.0785848);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0090() {
   return (neuron0x24c9610()*0.57179);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d00d0() {
   return (neuron0x24c7d80()*0.215587);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0110() {
   return (neuron0x24c9f20()*-0.212909);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0150() {
   return (neuron0x24ca3a0()*1.60793);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cfad0() {
   return (neuron0x24cac70()*0.192762);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cfb10() {
   return (neuron0x24caf40()*-0.913639);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d02a0() {
   return (neuron0x24cb3c0()*0.751722);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d02e0() {
   return (neuron0x24cb840()*0.731143);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0320() {
   return (neuron0x24cbcc0()*0.135088);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0360() {
   return (neuron0x24cc140()*0.0544711);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d03a0() {
   return (neuron0x24cc5c0()*-0.582209);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d03e0() {
   return (neuron0x24cca40()*1.08955);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0420() {
   return (neuron0x24ccec0()*0.259475);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d07a0() {
   return (neuron0x24c5f00()*1.10824);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d07e0() {
   return (neuron0x24c6270()*0.33601);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0820() {
   return (neuron0x24c66f0()*0.0312812);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0860() {
   return (neuron0x24c6b70()*0.201261);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d08a0() {
   return (neuron0x24c7080()*-0.101697);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d08e0() {
   return (neuron0x24c7500()*1.11418);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0920() {
   return (neuron0x24c7980()*1.60495);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0960() {
   return (neuron0x24c7f90()*-0.04835);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d09a0() {
   return (neuron0x24c8380()*0.23003);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d09e0() {
   return (neuron0x24c8800()*0.589449);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0a20() {
   return (neuron0x24c8c80()*0.809663);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0a60() {
   return (neuron0x24c9100()*-0.0127647);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0aa0() {
   return (neuron0x24c9610()*-0.0457438);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0ae0() {
   return (neuron0x24c7d80()*-0.894872);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0b20() {
   return (neuron0x24c9f20()*-0.00862757);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0b60() {
   return (neuron0x24ca3a0()*0.0262067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d05f0() {
   return (neuron0x24cac70()*-0.388091);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0630() {
   return (neuron0x24caf40()*0.859386);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0cb0() {
   return (neuron0x24cb3c0()*-0.489346);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0cf0() {
   return (neuron0x24cb840()*-0.971352);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0d30() {
   return (neuron0x24cbcc0()*0.239017);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0d70() {
   return (neuron0x24cc140()*-1.01971);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0db0() {
   return (neuron0x24cc5c0()*0.197026);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0df0() {
   return (neuron0x24cca40()*1.01147);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d0e30() {
   return (neuron0x24ccec0()*1.59561);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d11b0() {
   return (neuron0x24c5f00()*-1.60724);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d11f0() {
   return (neuron0x24c6270()*-3.74102);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1230() {
   return (neuron0x24c66f0()*3.60143);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1270() {
   return (neuron0x24c6b70()*0.307439);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d12b0() {
   return (neuron0x24c7080()*-3.92442);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d12f0() {
   return (neuron0x24c7500()*-1.51761);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1330() {
   return (neuron0x24c7980()*0.990656);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1370() {
   return (neuron0x24c7f90()*0.531345);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d13b0() {
   return (neuron0x24c8380()*0.0388982);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d13f0() {
   return (neuron0x24c8800()*-0.772686);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1430() {
   return (neuron0x24c8c80()*-0.458478);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1470() {
   return (neuron0x24c9100()*0.00862013);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d14b0() {
   return (neuron0x24c9610()*-0.314496);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d14f0() {
   return (neuron0x24c7d80()*0.960686);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1530() {
   return (neuron0x24c9f20()*-0.10172);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1570() {
   return (neuron0x24ca3a0()*3.74976);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1000() {
   return (neuron0x24cac70()*1.01362);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1040() {
   return (neuron0x24caf40()*-0.379518);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d16c0() {
   return (neuron0x24cb3c0()*0.852717);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1700() {
   return (neuron0x24cb840()*1.05873);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1740() {
   return (neuron0x24cbcc0()*0.0776074);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1780() {
   return (neuron0x24cc140()*1.26197);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d17c0() {
   return (neuron0x24cc5c0()*-0.495239);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1800() {
   return (neuron0x24cca40()*-0.484308);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1840() {
   return (neuron0x24ccec0()*-0.145466);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1bc0() {
   return (neuron0x24c5f00()*0.603959);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1c00() {
   return (neuron0x24c6270()*1.66781);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1c40() {
   return (neuron0x24c66f0()*2.29713);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1c80() {
   return (neuron0x24c6b70()*1.39878);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1cc0() {
   return (neuron0x24c7080()*1.23663);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1d00() {
   return (neuron0x24c7500()*0.478132);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1d40() {
   return (neuron0x24c7980()*-1.54067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cef60() {
   return (neuron0x24c7f90()*-0.25255);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cefa0() {
   return (neuron0x24c8380()*-1.7781);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cefe0() {
   return (neuron0x24c8800()*-0.377876);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf020() {
   return (neuron0x24c8c80()*-0.17828);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf060() {
   return (neuron0x24c9100()*-0.520617);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf0a0() {
   return (neuron0x24c9610()*-2.38989);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf0e0() {
   return (neuron0x24c7d80()*1.83502);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf120() {
   return (neuron0x24c9f20()*-0.0279326);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf160() {
   return (neuron0x24ca3a0()*3.38295);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1a10() {
   return (neuron0x24cac70()*-0.320304);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d1a50() {
   return (neuron0x24caf40()*-0.421745);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf2b0() {
   return (neuron0x24cb3c0()*0.116541);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf2f0() {
   return (neuron0x24cb840()*-0.621309);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf330() {
   return (neuron0x24cbcc0()*-0.204633);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf370() {
   return (neuron0x24cc140()*-1.23253);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf3b0() {
   return (neuron0x24cc5c0()*0.829094);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf3f0() {
   return (neuron0x24cca40()*-1.00355);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf430() {
   return (neuron0x24ccec0()*-0.367025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf720() {
   return (neuron0x24c5f00()*0.177041);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2e20() {
   return (neuron0x24c6270()*-0.473142);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2e60() {
   return (neuron0x24c66f0()*0.483685);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2ea0() {
   return (neuron0x24c6b70()*-5.55863);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2ee0() {
   return (neuron0x24c7080()*1.01829);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2f20() {
   return (neuron0x24c7500()*1.07647);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2f60() {
   return (neuron0x24c7980()*0.43339);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2fa0() {
   return (neuron0x24c7f90()*-0.355426);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2fe0() {
   return (neuron0x24c8380()*1.3499);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3020() {
   return (neuron0x24c8800()*1.49441);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3060() {
   return (neuron0x24c8c80()*0.56302);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d30a0() {
   return (neuron0x24c9100()*0.262961);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d30e0() {
   return (neuron0x24c9610()*4.04244);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3120() {
   return (neuron0x24c7d80()*4.39336);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3160() {
   return (neuron0x24c9f20()*1.00485);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d31a0() {
   return (neuron0x24ca3a0()*4.14682);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf600() {
   return (neuron0x24cac70()*0.730292);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cf640() {
   return (neuron0x24caf40()*0.00819084);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d32f0() {
   return (neuron0x24cb3c0()*1.24567);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3330() {
   return (neuron0x24cb840()*0.481852);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3370() {
   return (neuron0x24cbcc0()*1.02591);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d33b0() {
   return (neuron0x24cc140()*0.0264222);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d33f0() {
   return (neuron0x24cc5c0()*-0.0396106);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3430() {
   return (neuron0x24cca40()*-0.343241);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3470() {
   return (neuron0x24ccec0()*0.359193);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d37f0() {
   return (neuron0x24c5f00()*-0.746729);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3830() {
   return (neuron0x24c6270()*-0.544043);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3870() {
   return (neuron0x24c66f0()*-1.31158);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d38b0() {
   return (neuron0x24c6b70()*0.621898);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d38f0() {
   return (neuron0x24c7080()*1.8361);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3930() {
   return (neuron0x24c7500()*-0.464937);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3970() {
   return (neuron0x24c7980()*0.136916);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d39b0() {
   return (neuron0x24c7f90()*1.11208);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d39f0() {
   return (neuron0x24c8380()*-0.669128);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3a30() {
   return (neuron0x24c8800()*-0.596495);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3a70() {
   return (neuron0x24c8c80()*-1.01018);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3ab0() {
   return (neuron0x24c9100()*-0.311794);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3af0() {
   return (neuron0x24c9610()*0.22984);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3b30() {
   return (neuron0x24c7d80()*1.98346);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3b70() {
   return (neuron0x24c9f20()*0.518827);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3bb0() {
   return (neuron0x24ca3a0()*3.1579);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3640() {
   return (neuron0x24cac70()*1.00836);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3680() {
   return (neuron0x24caf40()*-0.0592497);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3d00() {
   return (neuron0x24cb3c0()*1.17022);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3d40() {
   return (neuron0x24cb840()*2.13686);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3d80() {
   return (neuron0x24cbcc0()*0.447909);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3dc0() {
   return (neuron0x24cc140()*1.24183);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3e00() {
   return (neuron0x24cc5c0()*-0.0258952);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3e40() {
   return (neuron0x24cca40()*-1.09112);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d3e80() {
   return (neuron0x24ccec0()*-0.110878);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4200() {
   return (neuron0x24c5f00()*1.06158);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4240() {
   return (neuron0x24c6270()*0.0659944);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4280() {
   return (neuron0x24c66f0()*0.911143);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d42c0() {
   return (neuron0x24c6b70()*1.36321);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4300() {
   return (neuron0x24c7080()*0.786262);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4340() {
   return (neuron0x24c7500()*1.16126);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4380() {
   return (neuron0x24c7980()*1.27799);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d43c0() {
   return (neuron0x24c7f90()*0.0558782);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4400() {
   return (neuron0x24c8380()*0.712267);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4440() {
   return (neuron0x24c8800()*0.86466);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4480() {
   return (neuron0x24c8c80()*0.465941);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d44c0() {
   return (neuron0x24c9100()*0.117719);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4500() {
   return (neuron0x24c9610()*0.447994);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4540() {
   return (neuron0x24c7d80()*-1.36051);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4580() {
   return (neuron0x24c9f20()*0.148061);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d45c0() {
   return (neuron0x24ca3a0()*-0.500309);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4050() {
   return (neuron0x24cac70()*-0.794755);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4090() {
   return (neuron0x24caf40()*0.478091);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4710() {
   return (neuron0x24cb3c0()*0.328678);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4750() {
   return (neuron0x24cb840()*-1.34444);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4790() {
   return (neuron0x24cbcc0()*0.410144);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d47d0() {
   return (neuron0x24cc140()*-0.783796);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4810() {
   return (neuron0x24cc5c0()*0.516278);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4850() {
   return (neuron0x24cca40()*0.82809);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4890() {
   return (neuron0x24ccec0()*1.58633);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4c10() {
   return (neuron0x24c5f00()*-1.00423);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4c50() {
   return (neuron0x24c6270()*0.567506);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4c90() {
   return (neuron0x24c66f0()*4.29336);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4cd0() {
   return (neuron0x24c6b70()*-22.2906);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4d10() {
   return (neuron0x24c7080()*-10.3088);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4d50() {
   return (neuron0x24c7500()*3.40149);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4d90() {
   return (neuron0x24c7980()*2.66887);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4dd0() {
   return (neuron0x24c7f90()*-1.59218);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4e10() {
   return (neuron0x24c8380()*16.9107);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4e50() {
   return (neuron0x24c8800()*2.37714);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4e90() {
   return (neuron0x24c8c80()*-1.3622);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4ed0() {
   return (neuron0x24c9100()*-0.433863);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4f10() {
   return (neuron0x24c9610()*7.41997);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4f50() {
   return (neuron0x24c7d80()*-20.4126);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4f90() {
   return (neuron0x24c9f20()*-0.0715932);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4fd0() {
   return (neuron0x24ca3a0()*-42.0395);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4a60() {
   return (neuron0x24cac70()*1.01325);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d4aa0() {
   return (neuron0x24caf40()*6.79783);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5120() {
   return (neuron0x24cb3c0()*4.51028);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5160() {
   return (neuron0x24cb840()*1.01234);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d51a0() {
   return (neuron0x24cbcc0()*3.81859);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d51e0() {
   return (neuron0x24cc140()*1.08346);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5220() {
   return (neuron0x24cc5c0()*-0.180571);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5260() {
   return (neuron0x24cca40()*-3.04128);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d52a0() {
   return (neuron0x24ccec0()*-4.72104);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5620() {
   return (neuron0x24c5f00()*1.23026);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5660() {
   return (neuron0x24c6270()*-0.511009);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d56a0() {
   return (neuron0x24c66f0()*2.19564);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d56e0() {
   return (neuron0x24c6b70()*0.771922);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5720() {
   return (neuron0x24c7080()*2.1012);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5760() {
   return (neuron0x24c7500()*1.14898);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d57a0() {
   return (neuron0x24c7980()*0.720191);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d57e0() {
   return (neuron0x24c7f90()*-0.0323692);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5820() {
   return (neuron0x24c8380()*-1.02857);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5860() {
   return (neuron0x24c8800()*1.28853);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d58a0() {
   return (neuron0x24c8c80()*1.09888);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d58e0() {
   return (neuron0x24c9100()*0.370233);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5920() {
   return (neuron0x24c9610()*-0.681205);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5960() {
   return (neuron0x24c7d80()*-1.32468);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d59a0() {
   return (neuron0x24c9f20()*-0.0436937);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d59e0() {
   return (neuron0x24ca3a0()*-1.70496);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5470() {
   return (neuron0x24cac70()*-1.5575);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d54b0() {
   return (neuron0x24caf40()*0.542646);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5b30() {
   return (neuron0x24cb3c0()*-0.278981);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5b70() {
   return (neuron0x24cb840()*-1.34625);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5bb0() {
   return (neuron0x24cbcc0()*-0.731004);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5bf0() {
   return (neuron0x24cc140()*-1.92799);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5c30() {
   return (neuron0x24cc5c0()*0.515693);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5c70() {
   return (neuron0x24cca40()*0.547257);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5cb0() {
   return (neuron0x24ccec0()*0.399209);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6030() {
   return (neuron0x24c5f00()*0.448312);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6070() {
   return (neuron0x24c6270()*0.20189);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d60b0() {
   return (neuron0x24c66f0()*-0.625912);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d60f0() {
   return (neuron0x24c6b70()*0.710057);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6130() {
   return (neuron0x24c7080()*1.5951);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6170() {
   return (neuron0x24c7500()*-0.0675554);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d61b0() {
   return (neuron0x24c7980()*-0.3449);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d61f0() {
   return (neuron0x24c7f90()*0.606257);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6230() {
   return (neuron0x24c8380()*-0.41602);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6270() {
   return (neuron0x24c8800()*0.277672);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d62b0() {
   return (neuron0x24c8c80()*0.405953);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d62f0() {
   return (neuron0x24c9100()*-0.09752);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6330() {
   return (neuron0x24c9610()*0.762519);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6370() {
   return (neuron0x24c7d80()*0.0395039);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d63b0() {
   return (neuron0x24c9f20()*-0.224549);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d63f0() {
   return (neuron0x24ca3a0()*0.996608);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5e80() {
   return (neuron0x24cac70()*0.202544);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d5ec0() {
   return (neuron0x24caf40()*-0.494162);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6540() {
   return (neuron0x24cb3c0()*-0.559739);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6580() {
   return (neuron0x24cb840()*-0.574328);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d65c0() {
   return (neuron0x24cbcc0()*0.0628877);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6600() {
   return (neuron0x24cc140()*0.036973);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6640() {
   return (neuron0x24cc5c0()*0.250399);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6680() {
   return (neuron0x24cca40()*-0.834048);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d66c0() {
   return (neuron0x24ccec0()*0.13626);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6a40() {
   return (neuron0x24c5f00()*0.768554);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6a80() {
   return (neuron0x24c6270()*-0.392546);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6ac0() {
   return (neuron0x24c66f0()*0.298347);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6b00() {
   return (neuron0x24c6b70()*-0.20577);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6b40() {
   return (neuron0x24c7080()*1.01498);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6b80() {
   return (neuron0x24c7500()*0.742463);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6bc0() {
   return (neuron0x24c7980()*1.31365);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6c00() {
   return (neuron0x24c7f90()*0.252814);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6c40() {
   return (neuron0x24c8380()*0.416601);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6c80() {
   return (neuron0x24c8800()*1.61087);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6cc0() {
   return (neuron0x24c8c80()*0.841425);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6d00() {
   return (neuron0x24c9100()*0.0469975);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6d40() {
   return (neuron0x24c9610()*0.117496);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6d80() {
   return (neuron0x24c7d80()*0.920589);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6dc0() {
   return (neuron0x24c9f20()*-0.0201511);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6e00() {
   return (neuron0x24ca3a0()*3.52118);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6890() {
   return (neuron0x24cac70()*-0.725516);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d68d0() {
   return (neuron0x24caf40()*0.541354);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6f50() {
   return (neuron0x24cb3c0()*-0.413723);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6f90() {
   return (neuron0x24cb840()*-1.1933);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d6fd0() {
   return (neuron0x24cbcc0()*0.813871);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7010() {
   return (neuron0x24cc140()*-1.10803);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7050() {
   return (neuron0x24cc5c0()*0.637481);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7090() {
   return (neuron0x24cca40()*0.857252);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d70d0() {
   return (neuron0x24ccec0()*2.28206);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7450() {
   return (neuron0x24c5f00()*-1.9496);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7490() {
   return (neuron0x24c6270()*0.412774);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d74d0() {
   return (neuron0x24c66f0()*1.95221);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7510() {
   return (neuron0x24c6b70()*-4.44952);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7550() {
   return (neuron0x24c7080()*-5.6204);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7590() {
   return (neuron0x24c7500()*-0.681031);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d75d0() {
   return (neuron0x24c7980()*0.827407);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7610() {
   return (neuron0x24c7f90()*-0.694962);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7650() {
   return (neuron0x24c8380()*-0.926709);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7690() {
   return (neuron0x24c8800()*-0.228939);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d76d0() {
   return (neuron0x24c8c80()*-0.767563);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7710() {
   return (neuron0x24c9100()*-0.240673);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7750() {
   return (neuron0x24c9610()*3.42461);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7790() {
   return (neuron0x24c7d80()*-5.24319);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d77d0() {
   return (neuron0x24c9f20()*0.139401);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7810() {
   return (neuron0x24ca3a0()*-4.91955);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d72a0() {
   return (neuron0x24cac70()*1.25891);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d72e0() {
   return (neuron0x24caf40()*0.435843);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7960() {
   return (neuron0x24cb3c0()*2.29722);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d79a0() {
   return (neuron0x24cb840()*1.7385);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d79e0() {
   return (neuron0x24cbcc0()*0.683101);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7a20() {
   return (neuron0x24cc140()*1.93294);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7a60() {
   return (neuron0x24cc5c0()*-0.917573);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7aa0() {
   return (neuron0x24cca40()*0.338724);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7ae0() {
   return (neuron0x24ccec0()*0.700991);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7e60() {
   return (neuron0x24c5f00()*-0.119842);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7ea0() {
   return (neuron0x24c6270()*-0.824077);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7ee0() {
   return (neuron0x24c66f0()*-0.477731);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7f20() {
   return (neuron0x24c6b70()*-0.628881);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7f60() {
   return (neuron0x24c7080()*-0.434245);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7fa0() {
   return (neuron0x24c7500()*-0.262182);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7fe0() {
   return (neuron0x24c7980()*-1.2071);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8020() {
   return (neuron0x24c7f90()*-5.52844e-05);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8060() {
   return (neuron0x24c8380()*-0.0980479);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d80a0() {
   return (neuron0x24c8800()*-0.713905);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d80e0() {
   return (neuron0x24c8c80()*-0.108735);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8120() {
   return (neuron0x24c9100()*-0.502947);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8160() {
   return (neuron0x24c9610()*0.0105381);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d81a0() {
   return (neuron0x24c7d80()*0.880963);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d81e0() {
   return (neuron0x24c9f20()*-0.0195836);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8220() {
   return (neuron0x24ca3a0()*-0.575284);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7cb0() {
   return (neuron0x24cac70()*0.938082);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d7cf0() {
   return (neuron0x24caf40()*-0.233407);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8370() {
   return (neuron0x24cb3c0()*-0.227763);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d83b0() {
   return (neuron0x24cb840()*0.851413);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d83f0() {
   return (neuron0x24cbcc0()*-0.485124);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8430() {
   return (neuron0x24cc140()*0.615649);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8470() {
   return (neuron0x24cc5c0()*-0.56238);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d84b0() {
   return (neuron0x24cca40()*-0.243771);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d84f0() {
   return (neuron0x24ccec0()*-0.707561);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8870() {
   return (neuron0x24c5f00()*-0.21729);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6090() {
   return (neuron0x24c6270()*-1.01354);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c60d0() {
   return (neuron0x24c66f0()*-0.271395);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6490() {
   return (neuron0x24c6b70()*1.17474);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c64d0() {
   return (neuron0x24c7080()*-0.52138);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6910() {
   return (neuron0x24c7500()*0.160406);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6950() {
   return (neuron0x24c7980()*0.10781);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6d90() {
   return (neuron0x24c7f90()*-0.240087);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c6dd0() {
   return (neuron0x24c8380()*-0.753541);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c72a0() {
   return (neuron0x24c8800()*0.804622);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c72e0() {
   return (neuron0x24c8c80()*-0.0252792);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7720() {
   return (neuron0x24c9100()*-0.186493);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7760() {
   return (neuron0x24c9610()*-0.874497);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7ba0() {
   return (neuron0x24c7d80()*-1.97853);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c7be0() {
   return (neuron0x24c9f20()*-0.144661);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8120() {
   return (neuron0x24ca3a0()*0.307184);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8160() {
   return (neuron0x24cac70()*-0.663741);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c85a0() {
   return (neuron0x24caf40()*0.719416);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c85e0() {
   return (neuron0x24cb3c0()*0.110771);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8a20() {
   return (neuron0x24cb840()*-0.510757);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8a60() {
   return (neuron0x24cbcc0()*0.159033);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8ea0() {
   return (neuron0x24cc140()*-0.43093);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c8ee0() {
   return (neuron0x24cc5c0()*0.301649);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9320() {
   return (neuron0x24cca40()*-0.0638249);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9360() {
   return (neuron0x24ccec0()*0.44601);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2ce0() {
   return (neuron0x24c5f00()*1.31494);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d2d20() {
   return (neuron0x24c6270()*-15.1425);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca5c0() {
   return (neuron0x24c66f0()*7.54558);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ca600() {
   return (neuron0x24c6b70()*-5.20249);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d86c0() {
   return (neuron0x24c7080()*-6.17982);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24d8700() {
   return (neuron0x24c7500()*2.34127);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c5970() {
   return (neuron0x24c7980()*2.07957);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c59b0() {
   return (neuron0x24c7f90()*-3.12369);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb160() {
   return (neuron0x24c8380()*-0.697604);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb1a0() {
   return (neuron0x24c8800()*2.53069);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb5e0() {
   return (neuron0x24c8c80()*0.28885);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cb620() {
   return (neuron0x24c9100()*0.583812);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cba60() {
   return (neuron0x24c9610()*4.9539);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbaa0() {
   return (neuron0x24c7d80()*-3.13928);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbee0() {
   return (neuron0x24c9f20()*-0.149853);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cbf20() {
   return (neuron0x24ca3a0()*-3.80694);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc360() {
   return (neuron0x24cac70()*-2.05763);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc3a0() {
   return (neuron0x24caf40()*2.92272);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc7e0() {
   return (neuron0x24cb3c0()*-0.0217553);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cc820() {
   return (neuron0x24cb840()*-2.18956);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ccc60() {
   return (neuron0x24cbcc0()*0.902562);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ccca0() {
   return (neuron0x24cc140()*-2.00618);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd0e0() {
   return (neuron0x24cc5c0()*0.667781);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24cd120() {
   return (neuron0x24cca40()*0.866017);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9830() {
   return (neuron0x24ccec0()*0.547032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c9870() {
   return (neuron0x24c5f00()*-1.27568);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbae0() {
   return (neuron0x24c6270()*1.13308);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbb20() {
   return (neuron0x24c66f0()*-1.44318);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbb60() {
   return (neuron0x24c6b70()*-1.64168);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbba0() {
   return (neuron0x24c7080()*1.90458);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbbe0() {
   return (neuron0x24c7500()*-1.1374);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbc20() {
   return (neuron0x24c7980()*-0.742026);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbc60() {
   return (neuron0x24c7f90()*-0.10504);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbca0() {
   return (neuron0x24c8380()*0.101294);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbce0() {
   return (neuron0x24c8800()*-1.0084);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbd20() {
   return (neuron0x24c8c80()*-0.0225756);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbd60() {
   return (neuron0x24c9100()*-0.434653);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbda0() {
   return (neuron0x24c9610()*-0.433216);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbde0() {
   return (neuron0x24c7d80()*0.394512);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbe20() {
   return (neuron0x24c9f20()*0.511543);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbe60() {
   return (neuron0x24ca3a0()*1.96056);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24db930() {
   return (neuron0x24cac70()*-0.0953894);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24db970() {
   return (neuron0x24caf40()*-1.03586);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbfb0() {
   return (neuron0x24cb3c0()*0.0191163);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dbff0() {
   return (neuron0x24cb840()*0.358595);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc030() {
   return (neuron0x24cbcc0()*-0.696092);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc070() {
   return (neuron0x24cc140()*0.151326);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc0b0() {
   return (neuron0x24cc5c0()*-0.264338);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc0f0() {
   return (neuron0x24cca40()*0.472936);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc130() {
   return (neuron0x24ccec0()*-0.503315);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc4b0() {
   return (neuron0x24c5f00()*-1.09085);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc4f0() {
   return (neuron0x24c6270()*0.222291);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc530() {
   return (neuron0x24c66f0()*0.033032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc570() {
   return (neuron0x24c6b70()*-0.631968);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc5b0() {
   return (neuron0x24c7080()*-0.17974);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc5f0() {
   return (neuron0x24c7500()*-1.83551);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc630() {
   return (neuron0x24c7980()*-0.835577);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc670() {
   return (neuron0x24c7f90()*-0.111693);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc6b0() {
   return (neuron0x24c8380()*-0.661572);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc6f0() {
   return (neuron0x24c8800()*-2.03584);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc730() {
   return (neuron0x24c8c80()*-0.815383);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc770() {
   return (neuron0x24c9100()*-0.614893);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc7b0() {
   return (neuron0x24c9610()*-0.663404);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc7f0() {
   return (neuron0x24c7d80()*0.172979);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc830() {
   return (neuron0x24c9f20()*0.221661);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc870() {
   return (neuron0x24ca3a0()*-2.32861);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc300() {
   return (neuron0x24cac70()*0.93182);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc340() {
   return (neuron0x24caf40()*0.0937869);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dc9c0() {
   return (neuron0x24cb3c0()*0.423759);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dca00() {
   return (neuron0x24cb840()*1.45225);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dca40() {
   return (neuron0x24cbcc0()*-0.206977);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dca80() {
   return (neuron0x24cc140()*1.38059);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcac0() {
   return (neuron0x24cc5c0()*-0.343835);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcb00() {
   return (neuron0x24cca40()*-1.06389);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcb40() {
   return (neuron0x24ccec0()*-2.62116);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcec0() {
   return (neuron0x24c5f00()*1.3571);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcf00() {
   return (neuron0x24c6270()*-0.137221);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcf40() {
   return (neuron0x24c66f0()*0.353403);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcf80() {
   return (neuron0x24c6b70()*0.290552);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcfc0() {
   return (neuron0x24c7080()*0.0451031);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd000() {
   return (neuron0x24c7500()*0.303882);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd040() {
   return (neuron0x24c7980()*0.431481);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd080() {
   return (neuron0x24c7f90()*-0.152155);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd0c0() {
   return (neuron0x24c8380()*0.858356);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd100() {
   return (neuron0x24c8800()*0.777125);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd140() {
   return (neuron0x24c8c80()*0.38111);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd180() {
   return (neuron0x24c9100()*0.679689);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd1c0() {
   return (neuron0x24c9610()*0.202629);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd200() {
   return (neuron0x24c7d80()*-0.49401);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd240() {
   return (neuron0x24c9f20()*-0.655776);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd280() {
   return (neuron0x24ca3a0()*0.689889);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcd10() {
   return (neuron0x24cac70()*-0.256361);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dcd50() {
   return (neuron0x24caf40()*0.854151);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd3d0() {
   return (neuron0x24cb3c0()*-0.939901);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd410() {
   return (neuron0x24cb840()*-1.1435);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd450() {
   return (neuron0x24cbcc0()*0.0836291);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd490() {
   return (neuron0x24cc140()*-0.434113);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd4d0() {
   return (neuron0x24cc5c0()*0.598305);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd510() {
   return (neuron0x24cca40()*0.432448);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd550() {
   return (neuron0x24ccec0()*0.967395);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd8d0() {
   return (neuron0x24c5f00()*0.453364);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd910() {
   return (neuron0x24c6270()*-7.75838);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd950() {
   return (neuron0x24c66f0()*0.468564);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd990() {
   return (neuron0x24c6b70()*0.848588);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd9d0() {
   return (neuron0x24c7080()*0.969455);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dda10() {
   return (neuron0x24c7500()*1.72297);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dda50() {
   return (neuron0x24c7980()*0.886473);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dda90() {
   return (neuron0x24c7f90()*0.149498);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddad0() {
   return (neuron0x24c8380()*-0.336532);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddb10() {
   return (neuron0x24c8800()*2.30585);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddb50() {
   return (neuron0x24c8c80()*0.597423);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddb90() {
   return (neuron0x24c9100()*0.474663);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddbd0() {
   return (neuron0x24c9610()*-0.884625);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddc10() {
   return (neuron0x24c7d80()*0.225501);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddc50() {
   return (neuron0x24c9f20()*-0.228458);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddc90() {
   return (neuron0x24ca3a0()*0.821619);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd720() {
   return (neuron0x24cac70()*-0.639794);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dd760() {
   return (neuron0x24caf40()*-0.145169);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddde0() {
   return (neuron0x24cb3c0()*0.401698);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dde20() {
   return (neuron0x24cb840()*-1.7017);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dde60() {
   return (neuron0x24cbcc0()*1.14036);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddea0() {
   return (neuron0x24cc140()*-0.923589);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddee0() {
   return (neuron0x24cc5c0()*0.123998);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddf20() {
   return (neuron0x24cca40()*0.089417);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ddf60() {
   return (neuron0x24ccec0()*-0.106926);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de2e0() {
   return (neuron0x24c5f00()*-1.04673);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de320() {
   return (neuron0x24c6270()*-0.477463);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de360() {
   return (neuron0x24c66f0()*5.07223);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de3a0() {
   return (neuron0x24c6b70()*-0.447813);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de3e0() {
   return (neuron0x24c7080()*-2.49874);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de420() {
   return (neuron0x24c7500()*-1.20067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de460() {
   return (neuron0x24c7980()*-1.1605);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de4a0() {
   return (neuron0x24c7f90()*-1.28936);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de4e0() {
   return (neuron0x24c8380()*0.430005);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de520() {
   return (neuron0x24c8800()*-1.86544);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de560() {
   return (neuron0x24c8c80()*-0.567537);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de5a0() {
   return (neuron0x24c9100()*-0.157969);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de5e0() {
   return (neuron0x24c9610()*0.0214975);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de620() {
   return (neuron0x24c7d80()*3.632);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de660() {
   return (neuron0x24c9f20()*0.77823);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de6a0() {
   return (neuron0x24ca3a0()*2.03301);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de130() {
   return (neuron0x24cac70()*1.69775);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de170() {
   return (neuron0x24caf40()*-0.508084);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de7f0() {
   return (neuron0x24cb3c0()*0.726726);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de830() {
   return (neuron0x24cb840()*2.03578);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de870() {
   return (neuron0x24cbcc0()*-0.282967);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de8b0() {
   return (neuron0x24cc140()*2.06334);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de8f0() {
   return (neuron0x24cc5c0()*-0.213286);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de930() {
   return (neuron0x24cca40()*-0.519906);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24de970() {
   return (neuron0x24ccec0()*0.00195779);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24decf0() {
   return (neuron0x24c5f00()*-1.31727);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ded30() {
   return (neuron0x24c6270()*0.324954);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24ded70() {
   return (neuron0x24c66f0()*-0.707512);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dedb0() {
   return (neuron0x24c6b70()*-1.41168);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dedf0() {
   return (neuron0x24c7080()*0.74204);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dee30() {
   return (neuron0x24c7500()*-0.798999);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dee70() {
   return (neuron0x24c7980()*-0.495639);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24deeb0() {
   return (neuron0x24c7f90()*-0.224508);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24deef0() {
   return (neuron0x24c8380()*0.323803);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24def30() {
   return (neuron0x24c8800()*-1.41644);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24def70() {
   return (neuron0x24c8c80()*-0.889871);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24defb0() {
   return (neuron0x24c9100()*-0.53575);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24deff0() {
   return (neuron0x24c9610()*0.224568);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df030() {
   return (neuron0x24c7d80()*2.06067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df070() {
   return (neuron0x24c9f20()*0.484461);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df0b0() {
   return (neuron0x24ca3a0()*0.398412);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24deb40() {
   return (neuron0x24cac70()*0.969121);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24deb80() {
   return (neuron0x24caf40()*-0.714033);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df200() {
   return (neuron0x24cb3c0()*1.0186);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df240() {
   return (neuron0x24cb840()*1.8514);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df280() {
   return (neuron0x24cbcc0()*0.408067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df2c0() {
   return (neuron0x24cc140()*1.67584);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df300() {
   return (neuron0x24cc5c0()*-0.531305);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df340() {
   return (neuron0x24cca40()*-0.732155);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df380() {
   return (neuron0x24ccec0()*-1.63564);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df700() {
   return (neuron0x24c5f00()*-0.687489);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df740() {
   return (neuron0x24c6270()*0.290523);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df780() {
   return (neuron0x24c66f0()*0.446536);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df7c0() {
   return (neuron0x24c6b70()*0.519508);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df800() {
   return (neuron0x24c7080()*-0.266845);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df840() {
   return (neuron0x24c7500()*0.173815);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df880() {
   return (neuron0x24c7980()*0.260606);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df8c0() {
   return (neuron0x24c7f90()*0.0766841);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df900() {
   return (neuron0x24c8380()*0.278441);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df940() {
   return (neuron0x24c8800()*0.181702);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df980() {
   return (neuron0x24c8c80()*-0.786267);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df9c0() {
   return (neuron0x24c9100()*-0.357011);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfa00() {
   return (neuron0x24c9610()*1.29618);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfa40() {
   return (neuron0x24c7d80()*1.38779);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfa80() {
   return (neuron0x24c9f20()*1.03835);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfac0() {
   return (neuron0x24ca3a0()*-0.308903);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df550() {
   return (neuron0x24cac70()*1.4609);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24df590() {
   return (neuron0x24caf40()*1.08037);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfc10() {
   return (neuron0x24cb3c0()*1.53787);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfc50() {
   return (neuron0x24cb840()*1.78675);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfc90() {
   return (neuron0x24cbcc0()*1.02345);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfcd0() {
   return (neuron0x24cc140()*1.76585);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfd10() {
   return (neuron0x24cc5c0()*-0.0877083);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfd50() {
   return (neuron0x24cca40()*-0.538186);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dfd90() {
   return (neuron0x24ccec0()*-0.609662);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0110() {
   return (neuron0x24c5f00()*-1.31124);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0150() {
   return (neuron0x24c6270()*0.189735);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0190() {
   return (neuron0x24c66f0()*1.23155);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e01d0() {
   return (neuron0x24c6b70()*0.878803);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0210() {
   return (neuron0x24c7080()*0.937937);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0250() {
   return (neuron0x24c7500()*-1.20373);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0290() {
   return (neuron0x24c7980()*-0.532873);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e02d0() {
   return (neuron0x24c7f90()*1.13202);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0310() {
   return (neuron0x24c8380()*-0.223694);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0350() {
   return (neuron0x24c8800()*-0.847123);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0390() {
   return (neuron0x24c8c80()*-0.296824);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e03d0() {
   return (neuron0x24c9100()*-0.66808);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0410() {
   return (neuron0x24c9610()*0.829065);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0450() {
   return (neuron0x24c7d80()*0.759112);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0490() {
   return (neuron0x24c9f20()*0.176515);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e04d0() {
   return (neuron0x24ca3a0()*-0.0420047);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dff60() {
   return (neuron0x24cac70()*1.79095);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24dffa0() {
   return (neuron0x24caf40()*-0.154685);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0620() {
   return (neuron0x24cb3c0()*1.88647);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0660() {
   return (neuron0x24cb840()*2.17107);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e06a0() {
   return (neuron0x24cbcc0()*0.832635);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e06e0() {
   return (neuron0x24cc140()*1.4339);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0720() {
   return (neuron0x24cc5c0()*-0.611064);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0760() {
   return (neuron0x24cca40()*-0.758099);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e07a0() {
   return (neuron0x24ccec0()*-1.50454);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0a00() {
   return (neuron0x24cedd0()*0.790852);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0a40() {
   return (neuron0x24c9ba0()*-0.302188);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0a80() {
   return (neuron0x24cf940()*2.96238);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0ac0() {
   return (neuron0x24d0460()*1.5272);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0b00() {
   return (neuron0x24d0e70()*-4.58832);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0b40() {
   return (neuron0x24d1880()*1.43615);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0b80() {
   return (neuron0x24cf470()*-5.89801);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0bc0() {
   return (neuron0x24d34b0()*3.64391);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0c00() {
   return (neuron0x24d3ec0()*3.26289);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0c40() {
   return (neuron0x24d48d0()*3.82784);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0c80() {
   return (neuron0x24d52e0()*2.67067);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0cc0() {
   return (neuron0x24d5cf0()*-1.32437);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0d00() {
   return (neuron0x24d6700()*-2.99473);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0d40() {
   return (neuron0x24d7110()*5.06724);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0d80() {
   return (neuron0x24d7b20()*-0.968379);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0dc0() {
   return (neuron0x24d8530()*2.15243);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c5dd0() {
   return (neuron0x24d2b50()*-6.14651);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24c5e10() {
   return (neuron0x24db7a0()*-3.35025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0f10() {
   return (neuron0x24dc170()*1.90765);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0f50() {
   return (neuron0x24dcb80()*2.42952);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0f90() {
   return (neuron0x24dd590()*-8.48525);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e0fd0() {
   return (neuron0x24ddfa0()*3.57406);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e1010() {
   return (neuron0x24de9b0()*1.56455);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e1050() {
   return (neuron0x24df3c0()*-0.799087);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x24e1090() {
   return (neuron0x24dfdd0()*1.36255);
}

