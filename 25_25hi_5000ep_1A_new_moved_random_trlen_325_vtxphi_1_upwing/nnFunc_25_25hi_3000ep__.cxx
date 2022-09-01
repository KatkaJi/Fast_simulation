#include "25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_upwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2300ad0();
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
         return neuron0x2300ad0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x22e5080() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e53c0() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e5700() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e5a40() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e5d80() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x22e61f0() {
   double input = 0.276845;
   input += synapse0x21f21f0();
   input += synapse0x22d44f0();
   input += synapse0x22e64a0();
   input += synapse0x22e64e0();
   input += synapse0x22e6520();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e61f0() {
   double input = input0x22e61f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e6560() {
   double input = 4.65366;
   input += synapse0x22e68a0();
   input += synapse0x22e68e0();
   input += synapse0x22e6920();
   input += synapse0x22e6960();
   input += synapse0x22e69a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e6560() {
   double input = input0x22e6560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e69e0() {
   double input = -11.9505;
   input += synapse0x22e6d20();
   input += synapse0x22e6d60();
   input += synapse0x22e6da0();
   input += synapse0x22e6de0();
   input += synapse0x22e6e20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e69e0() {
   double input = input0x22e69e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e6e60() {
   double input = 1.50811;
   input += synapse0x22e71a0();
   input += synapse0x22e71e0();
   input += synapse0x21e43e0();
   input += synapse0x21e4420();
   input += synapse0x22e7330();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e6e60() {
   double input = input0x22e6e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e7370() {
   double input = -1.52804;
   input += synapse0x22e76b0();
   input += synapse0x22e76f0();
   input += synapse0x22e7730();
   input += synapse0x22e7770();
   input += synapse0x22e77b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e7370() {
   double input = input0x22e7370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e77f0() {
   double input = -0.622944;
   input += synapse0x22e7b30();
   input += synapse0x22e7b70();
   input += synapse0x22e7bb0();
   input += synapse0x22e7bf0();
   input += synapse0x22e7c30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e77f0() {
   double input = input0x22e77f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e7c70() {
   double input = 0.631472;
   input += synapse0x22e7fb0();
   input += synapse0x22e7ff0();
   input += synapse0x22e8030();
   input += synapse0x22e7220();
   input += synapse0x22e7260();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e7c70() {
   double input = input0x22e7c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e8280() {
   double input = -0.70338;
   input += synapse0x22e8530();
   input += synapse0x22e8570();
   input += synapse0x22e85b0();
   input += synapse0x22e85f0();
   input += synapse0x22e8630();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e8280() {
   double input = input0x22e8280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e8670() {
   double input = -1.59648;
   input += synapse0x22e89b0();
   input += synapse0x22e89f0();
   input += synapse0x22e8a30();
   input += synapse0x22e8a70();
   input += synapse0x22e8ab0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e8670() {
   double input = input0x22e8670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e8af0() {
   double input = -2.27901;
   input += synapse0x22e8e30();
   input += synapse0x22e8e70();
   input += synapse0x22e8eb0();
   input += synapse0x22e8ef0();
   input += synapse0x22e8f30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e8af0() {
   double input = input0x22e8af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e8f70() {
   double input = -10.584;
   input += synapse0x22e92b0();
   input += synapse0x22e92f0();
   input += synapse0x22e9330();
   input += synapse0x22e9370();
   input += synapse0x22e93b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e8f70() {
   double input = input0x22e8f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e93f0() {
   double input = -1.01479;
   input += synapse0x21e4230();
   input += synapse0x21e4270();
   input += synapse0x22e9840();
   input += synapse0x22e9880();
   input += synapse0x22e98c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e93f0() {
   double input = input0x22e93f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e9900() {
   double input = 10.0331;
   input += synapse0x22e9c40();
   input += synapse0x22e9c80();
   input += synapse0x22e9cc0();
   input += synapse0x22e9d00();
   input += synapse0x22e9d40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e9900() {
   double input = input0x22e9900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e8070() {
   double input = -1.27701;
   input += synapse0x21e4a00();
   input += synapse0x22e8200();
   input += synapse0x22e8240();
   input += synapse0x22ea190();
   input += synapse0x22ea1d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e8070() {
   double input = input0x22e8070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ea210() {
   double input = 0.76225;
   input += synapse0x22ea550();
   input += synapse0x22ea590();
   input += synapse0x22ea5d0();
   input += synapse0x22ea610();
   input += synapse0x22ea650();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ea210() {
   double input = input0x22ea210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ea690() {
   double input = 8.22804;
   input += synapse0x22ea9d0();
   input += synapse0x22e52a0();
   input += synapse0x22e52e0();
   input += synapse0x22e55e0();
   input += synapse0x22e5620();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ea690() {
   double input = input0x22ea690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22eaf60() {
   double input = 0.294258;
   input += synapse0x22eb0f0();
   input += synapse0x22eb130();
   input += synapse0x22eb170();
   input += synapse0x22eb1b0();
   input += synapse0x22eb1f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22eaf60() {
   double input = input0x22eaf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22eb230() {
   double input = -0.4;
   input += synapse0x22eb570();
   input += synapse0x22eb5b0();
   input += synapse0x22eb5f0();
   input += synapse0x22eb630();
   input += synapse0x22eb670();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22eb230() {
   double input = input0x22eb230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22eb6b0() {
   double input = 9.8111;
   input += synapse0x22eb9f0();
   input += synapse0x22eba30();
   input += synapse0x22eba70();
   input += synapse0x22ebab0();
   input += synapse0x22ebaf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22eb6b0() {
   double input = input0x22eb6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ebb30() {
   double input = -0.0956453;
   input += synapse0x22ebe70();
   input += synapse0x22ebeb0();
   input += synapse0x22ebef0();
   input += synapse0x22ebf30();
   input += synapse0x22ebf70();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ebb30() {
   double input = input0x22ebb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ebfb0() {
   double input = 7.01865;
   input += synapse0x22ec2f0();
   input += synapse0x22ec330();
   input += synapse0x22ec370();
   input += synapse0x22ec3b0();
   input += synapse0x22ec3f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ebfb0() {
   double input = input0x22ebfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ec430() {
   double input = -14.914;
   input += synapse0x22ec770();
   input += synapse0x22ec7b0();
   input += synapse0x22ec7f0();
   input += synapse0x22ec830();
   input += synapse0x22ec870();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ec430() {
   double input = input0x22ec430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ec8b0() {
   double input = -0.559054;
   input += synapse0x22ecbf0();
   input += synapse0x22ecc30();
   input += synapse0x22ecc70();
   input += synapse0x22eccb0();
   input += synapse0x22eccf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ec8b0() {
   double input = input0x22ec8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ecd30() {
   double input = 2.99396;
   input += synapse0x22ed070();
   input += synapse0x22ed0b0();
   input += synapse0x22ed0f0();
   input += synapse0x22ed130();
   input += synapse0x22ed170();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ecd30() {
   double input = input0x22ecd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ed1b0() {
   double input = -0.604239;
   input += synapse0x22ed4f0();
   input += synapse0x22ed530();
   input += synapse0x22ed570();
   input += synapse0x22ed5b0();
   input += synapse0x22ed5f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ed1b0() {
   double input = input0x22ed1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ef0c0() {
   double input = 0.369553;
   input += synapse0x22e7110();
   input += synapse0x22e7150();
   input += synapse0x22e7620();
   input += synapse0x22e7660();
   input += synapse0x22e7aa0();
   input += synapse0x22e7ae0();
   input += synapse0x22e7f20();
   input += synapse0x22e7f60();
   input += synapse0x22e84a0();
   input += synapse0x22e84e0();
   input += synapse0x22e8920();
   input += synapse0x22e8960();
   input += synapse0x22e8da0();
   input += synapse0x22e8de0();
   input += synapse0x22e9220();
   input += synapse0x22e9260();
   input += synapse0x22e96a0();
   input += synapse0x22e96e0();
   input += synapse0x22e9bb0();
   input += synapse0x22e9bf0();
   input += synapse0x22ea4c0();
   input += synapse0x22ea500();
   input += synapse0x22ea940();
   input += synapse0x22ea980();
   input += synapse0x22e5fa0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ef0c0() {
   double input = input0x22ef0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22e9e90() {
   double input = 0.92935;
   input += synapse0x22ea020();
   input += synapse0x22ea060();
   input += synapse0x22ea0a0();
   input += synapse0x22ea0e0();
   input += synapse0x22ea120();
   input += synapse0x22e5fe0();
   input += synapse0x22ec260();
   input += synapse0x22ec2a0();
   input += synapse0x22ec6e0();
   input += synapse0x22ec720();
   input += synapse0x22ecb60();
   input += synapse0x22ecba0();
   input += synapse0x22ecfe0();
   input += synapse0x22ed020();
   input += synapse0x22ed460();
   input += synapse0x22ed4a0();
   input += synapse0x22e6410();
   input += synapse0x22e6450();
   input += synapse0x22eb4e0();
   input += synapse0x22eb520();
   input += synapse0x21f22c0();
   input += synapse0x21f2300();
   input += synapse0x22efb70();
   input += synapse0x22efbb0();
   input += synapse0x22efbf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22e9e90() {
   double input = input0x22e9e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22efc30() {
   double input = 0.419706;
   input += synapse0x22e9730();
   input += synapse0x22e9770();
   input += synapse0x22e97b0();
   input += synapse0x22e97f0();
   input += synapse0x22f0180();
   input += synapse0x22f01c0();
   input += synapse0x22f0200();
   input += synapse0x22f0240();
   input += synapse0x22f0280();
   input += synapse0x22f02c0();
   input += synapse0x22f0300();
   input += synapse0x22f0340();
   input += synapse0x22f0380();
   input += synapse0x22f03c0();
   input += synapse0x22f0400();
   input += synapse0x22f0440();
   input += synapse0x22efdc0();
   input += synapse0x22efe00();
   input += synapse0x22f0590();
   input += synapse0x22f05d0();
   input += synapse0x22f0610();
   input += synapse0x22f0650();
   input += synapse0x22f0690();
   input += synapse0x22f06d0();
   input += synapse0x22f0710();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22efc30() {
   double input = input0x22efc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f0750() {
   double input = 0.706145;
   input += synapse0x22f0a90();
   input += synapse0x22f0ad0();
   input += synapse0x22f0b10();
   input += synapse0x22f0b50();
   input += synapse0x22f0b90();
   input += synapse0x22f0bd0();
   input += synapse0x22f0c10();
   input += synapse0x22f0c50();
   input += synapse0x22f0c90();
   input += synapse0x22f0cd0();
   input += synapse0x22f0d10();
   input += synapse0x22f0d50();
   input += synapse0x22f0d90();
   input += synapse0x22f0dd0();
   input += synapse0x22f0e10();
   input += synapse0x22f0e50();
   input += synapse0x22f08e0();
   input += synapse0x22f0920();
   input += synapse0x22f0fa0();
   input += synapse0x22f0fe0();
   input += synapse0x22f1020();
   input += synapse0x22f1060();
   input += synapse0x22f10a0();
   input += synapse0x22f10e0();
   input += synapse0x22f1120();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f0750() {
   double input = input0x22f0750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f1160() {
   double input = -1.04221;
   input += synapse0x22f14a0();
   input += synapse0x22f14e0();
   input += synapse0x22f1520();
   input += synapse0x22f1560();
   input += synapse0x22f15a0();
   input += synapse0x22f15e0();
   input += synapse0x22f1620();
   input += synapse0x22f1660();
   input += synapse0x22f16a0();
   input += synapse0x22f16e0();
   input += synapse0x22f1720();
   input += synapse0x22f1760();
   input += synapse0x22f17a0();
   input += synapse0x22f17e0();
   input += synapse0x22f1820();
   input += synapse0x22f1860();
   input += synapse0x22f12f0();
   input += synapse0x22f1330();
   input += synapse0x22f19b0();
   input += synapse0x22f19f0();
   input += synapse0x22f1a30();
   input += synapse0x22f1a70();
   input += synapse0x22f1ab0();
   input += synapse0x22f1af0();
   input += synapse0x22f1b30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f1160() {
   double input = input0x22f1160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f1b70() {
   double input = 1.06413;
   input += synapse0x22f1eb0();
   input += synapse0x22f1ef0();
   input += synapse0x22f1f30();
   input += synapse0x22f1f70();
   input += synapse0x22f1fb0();
   input += synapse0x22f1ff0();
   input += synapse0x22f2030();
   input += synapse0x22ef250();
   input += synapse0x22ef290();
   input += synapse0x22ef2d0();
   input += synapse0x22ef310();
   input += synapse0x22ef350();
   input += synapse0x22ef390();
   input += synapse0x22ef3d0();
   input += synapse0x22ef410();
   input += synapse0x22ef450();
   input += synapse0x22f1d00();
   input += synapse0x22f1d40();
   input += synapse0x22ef5a0();
   input += synapse0x22ef5e0();
   input += synapse0x22ef620();
   input += synapse0x22ef660();
   input += synapse0x22ef6a0();
   input += synapse0x22ef6e0();
   input += synapse0x22ef720();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f1b70() {
   double input = input0x22f1b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ef760() {
   double input = -1.18747;
   input += synapse0x22efa10();
   input += synapse0x22f3110();
   input += synapse0x22f3150();
   input += synapse0x22f3190();
   input += synapse0x22f31d0();
   input += synapse0x22f3210();
   input += synapse0x22f3250();
   input += synapse0x22f3290();
   input += synapse0x22f32d0();
   input += synapse0x22f3310();
   input += synapse0x22f3350();
   input += synapse0x22f3390();
   input += synapse0x22f33d0();
   input += synapse0x22f3410();
   input += synapse0x22f3450();
   input += synapse0x22f3490();
   input += synapse0x22ef8f0();
   input += synapse0x22ef930();
   input += synapse0x22f35e0();
   input += synapse0x22f3620();
   input += synapse0x22f3660();
   input += synapse0x22f36a0();
   input += synapse0x22f36e0();
   input += synapse0x22f3720();
   input += synapse0x22f3760();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ef760() {
   double input = input0x22ef760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f37a0() {
   double input = 1.21562;
   input += synapse0x22f3ae0();
   input += synapse0x22f3b20();
   input += synapse0x22f3b60();
   input += synapse0x22f3ba0();
   input += synapse0x22f3be0();
   input += synapse0x22f3c20();
   input += synapse0x22f3c60();
   input += synapse0x22f3ca0();
   input += synapse0x22f3ce0();
   input += synapse0x22f3d20();
   input += synapse0x22f3d60();
   input += synapse0x22f3da0();
   input += synapse0x22f3de0();
   input += synapse0x22f3e20();
   input += synapse0x22f3e60();
   input += synapse0x22f3ea0();
   input += synapse0x22f3930();
   input += synapse0x22f3970();
   input += synapse0x22f3ff0();
   input += synapse0x22f4030();
   input += synapse0x22f4070();
   input += synapse0x22f40b0();
   input += synapse0x22f40f0();
   input += synapse0x22f4130();
   input += synapse0x22f4170();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f37a0() {
   double input = input0x22f37a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f41b0() {
   double input = -0.58357;
   input += synapse0x22f44f0();
   input += synapse0x22f4530();
   input += synapse0x22f4570();
   input += synapse0x22f45b0();
   input += synapse0x22f45f0();
   input += synapse0x22f4630();
   input += synapse0x22f4670();
   input += synapse0x22f46b0();
   input += synapse0x22f46f0();
   input += synapse0x22f4730();
   input += synapse0x22f4770();
   input += synapse0x22f47b0();
   input += synapse0x22f47f0();
   input += synapse0x22f4830();
   input += synapse0x22f4870();
   input += synapse0x22f48b0();
   input += synapse0x22f4340();
   input += synapse0x22f4380();
   input += synapse0x22f4a00();
   input += synapse0x22f4a40();
   input += synapse0x22f4a80();
   input += synapse0x22f4ac0();
   input += synapse0x22f4b00();
   input += synapse0x22f4b40();
   input += synapse0x22f4b80();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f41b0() {
   double input = input0x22f41b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f4bc0() {
   double input = -0.64587;
   input += synapse0x22f4f00();
   input += synapse0x22f4f40();
   input += synapse0x22f4f80();
   input += synapse0x22f4fc0();
   input += synapse0x22f5000();
   input += synapse0x22f5040();
   input += synapse0x22f5080();
   input += synapse0x22f50c0();
   input += synapse0x22f5100();
   input += synapse0x22f5140();
   input += synapse0x22f5180();
   input += synapse0x22f51c0();
   input += synapse0x22f5200();
   input += synapse0x22f5240();
   input += synapse0x22f5280();
   input += synapse0x22f52c0();
   input += synapse0x22f4d50();
   input += synapse0x22f4d90();
   input += synapse0x22f5410();
   input += synapse0x22f5450();
   input += synapse0x22f5490();
   input += synapse0x22f54d0();
   input += synapse0x22f5510();
   input += synapse0x22f5550();
   input += synapse0x22f5590();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f4bc0() {
   double input = input0x22f4bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f55d0() {
   double input = -1.07084;
   input += synapse0x22f5910();
   input += synapse0x22f5950();
   input += synapse0x22f5990();
   input += synapse0x22f59d0();
   input += synapse0x22f5a10();
   input += synapse0x22f5a50();
   input += synapse0x22f5a90();
   input += synapse0x22f5ad0();
   input += synapse0x22f5b10();
   input += synapse0x22f5b50();
   input += synapse0x22f5b90();
   input += synapse0x22f5bd0();
   input += synapse0x22f5c10();
   input += synapse0x22f5c50();
   input += synapse0x22f5c90();
   input += synapse0x22f5cd0();
   input += synapse0x22f5760();
   input += synapse0x22f57a0();
   input += synapse0x22f5e20();
   input += synapse0x22f5e60();
   input += synapse0x22f5ea0();
   input += synapse0x22f5ee0();
   input += synapse0x22f5f20();
   input += synapse0x22f5f60();
   input += synapse0x22f5fa0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f55d0() {
   double input = input0x22f55d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f5fe0() {
   double input = 1.42884;
   input += synapse0x22f6320();
   input += synapse0x22f6360();
   input += synapse0x22f63a0();
   input += synapse0x22f63e0();
   input += synapse0x22f6420();
   input += synapse0x22f6460();
   input += synapse0x22f64a0();
   input += synapse0x22f64e0();
   input += synapse0x22f6520();
   input += synapse0x22f6560();
   input += synapse0x22f65a0();
   input += synapse0x22f65e0();
   input += synapse0x22f6620();
   input += synapse0x22f6660();
   input += synapse0x22f66a0();
   input += synapse0x22f66e0();
   input += synapse0x22f6170();
   input += synapse0x22f61b0();
   input += synapse0x22f6830();
   input += synapse0x22f6870();
   input += synapse0x22f68b0();
   input += synapse0x22f68f0();
   input += synapse0x22f6930();
   input += synapse0x22f6970();
   input += synapse0x22f69b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f5fe0() {
   double input = input0x22f5fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f69f0() {
   double input = -0.486429;
   input += synapse0x22f6d30();
   input += synapse0x22f6d70();
   input += synapse0x22f6db0();
   input += synapse0x22f6df0();
   input += synapse0x22f6e30();
   input += synapse0x22f6e70();
   input += synapse0x22f6eb0();
   input += synapse0x22f6ef0();
   input += synapse0x22f6f30();
   input += synapse0x22f6f70();
   input += synapse0x22f6fb0();
   input += synapse0x22f6ff0();
   input += synapse0x22f7030();
   input += synapse0x22f7070();
   input += synapse0x22f70b0();
   input += synapse0x22f70f0();
   input += synapse0x22f6b80();
   input += synapse0x22f6bc0();
   input += synapse0x22f7240();
   input += synapse0x22f7280();
   input += synapse0x22f72c0();
   input += synapse0x22f7300();
   input += synapse0x22f7340();
   input += synapse0x22f7380();
   input += synapse0x22f73c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f69f0() {
   double input = input0x22f69f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f7400() {
   double input = 0.142535;
   input += synapse0x22f7740();
   input += synapse0x22f7780();
   input += synapse0x22f77c0();
   input += synapse0x22f7800();
   input += synapse0x22f7840();
   input += synapse0x22f7880();
   input += synapse0x22f78c0();
   input += synapse0x22f7900();
   input += synapse0x22f7940();
   input += synapse0x22f7980();
   input += synapse0x22f79c0();
   input += synapse0x22f7a00();
   input += synapse0x22f7a40();
   input += synapse0x22f7a80();
   input += synapse0x22f7ac0();
   input += synapse0x22f7b00();
   input += synapse0x22f7590();
   input += synapse0x22f75d0();
   input += synapse0x22f7c50();
   input += synapse0x22f7c90();
   input += synapse0x22f7cd0();
   input += synapse0x22f7d10();
   input += synapse0x22f7d50();
   input += synapse0x22f7d90();
   input += synapse0x22f7dd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f7400() {
   double input = input0x22f7400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f7e10() {
   double input = -0.228518;
   input += synapse0x22f8150();
   input += synapse0x22f8190();
   input += synapse0x22f81d0();
   input += synapse0x22f8210();
   input += synapse0x22f8250();
   input += synapse0x22f8290();
   input += synapse0x22f82d0();
   input += synapse0x22f8310();
   input += synapse0x22f8350();
   input += synapse0x22f8390();
   input += synapse0x22f83d0();
   input += synapse0x22f8410();
   input += synapse0x22f8450();
   input += synapse0x22f8490();
   input += synapse0x22f84d0();
   input += synapse0x22f8510();
   input += synapse0x22f7fa0();
   input += synapse0x22f7fe0();
   input += synapse0x22f8660();
   input += synapse0x22f86a0();
   input += synapse0x22f86e0();
   input += synapse0x22f8720();
   input += synapse0x22f8760();
   input += synapse0x22f87a0();
   input += synapse0x22f87e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f7e10() {
   double input = input0x22f7e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f8820() {
   double input = -1.14249;
   input += synapse0x22f8b60();
   input += synapse0x22e6380();
   input += synapse0x22e63c0();
   input += synapse0x22e6780();
   input += synapse0x22e67c0();
   input += synapse0x22e6c00();
   input += synapse0x22e6c40();
   input += synapse0x22e7080();
   input += synapse0x22e70c0();
   input += synapse0x22e7590();
   input += synapse0x22e75d0();
   input += synapse0x22e7a10();
   input += synapse0x22e7a50();
   input += synapse0x22e7e90();
   input += synapse0x22e7ed0();
   input += synapse0x22e8410();
   input += synapse0x22e8450();
   input += synapse0x22e8890();
   input += synapse0x22e88d0();
   input += synapse0x22e8d10();
   input += synapse0x22e8d50();
   input += synapse0x22e9190();
   input += synapse0x22e91d0();
   input += synapse0x22e9610();
   input += synapse0x22e9650();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f8820() {
   double input = input0x22f8820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22f2e40() {
   double input = -1.49044;
   input += synapse0x22f2fd0();
   input += synapse0x22f3010();
   input += synapse0x22ea8b0();
   input += synapse0x22ea8f0();
   input += synapse0x22f89b0();
   input += synapse0x22f89f0();
   input += synapse0x22e5c60();
   input += synapse0x22e5ca0();
   input += synapse0x22eb450();
   input += synapse0x22eb490();
   input += synapse0x22eb8d0();
   input += synapse0x22eb910();
   input += synapse0x22ebd50();
   input += synapse0x22ebd90();
   input += synapse0x22ec1d0();
   input += synapse0x22ec210();
   input += synapse0x22ec650();
   input += synapse0x22ec690();
   input += synapse0x22ecad0();
   input += synapse0x22ecb10();
   input += synapse0x22ecf50();
   input += synapse0x22ecf90();
   input += synapse0x22ed3d0();
   input += synapse0x22ed410();
   input += synapse0x22e9b20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22f2e40() {
   double input = input0x22f2e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22fba90() {
   double input = 0.39875;
   input += synapse0x22e9b60();
   input += synapse0x22fbdd0();
   input += synapse0x22fbe10();
   input += synapse0x22fbe50();
   input += synapse0x22fbe90();
   input += synapse0x22fbed0();
   input += synapse0x22fbf10();
   input += synapse0x22fbf50();
   input += synapse0x22fbf90();
   input += synapse0x22fbfd0();
   input += synapse0x22fc010();
   input += synapse0x22fc050();
   input += synapse0x22fc090();
   input += synapse0x22fc0d0();
   input += synapse0x22fc110();
   input += synapse0x22fc150();
   input += synapse0x22fbc20();
   input += synapse0x22fbc60();
   input += synapse0x22fc2a0();
   input += synapse0x22fc2e0();
   input += synapse0x22fc320();
   input += synapse0x22fc360();
   input += synapse0x22fc3a0();
   input += synapse0x22fc3e0();
   input += synapse0x22fc420();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22fba90() {
   double input = input0x22fba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22fc460() {
   double input = 0.918789;
   input += synapse0x22fc7a0();
   input += synapse0x22fc7e0();
   input += synapse0x22fc820();
   input += synapse0x22fc860();
   input += synapse0x22fc8a0();
   input += synapse0x22fc8e0();
   input += synapse0x22fc920();
   input += synapse0x22fc960();
   input += synapse0x22fc9a0();
   input += synapse0x22fc9e0();
   input += synapse0x22fca20();
   input += synapse0x22fca60();
   input += synapse0x22fcaa0();
   input += synapse0x22fcae0();
   input += synapse0x22fcb20();
   input += synapse0x22fcb60();
   input += synapse0x22fc5f0();
   input += synapse0x22fc630();
   input += synapse0x22fccb0();
   input += synapse0x22fccf0();
   input += synapse0x22fcd30();
   input += synapse0x22fcd70();
   input += synapse0x22fcdb0();
   input += synapse0x22fcdf0();
   input += synapse0x22fce30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22fc460() {
   double input = input0x22fc460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22fce70() {
   double input = 0.572673;
   input += synapse0x22fd1b0();
   input += synapse0x22fd1f0();
   input += synapse0x22fd230();
   input += synapse0x22fd270();
   input += synapse0x22fd2b0();
   input += synapse0x22fd2f0();
   input += synapse0x22fd330();
   input += synapse0x22fd370();
   input += synapse0x22fd3b0();
   input += synapse0x22fd3f0();
   input += synapse0x22fd430();
   input += synapse0x22fd470();
   input += synapse0x22fd4b0();
   input += synapse0x22fd4f0();
   input += synapse0x22fd530();
   input += synapse0x22fd570();
   input += synapse0x22fd000();
   input += synapse0x22fd040();
   input += synapse0x22fd6c0();
   input += synapse0x22fd700();
   input += synapse0x22fd740();
   input += synapse0x22fd780();
   input += synapse0x22fd7c0();
   input += synapse0x22fd800();
   input += synapse0x22fd840();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22fce70() {
   double input = input0x22fce70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22fd880() {
   double input = -0.925389;
   input += synapse0x22fdbc0();
   input += synapse0x22fdc00();
   input += synapse0x22fdc40();
   input += synapse0x22fdc80();
   input += synapse0x22fdcc0();
   input += synapse0x22fdd00();
   input += synapse0x22fdd40();
   input += synapse0x22fdd80();
   input += synapse0x22fddc0();
   input += synapse0x22fde00();
   input += synapse0x22fde40();
   input += synapse0x22fde80();
   input += synapse0x22fdec0();
   input += synapse0x22fdf00();
   input += synapse0x22fdf40();
   input += synapse0x22fdf80();
   input += synapse0x22fda10();
   input += synapse0x22fda50();
   input += synapse0x22fe0d0();
   input += synapse0x22fe110();
   input += synapse0x22fe150();
   input += synapse0x22fe190();
   input += synapse0x22fe1d0();
   input += synapse0x22fe210();
   input += synapse0x22fe250();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22fd880() {
   double input = input0x22fd880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22fe290() {
   double input = -0.0321237;
   input += synapse0x22fe5d0();
   input += synapse0x22fe610();
   input += synapse0x22fe650();
   input += synapse0x22fe690();
   input += synapse0x22fe6d0();
   input += synapse0x22fe710();
   input += synapse0x22fe750();
   input += synapse0x22fe790();
   input += synapse0x22fe7d0();
   input += synapse0x22fe810();
   input += synapse0x22fe850();
   input += synapse0x22fe890();
   input += synapse0x22fe8d0();
   input += synapse0x22fe910();
   input += synapse0x22fe950();
   input += synapse0x22fe990();
   input += synapse0x22fe420();
   input += synapse0x22fe460();
   input += synapse0x22feae0();
   input += synapse0x22feb20();
   input += synapse0x22feb60();
   input += synapse0x22feba0();
   input += synapse0x22febe0();
   input += synapse0x22fec20();
   input += synapse0x22fec60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22fe290() {
   double input = input0x22fe290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22feca0() {
   double input = 0.886183;
   input += synapse0x22fefe0();
   input += synapse0x22ff020();
   input += synapse0x22ff060();
   input += synapse0x22ff0a0();
   input += synapse0x22ff0e0();
   input += synapse0x22ff120();
   input += synapse0x22ff160();
   input += synapse0x22ff1a0();
   input += synapse0x22ff1e0();
   input += synapse0x22ff220();
   input += synapse0x22ff260();
   input += synapse0x22ff2a0();
   input += synapse0x22ff2e0();
   input += synapse0x22ff320();
   input += synapse0x22ff360();
   input += synapse0x22ff3a0();
   input += synapse0x22fee30();
   input += synapse0x22fee70();
   input += synapse0x22ff4f0();
   input += synapse0x22ff530();
   input += synapse0x22ff570();
   input += synapse0x22ff5b0();
   input += synapse0x22ff5f0();
   input += synapse0x22ff630();
   input += synapse0x22ff670();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22feca0() {
   double input = input0x22feca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x22ff6b0() {
   double input = -0.699946;
   input += synapse0x22ff9f0();
   input += synapse0x22ffa30();
   input += synapse0x22ffa70();
   input += synapse0x22ffab0();
   input += synapse0x22ffaf0();
   input += synapse0x22ffb30();
   input += synapse0x22ffb70();
   input += synapse0x22ffbb0();
   input += synapse0x22ffbf0();
   input += synapse0x22ffc30();
   input += synapse0x22ffc70();
   input += synapse0x22ffcb0();
   input += synapse0x22ffcf0();
   input += synapse0x22ffd30();
   input += synapse0x22ffd70();
   input += synapse0x22ffdb0();
   input += synapse0x22ff840();
   input += synapse0x22ff880();
   input += synapse0x22fff00();
   input += synapse0x22fff40();
   input += synapse0x22fff80();
   input += synapse0x22fffc0();
   input += synapse0x2300000();
   input += synapse0x2300040();
   input += synapse0x2300080();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x22ff6b0() {
   double input = input0x22ff6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23000c0() {
   double input = 0.897585;
   input += synapse0x2300400();
   input += synapse0x2300440();
   input += synapse0x2300480();
   input += synapse0x23004c0();
   input += synapse0x2300500();
   input += synapse0x2300540();
   input += synapse0x2300580();
   input += synapse0x23005c0();
   input += synapse0x2300600();
   input += synapse0x2300640();
   input += synapse0x2300680();
   input += synapse0x23006c0();
   input += synapse0x2300700();
   input += synapse0x2300740();
   input += synapse0x2300780();
   input += synapse0x23007c0();
   input += synapse0x2300250();
   input += synapse0x2300290();
   input += synapse0x2300910();
   input += synapse0x2300950();
   input += synapse0x2300990();
   input += synapse0x23009d0();
   input += synapse0x2300a10();
   input += synapse0x2300a50();
   input += synapse0x2300a90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23000c0() {
   double input = input0x23000c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2300ad0() {
   double input = 0.793981;
   input += synapse0x2300cf0();
   input += synapse0x2300d30();
   input += synapse0x2300d70();
   input += synapse0x2300db0();
   input += synapse0x2300df0();
   input += synapse0x2300e30();
   input += synapse0x2300e70();
   input += synapse0x2300eb0();
   input += synapse0x2300ef0();
   input += synapse0x2300f30();
   input += synapse0x2300f70();
   input += synapse0x2300fb0();
   input += synapse0x2300ff0();
   input += synapse0x2301030();
   input += synapse0x2301070();
   input += synapse0x23010b0();
   input += synapse0x22e60c0();
   input += synapse0x22e6100();
   input += synapse0x2301200();
   input += synapse0x2301240();
   input += synapse0x2301280();
   input += synapse0x23012c0();
   input += synapse0x2301300();
   input += synapse0x2301340();
   input += synapse0x2301380();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2300ad0() {
   double input = input0x2300ad0();
   return (input * 43.5975)+176.83;
}

double nnFunc_25_25hi_3000ep__::synapse0x21f21f0() {
   return (neuron0x22e5080()*-1.74387);
}

double nnFunc_25_25hi_3000ep__::synapse0x22d44f0() {
   return (neuron0x22e53c0()*0.201502);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e64a0() {
   return (neuron0x22e5700()*0.456525);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e64e0() {
   return (neuron0x22e5a40()*2.49903);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6520() {
   return (neuron0x22e5d80()*-0.0763761);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e68a0() {
   return (neuron0x22e5080()*-0.14221);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e68e0() {
   return (neuron0x22e53c0()*-0.0115189);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6920() {
   return (neuron0x22e5700()*-0.00997583);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6960() {
   return (neuron0x22e5a40()*-4.10936);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e69a0() {
   return (neuron0x22e5d80()*2.15705);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6d20() {
   return (neuron0x22e5080()*-0.522192);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6d60() {
   return (neuron0x22e53c0()*0.0106219);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6da0() {
   return (neuron0x22e5700()*-0.717362);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6de0() {
   return (neuron0x22e5a40()*11.1206);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6e20() {
   return (neuron0x22e5d80()*-4.17328);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e71a0() {
   return (neuron0x22e5080()*-2.16157);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e71e0() {
   return (neuron0x22e53c0()*1.47815);
}

double nnFunc_25_25hi_3000ep__::synapse0x21e43e0() {
   return (neuron0x22e5700()*1.88695);
}

double nnFunc_25_25hi_3000ep__::synapse0x21e4420() {
   return (neuron0x22e5a40()*4.39613);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7330() {
   return (neuron0x22e5d80()*0.727047);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e76b0() {
   return (neuron0x22e5080()*-0.569337);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e76f0() {
   return (neuron0x22e53c0()*0.069629);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7730() {
   return (neuron0x22e5700()*-0.0105348);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7770() {
   return (neuron0x22e5a40()*-3.11268);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e77b0() {
   return (neuron0x22e5d80()*0.526198);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7b30() {
   return (neuron0x22e5080()*2.0858);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7b70() {
   return (neuron0x22e53c0()*0.423227);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7bb0() {
   return (neuron0x22e5700()*0.0282913);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7bf0() {
   return (neuron0x22e5a40()*-4.04457);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7c30() {
   return (neuron0x22e5d80()*-0.313745);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7fb0() {
   return (neuron0x22e5080()*-4.44993);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7ff0() {
   return (neuron0x22e53c0()*-0.152998);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8030() {
   return (neuron0x22e5700()*-1.30098);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7220() {
   return (neuron0x22e5a40()*-11.0389);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7260() {
   return (neuron0x22e5d80()*-1.12539);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8530() {
   return (neuron0x22e5080()*1.92596);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8570() {
   return (neuron0x22e53c0()*-1.86329);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e85b0() {
   return (neuron0x22e5700()*-2.23371);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e85f0() {
   return (neuron0x22e5a40()*-0.0958542);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8630() {
   return (neuron0x22e5d80()*-1.34264);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e89b0() {
   return (neuron0x22e5080()*4.30447);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e89f0() {
   return (neuron0x22e53c0()*-1.92231);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8a30() {
   return (neuron0x22e5700()*-2.65179);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8a70() {
   return (neuron0x22e5a40()*-6.30822);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8ab0() {
   return (neuron0x22e5d80()*-1.22265);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8e30() {
   return (neuron0x22e5080()*1.22855);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8e70() {
   return (neuron0x22e53c0()*-1.42195);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8eb0() {
   return (neuron0x22e5700()*-0.139763);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8ef0() {
   return (neuron0x22e5a40()*-0.716968);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8f30() {
   return (neuron0x22e5d80()*-1.23338);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e92b0() {
   return (neuron0x22e5080()*-0.126373);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e92f0() {
   return (neuron0x22e53c0()*0.0035902);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9330() {
   return (neuron0x22e5700()*0.325478);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9370() {
   return (neuron0x22e5a40()*13.8495);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e93b0() {
   return (neuron0x22e5d80()*-9.15556);
}

double nnFunc_25_25hi_3000ep__::synapse0x21e4230() {
   return (neuron0x22e5080()*2.86762);
}

double nnFunc_25_25hi_3000ep__::synapse0x21e4270() {
   return (neuron0x22e53c0()*-1.04857);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9840() {
   return (neuron0x22e5700()*-0.583402);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9880() {
   return (neuron0x22e5a40()*0.772098);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e98c0() {
   return (neuron0x22e5d80()*-1.13279);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9c40() {
   return (neuron0x22e5080()*9.29107);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9c80() {
   return (neuron0x22e53c0()*0.0533435);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9cc0() {
   return (neuron0x22e5700()*3.71379);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9d00() {
   return (neuron0x22e5a40()*10.5747);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9d40() {
   return (neuron0x22e5d80()*5.99827);
}

double nnFunc_25_25hi_3000ep__::synapse0x21e4a00() {
   return (neuron0x22e5080()*0.0361259);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8200() {
   return (neuron0x22e53c0()*-0.315529);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8240() {
   return (neuron0x22e5700()*-0.324363);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea190() {
   return (neuron0x22e5a40()*-3.34654);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea1d0() {
   return (neuron0x22e5d80()*-0.914307);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea550() {
   return (neuron0x22e5080()*-1.08128);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea590() {
   return (neuron0x22e53c0()*0.576048);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea5d0() {
   return (neuron0x22e5700()*1.41948);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea610() {
   return (neuron0x22e5a40()*2.47473);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea650() {
   return (neuron0x22e5d80()*1.10394);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea9d0() {
   return (neuron0x22e5080()*6.53449);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e52a0() {
   return (neuron0x22e53c0()*-0.0298908);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e52e0() {
   return (neuron0x22e5700()*3.0708);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e55e0() {
   return (neuron0x22e5a40()*5.09618);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e5620() {
   return (neuron0x22e5d80()*2.32961);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb0f0() {
   return (neuron0x22e5080()*0.612697);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb130() {
   return (neuron0x22e53c0()*-0.0255448);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb170() {
   return (neuron0x22e5700()*0.357685);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb1b0() {
   return (neuron0x22e5a40()*1.60963);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb1f0() {
   return (neuron0x22e5d80()*0.451116);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb570() {
   return (neuron0x22e5080()*2.73336);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb5b0() {
   return (neuron0x22e53c0()*-0.400344);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb5f0() {
   return (neuron0x22e5700()*-0.690974);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb630() {
   return (neuron0x22e5a40()*-0.932339);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb670() {
   return (neuron0x22e5d80()*-0.87069);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb9f0() {
   return (neuron0x22e5080()*6.57956);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eba30() {
   return (neuron0x22e53c0()*0.0738855);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eba70() {
   return (neuron0x22e5700()*3.82258);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebab0() {
   return (neuron0x22e5a40()*-1.98596);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebaf0() {
   return (neuron0x22e5d80()*5.45363);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebe70() {
   return (neuron0x22e5080()*0.485825);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebeb0() {
   return (neuron0x22e53c0()*0.0186208);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebef0() {
   return (neuron0x22e5700()*-0.00341623);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebf30() {
   return (neuron0x22e5a40()*-0.28962);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebf70() {
   return (neuron0x22e5d80()*-0.505659);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec2f0() {
   return (neuron0x22e5080()*0.0724785);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec330() {
   return (neuron0x22e53c0()*0.00786871);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec370() {
   return (neuron0x22e5700()*0.0296707);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec3b0() {
   return (neuron0x22e5a40()*-8.60189);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec3f0() {
   return (neuron0x22e5d80()*7.20451);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec770() {
   return (neuron0x22e5080()*-0.121006);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec7b0() {
   return (neuron0x22e53c0()*-0.0157856);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec7f0() {
   return (neuron0x22e5700()*0.181251);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec830() {
   return (neuron0x22e5a40()*18.9952);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec870() {
   return (neuron0x22e5d80()*-10.3303);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecbf0() {
   return (neuron0x22e5080()*2.05179);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecc30() {
   return (neuron0x22e53c0()*-0.188898);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecc70() {
   return (neuron0x22e5700()*-0.902499);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eccb0() {
   return (neuron0x22e5a40()*0.441902);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eccf0() {
   return (neuron0x22e5d80()*-0.0801718);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed070() {
   return (neuron0x22e5080()*-0.475366);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed0b0() {
   return (neuron0x22e53c0()*-0.00951135);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed0f0() {
   return (neuron0x22e5700()*-0.0737952);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed130() {
   return (neuron0x22e5a40()*-4.25549);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed170() {
   return (neuron0x22e5d80()*3.00839);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed4f0() {
   return (neuron0x22e5080()*-0.856709);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed530() {
   return (neuron0x22e53c0()*0.0155824);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed570() {
   return (neuron0x22e5700()*-0.867231);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed5b0() {
   return (neuron0x22e5a40()*1.64938);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed5f0() {
   return (neuron0x22e5d80()*-0.355575);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7110() {
   return (neuron0x22e61f0()*0.263426);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7150() {
   return (neuron0x22e6560()*0.227543);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7620() {
   return (neuron0x22e69e0()*0.140543);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7660() {
   return (neuron0x22e6e60()*0.931729);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7aa0() {
   return (neuron0x22e7370()*-0.087063);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7ae0() {
   return (neuron0x22e77f0()*-0.0623255);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7f20() {
   return (neuron0x22e7c70()*0.827269);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7f60() {
   return (neuron0x22e8280()*0.500369);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e84a0() {
   return (neuron0x22e8670()*-1.15954);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e84e0() {
   return (neuron0x22e8af0()*0.54278);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8920() {
   return (neuron0x22e8f70()*-0.707961);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8960() {
   return (neuron0x22e93f0()*-0.112364);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8da0() {
   return (neuron0x22e9900()*0.282335);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8de0() {
   return (neuron0x22e8070()*-0.341781);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9220() {
   return (neuron0x22ea210()*0.388421);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9260() {
   return (neuron0x22ea690()*0.509481);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e96a0() {
   return (neuron0x22eaf60()*-0.96744);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e96e0() {
   return (neuron0x22eb230()*0.162814);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9bb0() {
   return (neuron0x22eb6b0()*0.442301);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9bf0() {
   return (neuron0x22ebb30()*0.428559);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea4c0() {
   return (neuron0x22ebfb0()*-0.438934);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea500() {
   return (neuron0x22ec430()*-1.54494);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea940() {
   return (neuron0x22ec8b0()*-0.51224);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea980() {
   return (neuron0x22ecd30()*0.224619);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e5fa0() {
   return (neuron0x22ed1b0()*1.18399);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea020() {
   return (neuron0x22e61f0()*0.958652);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea060() {
   return (neuron0x22e6560()*1.95899);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea0a0() {
   return (neuron0x22e69e0()*1.69245);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea0e0() {
   return (neuron0x22e6e60()*0.506459);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea120() {
   return (neuron0x22e7370()*0.810437);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e5fe0() {
   return (neuron0x22e77f0()*0.542516);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec260() {
   return (neuron0x22e7c70()*0.385998);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec2a0() {
   return (neuron0x22e8280()*0.556366);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec6e0() {
   return (neuron0x22e8670()*0.36229);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec720() {
   return (neuron0x22e8af0()*-0.928353);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecb60() {
   return (neuron0x22e8f70()*-1.78854);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecba0() {
   return (neuron0x22e93f0()*0.0666788);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecfe0() {
   return (neuron0x22e9900()*0.946676);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed020() {
   return (neuron0x22e8070()*0.530724);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed460() {
   return (neuron0x22ea210()*1.70699);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed4a0() {
   return (neuron0x22ea690()*1.89747);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6410() {
   return (neuron0x22eaf60()*0.900653);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6450() {
   return (neuron0x22eb230()*0.461294);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb4e0() {
   return (neuron0x22eb6b0()*0.217518);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb520() {
   return (neuron0x22ebb30()*-0.179525);
}

double nnFunc_25_25hi_3000ep__::synapse0x21f22c0() {
   return (neuron0x22ebfb0()*1.59223);
}

double nnFunc_25_25hi_3000ep__::synapse0x21f2300() {
   return (neuron0x22ec430()*1.92836);
}

double nnFunc_25_25hi_3000ep__::synapse0x22efb70() {
   return (neuron0x22ec8b0()*-0.277522);
}

double nnFunc_25_25hi_3000ep__::synapse0x22efbb0() {
   return (neuron0x22ecd30()*1.308);
}

double nnFunc_25_25hi_3000ep__::synapse0x22efbf0() {
   return (neuron0x22ed1b0()*0.0420215);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9730() {
   return (neuron0x22e61f0()*0.676115);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9770() {
   return (neuron0x22e6560()*0.469501);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e97b0() {
   return (neuron0x22e69e0()*-0.994762);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e97f0() {
   return (neuron0x22e6e60()*-0.162867);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0180() {
   return (neuron0x22e7370()*0.304421);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f01c0() {
   return (neuron0x22e77f0()*0.573252);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0200() {
   return (neuron0x22e7c70()*0.0104229);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0240() {
   return (neuron0x22e8280()*0.233413);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0280() {
   return (neuron0x22e8670()*0.375093);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f02c0() {
   return (neuron0x22e8af0()*0.344292);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0300() {
   return (neuron0x22e8f70()*-0.488667);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0340() {
   return (neuron0x22e93f0()*-0.287185);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0380() {
   return (neuron0x22e9900()*-0.929382);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f03c0() {
   return (neuron0x22e8070()*0.077876);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0400() {
   return (neuron0x22ea210()*-0.00388601);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0440() {
   return (neuron0x22ea690()*0.805201);
}

double nnFunc_25_25hi_3000ep__::synapse0x22efdc0() {
   return (neuron0x22eaf60()*-0.486767);
}

double nnFunc_25_25hi_3000ep__::synapse0x22efe00() {
   return (neuron0x22eb230()*-0.110406);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0590() {
   return (neuron0x22eb6b0()*-0.119531);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f05d0() {
   return (neuron0x22ebb30()*-0.0272927);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0610() {
   return (neuron0x22ebfb0()*-1.56267);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0650() {
   return (neuron0x22ec430()*-1.95672);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0690() {
   return (neuron0x22ec8b0()*-0.10862);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f06d0() {
   return (neuron0x22ecd30()*0.926059);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0710() {
   return (neuron0x22ed1b0()*-0.289257);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0a90() {
   return (neuron0x22e61f0()*0.475691);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0ad0() {
   return (neuron0x22e6560()*-0.257374);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0b10() {
   return (neuron0x22e69e0()*-0.506661);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0b50() {
   return (neuron0x22e6e60()*0.970387);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0b90() {
   return (neuron0x22e7370()*-0.56437);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0bd0() {
   return (neuron0x22e77f0()*-0.0884881);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0c10() {
   return (neuron0x22e7c70()*0.153229);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0c50() {
   return (neuron0x22e8280()*0.0881796);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0c90() {
   return (neuron0x22e8670()*-1.30523);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0cd0() {
   return (neuron0x22e8af0()*0.868016);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0d10() {
   return (neuron0x22e8f70()*0.718045);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0d50() {
   return (neuron0x22e93f0()*-0.386542);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0d90() {
   return (neuron0x22e9900()*0.972855);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0dd0() {
   return (neuron0x22e8070()*-0.229003);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0e10() {
   return (neuron0x22ea210()*0.778862);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0e50() {
   return (neuron0x22ea690()*-0.134011);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f08e0() {
   return (neuron0x22eaf60()*0.204902);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0920() {
   return (neuron0x22eb230()*0.317661);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0fa0() {
   return (neuron0x22eb6b0()*1.04473);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f0fe0() {
   return (neuron0x22ebb30()*0.74094);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1020() {
   return (neuron0x22ebfb0()*-0.475393);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1060() {
   return (neuron0x22ec430()*-0.599545);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f10a0() {
   return (neuron0x22ec8b0()*0.248068);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f10e0() {
   return (neuron0x22ecd30()*0.746354);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1120() {
   return (neuron0x22ed1b0()*1.15977);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f14a0() {
   return (neuron0x22e61f0()*-0.598776);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f14e0() {
   return (neuron0x22e6560()*0.634194);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1520() {
   return (neuron0x22e69e0()*0.159679);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1560() {
   return (neuron0x22e6e60()*-1.81614);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f15a0() {
   return (neuron0x22e7370()*0.425078);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f15e0() {
   return (neuron0x22e77f0()*0.470607);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1620() {
   return (neuron0x22e7c70()*0.0703789);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1660() {
   return (neuron0x22e8280()*-1.47764);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f16a0() {
   return (neuron0x22e8670()*1.4209);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f16e0() {
   return (neuron0x22e8af0()*-0.822757);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1720() {
   return (neuron0x22e8f70()*-3.04433);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1760() {
   return (neuron0x22e93f0()*-0.0345974);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f17a0() {
   return (neuron0x22e9900()*-2.38621);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f17e0() {
   return (neuron0x22e8070()*1.17211);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1820() {
   return (neuron0x22ea210()*-2.37331);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1860() {
   return (neuron0x22ea690()*-1.60758);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f12f0() {
   return (neuron0x22eaf60()*-0.936084);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1330() {
   return (neuron0x22eb230()*-0.836555);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f19b0() {
   return (neuron0x22eb6b0()*-4.56368);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f19f0() {
   return (neuron0x22ebb30()*-1.35521);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1a30() {
   return (neuron0x22ebfb0()*4.00791);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1a70() {
   return (neuron0x22ec430()*9.54737);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1ab0() {
   return (neuron0x22ec8b0()*-0.431055);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1af0() {
   return (neuron0x22ecd30()*-0.541458);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1b30() {
   return (neuron0x22ed1b0()*-0.738672);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1eb0() {
   return (neuron0x22e61f0()*1.18022);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1ef0() {
   return (neuron0x22e6560()*0.388047);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1f30() {
   return (neuron0x22e69e0()*1.15237);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1f70() {
   return (neuron0x22e6e60()*0.226657);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1fb0() {
   return (neuron0x22e7370()*-0.107067);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1ff0() {
   return (neuron0x22e77f0()*0.441906);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f2030() {
   return (neuron0x22e7c70()*-0.210023);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef250() {
   return (neuron0x22e8280()*0.376143);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef290() {
   return (neuron0x22e8670()*0.514095);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef2d0() {
   return (neuron0x22e8af0()*-0.665053);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef310() {
   return (neuron0x22e8f70()*-0.843554);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef350() {
   return (neuron0x22e93f0()*0.338855);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef390() {
   return (neuron0x22e9900()*0.172872);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef3d0() {
   return (neuron0x22e8070()*0.510018);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef410() {
   return (neuron0x22ea210()*0.522144);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef450() {
   return (neuron0x22ea690()*0.339079);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1d00() {
   return (neuron0x22eaf60()*0.606969);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f1d40() {
   return (neuron0x22eb230()*0.31729);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef5a0() {
   return (neuron0x22eb6b0()*0.146553);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef5e0() {
   return (neuron0x22ebb30()*-0.532537);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef620() {
   return (neuron0x22ebfb0()*0.81382);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef660() {
   return (neuron0x22ec430()*1.34464);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef6a0() {
   return (neuron0x22ec8b0()*-0.135737);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef6e0() {
   return (neuron0x22ecd30()*0.55407);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef720() {
   return (neuron0x22ed1b0()*0.620921);
}

double nnFunc_25_25hi_3000ep__::synapse0x22efa10() {
   return (neuron0x22e61f0()*-0.455823);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3110() {
   return (neuron0x22e6560()*-0.180909);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3150() {
   return (neuron0x22e69e0()*0.497221);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3190() {
   return (neuron0x22e6e60()*-1.11864);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f31d0() {
   return (neuron0x22e7370()*0.759023);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3210() {
   return (neuron0x22e77f0()*-0.401486);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3250() {
   return (neuron0x22e7c70()*-0.276449);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3290() {
   return (neuron0x22e8280()*-0.161557);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f32d0() {
   return (neuron0x22e8670()*0.52629);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3310() {
   return (neuron0x22e8af0()*-0.997349);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3350() {
   return (neuron0x22e8f70()*-1.3587);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3390() {
   return (neuron0x22e93f0()*0.0763413);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f33d0() {
   return (neuron0x22e9900()*-1.96988);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3410() {
   return (neuron0x22e8070()*0.683261);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3450() {
   return (neuron0x22ea210()*-1.22545);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3490() {
   return (neuron0x22ea690()*-0.193095);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef8f0() {
   return (neuron0x22eaf60()*-0.228147);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ef930() {
   return (neuron0x22eb230()*-0.409086);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f35e0() {
   return (neuron0x22eb6b0()*-1.51469);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3620() {
   return (neuron0x22ebb30()*-0.920863);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3660() {
   return (neuron0x22ebfb0()*0.504779);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f36a0() {
   return (neuron0x22ec430()*0.342857);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f36e0() {
   return (neuron0x22ec8b0()*-0.510522);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3720() {
   return (neuron0x22ecd30()*-0.2531);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3760() {
   return (neuron0x22ed1b0()*-2.07696);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3ae0() {
   return (neuron0x22e61f0()*0.402652);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3b20() {
   return (neuron0x22e6560()*-0.00406623);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3b60() {
   return (neuron0x22e69e0()*0.494087);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3ba0() {
   return (neuron0x22e6e60()*0.166713);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3be0() {
   return (neuron0x22e7370()*0.00183759);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3c20() {
   return (neuron0x22e77f0()*-0.331274);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3c60() {
   return (neuron0x22e7c70()*0.134765);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3ca0() {
   return (neuron0x22e8280()*0.105817);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3ce0() {
   return (neuron0x22e8670()*0.584833);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3d20() {
   return (neuron0x22e8af0()*0.825208);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3d60() {
   return (neuron0x22e8f70()*0.398831);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3da0() {
   return (neuron0x22e93f0()*-0.0991982);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3de0() {
   return (neuron0x22e9900()*0.554946);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3e20() {
   return (neuron0x22e8070()*0.0682327);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3e60() {
   return (neuron0x22ea210()*0.819723);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3ea0() {
   return (neuron0x22ea690()*0.11385);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3930() {
   return (neuron0x22eaf60()*-0.0090125);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3970() {
   return (neuron0x22eb230()*0.423871);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3ff0() {
   return (neuron0x22eb6b0()*0.501317);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4030() {
   return (neuron0x22ebb30()*0.696483);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4070() {
   return (neuron0x22ebfb0()*0.921839);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f40b0() {
   return (neuron0x22ec430()*0.168372);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f40f0() {
   return (neuron0x22ec8b0()*0.513407);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4130() {
   return (neuron0x22ecd30()*0.495548);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4170() {
   return (neuron0x22ed1b0()*0.288795);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f44f0() {
   return (neuron0x22e61f0()*-0.186522);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4530() {
   return (neuron0x22e6560()*-1.28377);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4570() {
   return (neuron0x22e69e0()*0.84123);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f45b0() {
   return (neuron0x22e6e60()*-0.224892);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f45f0() {
   return (neuron0x22e7370()*1.1839);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4630() {
   return (neuron0x22e77f0()*-0.314348);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4670() {
   return (neuron0x22e7c70()*1.00489);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f46b0() {
   return (neuron0x22e8280()*0.26188);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f46f0() {
   return (neuron0x22e8670()*0.963109);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4730() {
   return (neuron0x22e8af0()*-0.251347);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4770() {
   return (neuron0x22e8f70()*0.492863);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f47b0() {
   return (neuron0x22e93f0()*0.268052);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f47f0() {
   return (neuron0x22e9900()*-1.22086);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4830() {
   return (neuron0x22e8070()*0.349233);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4870() {
   return (neuron0x22ea210()*-0.0206515);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f48b0() {
   return (neuron0x22ea690()*-0.670512);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4340() {
   return (neuron0x22eaf60()*-0.0328341);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4380() {
   return (neuron0x22eb230()*0.0484261);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4a00() {
   return (neuron0x22eb6b0()*-1.51277);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4a40() {
   return (neuron0x22ebb30()*-0.530547);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4a80() {
   return (neuron0x22ebfb0()*-1.9209);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4ac0() {
   return (neuron0x22ec430()*0.937881);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4b00() {
   return (neuron0x22ec8b0()*0.182088);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4b40() {
   return (neuron0x22ecd30()*0.748656);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4b80() {
   return (neuron0x22ed1b0()*-1.46981);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4f00() {
   return (neuron0x22e61f0()*-0.959506);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4f40() {
   return (neuron0x22e6560()*-0.0828072);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4f80() {
   return (neuron0x22e69e0()*-0.808411);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4fc0() {
   return (neuron0x22e6e60()*0.3787);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5000() {
   return (neuron0x22e7370()*-0.151936);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5040() {
   return (neuron0x22e77f0()*0.0282323);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5080() {
   return (neuron0x22e7c70()*0.359091);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f50c0() {
   return (neuron0x22e8280()*-0.238532);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5100() {
   return (neuron0x22e8670()*-0.89474);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5140() {
   return (neuron0x22e8af0()*0.59376);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5180() {
   return (neuron0x22e8f70()*0.879177);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f51c0() {
   return (neuron0x22e93f0()*0.409035);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5200() {
   return (neuron0x22e9900()*0.207383);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5240() {
   return (neuron0x22e8070()*-1.01955);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5280() {
   return (neuron0x22ea210()*-0.350126);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f52c0() {
   return (neuron0x22ea690()*-0.632243);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4d50() {
   return (neuron0x22eaf60()*-1.47777);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f4d90() {
   return (neuron0x22eb230()*-0.195143);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5410() {
   return (neuron0x22eb6b0()*-0.682665);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5450() {
   return (neuron0x22ebb30()*0.819051);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5490() {
   return (neuron0x22ebfb0()*-0.125076);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f54d0() {
   return (neuron0x22ec430()*-1.78093);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5510() {
   return (neuron0x22ec8b0()*-0.504931);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5550() {
   return (neuron0x22ecd30()*-0.44496);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5590() {
   return (neuron0x22ed1b0()*0.725921);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5910() {
   return (neuron0x22e61f0()*-0.532364);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5950() {
   return (neuron0x22e6560()*-0.612561);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5990() {
   return (neuron0x22e69e0()*-0.13051);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f59d0() {
   return (neuron0x22e6e60()*-1.90621);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5a10() {
   return (neuron0x22e7370()*0.794927);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5a50() {
   return (neuron0x22e77f0()*0.248424);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5a90() {
   return (neuron0x22e7c70()*-0.736347);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5ad0() {
   return (neuron0x22e8280()*-0.178214);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5b10() {
   return (neuron0x22e8670()*0.91809);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5b50() {
   return (neuron0x22e8af0()*-1.03029);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5b90() {
   return (neuron0x22e8f70()*-1.60058);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5bd0() {
   return (neuron0x22e93f0()*0.032557);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5c10() {
   return (neuron0x22e9900()*-2.24616);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5c50() {
   return (neuron0x22e8070()*0.89523);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5c90() {
   return (neuron0x22ea210()*-0.701566);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5cd0() {
   return (neuron0x22ea690()*-1.134);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5760() {
   return (neuron0x22eaf60()*0.027602);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f57a0() {
   return (neuron0x22eb230()*-0.778712);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5e20() {
   return (neuron0x22eb6b0()*-1.42479);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5e60() {
   return (neuron0x22ebb30()*-0.595108);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5ea0() {
   return (neuron0x22ebfb0()*0.818385);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5ee0() {
   return (neuron0x22ec430()*0.291311);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5f20() {
   return (neuron0x22ec8b0()*0.355562);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5f60() {
   return (neuron0x22ecd30()*-0.0199676);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f5fa0() {
   return (neuron0x22ed1b0()*-1.76304);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6320() {
   return (neuron0x22e61f0()*0.92219);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6360() {
   return (neuron0x22e6560()*-2.39171);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f63a0() {
   return (neuron0x22e69e0()*7.11108);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f63e0() {
   return (neuron0x22e6e60()*1.60168);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6420() {
   return (neuron0x22e7370()*-1.14288);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6460() {
   return (neuron0x22e77f0()*-0.977791);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f64a0() {
   return (neuron0x22e7c70()*0.443101);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f64e0() {
   return (neuron0x22e8280()*-1.01846);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6520() {
   return (neuron0x22e8670()*-1.80246);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6560() {
   return (neuron0x22e8af0()*2.43348);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f65a0() {
   return (neuron0x22e8f70()*10.6119);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f65e0() {
   return (neuron0x22e93f0()*-0.299275);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6620() {
   return (neuron0x22e9900()*-4.60195);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6660() {
   return (neuron0x22e8070()*-1.56229);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f66a0() {
   return (neuron0x22ea210()*-0.224818);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f66e0() {
   return (neuron0x22ea690()*-6.74738);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6170() {
   return (neuron0x22eaf60()*2.21747);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f61b0() {
   return (neuron0x22eb230()*-0.174679);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6830() {
   return (neuron0x22eb6b0()*-7.55706);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6870() {
   return (neuron0x22ebb30()*-0.292732);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f68b0() {
   return (neuron0x22ebfb0()*-9.64219);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f68f0() {
   return (neuron0x22ec430()*4.35511);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6930() {
   return (neuron0x22ec8b0()*-0.808136);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6970() {
   return (neuron0x22ecd30()*-2.97532);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f69b0() {
   return (neuron0x22ed1b0()*1.44118);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6d30() {
   return (neuron0x22e61f0()*-0.109117);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6d70() {
   return (neuron0x22e6560()*-0.660289);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6db0() {
   return (neuron0x22e69e0()*-1.52092);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6df0() {
   return (neuron0x22e6e60()*-0.533029);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6e30() {
   return (neuron0x22e7370()*2.54116);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6e70() {
   return (neuron0x22e77f0()*-0.247052);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6eb0() {
   return (neuron0x22e7c70()*0.415577);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6ef0() {
   return (neuron0x22e8280()*-0.171562);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6f30() {
   return (neuron0x22e8670()*0.33612);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6f70() {
   return (neuron0x22e8af0()*-0.0989852);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6fb0() {
   return (neuron0x22e8f70()*-2.97172);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6ff0() {
   return (neuron0x22e93f0()*-0.223875);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7030() {
   return (neuron0x22e9900()*-3.41252);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7070() {
   return (neuron0x22e8070()*0.87028);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f70b0() {
   return (neuron0x22ea210()*-0.712625);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f70f0() {
   return (neuron0x22ea690()*-2.0779);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6b80() {
   return (neuron0x22eaf60()*-1.48105);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f6bc0() {
   return (neuron0x22eb230()*-0.579209);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7240() {
   return (neuron0x22eb6b0()*-1.78371);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7280() {
   return (neuron0x22ebb30()*-0.349072);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f72c0() {
   return (neuron0x22ebfb0()*-0.925268);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7300() {
   return (neuron0x22ec430()*-0.725618);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7340() {
   return (neuron0x22ec8b0()*-0.11393);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7380() {
   return (neuron0x22ecd30()*-0.364188);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f73c0() {
   return (neuron0x22ed1b0()*-2.2258);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7740() {
   return (neuron0x22e61f0()*-0.217776);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7780() {
   return (neuron0x22e6560()*-1.22313);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f77c0() {
   return (neuron0x22e69e0()*3.3673);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7800() {
   return (neuron0x22e6e60()*0.672761);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7840() {
   return (neuron0x22e7370()*-0.702097);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7880() {
   return (neuron0x22e77f0()*-0.238885);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f78c0() {
   return (neuron0x22e7c70()*-0.0750282);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7900() {
   return (neuron0x22e8280()*0.315543);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7940() {
   return (neuron0x22e8670()*-1.0975);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7980() {
   return (neuron0x22e8af0()*-0.272857);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f79c0() {
   return (neuron0x22e8f70()*1.83729);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7a00() {
   return (neuron0x22e93f0()*0.218175);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7a40() {
   return (neuron0x22e9900()*-0.544765);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7a80() {
   return (neuron0x22e8070()*-0.921964);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7ac0() {
   return (neuron0x22ea210()*-0.167169);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7b00() {
   return (neuron0x22ea690()*-0.526106);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7590() {
   return (neuron0x22eaf60()*0.246971);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f75d0() {
   return (neuron0x22eb230()*-0.14812);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7c50() {
   return (neuron0x22eb6b0()*-0.221529);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7c90() {
   return (neuron0x22ebb30()*0.293353);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7cd0() {
   return (neuron0x22ebfb0()*-2.16281);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7d10() {
   return (neuron0x22ec430()*-0.76832);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7d50() {
   return (neuron0x22ec8b0()*0.0361563);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7d90() {
   return (neuron0x22ecd30()*0.0988523);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7dd0() {
   return (neuron0x22ed1b0()*1.08461);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8150() {
   return (neuron0x22e61f0()*-0.929642);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8190() {
   return (neuron0x22e6560()*0.615984);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f81d0() {
   return (neuron0x22e69e0()*1.031);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8210() {
   return (neuron0x22e6e60()*-0.457711);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8250() {
   return (neuron0x22e7370()*-1.1038);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8290() {
   return (neuron0x22e77f0()*-0.566004);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f82d0() {
   return (neuron0x22e7c70()*-0.833053);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8310() {
   return (neuron0x22e8280()*-0.0297334);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8350() {
   return (neuron0x22e8670()*-0.453125);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8390() {
   return (neuron0x22e8af0()*-0.382449);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f83d0() {
   return (neuron0x22e8f70()*-0.138821);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8410() {
   return (neuron0x22e93f0()*0.236577);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8450() {
   return (neuron0x22e9900()*-0.116255);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8490() {
   return (neuron0x22e8070()*-1.13669);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f84d0() {
   return (neuron0x22ea210()*-0.486227);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8510() {
   return (neuron0x22ea690()*1.16732);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7fa0() {
   return (neuron0x22eaf60()*0.0817395);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f7fe0() {
   return (neuron0x22eb230()*0.348902);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8660() {
   return (neuron0x22eb6b0()*-1.02057);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f86a0() {
   return (neuron0x22ebb30()*0.1499);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f86e0() {
   return (neuron0x22ebfb0()*-0.40681);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8720() {
   return (neuron0x22ec430()*0.476961);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8760() {
   return (neuron0x22ec8b0()*0.0116698);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f87a0() {
   return (neuron0x22ecd30()*-0.795505);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f87e0() {
   return (neuron0x22ed1b0()*0.0102772);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f8b60() {
   return (neuron0x22e61f0()*-0.226643);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6380() {
   return (neuron0x22e6560()*-3.19935);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e63c0() {
   return (neuron0x22e69e0()*12.7626);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6780() {
   return (neuron0x22e6e60()*-0.991609);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e67c0() {
   return (neuron0x22e7370()*-6.25254);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6c00() {
   return (neuron0x22e77f0()*-0.185526);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6c40() {
   return (neuron0x22e7c70()*-4.12593);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7080() {
   return (neuron0x22e8280()*-0.938464);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e70c0() {
   return (neuron0x22e8670()*1.5971);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7590() {
   return (neuron0x22e8af0()*-0.922385);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e75d0() {
   return (neuron0x22e8f70()*13.4675);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7a10() {
   return (neuron0x22e93f0()*-0.0826039);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7a50() {
   return (neuron0x22e9900()*-12.8483);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7e90() {
   return (neuron0x22e8070()*0.0250016);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e7ed0() {
   return (neuron0x22ea210()*-0.992534);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8410() {
   return (neuron0x22ea690()*-12.2986);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8450() {
   return (neuron0x22eaf60()*0.813203);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8890() {
   return (neuron0x22eb230()*-0.542943);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e88d0() {
   return (neuron0x22eb6b0()*-7.7823);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8d10() {
   return (neuron0x22ebb30()*-0.896425);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e8d50() {
   return (neuron0x22ebfb0()*-3.81545);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9190() {
   return (neuron0x22ec430()*19.8854);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e91d0() {
   return (neuron0x22ec8b0()*-0.296432);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9610() {
   return (neuron0x22ecd30()*0.318089);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9650() {
   return (neuron0x22ed1b0()*-3.14);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f2fd0() {
   return (neuron0x22e61f0()*-1.2061);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f3010() {
   return (neuron0x22e6560()*-0.544133);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea8b0() {
   return (neuron0x22e69e0()*-0.609361);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ea8f0() {
   return (neuron0x22e6e60()*-1.74265);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f89b0() {
   return (neuron0x22e7370()*0.35833);
}

double nnFunc_25_25hi_3000ep__::synapse0x22f89f0() {
   return (neuron0x22e77f0()*0.484896);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e5c60() {
   return (neuron0x22e7c70()*-0.0674637);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e5ca0() {
   return (neuron0x22e8280()*-0.885393);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb450() {
   return (neuron0x22e8670()*0.558259);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb490() {
   return (neuron0x22e8af0()*-1.77395);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb8d0() {
   return (neuron0x22e8f70()*-1.80773);
}

double nnFunc_25_25hi_3000ep__::synapse0x22eb910() {
   return (neuron0x22e93f0()*-0.139668);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebd50() {
   return (neuron0x22e9900()*-2.65128);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ebd90() {
   return (neuron0x22e8070()*-0.326691);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec1d0() {
   return (neuron0x22ea210()*-1.66456);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec210() {
   return (neuron0x22ea690()*-0.242411);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec650() {
   return (neuron0x22eaf60()*0.115469);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ec690() {
   return (neuron0x22eb230()*0.228538);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecad0() {
   return (neuron0x22eb6b0()*-1.59975);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecb10() {
   return (neuron0x22ebb30()*-1.43865);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecf50() {
   return (neuron0x22ebfb0()*0.172362);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ecf90() {
   return (neuron0x22ec430()*0.682311);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed3d0() {
   return (neuron0x22ec8b0()*-0.762326);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ed410() {
   return (neuron0x22ecd30()*-0.24379);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9b20() {
   return (neuron0x22ed1b0()*-1.41561);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e9b60() {
   return (neuron0x22e61f0()*0.355453);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbdd0() {
   return (neuron0x22e6560()*-0.216601);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbe10() {
   return (neuron0x22e69e0()*0.171734);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbe50() {
   return (neuron0x22e6e60()*0.541585);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbe90() {
   return (neuron0x22e7370()*-0.462952);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbed0() {
   return (neuron0x22e77f0()*-0.493894);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbf10() {
   return (neuron0x22e7c70()*0.341983);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbf50() {
   return (neuron0x22e8280()*0.23219);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbf90() {
   return (neuron0x22e8670()*-0.701368);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbfd0() {
   return (neuron0x22e8af0()*-0.183336);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc010() {
   return (neuron0x22e8f70()*0.0242918);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc050() {
   return (neuron0x22e93f0()*0.450006);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc090() {
   return (neuron0x22e9900()*0.342483);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc0d0() {
   return (neuron0x22e8070()*0.164955);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc110() {
   return (neuron0x22ea210()*0.0253044);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc150() {
   return (neuron0x22ea690()*0.31);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbc20() {
   return (neuron0x22eaf60()*0.137605);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fbc60() {
   return (neuron0x22eb230()*0.114804);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc2a0() {
   return (neuron0x22eb6b0()*-0.0291972);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc2e0() {
   return (neuron0x22ebb30()*0.236706);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc320() {
   return (neuron0x22ebfb0()*-0.45201);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc360() {
   return (neuron0x22ec430()*-0.0158943);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc3a0() {
   return (neuron0x22ec8b0()*0.127056);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc3e0() {
   return (neuron0x22ecd30()*0.0561583);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc420() {
   return (neuron0x22ed1b0()*0.238895);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc7a0() {
   return (neuron0x22e61f0()*0.854627);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc7e0() {
   return (neuron0x22e6560()*-1.18441);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc820() {
   return (neuron0x22e69e0()*1.09804);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc860() {
   return (neuron0x22e6e60()*1.38878);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc8a0() {
   return (neuron0x22e7370()*-0.270801);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc8e0() {
   return (neuron0x22e77f0()*-0.407068);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc920() {
   return (neuron0x22e7c70()*-0.251023);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc960() {
   return (neuron0x22e8280()*-0.319447);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc9a0() {
   return (neuron0x22e8670()*-0.473608);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc9e0() {
   return (neuron0x22e8af0()*0.651653);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fca20() {
   return (neuron0x22e8f70()*-0.416338);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fca60() {
   return (neuron0x22e93f0()*0.278748);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcaa0() {
   return (neuron0x22e9900()*-1.37474);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcae0() {
   return (neuron0x22e8070()*-0.358834);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcb20() {
   return (neuron0x22ea210()*0.173604);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcb60() {
   return (neuron0x22ea690()*-0.0731028);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc5f0() {
   return (neuron0x22eaf60()*-0.625876);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fc630() {
   return (neuron0x22eb230()*0.338212);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fccb0() {
   return (neuron0x22eb6b0()*-1.6074);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fccf0() {
   return (neuron0x22ebb30()*-0.173442);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcd30() {
   return (neuron0x22ebfb0()*-4.30823);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcd70() {
   return (neuron0x22ec430()*3.09638);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcdb0() {
   return (neuron0x22ec8b0()*-0.372379);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fcdf0() {
   return (neuron0x22ecd30()*-0.294692);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fce30() {
   return (neuron0x22ed1b0()*0.241533);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd1b0() {
   return (neuron0x22e61f0()*0.579791);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd1f0() {
   return (neuron0x22e6560()*-0.110487);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd230() {
   return (neuron0x22e69e0()*-0.398113);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd270() {
   return (neuron0x22e6e60()*1.18406);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd2b0() {
   return (neuron0x22e7370()*-1.01814);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd2f0() {
   return (neuron0x22e77f0()*-0.584262);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd330() {
   return (neuron0x22e7c70()*-0.856596);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd370() {
   return (neuron0x22e8280()*0.948087);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd3b0() {
   return (neuron0x22e8670()*-1.3095);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd3f0() {
   return (neuron0x22e8af0()*1.49142);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd430() {
   return (neuron0x22e8f70()*0.828717);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd470() {
   return (neuron0x22e93f0()*0.601219);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd4b0() {
   return (neuron0x22e9900()*3.19191);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd4f0() {
   return (neuron0x22e8070()*-0.966473);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd530() {
   return (neuron0x22ea210()*1.58727);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd570() {
   return (neuron0x22ea690()*1.54151);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd000() {
   return (neuron0x22eaf60()*-0.227982);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd040() {
   return (neuron0x22eb230()*0.52685);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd6c0() {
   return (neuron0x22eb6b0()*1.39697);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd700() {
   return (neuron0x22ebb30()*0.816881);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd740() {
   return (neuron0x22ebfb0()*-0.890339);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd780() {
   return (neuron0x22ec430()*-1.75714);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd7c0() {
   return (neuron0x22ec8b0()*-0.159702);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd800() {
   return (neuron0x22ecd30()*-0.287834);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fd840() {
   return (neuron0x22ed1b0()*1.86181);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdbc0() {
   return (neuron0x22e61f0()*0.218395);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdc00() {
   return (neuron0x22e6560()*-0.833251);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdc40() {
   return (neuron0x22e69e0()*0.942187);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdc80() {
   return (neuron0x22e6e60()*-1.15926);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdcc0() {
   return (neuron0x22e7370()*0.153919);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdd00() {
   return (neuron0x22e77f0()*0.0956559);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdd40() {
   return (neuron0x22e7c70()*-0.856767);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdd80() {
   return (neuron0x22e8280()*-0.601543);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fddc0() {
   return (neuron0x22e8670()*0.460037);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fde00() {
   return (neuron0x22e8af0()*-0.789593);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fde40() {
   return (neuron0x22e8f70()*0.40937);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fde80() {
   return (neuron0x22e93f0()*-0.282255);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdec0() {
   return (neuron0x22e9900()*-0.149103);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdf00() {
   return (neuron0x22e8070()*0.136175);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdf40() {
   return (neuron0x22ea210()*-0.768234);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fdf80() {
   return (neuron0x22ea690()*0.261116);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fda10() {
   return (neuron0x22eaf60()*0.251883);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fda50() {
   return (neuron0x22eb230()*0.213145);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe0d0() {
   return (neuron0x22eb6b0()*-0.0893653);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe110() {
   return (neuron0x22ebb30()*0.0900211);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe150() {
   return (neuron0x22ebfb0()*0.4052);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe190() {
   return (neuron0x22ec430()*1.46287);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe1d0() {
   return (neuron0x22ec8b0()*0.569296);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe210() {
   return (neuron0x22ecd30()*-0.72451);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe250() {
   return (neuron0x22ed1b0()*-0.814818);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe5d0() {
   return (neuron0x22e61f0()*0.266347);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe610() {
   return (neuron0x22e6560()*0.317327);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe650() {
   return (neuron0x22e69e0()*0.735044);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe690() {
   return (neuron0x22e6e60()*-0.0894704);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe6d0() {
   return (neuron0x22e7370()*-0.327929);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe710() {
   return (neuron0x22e77f0()*0.407781);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe750() {
   return (neuron0x22e7c70()*-0.374718);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe790() {
   return (neuron0x22e8280()*0.367355);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe7d0() {
   return (neuron0x22e8670()*-0.386235);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe810() {
   return (neuron0x22e8af0()*-0.216251);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe850() {
   return (neuron0x22e8f70()*-0.649075);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe890() {
   return (neuron0x22e93f0()*0.0942347);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe8d0() {
   return (neuron0x22e9900()*2.24892);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe910() {
   return (neuron0x22e8070()*-0.38007);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe950() {
   return (neuron0x22ea210()*0.467142);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe990() {
   return (neuron0x22ea690()*1.50952);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe420() {
   return (neuron0x22eaf60()*0.80779);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fe460() {
   return (neuron0x22eb230()*-0.488223);
}

double nnFunc_25_25hi_3000ep__::synapse0x22feae0() {
   return (neuron0x22eb6b0()*0.720138);
}

double nnFunc_25_25hi_3000ep__::synapse0x22feb20() {
   return (neuron0x22ebb30()*-0.178204);
}

double nnFunc_25_25hi_3000ep__::synapse0x22feb60() {
   return (neuron0x22ebfb0()*1.94669);
}

double nnFunc_25_25hi_3000ep__::synapse0x22feba0() {
   return (neuron0x22ec430()*-0.83104);
}

double nnFunc_25_25hi_3000ep__::synapse0x22febe0() {
   return (neuron0x22ec8b0()*-0.268192);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fec20() {
   return (neuron0x22ecd30()*2.07967);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fec60() {
   return (neuron0x22ed1b0()*0.45382);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fefe0() {
   return (neuron0x22e61f0()*0.368264);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff020() {
   return (neuron0x22e6560()*1.38133);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff060() {
   return (neuron0x22e69e0()*-0.242116);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff0a0() {
   return (neuron0x22e6e60()*1.36403);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff0e0() {
   return (neuron0x22e7370()*1.09944);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff120() {
   return (neuron0x22e77f0()*-0.296443);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff160() {
   return (neuron0x22e7c70()*-0.388239);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff1a0() {
   return (neuron0x22e8280()*-0.113097);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff1e0() {
   return (neuron0x22e8670()*-0.737004);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff220() {
   return (neuron0x22e8af0()*0.461906);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff260() {
   return (neuron0x22e8f70()*-1.01883);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff2a0() {
   return (neuron0x22e93f0()*-0.103518);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff2e0() {
   return (neuron0x22e9900()*-2.46957);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff320() {
   return (neuron0x22e8070()*-0.590437);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff360() {
   return (neuron0x22ea210()*0.269977);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff3a0() {
   return (neuron0x22ea690()*-1.18971);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fee30() {
   return (neuron0x22eaf60()*-0.561295);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fee70() {
   return (neuron0x22eb230()*0.562686);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff4f0() {
   return (neuron0x22eb6b0()*1.69632);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff530() {
   return (neuron0x22ebb30()*0.225696);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff570() {
   return (neuron0x22ebfb0()*4.22511);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff5b0() {
   return (neuron0x22ec430()*-3.80587);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff5f0() {
   return (neuron0x22ec8b0()*0.246351);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff630() {
   return (neuron0x22ecd30()*0.461677);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff670() {
   return (neuron0x22ed1b0()*0.783913);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff9f0() {
   return (neuron0x22e61f0()*-0.975708);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffa30() {
   return (neuron0x22e6560()*-3.45844);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffa70() {
   return (neuron0x22e69e0()*0.761485);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffab0() {
   return (neuron0x22e6e60()*-0.0406428);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffaf0() {
   return (neuron0x22e7370()*-2.97762);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffb30() {
   return (neuron0x22e77f0()*-0.403696);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffb70() {
   return (neuron0x22e7c70()*-0.366499);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffbb0() {
   return (neuron0x22e8280()*-0.0367696);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffbf0() {
   return (neuron0x22e8670()*-1.25271);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffc30() {
   return (neuron0x22e8af0()*0.19908);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffc70() {
   return (neuron0x22e8f70()*1.80607);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffcb0() {
   return (neuron0x22e93f0()*0.35954);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffcf0() {
   return (neuron0x22e9900()*0.352418);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffd30() {
   return (neuron0x22e8070()*-0.556624);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffd70() {
   return (neuron0x22ea210()*-0.876366);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ffdb0() {
   return (neuron0x22ea690()*0.723557);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff840() {
   return (neuron0x22eaf60()*-0.330262);
}

double nnFunc_25_25hi_3000ep__::synapse0x22ff880() {
   return (neuron0x22eb230()*0.217983);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fff00() {
   return (neuron0x22eb6b0()*-0.0236764);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fff40() {
   return (neuron0x22ebb30()*-1.09295);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fff80() {
   return (neuron0x22ebfb0()*-0.806792);
}

double nnFunc_25_25hi_3000ep__::synapse0x22fffc0() {
   return (neuron0x22ec430()*-0.514623);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300000() {
   return (neuron0x22ec8b0()*-0.258966);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300040() {
   return (neuron0x22ecd30()*1.71077);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300080() {
   return (neuron0x22ed1b0()*0.293906);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300400() {
   return (neuron0x22e61f0()*0.223828);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300440() {
   return (neuron0x22e6560()*-0.240638);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300480() {
   return (neuron0x22e69e0()*-1.23582);
}

double nnFunc_25_25hi_3000ep__::synapse0x23004c0() {
   return (neuron0x22e6e60()*1.46117);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300500() {
   return (neuron0x22e7370()*-0.691499);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300540() {
   return (neuron0x22e77f0()*0.0702015);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300580() {
   return (neuron0x22e7c70()*0.708771);
}

double nnFunc_25_25hi_3000ep__::synapse0x23005c0() {
   return (neuron0x22e8280()*0.180039);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300600() {
   return (neuron0x22e8670()*-1.81605);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300640() {
   return (neuron0x22e8af0()*0.868155);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300680() {
   return (neuron0x22e8f70()*1.3706);
}

double nnFunc_25_25hi_3000ep__::synapse0x23006c0() {
   return (neuron0x22e93f0()*-0.366194);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300700() {
   return (neuron0x22e9900()*0.538007);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300740() {
   return (neuron0x22e8070()*-0.572249);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300780() {
   return (neuron0x22ea210()*-0.272853);
}

double nnFunc_25_25hi_3000ep__::synapse0x23007c0() {
   return (neuron0x22ea690()*-0.36121);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300250() {
   return (neuron0x22eaf60()*-0.301365);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300290() {
   return (neuron0x22eb230()*0.129053);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300910() {
   return (neuron0x22eb6b0()*-0.0646178);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300950() {
   return (neuron0x22ebb30()*0.590854);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300990() {
   return (neuron0x22ebfb0()*-1.21866);
}

double nnFunc_25_25hi_3000ep__::synapse0x23009d0() {
   return (neuron0x22ec430()*-1.42722);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300a10() {
   return (neuron0x22ec8b0()*0.229518);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300a50() {
   return (neuron0x22ecd30()*-0.0902939);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300a90() {
   return (neuron0x22ed1b0()*0.667018);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300cf0() {
   return (neuron0x22ef0c0()*1.34302);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300d30() {
   return (neuron0x22e9e90()*3.89354);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300d70() {
   return (neuron0x22efc30()*-1.13159);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300db0() {
   return (neuron0x22f0750()*-0.777241);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300df0() {
   return (neuron0x22f1160()*4.3335);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300e30() {
   return (neuron0x22f1b70()*0.622518);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300e70() {
   return (neuron0x22ef760()*2.48677);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300eb0() {
   return (neuron0x22f37a0()*-0.573872);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300ef0() {
   return (neuron0x22f41b0()*-2.02163);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300f30() {
   return (neuron0x22f4bc0()*0.695932);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300f70() {
   return (neuron0x22f55d0()*1.54132);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300fb0() {
   return (neuron0x22f5fe0()*-6.03631);
}

double nnFunc_25_25hi_3000ep__::synapse0x2300ff0() {
   return (neuron0x22f69f0()*-4.74058);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301030() {
   return (neuron0x22f7400()*1.46162);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301070() {
   return (neuron0x22f7e10()*1.29119);
}

double nnFunc_25_25hi_3000ep__::synapse0x23010b0() {
   return (neuron0x22f8820()*7.46319);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e60c0() {
   return (neuron0x22f2e40()*3.65736);
}

double nnFunc_25_25hi_3000ep__::synapse0x22e6100() {
   return (neuron0x22fba90()*-0.329533);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301200() {
   return (neuron0x22fc460()*-5.05002);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301240() {
   return (neuron0x22fce70()*-3.20693);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301280() {
   return (neuron0x22fd880()*-0.817507);
}

double nnFunc_25_25hi_3000ep__::synapse0x23012c0() {
   return (neuron0x22fe290()*2.61567);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301300() {
   return (neuron0x22feca0()*-3.64259);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301340() {
   return (neuron0x22ff6b0()*-3.34192);
}

double nnFunc_25_25hi_3000ep__::synapse0x2301380() {
   return (neuron0x23000c0()*-1.03964);
}

