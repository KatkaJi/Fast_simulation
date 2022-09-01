#include "25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_downwing/nnFunc_3A_25_25hi_5000ep_weight_down.h"
#include <cmath>

double nnFunc_3A_25_25hi_5000ep_weight_down::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x20e47d0();
     default:
         return 0.;
   }
}

double nnFunc_3A_25_25hi_5000ep_weight_down::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x20e47d0();
     default:
         return 0.;
   }
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20c8d80() {
   return input0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20c90c0() {
   return input1;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20c9400() {
   return input2;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20c9740() {
   return input3;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20c9a80() {
   return input4;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20c9ef0() {
   double input = 0.368661;
   input += synapse0x1fd5ed0();
   input += synapse0x20b81f0();
   input += synapse0x20ca1a0();
   input += synapse0x20ca1e0();
   input += synapse0x20ca220();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20c9ef0() {
   double input = input0x20c9ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20ca260() {
   double input = 5.84837;
   input += synapse0x20ca5a0();
   input += synapse0x20ca5e0();
   input += synapse0x20ca620();
   input += synapse0x20ca660();
   input += synapse0x20ca6a0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20ca260() {
   double input = input0x20ca260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20ca6e0() {
   double input = 1.84329;
   input += synapse0x20caa20();
   input += synapse0x20caa60();
   input += synapse0x20caaa0();
   input += synapse0x20caae0();
   input += synapse0x20cab20();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20ca6e0() {
   double input = input0x20ca6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cab60() {
   double input = 0.94479;
   input += synapse0x20caea0();
   input += synapse0x20caee0();
   input += synapse0x1fc80c0();
   input += synapse0x1fc8100();
   input += synapse0x20cb030();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cab60() {
   double input = input0x20cab60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cb070() {
   double input = -2.99872;
   input += synapse0x20cb3b0();
   input += synapse0x20cb3f0();
   input += synapse0x20cb430();
   input += synapse0x20cb470();
   input += synapse0x20cb4b0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cb070() {
   double input = input0x20cb070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cb4f0() {
   double input = 0.140691;
   input += synapse0x20cb830();
   input += synapse0x20cb870();
   input += synapse0x20cb8b0();
   input += synapse0x20cb8f0();
   input += synapse0x20cb930();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cb4f0() {
   double input = input0x20cb4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cb970() {
   double input = -0.429795;
   input += synapse0x20cbcb0();
   input += synapse0x20cbcf0();
   input += synapse0x20cbd30();
   input += synapse0x20caf20();
   input += synapse0x20caf60();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cb970() {
   double input = input0x20cb970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cbf80() {
   double input = 0.348305;
   input += synapse0x20cc230();
   input += synapse0x20cc270();
   input += synapse0x20cc2b0();
   input += synapse0x20cc2f0();
   input += synapse0x20cc330();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cbf80() {
   double input = input0x20cbf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cc370() {
   double input = 0.781149;
   input += synapse0x20cc6b0();
   input += synapse0x20cc6f0();
   input += synapse0x20cc730();
   input += synapse0x20cc770();
   input += synapse0x20cc7b0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cc370() {
   double input = input0x20cc370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cc7f0() {
   double input = 5.57431;
   input += synapse0x20ccb30();
   input += synapse0x20ccb70();
   input += synapse0x20ccbb0();
   input += synapse0x20ccbf0();
   input += synapse0x20ccc30();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cc7f0() {
   double input = input0x20cc7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20ccc70() {
   double input = -3.64968;
   input += synapse0x20ccfb0();
   input += synapse0x20ccff0();
   input += synapse0x20cd030();
   input += synapse0x20cd070();
   input += synapse0x20cd0b0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20ccc70() {
   double input = input0x20ccc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cd0f0() {
   double input = 0.668269;
   input += synapse0x1fc7f10();
   input += synapse0x1fc7f50();
   input += synapse0x20cd540();
   input += synapse0x20cd580();
   input += synapse0x20cd5c0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cd0f0() {
   double input = input0x20cd0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cd600() {
   double input = 2.14948;
   input += synapse0x20cd940();
   input += synapse0x20cd980();
   input += synapse0x20cd9c0();
   input += synapse0x20cda00();
   input += synapse0x20cda40();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cd600() {
   double input = input0x20cd600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cbd70() {
   double input = -1.43477;
   input += synapse0x1fc86e0();
   input += synapse0x20cbf00();
   input += synapse0x20cbf40();
   input += synapse0x20cde90();
   input += synapse0x20cded0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cbd70() {
   double input = input0x20cbd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cdf10() {
   double input = 0.579357;
   input += synapse0x20ce250();
   input += synapse0x20ce290();
   input += synapse0x20ce2d0();
   input += synapse0x20ce310();
   input += synapse0x20ce350();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cdf10() {
   double input = input0x20cdf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20ce390() {
   double input = 1.4206;
   input += synapse0x20ce6d0();
   input += synapse0x20c8fa0();
   input += synapse0x20c8fe0();
   input += synapse0x20c92e0();
   input += synapse0x20c9320();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20ce390() {
   double input = input0x20ce390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cec60() {
   double input = -1.10311;
   input += synapse0x20cedf0();
   input += synapse0x20cee30();
   input += synapse0x20cee70();
   input += synapse0x20ceeb0();
   input += synapse0x20ceef0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cec60() {
   double input = input0x20cec60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cef30() {
   double input = 6.59297;
   input += synapse0x20cf270();
   input += synapse0x20cf2b0();
   input += synapse0x20cf2f0();
   input += synapse0x20cf330();
   input += synapse0x20cf370();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cef30() {
   double input = input0x20cef30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cf3b0() {
   double input = -0.312393;
   input += synapse0x20cf6f0();
   input += synapse0x20cf730();
   input += synapse0x20cf770();
   input += synapse0x20cf7b0();
   input += synapse0x20cf7f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cf3b0() {
   double input = input0x20cf3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cf830() {
   double input = 11.9762;
   input += synapse0x20cfb70();
   input += synapse0x20cfbb0();
   input += synapse0x20cfbf0();
   input += synapse0x20cfc30();
   input += synapse0x20cfc70();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cf830() {
   double input = input0x20cf830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cfcb0() {
   double input = 10.1201;
   input += synapse0x20cfff0();
   input += synapse0x20d0030();
   input += synapse0x20d0070();
   input += synapse0x20d00b0();
   input += synapse0x20d00f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cfcb0() {
   double input = input0x20cfcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d0130() {
   double input = 9.81937;
   input += synapse0x20d0470();
   input += synapse0x20d04b0();
   input += synapse0x20d04f0();
   input += synapse0x20d0530();
   input += synapse0x20d0570();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d0130() {
   double input = input0x20d0130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d05b0() {
   double input = -16.9401;
   input += synapse0x20d08f0();
   input += synapse0x20d0930();
   input += synapse0x20d0970();
   input += synapse0x20d09b0();
   input += synapse0x20d09f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d05b0() {
   double input = input0x20d05b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d0a30() {
   double input = -1.22382;
   input += synapse0x20d0d70();
   input += synapse0x20d0db0();
   input += synapse0x20d0df0();
   input += synapse0x20d0e30();
   input += synapse0x20d0e70();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d0a30() {
   double input = input0x20d0a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d0eb0() {
   double input = -0.222875;
   input += synapse0x20d11f0();
   input += synapse0x20d1230();
   input += synapse0x20d1270();
   input += synapse0x20d12b0();
   input += synapse0x20d12f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d0eb0() {
   double input = input0x20d0eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d2dc0() {
   double input = -0.861835;
   input += synapse0x20cae10();
   input += synapse0x20cae50();
   input += synapse0x20cb320();
   input += synapse0x20cb360();
   input += synapse0x20cb7a0();
   input += synapse0x20cb7e0();
   input += synapse0x20cbc20();
   input += synapse0x20cbc60();
   input += synapse0x20cc1a0();
   input += synapse0x20cc1e0();
   input += synapse0x20cc620();
   input += synapse0x20cc660();
   input += synapse0x20ccaa0();
   input += synapse0x20ccae0();
   input += synapse0x20ccf20();
   input += synapse0x20ccf60();
   input += synapse0x20cd3a0();
   input += synapse0x20cd3e0();
   input += synapse0x20cd8b0();
   input += synapse0x20cd8f0();
   input += synapse0x20ce1c0();
   input += synapse0x20ce200();
   input += synapse0x20ce640();
   input += synapse0x20ce680();
   input += synapse0x20c9ca0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d2dc0() {
   double input = input0x20d2dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20cdb90() {
   double input = -0.824124;
   input += synapse0x20cdd20();
   input += synapse0x20cdd60();
   input += synapse0x20cdda0();
   input += synapse0x20cdde0();
   input += synapse0x20cde20();
   input += synapse0x20c9ce0();
   input += synapse0x20cff60();
   input += synapse0x20cffa0();
   input += synapse0x20d03e0();
   input += synapse0x20d0420();
   input += synapse0x20d0860();
   input += synapse0x20d08a0();
   input += synapse0x20d0ce0();
   input += synapse0x20d0d20();
   input += synapse0x20d1160();
   input += synapse0x20d11a0();
   input += synapse0x20ca110();
   input += synapse0x20ca150();
   input += synapse0x20cf1e0();
   input += synapse0x20cf220();
   input += synapse0x1fd5fa0();
   input += synapse0x1fd5fe0();
   input += synapse0x20d3870();
   input += synapse0x20d38b0();
   input += synapse0x20d38f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20cdb90() {
   double input = input0x20cdb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d3930() {
   double input = 0.0693111;
   input += synapse0x20cd430();
   input += synapse0x20cd470();
   input += synapse0x20cd4b0();
   input += synapse0x20cd4f0();
   input += synapse0x20d3e80();
   input += synapse0x20d3ec0();
   input += synapse0x20d3f00();
   input += synapse0x20d3f40();
   input += synapse0x20d3f80();
   input += synapse0x20d3fc0();
   input += synapse0x20d4000();
   input += synapse0x20d4040();
   input += synapse0x20d4080();
   input += synapse0x20d40c0();
   input += synapse0x20d4100();
   input += synapse0x20d4140();
   input += synapse0x20d3ac0();
   input += synapse0x20d3b00();
   input += synapse0x20d4290();
   input += synapse0x20d42d0();
   input += synapse0x20d4310();
   input += synapse0x20d4350();
   input += synapse0x20d4390();
   input += synapse0x20d43d0();
   input += synapse0x20d4410();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d3930() {
   double input = input0x20d3930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d4450() {
   double input = 0.429933;
   input += synapse0x20d4790();
   input += synapse0x20d47d0();
   input += synapse0x20d4810();
   input += synapse0x20d4850();
   input += synapse0x20d4890();
   input += synapse0x20d48d0();
   input += synapse0x20d4910();
   input += synapse0x20d4950();
   input += synapse0x20d4990();
   input += synapse0x20d49d0();
   input += synapse0x20d4a10();
   input += synapse0x20d4a50();
   input += synapse0x20d4a90();
   input += synapse0x20d4ad0();
   input += synapse0x20d4b10();
   input += synapse0x20d4b50();
   input += synapse0x20d45e0();
   input += synapse0x20d4620();
   input += synapse0x20d4ca0();
   input += synapse0x20d4ce0();
   input += synapse0x20d4d20();
   input += synapse0x20d4d60();
   input += synapse0x20d4da0();
   input += synapse0x20d4de0();
   input += synapse0x20d4e20();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d4450() {
   double input = input0x20d4450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d4e60() {
   double input = -0.175897;
   input += synapse0x20d51a0();
   input += synapse0x20d51e0();
   input += synapse0x20d5220();
   input += synapse0x20d5260();
   input += synapse0x20d52a0();
   input += synapse0x20d52e0();
   input += synapse0x20d5320();
   input += synapse0x20d5360();
   input += synapse0x20d53a0();
   input += synapse0x20d53e0();
   input += synapse0x20d5420();
   input += synapse0x20d5460();
   input += synapse0x20d54a0();
   input += synapse0x20d54e0();
   input += synapse0x20d5520();
   input += synapse0x20d5560();
   input += synapse0x20d4ff0();
   input += synapse0x20d5030();
   input += synapse0x20d56b0();
   input += synapse0x20d56f0();
   input += synapse0x20d5730();
   input += synapse0x20d5770();
   input += synapse0x20d57b0();
   input += synapse0x20d57f0();
   input += synapse0x20d5830();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d4e60() {
   double input = input0x20d4e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d5870() {
   double input = -1.05221;
   input += synapse0x20d5bb0();
   input += synapse0x20d5bf0();
   input += synapse0x20d5c30();
   input += synapse0x20d5c70();
   input += synapse0x20d5cb0();
   input += synapse0x20d5cf0();
   input += synapse0x20d5d30();
   input += synapse0x20d2f50();
   input += synapse0x20d2f90();
   input += synapse0x20d2fd0();
   input += synapse0x20d3010();
   input += synapse0x20d3050();
   input += synapse0x20d3090();
   input += synapse0x20d30d0();
   input += synapse0x20d3110();
   input += synapse0x20d3150();
   input += synapse0x20d5a00();
   input += synapse0x20d5a40();
   input += synapse0x20d32a0();
   input += synapse0x20d32e0();
   input += synapse0x20d3320();
   input += synapse0x20d3360();
   input += synapse0x20d33a0();
   input += synapse0x20d33e0();
   input += synapse0x20d3420();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d5870() {
   double input = input0x20d5870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d3460() {
   double input = 0.457642;
   input += synapse0x20d3710();
   input += synapse0x20d6e10();
   input += synapse0x20d6e50();
   input += synapse0x20d6e90();
   input += synapse0x20d6ed0();
   input += synapse0x20d6f10();
   input += synapse0x20d6f50();
   input += synapse0x20d6f90();
   input += synapse0x20d6fd0();
   input += synapse0x20d7010();
   input += synapse0x20d7050();
   input += synapse0x20d7090();
   input += synapse0x20d70d0();
   input += synapse0x20d7110();
   input += synapse0x20d7150();
   input += synapse0x20d7190();
   input += synapse0x20d35f0();
   input += synapse0x20d3630();
   input += synapse0x20d72e0();
   input += synapse0x20d7320();
   input += synapse0x20d7360();
   input += synapse0x20d73a0();
   input += synapse0x20d73e0();
   input += synapse0x20d7420();
   input += synapse0x20d7460();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d3460() {
   double input = input0x20d3460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d74a0() {
   double input = 0.0274994;
   input += synapse0x20d77e0();
   input += synapse0x20d7820();
   input += synapse0x20d7860();
   input += synapse0x20d78a0();
   input += synapse0x20d78e0();
   input += synapse0x20d7920();
   input += synapse0x20d7960();
   input += synapse0x20d79a0();
   input += synapse0x20d79e0();
   input += synapse0x20d7a20();
   input += synapse0x20d7a60();
   input += synapse0x20d7aa0();
   input += synapse0x20d7ae0();
   input += synapse0x20d7b20();
   input += synapse0x20d7b60();
   input += synapse0x20d7ba0();
   input += synapse0x20d7630();
   input += synapse0x20d7670();
   input += synapse0x20d7cf0();
   input += synapse0x20d7d30();
   input += synapse0x20d7d70();
   input += synapse0x20d7db0();
   input += synapse0x20d7df0();
   input += synapse0x20d7e30();
   input += synapse0x20d7e70();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d74a0() {
   double input = input0x20d74a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d7eb0() {
   double input = -1.00178;
   input += synapse0x20d81f0();
   input += synapse0x20d8230();
   input += synapse0x20d8270();
   input += synapse0x20d82b0();
   input += synapse0x20d82f0();
   input += synapse0x20d8330();
   input += synapse0x20d8370();
   input += synapse0x20d83b0();
   input += synapse0x20d83f0();
   input += synapse0x20d8430();
   input += synapse0x20d8470();
   input += synapse0x20d84b0();
   input += synapse0x20d84f0();
   input += synapse0x20d8530();
   input += synapse0x20d8570();
   input += synapse0x20d85b0();
   input += synapse0x20d8040();
   input += synapse0x20d8080();
   input += synapse0x20d8700();
   input += synapse0x20d8740();
   input += synapse0x20d8780();
   input += synapse0x20d87c0();
   input += synapse0x20d8800();
   input += synapse0x20d8840();
   input += synapse0x20d8880();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d7eb0() {
   double input = input0x20d7eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d88c0() {
   double input = -0.00812324;
   input += synapse0x20d8c00();
   input += synapse0x20d8c40();
   input += synapse0x20d8c80();
   input += synapse0x20d8cc0();
   input += synapse0x20d8d00();
   input += synapse0x20d8d40();
   input += synapse0x20d8d80();
   input += synapse0x20d8dc0();
   input += synapse0x20d8e00();
   input += synapse0x20d8e40();
   input += synapse0x20d8e80();
   input += synapse0x20d8ec0();
   input += synapse0x20d8f00();
   input += synapse0x20d8f40();
   input += synapse0x20d8f80();
   input += synapse0x20d8fc0();
   input += synapse0x20d8a50();
   input += synapse0x20d8a90();
   input += synapse0x20d9110();
   input += synapse0x20d9150();
   input += synapse0x20d9190();
   input += synapse0x20d91d0();
   input += synapse0x20d9210();
   input += synapse0x20d9250();
   input += synapse0x20d9290();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d88c0() {
   double input = input0x20d88c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d92d0() {
   double input = 0.42294;
   input += synapse0x20d9610();
   input += synapse0x20d9650();
   input += synapse0x20d9690();
   input += synapse0x20d96d0();
   input += synapse0x20d9710();
   input += synapse0x20d9750();
   input += synapse0x20d9790();
   input += synapse0x20d97d0();
   input += synapse0x20d9810();
   input += synapse0x20d9850();
   input += synapse0x20d9890();
   input += synapse0x20d98d0();
   input += synapse0x20d9910();
   input += synapse0x20d9950();
   input += synapse0x20d9990();
   input += synapse0x20d99d0();
   input += synapse0x20d9460();
   input += synapse0x20d94a0();
   input += synapse0x20d9b20();
   input += synapse0x20d9b60();
   input += synapse0x20d9ba0();
   input += synapse0x20d9be0();
   input += synapse0x20d9c20();
   input += synapse0x20d9c60();
   input += synapse0x20d9ca0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d92d0() {
   double input = input0x20d92d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d9ce0() {
   double input = 0.58832;
   input += synapse0x20da020();
   input += synapse0x20da060();
   input += synapse0x20da0a0();
   input += synapse0x20da0e0();
   input += synapse0x20da120();
   input += synapse0x20da160();
   input += synapse0x20da1a0();
   input += synapse0x20da1e0();
   input += synapse0x20da220();
   input += synapse0x20da260();
   input += synapse0x20da2a0();
   input += synapse0x20da2e0();
   input += synapse0x20da320();
   input += synapse0x20da360();
   input += synapse0x20da3a0();
   input += synapse0x20da3e0();
   input += synapse0x20d9e70();
   input += synapse0x20d9eb0();
   input += synapse0x20da530();
   input += synapse0x20da570();
   input += synapse0x20da5b0();
   input += synapse0x20da5f0();
   input += synapse0x20da630();
   input += synapse0x20da670();
   input += synapse0x20da6b0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d9ce0() {
   double input = input0x20d9ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20da6f0() {
   double input = 0.0253615;
   input += synapse0x20daa30();
   input += synapse0x20daa70();
   input += synapse0x20daab0();
   input += synapse0x20daaf0();
   input += synapse0x20dab30();
   input += synapse0x20dab70();
   input += synapse0x20dabb0();
   input += synapse0x20dabf0();
   input += synapse0x20dac30();
   input += synapse0x20dac70();
   input += synapse0x20dacb0();
   input += synapse0x20dacf0();
   input += synapse0x20dad30();
   input += synapse0x20dad70();
   input += synapse0x20dadb0();
   input += synapse0x20dadf0();
   input += synapse0x20da880();
   input += synapse0x20da8c0();
   input += synapse0x20daf40();
   input += synapse0x20daf80();
   input += synapse0x20dafc0();
   input += synapse0x20db000();
   input += synapse0x20db040();
   input += synapse0x20db080();
   input += synapse0x20db0c0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20da6f0() {
   double input = input0x20da6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20db100() {
   double input = -0.0771669;
   input += synapse0x20db440();
   input += synapse0x20db480();
   input += synapse0x20db4c0();
   input += synapse0x20db500();
   input += synapse0x20db540();
   input += synapse0x20db580();
   input += synapse0x20db5c0();
   input += synapse0x20db600();
   input += synapse0x20db640();
   input += synapse0x20db680();
   input += synapse0x20db6c0();
   input += synapse0x20db700();
   input += synapse0x20db740();
   input += synapse0x20db780();
   input += synapse0x20db7c0();
   input += synapse0x20db800();
   input += synapse0x20db290();
   input += synapse0x20db2d0();
   input += synapse0x20db950();
   input += synapse0x20db990();
   input += synapse0x20db9d0();
   input += synapse0x20dba10();
   input += synapse0x20dba50();
   input += synapse0x20dba90();
   input += synapse0x20dbad0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20db100() {
   double input = input0x20db100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20dbb10() {
   double input = -0.704968;
   input += synapse0x20dbe50();
   input += synapse0x20dbe90();
   input += synapse0x20dbed0();
   input += synapse0x20dbf10();
   input += synapse0x20dbf50();
   input += synapse0x20dbf90();
   input += synapse0x20dbfd0();
   input += synapse0x20dc010();
   input += synapse0x20dc050();
   input += synapse0x20dc090();
   input += synapse0x20dc0d0();
   input += synapse0x20dc110();
   input += synapse0x20dc150();
   input += synapse0x20dc190();
   input += synapse0x20dc1d0();
   input += synapse0x20dc210();
   input += synapse0x20dbca0();
   input += synapse0x20dbce0();
   input += synapse0x20dc360();
   input += synapse0x20dc3a0();
   input += synapse0x20dc3e0();
   input += synapse0x20dc420();
   input += synapse0x20dc460();
   input += synapse0x20dc4a0();
   input += synapse0x20dc4e0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20dbb10() {
   double input = input0x20dbb10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20dc520() {
   double input = 1.30377;
   input += synapse0x20dc860();
   input += synapse0x20ca080();
   input += synapse0x20ca0c0();
   input += synapse0x20ca480();
   input += synapse0x20ca4c0();
   input += synapse0x20ca900();
   input += synapse0x20ca940();
   input += synapse0x20cad80();
   input += synapse0x20cadc0();
   input += synapse0x20cb290();
   input += synapse0x20cb2d0();
   input += synapse0x20cb710();
   input += synapse0x20cb750();
   input += synapse0x20cbb90();
   input += synapse0x20cbbd0();
   input += synapse0x20cc110();
   input += synapse0x20cc150();
   input += synapse0x20cc590();
   input += synapse0x20cc5d0();
   input += synapse0x20cca10();
   input += synapse0x20cca50();
   input += synapse0x20cce90();
   input += synapse0x20cced0();
   input += synapse0x20cd310();
   input += synapse0x20cd350();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20dc520() {
   double input = input0x20dc520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20d6b40() {
   double input = -0.213237;
   input += synapse0x20d6cd0();
   input += synapse0x20d6d10();
   input += synapse0x20ce5b0();
   input += synapse0x20ce5f0();
   input += synapse0x20dc6b0();
   input += synapse0x20dc6f0();
   input += synapse0x20c9960();
   input += synapse0x20c99a0();
   input += synapse0x20cf150();
   input += synapse0x20cf190();
   input += synapse0x20cf5d0();
   input += synapse0x20cf610();
   input += synapse0x20cfa50();
   input += synapse0x20cfa90();
   input += synapse0x20cfed0();
   input += synapse0x20cff10();
   input += synapse0x20d0350();
   input += synapse0x20d0390();
   input += synapse0x20d07d0();
   input += synapse0x20d0810();
   input += synapse0x20d0c50();
   input += synapse0x20d0c90();
   input += synapse0x20d10d0();
   input += synapse0x20d1110();
   input += synapse0x20cd820();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20d6b40() {
   double input = input0x20d6b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20df790() {
   double input = 0.186077;
   input += synapse0x20cd860();
   input += synapse0x20dfad0();
   input += synapse0x20dfb10();
   input += synapse0x20dfb50();
   input += synapse0x20dfb90();
   input += synapse0x20dfbd0();
   input += synapse0x20dfc10();
   input += synapse0x20dfc50();
   input += synapse0x20dfc90();
   input += synapse0x20dfcd0();
   input += synapse0x20dfd10();
   input += synapse0x20dfd50();
   input += synapse0x20dfd90();
   input += synapse0x20dfdd0();
   input += synapse0x20dfe10();
   input += synapse0x20dfe50();
   input += synapse0x20df920();
   input += synapse0x20df960();
   input += synapse0x20dffa0();
   input += synapse0x20dffe0();
   input += synapse0x20e0020();
   input += synapse0x20e0060();
   input += synapse0x20e00a0();
   input += synapse0x20e00e0();
   input += synapse0x20e0120();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20df790() {
   double input = input0x20df790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e0160() {
   double input = -0.340801;
   input += synapse0x20e04a0();
   input += synapse0x20e04e0();
   input += synapse0x20e0520();
   input += synapse0x20e0560();
   input += synapse0x20e05a0();
   input += synapse0x20e05e0();
   input += synapse0x20e0620();
   input += synapse0x20e0660();
   input += synapse0x20e06a0();
   input += synapse0x20e06e0();
   input += synapse0x20e0720();
   input += synapse0x20e0760();
   input += synapse0x20e07a0();
   input += synapse0x20e07e0();
   input += synapse0x20e0820();
   input += synapse0x20e0860();
   input += synapse0x20e02f0();
   input += synapse0x20e0330();
   input += synapse0x20e09b0();
   input += synapse0x20e09f0();
   input += synapse0x20e0a30();
   input += synapse0x20e0a70();
   input += synapse0x20e0ab0();
   input += synapse0x20e0af0();
   input += synapse0x20e0b30();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e0160() {
   double input = input0x20e0160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e0b70() {
   double input = -0.87875;
   input += synapse0x20e0eb0();
   input += synapse0x20e0ef0();
   input += synapse0x20e0f30();
   input += synapse0x20e0f70();
   input += synapse0x20e0fb0();
   input += synapse0x20e0ff0();
   input += synapse0x20e1030();
   input += synapse0x20e1070();
   input += synapse0x20e10b0();
   input += synapse0x20e10f0();
   input += synapse0x20e1130();
   input += synapse0x20e1170();
   input += synapse0x20e11b0();
   input += synapse0x20e11f0();
   input += synapse0x20e1230();
   input += synapse0x20e1270();
   input += synapse0x20e0d00();
   input += synapse0x20e0d40();
   input += synapse0x20e13c0();
   input += synapse0x20e1400();
   input += synapse0x20e1440();
   input += synapse0x20e1480();
   input += synapse0x20e14c0();
   input += synapse0x20e1500();
   input += synapse0x20e1540();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e0b70() {
   double input = input0x20e0b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e1580() {
   double input = 0.285184;
   input += synapse0x20e18c0();
   input += synapse0x20e1900();
   input += synapse0x20e1940();
   input += synapse0x20e1980();
   input += synapse0x20e19c0();
   input += synapse0x20e1a00();
   input += synapse0x20e1a40();
   input += synapse0x20e1a80();
   input += synapse0x20e1ac0();
   input += synapse0x20e1b00();
   input += synapse0x20e1b40();
   input += synapse0x20e1b80();
   input += synapse0x20e1bc0();
   input += synapse0x20e1c00();
   input += synapse0x20e1c40();
   input += synapse0x20e1c80();
   input += synapse0x20e1710();
   input += synapse0x20e1750();
   input += synapse0x20e1dd0();
   input += synapse0x20e1e10();
   input += synapse0x20e1e50();
   input += synapse0x20e1e90();
   input += synapse0x20e1ed0();
   input += synapse0x20e1f10();
   input += synapse0x20e1f50();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e1580() {
   double input = input0x20e1580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e1f90() {
   double input = -1.29856;
   input += synapse0x20e22d0();
   input += synapse0x20e2310();
   input += synapse0x20e2350();
   input += synapse0x20e2390();
   input += synapse0x20e23d0();
   input += synapse0x20e2410();
   input += synapse0x20e2450();
   input += synapse0x20e2490();
   input += synapse0x20e24d0();
   input += synapse0x20e2510();
   input += synapse0x20e2550();
   input += synapse0x20e2590();
   input += synapse0x20e25d0();
   input += synapse0x20e2610();
   input += synapse0x20e2650();
   input += synapse0x20e2690();
   input += synapse0x20e2120();
   input += synapse0x20e2160();
   input += synapse0x20e27e0();
   input += synapse0x20e2820();
   input += synapse0x20e2860();
   input += synapse0x20e28a0();
   input += synapse0x20e28e0();
   input += synapse0x20e2920();
   input += synapse0x20e2960();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e1f90() {
   double input = input0x20e1f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e29a0() {
   double input = 0.895517;
   input += synapse0x20e2ce0();
   input += synapse0x20e2d20();
   input += synapse0x20e2d60();
   input += synapse0x20e2da0();
   input += synapse0x20e2de0();
   input += synapse0x20e2e20();
   input += synapse0x20e2e60();
   input += synapse0x20e2ea0();
   input += synapse0x20e2ee0();
   input += synapse0x20e2f20();
   input += synapse0x20e2f60();
   input += synapse0x20e2fa0();
   input += synapse0x20e2fe0();
   input += synapse0x20e3020();
   input += synapse0x20e3060();
   input += synapse0x20e30a0();
   input += synapse0x20e2b30();
   input += synapse0x20e2b70();
   input += synapse0x20e31f0();
   input += synapse0x20e3230();
   input += synapse0x20e3270();
   input += synapse0x20e32b0();
   input += synapse0x20e32f0();
   input += synapse0x20e3330();
   input += synapse0x20e3370();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e29a0() {
   double input = input0x20e29a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e33b0() {
   double input = 0.336705;
   input += synapse0x20e36f0();
   input += synapse0x20e3730();
   input += synapse0x20e3770();
   input += synapse0x20e37b0();
   input += synapse0x20e37f0();
   input += synapse0x20e3830();
   input += synapse0x20e3870();
   input += synapse0x20e38b0();
   input += synapse0x20e38f0();
   input += synapse0x20e3930();
   input += synapse0x20e3970();
   input += synapse0x20e39b0();
   input += synapse0x20e39f0();
   input += synapse0x20e3a30();
   input += synapse0x20e3a70();
   input += synapse0x20e3ab0();
   input += synapse0x20e3540();
   input += synapse0x20e3580();
   input += synapse0x20e3c00();
   input += synapse0x20e3c40();
   input += synapse0x20e3c80();
   input += synapse0x20e3cc0();
   input += synapse0x20e3d00();
   input += synapse0x20e3d40();
   input += synapse0x20e3d80();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e33b0() {
   double input = input0x20e33b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e3dc0() {
   double input = -0.061566;
   input += synapse0x20e4100();
   input += synapse0x20e4140();
   input += synapse0x20e4180();
   input += synapse0x20e41c0();
   input += synapse0x20e4200();
   input += synapse0x20e4240();
   input += synapse0x20e4280();
   input += synapse0x20e42c0();
   input += synapse0x20e4300();
   input += synapse0x20e4340();
   input += synapse0x20e4380();
   input += synapse0x20e43c0();
   input += synapse0x20e4400();
   input += synapse0x20e4440();
   input += synapse0x20e4480();
   input += synapse0x20e44c0();
   input += synapse0x20e3f50();
   input += synapse0x20e3f90();
   input += synapse0x20e4610();
   input += synapse0x20e4650();
   input += synapse0x20e4690();
   input += synapse0x20e46d0();
   input += synapse0x20e4710();
   input += synapse0x20e4750();
   input += synapse0x20e4790();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e3dc0() {
   double input = input0x20e3dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::input0x20e47d0() {
   double input = -1.91176;
   input += synapse0x20e49f0();
   input += synapse0x20e4a30();
   input += synapse0x20e4a70();
   input += synapse0x20e4ab0();
   input += synapse0x20e4af0();
   input += synapse0x20e4b30();
   input += synapse0x20e4b70();
   input += synapse0x20e4bb0();
   input += synapse0x20e4bf0();
   input += synapse0x20e4c30();
   input += synapse0x20e4c70();
   input += synapse0x20e4cb0();
   input += synapse0x20e4cf0();
   input += synapse0x20e4d30();
   input += synapse0x20e4d70();
   input += synapse0x20e4db0();
   input += synapse0x20c9dc0();
   input += synapse0x20c9e00();
   input += synapse0x20e4f00();
   input += synapse0x20e4f40();
   input += synapse0x20e4f80();
   input += synapse0x20e4fc0();
   input += synapse0x20e5000();
   input += synapse0x20e5040();
   input += synapse0x20e5080();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::neuron0x20e47d0() {
   double input = input0x20e47d0();
   return (input * 40.4969)+147.382;
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fd5ed0() {
   return (neuron0x20c8d80()*-0.102678);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20b81f0() {
   return (neuron0x20c90c0()*0.0844544);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca1a0() {
   return (neuron0x20c9400()*-0.0417416);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca1e0() {
   return (neuron0x20c9740()*2.50877);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca220() {
   return (neuron0x20c9a80()*0.0359981);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca5a0() {
   return (neuron0x20c8d80()*-0.400609);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca5e0() {
   return (neuron0x20c90c0()*0.0921764);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca620() {
   return (neuron0x20c9400()*0.41334);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca660() {
   return (neuron0x20c9740()*7.20487);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca6a0() {
   return (neuron0x20c9a80()*1.77151);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caa20() {
   return (neuron0x20c8d80()*-3.3484);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caa60() {
   return (neuron0x20c90c0()*1.00625);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caaa0() {
   return (neuron0x20c9400()*1.09692);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caae0() {
   return (neuron0x20c9740()*0.182507);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cab20() {
   return (neuron0x20c9a80()*1.13303);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caea0() {
   return (neuron0x20c8d80()*-3.43872);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caee0() {
   return (neuron0x20c90c0()*1.4161);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fc80c0() {
   return (neuron0x20c9400()*1.95213);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fc8100() {
   return (neuron0x20c9740()*-3.41836);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb030() {
   return (neuron0x20c9a80()*0.342815);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb3b0() {
   return (neuron0x20c8d80()*-0.231784);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb3f0() {
   return (neuron0x20c90c0()*0.0533304);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb430() {
   return (neuron0x20c9400()*0.330954);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb470() {
   return (neuron0x20c9740()*-6.30775);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb4b0() {
   return (neuron0x20c9a80()*-6.37814);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb830() {
   return (neuron0x20c8d80()*0.662424);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb870() {
   return (neuron0x20c90c0()*-0.154234);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb8b0() {
   return (neuron0x20c9400()*-0.303907);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb8f0() {
   return (neuron0x20c9740()*-0.0302381);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb930() {
   return (neuron0x20c9a80()*-0.289024);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbcb0() {
   return (neuron0x20c8d80()*2.30615);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbcf0() {
   return (neuron0x20c90c0()*-1.42647);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbd30() {
   return (neuron0x20c9400()*-0.836299);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caf20() {
   return (neuron0x20c9740()*0.0422644);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20caf60() {
   return (neuron0x20c9a80()*-0.636167);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc230() {
   return (neuron0x20c8d80()*-1.20477);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc270() {
   return (neuron0x20c90c0()*-0.0031981);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc2b0() {
   return (neuron0x20c9400()*1.01196);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc2f0() {
   return (neuron0x20c9740()*-3.31016);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc330() {
   return (neuron0x20c9a80()*0.493178);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc6b0() {
   return (neuron0x20c8d80()*-0.578013);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc6f0() {
   return (neuron0x20c90c0()*0.0449062);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc730() {
   return (neuron0x20c9400()*0.452837);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc770() {
   return (neuron0x20c9740()*6.85376);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc7b0() {
   return (neuron0x20c9a80()*2.86141);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccb30() {
   return (neuron0x20c8d80()*0.0501026);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccb70() {
   return (neuron0x20c90c0()*-0.053748);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccbb0() {
   return (neuron0x20c9400()*-0.0656257);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccbf0() {
   return (neuron0x20c9740()*5.78251);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccc30() {
   return (neuron0x20c9a80()*9.40805);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccfb0() {
   return (neuron0x20c8d80()*-0.020221);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccff0() {
   return (neuron0x20c90c0()*0.00447352);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd030() {
   return (neuron0x20c9400()*0.00995846);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd070() {
   return (neuron0x20c9740()*-6.20144);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd0b0() {
   return (neuron0x20c9a80()*-5.83016);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fc7f10() {
   return (neuron0x20c8d80()*-0.728256);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fc7f50() {
   return (neuron0x20c90c0()*0.807473);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd540() {
   return (neuron0x20c9400()*0.232068);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd580() {
   return (neuron0x20c9740()*-1.72299);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd5c0() {
   return (neuron0x20c9a80()*-0.223602);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd940() {
   return (neuron0x20c8d80()*-1.04586);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd980() {
   return (neuron0x20c90c0()*4.13059);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd9c0() {
   return (neuron0x20c9400()*2.39153);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cda00() {
   return (neuron0x20c9740()*0.00409785);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cda40() {
   return (neuron0x20c9a80()*1.61086);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fc86e0() {
   return (neuron0x20c8d80()*0.0157705);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbf00() {
   return (neuron0x20c90c0()*0.122707);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbf40() {
   return (neuron0x20c9400()*0.210612);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cde90() {
   return (neuron0x20c9740()*-1.60651);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cded0() {
   return (neuron0x20c9a80()*-0.691565);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce250() {
   return (neuron0x20c8d80()*-2.89316);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce290() {
   return (neuron0x20c90c0()*1.85139);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce2d0() {
   return (neuron0x20c9400()*2.03373);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce310() {
   return (neuron0x20c9740()*-6.40347);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce350() {
   return (neuron0x20c9a80()*0.626037);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce6d0() {
   return (neuron0x20c8d80()*0.525644);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c8fa0() {
   return (neuron0x20c90c0()*-0.201646);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c8fe0() {
   return (neuron0x20c9400()*-0.780941);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c92e0() {
   return (neuron0x20c9740()*-2.29987);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c9320() {
   return (neuron0x20c9a80()*0.673319);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cedf0() {
   return (neuron0x20c8d80()*-0.0565381);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cee30() {
   return (neuron0x20c90c0()*0.000139987);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cee70() {
   return (neuron0x20c9400()*0.00760964);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ceeb0() {
   return (neuron0x20c9740()*-0.57763);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ceef0() {
   return (neuron0x20c9a80()*1.74868);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf270() {
   return (neuron0x20c8d80()*2.52265);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf2b0() {
   return (neuron0x20c90c0()*0.0102708);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf2f0() {
   return (neuron0x20c9400()*1.41343);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf330() {
   return (neuron0x20c9740()*3.35234);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf370() {
   return (neuron0x20c9a80()*2.4278);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf6f0() {
   return (neuron0x20c8d80()*-0.159464);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf730() {
   return (neuron0x20c90c0()*0.450923);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf770() {
   return (neuron0x20c9400()*0.576984);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf7b0() {
   return (neuron0x20c9740()*-4.93139);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf7f0() {
   return (neuron0x20c9a80()*-0.212549);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfb70() {
   return (neuron0x20c8d80()*-0.2382);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfbb0() {
   return (neuron0x20c90c0()*-0.0169285);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfbf0() {
   return (neuron0x20c9400()*-0.642829);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfc30() {
   return (neuron0x20c9740()*18.4235);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfc70() {
   return (neuron0x20c9a80()*10.8934);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfff0() {
   return (neuron0x20c8d80()*7.96732);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0030() {
   return (neuron0x20c90c0()*0.025994);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0070() {
   return (neuron0x20c9400()*2.81383);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d00b0() {
   return (neuron0x20c9740()*-8.39888);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d00f0() {
   return (neuron0x20c9a80()*7.28219);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0470() {
   return (neuron0x20c8d80()*0.405976);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d04b0() {
   return (neuron0x20c90c0()*-0.0150847);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d04f0() {
   return (neuron0x20c9400()*-0.114371);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0530() {
   return (neuron0x20c9740()*11.8139);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0570() {
   return (neuron0x20c9a80()*6.24538);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d08f0() {
   return (neuron0x20c8d80()*-4.18545);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0930() {
   return (neuron0x20c90c0()*0.0149509);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0970() {
   return (neuron0x20c9400()*-2.1625);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d09b0() {
   return (neuron0x20c9740()*-12.7917);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d09f0() {
   return (neuron0x20c9a80()*-12.402);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0d70() {
   return (neuron0x20c8d80()*3.31113);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0db0() {
   return (neuron0x20c90c0()*-0.87771);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0df0() {
   return (neuron0x20c9400()*-1.22364);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0e30() {
   return (neuron0x20c9740()*-0.337307);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0e70() {
   return (neuron0x20c9a80()*-1.2375);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d11f0() {
   return (neuron0x20c8d80()*-1.15207);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d1230() {
   return (neuron0x20c90c0()*0.120435);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d1270() {
   return (neuron0x20c9400()*-1.58276);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d12b0() {
   return (neuron0x20c9740()*9.73205);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d12f0() {
   return (neuron0x20c9a80()*-0.128605);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cae10() {
   return (neuron0x20c9ef0()*-0.510295);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cae50() {
   return (neuron0x20ca260()*-0.126982);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb320() {
   return (neuron0x20ca6e0()*-0.76173);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb360() {
   return (neuron0x20cab60()*-0.0619701);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb7a0() {
   return (neuron0x20cb070()*-1.50217);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb7e0() {
   return (neuron0x20cb4f0()*0.429309);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbc20() {
   return (neuron0x20cb970()*-0.799431);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbc60() {
   return (neuron0x20cbf80()*-0.924006);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc1a0() {
   return (neuron0x20cc370()*1.45225);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc1e0() {
   return (neuron0x20cc7f0()*1.04226);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc620() {
   return (neuron0x20ccc70()*-3.39085);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc660() {
   return (neuron0x20cd0f0()*-0.436243);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccaa0() {
   return (neuron0x20cd600()*-0.858081);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccae0() {
   return (neuron0x20cbd70()*0.073625);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccf20() {
   return (neuron0x20cdf10()*-0.484609);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ccf60() {
   return (neuron0x20ce390()*0.165734);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd3a0() {
   return (neuron0x20cec60()*-0.473817);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd3e0() {
   return (neuron0x20cef30()*-1.62335);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd8b0() {
   return (neuron0x20cf3b0()*-1.9398);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd8f0() {
   return (neuron0x20cf830()*-2.95404);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce1c0() {
   return (neuron0x20cfcb0()*-0.686465);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce200() {
   return (neuron0x20d0130()*-2.87425);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce640() {
   return (neuron0x20d05b0()*1.61965);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce680() {
   return (neuron0x20d0a30()*-0.192729);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c9ca0() {
   return (neuron0x20d0eb0()*1.7457);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cdd20() {
   return (neuron0x20c9ef0()*-0.115082);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cdd60() {
   return (neuron0x20ca260()*-0.394523);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cdda0() {
   return (neuron0x20ca6e0()*-1.56939);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cdde0() {
   return (neuron0x20cab60()*0.52133);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cde20() {
   return (neuron0x20cb070()*-0.914312);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c9ce0() {
   return (neuron0x20cb4f0()*-0.444302);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cff60() {
   return (neuron0x20cb970()*0.228908);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cffa0() {
   return (neuron0x20cbf80()*-0.50232);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d03e0() {
   return (neuron0x20cc370()*2.23987);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0420() {
   return (neuron0x20cc7f0()*2.39014);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0860() {
   return (neuron0x20ccc70()*-1.14599);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d08a0() {
   return (neuron0x20cd0f0()*-0.0426894);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0ce0() {
   return (neuron0x20cd600()*-0.762073);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0d20() {
   return (neuron0x20cbd70()*-0.279223);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d1160() {
   return (neuron0x20cdf10()*0.915771);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d11a0() {
   return (neuron0x20ce390()*-0.372923);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca110() {
   return (neuron0x20cec60()*-0.106323);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca150() {
   return (neuron0x20cef30()*-1.05413);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf1e0() {
   return (neuron0x20cf3b0()*-1.62774);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf220() {
   return (neuron0x20cf830()*-0.896725);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fd5fa0() {
   return (neuron0x20cfcb0()*-0.197842);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x1fd5fe0() {
   return (neuron0x20d0130()*-1.04156);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3870() {
   return (neuron0x20d05b0()*1.91211);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d38b0() {
   return (neuron0x20d0a30()*0.266203);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d38f0() {
   return (neuron0x20d0eb0()*1.47122);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd430() {
   return (neuron0x20c9ef0()*-0.256928);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd470() {
   return (neuron0x20ca260()*-1.16553);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd4b0() {
   return (neuron0x20ca6e0()*-0.222414);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd4f0() {
   return (neuron0x20cab60()*-0.0932218);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3e80() {
   return (neuron0x20cb070()*-0.0299088);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3ec0() {
   return (neuron0x20cb4f0()*-0.708672);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3f00() {
   return (neuron0x20cb970()*-0.298522);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3f40() {
   return (neuron0x20cbf80()*0.116034);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3f80() {
   return (neuron0x20cc370()*1.33224);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3fc0() {
   return (neuron0x20cc7f0()*1.12621);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4000() {
   return (neuron0x20ccc70()*-1.25627);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4040() {
   return (neuron0x20cd0f0()*0.532661);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4080() {
   return (neuron0x20cd600()*-0.338678);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d40c0() {
   return (neuron0x20cbd70()*-0.0248394);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4100() {
   return (neuron0x20cdf10()*0.700339);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4140() {
   return (neuron0x20ce390()*0.193058);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3ac0() {
   return (neuron0x20cec60()*-1.43651);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3b00() {
   return (neuron0x20cef30()*-0.294468);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4290() {
   return (neuron0x20cf3b0()*-0.351551);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d42d0() {
   return (neuron0x20cf830()*-2.70296);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4310() {
   return (neuron0x20cfcb0()*-1.99853);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4350() {
   return (neuron0x20d0130()*-2.07456);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4390() {
   return (neuron0x20d05b0()*1.74923);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d43d0() {
   return (neuron0x20d0a30()*0.353717);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4410() {
   return (neuron0x20d0eb0()*1.40639);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4790() {
   return (neuron0x20c9ef0()*0.150884);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d47d0() {
   return (neuron0x20ca260()*-0.421596);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4810() {
   return (neuron0x20ca6e0()*0.946483);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4850() {
   return (neuron0x20cab60()*-1.25901);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4890() {
   return (neuron0x20cb070()*0.416894);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d48d0() {
   return (neuron0x20cb4f0()*-0.188092);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4910() {
   return (neuron0x20cb970()*-0.513189);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4950() {
   return (neuron0x20cbf80()*-0.0179816);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4990() {
   return (neuron0x20cc370()*-2.84683);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d49d0() {
   return (neuron0x20cc7f0()*-5.27463);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4a10() {
   return (neuron0x20ccc70()*0.784611);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4a50() {
   return (neuron0x20cd0f0()*-0.58476);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4a90() {
   return (neuron0x20cd600()*0.959228);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4ad0() {
   return (neuron0x20cbd70()*-1.19447);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4b10() {
   return (neuron0x20cdf10()*-1.68478);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4b50() {
   return (neuron0x20ce390()*-0.212554);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d45e0() {
   return (neuron0x20cec60()*-0.339529);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4620() {
   return (neuron0x20cef30()*0.334805);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4ca0() {
   return (neuron0x20cf3b0()*0.767439);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4ce0() {
   return (neuron0x20cf830()*1.38965);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4d20() {
   return (neuron0x20cfcb0()*-0.411465);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4d60() {
   return (neuron0x20d0130()*0.794822);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4da0() {
   return (neuron0x20d05b0()*-0.618151);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4de0() {
   return (neuron0x20d0a30()*-0.855829);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4e20() {
   return (neuron0x20d0eb0()*-2.67877);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d51a0() {
   return (neuron0x20c9ef0()*0.0551642);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d51e0() {
   return (neuron0x20ca260()*1.26461);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5220() {
   return (neuron0x20ca6e0()*1.17992);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5260() {
   return (neuron0x20cab60()*-0.462956);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d52a0() {
   return (neuron0x20cb070()*0.714652);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d52e0() {
   return (neuron0x20cb4f0()*0.706565);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5320() {
   return (neuron0x20cb970()*0.0854133);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5360() {
   return (neuron0x20cbf80()*0.530336);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d53a0() {
   return (neuron0x20cc370()*-1.49987);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d53e0() {
   return (neuron0x20cc7f0()*-1.75479);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5420() {
   return (neuron0x20ccc70()*0.0115022);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5460() {
   return (neuron0x20cd0f0()*0.342602);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d54a0() {
   return (neuron0x20cd600()*1.32153);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d54e0() {
   return (neuron0x20cbd70()*-0.843095);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5520() {
   return (neuron0x20cdf10()*-0.294092);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5560() {
   return (neuron0x20ce390()*0.152337);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d4ff0() {
   return (neuron0x20cec60()*-0.742837);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5030() {
   return (neuron0x20cef30()*0.32541);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d56b0() {
   return (neuron0x20cf3b0()*0.877291);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d56f0() {
   return (neuron0x20cf830()*0.220281);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5730() {
   return (neuron0x20cfcb0()*0.185214);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5770() {
   return (neuron0x20d0130()*0.168474);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d57b0() {
   return (neuron0x20d05b0()*-0.611384);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d57f0() {
   return (neuron0x20d0a30()*-0.684364);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5830() {
   return (neuron0x20d0eb0()*-1.63179);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5bb0() {
   return (neuron0x20c9ef0()*0.182092);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5bf0() {
   return (neuron0x20ca260()*-1.84572);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5c30() {
   return (neuron0x20ca6e0()*-2.53058);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5c70() {
   return (neuron0x20cab60()*0.491469);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5cb0() {
   return (neuron0x20cb070()*-1.21167);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5cf0() {
   return (neuron0x20cb4f0()*-0.562353);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5d30() {
   return (neuron0x20cb970()*0.413061);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d2f50() {
   return (neuron0x20cbf80()*-1.1205);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d2f90() {
   return (neuron0x20cc370()*2.94987);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d2fd0() {
   return (neuron0x20cc7f0()*2.8837);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3010() {
   return (neuron0x20ccc70()*-0.626078);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3050() {
   return (neuron0x20cd0f0()*-0.54153);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3090() {
   return (neuron0x20cd600()*-1.18367);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d30d0() {
   return (neuron0x20cbd70()*0.674078);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3110() {
   return (neuron0x20cdf10()*0.591949);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3150() {
   return (neuron0x20ce390()*0.147225);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5a00() {
   return (neuron0x20cec60()*-0.10466);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d5a40() {
   return (neuron0x20cef30()*-0.589813);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d32a0() {
   return (neuron0x20cf3b0()*-1.95743);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d32e0() {
   return (neuron0x20cf830()*-1.62847);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3320() {
   return (neuron0x20cfcb0()*-0.367797);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3360() {
   return (neuron0x20d0130()*-1.5033);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d33a0() {
   return (neuron0x20d05b0()*1.1161);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d33e0() {
   return (neuron0x20d0a30()*1.2687);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3420() {
   return (neuron0x20d0eb0()*3.3223);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3710() {
   return (neuron0x20c9ef0()*0.425891);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6e10() {
   return (neuron0x20ca260()*2.60355);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6e50() {
   return (neuron0x20ca6e0()*0.250739);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6e90() {
   return (neuron0x20cab60()*-0.21124);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6ed0() {
   return (neuron0x20cb070()*0.0181971);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6f10() {
   return (neuron0x20cb4f0()*-0.335738);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6f50() {
   return (neuron0x20cb970()*-0.425399);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6f90() {
   return (neuron0x20cbf80()*0.453861);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6fd0() {
   return (neuron0x20cc370()*0.930328);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7010() {
   return (neuron0x20cc7f0()*-0.150722);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7050() {
   return (neuron0x20ccc70()*0.601091);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7090() {
   return (neuron0x20cd0f0()*0.42132);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d70d0() {
   return (neuron0x20cd600()*-0.30408);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7110() {
   return (neuron0x20cbd70()*-0.555082);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7150() {
   return (neuron0x20cdf10()*-0.25603);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7190() {
   return (neuron0x20ce390()*0.831609);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d35f0() {
   return (neuron0x20cec60()*0.0982913);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d3630() {
   return (neuron0x20cef30()*-1.09257);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d72e0() {
   return (neuron0x20cf3b0()*0.247909);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7320() {
   return (neuron0x20cf830()*0.417378);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7360() {
   return (neuron0x20cfcb0()*-0.405492);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d73a0() {
   return (neuron0x20d0130()*0.73751);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d73e0() {
   return (neuron0x20d05b0()*-0.627293);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7420() {
   return (neuron0x20d0a30()*0.06687);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7460() {
   return (neuron0x20d0eb0()*-0.668487);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d77e0() {
   return (neuron0x20c9ef0()*0.478156);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7820() {
   return (neuron0x20ca260()*0.89547);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7860() {
   return (neuron0x20ca6e0()*0.535989);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d78a0() {
   return (neuron0x20cab60()*0.0277502);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d78e0() {
   return (neuron0x20cb070()*0.678646);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7920() {
   return (neuron0x20cb4f0()*0.423766);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7960() {
   return (neuron0x20cb970()*0.295361);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d79a0() {
   return (neuron0x20cbf80()*0.84022);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d79e0() {
   return (neuron0x20cc370()*-0.924545);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7a20() {
   return (neuron0x20cc7f0()*-0.557879);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7a60() {
   return (neuron0x20ccc70()*0.0650311);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7aa0() {
   return (neuron0x20cd0f0()*0.578373);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7ae0() {
   return (neuron0x20cd600()*0.203206);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7b20() {
   return (neuron0x20cbd70()*-0.0259242);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7b60() {
   return (neuron0x20cdf10()*0.384085);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7ba0() {
   return (neuron0x20ce390()*0.580201);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7630() {
   return (neuron0x20cec60()*-0.266485);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7670() {
   return (neuron0x20cef30()*0.391732);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7cf0() {
   return (neuron0x20cf3b0()*1.103);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7d30() {
   return (neuron0x20cf830()*0.931768);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7d70() {
   return (neuron0x20cfcb0()*0.0322942);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7db0() {
   return (neuron0x20d0130()*0.688441);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7df0() {
   return (neuron0x20d05b0()*-0.00201385);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7e30() {
   return (neuron0x20d0a30()*-0.60036);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d7e70() {
   return (neuron0x20d0eb0()*-0.788392);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d81f0() {
   return (neuron0x20c9ef0()*-0.0850004);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8230() {
   return (neuron0x20ca260()*0.153815);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8270() {
   return (neuron0x20ca6e0()*-2.88235);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d82b0() {
   return (neuron0x20cab60()*-0.667329);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d82f0() {
   return (neuron0x20cb070()*-0.201673);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8330() {
   return (neuron0x20cb4f0()*-0.346678);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8370() {
   return (neuron0x20cb970()*0.292983);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d83b0() {
   return (neuron0x20cbf80()*-1.34283);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d83f0() {
   return (neuron0x20cc370()*3.36054);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8430() {
   return (neuron0x20cc7f0()*10.6047);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8470() {
   return (neuron0x20ccc70()*0.152414);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d84b0() {
   return (neuron0x20cd0f0()*-1.66862);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d84f0() {
   return (neuron0x20cd600()*-1.27166);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8530() {
   return (neuron0x20cbd70()*-1.04056);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8570() {
   return (neuron0x20cdf10()*0.188183);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d85b0() {
   return (neuron0x20ce390()*-1.9525);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8040() {
   return (neuron0x20cec60()*-0.25489);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8080() {
   return (neuron0x20cef30()*1.34846);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8700() {
   return (neuron0x20cf3b0()*-1.37524);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8740() {
   return (neuron0x20cf830()*-2.23946);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8780() {
   return (neuron0x20cfcb0()*0.221916);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d87c0() {
   return (neuron0x20d0130()*-0.809096);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8800() {
   return (neuron0x20d05b0()*4.27858);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8840() {
   return (neuron0x20d0a30()*0.492043);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8880() {
   return (neuron0x20d0eb0()*1.35949);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8c00() {
   return (neuron0x20c9ef0()*0.448417);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8c40() {
   return (neuron0x20ca260()*-3.42953);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8c80() {
   return (neuron0x20ca6e0()*-0.184124);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8cc0() {
   return (neuron0x20cab60()*-0.188327);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8d00() {
   return (neuron0x20cb070()*2.95795);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8d40() {
   return (neuron0x20cb4f0()*-0.952648);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8d80() {
   return (neuron0x20cb970()*-0.0128216);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8dc0() {
   return (neuron0x20cbf80()*-0.216648);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8e00() {
   return (neuron0x20cc370()*5.84846);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8e40() {
   return (neuron0x20cc7f0()*-0.93159);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8e80() {
   return (neuron0x20ccc70()*8.52262);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8ec0() {
   return (neuron0x20cd0f0()*-0.702154);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8f00() {
   return (neuron0x20cd600()*-0.227862);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8f40() {
   return (neuron0x20cbd70()*0.694703);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8f80() {
   return (neuron0x20cdf10()*0.232844);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8fc0() {
   return (neuron0x20ce390()*1.6464);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8a50() {
   return (neuron0x20cec60()*0.66132);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d8a90() {
   return (neuron0x20cef30()*-7.67018);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9110() {
   return (neuron0x20cf3b0()*0.152671);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9150() {
   return (neuron0x20cf830()*-10.5999);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9190() {
   return (neuron0x20cfcb0()*-6.20542);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d91d0() {
   return (neuron0x20d0130()*-4.20495);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9210() {
   return (neuron0x20d05b0()*8.92083);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9250() {
   return (neuron0x20d0a30()*-0.0473383);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9290() {
   return (neuron0x20d0eb0()*-0.74094);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9610() {
   return (neuron0x20c9ef0()*-0.408825);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9650() {
   return (neuron0x20ca260()*0.820467);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9690() {
   return (neuron0x20ca6e0()*1.50674);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d96d0() {
   return (neuron0x20cab60()*0.171258);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9710() {
   return (neuron0x20cb070()*-0.620399);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9750() {
   return (neuron0x20cb4f0()*0.825711);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9790() {
   return (neuron0x20cb970()*-0.503435);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d97d0() {
   return (neuron0x20cbf80()*0.276416);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9810() {
   return (neuron0x20cc370()*-1.4235);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9850() {
   return (neuron0x20cc7f0()*-0.657763);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9890() {
   return (neuron0x20ccc70()*0.96747);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d98d0() {
   return (neuron0x20cd0f0()*1.17326);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9910() {
   return (neuron0x20cd600()*1.43909);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9950() {
   return (neuron0x20cbd70()*0.718481);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9990() {
   return (neuron0x20cdf10()*0.210212);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d99d0() {
   return (neuron0x20ce390()*0.42886);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9460() {
   return (neuron0x20cec60()*-0.300166);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d94a0() {
   return (neuron0x20cef30()*0.258032);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9b20() {
   return (neuron0x20cf3b0()*0.703268);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9b60() {
   return (neuron0x20cf830()*0.13872);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9ba0() {
   return (neuron0x20cfcb0()*0.14241);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9be0() {
   return (neuron0x20d0130()*0.240106);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9c20() {
   return (neuron0x20d05b0()*-0.38531);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9c60() {
   return (neuron0x20d0a30()*-0.694457);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9ca0() {
   return (neuron0x20d0eb0()*-1.55045);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da020() {
   return (neuron0x20c9ef0()*-0.302399);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da060() {
   return (neuron0x20ca260()*1.18448);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da0a0() {
   return (neuron0x20ca6e0()*1.17476);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da0e0() {
   return (neuron0x20cab60()*-0.207773);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da120() {
   return (neuron0x20cb070()*-0.312501);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da160() {
   return (neuron0x20cb4f0()*0.193759);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da1a0() {
   return (neuron0x20cb970()*0.284529);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da1e0() {
   return (neuron0x20cbf80()*-0.208409);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da220() {
   return (neuron0x20cc370()*-1.45309);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da260() {
   return (neuron0x20cc7f0()*-0.919434);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da2a0() {
   return (neuron0x20ccc70()*-0.684469);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da2e0() {
   return (neuron0x20cd0f0()*0.129736);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da320() {
   return (neuron0x20cd600()*0.617125);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da360() {
   return (neuron0x20cbd70()*-0.628607);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da3a0() {
   return (neuron0x20cdf10()*0.0735443);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da3e0() {
   return (neuron0x20ce390()*-0.00477359);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9e70() {
   return (neuron0x20cec60()*-0.706808);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d9eb0() {
   return (neuron0x20cef30()*0.759145);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da530() {
   return (neuron0x20cf3b0()*0.941849);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da570() {
   return (neuron0x20cf830()*0.531581);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da5b0() {
   return (neuron0x20cfcb0()*0.13684);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da5f0() {
   return (neuron0x20d0130()*0.83465);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da630() {
   return (neuron0x20d05b0()*-0.504225);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da670() {
   return (neuron0x20d0a30()*-0.112287);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da6b0() {
   return (neuron0x20d0eb0()*-0.869912);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20daa30() {
   return (neuron0x20c9ef0()*-0.0856918);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20daa70() {
   return (neuron0x20ca260()*0.0835594);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20daab0() {
   return (neuron0x20ca6e0()*0.399383);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20daaf0() {
   return (neuron0x20cab60()*1.13318);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dab30() {
   return (neuron0x20cb070()*0.556115);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dab70() {
   return (neuron0x20cb4f0()*0.100585);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dabb0() {
   return (neuron0x20cb970()*-0.134847);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dabf0() {
   return (neuron0x20cbf80()*0.38726);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dac30() {
   return (neuron0x20cc370()*0.888517);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dac70() {
   return (neuron0x20cc7f0()*1.06401);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dacb0() {
   return (neuron0x20ccc70()*-0.547505);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dacf0() {
   return (neuron0x20cd0f0()*0.266671);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dad30() {
   return (neuron0x20cd600()*0.268498);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dad70() {
   return (neuron0x20cbd70()*0.414949);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dadb0() {
   return (neuron0x20cdf10()*1.12986);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dadf0() {
   return (neuron0x20ce390()*0.856632);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da880() {
   return (neuron0x20cec60()*0.610726);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20da8c0() {
   return (neuron0x20cef30()*-0.245051);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20daf40() {
   return (neuron0x20cf3b0()*-0.0710575);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20daf80() {
   return (neuron0x20cf830()*0.246826);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dafc0() {
   return (neuron0x20cfcb0()*0.62651);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db000() {
   return (neuron0x20d0130()*-1.08168);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db040() {
   return (neuron0x20d05b0()*0.521018);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db080() {
   return (neuron0x20d0a30()*0.378786);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db0c0() {
   return (neuron0x20d0eb0()*0.760749);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db440() {
   return (neuron0x20c9ef0()*0.0167712);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db480() {
   return (neuron0x20ca260()*7.36081);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db4c0() {
   return (neuron0x20ca6e0()*0.903352);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db500() {
   return (neuron0x20cab60()*-1.51944);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db540() {
   return (neuron0x20cb070()*-4.55542);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db580() {
   return (neuron0x20cb4f0()*-0.336222);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db5c0() {
   return (neuron0x20cb970()*0.363623);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db600() {
   return (neuron0x20cbf80()*0.321638);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db640() {
   return (neuron0x20cc370()*-3.26282);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db680() {
   return (neuron0x20cc7f0()*-4.03804);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db6c0() {
   return (neuron0x20ccc70()*1.86958);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db700() {
   return (neuron0x20cd0f0()*-0.369326);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db740() {
   return (neuron0x20cd600()*-0.476208);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db780() {
   return (neuron0x20cbd70()*-1.63459);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db7c0() {
   return (neuron0x20cdf10()*-1.65532);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db800() {
   return (neuron0x20ce390()*-0.324706);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db290() {
   return (neuron0x20cec60()*0.325008);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db2d0() {
   return (neuron0x20cef30()*2.05302);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db950() {
   return (neuron0x20cf3b0()*0.472876);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db990() {
   return (neuron0x20cf830()*16.5752);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20db9d0() {
   return (neuron0x20cfcb0()*10.1054);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dba10() {
   return (neuron0x20d0130()*11.8056);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dba50() {
   return (neuron0x20d05b0()*-14.6587);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dba90() {
   return (neuron0x20d0a30()*-0.500906);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbad0() {
   return (neuron0x20d0eb0()*-2.23016);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbe50() {
   return (neuron0x20c9ef0()*-0.23228);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbe90() {
   return (neuron0x20ca260()*-1.62239);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbed0() {
   return (neuron0x20ca6e0()*-1.36553);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbf10() {
   return (neuron0x20cab60()*0.34341);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbf50() {
   return (neuron0x20cb070()*0.972928);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbf90() {
   return (neuron0x20cb4f0()*0.0869163);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbfd0() {
   return (neuron0x20cb970()*-0.105494);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc010() {
   return (neuron0x20cbf80()*-0.00742344);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc050() {
   return (neuron0x20cc370()*0.311103);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc090() {
   return (neuron0x20cc7f0()*1.31875);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc0d0() {
   return (neuron0x20ccc70()*-1.06316);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc110() {
   return (neuron0x20cd0f0()*-0.76783);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc150() {
   return (neuron0x20cd600()*-0.766082);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc190() {
   return (neuron0x20cbd70()*0.452271);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc1d0() {
   return (neuron0x20cdf10()*0.44436);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc210() {
   return (neuron0x20ce390()*-0.0523322);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbca0() {
   return (neuron0x20cec60()*2.18515);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dbce0() {
   return (neuron0x20cef30()*0.055042);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc360() {
   return (neuron0x20cf3b0()*-0.426585);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc3a0() {
   return (neuron0x20cf830()*-2.18061);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc3e0() {
   return (neuron0x20cfcb0()*-0.951634);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc420() {
   return (neuron0x20d0130()*-1.90995);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc460() {
   return (neuron0x20d05b0()*2.06284);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc4a0() {
   return (neuron0x20d0a30()*0.120929);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc4e0() {
   return (neuron0x20d0eb0()*0.328483);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc860() {
   return (neuron0x20c9ef0()*0.596987);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca080() {
   return (neuron0x20ca260()*1.68556);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca0c0() {
   return (neuron0x20ca6e0()*2.35246);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca480() {
   return (neuron0x20cab60()*0.141807);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca4c0() {
   return (neuron0x20cb070()*0.453923);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca900() {
   return (neuron0x20cb4f0()*0.813084);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ca940() {
   return (neuron0x20cb970()*0.0648439);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cad80() {
   return (neuron0x20cbf80()*0.679076);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cadc0() {
   return (neuron0x20cc370()*-1.10475);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb290() {
   return (neuron0x20cc7f0()*-1.09193);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb2d0() {
   return (neuron0x20ccc70()*0.356261);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb710() {
   return (neuron0x20cd0f0()*1.47085);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cb750() {
   return (neuron0x20cd600()*2.06475);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbb90() {
   return (neuron0x20cbd70()*0.580827);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cbbd0() {
   return (neuron0x20cdf10()*-0.1988);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc110() {
   return (neuron0x20ce390()*1.5086);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc150() {
   return (neuron0x20cec60()*1.20511);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc590() {
   return (neuron0x20cef30()*0.604277);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cc5d0() {
   return (neuron0x20cf3b0()*1.47596);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cca10() {
   return (neuron0x20cf830()*1.6702);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cca50() {
   return (neuron0x20cfcb0()*1.51864);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cce90() {
   return (neuron0x20d0130()*0.744853);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cced0() {
   return (neuron0x20d05b0()*-0.118047);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd310() {
   return (neuron0x20d0a30()*-0.486563);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd350() {
   return (neuron0x20d0eb0()*-1.09676);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6cd0() {
   return (neuron0x20c9ef0()*-0.434425);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d6d10() {
   return (neuron0x20ca260()*-0.82724);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce5b0() {
   return (neuron0x20ca6e0()*0.498593);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20ce5f0() {
   return (neuron0x20cab60()*-0.441232);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc6b0() {
   return (neuron0x20cb070()*-0.0733834);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dc6f0() {
   return (neuron0x20cb4f0()*0.268677);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c9960() {
   return (neuron0x20cb970()*-0.00132133);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c99a0() {
   return (neuron0x20cbf80()*-0.403908);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf150() {
   return (neuron0x20cc370()*1.19111);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf190() {
   return (neuron0x20cc7f0()*-1.0103);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf5d0() {
   return (neuron0x20ccc70()*3.20598);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cf610() {
   return (neuron0x20cd0f0()*0.264025);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfa50() {
   return (neuron0x20cd600()*0.496536);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfa90() {
   return (neuron0x20cbd70()*0.767171);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cfed0() {
   return (neuron0x20cdf10()*-0.143155);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cff10() {
   return (neuron0x20ce390()*0.367529);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0350() {
   return (neuron0x20cec60()*-0.104792);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0390() {
   return (neuron0x20cef30()*0.60528);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d07d0() {
   return (neuron0x20cf3b0()*0.284867);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0810() {
   return (neuron0x20cf830()*1.4998);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0c50() {
   return (neuron0x20cfcb0()*-0.627993);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d0c90() {
   return (neuron0x20d0130()*0.642139);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d10d0() {
   return (neuron0x20d05b0()*0.786777);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20d1110() {
   return (neuron0x20d0a30()*0.295145);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd820() {
   return (neuron0x20d0eb0()*-0.0760752);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20cd860() {
   return (neuron0x20c9ef0()*-0.0200821);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfad0() {
   return (neuron0x20ca260()*-0.258411);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfb10() {
   return (neuron0x20ca6e0()*-0.106703);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfb50() {
   return (neuron0x20cab60()*-0.126161);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfb90() {
   return (neuron0x20cb070()*-0.158751);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfbd0() {
   return (neuron0x20cb4f0()*0.232982);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfc10() {
   return (neuron0x20cb970()*-0.135346);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfc50() {
   return (neuron0x20cbf80()*0.52122);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfc90() {
   return (neuron0x20cc370()*-0.0784523);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfcd0() {
   return (neuron0x20cc7f0()*0.0957007);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfd10() {
   return (neuron0x20ccc70()*-0.10495);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfd50() {
   return (neuron0x20cd0f0()*0.37104);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfd90() {
   return (neuron0x20cd600()*0.226155);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfdd0() {
   return (neuron0x20cbd70()*0.458774);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfe10() {
   return (neuron0x20cdf10()*0.238633);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dfe50() {
   return (neuron0x20ce390()*0.408851);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20df920() {
   return (neuron0x20cec60()*0.51052);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20df960() {
   return (neuron0x20cef30()*-0.245501);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dffa0() {
   return (neuron0x20cf3b0()*-0.0229976);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20dffe0() {
   return (neuron0x20cf830()*-0.105864);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0020() {
   return (neuron0x20cfcb0()*-0.279493);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0060() {
   return (neuron0x20d0130()*0.492792);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e00a0() {
   return (neuron0x20d05b0()*-0.203463);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e00e0() {
   return (neuron0x20d0a30()*0.357563);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0120() {
   return (neuron0x20d0eb0()*0.331156);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e04a0() {
   return (neuron0x20c9ef0()*-1.20609);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e04e0() {
   return (neuron0x20ca260()*-0.725777);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0520() {
   return (neuron0x20ca6e0()*-0.694224);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0560() {
   return (neuron0x20cab60()*0.134546);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e05a0() {
   return (neuron0x20cb070()*-2.02725);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e05e0() {
   return (neuron0x20cb4f0()*-0.421318);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0620() {
   return (neuron0x20cb970()*-0.618652);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0660() {
   return (neuron0x20cbf80()*-0.494595);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e06a0() {
   return (neuron0x20cc370()*0.487851);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e06e0() {
   return (neuron0x20cc7f0()*2.43707);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0720() {
   return (neuron0x20ccc70()*-6.99915);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0760() {
   return (neuron0x20cd0f0()*-0.0962312);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e07a0() {
   return (neuron0x20cd600()*-0.461792);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e07e0() {
   return (neuron0x20cbd70()*1.45091);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0820() {
   return (neuron0x20cdf10()*0.178601);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0860() {
   return (neuron0x20ce390()*-0.714515);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e02f0() {
   return (neuron0x20cec60()*2.16176);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0330() {
   return (neuron0x20cef30()*-1.38786);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e09b0() {
   return (neuron0x20cf3b0()*-1.27181);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e09f0() {
   return (neuron0x20cf830()*0.260367);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0a30() {
   return (neuron0x20cfcb0()*-1.55104);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0a70() {
   return (neuron0x20d0130()*-2.17283);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0ab0() {
   return (neuron0x20d05b0()*0.457648);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0af0() {
   return (neuron0x20d0a30()*0.241368);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0b30() {
   return (neuron0x20d0eb0()*1.52081);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0eb0() {
   return (neuron0x20c9ef0()*-0.135973);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0ef0() {
   return (neuron0x20ca260()*-1.29457);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0f30() {
   return (neuron0x20ca6e0()*-3.01848);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0f70() {
   return (neuron0x20cab60()*0.67977);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0fb0() {
   return (neuron0x20cb070()*-0.908203);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0ff0() {
   return (neuron0x20cb4f0()*-0.481607);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1030() {
   return (neuron0x20cb970()*-0.120078);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1070() {
   return (neuron0x20cbf80()*-1.59641);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e10b0() {
   return (neuron0x20cc370()*3.04054);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e10f0() {
   return (neuron0x20cc7f0()*13.2675);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1130() {
   return (neuron0x20ccc70()*-2.562);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1170() {
   return (neuron0x20cd0f0()*-0.96101);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e11b0() {
   return (neuron0x20cd600()*-2.03508);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e11f0() {
   return (neuron0x20cbd70()*0.0164175);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1230() {
   return (neuron0x20cdf10()*0.142509);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1270() {
   return (neuron0x20ce390()*-2.68586);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0d00() {
   return (neuron0x20cec60()*-1.73596);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e0d40() {
   return (neuron0x20cef30()*1.7436);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e13c0() {
   return (neuron0x20cf3b0()*-1.76471);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1400() {
   return (neuron0x20cf830()*-2.67038);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1440() {
   return (neuron0x20cfcb0()*0.226677);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1480() {
   return (neuron0x20d0130()*-1.03388);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e14c0() {
   return (neuron0x20d05b0()*5.64413);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1500() {
   return (neuron0x20d0a30()*0.94271);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1540() {
   return (neuron0x20d0eb0()*2.81309);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e18c0() {
   return (neuron0x20c9ef0()*0.41832);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1900() {
   return (neuron0x20ca260()*0.00356249);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1940() {
   return (neuron0x20ca6e0()*-0.0575492);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1980() {
   return (neuron0x20cab60()*-0.436301);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e19c0() {
   return (neuron0x20cb070()*-0.183794);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1a00() {
   return (neuron0x20cb4f0()*0.566082);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1a40() {
   return (neuron0x20cb970()*-0.177103);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1a80() {
   return (neuron0x20cbf80()*-0.014466);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1ac0() {
   return (neuron0x20cc370()*1.10787);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1b00() {
   return (neuron0x20cc7f0()*0.116296);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1b40() {
   return (neuron0x20ccc70()*1.24967);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1b80() {
   return (neuron0x20cd0f0()*-0.250276);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1bc0() {
   return (neuron0x20cd600()*-0.129444);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1c00() {
   return (neuron0x20cbd70()*-1.06809);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1c40() {
   return (neuron0x20cdf10()*0.210687);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1c80() {
   return (neuron0x20ce390()*0.285411);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1710() {
   return (neuron0x20cec60()*0.388401);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1750() {
   return (neuron0x20cef30()*0.53189);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1dd0() {
   return (neuron0x20cf3b0()*-0.169842);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1e10() {
   return (neuron0x20cf830()*1.35601);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1e50() {
   return (neuron0x20cfcb0()*-0.568664);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1e90() {
   return (neuron0x20d0130()*0.321474);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1ed0() {
   return (neuron0x20d05b0()*-0.812721);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1f10() {
   return (neuron0x20d0a30()*-0.311798);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e1f50() {
   return (neuron0x20d0eb0()*-0.0267102);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e22d0() {
   return (neuron0x20c9ef0()*-0.188896);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2310() {
   return (neuron0x20ca260()*-1.73067);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2350() {
   return (neuron0x20ca6e0()*-1.61286);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2390() {
   return (neuron0x20cab60()*-0.35434);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e23d0() {
   return (neuron0x20cb070()*-0.581572);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2410() {
   return (neuron0x20cb4f0()*-0.617268);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2450() {
   return (neuron0x20cb970()*-0.00836113);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2490() {
   return (neuron0x20cbf80()*-0.974397);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e24d0() {
   return (neuron0x20cc370()*0.671292);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2510() {
   return (neuron0x20cc7f0()*0.664852);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2550() {
   return (neuron0x20ccc70()*-1.03211);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2590() {
   return (neuron0x20cd0f0()*-1.37936);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e25d0() {
   return (neuron0x20cd600()*-2.14953);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2610() {
   return (neuron0x20cbd70()*-0.543786);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2650() {
   return (neuron0x20cdf10()*-0.0117783);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2690() {
   return (neuron0x20ce390()*-0.822318);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2120() {
   return (neuron0x20cec60()*-0.610413);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2160() {
   return (neuron0x20cef30()*-0.577317);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e27e0() {
   return (neuron0x20cf3b0()*-1.61944);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2820() {
   return (neuron0x20cf830()*-0.871951);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2860() {
   return (neuron0x20cfcb0()*-1.24977);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e28a0() {
   return (neuron0x20d0130()*-1.16497);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e28e0() {
   return (neuron0x20d05b0()*0.23624);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2920() {
   return (neuron0x20d0a30()*0.730841);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2960() {
   return (neuron0x20d0eb0()*1.33007);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2ce0() {
   return (neuron0x20c9ef0()*0.0723164);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2d20() {
   return (neuron0x20ca260()*1.08145);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2d60() {
   return (neuron0x20ca6e0()*1.44539);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2da0() {
   return (neuron0x20cab60()*0.0042827);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2de0() {
   return (neuron0x20cb070()*0.38158);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2e20() {
   return (neuron0x20cb4f0()*0.184192);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2e60() {
   return (neuron0x20cb970()*-0.104682);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2ea0() {
   return (neuron0x20cbf80()*-0.122396);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2ee0() {
   return (neuron0x20cc370()*-0.965552);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2f20() {
   return (neuron0x20cc7f0()*-0.646034);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2f60() {
   return (neuron0x20ccc70()*-0.034761);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2fa0() {
   return (neuron0x20cd0f0()*-0.123255);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2fe0() {
   return (neuron0x20cd600()*1.15787);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3020() {
   return (neuron0x20cbd70()*-0.538859);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3060() {
   return (neuron0x20cdf10()*-0.425657);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e30a0() {
   return (neuron0x20ce390()*0.878124);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2b30() {
   return (neuron0x20cec60()*-0.273454);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e2b70() {
   return (neuron0x20cef30()*0.55635);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e31f0() {
   return (neuron0x20cf3b0()*0.623609);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3230() {
   return (neuron0x20cf830()*0.597708);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3270() {
   return (neuron0x20cfcb0()*0.453865);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e32b0() {
   return (neuron0x20d0130()*0.744827);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e32f0() {
   return (neuron0x20d05b0()*-0.000141954);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3330() {
   return (neuron0x20d0a30()*-0.576713);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3370() {
   return (neuron0x20d0eb0()*-0.337298);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e36f0() {
   return (neuron0x20c9ef0()*0.310801);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3730() {
   return (neuron0x20ca260()*-2.41067);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3770() {
   return (neuron0x20ca6e0()*-1.41462);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e37b0() {
   return (neuron0x20cab60()*1.4976);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e37f0() {
   return (neuron0x20cb070()*-0.984283);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3830() {
   return (neuron0x20cb4f0()*0.59953);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3870() {
   return (neuron0x20cb970()*-0.241181);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e38b0() {
   return (neuron0x20cbf80()*0.286701);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e38f0() {
   return (neuron0x20cc370()*0.518513);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3930() {
   return (neuron0x20cc7f0()*2.42227);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3970() {
   return (neuron0x20ccc70()*-3.98737);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e39b0() {
   return (neuron0x20cd0f0()*0.528945);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e39f0() {
   return (neuron0x20cd600()*-0.465317);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3a30() {
   return (neuron0x20cbd70()*0.909923);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3a70() {
   return (neuron0x20cdf10()*1.2834);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3ab0() {
   return (neuron0x20ce390()*0.178356);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3540() {
   return (neuron0x20cec60()*0.918264);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3580() {
   return (neuron0x20cef30()*-0.13868);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3c00() {
   return (neuron0x20cf3b0()*-0.598171);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3c40() {
   return (neuron0x20cf830()*-4.56524);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3c80() {
   return (neuron0x20cfcb0()*-2.85901);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3cc0() {
   return (neuron0x20d0130()*-5.50693);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3d00() {
   return (neuron0x20d05b0()*4.39417);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3d40() {
   return (neuron0x20d0a30()*0.46302);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3d80() {
   return (neuron0x20d0eb0()*2.77976);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4100() {
   return (neuron0x20c9ef0()*-0.587054);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4140() {
   return (neuron0x20ca260()*-0.264016);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4180() {
   return (neuron0x20ca6e0()*1.0475);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e41c0() {
   return (neuron0x20cab60()*-0.0317598);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4200() {
   return (neuron0x20cb070()*-1.52069);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4240() {
   return (neuron0x20cb4f0()*-0.0507359);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4280() {
   return (neuron0x20cb970()*0.239587);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e42c0() {
   return (neuron0x20cbf80()*0.366739);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4300() {
   return (neuron0x20cc370()*-1.00074);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4340() {
   return (neuron0x20cc7f0()*0.688787);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4380() {
   return (neuron0x20ccc70()*-1.53893);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e43c0() {
   return (neuron0x20cd0f0()*0.385543);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4400() {
   return (neuron0x20cd600()*0.482549);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4440() {
   return (neuron0x20cbd70()*0.512381);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4480() {
   return (neuron0x20cdf10()*0.315557);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e44c0() {
   return (neuron0x20ce390()*0.111854);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3f50() {
   return (neuron0x20cec60()*-0.450286);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e3f90() {
   return (neuron0x20cef30()*-0.169954);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4610() {
   return (neuron0x20cf3b0()*0.485635);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4650() {
   return (neuron0x20cf830()*-0.599161);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4690() {
   return (neuron0x20cfcb0()*1.05561);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e46d0() {
   return (neuron0x20d0130()*-0.139604);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4710() {
   return (neuron0x20d05b0()*-1.1912);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4750() {
   return (neuron0x20d0a30()*-0.072945);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4790() {
   return (neuron0x20d0eb0()*-0.518549);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e49f0() {
   return (neuron0x20d2dc0()*4.60778);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4a30() {
   return (neuron0x20cdb90()*1.59775);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4a70() {
   return (neuron0x20d3930()*4.4785);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4ab0() {
   return (neuron0x20d4450()*-2.76555);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4af0() {
   return (neuron0x20d4e60()*0.4354);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4b30() {
   return (neuron0x20d5870()*0.732827);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4b70() {
   return (neuron0x20d3460()*-2.08265);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4bb0() {
   return (neuron0x20d74a0()*-0.320858);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4bf0() {
   return (neuron0x20d7eb0()*3.68036);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4c30() {
   return (neuron0x20d88c0()*-7.5838);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4c70() {
   return (neuron0x20d92d0()*2.24314);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4cb0() {
   return (neuron0x20d9ce0()*1.17795);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4cf0() {
   return (neuron0x20da6f0()*2.08473);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4d30() {
   return (neuron0x20db100()*-8.23583);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4d70() {
   return (neuron0x20dbb10()*-7.58062);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4db0() {
   return (neuron0x20dc520()*2.0642);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c9dc0() {
   return (neuron0x20d6b40()*2.83264);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20c9e00() {
   return (neuron0x20df790()*-0.425545);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4f00() {
   return (neuron0x20e0160()*6.84163);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4f40() {
   return (neuron0x20e0b70()*-3.17863);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4f80() {
   return (neuron0x20e1580()*-2.71606);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e4fc0() {
   return (neuron0x20e1f90()*-3.81222);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e5000() {
   return (neuron0x20e29a0()*1.76947);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e5040() {
   return (neuron0x20e33b0()*3.39793);
}

double nnFunc_3A_25_25hi_5000ep_weight_down::synapse0x20e5080() {
   return (neuron0x20e3dc0()*3.39687);
}

