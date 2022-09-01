#include "25_25hi_5000ep_1A_new_moved_random_centre_midwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x13098d0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x13098d0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x12ede80() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x12ee1c0() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x12ee500() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x12ee840() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x12eeb80() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x12eeff0() {
   double input = -5.37951;
   input += synapse0x11fb330();
   input += synapse0x12dd2f0();
   input += synapse0x12ef2a0();
   input += synapse0x12ef2e0();
   input += synapse0x12ef320();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12eeff0() {
   double input = input0x12eeff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12ef360() {
   double input = 0.322453;
   input += synapse0x12ef6a0();
   input += synapse0x12ef6e0();
   input += synapse0x12ef720();
   input += synapse0x12ef760();
   input += synapse0x12ef7a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12ef360() {
   double input = input0x12ef360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12ef7e0() {
   double input = 1.0906;
   input += synapse0x12efb20();
   input += synapse0x12efb60();
   input += synapse0x12efba0();
   input += synapse0x12efbe0();
   input += synapse0x12efc20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12ef7e0() {
   double input = input0x12ef7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12efc60() {
   double input = -0.935955;
   input += synapse0x12effa0();
   input += synapse0x12effe0();
   input += synapse0x11ed520();
   input += synapse0x11ed560();
   input += synapse0x12f0130();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12efc60() {
   double input = input0x12efc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f0170() {
   double input = 1.15112;
   input += synapse0x12f04b0();
   input += synapse0x12f04f0();
   input += synapse0x12f0530();
   input += synapse0x12f0570();
   input += synapse0x12f05b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f0170() {
   double input = input0x12f0170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f05f0() {
   double input = 0.436298;
   input += synapse0x12f0930();
   input += synapse0x12f0970();
   input += synapse0x12f09b0();
   input += synapse0x12f09f0();
   input += synapse0x12f0a30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f05f0() {
   double input = input0x12f05f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f0a70() {
   double input = -0.106278;
   input += synapse0x12f0db0();
   input += synapse0x12f0df0();
   input += synapse0x12f0e30();
   input += synapse0x12f0020();
   input += synapse0x12f0060();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f0a70() {
   double input = input0x12f0a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f1080() {
   double input = 0.752021;
   input += synapse0x12f1330();
   input += synapse0x12f1370();
   input += synapse0x12f13b0();
   input += synapse0x12f13f0();
   input += synapse0x12f1430();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f1080() {
   double input = input0x12f1080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f1470() {
   double input = 0.0079076;
   input += synapse0x12f17b0();
   input += synapse0x12f17f0();
   input += synapse0x12f1830();
   input += synapse0x12f1870();
   input += synapse0x12f18b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f1470() {
   double input = input0x12f1470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f18f0() {
   double input = -0.436766;
   input += synapse0x12f1c30();
   input += synapse0x12f1c70();
   input += synapse0x12f1cb0();
   input += synapse0x12f1cf0();
   input += synapse0x12f1d30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f18f0() {
   double input = input0x12f18f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f1d70() {
   double input = 0.749312;
   input += synapse0x12f20b0();
   input += synapse0x12f20f0();
   input += synapse0x12f2130();
   input += synapse0x12f2170();
   input += synapse0x12f21b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f1d70() {
   double input = input0x12f1d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f21f0() {
   double input = 1.13051;
   input += synapse0x11ed370();
   input += synapse0x11ed3b0();
   input += synapse0x12f2640();
   input += synapse0x12f2680();
   input += synapse0x12f26c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f21f0() {
   double input = input0x12f21f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f2700() {
   double input = 0.50654;
   input += synapse0x12f2a40();
   input += synapse0x12f2a80();
   input += synapse0x12f2ac0();
   input += synapse0x12f2b00();
   input += synapse0x12f2b40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f2700() {
   double input = input0x12f2700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f0e70() {
   double input = 2.58476;
   input += synapse0x11edb40();
   input += synapse0x12f1000();
   input += synapse0x12f1040();
   input += synapse0x12f2f90();
   input += synapse0x12f2fd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f0e70() {
   double input = input0x12f0e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f3010() {
   double input = 0.131422;
   input += synapse0x12f3350();
   input += synapse0x12f3390();
   input += synapse0x12f33d0();
   input += synapse0x12f3410();
   input += synapse0x12f3450();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f3010() {
   double input = input0x12f3010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f3490() {
   double input = -7.39922;
   input += synapse0x12f37d0();
   input += synapse0x12ee0a0();
   input += synapse0x12ee0e0();
   input += synapse0x12ee3e0();
   input += synapse0x12ee420();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f3490() {
   double input = input0x12f3490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f3d60() {
   double input = -2.245;
   input += synapse0x12f3ef0();
   input += synapse0x12f3f30();
   input += synapse0x12f3f70();
   input += synapse0x12f3fb0();
   input += synapse0x12f3ff0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f3d60() {
   double input = input0x12f3d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f4030() {
   double input = -0.19264;
   input += synapse0x12f4370();
   input += synapse0x12f43b0();
   input += synapse0x12f43f0();
   input += synapse0x12f4430();
   input += synapse0x12f4470();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f4030() {
   double input = input0x12f4030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f44b0() {
   double input = 0.854424;
   input += synapse0x12f47f0();
   input += synapse0x12f4830();
   input += synapse0x12f4870();
   input += synapse0x12f48b0();
   input += synapse0x12f48f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f44b0() {
   double input = input0x12f44b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f4930() {
   double input = -1.76242;
   input += synapse0x12f4c70();
   input += synapse0x12f4cb0();
   input += synapse0x12f4cf0();
   input += synapse0x12f4d30();
   input += synapse0x12f4d70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f4930() {
   double input = input0x12f4930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f4db0() {
   double input = -0.771105;
   input += synapse0x12f50f0();
   input += synapse0x12f5130();
   input += synapse0x12f5170();
   input += synapse0x12f51b0();
   input += synapse0x12f51f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f4db0() {
   double input = input0x12f4db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f5230() {
   double input = 0.800142;
   input += synapse0x12f5570();
   input += synapse0x12f55b0();
   input += synapse0x12f55f0();
   input += synapse0x12f5630();
   input += synapse0x12f5670();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f5230() {
   double input = input0x12f5230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f56b0() {
   double input = 0.420625;
   input += synapse0x12f59f0();
   input += synapse0x12f5a30();
   input += synapse0x12f5a70();
   input += synapse0x12f5ab0();
   input += synapse0x12f5af0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f56b0() {
   double input = input0x12f56b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f5b30() {
   double input = 4.24627;
   input += synapse0x12f5e70();
   input += synapse0x12f5eb0();
   input += synapse0x12f5ef0();
   input += synapse0x12f5f30();
   input += synapse0x12f5f70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f5b30() {
   double input = input0x12f5b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f5fb0() {
   double input = -2.24865;
   input += synapse0x12f62f0();
   input += synapse0x12f6330();
   input += synapse0x12f6370();
   input += synapse0x12f63b0();
   input += synapse0x12f63f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f5fb0() {
   double input = input0x12f5fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f7ec0() {
   double input = 0.479789;
   input += synapse0x12eff10();
   input += synapse0x12eff50();
   input += synapse0x12f0420();
   input += synapse0x12f0460();
   input += synapse0x12f08a0();
   input += synapse0x12f08e0();
   input += synapse0x12f0d20();
   input += synapse0x12f0d60();
   input += synapse0x12f12a0();
   input += synapse0x12f12e0();
   input += synapse0x12f1720();
   input += synapse0x12f1760();
   input += synapse0x12f1ba0();
   input += synapse0x12f1be0();
   input += synapse0x12f2020();
   input += synapse0x12f2060();
   input += synapse0x12f24a0();
   input += synapse0x12f24e0();
   input += synapse0x12f29b0();
   input += synapse0x12f29f0();
   input += synapse0x12f32c0();
   input += synapse0x12f3300();
   input += synapse0x12f3740();
   input += synapse0x12f3780();
   input += synapse0x12eeda0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f7ec0() {
   double input = input0x12f7ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f2c90() {
   double input = -0.122856;
   input += synapse0x12f2e20();
   input += synapse0x12f2e60();
   input += synapse0x12f2ea0();
   input += synapse0x12f2ee0();
   input += synapse0x12f2f20();
   input += synapse0x12eede0();
   input += synapse0x12f5060();
   input += synapse0x12f50a0();
   input += synapse0x12f54e0();
   input += synapse0x12f5520();
   input += synapse0x12f5960();
   input += synapse0x12f59a0();
   input += synapse0x12f5de0();
   input += synapse0x12f5e20();
   input += synapse0x12f6260();
   input += synapse0x12f62a0();
   input += synapse0x12ef210();
   input += synapse0x12ef250();
   input += synapse0x12f42e0();
   input += synapse0x12f4320();
   input += synapse0x11fb400();
   input += synapse0x11fb440();
   input += synapse0x12f8970();
   input += synapse0x12f89b0();
   input += synapse0x12f89f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f2c90() {
   double input = input0x12f2c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f8a30() {
   double input = 0.3388;
   input += synapse0x12f2530();
   input += synapse0x12f2570();
   input += synapse0x12f25b0();
   input += synapse0x12f25f0();
   input += synapse0x12f8f80();
   input += synapse0x12f8fc0();
   input += synapse0x12f9000();
   input += synapse0x12f9040();
   input += synapse0x12f9080();
   input += synapse0x12f90c0();
   input += synapse0x12f9100();
   input += synapse0x12f9140();
   input += synapse0x12f9180();
   input += synapse0x12f91c0();
   input += synapse0x12f9200();
   input += synapse0x12f9240();
   input += synapse0x12f8bc0();
   input += synapse0x12f8c00();
   input += synapse0x12f9390();
   input += synapse0x12f93d0();
   input += synapse0x12f9410();
   input += synapse0x12f9450();
   input += synapse0x12f9490();
   input += synapse0x12f94d0();
   input += synapse0x12f9510();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f8a30() {
   double input = input0x12f8a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f9550() {
   double input = -0.37182;
   input += synapse0x12f9890();
   input += synapse0x12f98d0();
   input += synapse0x12f9910();
   input += synapse0x12f9950();
   input += synapse0x12f9990();
   input += synapse0x12f99d0();
   input += synapse0x12f9a10();
   input += synapse0x12f9a50();
   input += synapse0x12f9a90();
   input += synapse0x12f9ad0();
   input += synapse0x12f9b10();
   input += synapse0x12f9b50();
   input += synapse0x12f9b90();
   input += synapse0x12f9bd0();
   input += synapse0x12f9c10();
   input += synapse0x12f9c50();
   input += synapse0x12f96e0();
   input += synapse0x12f9720();
   input += synapse0x12f9da0();
   input += synapse0x12f9de0();
   input += synapse0x12f9e20();
   input += synapse0x12f9e60();
   input += synapse0x12f9ea0();
   input += synapse0x12f9ee0();
   input += synapse0x12f9f20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f9550() {
   double input = input0x12f9550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f9f60() {
   double input = 0.368199;
   input += synapse0x12fa2a0();
   input += synapse0x12fa2e0();
   input += synapse0x12fa320();
   input += synapse0x12fa360();
   input += synapse0x12fa3a0();
   input += synapse0x12fa3e0();
   input += synapse0x12fa420();
   input += synapse0x12fa460();
   input += synapse0x12fa4a0();
   input += synapse0x12fa4e0();
   input += synapse0x12fa520();
   input += synapse0x12fa560();
   input += synapse0x12fa5a0();
   input += synapse0x12fa5e0();
   input += synapse0x12fa620();
   input += synapse0x12fa660();
   input += synapse0x12fa0f0();
   input += synapse0x12fa130();
   input += synapse0x12fa7b0();
   input += synapse0x12fa7f0();
   input += synapse0x12fa830();
   input += synapse0x12fa870();
   input += synapse0x12fa8b0();
   input += synapse0x12fa8f0();
   input += synapse0x12fa930();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f9f60() {
   double input = input0x12f9f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fa970() {
   double input = 0.415936;
   input += synapse0x12facb0();
   input += synapse0x12facf0();
   input += synapse0x12fad30();
   input += synapse0x12fad70();
   input += synapse0x12fadb0();
   input += synapse0x12fadf0();
   input += synapse0x12fae30();
   input += synapse0x12f8050();
   input += synapse0x12f8090();
   input += synapse0x12f80d0();
   input += synapse0x12f8110();
   input += synapse0x12f8150();
   input += synapse0x12f8190();
   input += synapse0x12f81d0();
   input += synapse0x12f8210();
   input += synapse0x12f8250();
   input += synapse0x12fab00();
   input += synapse0x12fab40();
   input += synapse0x12f83a0();
   input += synapse0x12f83e0();
   input += synapse0x12f8420();
   input += synapse0x12f8460();
   input += synapse0x12f84a0();
   input += synapse0x12f84e0();
   input += synapse0x12f8520();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fa970() {
   double input = input0x12fa970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12f8560() {
   double input = 0.365793;
   input += synapse0x12f8810();
   input += synapse0x12fbf10();
   input += synapse0x12fbf50();
   input += synapse0x12fbf90();
   input += synapse0x12fbfd0();
   input += synapse0x12fc010();
   input += synapse0x12fc050();
   input += synapse0x12fc090();
   input += synapse0x12fc0d0();
   input += synapse0x12fc110();
   input += synapse0x12fc150();
   input += synapse0x12fc190();
   input += synapse0x12fc1d0();
   input += synapse0x12fc210();
   input += synapse0x12fc250();
   input += synapse0x12fc290();
   input += synapse0x12f86f0();
   input += synapse0x12f8730();
   input += synapse0x12fc3e0();
   input += synapse0x12fc420();
   input += synapse0x12fc460();
   input += synapse0x12fc4a0();
   input += synapse0x12fc4e0();
   input += synapse0x12fc520();
   input += synapse0x12fc560();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12f8560() {
   double input = input0x12f8560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fc5a0() {
   double input = -0.448585;
   input += synapse0x12fc8e0();
   input += synapse0x12fc920();
   input += synapse0x12fc960();
   input += synapse0x12fc9a0();
   input += synapse0x12fc9e0();
   input += synapse0x12fca20();
   input += synapse0x12fca60();
   input += synapse0x12fcaa0();
   input += synapse0x12fcae0();
   input += synapse0x12fcb20();
   input += synapse0x12fcb60();
   input += synapse0x12fcba0();
   input += synapse0x12fcbe0();
   input += synapse0x12fcc20();
   input += synapse0x12fcc60();
   input += synapse0x12fcca0();
   input += synapse0x12fc730();
   input += synapse0x12fc770();
   input += synapse0x12fcdf0();
   input += synapse0x12fce30();
   input += synapse0x12fce70();
   input += synapse0x12fceb0();
   input += synapse0x12fcef0();
   input += synapse0x12fcf30();
   input += synapse0x12fcf70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fc5a0() {
   double input = input0x12fc5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fcfb0() {
   double input = -0.522344;
   input += synapse0x12fd2f0();
   input += synapse0x12fd330();
   input += synapse0x12fd370();
   input += synapse0x12fd3b0();
   input += synapse0x12fd3f0();
   input += synapse0x12fd430();
   input += synapse0x12fd470();
   input += synapse0x12fd4b0();
   input += synapse0x12fd4f0();
   input += synapse0x12fd530();
   input += synapse0x12fd570();
   input += synapse0x12fd5b0();
   input += synapse0x12fd5f0();
   input += synapse0x12fd630();
   input += synapse0x12fd670();
   input += synapse0x12fd6b0();
   input += synapse0x12fd140();
   input += synapse0x12fd180();
   input += synapse0x12fd800();
   input += synapse0x12fd840();
   input += synapse0x12fd880();
   input += synapse0x12fd8c0();
   input += synapse0x12fd900();
   input += synapse0x12fd940();
   input += synapse0x12fd980();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fcfb0() {
   double input = input0x12fcfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fd9c0() {
   double input = 0.698106;
   input += synapse0x12fdd00();
   input += synapse0x12fdd40();
   input += synapse0x12fdd80();
   input += synapse0x12fddc0();
   input += synapse0x12fde00();
   input += synapse0x12fde40();
   input += synapse0x12fde80();
   input += synapse0x12fdec0();
   input += synapse0x12fdf00();
   input += synapse0x12fdf40();
   input += synapse0x12fdf80();
   input += synapse0x12fdfc0();
   input += synapse0x12fe000();
   input += synapse0x12fe040();
   input += synapse0x12fe080();
   input += synapse0x12fe0c0();
   input += synapse0x12fdb50();
   input += synapse0x12fdb90();
   input += synapse0x12fe210();
   input += synapse0x12fe250();
   input += synapse0x12fe290();
   input += synapse0x12fe2d0();
   input += synapse0x12fe310();
   input += synapse0x12fe350();
   input += synapse0x12fe390();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fd9c0() {
   double input = input0x12fd9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fe3d0() {
   double input = 0.28616;
   input += synapse0x12fe710();
   input += synapse0x12fe750();
   input += synapse0x12fe790();
   input += synapse0x12fe7d0();
   input += synapse0x12fe810();
   input += synapse0x12fe850();
   input += synapse0x12fe890();
   input += synapse0x12fe8d0();
   input += synapse0x12fe910();
   input += synapse0x12fe950();
   input += synapse0x12fe990();
   input += synapse0x12fe9d0();
   input += synapse0x12fea10();
   input += synapse0x12fea50();
   input += synapse0x12fea90();
   input += synapse0x12fead0();
   input += synapse0x12fe560();
   input += synapse0x12fe5a0();
   input += synapse0x12fec20();
   input += synapse0x12fec60();
   input += synapse0x12feca0();
   input += synapse0x12fece0();
   input += synapse0x12fed20();
   input += synapse0x12fed60();
   input += synapse0x12feda0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fe3d0() {
   double input = input0x12fe3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fede0() {
   double input = -0.352078;
   input += synapse0x12ff120();
   input += synapse0x12ff160();
   input += synapse0x12ff1a0();
   input += synapse0x12ff1e0();
   input += synapse0x12ff220();
   input += synapse0x12ff260();
   input += synapse0x12ff2a0();
   input += synapse0x12ff2e0();
   input += synapse0x12ff320();
   input += synapse0x12ff360();
   input += synapse0x12ff3a0();
   input += synapse0x12ff3e0();
   input += synapse0x12ff420();
   input += synapse0x12ff460();
   input += synapse0x12ff4a0();
   input += synapse0x12ff4e0();
   input += synapse0x12fef70();
   input += synapse0x12fefb0();
   input += synapse0x12ff630();
   input += synapse0x12ff670();
   input += synapse0x12ff6b0();
   input += synapse0x12ff6f0();
   input += synapse0x12ff730();
   input += synapse0x12ff770();
   input += synapse0x12ff7b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fede0() {
   double input = input0x12fede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12ff7f0() {
   double input = -0.170962;
   input += synapse0x12ffb30();
   input += synapse0x12ffb70();
   input += synapse0x12ffbb0();
   input += synapse0x12ffbf0();
   input += synapse0x12ffc30();
   input += synapse0x12ffc70();
   input += synapse0x12ffcb0();
   input += synapse0x12ffcf0();
   input += synapse0x12ffd30();
   input += synapse0x12ffd70();
   input += synapse0x12ffdb0();
   input += synapse0x12ffdf0();
   input += synapse0x12ffe30();
   input += synapse0x12ffe70();
   input += synapse0x12ffeb0();
   input += synapse0x12ffef0();
   input += synapse0x12ff980();
   input += synapse0x12ff9c0();
   input += synapse0x1300040();
   input += synapse0x1300080();
   input += synapse0x13000c0();
   input += synapse0x1300100();
   input += synapse0x1300140();
   input += synapse0x1300180();
   input += synapse0x13001c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12ff7f0() {
   double input = input0x12ff7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1300200() {
   double input = 0.215059;
   input += synapse0x1300540();
   input += synapse0x1300580();
   input += synapse0x13005c0();
   input += synapse0x1300600();
   input += synapse0x1300640();
   input += synapse0x1300680();
   input += synapse0x13006c0();
   input += synapse0x1300700();
   input += synapse0x1300740();
   input += synapse0x1300780();
   input += synapse0x13007c0();
   input += synapse0x1300800();
   input += synapse0x1300840();
   input += synapse0x1300880();
   input += synapse0x13008c0();
   input += synapse0x1300900();
   input += synapse0x1300390();
   input += synapse0x13003d0();
   input += synapse0x1300a50();
   input += synapse0x1300a90();
   input += synapse0x1300ad0();
   input += synapse0x1300b10();
   input += synapse0x1300b50();
   input += synapse0x1300b90();
   input += synapse0x1300bd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1300200() {
   double input = input0x1300200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1300c10() {
   double input = 0.247569;
   input += synapse0x1300f50();
   input += synapse0x1300f90();
   input += synapse0x1300fd0();
   input += synapse0x1301010();
   input += synapse0x1301050();
   input += synapse0x1301090();
   input += synapse0x13010d0();
   input += synapse0x1301110();
   input += synapse0x1301150();
   input += synapse0x1301190();
   input += synapse0x13011d0();
   input += synapse0x1301210();
   input += synapse0x1301250();
   input += synapse0x1301290();
   input += synapse0x13012d0();
   input += synapse0x1301310();
   input += synapse0x1300da0();
   input += synapse0x1300de0();
   input += synapse0x1301460();
   input += synapse0x13014a0();
   input += synapse0x13014e0();
   input += synapse0x1301520();
   input += synapse0x1301560();
   input += synapse0x13015a0();
   input += synapse0x13015e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1300c10() {
   double input = input0x1300c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1301620() {
   double input = -0.247667;
   input += synapse0x1301960();
   input += synapse0x12ef180();
   input += synapse0x12ef1c0();
   input += synapse0x12ef580();
   input += synapse0x12ef5c0();
   input += synapse0x12efa00();
   input += synapse0x12efa40();
   input += synapse0x12efe80();
   input += synapse0x12efec0();
   input += synapse0x12f0390();
   input += synapse0x12f03d0();
   input += synapse0x12f0810();
   input += synapse0x12f0850();
   input += synapse0x12f0c90();
   input += synapse0x12f0cd0();
   input += synapse0x12f1210();
   input += synapse0x12f1250();
   input += synapse0x12f1690();
   input += synapse0x12f16d0();
   input += synapse0x12f1b10();
   input += synapse0x12f1b50();
   input += synapse0x12f1f90();
   input += synapse0x12f1fd0();
   input += synapse0x12f2410();
   input += synapse0x12f2450();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1301620() {
   double input = input0x1301620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12fbc40() {
   double input = -0.248239;
   input += synapse0x12fbdd0();
   input += synapse0x12fbe10();
   input += synapse0x12f36b0();
   input += synapse0x12f36f0();
   input += synapse0x13017b0();
   input += synapse0x13017f0();
   input += synapse0x12eea60();
   input += synapse0x12eeaa0();
   input += synapse0x12f4250();
   input += synapse0x12f4290();
   input += synapse0x12f46d0();
   input += synapse0x12f4710();
   input += synapse0x12f4b50();
   input += synapse0x12f4b90();
   input += synapse0x12f4fd0();
   input += synapse0x12f5010();
   input += synapse0x12f5450();
   input += synapse0x12f5490();
   input += synapse0x12f58d0();
   input += synapse0x12f5910();
   input += synapse0x12f5d50();
   input += synapse0x12f5d90();
   input += synapse0x12f61d0();
   input += synapse0x12f6210();
   input += synapse0x12f2920();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12fbc40() {
   double input = input0x12fbc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1304890() {
   double input = 0.0343362;
   input += synapse0x12f2960();
   input += synapse0x1304bd0();
   input += synapse0x1304c10();
   input += synapse0x1304c50();
   input += synapse0x1304c90();
   input += synapse0x1304cd0();
   input += synapse0x1304d10();
   input += synapse0x1304d50();
   input += synapse0x1304d90();
   input += synapse0x1304dd0();
   input += synapse0x1304e10();
   input += synapse0x1304e50();
   input += synapse0x1304e90();
   input += synapse0x1304ed0();
   input += synapse0x1304f10();
   input += synapse0x1304f50();
   input += synapse0x1304a20();
   input += synapse0x1304a60();
   input += synapse0x13050a0();
   input += synapse0x13050e0();
   input += synapse0x1305120();
   input += synapse0x1305160();
   input += synapse0x13051a0();
   input += synapse0x13051e0();
   input += synapse0x1305220();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1304890() {
   double input = input0x1304890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1305260() {
   double input = -0.139074;
   input += synapse0x13055a0();
   input += synapse0x13055e0();
   input += synapse0x1305620();
   input += synapse0x1305660();
   input += synapse0x13056a0();
   input += synapse0x13056e0();
   input += synapse0x1305720();
   input += synapse0x1305760();
   input += synapse0x13057a0();
   input += synapse0x13057e0();
   input += synapse0x1305820();
   input += synapse0x1305860();
   input += synapse0x13058a0();
   input += synapse0x13058e0();
   input += synapse0x1305920();
   input += synapse0x1305960();
   input += synapse0x13053f0();
   input += synapse0x1305430();
   input += synapse0x1305ab0();
   input += synapse0x1305af0();
   input += synapse0x1305b30();
   input += synapse0x1305b70();
   input += synapse0x1305bb0();
   input += synapse0x1305bf0();
   input += synapse0x1305c30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1305260() {
   double input = input0x1305260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1305c70() {
   double input = 0.306787;
   input += synapse0x1305fb0();
   input += synapse0x1305ff0();
   input += synapse0x1306030();
   input += synapse0x1306070();
   input += synapse0x13060b0();
   input += synapse0x13060f0();
   input += synapse0x1306130();
   input += synapse0x1306170();
   input += synapse0x13061b0();
   input += synapse0x13061f0();
   input += synapse0x1306230();
   input += synapse0x1306270();
   input += synapse0x13062b0();
   input += synapse0x13062f0();
   input += synapse0x1306330();
   input += synapse0x1306370();
   input += synapse0x1305e00();
   input += synapse0x1305e40();
   input += synapse0x13064c0();
   input += synapse0x1306500();
   input += synapse0x1306540();
   input += synapse0x1306580();
   input += synapse0x13065c0();
   input += synapse0x1306600();
   input += synapse0x1306640();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1305c70() {
   double input = input0x1305c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1306680() {
   double input = 0.0664256;
   input += synapse0x13069c0();
   input += synapse0x1306a00();
   input += synapse0x1306a40();
   input += synapse0x1306a80();
   input += synapse0x1306ac0();
   input += synapse0x1306b00();
   input += synapse0x1306b40();
   input += synapse0x1306b80();
   input += synapse0x1306bc0();
   input += synapse0x1306c00();
   input += synapse0x1306c40();
   input += synapse0x1306c80();
   input += synapse0x1306cc0();
   input += synapse0x1306d00();
   input += synapse0x1306d40();
   input += synapse0x1306d80();
   input += synapse0x1306810();
   input += synapse0x1306850();
   input += synapse0x1306ed0();
   input += synapse0x1306f10();
   input += synapse0x1306f50();
   input += synapse0x1306f90();
   input += synapse0x1306fd0();
   input += synapse0x1307010();
   input += synapse0x1307050();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1306680() {
   double input = input0x1306680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1307090() {
   double input = 0.286252;
   input += synapse0x13073d0();
   input += synapse0x1307410();
   input += synapse0x1307450();
   input += synapse0x1307490();
   input += synapse0x13074d0();
   input += synapse0x1307510();
   input += synapse0x1307550();
   input += synapse0x1307590();
   input += synapse0x13075d0();
   input += synapse0x1307610();
   input += synapse0x1307650();
   input += synapse0x1307690();
   input += synapse0x13076d0();
   input += synapse0x1307710();
   input += synapse0x1307750();
   input += synapse0x1307790();
   input += synapse0x1307220();
   input += synapse0x1307260();
   input += synapse0x13078e0();
   input += synapse0x1307920();
   input += synapse0x1307960();
   input += synapse0x13079a0();
   input += synapse0x13079e0();
   input += synapse0x1307a20();
   input += synapse0x1307a60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1307090() {
   double input = input0x1307090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1307aa0() {
   double input = 0.184631;
   input += synapse0x1307de0();
   input += synapse0x1307e20();
   input += synapse0x1307e60();
   input += synapse0x1307ea0();
   input += synapse0x1307ee0();
   input += synapse0x1307f20();
   input += synapse0x1307f60();
   input += synapse0x1307fa0();
   input += synapse0x1307fe0();
   input += synapse0x1308020();
   input += synapse0x1308060();
   input += synapse0x13080a0();
   input += synapse0x13080e0();
   input += synapse0x1308120();
   input += synapse0x1308160();
   input += synapse0x13081a0();
   input += synapse0x1307c30();
   input += synapse0x1307c70();
   input += synapse0x13082f0();
   input += synapse0x1308330();
   input += synapse0x1308370();
   input += synapse0x13083b0();
   input += synapse0x13083f0();
   input += synapse0x1308430();
   input += synapse0x1308470();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1307aa0() {
   double input = input0x1307aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x13084b0() {
   double input = 0.177821;
   input += synapse0x13087f0();
   input += synapse0x1308830();
   input += synapse0x1308870();
   input += synapse0x13088b0();
   input += synapse0x13088f0();
   input += synapse0x1308930();
   input += synapse0x1308970();
   input += synapse0x13089b0();
   input += synapse0x13089f0();
   input += synapse0x1308a30();
   input += synapse0x1308a70();
   input += synapse0x1308ab0();
   input += synapse0x1308af0();
   input += synapse0x1308b30();
   input += synapse0x1308b70();
   input += synapse0x1308bb0();
   input += synapse0x1308640();
   input += synapse0x1308680();
   input += synapse0x1308d00();
   input += synapse0x1308d40();
   input += synapse0x1308d80();
   input += synapse0x1308dc0();
   input += synapse0x1308e00();
   input += synapse0x1308e40();
   input += synapse0x1308e80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x13084b0() {
   double input = input0x13084b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1308ec0() {
   double input = 0.250493;
   input += synapse0x1309200();
   input += synapse0x1309240();
   input += synapse0x1309280();
   input += synapse0x13092c0();
   input += synapse0x1309300();
   input += synapse0x1309340();
   input += synapse0x1309380();
   input += synapse0x13093c0();
   input += synapse0x1309400();
   input += synapse0x1309440();
   input += synapse0x1309480();
   input += synapse0x13094c0();
   input += synapse0x1309500();
   input += synapse0x1309540();
   input += synapse0x1309580();
   input += synapse0x13095c0();
   input += synapse0x1309050();
   input += synapse0x1309090();
   input += synapse0x1309710();
   input += synapse0x1309750();
   input += synapse0x1309790();
   input += synapse0x13097d0();
   input += synapse0x1309810();
   input += synapse0x1309850();
   input += synapse0x1309890();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1308ec0() {
   double input = input0x1308ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x13098d0() {
   double input = -0.42682;
   input += synapse0x1309af0();
   input += synapse0x1309b30();
   input += synapse0x1309b70();
   input += synapse0x1309bb0();
   input += synapse0x1309bf0();
   input += synapse0x1309c30();
   input += synapse0x1309c70();
   input += synapse0x1309cb0();
   input += synapse0x1309cf0();
   input += synapse0x1309d30();
   input += synapse0x1309d70();
   input += synapse0x1309db0();
   input += synapse0x1309df0();
   input += synapse0x1309e30();
   input += synapse0x1309e70();
   input += synapse0x1309eb0();
   input += synapse0x12eeec0();
   input += synapse0x12eef00();
   input += synapse0x130a000();
   input += synapse0x130a040();
   input += synapse0x130a080();
   input += synapse0x130a0c0();
   input += synapse0x130a100();
   input += synapse0x130a140();
   input += synapse0x130a180();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x13098d0() {
   double input = input0x13098d0();
   return (input * 2.95571)+134.779;
}

double nnFunc_25_25hi_1500ep__::synapse0x11fb330() {
   return (neuron0x12ede80()*-1.9176);
}

double nnFunc_25_25hi_1500ep__::synapse0x12dd2f0() {
   return (neuron0x12ee1c0()*-0.00279791);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef2a0() {
   return (neuron0x12ee500()*0.202784);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef2e0() {
   return (neuron0x12ee840()*0.207682);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef320() {
   return (neuron0x12eeb80()*-4.37858);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef6a0() {
   return (neuron0x12ede80()*-0.754717);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef6e0() {
   return (neuron0x12ee1c0()*0.158861);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef720() {
   return (neuron0x12ee500()*0.752427);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef760() {
   return (neuron0x12ee840()*-0.845776);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef7a0() {
   return (neuron0x12eeb80()*0.553105);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efb20() {
   return (neuron0x12ede80()*-1.15029);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efb60() {
   return (neuron0x12ee1c0()*0.699105);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efba0() {
   return (neuron0x12ee500()*0.372938);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efbe0() {
   return (neuron0x12ee840()*0.132281);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efc20() {
   return (neuron0x12eeb80()*0.285364);
}

double nnFunc_25_25hi_1500ep__::synapse0x12effa0() {
   return (neuron0x12ede80()*1.30295);
}

double nnFunc_25_25hi_1500ep__::synapse0x12effe0() {
   return (neuron0x12ee1c0()*-0.756845);
}

double nnFunc_25_25hi_1500ep__::synapse0x11ed520() {
   return (neuron0x12ee500()*0.165109);
}

double nnFunc_25_25hi_1500ep__::synapse0x11ed560() {
   return (neuron0x12ee840()*-0.799051);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0130() {
   return (neuron0x12eeb80()*-0.338046);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f04b0() {
   return (neuron0x12ede80()*-1.81058);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f04f0() {
   return (neuron0x12ee1c0()*0.403337);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0530() {
   return (neuron0x12ee500()*-0.406174);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0570() {
   return (neuron0x12ee840()*0.0647856);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f05b0() {
   return (neuron0x12eeb80()*1.62821);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0930() {
   return (neuron0x12ede80()*0.345216);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0970() {
   return (neuron0x12ee1c0()*0.0366798);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f09b0() {
   return (neuron0x12ee500()*0.153961);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f09f0() {
   return (neuron0x12ee840()*-0.0306249);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0a30() {
   return (neuron0x12eeb80()*1.15016);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0db0() {
   return (neuron0x12ede80()*-0.946307);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0df0() {
   return (neuron0x12ee1c0()*-0.0306659);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0e30() {
   return (neuron0x12ee500()*0.151012);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0020() {
   return (neuron0x12ee840()*1.87833);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0060() {
   return (neuron0x12eeb80()*-0.0613007);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1330() {
   return (neuron0x12ede80()*-0.522419);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1370() {
   return (neuron0x12ee1c0()*1.30429);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f13b0() {
   return (neuron0x12ee500()*-0.883544);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f13f0() {
   return (neuron0x12ee840()*-0.975341);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1430() {
   return (neuron0x12eeb80()*0.431939);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f17b0() {
   return (neuron0x12ede80()*0.0770786);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f17f0() {
   return (neuron0x12ee1c0()*0.0573096);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1830() {
   return (neuron0x12ee500()*0.0489077);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1870() {
   return (neuron0x12ee840()*1.843);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f18b0() {
   return (neuron0x12eeb80()*-0.207346);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1c30() {
   return (neuron0x12ede80()*1.6533);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1c70() {
   return (neuron0x12ee1c0()*-0.732748);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1cb0() {
   return (neuron0x12ee500()*-4.53659);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1cf0() {
   return (neuron0x12ee840()*-1.18934);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1d30() {
   return (neuron0x12eeb80()*0.0669549);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f20b0() {
   return (neuron0x12ede80()*-1.4241);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f20f0() {
   return (neuron0x12ee1c0()*0.205786);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2130() {
   return (neuron0x12ee500()*0.558814);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2170() {
   return (neuron0x12ee840()*0.488564);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f21b0() {
   return (neuron0x12eeb80()*0.485566);
}

double nnFunc_25_25hi_1500ep__::synapse0x11ed370() {
   return (neuron0x12ede80()*-1.77172);
}

double nnFunc_25_25hi_1500ep__::synapse0x11ed3b0() {
   return (neuron0x12ee1c0()*0.767994);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2640() {
   return (neuron0x12ee500()*4.99393);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2680() {
   return (neuron0x12ee840()*0.789653);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f26c0() {
   return (neuron0x12eeb80()*1.13552);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2a40() {
   return (neuron0x12ede80()*-1.79687);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2a80() {
   return (neuron0x12ee1c0()*0.543068);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2ac0() {
   return (neuron0x12ee500()*1.12029);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2b00() {
   return (neuron0x12ee840()*-1.88478);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2b40() {
   return (neuron0x12eeb80()*0.643183);
}

double nnFunc_25_25hi_1500ep__::synapse0x11edb40() {
   return (neuron0x12ede80()*0.828954);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1000() {
   return (neuron0x12ee1c0()*0.00334994);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1040() {
   return (neuron0x12ee500()*-0.14359);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2f90() {
   return (neuron0x12ee840()*1.17742);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2fd0() {
   return (neuron0x12eeb80()*1.07464);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3350() {
   return (neuron0x12ede80()*0.51243);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3390() {
   return (neuron0x12ee1c0()*-0.370523);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f33d0() {
   return (neuron0x12ee500()*-0.366133);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3410() {
   return (neuron0x12ee840()*-0.336662);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3450() {
   return (neuron0x12eeb80()*-0.318981);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f37d0() {
   return (neuron0x12ede80()*-1.09343);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ee0a0() {
   return (neuron0x12ee1c0()*-0.0117881);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ee0e0() {
   return (neuron0x12ee500()*0.143448);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ee3e0() {
   return (neuron0x12ee840()*-1.27379);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ee420() {
   return (neuron0x12eeb80()*-0.868187);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3ef0() {
   return (neuron0x12ede80()*0.115913);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3f30() {
   return (neuron0x12ee1c0()*0.00565296);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3f70() {
   return (neuron0x12ee500()*-0.0157054);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3fb0() {
   return (neuron0x12ee840()*3.16172);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3ff0() {
   return (neuron0x12eeb80()*0.725592);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4370() {
   return (neuron0x12ede80()*-0.314026);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f43b0() {
   return (neuron0x12ee1c0()*0.658146);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f43f0() {
   return (neuron0x12ee500()*0.73161);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4430() {
   return (neuron0x12ee840()*0.547488);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4470() {
   return (neuron0x12eeb80()*-0.287574);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f47f0() {
   return (neuron0x12ede80()*-0.314008);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4830() {
   return (neuron0x12ee1c0()*-0.0109021);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4870() {
   return (neuron0x12ee500()*0.054839);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f48b0() {
   return (neuron0x12ee840()*2.82515);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f48f0() {
   return (neuron0x12eeb80()*-0.792968);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4c70() {
   return (neuron0x12ede80()*-0.496462);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4cb0() {
   return (neuron0x12ee1c0()*-0.00584848);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4cf0() {
   return (neuron0x12ee500()*-0.0201124);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4d30() {
   return (neuron0x12ee840()*1.27263);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4d70() {
   return (neuron0x12eeb80()*-2.25771);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f50f0() {
   return (neuron0x12ede80()*0.288352);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5130() {
   return (neuron0x12ee1c0()*-0.0135446);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5170() {
   return (neuron0x12ee500()*0.498162);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f51b0() {
   return (neuron0x12ee840()*0.458013);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f51f0() {
   return (neuron0x12eeb80()*-0.649875);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5570() {
   return (neuron0x12ede80()*-1.89237);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f55b0() {
   return (neuron0x12ee1c0()*0.599112);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f55f0() {
   return (neuron0x12ee500()*1.38868);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5630() {
   return (neuron0x12ee840()*-1.26368);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5670() {
   return (neuron0x12eeb80()*0.336026);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f59f0() {
   return (neuron0x12ede80()*-0.493247);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5a30() {
   return (neuron0x12ee1c0()*0.270818);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5a70() {
   return (neuron0x12ee500()*0.550848);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5ab0() {
   return (neuron0x12ee840()*-1.19729);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5af0() {
   return (neuron0x12eeb80()*0.418572);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5e70() {
   return (neuron0x12ede80()*1.19658);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5eb0() {
   return (neuron0x12ee1c0()*0.00555122);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5ef0() {
   return (neuron0x12ee500()*-0.126825);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5f30() {
   return (neuron0x12ee840()*-0.443631);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5f70() {
   return (neuron0x12eeb80()*2.45309);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f62f0() {
   return (neuron0x12ede80()*0.477732);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f6330() {
   return (neuron0x12ee1c0()*-0.0572278);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f6370() {
   return (neuron0x12ee500()*-0.143248);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f63b0() {
   return (neuron0x12ee840()*-5.86487);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f63f0() {
   return (neuron0x12eeb80()*-0.885809);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eff10() {
   return (neuron0x12eeff0()*0.137906);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eff50() {
   return (neuron0x12ef360()*-0.034285);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0420() {
   return (neuron0x12ef7e0()*0.082729);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0460() {
   return (neuron0x12efc60()*-0.626473);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f08a0() {
   return (neuron0x12f0170()*-0.0338573);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f08e0() {
   return (neuron0x12f05f0()*0.149469);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0d20() {
   return (neuron0x12f0a70()*0.196435);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0d60() {
   return (neuron0x12f1080()*0.446764);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f12a0() {
   return (neuron0x12f1470()*-0.215746);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f12e0() {
   return (neuron0x12f18f0()*0.0706578);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1720() {
   return (neuron0x12f1d70()*0.441706);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1760() {
   return (neuron0x12f21f0()*-0.0902809);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1ba0() {
   return (neuron0x12f2700()*-0.379368);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1be0() {
   return (neuron0x12f0e70()*0.565643);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2020() {
   return (neuron0x12f3010()*-0.350568);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2060() {
   return (neuron0x12f3490()*-1.86963);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f24a0() {
   return (neuron0x12f3d60()*-1.995);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f24e0() {
   return (neuron0x12f4030()*-0.687816);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f29b0() {
   return (neuron0x12f44b0()*1.43319);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f29f0() {
   return (neuron0x12f4930()*-0.920117);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f32c0() {
   return (neuron0x12f4db0()*0.341159);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3300() {
   return (neuron0x12f5230()*-0.430868);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3740() {
   return (neuron0x12f56b0()*-0.0363365);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f3780() {
   return (neuron0x12f5b30()*-1.22311);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eeda0() {
   return (neuron0x12f5fb0()*-0.402831);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2e20() {
   return (neuron0x12eeff0()*-0.128716);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2e60() {
   return (neuron0x12ef360()*0.00294009);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2ea0() {
   return (neuron0x12ef7e0()*0.0875909);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2ee0() {
   return (neuron0x12efc60()*0.48047);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2f20() {
   return (neuron0x12f0170()*0.243144);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eede0() {
   return (neuron0x12f05f0()*-0.725072);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5060() {
   return (neuron0x12f0a70()*-0.0665549);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f50a0() {
   return (neuron0x12f1080()*-0.143929);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f54e0() {
   return (neuron0x12f1470()*0.492716);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5520() {
   return (neuron0x12f18f0()*0.286898);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5960() {
   return (neuron0x12f1d70()*0.482361);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f59a0() {
   return (neuron0x12f21f0()*-0.800969);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5de0() {
   return (neuron0x12f2700()*-0.279064);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5e20() {
   return (neuron0x12f0e70()*-0.245482);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f6260() {
   return (neuron0x12f3010()*-0.125182);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f62a0() {
   return (neuron0x12f3490()*1.27124);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef210() {
   return (neuron0x12f3d60()*1.27271);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef250() {
   return (neuron0x12f4030()*0.0783385);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f42e0() {
   return (neuron0x12f44b0()*-0.650561);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4320() {
   return (neuron0x12f4930()*0.444766);
}

double nnFunc_25_25hi_1500ep__::synapse0x11fb400() {
   return (neuron0x12f4db0()*-0.09406);
}

double nnFunc_25_25hi_1500ep__::synapse0x11fb440() {
   return (neuron0x12f5230()*0.356537);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8970() {
   return (neuron0x12f56b0()*0.329427);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f89b0() {
   return (neuron0x12f5b30()*0.796086);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f89f0() {
   return (neuron0x12f5fb0()*0.751988);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2530() {
   return (neuron0x12eeff0()*0.239617);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2570() {
   return (neuron0x12ef360()*-0.238426);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f25b0() {
   return (neuron0x12ef7e0()*0.0532437);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f25f0() {
   return (neuron0x12efc60()*0.40444);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8f80() {
   return (neuron0x12f0170()*0.189635);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8fc0() {
   return (neuron0x12f05f0()*-0.712885);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9000() {
   return (neuron0x12f0a70()*0.00259545);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9040() {
   return (neuron0x12f1080()*-0.518005);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9080() {
   return (neuron0x12f1470()*-0.107393);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f90c0() {
   return (neuron0x12f18f0()*0.101251);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9100() {
   return (neuron0x12f1d70()*0.301962);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9140() {
   return (neuron0x12f21f0()*-0.554101);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9180() {
   return (neuron0x12f2700()*-0.37912);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f91c0() {
   return (neuron0x12f0e70()*0.1469);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9200() {
   return (neuron0x12f3010()*0.450117);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9240() {
   return (neuron0x12f3490()*1.79723);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8bc0() {
   return (neuron0x12f3d60()*1.75553);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8c00() {
   return (neuron0x12f4030()*0.167125);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9390() {
   return (neuron0x12f44b0()*-0.908127);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f93d0() {
   return (neuron0x12f4930()*1.21128);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9410() {
   return (neuron0x12f4db0()*-0.130827);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9450() {
   return (neuron0x12f5230()*0.300286);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9490() {
   return (neuron0x12f56b0()*-0.169404);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f94d0() {
   return (neuron0x12f5b30()*0.767677);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9510() {
   return (neuron0x12f5fb0()*1.01012);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9890() {
   return (neuron0x12eeff0()*0.214782);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f98d0() {
   return (neuron0x12ef360()*-0.266438);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9910() {
   return (neuron0x12ef7e0()*0.514511);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9950() {
   return (neuron0x12efc60()*-0.147198);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9990() {
   return (neuron0x12f0170()*-0.000991369);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f99d0() {
   return (neuron0x12f05f0()*-0.699925);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9a10() {
   return (neuron0x12f0a70()*0.387657);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9a50() {
   return (neuron0x12f1080()*0.343744);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9a90() {
   return (neuron0x12f1470()*0.334664);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9ad0() {
   return (neuron0x12f18f0()*-0.255327);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9b10() {
   return (neuron0x12f1d70()*0.209432);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9b50() {
   return (neuron0x12f21f0()*-0.56689);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9b90() {
   return (neuron0x12f2700()*-0.126375);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9bd0() {
   return (neuron0x12f0e70()*0.0567381);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9c10() {
   return (neuron0x12f3010()*-0.321631);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9c50() {
   return (neuron0x12f3490()*0.747205);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f96e0() {
   return (neuron0x12f3d60()*0.913323);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9720() {
   return (neuron0x12f4030()*-0.174931);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9da0() {
   return (neuron0x12f44b0()*-0.356119);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9de0() {
   return (neuron0x12f4930()*0.599519);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9e20() {
   return (neuron0x12f4db0()*0.566372);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9e60() {
   return (neuron0x12f5230()*0.158885);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9ea0() {
   return (neuron0x12f56b0()*-0.180126);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9ee0() {
   return (neuron0x12f5b30()*1.06951);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f9f20() {
   return (neuron0x12f5fb0()*0.675888);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa2a0() {
   return (neuron0x12eeff0()*-0.731174);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa2e0() {
   return (neuron0x12ef360()*0.290475);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa320() {
   return (neuron0x12ef7e0()*0.0693932);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa360() {
   return (neuron0x12efc60()*-0.0867551);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa3a0() {
   return (neuron0x12f0170()*0.22099);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa3e0() {
   return (neuron0x12f05f0()*-0.913133);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa420() {
   return (neuron0x12f0a70()*0.411081);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa460() {
   return (neuron0x12f1080()*0.28539);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa4a0() {
   return (neuron0x12f1470()*-0.35318);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa4e0() {
   return (neuron0x12f18f0()*0.288609);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa520() {
   return (neuron0x12f1d70()*0.197209);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa560() {
   return (neuron0x12f21f0()*-1.03149);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa5a0() {
   return (neuron0x12f2700()*-0.36279);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa5e0() {
   return (neuron0x12f0e70()*-0.34787);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa620() {
   return (neuron0x12f3010()*-0.561118);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa660() {
   return (neuron0x12f3490()*3.21229);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa0f0() {
   return (neuron0x12f3d60()*1.71053);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa130() {
   return (neuron0x12f4030()*0.0700656);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa7b0() {
   return (neuron0x12f44b0()*-1.62673);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa7f0() {
   return (neuron0x12f4930()*1.77722);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa830() {
   return (neuron0x12f4db0()*-0.632295);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa870() {
   return (neuron0x12f5230()*0.13818);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa8b0() {
   return (neuron0x12f56b0()*-0.358644);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa8f0() {
   return (neuron0x12f5b30()*1.11167);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fa930() {
   return (neuron0x12f5fb0()*0.929733);
}

double nnFunc_25_25hi_1500ep__::synapse0x12facb0() {
   return (neuron0x12eeff0()*0.680581);
}

double nnFunc_25_25hi_1500ep__::synapse0x12facf0() {
   return (neuron0x12ef360()*0.0485567);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fad30() {
   return (neuron0x12ef7e0()*0.0488364);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fad70() {
   return (neuron0x12efc60()*-0.325327);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fadb0() {
   return (neuron0x12f0170()*1.19129);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fadf0() {
   return (neuron0x12f05f0()*-0.7639);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fae30() {
   return (neuron0x12f0a70()*0.301203);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8050() {
   return (neuron0x12f1080()*0.408414);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8090() {
   return (neuron0x12f1470()*1.18392);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f80d0() {
   return (neuron0x12f18f0()*0.693335);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8110() {
   return (neuron0x12f1d70()*-0.00819254);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8150() {
   return (neuron0x12f21f0()*-0.757122);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8190() {
   return (neuron0x12f2700()*-1.04001);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f81d0() {
   return (neuron0x12f0e70()*0.176075);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8210() {
   return (neuron0x12f3010()*0.210278);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8250() {
   return (neuron0x12f3490()*0.694563);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fab00() {
   return (neuron0x12f3d60()*1.14555);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fab40() {
   return (neuron0x12f4030()*-0.640111);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f83a0() {
   return (neuron0x12f44b0()*-1.14461);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f83e0() {
   return (neuron0x12f4930()*0.793715);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8420() {
   return (neuron0x12f4db0()*-0.510419);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8460() {
   return (neuron0x12f5230()*0.410291);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f84a0() {
   return (neuron0x12f56b0()*-0.67022);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f84e0() {
   return (neuron0x12f5b30()*2.05203);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8520() {
   return (neuron0x12f5fb0()*1.20648);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8810() {
   return (neuron0x12eeff0()*-1.12384);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fbf10() {
   return (neuron0x12ef360()*-0.440121);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fbf50() {
   return (neuron0x12ef7e0()*0.22618);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fbf90() {
   return (neuron0x12efc60()*-0.519423);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fbfd0() {
   return (neuron0x12f0170()*0.311037);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc010() {
   return (neuron0x12f05f0()*0.185405);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc050() {
   return (neuron0x12f0a70()*-0.134982);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc090() {
   return (neuron0x12f1080()*-0.252411);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc0d0() {
   return (neuron0x12f1470()*-0.409072);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc110() {
   return (neuron0x12f18f0()*-0.073823);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc150() {
   return (neuron0x12f1d70()*0.0782897);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc190() {
   return (neuron0x12f21f0()*0.856105);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc1d0() {
   return (neuron0x12f2700()*-0.214936);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc210() {
   return (neuron0x12f0e70()*1.36813);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc250() {
   return (neuron0x12f3010()*0.566111);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc290() {
   return (neuron0x12f3490()*-1.09508);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f86f0() {
   return (neuron0x12f3d60()*-1.96526);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f8730() {
   return (neuron0x12f4030()*-0.551427);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc3e0() {
   return (neuron0x12f44b0()*1.59151);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc420() {
   return (neuron0x12f4930()*-0.574346);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc460() {
   return (neuron0x12f4db0()*-0.210117);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc4a0() {
   return (neuron0x12f5230()*-0.380066);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc4e0() {
   return (neuron0x12f56b0()*0.425269);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc520() {
   return (neuron0x12f5b30()*-0.533197);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc560() {
   return (neuron0x12f5fb0()*-0.406766);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc8e0() {
   return (neuron0x12eeff0()*1.14068);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc920() {
   return (neuron0x12ef360()*-0.145305);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc960() {
   return (neuron0x12ef7e0()*0.614746);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc9a0() {
   return (neuron0x12efc60()*-0.311028);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc9e0() {
   return (neuron0x12f0170()*0.77421);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fca20() {
   return (neuron0x12f05f0()*-0.364593);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fca60() {
   return (neuron0x12f0a70()*1.03864);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcaa0() {
   return (neuron0x12f1080()*0.0613767);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcae0() {
   return (neuron0x12f1470()*1.27565);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcb20() {
   return (neuron0x12f18f0()*0.322253);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcb60() {
   return (neuron0x12f1d70()*0.230038);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcba0() {
   return (neuron0x12f21f0()*-1.17516);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcbe0() {
   return (neuron0x12f2700()*-1.03291);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcc20() {
   return (neuron0x12f0e70()*-0.399446);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcc60() {
   return (neuron0x12f3010()*0.647269);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcca0() {
   return (neuron0x12f3490()*1.93963);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc730() {
   return (neuron0x12f3d60()*1.83436);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fc770() {
   return (neuron0x12f4030()*-0.903566);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcdf0() {
   return (neuron0x12f44b0()*-1.79234);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fce30() {
   return (neuron0x12f4930()*1.40647);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fce70() {
   return (neuron0x12f4db0()*-0.226588);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fceb0() {
   return (neuron0x12f5230()*1.01843);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcef0() {
   return (neuron0x12f56b0()*-1.16297);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcf30() {
   return (neuron0x12f5b30()*3.23121);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fcf70() {
   return (neuron0x12f5fb0()*1.16014);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd2f0() {
   return (neuron0x12eeff0()*-0.390683);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd330() {
   return (neuron0x12ef360()*0.0786325);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd370() {
   return (neuron0x12ef7e0()*-0.0358173);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd3b0() {
   return (neuron0x12efc60()*0.0510486);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd3f0() {
   return (neuron0x12f0170()*-1.08286);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd430() {
   return (neuron0x12f05f0()*0.0818288);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd470() {
   return (neuron0x12f0a70()*-0.409744);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd4b0() {
   return (neuron0x12f1080()*0.0853443);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd4f0() {
   return (neuron0x12f1470()*-0.0573705);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd530() {
   return (neuron0x12f18f0()*-0.591394);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd570() {
   return (neuron0x12f1d70()*0.312007);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd5b0() {
   return (neuron0x12f21f0()*1.02706);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd5f0() {
   return (neuron0x12f2700()*-0.291533);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd630() {
   return (neuron0x12f0e70()*-0.254585);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd670() {
   return (neuron0x12f3010()*-0.276198);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd6b0() {
   return (neuron0x12f3490()*-0.549111);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd140() {
   return (neuron0x12f3d60()*-0.767955);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd180() {
   return (neuron0x12f4030()*0.343605);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd800() {
   return (neuron0x12f44b0()*0.608907);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd840() {
   return (neuron0x12f4930()*-0.04761);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd880() {
   return (neuron0x12f4db0()*-0.217922);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd8c0() {
   return (neuron0x12f5230()*0.0815195);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd900() {
   return (neuron0x12f56b0()*0.00989626);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd940() {
   return (neuron0x12f5b30()*-0.38078);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fd980() {
   return (neuron0x12f5fb0()*0.0110556);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdd00() {
   return (neuron0x12eeff0()*-0.335547);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdd40() {
   return (neuron0x12ef360()*0.152036);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdd80() {
   return (neuron0x12ef7e0()*0.0454848);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fddc0() {
   return (neuron0x12efc60()*0.668354);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fde00() {
   return (neuron0x12f0170()*-0.224946);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fde40() {
   return (neuron0x12f05f0()*0.785391);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fde80() {
   return (neuron0x12f0a70()*-0.510671);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdec0() {
   return (neuron0x12f1080()*0.281108);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdf00() {
   return (neuron0x12f1470()*-0.530447);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdf40() {
   return (neuron0x12f18f0()*0.149571);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdf80() {
   return (neuron0x12f1d70()*-0.273338);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdfc0() {
   return (neuron0x12f21f0()*0.234388);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe000() {
   return (neuron0x12f2700()*0.370172);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe040() {
   return (neuron0x12f0e70()*0.938111);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe080() {
   return (neuron0x12f3010()*0.503234);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe0c0() {
   return (neuron0x12f3490()*-2.16397);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdb50() {
   return (neuron0x12f3d60()*-2.24859);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fdb90() {
   return (neuron0x12f4030()*-0.592689);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe210() {
   return (neuron0x12f44b0()*1.87228);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe250() {
   return (neuron0x12f4930()*-1.30923);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe290() {
   return (neuron0x12f4db0()*0.203183);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe2d0() {
   return (neuron0x12f5230()*-0.352283);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe310() {
   return (neuron0x12f56b0()*0.129997);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe350() {
   return (neuron0x12f5b30()*-1.06761);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe390() {
   return (neuron0x12f5fb0()*-1.15067);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe710() {
   return (neuron0x12eeff0()*-0.00845668);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe750() {
   return (neuron0x12ef360()*0.372071);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe790() {
   return (neuron0x12ef7e0()*0.561774);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe7d0() {
   return (neuron0x12efc60()*-0.190847);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe810() {
   return (neuron0x12f0170()*0.567587);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe850() {
   return (neuron0x12f05f0()*0.568891);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe890() {
   return (neuron0x12f0a70()*0.099853);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe8d0() {
   return (neuron0x12f1080()*-0.246913);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe910() {
   return (neuron0x12f1470()*0.605516);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe950() {
   return (neuron0x12f18f0()*0.0203493);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe990() {
   return (neuron0x12f1d70()*0.197061);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe9d0() {
   return (neuron0x12f21f0()*0.500102);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fea10() {
   return (neuron0x12f2700()*0.263469);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fea50() {
   return (neuron0x12f0e70()*-0.254923);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fea90() {
   return (neuron0x12f3010()*-0.1238);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fead0() {
   return (neuron0x12f3490()*-0.122505);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe560() {
   return (neuron0x12f3d60()*0.358386);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fe5a0() {
   return (neuron0x12f4030()*-0.0290541);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fec20() {
   return (neuron0x12f44b0()*0.36197);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fec60() {
   return (neuron0x12f4930()*0.0453518);
}

double nnFunc_25_25hi_1500ep__::synapse0x12feca0() {
   return (neuron0x12f4db0()*0.056795);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fece0() {
   return (neuron0x12f5230()*-0.19544);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fed20() {
   return (neuron0x12f56b0()*0.328543);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fed60() {
   return (neuron0x12f5b30()*-0.144638);
}

double nnFunc_25_25hi_1500ep__::synapse0x12feda0() {
   return (neuron0x12f5fb0()*0.0466975);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff120() {
   return (neuron0x12eeff0()*0.179861);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff160() {
   return (neuron0x12ef360()*-0.358719);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff1a0() {
   return (neuron0x12ef7e0()*-0.684053);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff1e0() {
   return (neuron0x12efc60()*0.120296);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff220() {
   return (neuron0x12f0170()*-0.729091);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff260() {
   return (neuron0x12f05f0()*0.469429);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff2a0() {
   return (neuron0x12f0a70()*-0.116098);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff2e0() {
   return (neuron0x12f1080()*0.51728);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff320() {
   return (neuron0x12f1470()*0.0546193);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff360() {
   return (neuron0x12f18f0()*-0.0298374);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff3a0() {
   return (neuron0x12f1d70()*-0.330054);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff3e0() {
   return (neuron0x12f21f0()*0.614952);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff420() {
   return (neuron0x12f2700()*0.184946);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff460() {
   return (neuron0x12f0e70()*0.563331);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff4a0() {
   return (neuron0x12f3010()*0.469647);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff4e0() {
   return (neuron0x12f3490()*-0.909377);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fef70() {
   return (neuron0x12f3d60()*-0.829752);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fefb0() {
   return (neuron0x12f4030()*0.429101);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff630() {
   return (neuron0x12f44b0()*0.455592);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff670() {
   return (neuron0x12f4930()*-0.372666);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff6b0() {
   return (neuron0x12f4db0()*0.099501);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff6f0() {
   return (neuron0x12f5230()*0.244708);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff730() {
   return (neuron0x12f56b0()*0.198757);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff770() {
   return (neuron0x12f5b30()*-0.415643);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff7b0() {
   return (neuron0x12f5fb0()*-0.145338);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffb30() {
   return (neuron0x12eeff0()*0.451395);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffb70() {
   return (neuron0x12ef360()*-0.340884);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffbb0() {
   return (neuron0x12ef7e0()*0.414508);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffbf0() {
   return (neuron0x12efc60()*-0.131835);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffc30() {
   return (neuron0x12f0170()*-0.187373);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffc70() {
   return (neuron0x12f05f0()*-0.19168);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffcb0() {
   return (neuron0x12f0a70()*0.372503);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffcf0() {
   return (neuron0x12f1080()*-0.159098);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffd30() {
   return (neuron0x12f1470()*-0.163706);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffd70() {
   return (neuron0x12f18f0()*0.0031129);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffdb0() {
   return (neuron0x12f1d70()*0.208112);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffdf0() {
   return (neuron0x12f21f0()*-0.0340379);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffe30() {
   return (neuron0x12f2700()*-0.738206);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffe70() {
   return (neuron0x12f0e70()*-0.463657);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffeb0() {
   return (neuron0x12f3010()*0.0183908);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ffef0() {
   return (neuron0x12f3490()*1.00626);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff980() {
   return (neuron0x12f3d60()*1.2878);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ff9c0() {
   return (neuron0x12f4030()*0.0608318);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300040() {
   return (neuron0x12f44b0()*-0.795481);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300080() {
   return (neuron0x12f4930()*0.904261);
}

double nnFunc_25_25hi_1500ep__::synapse0x13000c0() {
   return (neuron0x12f4db0()*0.068337);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300100() {
   return (neuron0x12f5230()*-0.00755786);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300140() {
   return (neuron0x12f56b0()*0.0579738);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300180() {
   return (neuron0x12f5b30()*1.10534);
}

double nnFunc_25_25hi_1500ep__::synapse0x13001c0() {
   return (neuron0x12f5fb0()*0.619349);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300540() {
   return (neuron0x12eeff0()*0.125053);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300580() {
   return (neuron0x12ef360()*-0.0730159);
}

double nnFunc_25_25hi_1500ep__::synapse0x13005c0() {
   return (neuron0x12ef7e0()*-0.265527);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300600() {
   return (neuron0x12efc60()*-0.283782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300640() {
   return (neuron0x12f0170()*0.692887);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300680() {
   return (neuron0x12f05f0()*-0.345915);
}

double nnFunc_25_25hi_1500ep__::synapse0x13006c0() {
   return (neuron0x12f0a70()*0.391286);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300700() {
   return (neuron0x12f1080()*-0.257886);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300740() {
   return (neuron0x12f1470()*0.466814);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300780() {
   return (neuron0x12f18f0()*0.337587);
}

double nnFunc_25_25hi_1500ep__::synapse0x13007c0() {
   return (neuron0x12f1d70()*0.297928);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300800() {
   return (neuron0x12f21f0()*-0.353389);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300840() {
   return (neuron0x12f2700()*-0.373663);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300880() {
   return (neuron0x12f0e70()*0.246049);
}

double nnFunc_25_25hi_1500ep__::synapse0x13008c0() {
   return (neuron0x12f3010()*-0.00177277);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300900() {
   return (neuron0x12f3490()*0.539563);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300390() {
   return (neuron0x12f3d60()*-0.00409855);
}

double nnFunc_25_25hi_1500ep__::synapse0x13003d0() {
   return (neuron0x12f4030()*-0.375762);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300a50() {
   return (neuron0x12f44b0()*-0.589692);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300a90() {
   return (neuron0x12f4930()*-0.179924);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300ad0() {
   return (neuron0x12f4db0()*-0.344071);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300b10() {
   return (neuron0x12f5230()*-0.255943);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300b50() {
   return (neuron0x12f56b0()*-0.285048);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300b90() {
   return (neuron0x12f5b30()*-0.0832331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300bd0() {
   return (neuron0x12f5fb0()*0.77347);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300f50() {
   return (neuron0x12eeff0()*1.31568);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300f90() {
   return (neuron0x12ef360()*-0.0812347);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300fd0() {
   return (neuron0x12ef7e0()*-0.20747);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301010() {
   return (neuron0x12efc60()*0.157745);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301050() {
   return (neuron0x12f0170()*-0.638081);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301090() {
   return (neuron0x12f05f0()*0.444674);
}

double nnFunc_25_25hi_1500ep__::synapse0x13010d0() {
   return (neuron0x12f0a70()*-0.347145);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301110() {
   return (neuron0x12f1080()*-0.144617);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301150() {
   return (neuron0x12f1470()*0.593175);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301190() {
   return (neuron0x12f18f0()*0.242485);
}

double nnFunc_25_25hi_1500ep__::synapse0x13011d0() {
   return (neuron0x12f1d70()*-0.282144);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301210() {
   return (neuron0x12f21f0()*0.64331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301250() {
   return (neuron0x12f2700()*-0.342693);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301290() {
   return (neuron0x12f0e70()*0.139786);
}

double nnFunc_25_25hi_1500ep__::synapse0x13012d0() {
   return (neuron0x12f3010()*0.728194);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301310() {
   return (neuron0x12f3490()*-1.81383);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300da0() {
   return (neuron0x12f3d60()*-0.951495);
}

double nnFunc_25_25hi_1500ep__::synapse0x1300de0() {
   return (neuron0x12f4030()*0.331599);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301460() {
   return (neuron0x12f44b0()*0.943061);
}

double nnFunc_25_25hi_1500ep__::synapse0x13014a0() {
   return (neuron0x12f4930()*-0.18307);
}

double nnFunc_25_25hi_1500ep__::synapse0x13014e0() {
   return (neuron0x12f4db0()*0.344595);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301520() {
   return (neuron0x12f5230()*0.111857);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301560() {
   return (neuron0x12f56b0()*0.118388);
}

double nnFunc_25_25hi_1500ep__::synapse0x13015a0() {
   return (neuron0x12f5b30()*-0.846539);
}

double nnFunc_25_25hi_1500ep__::synapse0x13015e0() {
   return (neuron0x12f5fb0()*-0.597548);
}

double nnFunc_25_25hi_1500ep__::synapse0x1301960() {
   return (neuron0x12eeff0()*-0.7585);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef180() {
   return (neuron0x12ef360()*0.427175);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef1c0() {
   return (neuron0x12ef7e0()*-0.12311);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef580() {
   return (neuron0x12efc60()*0.00606856);
}

double nnFunc_25_25hi_1500ep__::synapse0x12ef5c0() {
   return (neuron0x12f0170()*0.441772);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efa00() {
   return (neuron0x12f05f0()*0.699007);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efa40() {
   return (neuron0x12f0a70()*0.0838842);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efe80() {
   return (neuron0x12f1080()*-0.42437);
}

double nnFunc_25_25hi_1500ep__::synapse0x12efec0() {
   return (neuron0x12f1470()*0.259028);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0390() {
   return (neuron0x12f18f0()*0.582684);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f03d0() {
   return (neuron0x12f1d70()*0.240031);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0810() {
   return (neuron0x12f21f0()*0.285451);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0850() {
   return (neuron0x12f2700()*-0.346716);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0c90() {
   return (neuron0x12f0e70()*0.395273);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f0cd0() {
   return (neuron0x12f3010()*0.0620401);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1210() {
   return (neuron0x12f3490()*-1.15891);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1250() {
   return (neuron0x12f3d60()*-1.08136);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1690() {
   return (neuron0x12f4030()*0.335498);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f16d0() {
   return (neuron0x12f44b0()*0.603394);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1b10() {
   return (neuron0x12f4930()*-0.195929);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1b50() {
   return (neuron0x12f4db0()*-0.689524);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1f90() {
   return (neuron0x12f5230()*-0.114131);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f1fd0() {
   return (neuron0x12f56b0()*-0.384235);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2410() {
   return (neuron0x12f5b30()*-1.13722);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2450() {
   return (neuron0x12f5fb0()*0.270849);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fbdd0() {
   return (neuron0x12eeff0()*0.316335);
}

double nnFunc_25_25hi_1500ep__::synapse0x12fbe10() {
   return (neuron0x12ef360()*-0.025473);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f36b0() {
   return (neuron0x12ef7e0()*-0.425861);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f36f0() {
   return (neuron0x12efc60()*-0.249634);
}

double nnFunc_25_25hi_1500ep__::synapse0x13017b0() {
   return (neuron0x12f0170()*-0.641099);
}

double nnFunc_25_25hi_1500ep__::synapse0x13017f0() {
   return (neuron0x12f05f0()*-0.20892);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eea60() {
   return (neuron0x12f0a70()*-0.521519);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eeaa0() {
   return (neuron0x12f1080()*-0.124228);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4250() {
   return (neuron0x12f1470()*0.306561);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4290() {
   return (neuron0x12f18f0()*0.158947);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f46d0() {
   return (neuron0x12f1d70()*-0.438902);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4710() {
   return (neuron0x12f21f0()*0.445861);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4b50() {
   return (neuron0x12f2700()*0.0127671);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4b90() {
   return (neuron0x12f0e70()*-0.227337);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f4fd0() {
   return (neuron0x12f3010()*0.345466);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5010() {
   return (neuron0x12f3490()*0.0625777);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5450() {
   return (neuron0x12f3d60()*0.101441);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5490() {
   return (neuron0x12f4030()*-0.114055);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f58d0() {
   return (neuron0x12f44b0()*0.240899);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5910() {
   return (neuron0x12f4930()*0.38228);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5d50() {
   return (neuron0x12f4db0()*0.319981);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f5d90() {
   return (neuron0x12f5230()*0.131529);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f61d0() {
   return (neuron0x12f56b0()*0.0363358);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f6210() {
   return (neuron0x12f5b30()*0.128633);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2920() {
   return (neuron0x12f5fb0()*-0.374074);
}

double nnFunc_25_25hi_1500ep__::synapse0x12f2960() {
   return (neuron0x12eeff0()*-0.122487);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304bd0() {
   return (neuron0x12ef360()*-0.134244);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304c10() {
   return (neuron0x12ef7e0()*0.317655);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304c50() {
   return (neuron0x12efc60()*0.172911);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304c90() {
   return (neuron0x12f0170()*0.341642);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304cd0() {
   return (neuron0x12f05f0()*0.30424);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304d10() {
   return (neuron0x12f0a70()*-0.540169);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304d50() {
   return (neuron0x12f1080()*0.342048);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304d90() {
   return (neuron0x12f1470()*0.453568);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304dd0() {
   return (neuron0x12f18f0()*-0.24709);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304e10() {
   return (neuron0x12f1d70()*-0.155989);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304e50() {
   return (neuron0x12f21f0()*-0.319429);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304e90() {
   return (neuron0x12f2700()*0.0195579);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304ed0() {
   return (neuron0x12f0e70()*0.361069);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304f10() {
   return (neuron0x12f3010()*0.314954);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304f50() {
   return (neuron0x12f3490()*-0.373828);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304a20() {
   return (neuron0x12f3d60()*-0.515632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1304a60() {
   return (neuron0x12f4030()*-0.263023);
}

double nnFunc_25_25hi_1500ep__::synapse0x13050a0() {
   return (neuron0x12f44b0()*0.428528);
}

double nnFunc_25_25hi_1500ep__::synapse0x13050e0() {
   return (neuron0x12f4930()*-0.180314);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305120() {
   return (neuron0x12f4db0()*0.349246);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305160() {
   return (neuron0x12f5230()*-0.299699);
}

double nnFunc_25_25hi_1500ep__::synapse0x13051a0() {
   return (neuron0x12f56b0()*0.113753);
}

double nnFunc_25_25hi_1500ep__::synapse0x13051e0() {
   return (neuron0x12f5b30()*-0.243988);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305220() {
   return (neuron0x12f5fb0()*0.285461);
}

double nnFunc_25_25hi_1500ep__::synapse0x13055a0() {
   return (neuron0x12eeff0()*0.271954);
}

double nnFunc_25_25hi_1500ep__::synapse0x13055e0() {
   return (neuron0x12ef360()*0.00211663);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305620() {
   return (neuron0x12ef7e0()*-0.25956);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305660() {
   return (neuron0x12efc60()*-0.476697);
}

double nnFunc_25_25hi_1500ep__::synapse0x13056a0() {
   return (neuron0x12f0170()*0.43436);
}

double nnFunc_25_25hi_1500ep__::synapse0x13056e0() {
   return (neuron0x12f05f0()*-0.213388);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305720() {
   return (neuron0x12f0a70()*0.331906);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305760() {
   return (neuron0x12f1080()*0.424525);
}

double nnFunc_25_25hi_1500ep__::synapse0x13057a0() {
   return (neuron0x12f1470()*0.722799);
}

double nnFunc_25_25hi_1500ep__::synapse0x13057e0() {
   return (neuron0x12f18f0()*-0.0549833);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305820() {
   return (neuron0x12f1d70()*0.231431);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305860() {
   return (neuron0x12f21f0()*-0.182228);
}

double nnFunc_25_25hi_1500ep__::synapse0x13058a0() {
   return (neuron0x12f2700()*-0.232569);
}

double nnFunc_25_25hi_1500ep__::synapse0x13058e0() {
   return (neuron0x12f0e70()*-0.287405);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305920() {
   return (neuron0x12f3010()*0.327867);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305960() {
   return (neuron0x12f3490()*0.0834358);
}

double nnFunc_25_25hi_1500ep__::synapse0x13053f0() {
   return (neuron0x12f3d60()*1.22851);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305430() {
   return (neuron0x12f4030()*0.1035);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305ab0() {
   return (neuron0x12f44b0()*-0.823383);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305af0() {
   return (neuron0x12f4930()*0.565295);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305b30() {
   return (neuron0x12f4db0()*-0.370716);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305b70() {
   return (neuron0x12f5230()*0.159873);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305bb0() {
   return (neuron0x12f56b0()*-0.530593);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305bf0() {
   return (neuron0x12f5b30()*1.30928);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305c30() {
   return (neuron0x12f5fb0()*0.805875);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305fb0() {
   return (neuron0x12eeff0()*-0.703236);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305ff0() {
   return (neuron0x12ef360()*-0.199441);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306030() {
   return (neuron0x12ef7e0()*0.449079);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306070() {
   return (neuron0x12efc60()*0.305391);
}

double nnFunc_25_25hi_1500ep__::synapse0x13060b0() {
   return (neuron0x12f0170()*-0.473306);
}

double nnFunc_25_25hi_1500ep__::synapse0x13060f0() {
   return (neuron0x12f05f0()*0.507292);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306130() {
   return (neuron0x12f0a70()*0.0742333);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306170() {
   return (neuron0x12f1080()*0.0126305);
}

double nnFunc_25_25hi_1500ep__::synapse0x13061b0() {
   return (neuron0x12f1470()*0.231727);
}

double nnFunc_25_25hi_1500ep__::synapse0x13061f0() {
   return (neuron0x12f18f0()*0.895519);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306230() {
   return (neuron0x12f1d70()*0.277605);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306270() {
   return (neuron0x12f21f0()*0.351536);
}

double nnFunc_25_25hi_1500ep__::synapse0x13062b0() {
   return (neuron0x12f2700()*-0.529807);
}

double nnFunc_25_25hi_1500ep__::synapse0x13062f0() {
   return (neuron0x12f0e70()*0.913188);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306330() {
   return (neuron0x12f3010()*-0.145075);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306370() {
   return (neuron0x12f3490()*-1.13705);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305e00() {
   return (neuron0x12f3d60()*-1.48209);
}

double nnFunc_25_25hi_1500ep__::synapse0x1305e40() {
   return (neuron0x12f4030()*0.232843);
}

double nnFunc_25_25hi_1500ep__::synapse0x13064c0() {
   return (neuron0x12f44b0()*0.606038);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306500() {
   return (neuron0x12f4930()*-0.484545);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306540() {
   return (neuron0x12f4db0()*-0.178406);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306580() {
   return (neuron0x12f5230()*-0.0278404);
}

double nnFunc_25_25hi_1500ep__::synapse0x13065c0() {
   return (neuron0x12f56b0()*0.119866);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306600() {
   return (neuron0x12f5b30()*-1.48234);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306640() {
   return (neuron0x12f5fb0()*-0.415892);
}

double nnFunc_25_25hi_1500ep__::synapse0x13069c0() {
   return (neuron0x12eeff0()*-0.0122804);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306a00() {
   return (neuron0x12ef360()*-0.189698);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306a40() {
   return (neuron0x12ef7e0()*0.446889);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306a80() {
   return (neuron0x12efc60()*-0.532681);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306ac0() {
   return (neuron0x12f0170()*-0.328469);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306b00() {
   return (neuron0x12f05f0()*-0.0964965);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306b40() {
   return (neuron0x12f0a70()*0.406976);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306b80() {
   return (neuron0x12f1080()*-0.443032);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306bc0() {
   return (neuron0x12f1470()*-0.396203);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306c00() {
   return (neuron0x12f18f0()*-0.00227055);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306c40() {
   return (neuron0x12f1d70()*0.203869);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306c80() {
   return (neuron0x12f21f0()*0.248458);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306cc0() {
   return (neuron0x12f2700()*-0.34585);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306d00() {
   return (neuron0x12f0e70()*0.215504);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306d40() {
   return (neuron0x12f3010()*-0.490762);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306d80() {
   return (neuron0x12f3490()*-0.177879);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306810() {
   return (neuron0x12f3d60()*-0.441065);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306850() {
   return (neuron0x12f4030()*0.109171);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306ed0() {
   return (neuron0x12f44b0()*-0.339154);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306f10() {
   return (neuron0x12f4930()*-0.495016);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306f50() {
   return (neuron0x12f4db0()*-0.0232034);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306f90() {
   return (neuron0x12f5230()*0.13764);
}

double nnFunc_25_25hi_1500ep__::synapse0x1306fd0() {
   return (neuron0x12f56b0()*-0.422658);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307010() {
   return (neuron0x12f5b30()*-0.655337);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307050() {
   return (neuron0x12f5fb0()*0.382496);
}

double nnFunc_25_25hi_1500ep__::synapse0x13073d0() {
   return (neuron0x12eeff0()*-0.483416);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307410() {
   return (neuron0x12ef360()*0.175894);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307450() {
   return (neuron0x12ef7e0()*-0.672546);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307490() {
   return (neuron0x12efc60()*0.117301);
}

double nnFunc_25_25hi_1500ep__::synapse0x13074d0() {
   return (neuron0x12f0170()*-0.815597);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307510() {
   return (neuron0x12f05f0()*-0.19377);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307550() {
   return (neuron0x12f0a70()*-0.442542);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307590() {
   return (neuron0x12f1080()*0.285154);
}

double nnFunc_25_25hi_1500ep__::synapse0x13075d0() {
   return (neuron0x12f1470()*-0.30984);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307610() {
   return (neuron0x12f18f0()*0.44268);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307650() {
   return (neuron0x12f1d70()*-0.0368079);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307690() {
   return (neuron0x12f21f0()*1.11712);
}

double nnFunc_25_25hi_1500ep__::synapse0x13076d0() {
   return (neuron0x12f2700()*0.545216);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307710() {
   return (neuron0x12f0e70()*-0.315228);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307750() {
   return (neuron0x12f3010()*0.900801);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307790() {
   return (neuron0x12f3490()*-0.75484);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307220() {
   return (neuron0x12f3d60()*-1.50716);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307260() {
   return (neuron0x12f4030()*0.138823);
}

double nnFunc_25_25hi_1500ep__::synapse0x13078e0() {
   return (neuron0x12f44b0()*1.19236);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307920() {
   return (neuron0x12f4930()*-0.839155);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307960() {
   return (neuron0x12f4db0()*-0.326756);
}

double nnFunc_25_25hi_1500ep__::synapse0x13079a0() {
   return (neuron0x12f5230()*-0.204067);
}

double nnFunc_25_25hi_1500ep__::synapse0x13079e0() {
   return (neuron0x12f56b0()*-0.262992);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307a20() {
   return (neuron0x12f5b30()*-0.973627);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307a60() {
   return (neuron0x12f5fb0()*-0.898459);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307de0() {
   return (neuron0x12eeff0()*0.499136);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307e20() {
   return (neuron0x12ef360()*0.250404);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307e60() {
   return (neuron0x12ef7e0()*-0.168892);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307ea0() {
   return (neuron0x12efc60()*-0.338094);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307ee0() {
   return (neuron0x12f0170()*0.184148);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307f20() {
   return (neuron0x12f05f0()*-0.306448);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307f60() {
   return (neuron0x12f0a70()*0.446265);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307fa0() {
   return (neuron0x12f1080()*0.322682);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307fe0() {
   return (neuron0x12f1470()*-0.15938);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308020() {
   return (neuron0x12f18f0()*-0.330112);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308060() {
   return (neuron0x12f1d70()*0.543608);
}

double nnFunc_25_25hi_1500ep__::synapse0x13080a0() {
   return (neuron0x12f21f0()*-0.477367);
}

double nnFunc_25_25hi_1500ep__::synapse0x13080e0() {
   return (neuron0x12f2700()*-0.276783);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308120() {
   return (neuron0x12f0e70()*-0.351386);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308160() {
   return (neuron0x12f3010()*0.0867421);
}

double nnFunc_25_25hi_1500ep__::synapse0x13081a0() {
   return (neuron0x12f3490()*0.127225);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307c30() {
   return (neuron0x12f3d60()*0.906012);
}

double nnFunc_25_25hi_1500ep__::synapse0x1307c70() {
   return (neuron0x12f4030()*-0.12554);
}

double nnFunc_25_25hi_1500ep__::synapse0x13082f0() {
   return (neuron0x12f44b0()*-1.01426);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308330() {
   return (neuron0x12f4930()*0.401718);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308370() {
   return (neuron0x12f4db0()*0.295917);
}

double nnFunc_25_25hi_1500ep__::synapse0x13083b0() {
   return (neuron0x12f5230()*-0.278577);
}

double nnFunc_25_25hi_1500ep__::synapse0x13083f0() {
   return (neuron0x12f56b0()*-0.126961);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308430() {
   return (neuron0x12f5b30()*0.788155);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308470() {
   return (neuron0x12f5fb0()*0.462117);
}

double nnFunc_25_25hi_1500ep__::synapse0x13087f0() {
   return (neuron0x12eeff0()*-0.115472);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308830() {
   return (neuron0x12ef360()*-0.36329);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308870() {
   return (neuron0x12ef7e0()*0.411628);
}

double nnFunc_25_25hi_1500ep__::synapse0x13088b0() {
   return (neuron0x12efc60()*-0.118267);
}

double nnFunc_25_25hi_1500ep__::synapse0x13088f0() {
   return (neuron0x12f0170()*0.201134);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308930() {
   return (neuron0x12f05f0()*-0.494955);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308970() {
   return (neuron0x12f0a70()*0.082552);
}

double nnFunc_25_25hi_1500ep__::synapse0x13089b0() {
   return (neuron0x12f1080()*-0.233667);
}

double nnFunc_25_25hi_1500ep__::synapse0x13089f0() {
   return (neuron0x12f1470()*-0.217667);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308a30() {
   return (neuron0x12f18f0()*-0.504632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308a70() {
   return (neuron0x12f1d70()*-0.288854);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308ab0() {
   return (neuron0x12f21f0()*0.0740824);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308af0() {
   return (neuron0x12f2700()*0.241422);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308b30() {
   return (neuron0x12f0e70()*0.326673);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308b70() {
   return (neuron0x12f3010()*-0.41246);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308bb0() {
   return (neuron0x12f3490()*-0.493616);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308640() {
   return (neuron0x12f3d60()*-0.0300865);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308680() {
   return (neuron0x12f4030()*0.405422);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308d00() {
   return (neuron0x12f44b0()*-0.19631);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308d40() {
   return (neuron0x12f4930()*-0.371121);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308d80() {
   return (neuron0x12f4db0()*-0.0524301);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308dc0() {
   return (neuron0x12f5230()*0.0757782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308e00() {
   return (neuron0x12f56b0()*-0.39643);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308e40() {
   return (neuron0x12f5b30()*0.400865);
}

double nnFunc_25_25hi_1500ep__::synapse0x1308e80() {
   return (neuron0x12f5fb0()*0.0189448);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309200() {
   return (neuron0x12eeff0()*-0.748688);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309240() {
   return (neuron0x12ef360()*0.227083);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309280() {
   return (neuron0x12ef7e0()*-0.537263);
}

double nnFunc_25_25hi_1500ep__::synapse0x13092c0() {
   return (neuron0x12efc60()*0.000197419);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309300() {
   return (neuron0x12f0170()*0.0562787);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309340() {
   return (neuron0x12f05f0()*-0.128863);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309380() {
   return (neuron0x12f0a70()*0.0860454);
}

double nnFunc_25_25hi_1500ep__::synapse0x13093c0() {
   return (neuron0x12f1080()*0.119783);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309400() {
   return (neuron0x12f1470()*-0.585817);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309440() {
   return (neuron0x12f18f0()*-0.0624905);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309480() {
   return (neuron0x12f1d70()*-0.0177312);
}

double nnFunc_25_25hi_1500ep__::synapse0x13094c0() {
   return (neuron0x12f21f0()*0.250272);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309500() {
   return (neuron0x12f2700()*0.521459);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309540() {
   return (neuron0x12f0e70()*0.906437);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309580() {
   return (neuron0x12f3010()*0.526139);
}

double nnFunc_25_25hi_1500ep__::synapse0x13095c0() {
   return (neuron0x12f3490()*-1.75146);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309050() {
   return (neuron0x12f3d60()*-2.09345);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309090() {
   return (neuron0x12f4030()*-0.161127);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309710() {
   return (neuron0x12f44b0()*1.36711);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309750() {
   return (neuron0x12f4930()*-0.679352);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309790() {
   return (neuron0x12f4db0()*0.157328);
}

double nnFunc_25_25hi_1500ep__::synapse0x13097d0() {
   return (neuron0x12f5230()*0.342724);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309810() {
   return (neuron0x12f56b0()*0.0604869);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309850() {
   return (neuron0x12f5b30()*-0.764668);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309890() {
   return (neuron0x12f5fb0()*-0.758523);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309af0() {
   return (neuron0x12f7ec0()*-3.38523);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309b30() {
   return (neuron0x12f2c90()*2.06614);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309b70() {
   return (neuron0x12f8a30()*3.10654);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309bb0() {
   return (neuron0x12f9550()*1.58823);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309bf0() {
   return (neuron0x12f9f60()*3.70335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309c30() {
   return (neuron0x12fa970()*3.12566);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309c70() {
   return (neuron0x12f8560()*-2.65492);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309cb0() {
   return (neuron0x12fc5a0()*4.83238);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309cf0() {
   return (neuron0x12fcfb0()*-0.470823);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309d30() {
   return (neuron0x12fd9c0()*-3.91994);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309d70() {
   return (neuron0x12fe3d0()*0.4487);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309db0() {
   return (neuron0x12fede0()*-0.722753);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309df0() {
   return (neuron0x12ff7f0()*2.18153);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309e30() {
   return (neuron0x1300200()*0.134576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309e70() {
   return (neuron0x1300c10()*-2.18749);
}

double nnFunc_25_25hi_1500ep__::synapse0x1309eb0() {
   return (neuron0x1301620()*-2.06253);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eeec0() {
   return (neuron0x12fbc40()*0.514094);
}

double nnFunc_25_25hi_1500ep__::synapse0x12eef00() {
   return (neuron0x1304890()*-0.851955);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a000() {
   return (neuron0x1305260()*2.98329);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a040() {
   return (neuron0x1305c70()*-2.88816);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a080() {
   return (neuron0x1306680()*-0.530586);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a0c0() {
   return (neuron0x1307090()*-3.1735);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a100() {
   return (neuron0x1307aa0()*1.35303);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a140() {
   return (neuron0x13084b0()*0.147333);
}

double nnFunc_25_25hi_1500ep__::synapse0x130a180() {
   return (neuron0x1308ec0()*-2.73823);
}

