#include "25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_upwing/nnFunc_25_25hi_5000ep_weight.h"
#include <cmath>

double nnFunc_25_25hi_5000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1a29890();
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
         return neuron0x1a29890();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0de40() {
   return input0;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0e180() {
   return input1;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0e4c0() {
   return input2;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0e800() {
   return input3;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0eb40() {
   return input4;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a0efb0() {
   double input = 0.620731;
   input += synapse0x191afb0();
   input += synapse0x19fd2b0();
   input += synapse0x1a0f260();
   input += synapse0x1a0f2a0();
   input += synapse0x1a0f2e0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0efb0() {
   double input = input0x1a0efb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a0f320() {
   double input = -0.357133;
   input += synapse0x1a0f660();
   input += synapse0x1a0f6a0();
   input += synapse0x1a0f6e0();
   input += synapse0x1a0f720();
   input += synapse0x1a0f760();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0f320() {
   double input = input0x1a0f320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a0f7a0() {
   double input = -13.0156;
   input += synapse0x1a0fae0();
   input += synapse0x1a0fb20();
   input += synapse0x1a0fb60();
   input += synapse0x1a0fba0();
   input += synapse0x1a0fbe0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0f7a0() {
   double input = input0x1a0f7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a0fc20() {
   double input = -0.335347;
   input += synapse0x1a0ff60();
   input += synapse0x1a0ffa0();
   input += synapse0x190d1a0();
   input += synapse0x190d1e0();
   input += synapse0x1a100f0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a0fc20() {
   double input = input0x1a0fc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a10130() {
   double input = 21.1369;
   input += synapse0x1a10470();
   input += synapse0x1a104b0();
   input += synapse0x1a104f0();
   input += synapse0x1a10530();
   input += synapse0x1a10570();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a10130() {
   double input = input0x1a10130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a105b0() {
   double input = 1.95861;
   input += synapse0x1a108f0();
   input += synapse0x1a10930();
   input += synapse0x1a10970();
   input += synapse0x1a109b0();
   input += synapse0x1a109f0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a105b0() {
   double input = input0x1a105b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a10a30() {
   double input = -0.357563;
   input += synapse0x1a10d70();
   input += synapse0x1a10db0();
   input += synapse0x1a10df0();
   input += synapse0x1a0ffe0();
   input += synapse0x1a10020();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a10a30() {
   double input = input0x1a10a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a11040() {
   double input = -15.0002;
   input += synapse0x1a112f0();
   input += synapse0x1a11330();
   input += synapse0x1a11370();
   input += synapse0x1a113b0();
   input += synapse0x1a113f0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a11040() {
   double input = input0x1a11040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a11430() {
   double input = 1.45344;
   input += synapse0x1a11770();
   input += synapse0x1a117b0();
   input += synapse0x1a117f0();
   input += synapse0x1a11830();
   input += synapse0x1a11870();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a11430() {
   double input = input0x1a11430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a118b0() {
   double input = -0.598812;
   input += synapse0x1a11bf0();
   input += synapse0x1a11c30();
   input += synapse0x1a11c70();
   input += synapse0x1a11cb0();
   input += synapse0x1a11cf0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a118b0() {
   double input = input0x1a118b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a11d30() {
   double input = -0.0403335;
   input += synapse0x1a12070();
   input += synapse0x1a120b0();
   input += synapse0x1a120f0();
   input += synapse0x1a12130();
   input += synapse0x1a12170();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a11d30() {
   double input = input0x1a11d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a121b0() {
   double input = -0.738233;
   input += synapse0x190cff0();
   input += synapse0x190d030();
   input += synapse0x1a12600();
   input += synapse0x1a12640();
   input += synapse0x1a12680();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a121b0() {
   double input = input0x1a121b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a126c0() {
   double input = 14.1626;
   input += synapse0x1a12a00();
   input += synapse0x1a12a40();
   input += synapse0x1a12a80();
   input += synapse0x1a12ac0();
   input += synapse0x1a12b00();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a126c0() {
   double input = input0x1a126c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a10e30() {
   double input = -0.66414;
   input += synapse0x190d7c0();
   input += synapse0x1a10fc0();
   input += synapse0x1a11000();
   input += synapse0x1a12f50();
   input += synapse0x1a12f90();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a10e30() {
   double input = input0x1a10e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a12fd0() {
   double input = -6.10685;
   input += synapse0x1a13310();
   input += synapse0x1a13350();
   input += synapse0x1a13390();
   input += synapse0x1a133d0();
   input += synapse0x1a13410();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a12fd0() {
   double input = input0x1a12fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a13450() {
   double input = -0.783681;
   input += synapse0x1a13790();
   input += synapse0x1a0e060();
   input += synapse0x1a0e0a0();
   input += synapse0x1a0e3a0();
   input += synapse0x1a0e3e0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a13450() {
   double input = input0x1a13450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a13d20() {
   double input = 4.07902;
   input += synapse0x1a13eb0();
   input += synapse0x1a13ef0();
   input += synapse0x1a13f30();
   input += synapse0x1a13f70();
   input += synapse0x1a13fb0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a13d20() {
   double input = input0x1a13d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a13ff0() {
   double input = -0.746246;
   input += synapse0x1a14330();
   input += synapse0x1a14370();
   input += synapse0x1a143b0();
   input += synapse0x1a143f0();
   input += synapse0x1a14430();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a13ff0() {
   double input = input0x1a13ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a14470() {
   double input = -3.0944;
   input += synapse0x1a147b0();
   input += synapse0x1a147f0();
   input += synapse0x1a14830();
   input += synapse0x1a14870();
   input += synapse0x1a148b0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a14470() {
   double input = input0x1a14470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a148f0() {
   double input = -1.54835;
   input += synapse0x1a14c30();
   input += synapse0x1a14c70();
   input += synapse0x1a14cb0();
   input += synapse0x1a14cf0();
   input += synapse0x1a14d30();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a148f0() {
   double input = input0x1a148f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a14d70() {
   double input = 0.369009;
   input += synapse0x1a150b0();
   input += synapse0x1a150f0();
   input += synapse0x1a15130();
   input += synapse0x1a15170();
   input += synapse0x1a151b0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a14d70() {
   double input = input0x1a14d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a151f0() {
   double input = -16.0534;
   input += synapse0x1a15530();
   input += synapse0x1a15570();
   input += synapse0x1a155b0();
   input += synapse0x1a155f0();
   input += synapse0x1a15630();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a151f0() {
   double input = input0x1a151f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a15670() {
   double input = 0.637211;
   input += synapse0x1a159b0();
   input += synapse0x1a159f0();
   input += synapse0x1a15a30();
   input += synapse0x1a15a70();
   input += synapse0x1a15ab0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a15670() {
   double input = input0x1a15670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a15af0() {
   double input = 1.02673;
   input += synapse0x1a15e30();
   input += synapse0x1a15e70();
   input += synapse0x1a15eb0();
   input += synapse0x1a15ef0();
   input += synapse0x1a15f30();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a15af0() {
   double input = input0x1a15af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a15f70() {
   double input = -4.89178;
   input += synapse0x1a162b0();
   input += synapse0x1a162f0();
   input += synapse0x1a16330();
   input += synapse0x1a16370();
   input += synapse0x1a163b0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a15f70() {
   double input = input0x1a15f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a17e80() {
   double input = -0.478444;
   input += synapse0x1a0fed0();
   input += synapse0x1a0ff10();
   input += synapse0x1a103e0();
   input += synapse0x1a10420();
   input += synapse0x1a10860();
   input += synapse0x1a108a0();
   input += synapse0x1a10ce0();
   input += synapse0x1a10d20();
   input += synapse0x1a11260();
   input += synapse0x1a112a0();
   input += synapse0x1a116e0();
   input += synapse0x1a11720();
   input += synapse0x1a11b60();
   input += synapse0x1a11ba0();
   input += synapse0x1a11fe0();
   input += synapse0x1a12020();
   input += synapse0x1a12460();
   input += synapse0x1a124a0();
   input += synapse0x1a12970();
   input += synapse0x1a129b0();
   input += synapse0x1a13280();
   input += synapse0x1a132c0();
   input += synapse0x1a13700();
   input += synapse0x1a13740();
   input += synapse0x1a0ed60();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a17e80() {
   double input = input0x1a17e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a12c50() {
   double input = -0.562507;
   input += synapse0x1a12de0();
   input += synapse0x1a12e20();
   input += synapse0x1a12e60();
   input += synapse0x1a12ea0();
   input += synapse0x1a12ee0();
   input += synapse0x1a0eda0();
   input += synapse0x1a15020();
   input += synapse0x1a15060();
   input += synapse0x1a154a0();
   input += synapse0x1a154e0();
   input += synapse0x1a15920();
   input += synapse0x1a15960();
   input += synapse0x1a15da0();
   input += synapse0x1a15de0();
   input += synapse0x1a16220();
   input += synapse0x1a16260();
   input += synapse0x1a0f1d0();
   input += synapse0x1a0f210();
   input += synapse0x1a142a0();
   input += synapse0x1a142e0();
   input += synapse0x191b080();
   input += synapse0x191b0c0();
   input += synapse0x1a18930();
   input += synapse0x1a18970();
   input += synapse0x1a189b0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a12c50() {
   double input = input0x1a12c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a189f0() {
   double input = 0.736968;
   input += synapse0x1a124f0();
   input += synapse0x1a12530();
   input += synapse0x1a12570();
   input += synapse0x1a125b0();
   input += synapse0x1a18f40();
   input += synapse0x1a18f80();
   input += synapse0x1a18fc0();
   input += synapse0x1a19000();
   input += synapse0x1a19040();
   input += synapse0x1a19080();
   input += synapse0x1a190c0();
   input += synapse0x1a19100();
   input += synapse0x1a19140();
   input += synapse0x1a19180();
   input += synapse0x1a191c0();
   input += synapse0x1a19200();
   input += synapse0x1a18b80();
   input += synapse0x1a18bc0();
   input += synapse0x1a19350();
   input += synapse0x1a19390();
   input += synapse0x1a193d0();
   input += synapse0x1a19410();
   input += synapse0x1a19450();
   input += synapse0x1a19490();
   input += synapse0x1a194d0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a189f0() {
   double input = input0x1a189f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a19510() {
   double input = -0.730318;
   input += synapse0x1a19850();
   input += synapse0x1a19890();
   input += synapse0x1a198d0();
   input += synapse0x1a19910();
   input += synapse0x1a19950();
   input += synapse0x1a19990();
   input += synapse0x1a199d0();
   input += synapse0x1a19a10();
   input += synapse0x1a19a50();
   input += synapse0x1a19a90();
   input += synapse0x1a19ad0();
   input += synapse0x1a19b10();
   input += synapse0x1a19b50();
   input += synapse0x1a19b90();
   input += synapse0x1a19bd0();
   input += synapse0x1a19c10();
   input += synapse0x1a196a0();
   input += synapse0x1a196e0();
   input += synapse0x1a19d60();
   input += synapse0x1a19da0();
   input += synapse0x1a19de0();
   input += synapse0x1a19e20();
   input += synapse0x1a19e60();
   input += synapse0x1a19ea0();
   input += synapse0x1a19ee0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a19510() {
   double input = input0x1a19510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a19f20() {
   double input = -0.192886;
   input += synapse0x1a1a260();
   input += synapse0x1a1a2a0();
   input += synapse0x1a1a2e0();
   input += synapse0x1a1a320();
   input += synapse0x1a1a360();
   input += synapse0x1a1a3a0();
   input += synapse0x1a1a3e0();
   input += synapse0x1a1a420();
   input += synapse0x1a1a460();
   input += synapse0x1a1a4a0();
   input += synapse0x1a1a4e0();
   input += synapse0x1a1a520();
   input += synapse0x1a1a560();
   input += synapse0x1a1a5a0();
   input += synapse0x1a1a5e0();
   input += synapse0x1a1a620();
   input += synapse0x1a1a0b0();
   input += synapse0x1a1a0f0();
   input += synapse0x1a1a770();
   input += synapse0x1a1a7b0();
   input += synapse0x1a1a7f0();
   input += synapse0x1a1a830();
   input += synapse0x1a1a870();
   input += synapse0x1a1a8b0();
   input += synapse0x1a1a8f0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a19f20() {
   double input = input0x1a19f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1a930() {
   double input = -0.619937;
   input += synapse0x1a1ac70();
   input += synapse0x1a1acb0();
   input += synapse0x1a1acf0();
   input += synapse0x1a1ad30();
   input += synapse0x1a1ad70();
   input += synapse0x1a1adb0();
   input += synapse0x1a1adf0();
   input += synapse0x1a18010();
   input += synapse0x1a18050();
   input += synapse0x1a18090();
   input += synapse0x1a180d0();
   input += synapse0x1a18110();
   input += synapse0x1a18150();
   input += synapse0x1a18190();
   input += synapse0x1a181d0();
   input += synapse0x1a18210();
   input += synapse0x1a1aac0();
   input += synapse0x1a1ab00();
   input += synapse0x1a18360();
   input += synapse0x1a183a0();
   input += synapse0x1a183e0();
   input += synapse0x1a18420();
   input += synapse0x1a18460();
   input += synapse0x1a184a0();
   input += synapse0x1a184e0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1a930() {
   double input = input0x1a1a930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a18520() {
   double input = 0.0860735;
   input += synapse0x1a187d0();
   input += synapse0x1a1bed0();
   input += synapse0x1a1bf10();
   input += synapse0x1a1bf50();
   input += synapse0x1a1bf90();
   input += synapse0x1a1bfd0();
   input += synapse0x1a1c010();
   input += synapse0x1a1c050();
   input += synapse0x1a1c090();
   input += synapse0x1a1c0d0();
   input += synapse0x1a1c110();
   input += synapse0x1a1c150();
   input += synapse0x1a1c190();
   input += synapse0x1a1c1d0();
   input += synapse0x1a1c210();
   input += synapse0x1a1c250();
   input += synapse0x1a186b0();
   input += synapse0x1a186f0();
   input += synapse0x1a1c3a0();
   input += synapse0x1a1c3e0();
   input += synapse0x1a1c420();
   input += synapse0x1a1c460();
   input += synapse0x1a1c4a0();
   input += synapse0x1a1c4e0();
   input += synapse0x1a1c520();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a18520() {
   double input = input0x1a18520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1c560() {
   double input = -1.36287;
   input += synapse0x1a1c8a0();
   input += synapse0x1a1c8e0();
   input += synapse0x1a1c920();
   input += synapse0x1a1c960();
   input += synapse0x1a1c9a0();
   input += synapse0x1a1c9e0();
   input += synapse0x1a1ca20();
   input += synapse0x1a1ca60();
   input += synapse0x1a1caa0();
   input += synapse0x1a1cae0();
   input += synapse0x1a1cb20();
   input += synapse0x1a1cb60();
   input += synapse0x1a1cba0();
   input += synapse0x1a1cbe0();
   input += synapse0x1a1cc20();
   input += synapse0x1a1cc60();
   input += synapse0x1a1c6f0();
   input += synapse0x1a1c730();
   input += synapse0x1a1cdb0();
   input += synapse0x1a1cdf0();
   input += synapse0x1a1ce30();
   input += synapse0x1a1ce70();
   input += synapse0x1a1ceb0();
   input += synapse0x1a1cef0();
   input += synapse0x1a1cf30();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1c560() {
   double input = input0x1a1c560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1cf70() {
   double input = -0.818198;
   input += synapse0x1a1d2b0();
   input += synapse0x1a1d2f0();
   input += synapse0x1a1d330();
   input += synapse0x1a1d370();
   input += synapse0x1a1d3b0();
   input += synapse0x1a1d3f0();
   input += synapse0x1a1d430();
   input += synapse0x1a1d470();
   input += synapse0x1a1d4b0();
   input += synapse0x1a1d4f0();
   input += synapse0x1a1d530();
   input += synapse0x1a1d570();
   input += synapse0x1a1d5b0();
   input += synapse0x1a1d5f0();
   input += synapse0x1a1d630();
   input += synapse0x1a1d670();
   input += synapse0x1a1d100();
   input += synapse0x1a1d140();
   input += synapse0x1a1d7c0();
   input += synapse0x1a1d800();
   input += synapse0x1a1d840();
   input += synapse0x1a1d880();
   input += synapse0x1a1d8c0();
   input += synapse0x1a1d900();
   input += synapse0x1a1d940();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1cf70() {
   double input = input0x1a1cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1d980() {
   double input = -0.0148332;
   input += synapse0x1a1dcc0();
   input += synapse0x1a1dd00();
   input += synapse0x1a1dd40();
   input += synapse0x1a1dd80();
   input += synapse0x1a1ddc0();
   input += synapse0x1a1de00();
   input += synapse0x1a1de40();
   input += synapse0x1a1de80();
   input += synapse0x1a1dec0();
   input += synapse0x1a1df00();
   input += synapse0x1a1df40();
   input += synapse0x1a1df80();
   input += synapse0x1a1dfc0();
   input += synapse0x1a1e000();
   input += synapse0x1a1e040();
   input += synapse0x1a1e080();
   input += synapse0x1a1db10();
   input += synapse0x1a1db50();
   input += synapse0x1a1e1d0();
   input += synapse0x1a1e210();
   input += synapse0x1a1e250();
   input += synapse0x1a1e290();
   input += synapse0x1a1e2d0();
   input += synapse0x1a1e310();
   input += synapse0x1a1e350();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1d980() {
   double input = input0x1a1d980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1e390() {
   double input = -0.503358;
   input += synapse0x1a1e6d0();
   input += synapse0x1a1e710();
   input += synapse0x1a1e750();
   input += synapse0x1a1e790();
   input += synapse0x1a1e7d0();
   input += synapse0x1a1e810();
   input += synapse0x1a1e850();
   input += synapse0x1a1e890();
   input += synapse0x1a1e8d0();
   input += synapse0x1a1e910();
   input += synapse0x1a1e950();
   input += synapse0x1a1e990();
   input += synapse0x1a1e9d0();
   input += synapse0x1a1ea10();
   input += synapse0x1a1ea50();
   input += synapse0x1a1ea90();
   input += synapse0x1a1e520();
   input += synapse0x1a1e560();
   input += synapse0x1a1ebe0();
   input += synapse0x1a1ec20();
   input += synapse0x1a1ec60();
   input += synapse0x1a1eca0();
   input += synapse0x1a1ece0();
   input += synapse0x1a1ed20();
   input += synapse0x1a1ed60();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1e390() {
   double input = input0x1a1e390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1eda0() {
   double input = -0.00770977;
   input += synapse0x1a1f0e0();
   input += synapse0x1a1f120();
   input += synapse0x1a1f160();
   input += synapse0x1a1f1a0();
   input += synapse0x1a1f1e0();
   input += synapse0x1a1f220();
   input += synapse0x1a1f260();
   input += synapse0x1a1f2a0();
   input += synapse0x1a1f2e0();
   input += synapse0x1a1f320();
   input += synapse0x1a1f360();
   input += synapse0x1a1f3a0();
   input += synapse0x1a1f3e0();
   input += synapse0x1a1f420();
   input += synapse0x1a1f460();
   input += synapse0x1a1f4a0();
   input += synapse0x1a1ef30();
   input += synapse0x1a1ef70();
   input += synapse0x1a1f5f0();
   input += synapse0x1a1f630();
   input += synapse0x1a1f670();
   input += synapse0x1a1f6b0();
   input += synapse0x1a1f6f0();
   input += synapse0x1a1f730();
   input += synapse0x1a1f770();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1eda0() {
   double input = input0x1a1eda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1f7b0() {
   double input = -0.635725;
   input += synapse0x1a1faf0();
   input += synapse0x1a1fb30();
   input += synapse0x1a1fb70();
   input += synapse0x1a1fbb0();
   input += synapse0x1a1fbf0();
   input += synapse0x1a1fc30();
   input += synapse0x1a1fc70();
   input += synapse0x1a1fcb0();
   input += synapse0x1a1fcf0();
   input += synapse0x1a1fd30();
   input += synapse0x1a1fd70();
   input += synapse0x1a1fdb0();
   input += synapse0x1a1fdf0();
   input += synapse0x1a1fe30();
   input += synapse0x1a1fe70();
   input += synapse0x1a1feb0();
   input += synapse0x1a1f940();
   input += synapse0x1a1f980();
   input += synapse0x1a20000();
   input += synapse0x1a20040();
   input += synapse0x1a20080();
   input += synapse0x1a200c0();
   input += synapse0x1a20100();
   input += synapse0x1a20140();
   input += synapse0x1a20180();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1f7b0() {
   double input = input0x1a1f7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a201c0() {
   double input = -0.919548;
   input += synapse0x1a20500();
   input += synapse0x1a20540();
   input += synapse0x1a20580();
   input += synapse0x1a205c0();
   input += synapse0x1a20600();
   input += synapse0x1a20640();
   input += synapse0x1a20680();
   input += synapse0x1a206c0();
   input += synapse0x1a20700();
   input += synapse0x1a20740();
   input += synapse0x1a20780();
   input += synapse0x1a207c0();
   input += synapse0x1a20800();
   input += synapse0x1a20840();
   input += synapse0x1a20880();
   input += synapse0x1a208c0();
   input += synapse0x1a20350();
   input += synapse0x1a20390();
   input += synapse0x1a20a10();
   input += synapse0x1a20a50();
   input += synapse0x1a20a90();
   input += synapse0x1a20ad0();
   input += synapse0x1a20b10();
   input += synapse0x1a20b50();
   input += synapse0x1a20b90();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a201c0() {
   double input = input0x1a201c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a20bd0() {
   double input = 0.57027;
   input += synapse0x1a20f10();
   input += synapse0x1a20f50();
   input += synapse0x1a20f90();
   input += synapse0x1a20fd0();
   input += synapse0x1a21010();
   input += synapse0x1a21050();
   input += synapse0x1a21090();
   input += synapse0x1a210d0();
   input += synapse0x1a21110();
   input += synapse0x1a21150();
   input += synapse0x1a21190();
   input += synapse0x1a211d0();
   input += synapse0x1a21210();
   input += synapse0x1a21250();
   input += synapse0x1a21290();
   input += synapse0x1a212d0();
   input += synapse0x1a20d60();
   input += synapse0x1a20da0();
   input += synapse0x1a21420();
   input += synapse0x1a21460();
   input += synapse0x1a214a0();
   input += synapse0x1a214e0();
   input += synapse0x1a21520();
   input += synapse0x1a21560();
   input += synapse0x1a215a0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a20bd0() {
   double input = input0x1a20bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a215e0() {
   double input = -0.0331386;
   input += synapse0x1a21920();
   input += synapse0x1a0f140();
   input += synapse0x1a0f180();
   input += synapse0x1a0f540();
   input += synapse0x1a0f580();
   input += synapse0x1a0f9c0();
   input += synapse0x1a0fa00();
   input += synapse0x1a0fe40();
   input += synapse0x1a0fe80();
   input += synapse0x1a10350();
   input += synapse0x1a10390();
   input += synapse0x1a107d0();
   input += synapse0x1a10810();
   input += synapse0x1a10c50();
   input += synapse0x1a10c90();
   input += synapse0x1a111d0();
   input += synapse0x1a11210();
   input += synapse0x1a11650();
   input += synapse0x1a11690();
   input += synapse0x1a11ad0();
   input += synapse0x1a11b10();
   input += synapse0x1a11f50();
   input += synapse0x1a11f90();
   input += synapse0x1a123d0();
   input += synapse0x1a12410();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a215e0() {
   double input = input0x1a215e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a1bc00() {
   double input = 0.270612;
   input += synapse0x1a1bd90();
   input += synapse0x1a1bdd0();
   input += synapse0x1a13670();
   input += synapse0x1a136b0();
   input += synapse0x1a21770();
   input += synapse0x1a217b0();
   input += synapse0x1a0ea20();
   input += synapse0x1a0ea60();
   input += synapse0x1a14210();
   input += synapse0x1a14250();
   input += synapse0x1a14690();
   input += synapse0x1a146d0();
   input += synapse0x1a14b10();
   input += synapse0x1a14b50();
   input += synapse0x1a14f90();
   input += synapse0x1a14fd0();
   input += synapse0x1a15410();
   input += synapse0x1a15450();
   input += synapse0x1a15890();
   input += synapse0x1a158d0();
   input += synapse0x1a15d10();
   input += synapse0x1a15d50();
   input += synapse0x1a16190();
   input += synapse0x1a161d0();
   input += synapse0x1a128e0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a1bc00() {
   double input = input0x1a1bc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a24850() {
   double input = 0.772718;
   input += synapse0x1a12920();
   input += synapse0x1a24b90();
   input += synapse0x1a24bd0();
   input += synapse0x1a24c10();
   input += synapse0x1a24c50();
   input += synapse0x1a24c90();
   input += synapse0x1a24cd0();
   input += synapse0x1a24d10();
   input += synapse0x1a24d50();
   input += synapse0x1a24d90();
   input += synapse0x1a24dd0();
   input += synapse0x1a24e10();
   input += synapse0x1a24e50();
   input += synapse0x1a24e90();
   input += synapse0x1a24ed0();
   input += synapse0x1a24f10();
   input += synapse0x1a249e0();
   input += synapse0x1a24a20();
   input += synapse0x1a25060();
   input += synapse0x1a250a0();
   input += synapse0x1a250e0();
   input += synapse0x1a25120();
   input += synapse0x1a25160();
   input += synapse0x1a251a0();
   input += synapse0x1a251e0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a24850() {
   double input = input0x1a24850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a25220() {
   double input = 3.19044;
   input += synapse0x1a25560();
   input += synapse0x1a255a0();
   input += synapse0x1a255e0();
   input += synapse0x1a25620();
   input += synapse0x1a25660();
   input += synapse0x1a256a0();
   input += synapse0x1a256e0();
   input += synapse0x1a25720();
   input += synapse0x1a25760();
   input += synapse0x1a257a0();
   input += synapse0x1a257e0();
   input += synapse0x1a25820();
   input += synapse0x1a25860();
   input += synapse0x1a258a0();
   input += synapse0x1a258e0();
   input += synapse0x1a25920();
   input += synapse0x1a253b0();
   input += synapse0x1a253f0();
   input += synapse0x1a25a70();
   input += synapse0x1a25ab0();
   input += synapse0x1a25af0();
   input += synapse0x1a25b30();
   input += synapse0x1a25b70();
   input += synapse0x1a25bb0();
   input += synapse0x1a25bf0();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a25220() {
   double input = input0x1a25220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a25c30() {
   double input = -0.330819;
   input += synapse0x1a25f70();
   input += synapse0x1a25fb0();
   input += synapse0x1a25ff0();
   input += synapse0x1a26030();
   input += synapse0x1a26070();
   input += synapse0x1a260b0();
   input += synapse0x1a260f0();
   input += synapse0x1a26130();
   input += synapse0x1a26170();
   input += synapse0x1a261b0();
   input += synapse0x1a261f0();
   input += synapse0x1a26230();
   input += synapse0x1a26270();
   input += synapse0x1a262b0();
   input += synapse0x1a262f0();
   input += synapse0x1a26330();
   input += synapse0x1a25dc0();
   input += synapse0x1a25e00();
   input += synapse0x1a26480();
   input += synapse0x1a264c0();
   input += synapse0x1a26500();
   input += synapse0x1a26540();
   input += synapse0x1a26580();
   input += synapse0x1a265c0();
   input += synapse0x1a26600();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a25c30() {
   double input = input0x1a25c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a26640() {
   double input = -1.22253;
   input += synapse0x1a26980();
   input += synapse0x1a269c0();
   input += synapse0x1a26a00();
   input += synapse0x1a26a40();
   input += synapse0x1a26a80();
   input += synapse0x1a26ac0();
   input += synapse0x1a26b00();
   input += synapse0x1a26b40();
   input += synapse0x1a26b80();
   input += synapse0x1a26bc0();
   input += synapse0x1a26c00();
   input += synapse0x1a26c40();
   input += synapse0x1a26c80();
   input += synapse0x1a26cc0();
   input += synapse0x1a26d00();
   input += synapse0x1a26d40();
   input += synapse0x1a267d0();
   input += synapse0x1a26810();
   input += synapse0x1a26e90();
   input += synapse0x1a26ed0();
   input += synapse0x1a26f10();
   input += synapse0x1a26f50();
   input += synapse0x1a26f90();
   input += synapse0x1a26fd0();
   input += synapse0x1a27010();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a26640() {
   double input = input0x1a26640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a27050() {
   double input = -0.711828;
   input += synapse0x1a27390();
   input += synapse0x1a273d0();
   input += synapse0x1a27410();
   input += synapse0x1a27450();
   input += synapse0x1a27490();
   input += synapse0x1a274d0();
   input += synapse0x1a27510();
   input += synapse0x1a27550();
   input += synapse0x1a27590();
   input += synapse0x1a275d0();
   input += synapse0x1a27610();
   input += synapse0x1a27650();
   input += synapse0x1a27690();
   input += synapse0x1a276d0();
   input += synapse0x1a27710();
   input += synapse0x1a27750();
   input += synapse0x1a271e0();
   input += synapse0x1a27220();
   input += synapse0x1a278a0();
   input += synapse0x1a278e0();
   input += synapse0x1a27920();
   input += synapse0x1a27960();
   input += synapse0x1a279a0();
   input += synapse0x1a279e0();
   input += synapse0x1a27a20();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a27050() {
   double input = input0x1a27050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a27a60() {
   double input = 0.341625;
   input += synapse0x1a27da0();
   input += synapse0x1a27de0();
   input += synapse0x1a27e20();
   input += synapse0x1a27e60();
   input += synapse0x1a27ea0();
   input += synapse0x1a27ee0();
   input += synapse0x1a27f20();
   input += synapse0x1a27f60();
   input += synapse0x1a27fa0();
   input += synapse0x1a27fe0();
   input += synapse0x1a28020();
   input += synapse0x1a28060();
   input += synapse0x1a280a0();
   input += synapse0x1a280e0();
   input += synapse0x1a28120();
   input += synapse0x1a28160();
   input += synapse0x1a27bf0();
   input += synapse0x1a27c30();
   input += synapse0x1a282b0();
   input += synapse0x1a282f0();
   input += synapse0x1a28330();
   input += synapse0x1a28370();
   input += synapse0x1a283b0();
   input += synapse0x1a283f0();
   input += synapse0x1a28430();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a27a60() {
   double input = input0x1a27a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a28470() {
   double input = 0.12898;
   input += synapse0x1a287b0();
   input += synapse0x1a287f0();
   input += synapse0x1a28830();
   input += synapse0x1a28870();
   input += synapse0x1a288b0();
   input += synapse0x1a288f0();
   input += synapse0x1a28930();
   input += synapse0x1a28970();
   input += synapse0x1a289b0();
   input += synapse0x1a289f0();
   input += synapse0x1a28a30();
   input += synapse0x1a28a70();
   input += synapse0x1a28ab0();
   input += synapse0x1a28af0();
   input += synapse0x1a28b30();
   input += synapse0x1a28b70();
   input += synapse0x1a28600();
   input += synapse0x1a28640();
   input += synapse0x1a28cc0();
   input += synapse0x1a28d00();
   input += synapse0x1a28d40();
   input += synapse0x1a28d80();
   input += synapse0x1a28dc0();
   input += synapse0x1a28e00();
   input += synapse0x1a28e40();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a28470() {
   double input = input0x1a28470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a28e80() {
   double input = -0.0439815;
   input += synapse0x1a291c0();
   input += synapse0x1a29200();
   input += synapse0x1a29240();
   input += synapse0x1a29280();
   input += synapse0x1a292c0();
   input += synapse0x1a29300();
   input += synapse0x1a29340();
   input += synapse0x1a29380();
   input += synapse0x1a293c0();
   input += synapse0x1a29400();
   input += synapse0x1a29440();
   input += synapse0x1a29480();
   input += synapse0x1a294c0();
   input += synapse0x1a29500();
   input += synapse0x1a29540();
   input += synapse0x1a29580();
   input += synapse0x1a29010();
   input += synapse0x1a29050();
   input += synapse0x1a296d0();
   input += synapse0x1a29710();
   input += synapse0x1a29750();
   input += synapse0x1a29790();
   input += synapse0x1a297d0();
   input += synapse0x1a29810();
   input += synapse0x1a29850();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a28e80() {
   double input = input0x1a28e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_5000ep_weight::input0x1a29890() {
   double input = 0.595085;
   input += synapse0x1a29ab0();
   input += synapse0x1a29af0();
   input += synapse0x1a29b30();
   input += synapse0x1a29b70();
   input += synapse0x1a29bb0();
   input += synapse0x1a29bf0();
   input += synapse0x1a29c30();
   input += synapse0x1a29c70();
   input += synapse0x1a29cb0();
   input += synapse0x1a29cf0();
   input += synapse0x1a29d30();
   input += synapse0x1a29d70();
   input += synapse0x1a29db0();
   input += synapse0x1a29df0();
   input += synapse0x1a29e30();
   input += synapse0x1a29e70();
   input += synapse0x1a0ee80();
   input += synapse0x1a0eec0();
   input += synapse0x1a29fc0();
   input += synapse0x1a2a000();
   input += synapse0x1a2a040();
   input += synapse0x1a2a080();
   input += synapse0x1a2a0c0();
   input += synapse0x1a2a100();
   input += synapse0x1a2a140();
   return input;
}

double nnFunc_25_25hi_5000ep_weight::neuron0x1a29890() {
   double input = input0x1a29890();
   return (input * 43.5975)+176.83;
}

double nnFunc_25_25hi_5000ep_weight::synapse0x191afb0() {
   return (neuron0x1a0de40()*-0.98216);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x19fd2b0() {
   return (neuron0x1a0e180()*0.00918191);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f260() {
   return (neuron0x1a0e4c0()*-0.237545);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f2a0() {
   return (neuron0x1a0e800()*-0.906631);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f2e0() {
   return (neuron0x1a0eb40()*-1.05134);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f660() {
   return (neuron0x1a0de40()*0.938193);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f6a0() {
   return (neuron0x1a0e180()*0.0119007);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f6e0() {
   return (neuron0x1a0e4c0()*0.142194);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f720() {
   return (neuron0x1a0e800()*8.21111);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f760() {
   return (neuron0x1a0eb40()*-7.49191);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fae0() {
   return (neuron0x1a0de40()*-9.39178);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fb20() {
   return (neuron0x1a0e180()*-0.0748817);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fb60() {
   return (neuron0x1a0e4c0()*-3.85145);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fba0() {
   return (neuron0x1a0e800()*-8.32968);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fbe0() {
   return (neuron0x1a0eb40()*-5.39133);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ff60() {
   return (neuron0x1a0de40()*0.684553);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ffa0() {
   return (neuron0x1a0e180()*0.0163712);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x190d1a0() {
   return (neuron0x1a0e4c0()*0.113202);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x190d1e0() {
   return (neuron0x1a0e800()*4.21686);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a100f0() {
   return (neuron0x1a0eb40()*-2.50141);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10470() {
   return (neuron0x1a0de40()*2.86442);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a104b0() {
   return (neuron0x1a0e180()*-0.0247346);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a104f0() {
   return (neuron0x1a0e4c0()*1.26781);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10530() {
   return (neuron0x1a0e800()*-18.3338);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10570() {
   return (neuron0x1a0eb40()*11.2341);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a108f0() {
   return (neuron0x1a0de40()*-0.500524);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10930() {
   return (neuron0x1a0e180()*0.839603);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10970() {
   return (neuron0x1a0e4c0()*1.66686);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a109b0() {
   return (neuron0x1a0e800()*1.26307);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a109f0() {
   return (neuron0x1a0eb40()*1.96225);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10d70() {
   return (neuron0x1a0de40()*-0.946695);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10db0() {
   return (neuron0x1a0e180()*-0.0629095);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10df0() {
   return (neuron0x1a0e4c0()*-0.808676);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ffe0() {
   return (neuron0x1a0e800()*-4.64735);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10020() {
   return (neuron0x1a0eb40()*0.632441);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a112f0() {
   return (neuron0x1a0de40()*-0.691037);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11330() {
   return (neuron0x1a0e180()*0.00664218);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11370() {
   return (neuron0x1a0e4c0()*-0.994715);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a113b0() {
   return (neuron0x1a0e800()*13.319);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a113f0() {
   return (neuron0x1a0eb40()*-3.91068);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11770() {
   return (neuron0x1a0de40()*-4.53018);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a117b0() {
   return (neuron0x1a0e180()*1.2636);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a117f0() {
   return (neuron0x1a0e4c0()*3.12915);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11830() {
   return (neuron0x1a0e800()*6.35898);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11870() {
   return (neuron0x1a0eb40()*0.953904);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11bf0() {
   return (neuron0x1a0de40()*1.00876);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11c30() {
   return (neuron0x1a0e180()*-0.0997446);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11c70() {
   return (neuron0x1a0e4c0()*0.154626);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11cb0() {
   return (neuron0x1a0e800()*-1.36772);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11cf0() {
   return (neuron0x1a0eb40()*-0.687043);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12070() {
   return (neuron0x1a0de40()*-2.98988);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a120b0() {
   return (neuron0x1a0e180()*0.0160115);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a120f0() {
   return (neuron0x1a0e4c0()*-1.6056);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12130() {
   return (neuron0x1a0e800()*-7.61737);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12170() {
   return (neuron0x1a0eb40()*-0.121758);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x190cff0() {
   return (neuron0x1a0de40()*0.820442);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x190d030() {
   return (neuron0x1a0e180()*-0.673695);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12600() {
   return (neuron0x1a0e4c0()*0.0886999);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12640() {
   return (neuron0x1a0e800()*-1.62784);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12680() {
   return (neuron0x1a0eb40()*-0.405845);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12a00() {
   return (neuron0x1a0de40()*0.053546);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12a40() {
   return (neuron0x1a0e180()*-0.0120825);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12a80() {
   return (neuron0x1a0e4c0()*-0.0750979);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12ac0() {
   return (neuron0x1a0e800()*-15.002);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12b00() {
   return (neuron0x1a0eb40()*5.35676);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x190d7c0() {
   return (neuron0x1a0de40()*-2.10145);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10fc0() {
   return (neuron0x1a0e180()*0.026688);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11000() {
   return (neuron0x1a0e4c0()*-0.833276);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12f50() {
   return (neuron0x1a0e800()*-2.33791);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12f90() {
   return (neuron0x1a0eb40()*0.536929);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13310() {
   return (neuron0x1a0de40()*-5.81944);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13350() {
   return (neuron0x1a0e180()*-0.0238189);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13390() {
   return (neuron0x1a0e4c0()*-2.7713);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a133d0() {
   return (neuron0x1a0e800()*-6.84672);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13410() {
   return (neuron0x1a0eb40()*0.178022);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13790() {
   return (neuron0x1a0de40()*-0.886185);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0e060() {
   return (neuron0x1a0e180()*-0.00126891);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0e0a0() {
   return (neuron0x1a0e4c0()*-0.199733);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0e3a0() {
   return (neuron0x1a0e800()*-0.979266);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0e3e0() {
   return (neuron0x1a0eb40()*1.15539);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13eb0() {
   return (neuron0x1a0de40()*4.47912);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13ef0() {
   return (neuron0x1a0e180()*-0.00185085);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13f30() {
   return (neuron0x1a0e4c0()*2.46754);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13f70() {
   return (neuron0x1a0e800()*0.202709);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13fb0() {
   return (neuron0x1a0eb40()*4.60619);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14330() {
   return (neuron0x1a0de40()*-1.15112);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14370() {
   return (neuron0x1a0e180()*0.217017);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a143b0() {
   return (neuron0x1a0e4c0()*0.806691);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a143f0() {
   return (neuron0x1a0e800()*3.53507);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14430() {
   return (neuron0x1a0eb40()*-0.362953);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a147b0() {
   return (neuron0x1a0de40()*-0.00322865);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a147f0() {
   return (neuron0x1a0e180()*0.00246987);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14830() {
   return (neuron0x1a0e4c0()*0.0141093);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14870() {
   return (neuron0x1a0e800()*3.31836);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a148b0() {
   return (neuron0x1a0eb40()*-2.39053);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14c30() {
   return (neuron0x1a0de40()*-2.99337);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14c70() {
   return (neuron0x1a0e180()*0.0454079);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14cb0() {
   return (neuron0x1a0e4c0()*-1.5512);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14cf0() {
   return (neuron0x1a0e800()*-0.69121);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14d30() {
   return (neuron0x1a0eb40()*-1.56526);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a150b0() {
   return (neuron0x1a0de40()*-0.364514);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a150f0() {
   return (neuron0x1a0e180()*0.814678);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15130() {
   return (neuron0x1a0e4c0()*1.89913);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15170() {
   return (neuron0x1a0e800()*6.63333);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a151b0() {
   return (neuron0x1a0eb40()*0.33672);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15530() {
   return (neuron0x1a0de40()*0.0186994);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15570() {
   return (neuron0x1a0e180()*0.00597324);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a155b0() {
   return (neuron0x1a0e4c0()*0.448845);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a155f0() {
   return (neuron0x1a0e800()*23.9553);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15630() {
   return (neuron0x1a0eb40()*-16.7773);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a159b0() {
   return (neuron0x1a0de40()*-3.71259);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a159f0() {
   return (neuron0x1a0e180()*0.557087);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15a30() {
   return (neuron0x1a0e4c0()*0.798208);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15a70() {
   return (neuron0x1a0e800()*0.530412);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15ab0() {
   return (neuron0x1a0eb40()*0.802716);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15e30() {
   return (neuron0x1a0de40()*0.288214);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15e70() {
   return (neuron0x1a0e180()*0.416962);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15eb0() {
   return (neuron0x1a0e4c0()*2.68423);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15ef0() {
   return (neuron0x1a0e800()*5.89318);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15f30() {
   return (neuron0x1a0eb40()*0.516987);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a162b0() {
   return (neuron0x1a0de40()*-8.91539);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a162f0() {
   return (neuron0x1a0e180()*-0.222251);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a16330() {
   return (neuron0x1a0e4c0()*-3.07931);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a16370() {
   return (neuron0x1a0e800()*-13.6631);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a163b0() {
   return (neuron0x1a0eb40()*-5.80422);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fed0() {
   return (neuron0x1a0efb0()*-0.256798);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ff10() {
   return (neuron0x1a0f320()*-1.33653);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a103e0() {
   return (neuron0x1a0f7a0()*-0.256709);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10420() {
   return (neuron0x1a0fc20()*-0.087754);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10860() {
   return (neuron0x1a10130()*-1.27055);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a108a0() {
   return (neuron0x1a105b0()*0.161772);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10ce0() {
   return (neuron0x1a10a30()*-1.55423);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10d20() {
   return (neuron0x1a11040()*2.3567);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11260() {
   return (neuron0x1a11430()*0.144573);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a112a0() {
   return (neuron0x1a118b0()*-0.144333);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a116e0() {
   return (neuron0x1a11d30()*-0.315662);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11720() {
   return (neuron0x1a121b0()*0.362244);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11b60() {
   return (neuron0x1a126c0()*-0.742026);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11ba0() {
   return (neuron0x1a10e30()*-0.103483);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11fe0() {
   return (neuron0x1a12fd0()*0.429123);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12020() {
   return (neuron0x1a13450()*-0.216215);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12460() {
   return (neuron0x1a13d20()*-0.306724);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a124a0() {
   return (neuron0x1a13ff0()*0.509025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12970() {
   return (neuron0x1a14470()*-6.05146);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a129b0() {
   return (neuron0x1a148f0()*0.221762);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13280() {
   return (neuron0x1a14d70()*-0.0909792);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a132c0() {
   return (neuron0x1a151f0()*1.45166);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13700() {
   return (neuron0x1a15670()*0.0301221);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13740() {
   return (neuron0x1a15af0()*-0.941883);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ed60() {
   return (neuron0x1a15f70()*0.668962);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12de0() {
   return (neuron0x1a0efb0()*-0.463174);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12e20() {
   return (neuron0x1a0f320()*0.353218);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12e60() {
   return (neuron0x1a0f7a0()*-0.742132);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12ea0() {
   return (neuron0x1a0fc20()*-1.28923);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12ee0() {
   return (neuron0x1a10130()*-1.29855);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0eda0() {
   return (neuron0x1a105b0()*-1.10066);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15020() {
   return (neuron0x1a10a30()*0.347109);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15060() {
   return (neuron0x1a11040()*-1.26089);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a154a0() {
   return (neuron0x1a11430()*-0.304529);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a154e0() {
   return (neuron0x1a118b0()*0.233905);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15920() {
   return (neuron0x1a11d30()*-0.718464);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15960() {
   return (neuron0x1a121b0()*0.503868);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15da0() {
   return (neuron0x1a126c0()*0.783891);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15de0() {
   return (neuron0x1a10e30()*-1.2756);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a16220() {
   return (neuron0x1a12fd0()*0.290943);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a16260() {
   return (neuron0x1a13450()*-0.972658);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f1d0() {
   return (neuron0x1a13d20()*-1.28313);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f210() {
   return (neuron0x1a13ff0()*-1.16753);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a142a0() {
   return (neuron0x1a14470()*1.50783);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a142e0() {
   return (neuron0x1a148f0()*-0.661566);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x191b080() {
   return (neuron0x1a14d70()*-0.0166331);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x191b0c0() {
   return (neuron0x1a151f0()*-1.81121);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18930() {
   return (neuron0x1a15670()*-0.0679782);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18970() {
   return (neuron0x1a15af0()*0.556906);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a189b0() {
   return (neuron0x1a15f70()*0.165096);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a124f0() {
   return (neuron0x1a0efb0()*0.756645);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12530() {
   return (neuron0x1a0f320()*0.0907259);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12570() {
   return (neuron0x1a0f7a0()*0.647149);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a125b0() {
   return (neuron0x1a0fc20()*-2.41556);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18f40() {
   return (neuron0x1a10130()*1.7142);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18f80() {
   return (neuron0x1a105b0()*-0.09393);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18fc0() {
   return (neuron0x1a10a30()*0.298601);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19000() {
   return (neuron0x1a11040()*0.806144);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19040() {
   return (neuron0x1a11430()*0.0459578);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19080() {
   return (neuron0x1a118b0()*-0.206297);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a190c0() {
   return (neuron0x1a11d30()*0.526344);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19100() {
   return (neuron0x1a121b0()*-0.310788);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19140() {
   return (neuron0x1a126c0()*3.10083);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19180() {
   return (neuron0x1a10e30()*-0.701697);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a191c0() {
   return (neuron0x1a12fd0()*0.206994);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19200() {
   return (neuron0x1a13450()*-0.568976);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18b80() {
   return (neuron0x1a13d20()*-0.397791);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18bc0() {
   return (neuron0x1a13ff0()*-0.348841);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19350() {
   return (neuron0x1a14470()*-3.81747);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19390() {
   return (neuron0x1a148f0()*0.0890537);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a193d0() {
   return (neuron0x1a14d70()*0.442738);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19410() {
   return (neuron0x1a151f0()*0.289367);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19450() {
   return (neuron0x1a15670()*-0.0638602);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19490() {
   return (neuron0x1a15af0()*0.542833);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a194d0() {
   return (neuron0x1a15f70()*-0.259069);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19850() {
   return (neuron0x1a0efb0()*-0.232205);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19890() {
   return (neuron0x1a0f320()*0.471963);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a198d0() {
   return (neuron0x1a0f7a0()*-0.286932);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19910() {
   return (neuron0x1a0fc20()*-0.0157094);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19950() {
   return (neuron0x1a10130()*-0.120698);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19990() {
   return (neuron0x1a105b0()*-0.76638);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a199d0() {
   return (neuron0x1a10a30()*-0.113575);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19a10() {
   return (neuron0x1a11040()*0.348389);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19a50() {
   return (neuron0x1a11430()*-0.625531);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19a90() {
   return (neuron0x1a118b0()*-0.239973);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19ad0() {
   return (neuron0x1a11d30()*-0.73394);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19b10() {
   return (neuron0x1a121b0()*-0.343129);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19b50() {
   return (neuron0x1a126c0()*-0.985044);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19b90() {
   return (neuron0x1a10e30()*0.281647);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19bd0() {
   return (neuron0x1a12fd0()*-0.518094);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19c10() {
   return (neuron0x1a13450()*-0.477659);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a196a0() {
   return (neuron0x1a13d20()*-0.500728);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a196e0() {
   return (neuron0x1a13ff0()*0.197138);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19d60() {
   return (neuron0x1a14470()*-1.06875);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19da0() {
   return (neuron0x1a148f0()*-0.605648);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19de0() {
   return (neuron0x1a14d70()*-0.753465);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19e20() {
   return (neuron0x1a151f0()*0.621088);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19e60() {
   return (neuron0x1a15670()*-0.594999);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19ea0() {
   return (neuron0x1a15af0()*-0.603226);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a19ee0() {
   return (neuron0x1a15f70()*-0.609791);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a260() {
   return (neuron0x1a0efb0()*-1.36175);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a2a0() {
   return (neuron0x1a0f320()*-2.22696);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a2e0() {
   return (neuron0x1a0f7a0()*-2.22629);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a320() {
   return (neuron0x1a0fc20()*-0.837362);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a360() {
   return (neuron0x1a10130()*-8.46165);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a3a0() {
   return (neuron0x1a105b0()*-2.42244);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a3e0() {
   return (neuron0x1a10a30()*-2.67316);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a420() {
   return (neuron0x1a11040()*4.3015);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a460() {
   return (neuron0x1a11430()*-0.403997);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a4a0() {
   return (neuron0x1a118b0()*-0.0545091);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a4e0() {
   return (neuron0x1a11d30()*-2.1618);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a520() {
   return (neuron0x1a121b0()*0.705674);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a560() {
   return (neuron0x1a126c0()*4.27001);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a5a0() {
   return (neuron0x1a10e30()*-2.46566);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a5e0() {
   return (neuron0x1a12fd0()*0.617689);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a620() {
   return (neuron0x1a13450()*-2.11656);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a0b0() {
   return (neuron0x1a13d20()*-4.65872);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a0f0() {
   return (neuron0x1a13ff0()*-0.324656);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a770() {
   return (neuron0x1a14470()*11.8847);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a7b0() {
   return (neuron0x1a148f0()*-0.0810405);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a7f0() {
   return (neuron0x1a14d70()*1.47862);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a830() {
   return (neuron0x1a151f0()*3.44661);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a870() {
   return (neuron0x1a15670()*-0.774554);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a8b0() {
   return (neuron0x1a15af0()*2.32955);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1a8f0() {
   return (neuron0x1a15f70()*2.7521);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ac70() {
   return (neuron0x1a0efb0()*0.0841653);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1acb0() {
   return (neuron0x1a0f320()*1.56023);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1acf0() {
   return (neuron0x1a0f7a0()*-0.816031);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ad30() {
   return (neuron0x1a0fc20()*-0.488507);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ad70() {
   return (neuron0x1a10130()*-1.43789);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1adb0() {
   return (neuron0x1a105b0()*0.172136);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1adf0() {
   return (neuron0x1a10a30()*-0.281135);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18010() {
   return (neuron0x1a11040()*-0.893264);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18050() {
   return (neuron0x1a11430()*-0.38133);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18090() {
   return (neuron0x1a118b0()*-0.000258076);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a180d0() {
   return (neuron0x1a11d30()*-1.68025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18110() {
   return (neuron0x1a121b0()*-0.0793784);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18150() {
   return (neuron0x1a126c0()*-0.352881);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18190() {
   return (neuron0x1a10e30()*-0.295806);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a181d0() {
   return (neuron0x1a12fd0()*0.59665);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18210() {
   return (neuron0x1a13450()*0.32024);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1aac0() {
   return (neuron0x1a13d20()*0.55749);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ab00() {
   return (neuron0x1a13ff0()*-0.80761);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18360() {
   return (neuron0x1a14470()*0.0801038);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a183a0() {
   return (neuron0x1a148f0()*-0.177702);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a183e0() {
   return (neuron0x1a14d70()*0.210414);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18420() {
   return (neuron0x1a151f0()*0.584293);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a18460() {
   return (neuron0x1a15670()*-0.785857);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a184a0() {
   return (neuron0x1a15af0()*0.362197);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a184e0() {
   return (neuron0x1a15f70()*1.13525);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a187d0() {
   return (neuron0x1a0efb0()*0.238478);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bed0() {
   return (neuron0x1a0f320()*-0.336889);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bf10() {
   return (neuron0x1a0f7a0()*-0.292887);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bf50() {
   return (neuron0x1a0fc20()*0.100088);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bf90() {
   return (neuron0x1a10130()*0.125603);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bfd0() {
   return (neuron0x1a105b0()*-0.0952706);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c010() {
   return (neuron0x1a10a30()*-0.249854);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c050() {
   return (neuron0x1a11040()*-0.528441);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c090() {
   return (neuron0x1a11430()*0.0833852);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c0d0() {
   return (neuron0x1a118b0()*0.132074);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c110() {
   return (neuron0x1a11d30()*0.148128);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c150() {
   return (neuron0x1a121b0()*0.411325);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c190() {
   return (neuron0x1a126c0()*-1.11096);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c1d0() {
   return (neuron0x1a10e30()*0.815344);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c210() {
   return (neuron0x1a12fd0()*0.759025);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c250() {
   return (neuron0x1a13450()*0.536656);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a186b0() {
   return (neuron0x1a13d20()*0.400618);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a186f0() {
   return (neuron0x1a13ff0()*0.508565);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c3a0() {
   return (neuron0x1a14470()*-0.457959);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c3e0() {
   return (neuron0x1a148f0()*0.757819);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c420() {
   return (neuron0x1a14d70()*0.333559);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c460() {
   return (neuron0x1a151f0()*0.0718128);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c4a0() {
   return (neuron0x1a15670()*-0.109376);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c4e0() {
   return (neuron0x1a15af0()*0.348807);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c520() {
   return (neuron0x1a15f70()*-0.32324);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c8a0() {
   return (neuron0x1a0efb0()*-0.52678);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c8e0() {
   return (neuron0x1a0f320()*-2.04675);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c920() {
   return (neuron0x1a0f7a0()*1.70165);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c960() {
   return (neuron0x1a0fc20()*0.836587);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c9a0() {
   return (neuron0x1a10130()*0.0325628);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c9e0() {
   return (neuron0x1a105b0()*-1.31317);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ca20() {
   return (neuron0x1a10a30()*0.448657);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ca60() {
   return (neuron0x1a11040()*1.01596);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1caa0() {
   return (neuron0x1a11430()*-0.805364);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cae0() {
   return (neuron0x1a118b0()*-1.22599);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cb20() {
   return (neuron0x1a11d30()*0.319747);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cb60() {
   return (neuron0x1a121b0()*0.209091);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cba0() {
   return (neuron0x1a126c0()*-1.29248);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cbe0() {
   return (neuron0x1a10e30()*0.718779);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cc20() {
   return (neuron0x1a12fd0()*-1.06778);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cc60() {
   return (neuron0x1a13450()*-0.411649);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c6f0() {
   return (neuron0x1a13d20()*-0.320843);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1c730() {
   return (neuron0x1a13ff0()*0.7998);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cdb0() {
   return (neuron0x1a14470()*-0.70513);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cdf0() {
   return (neuron0x1a148f0()*0.144086);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ce30() {
   return (neuron0x1a14d70()*-2.1865);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ce70() {
   return (neuron0x1a151f0()*0.936427);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ceb0() {
   return (neuron0x1a15670()*-0.734759);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cef0() {
   return (neuron0x1a15af0()*-2.4555);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1cf30() {
   return (neuron0x1a15f70()*-0.862508);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d2b0() {
   return (neuron0x1a0efb0()*-0.255693);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d2f0() {
   return (neuron0x1a0f320()*-0.74297);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d330() {
   return (neuron0x1a0f7a0()*0.643891);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d370() {
   return (neuron0x1a0fc20()*-0.756609);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d3b0() {
   return (neuron0x1a10130()*-0.0907091);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d3f0() {
   return (neuron0x1a105b0()*-0.734259);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d430() {
   return (neuron0x1a10a30()*0.424622);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d470() {
   return (neuron0x1a11040()*0.27424);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d4b0() {
   return (neuron0x1a11430()*-0.41061);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d4f0() {
   return (neuron0x1a118b0()*-0.14494);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d530() {
   return (neuron0x1a11d30()*0.13416);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d570() {
   return (neuron0x1a121b0()*-0.279644);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d5b0() {
   return (neuron0x1a126c0()*-0.832713);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d5f0() {
   return (neuron0x1a10e30()*0.299133);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d630() {
   return (neuron0x1a12fd0()*0.0123446);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d670() {
   return (neuron0x1a13450()*-0.939939);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d100() {
   return (neuron0x1a13d20()*-0.325668);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d140() {
   return (neuron0x1a13ff0()*0.0933459);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d7c0() {
   return (neuron0x1a14470()*-0.89324);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d800() {
   return (neuron0x1a148f0()*-0.449818);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d840() {
   return (neuron0x1a14d70()*-0.861866);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d880() {
   return (neuron0x1a151f0()*-0.306366);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d8c0() {
   return (neuron0x1a15670()*-0.844132);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d900() {
   return (neuron0x1a15af0()*-0.988585);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1d940() {
   return (neuron0x1a15f70()*-0.753875);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1dcc0() {
   return (neuron0x1a0efb0()*-0.564949);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1dd00() {
   return (neuron0x1a0f320()*0.61105);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1dd40() {
   return (neuron0x1a0f7a0()*-0.368819);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1dd80() {
   return (neuron0x1a0fc20()*-0.603469);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ddc0() {
   return (neuron0x1a10130()*0.000384338);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1de00() {
   return (neuron0x1a105b0()*-0.566028);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1de40() {
   return (neuron0x1a10a30()*-0.387204);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1de80() {
   return (neuron0x1a11040()*-0.763695);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1dec0() {
   return (neuron0x1a11430()*-0.192548);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1df00() {
   return (neuron0x1a118b0()*0.433581);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1df40() {
   return (neuron0x1a11d30()*-0.826703);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1df80() {
   return (neuron0x1a121b0()*0.0290161);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1dfc0() {
   return (neuron0x1a126c0()*0.193882);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e000() {
   return (neuron0x1a10e30()*-0.0723479);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e040() {
   return (neuron0x1a12fd0()*0.544451);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e080() {
   return (neuron0x1a13450()*-1.02225);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1db10() {
   return (neuron0x1a13d20()*-0.953296);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1db50() {
   return (neuron0x1a13ff0()*-0.601156);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e1d0() {
   return (neuron0x1a14470()*-0.0242873);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e210() {
   return (neuron0x1a148f0()*-0.115597);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e250() {
   return (neuron0x1a14d70()*0.12746);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e290() {
   return (neuron0x1a151f0()*-0.349432);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e2d0() {
   return (neuron0x1a15670()*-0.789063);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e310() {
   return (neuron0x1a15af0()*0.97329);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e350() {
   return (neuron0x1a15f70()*1.19567);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e6d0() {
   return (neuron0x1a0efb0()*-0.663925);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e710() {
   return (neuron0x1a0f320()*-2.38566);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e750() {
   return (neuron0x1a0f7a0()*0.523244);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e790() {
   return (neuron0x1a0fc20()*0.28947);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e7d0() {
   return (neuron0x1a10130()*0.553043);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e810() {
   return (neuron0x1a105b0()*-0.616453);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e850() {
   return (neuron0x1a10a30()*0.225258);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e890() {
   return (neuron0x1a11040()*-0.636831);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e8d0() {
   return (neuron0x1a11430()*-0.552852);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e910() {
   return (neuron0x1a118b0()*0.225352);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e950() {
   return (neuron0x1a11d30()*0.891606);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e990() {
   return (neuron0x1a121b0()*0.50087);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e9d0() {
   return (neuron0x1a126c0()*-1.65391);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ea10() {
   return (neuron0x1a10e30()*0.364075);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ea50() {
   return (neuron0x1a12fd0()*0.023586);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ea90() {
   return (neuron0x1a13450()*0.148173);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e520() {
   return (neuron0x1a13d20()*-0.116842);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1e560() {
   return (neuron0x1a13ff0()*0.246143);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ebe0() {
   return (neuron0x1a14470()*-1.01612);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ec20() {
   return (neuron0x1a148f0()*-0.330032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ec60() {
   return (neuron0x1a14d70()*-2.02162);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1eca0() {
   return (neuron0x1a151f0()*0.225649);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ece0() {
   return (neuron0x1a15670()*0.600737);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ed20() {
   return (neuron0x1a15af0()*-2.40979);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ed60() {
   return (neuron0x1a15f70()*-1.47631);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f0e0() {
   return (neuron0x1a0efb0()*-0.756234);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f120() {
   return (neuron0x1a0f320()*-0.131032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f160() {
   return (neuron0x1a0f7a0()*-0.689033);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f1a0() {
   return (neuron0x1a0fc20()*-1.10182);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f1e0() {
   return (neuron0x1a10130()*-0.976928);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f220() {
   return (neuron0x1a105b0()*-0.607712);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f260() {
   return (neuron0x1a10a30()*-0.155421);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f2a0() {
   return (neuron0x1a11040()*-0.306104);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f2e0() {
   return (neuron0x1a11430()*-0.682169);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f320() {
   return (neuron0x1a118b0()*0.771158);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f360() {
   return (neuron0x1a11d30()*-0.343575);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f3a0() {
   return (neuron0x1a121b0()*-0.100534);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f3e0() {
   return (neuron0x1a126c0()*0.287539);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f420() {
   return (neuron0x1a10e30()*-0.561671);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f460() {
   return (neuron0x1a12fd0()*-0.229731);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f4a0() {
   return (neuron0x1a13450()*-0.346426);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ef30() {
   return (neuron0x1a13d20()*-0.51912);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1ef70() {
   return (neuron0x1a13ff0()*-1.26191);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f5f0() {
   return (neuron0x1a14470()*0.784295);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f630() {
   return (neuron0x1a148f0()*-0.327581);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f670() {
   return (neuron0x1a14d70()*-0.337944);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f6b0() {
   return (neuron0x1a151f0()*-0.738444);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f6f0() {
   return (neuron0x1a15670()*-0.397774);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f730() {
   return (neuron0x1a15af0()*0.374502);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f770() {
   return (neuron0x1a15f70()*-0.57202);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1faf0() {
   return (neuron0x1a0efb0()*-0.449335);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fb30() {
   return (neuron0x1a0f320()*0.799134);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fb70() {
   return (neuron0x1a0f7a0()*-0.619456);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fbb0() {
   return (neuron0x1a0fc20()*-1.24023);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fbf0() {
   return (neuron0x1a10130()*-1.69949);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fc30() {
   return (neuron0x1a105b0()*-0.481461);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fc70() {
   return (neuron0x1a10a30()*-0.232314);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fcb0() {
   return (neuron0x1a11040()*-0.0409058);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fcf0() {
   return (neuron0x1a11430()*-0.50638);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fd30() {
   return (neuron0x1a118b0()*0.128714);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fd70() {
   return (neuron0x1a11d30()*-0.157576);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fdb0() {
   return (neuron0x1a121b0()*0.012541);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fdf0() {
   return (neuron0x1a126c0()*-0.397438);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fe30() {
   return (neuron0x1a10e30()*-1.21579);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1fe70() {
   return (neuron0x1a12fd0()*0.487788);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1feb0() {
   return (neuron0x1a13450()*-1.02168);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f940() {
   return (neuron0x1a13d20()*-1.24811);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1f980() {
   return (neuron0x1a13ff0()*-1.08001);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20000() {
   return (neuron0x1a14470()*0.92801);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20040() {
   return (neuron0x1a148f0()*-0.912088);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20080() {
   return (neuron0x1a14d70()*0.452837);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a200c0() {
   return (neuron0x1a151f0()*-0.476207);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20100() {
   return (neuron0x1a15670()*-0.45122);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20140() {
   return (neuron0x1a15af0()*0.660753);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20180() {
   return (neuron0x1a15f70()*-0.277959);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20500() {
   return (neuron0x1a0efb0()*-0.64754);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20540() {
   return (neuron0x1a0f320()*-2.32045);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20580() {
   return (neuron0x1a0f7a0()*2.08852);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a205c0() {
   return (neuron0x1a0fc20()*0.223464);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20600() {
   return (neuron0x1a10130()*0.598227);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20640() {
   return (neuron0x1a105b0()*-1.77307);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20680() {
   return (neuron0x1a10a30()*0.62082);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a206c0() {
   return (neuron0x1a11040()*0.846526);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20700() {
   return (neuron0x1a11430()*-0.789929);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20740() {
   return (neuron0x1a118b0()*-1.0469);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20780() {
   return (neuron0x1a11d30()*0.31883);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a207c0() {
   return (neuron0x1a121b0()*0.468132);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20800() {
   return (neuron0x1a126c0()*-1.38317);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20840() {
   return (neuron0x1a10e30()*0.538699);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20880() {
   return (neuron0x1a12fd0()*-0.485027);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a208c0() {
   return (neuron0x1a13450()*-0.245782);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20350() {
   return (neuron0x1a13d20()*-0.088655);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20390() {
   return (neuron0x1a13ff0()*0.293191);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20a10() {
   return (neuron0x1a14470()*-1.01288);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20a50() {
   return (neuron0x1a148f0()*-0.0637722);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20a90() {
   return (neuron0x1a14d70()*-1.46033);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20ad0() {
   return (neuron0x1a151f0()*1.41279);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20b10() {
   return (neuron0x1a15670()*-0.232661);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20b50() {
   return (neuron0x1a15af0()*-2.81861);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20b90() {
   return (neuron0x1a15f70()*-1.23391);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20f10() {
   return (neuron0x1a0efb0()*1.08353);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20f50() {
   return (neuron0x1a0f320()*1.11232);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20f90() {
   return (neuron0x1a0f7a0()*0.359487);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20fd0() {
   return (neuron0x1a0fc20()*0.386741);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21010() {
   return (neuron0x1a10130()*0.62421);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21050() {
   return (neuron0x1a105b0()*0.490595);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21090() {
   return (neuron0x1a10a30()*0.470227);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a210d0() {
   return (neuron0x1a11040()*0.970762);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21110() {
   return (neuron0x1a11430()*0.382713);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21150() {
   return (neuron0x1a118b0()*-0.462581);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21190() {
   return (neuron0x1a11d30()*-0.394824);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a211d0() {
   return (neuron0x1a121b0()*0.182795);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21210() {
   return (neuron0x1a126c0()*0.792816);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21250() {
   return (neuron0x1a10e30()*0.654152);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21290() {
   return (neuron0x1a12fd0()*-0.253978);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a212d0() {
   return (neuron0x1a13450()*-0.0629692);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20d60() {
   return (neuron0x1a13d20()*0.110726);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a20da0() {
   return (neuron0x1a13ff0()*-0.100323);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21420() {
   return (neuron0x1a14470()*-0.481743);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21460() {
   return (neuron0x1a148f0()*0.483078);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a214a0() {
   return (neuron0x1a14d70()*0.701545);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a214e0() {
   return (neuron0x1a151f0()*-0.0566028);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21520() {
   return (neuron0x1a15670()*0.10037);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21560() {
   return (neuron0x1a15af0()*0.968505);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a215a0() {
   return (neuron0x1a15f70()*1.20348);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21920() {
   return (neuron0x1a0efb0()*-0.847778);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f140() {
   return (neuron0x1a0f320()*-0.0746549);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f180() {
   return (neuron0x1a0f7a0()*-1.41864);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f540() {
   return (neuron0x1a0fc20()*-1.61664);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f580() {
   return (neuron0x1a10130()*-6.06648);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0f9c0() {
   return (neuron0x1a105b0()*-0.030103);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fa00() {
   return (neuron0x1a10a30()*-2.32158);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fe40() {
   return (neuron0x1a11040()*3.02768);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0fe80() {
   return (neuron0x1a11430()*-0.446334);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10350() {
   return (neuron0x1a118b0()*0.149952);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10390() {
   return (neuron0x1a11d30()*-1.35563);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a107d0() {
   return (neuron0x1a121b0()*-0.428531);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10810() {
   return (neuron0x1a126c0()*-1.61167);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10c50() {
   return (neuron0x1a10e30()*-0.499743);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a10c90() {
   return (neuron0x1a12fd0()*0.34295);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a111d0() {
   return (neuron0x1a13450()*0.252422);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11210() {
   return (neuron0x1a13d20()*-1.43372);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11650() {
   return (neuron0x1a13ff0()*-0.503512);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11690() {
   return (neuron0x1a14470()*0.888973);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11ad0() {
   return (neuron0x1a148f0()*-1.74315);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11b10() {
   return (neuron0x1a14d70()*0.330055);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11f50() {
   return (neuron0x1a151f0()*1.15885);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a11f90() {
   return (neuron0x1a15670()*-0.183162);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a123d0() {
   return (neuron0x1a15af0()*0.81037);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12410() {
   return (neuron0x1a15f70()*1.66382);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bd90() {
   return (neuron0x1a0efb0()*-0.360555);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a1bdd0() {
   return (neuron0x1a0f320()*4.75276);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a13670() {
   return (neuron0x1a0f7a0()*0.637875);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a136b0() {
   return (neuron0x1a0fc20()*-1.39027);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a21770() {
   return (neuron0x1a10130()*6.95676);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a217b0() {
   return (neuron0x1a105b0()*0.21985);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ea20() {
   return (neuron0x1a10a30()*2.4743);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ea60() {
   return (neuron0x1a11040()*-4.67374);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14210() {
   return (neuron0x1a11430()*-0.587096);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14250() {
   return (neuron0x1a118b0()*0.323692);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14690() {
   return (neuron0x1a11d30()*0.62703);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a146d0() {
   return (neuron0x1a121b0()*0.062507);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14b10() {
   return (neuron0x1a126c0()*-1.44168);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14b50() {
   return (neuron0x1a10e30()*1.096);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14f90() {
   return (neuron0x1a12fd0()*-0.37792);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a14fd0() {
   return (neuron0x1a13450()*1.00896);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15410() {
   return (neuron0x1a13d20()*2.6036);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15450() {
   return (neuron0x1a13ff0()*-0.491493);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15890() {
   return (neuron0x1a14470()*4.44943);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a158d0() {
   return (neuron0x1a148f0()*0.497149);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15d10() {
   return (neuron0x1a14d70()*0.329224);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a15d50() {
   return (neuron0x1a151f0()*-4.06769);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a16190() {
   return (neuron0x1a15670()*-0.893372);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a161d0() {
   return (neuron0x1a15af0()*0.408343);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a128e0() {
   return (neuron0x1a15f70()*-1.2808);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a12920() {
   return (neuron0x1a0efb0()*0.902542);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24b90() {
   return (neuron0x1a0f320()*1.21063);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24bd0() {
   return (neuron0x1a0f7a0()*0.0866061);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24c10() {
   return (neuron0x1a0fc20()*1.22865);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24c50() {
   return (neuron0x1a10130()*-1.86994);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24c90() {
   return (neuron0x1a105b0()*0.446872);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24cd0() {
   return (neuron0x1a10a30()*-0.212144);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24d10() {
   return (neuron0x1a11040()*1.07732);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24d50() {
   return (neuron0x1a11430()*0.624069);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24d90() {
   return (neuron0x1a118b0()*-0.148222);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24dd0() {
   return (neuron0x1a11d30()*0.547871);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24e10() {
   return (neuron0x1a121b0()*-0.921659);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24e50() {
   return (neuron0x1a126c0()*-1.22354);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24e90() {
   return (neuron0x1a10e30()*0.296194);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24ed0() {
   return (neuron0x1a12fd0()*-0.72124);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24f10() {
   return (neuron0x1a13450()*0.0279832);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a249e0() {
   return (neuron0x1a13d20()*-0.115857);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a24a20() {
   return (neuron0x1a13ff0()*0.506211);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25060() {
   return (neuron0x1a14470()*-0.250684);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a250a0() {
   return (neuron0x1a148f0()*0.412937);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a250e0() {
   return (neuron0x1a14d70()*0.412384);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25120() {
   return (neuron0x1a151f0()*1.08952);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25160() {
   return (neuron0x1a15670()*-0.0909908);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a251a0() {
   return (neuron0x1a15af0()*0.535849);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a251e0() {
   return (neuron0x1a15f70()*-0.119811);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25560() {
   return (neuron0x1a0efb0()*2.51346);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a255a0() {
   return (neuron0x1a0f320()*0.838185);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a255e0() {
   return (neuron0x1a0f7a0()*-28.1505);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25620() {
   return (neuron0x1a0fc20()*3.65091);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25660() {
   return (neuron0x1a10130()*9.93849);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a256a0() {
   return (neuron0x1a105b0()*3.70467);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a256e0() {
   return (neuron0x1a10a30()*4.34063);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25720() {
   return (neuron0x1a11040()*-13.8211);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25760() {
   return (neuron0x1a11430()*2.98751);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a257a0() {
   return (neuron0x1a118b0()*1.10027);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a257e0() {
   return (neuron0x1a11d30()*6.90711);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25820() {
   return (neuron0x1a121b0()*1.17516);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25860() {
   return (neuron0x1a126c0()*15.5368);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a258a0() {
   return (neuron0x1a10e30()*-2.36565);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a258e0() {
   return (neuron0x1a12fd0()*-15.4296);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25920() {
   return (neuron0x1a13450()*2.4655);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a253b0() {
   return (neuron0x1a13d20()*6.98676);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a253f0() {
   return (neuron0x1a13ff0()*2.76807);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25a70() {
   return (neuron0x1a14470()*4.4877);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25ab0() {
   return (neuron0x1a148f0()*2.9453);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25af0() {
   return (neuron0x1a14d70()*2.89464);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25b30() {
   return (neuron0x1a151f0()*-30.3247);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25b70() {
   return (neuron0x1a15670()*2.93717);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25bb0() {
   return (neuron0x1a15af0()*3.48991);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25bf0() {
   return (neuron0x1a15f70()*8.00679);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25f70() {
   return (neuron0x1a0efb0()*0.0188656);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25fb0() {
   return (neuron0x1a0f320()*-0.831031);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25ff0() {
   return (neuron0x1a0f7a0()*0.517505);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26030() {
   return (neuron0x1a0fc20()*-2.07247);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26070() {
   return (neuron0x1a10130()*8.56997);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a260b0() {
   return (neuron0x1a105b0()*-0.0237035);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a260f0() {
   return (neuron0x1a10a30()*0.455092);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26130() {
   return (neuron0x1a11040()*2.74507);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26170() {
   return (neuron0x1a11430()*-0.384302);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a261b0() {
   return (neuron0x1a118b0()*-0.265884);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a261f0() {
   return (neuron0x1a11d30()*1.40591);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26230() {
   return (neuron0x1a121b0()*0.0400365);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26270() {
   return (neuron0x1a126c0()*-0.02255);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a262b0() {
   return (neuron0x1a10e30()*0.425201);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a262f0() {
   return (neuron0x1a12fd0()*0.371138);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26330() {
   return (neuron0x1a13450()*0.540836);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25dc0() {
   return (neuron0x1a13d20()*0.0271448);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a25e00() {
   return (neuron0x1a13ff0()*0.454032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26480() {
   return (neuron0x1a14470()*-1.36324);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a264c0() {
   return (neuron0x1a148f0()*3.05404);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26500() {
   return (neuron0x1a14d70()*-0.147039);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26540() {
   return (neuron0x1a151f0()*-0.859918);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26580() {
   return (neuron0x1a15670()*-0.360848);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a265c0() {
   return (neuron0x1a15af0()*-0.650238);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26600() {
   return (neuron0x1a15f70()*-1.2492);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26980() {
   return (neuron0x1a0efb0()*0.366343);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a269c0() {
   return (neuron0x1a0f320()*-1.43532);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26a00() {
   return (neuron0x1a0f7a0()*1.74015);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26a40() {
   return (neuron0x1a0fc20()*0.922083);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26a80() {
   return (neuron0x1a10130()*0.351678);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26ac0() {
   return (neuron0x1a105b0()*-1.24888);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26b00() {
   return (neuron0x1a10a30()*-0.622572);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26b40() {
   return (neuron0x1a11040()*0.678755);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26b80() {
   return (neuron0x1a11430()*-1.03862);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26bc0() {
   return (neuron0x1a118b0()*-0.841144);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26c00() {
   return (neuron0x1a11d30()*-0.113364);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26c40() {
   return (neuron0x1a121b0()*-0.776426);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26c80() {
   return (neuron0x1a126c0()*-1.60244);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26cc0() {
   return (neuron0x1a10e30()*0.423432);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26d00() {
   return (neuron0x1a12fd0()*-0.611272);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26d40() {
   return (neuron0x1a13450()*-0.150583);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a267d0() {
   return (neuron0x1a13d20()*-0.225728);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26810() {
   return (neuron0x1a13ff0()*0.299775);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26e90() {
   return (neuron0x1a14470()*-1.58275);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26ed0() {
   return (neuron0x1a148f0()*-0.336743);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26f10() {
   return (neuron0x1a14d70()*-2.0478);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26f50() {
   return (neuron0x1a151f0()*0.840244);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26f90() {
   return (neuron0x1a15670()*-0.615986);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a26fd0() {
   return (neuron0x1a15af0()*-1.67961);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27010() {
   return (neuron0x1a15f70()*-0.72798);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27390() {
   return (neuron0x1a0efb0()*-0.392638);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a273d0() {
   return (neuron0x1a0f320()*-1.2638);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27410() {
   return (neuron0x1a0f7a0()*-0.151574);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27450() {
   return (neuron0x1a0fc20()*-0.467086);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27490() {
   return (neuron0x1a10130()*-0.394477);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a274d0() {
   return (neuron0x1a105b0()*0.146689);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27510() {
   return (neuron0x1a10a30()*-0.926524);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27550() {
   return (neuron0x1a11040()*-0.267334);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27590() {
   return (neuron0x1a11430()*-0.76213);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a275d0() {
   return (neuron0x1a118b0()*0.406507);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27610() {
   return (neuron0x1a11d30()*-0.355603);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27650() {
   return (neuron0x1a121b0()*-0.716043);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27690() {
   return (neuron0x1a126c0()*-0.8728);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a276d0() {
   return (neuron0x1a10e30()*-0.153328);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27710() {
   return (neuron0x1a12fd0()*-0.207608);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27750() {
   return (neuron0x1a13450()*-0.0365636);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a271e0() {
   return (neuron0x1a13d20()*-0.124483);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27220() {
   return (neuron0x1a13ff0()*-0.450424);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a278a0() {
   return (neuron0x1a14470()*-1.06296);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a278e0() {
   return (neuron0x1a148f0()*-0.476269);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27920() {
   return (neuron0x1a14d70()*-0.996452);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27960() {
   return (neuron0x1a151f0()*-0.0433119);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a279a0() {
   return (neuron0x1a15670()*0.285598);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a279e0() {
   return (neuron0x1a15af0()*-1.14582);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27a20() {
   return (neuron0x1a15f70()*-0.791998);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27da0() {
   return (neuron0x1a0efb0()*0.218099);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27de0() {
   return (neuron0x1a0f320()*1.9544);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27e20() {
   return (neuron0x1a0f7a0()*0.0651937);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27e60() {
   return (neuron0x1a0fc20()*-3.7082);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27ea0() {
   return (neuron0x1a10130()*0.083234);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27ee0() {
   return (neuron0x1a105b0()*0.304196);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27f20() {
   return (neuron0x1a10a30()*0.489401);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27f60() {
   return (neuron0x1a11040()*1.55529);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27fa0() {
   return (neuron0x1a11430()*0.330539);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27fe0() {
   return (neuron0x1a118b0()*-0.277218);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28020() {
   return (neuron0x1a11d30()*0.373831);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28060() {
   return (neuron0x1a121b0()*0.248684);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a280a0() {
   return (neuron0x1a126c0()*2.59931);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a280e0() {
   return (neuron0x1a10e30()*-0.188815);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28120() {
   return (neuron0x1a12fd0()*0.792106);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28160() {
   return (neuron0x1a13450()*-0.172659);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27bf0() {
   return (neuron0x1a13d20()*1.11665);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a27c30() {
   return (neuron0x1a13ff0()*0.205588);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a282b0() {
   return (neuron0x1a14470()*-2.4367);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a282f0() {
   return (neuron0x1a148f0()*-0.181827);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28330() {
   return (neuron0x1a14d70()*1.40867);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28370() {
   return (neuron0x1a151f0()*-2.37636);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a283b0() {
   return (neuron0x1a15670()*0.780302);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a283f0() {
   return (neuron0x1a15af0()*1.27512);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28430() {
   return (neuron0x1a15f70()*-1.01718);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a287b0() {
   return (neuron0x1a0efb0()*0.452061);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a287f0() {
   return (neuron0x1a0f320()*-1.08243);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28830() {
   return (neuron0x1a0f7a0()*0.210183);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28870() {
   return (neuron0x1a0fc20()*1.5546);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a288b0() {
   return (neuron0x1a10130()*0.264041);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a288f0() {
   return (neuron0x1a105b0()*-0.351719);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28930() {
   return (neuron0x1a10a30()*0.213188);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28970() {
   return (neuron0x1a11040()*-0.222038);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a289b0() {
   return (neuron0x1a11430()*0.459012);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a289f0() {
   return (neuron0x1a118b0()*-0.50318);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28a30() {
   return (neuron0x1a11d30()*0.243355);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28a70() {
   return (neuron0x1a121b0()*0.580733);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28ab0() {
   return (neuron0x1a126c0()*-0.907046);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28af0() {
   return (neuron0x1a10e30()*0.955237);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28b30() {
   return (neuron0x1a12fd0()*-0.59746);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28b70() {
   return (neuron0x1a13450()*0.79764);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28600() {
   return (neuron0x1a13d20()*0.353011);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28640() {
   return (neuron0x1a13ff0()*0.93034);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28cc0() {
   return (neuron0x1a14470()*0.443952);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28d00() {
   return (neuron0x1a148f0()*0.49583);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28d40() {
   return (neuron0x1a14d70()*-1.16951);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28d80() {
   return (neuron0x1a151f0()*2.05907);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28dc0() {
   return (neuron0x1a15670()*0.598755);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28e00() {
   return (neuron0x1a15af0()*-1.33674);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a28e40() {
   return (neuron0x1a15f70()*-0.452041);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a291c0() {
   return (neuron0x1a0efb0()*0.53031);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29200() {
   return (neuron0x1a0f320()*0.979026);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29240() {
   return (neuron0x1a0f7a0()*-1.40555);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29280() {
   return (neuron0x1a0fc20()*-1.91935);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a292c0() {
   return (neuron0x1a10130()*1.52065);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29300() {
   return (neuron0x1a105b0()*0.620271);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29340() {
   return (neuron0x1a10a30()*-0.751173);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29380() {
   return (neuron0x1a11040()*0.171285);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a293c0() {
   return (neuron0x1a11430()*-0.569763);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29400() {
   return (neuron0x1a118b0()*-0.0643634);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29440() {
   return (neuron0x1a11d30()*-1.44854);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29480() {
   return (neuron0x1a121b0()*-0.705923);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a294c0() {
   return (neuron0x1a126c0()*3.30063);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29500() {
   return (neuron0x1a10e30()*0.755418);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29540() {
   return (neuron0x1a12fd0()*-0.0669864);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29580() {
   return (neuron0x1a13450()*-0.545428);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29010() {
   return (neuron0x1a13d20()*-0.375825);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29050() {
   return (neuron0x1a13ff0()*-1.58832);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a296d0() {
   return (neuron0x1a14470()*2.72233);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29710() {
   return (neuron0x1a148f0()*-1.26392);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29750() {
   return (neuron0x1a14d70()*1.09543);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29790() {
   return (neuron0x1a151f0()*-0.380978);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a297d0() {
   return (neuron0x1a15670()*-0.709364);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29810() {
   return (neuron0x1a15af0()*1.20371);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29850() {
   return (neuron0x1a15f70()*1.64225);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29ab0() {
   return (neuron0x1a17e80()*5.70483);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29af0() {
   return (neuron0x1a12c50()*-3.0072);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29b30() {
   return (neuron0x1a189f0()*-3.38769);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29b70() {
   return (neuron0x1a19510()*1.96421);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29bb0() {
   return (neuron0x1a19f20()*-4.10045);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29bf0() {
   return (neuron0x1a1a930()*-2.01665);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29c30() {
   return (neuron0x1a18520()*0.861147);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29c70() {
   return (neuron0x1a1c560()*2.68412);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29cb0() {
   return (neuron0x1a1cf70()*2.96304);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29cf0() {
   return (neuron0x1a1d980()*-0.366832);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29d30() {
   return (neuron0x1a1e390()*4.39532);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29d70() {
   return (neuron0x1a1eda0()*-1.72287);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29db0() {
   return (neuron0x1a1f7b0()*-2.19896);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29df0() {
   return (neuron0x1a201c0()*2.47162);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29e30() {
   return (neuron0x1a20bd0()*2.83032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29e70() {
   return (neuron0x1a215e0()*-4.56032);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0ee80() {
   return (neuron0x1a1bc00()*-3.01339);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a0eec0() {
   return (neuron0x1a24850()*3.39294);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a29fc0() {
   return (neuron0x1a25220()*-3.74521);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a2a000() {
   return (neuron0x1a25c30()*-2.29268);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a2a040() {
   return (neuron0x1a26640()*3.62711);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a2a080() {
   return (neuron0x1a27050()*-2.85375);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a2a0c0() {
   return (neuron0x1a27a60()*2.47743);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a2a100() {
   return (neuron0x1a28470()*-1.16168);
}

double nnFunc_25_25hi_5000ep_weight::synapse0x1a2a140() {
   return (neuron0x1a28e80()*3.17495);
}

