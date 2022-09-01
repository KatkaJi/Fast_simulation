#include "25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_upwing/nnFunc_1C_25_25hi_5000ep_weight.h"
#include <cmath>

double nnFunc_1C_25_25hi_5000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2c89190();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2c89190();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6d740() {
   return input0;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6da80() {
   return input1;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6ddc0() {
   return input2;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6e100() {
   return input3;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6e440() {
   return input4;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c6e8b0() {
   double input = -0.623674;
   input += synapse0x2b7a8a0();
   input += synapse0x2c5cbb0();
   input += synapse0x2c6eb60();
   input += synapse0x2c6eba0();
   input += synapse0x2c6ebe0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6e8b0() {
   double input = input0x2c6e8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c6ec20() {
   double input = -9.13252;
   input += synapse0x2c6ef60();
   input += synapse0x2c6efa0();
   input += synapse0x2c6efe0();
   input += synapse0x2c6f020();
   input += synapse0x2c6f060();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6ec20() {
   double input = input0x2c6ec20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c6f0a0() {
   double input = 1.02286;
   input += synapse0x2c6f3e0();
   input += synapse0x2c6f420();
   input += synapse0x2c6f460();
   input += synapse0x2c6f4a0();
   input += synapse0x2c6f4e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6f0a0() {
   double input = input0x2c6f0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c6f520() {
   double input = -2.59579;
   input += synapse0x2c6f860();
   input += synapse0x2c6f8a0();
   input += synapse0x2b6ca90();
   input += synapse0x2b6cad0();
   input += synapse0x2c6f9f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6f520() {
   double input = input0x2c6f520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c6fa30() {
   double input = 19.4654;
   input += synapse0x2c6fd70();
   input += synapse0x2c6fdb0();
   input += synapse0x2c6fdf0();
   input += synapse0x2c6fe30();
   input += synapse0x2c6fe70();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6fa30() {
   double input = input0x2c6fa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c6feb0() {
   double input = -7.79116;
   input += synapse0x2c701f0();
   input += synapse0x2c70230();
   input += synapse0x2c70270();
   input += synapse0x2c702b0();
   input += synapse0x2c702f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c6feb0() {
   double input = input0x2c6feb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c70330() {
   double input = 5.67257;
   input += synapse0x2c70670();
   input += synapse0x2c706b0();
   input += synapse0x2c706f0();
   input += synapse0x2c6f8e0();
   input += synapse0x2c6f920();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c70330() {
   double input = input0x2c70330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c70940() {
   double input = 0.0616949;
   input += synapse0x2c70bf0();
   input += synapse0x2c70c30();
   input += synapse0x2c70c70();
   input += synapse0x2c70cb0();
   input += synapse0x2c70cf0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c70940() {
   double input = input0x2c70940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c70d30() {
   double input = -13.5652;
   input += synapse0x2c71070();
   input += synapse0x2c710b0();
   input += synapse0x2c710f0();
   input += synapse0x2c71130();
   input += synapse0x2c71170();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c70d30() {
   double input = input0x2c70d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c711b0() {
   double input = -0.216588;
   input += synapse0x2c714f0();
   input += synapse0x2c71530();
   input += synapse0x2c71570();
   input += synapse0x2c715b0();
   input += synapse0x2c715f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c711b0() {
   double input = input0x2c711b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c71630() {
   double input = 0.693505;
   input += synapse0x2c71970();
   input += synapse0x2c719b0();
   input += synapse0x2c719f0();
   input += synapse0x2c71a30();
   input += synapse0x2c71a70();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c71630() {
   double input = input0x2c71630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c71ab0() {
   double input = 0.00113939;
   input += synapse0x2b6c8e0();
   input += synapse0x2b6c920();
   input += synapse0x2c71f00();
   input += synapse0x2c71f40();
   input += synapse0x2c71f80();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c71ab0() {
   double input = input0x2c71ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c71fc0() {
   double input = -0.738667;
   input += synapse0x2c72300();
   input += synapse0x2c72340();
   input += synapse0x2c72380();
   input += synapse0x2c723c0();
   input += synapse0x2c72400();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c71fc0() {
   double input = input0x2c71fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c70730() {
   double input = 0.339527;
   input += synapse0x2b6d0b0();
   input += synapse0x2c708c0();
   input += synapse0x2c70900();
   input += synapse0x2c72850();
   input += synapse0x2c72890();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c70730() {
   double input = input0x2c70730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c728d0() {
   double input = 1.06474;
   input += synapse0x2c72c10();
   input += synapse0x2c72c50();
   input += synapse0x2c72c90();
   input += synapse0x2c72cd0();
   input += synapse0x2c72d10();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c728d0() {
   double input = input0x2c728d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c72d50() {
   double input = 0.566601;
   input += synapse0x2c73090();
   input += synapse0x2c6d960();
   input += synapse0x2c6d9a0();
   input += synapse0x2c6dca0();
   input += synapse0x2c6dce0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c72d50() {
   double input = input0x2c72d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c73620() {
   double input = -8.79965;
   input += synapse0x2c737b0();
   input += synapse0x2c737f0();
   input += synapse0x2c73830();
   input += synapse0x2c73870();
   input += synapse0x2c738b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c73620() {
   double input = input0x2c73620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c738f0() {
   double input = 0.218991;
   input += synapse0x2c73c30();
   input += synapse0x2c73c70();
   input += synapse0x2c73cb0();
   input += synapse0x2c73cf0();
   input += synapse0x2c73d30();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c738f0() {
   double input = input0x2c738f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c73d70() {
   double input = 1.4323;
   input += synapse0x2c740b0();
   input += synapse0x2c740f0();
   input += synapse0x2c74130();
   input += synapse0x2c74170();
   input += synapse0x2c741b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c73d70() {
   double input = input0x2c73d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c741f0() {
   double input = 1.87706;
   input += synapse0x2c74530();
   input += synapse0x2c74570();
   input += synapse0x2c745b0();
   input += synapse0x2c745f0();
   input += synapse0x2c74630();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c741f0() {
   double input = input0x2c741f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c74670() {
   double input = -0.405819;
   input += synapse0x2c749b0();
   input += synapse0x2c749f0();
   input += synapse0x2c74a30();
   input += synapse0x2c74a70();
   input += synapse0x2c74ab0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c74670() {
   double input = input0x2c74670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c74af0() {
   double input = 3.14385;
   input += synapse0x2c74e30();
   input += synapse0x2c74e70();
   input += synapse0x2c74eb0();
   input += synapse0x2c74ef0();
   input += synapse0x2c74f30();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c74af0() {
   double input = input0x2c74af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c74f70() {
   double input = 0.51129;
   input += synapse0x2c752b0();
   input += synapse0x2c752f0();
   input += synapse0x2c75330();
   input += synapse0x2c75370();
   input += synapse0x2c753b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c74f70() {
   double input = input0x2c74f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c753f0() {
   double input = -1.41577;
   input += synapse0x2c75730();
   input += synapse0x2c75770();
   input += synapse0x2c757b0();
   input += synapse0x2c757f0();
   input += synapse0x2c75830();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c753f0() {
   double input = input0x2c753f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c75870() {
   double input = 0.852825;
   input += synapse0x2c75bb0();
   input += synapse0x2c75bf0();
   input += synapse0x2c75c30();
   input += synapse0x2c75c70();
   input += synapse0x2c75cb0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c75870() {
   double input = input0x2c75870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c77780() {
   double input = 0.630979;
   input += synapse0x2c6f7d0();
   input += synapse0x2c6f810();
   input += synapse0x2c6fce0();
   input += synapse0x2c6fd20();
   input += synapse0x2c70160();
   input += synapse0x2c701a0();
   input += synapse0x2c705e0();
   input += synapse0x2c70620();
   input += synapse0x2c70b60();
   input += synapse0x2c70ba0();
   input += synapse0x2c70fe0();
   input += synapse0x2c71020();
   input += synapse0x2c71460();
   input += synapse0x2c714a0();
   input += synapse0x2c718e0();
   input += synapse0x2c71920();
   input += synapse0x2c71d60();
   input += synapse0x2c71da0();
   input += synapse0x2c72270();
   input += synapse0x2c722b0();
   input += synapse0x2c72b80();
   input += synapse0x2c72bc0();
   input += synapse0x2c73000();
   input += synapse0x2c73040();
   input += synapse0x2c6e660();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c77780() {
   double input = input0x2c77780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c72550() {
   double input = 2.01623;
   input += synapse0x2c726e0();
   input += synapse0x2c72720();
   input += synapse0x2c72760();
   input += synapse0x2c727a0();
   input += synapse0x2c727e0();
   input += synapse0x2c6e6a0();
   input += synapse0x2c74920();
   input += synapse0x2c74960();
   input += synapse0x2c74da0();
   input += synapse0x2c74de0();
   input += synapse0x2c75220();
   input += synapse0x2c75260();
   input += synapse0x2c756a0();
   input += synapse0x2c756e0();
   input += synapse0x2c75b20();
   input += synapse0x2c75b60();
   input += synapse0x2c6ead0();
   input += synapse0x2c6eb10();
   input += synapse0x2c73ba0();
   input += synapse0x2c73be0();
   input += synapse0x2b7a970();
   input += synapse0x2b7a9b0();
   input += synapse0x2c78230();
   input += synapse0x2c78270();
   input += synapse0x2c782b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c72550() {
   double input = input0x2c72550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c782f0() {
   double input = -0.541649;
   input += synapse0x2c71df0();
   input += synapse0x2c71e30();
   input += synapse0x2c71e70();
   input += synapse0x2c71eb0();
   input += synapse0x2c78840();
   input += synapse0x2c78880();
   input += synapse0x2c788c0();
   input += synapse0x2c78900();
   input += synapse0x2c78940();
   input += synapse0x2c78980();
   input += synapse0x2c789c0();
   input += synapse0x2c78a00();
   input += synapse0x2c78a40();
   input += synapse0x2c78a80();
   input += synapse0x2c78ac0();
   input += synapse0x2c78b00();
   input += synapse0x2c78480();
   input += synapse0x2c784c0();
   input += synapse0x2c78c50();
   input += synapse0x2c78c90();
   input += synapse0x2c78cd0();
   input += synapse0x2c78d10();
   input += synapse0x2c78d50();
   input += synapse0x2c78d90();
   input += synapse0x2c78dd0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c782f0() {
   double input = input0x2c782f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c78e10() {
   double input = 1.60203;
   input += synapse0x2c79150();
   input += synapse0x2c79190();
   input += synapse0x2c791d0();
   input += synapse0x2c79210();
   input += synapse0x2c79250();
   input += synapse0x2c79290();
   input += synapse0x2c792d0();
   input += synapse0x2c79310();
   input += synapse0x2c79350();
   input += synapse0x2c79390();
   input += synapse0x2c793d0();
   input += synapse0x2c79410();
   input += synapse0x2c79450();
   input += synapse0x2c79490();
   input += synapse0x2c794d0();
   input += synapse0x2c79510();
   input += synapse0x2c78fa0();
   input += synapse0x2c78fe0();
   input += synapse0x2c79660();
   input += synapse0x2c796a0();
   input += synapse0x2c796e0();
   input += synapse0x2c79720();
   input += synapse0x2c79760();
   input += synapse0x2c797a0();
   input += synapse0x2c797e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c78e10() {
   double input = input0x2c78e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c79820() {
   double input = -0.17053;
   input += synapse0x2c79b60();
   input += synapse0x2c79ba0();
   input += synapse0x2c79be0();
   input += synapse0x2c79c20();
   input += synapse0x2c79c60();
   input += synapse0x2c79ca0();
   input += synapse0x2c79ce0();
   input += synapse0x2c79d20();
   input += synapse0x2c79d60();
   input += synapse0x2c79da0();
   input += synapse0x2c79de0();
   input += synapse0x2c79e20();
   input += synapse0x2c79e60();
   input += synapse0x2c79ea0();
   input += synapse0x2c79ee0();
   input += synapse0x2c79f20();
   input += synapse0x2c799b0();
   input += synapse0x2c799f0();
   input += synapse0x2c7a070();
   input += synapse0x2c7a0b0();
   input += synapse0x2c7a0f0();
   input += synapse0x2c7a130();
   input += synapse0x2c7a170();
   input += synapse0x2c7a1b0();
   input += synapse0x2c7a1f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c79820() {
   double input = input0x2c79820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7a230() {
   double input = -0.786112;
   input += synapse0x2c7a570();
   input += synapse0x2c7a5b0();
   input += synapse0x2c7a5f0();
   input += synapse0x2c7a630();
   input += synapse0x2c7a670();
   input += synapse0x2c7a6b0();
   input += synapse0x2c7a6f0();
   input += synapse0x2c77910();
   input += synapse0x2c77950();
   input += synapse0x2c77990();
   input += synapse0x2c779d0();
   input += synapse0x2c77a10();
   input += synapse0x2c77a50();
   input += synapse0x2c77a90();
   input += synapse0x2c77ad0();
   input += synapse0x2c77b10();
   input += synapse0x2c7a3c0();
   input += synapse0x2c7a400();
   input += synapse0x2c77c60();
   input += synapse0x2c77ca0();
   input += synapse0x2c77ce0();
   input += synapse0x2c77d20();
   input += synapse0x2c77d60();
   input += synapse0x2c77da0();
   input += synapse0x2c77de0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7a230() {
   double input = input0x2c7a230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c77e20() {
   double input = 0.522849;
   input += synapse0x2c780d0();
   input += synapse0x2c7b7d0();
   input += synapse0x2c7b810();
   input += synapse0x2c7b850();
   input += synapse0x2c7b890();
   input += synapse0x2c7b8d0();
   input += synapse0x2c7b910();
   input += synapse0x2c7b950();
   input += synapse0x2c7b990();
   input += synapse0x2c7b9d0();
   input += synapse0x2c7ba10();
   input += synapse0x2c7ba50();
   input += synapse0x2c7ba90();
   input += synapse0x2c7bad0();
   input += synapse0x2c7bb10();
   input += synapse0x2c7bb50();
   input += synapse0x2c77fb0();
   input += synapse0x2c77ff0();
   input += synapse0x2c7bca0();
   input += synapse0x2c7bce0();
   input += synapse0x2c7bd20();
   input += synapse0x2c7bd60();
   input += synapse0x2c7bda0();
   input += synapse0x2c7bde0();
   input += synapse0x2c7be20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c77e20() {
   double input = input0x2c77e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7be60() {
   double input = 0.811626;
   input += synapse0x2c7c1a0();
   input += synapse0x2c7c1e0();
   input += synapse0x2c7c220();
   input += synapse0x2c7c260();
   input += synapse0x2c7c2a0();
   input += synapse0x2c7c2e0();
   input += synapse0x2c7c320();
   input += synapse0x2c7c360();
   input += synapse0x2c7c3a0();
   input += synapse0x2c7c3e0();
   input += synapse0x2c7c420();
   input += synapse0x2c7c460();
   input += synapse0x2c7c4a0();
   input += synapse0x2c7c4e0();
   input += synapse0x2c7c520();
   input += synapse0x2c7c560();
   input += synapse0x2c7bff0();
   input += synapse0x2c7c030();
   input += synapse0x2c7c6b0();
   input += synapse0x2c7c6f0();
   input += synapse0x2c7c730();
   input += synapse0x2c7c770();
   input += synapse0x2c7c7b0();
   input += synapse0x2c7c7f0();
   input += synapse0x2c7c830();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7be60() {
   double input = input0x2c7be60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7c870() {
   double input = -0.815051;
   input += synapse0x2c7cbb0();
   input += synapse0x2c7cbf0();
   input += synapse0x2c7cc30();
   input += synapse0x2c7cc70();
   input += synapse0x2c7ccb0();
   input += synapse0x2c7ccf0();
   input += synapse0x2c7cd30();
   input += synapse0x2c7cd70();
   input += synapse0x2c7cdb0();
   input += synapse0x2c7cdf0();
   input += synapse0x2c7ce30();
   input += synapse0x2c7ce70();
   input += synapse0x2c7ceb0();
   input += synapse0x2c7cef0();
   input += synapse0x2c7cf30();
   input += synapse0x2c7cf70();
   input += synapse0x2c7ca00();
   input += synapse0x2c7ca40();
   input += synapse0x2c7d0c0();
   input += synapse0x2c7d100();
   input += synapse0x2c7d140();
   input += synapse0x2c7d180();
   input += synapse0x2c7d1c0();
   input += synapse0x2c7d200();
   input += synapse0x2c7d240();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7c870() {
   double input = input0x2c7c870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7d280() {
   double input = 0.611908;
   input += synapse0x2c7d5c0();
   input += synapse0x2c7d600();
   input += synapse0x2c7d640();
   input += synapse0x2c7d680();
   input += synapse0x2c7d6c0();
   input += synapse0x2c7d700();
   input += synapse0x2c7d740();
   input += synapse0x2c7d780();
   input += synapse0x2c7d7c0();
   input += synapse0x2c7d800();
   input += synapse0x2c7d840();
   input += synapse0x2c7d880();
   input += synapse0x2c7d8c0();
   input += synapse0x2c7d900();
   input += synapse0x2c7d940();
   input += synapse0x2c7d980();
   input += synapse0x2c7d410();
   input += synapse0x2c7d450();
   input += synapse0x2c7dad0();
   input += synapse0x2c7db10();
   input += synapse0x2c7db50();
   input += synapse0x2c7db90();
   input += synapse0x2c7dbd0();
   input += synapse0x2c7dc10();
   input += synapse0x2c7dc50();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7d280() {
   double input = input0x2c7d280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7dc90() {
   double input = -0.344174;
   input += synapse0x2c7dfd0();
   input += synapse0x2c7e010();
   input += synapse0x2c7e050();
   input += synapse0x2c7e090();
   input += synapse0x2c7e0d0();
   input += synapse0x2c7e110();
   input += synapse0x2c7e150();
   input += synapse0x2c7e190();
   input += synapse0x2c7e1d0();
   input += synapse0x2c7e210();
   input += synapse0x2c7e250();
   input += synapse0x2c7e290();
   input += synapse0x2c7e2d0();
   input += synapse0x2c7e310();
   input += synapse0x2c7e350();
   input += synapse0x2c7e390();
   input += synapse0x2c7de20();
   input += synapse0x2c7de60();
   input += synapse0x2c7e4e0();
   input += synapse0x2c7e520();
   input += synapse0x2c7e560();
   input += synapse0x2c7e5a0();
   input += synapse0x2c7e5e0();
   input += synapse0x2c7e620();
   input += synapse0x2c7e660();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7dc90() {
   double input = input0x2c7dc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7e6a0() {
   double input = 0.843477;
   input += synapse0x2c7e9e0();
   input += synapse0x2c7ea20();
   input += synapse0x2c7ea60();
   input += synapse0x2c7eaa0();
   input += synapse0x2c7eae0();
   input += synapse0x2c7eb20();
   input += synapse0x2c7eb60();
   input += synapse0x2c7eba0();
   input += synapse0x2c7ebe0();
   input += synapse0x2c7ec20();
   input += synapse0x2c7ec60();
   input += synapse0x2c7eca0();
   input += synapse0x2c7ece0();
   input += synapse0x2c7ed20();
   input += synapse0x2c7ed60();
   input += synapse0x2c7eda0();
   input += synapse0x2c7e830();
   input += synapse0x2c7e870();
   input += synapse0x2c7eef0();
   input += synapse0x2c7ef30();
   input += synapse0x2c7ef70();
   input += synapse0x2c7efb0();
   input += synapse0x2c7eff0();
   input += synapse0x2c7f030();
   input += synapse0x2c7f070();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7e6a0() {
   double input = input0x2c7e6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7f0b0() {
   double input = 1.74789;
   input += synapse0x2c7f3f0();
   input += synapse0x2c7f430();
   input += synapse0x2c7f470();
   input += synapse0x2c7f4b0();
   input += synapse0x2c7f4f0();
   input += synapse0x2c7f530();
   input += synapse0x2c7f570();
   input += synapse0x2c7f5b0();
   input += synapse0x2c7f5f0();
   input += synapse0x2c7f630();
   input += synapse0x2c7f670();
   input += synapse0x2c7f6b0();
   input += synapse0x2c7f6f0();
   input += synapse0x2c7f730();
   input += synapse0x2c7f770();
   input += synapse0x2c7f7b0();
   input += synapse0x2c7f240();
   input += synapse0x2c7f280();
   input += synapse0x2c7f900();
   input += synapse0x2c7f940();
   input += synapse0x2c7f980();
   input += synapse0x2c7f9c0();
   input += synapse0x2c7fa00();
   input += synapse0x2c7fa40();
   input += synapse0x2c7fa80();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7f0b0() {
   double input = input0x2c7f0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7fac0() {
   double input = -0.505908;
   input += synapse0x2c7fe00();
   input += synapse0x2c7fe40();
   input += synapse0x2c7fe80();
   input += synapse0x2c7fec0();
   input += synapse0x2c7ff00();
   input += synapse0x2c7ff40();
   input += synapse0x2c7ff80();
   input += synapse0x2c7ffc0();
   input += synapse0x2c80000();
   input += synapse0x2c80040();
   input += synapse0x2c80080();
   input += synapse0x2c800c0();
   input += synapse0x2c80100();
   input += synapse0x2c80140();
   input += synapse0x2c80180();
   input += synapse0x2c801c0();
   input += synapse0x2c7fc50();
   input += synapse0x2c7fc90();
   input += synapse0x2c80310();
   input += synapse0x2c80350();
   input += synapse0x2c80390();
   input += synapse0x2c803d0();
   input += synapse0x2c80410();
   input += synapse0x2c80450();
   input += synapse0x2c80490();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7fac0() {
   double input = input0x2c7fac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c804d0() {
   double input = 0.636046;
   input += synapse0x2c80810();
   input += synapse0x2c80850();
   input += synapse0x2c80890();
   input += synapse0x2c808d0();
   input += synapse0x2c80910();
   input += synapse0x2c80950();
   input += synapse0x2c80990();
   input += synapse0x2c809d0();
   input += synapse0x2c80a10();
   input += synapse0x2c80a50();
   input += synapse0x2c80a90();
   input += synapse0x2c80ad0();
   input += synapse0x2c80b10();
   input += synapse0x2c80b50();
   input += synapse0x2c80b90();
   input += synapse0x2c80bd0();
   input += synapse0x2c80660();
   input += synapse0x2c806a0();
   input += synapse0x2c80d20();
   input += synapse0x2c80d60();
   input += synapse0x2c80da0();
   input += synapse0x2c80de0();
   input += synapse0x2c80e20();
   input += synapse0x2c80e60();
   input += synapse0x2c80ea0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c804d0() {
   double input = input0x2c804d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c80ee0() {
   double input = -0.000376936;
   input += synapse0x2c81220();
   input += synapse0x2c6ea40();
   input += synapse0x2c6ea80();
   input += synapse0x2c6ee40();
   input += synapse0x2c6ee80();
   input += synapse0x2c6f2c0();
   input += synapse0x2c6f300();
   input += synapse0x2c6f740();
   input += synapse0x2c6f780();
   input += synapse0x2c6fc50();
   input += synapse0x2c6fc90();
   input += synapse0x2c700d0();
   input += synapse0x2c70110();
   input += synapse0x2c70550();
   input += synapse0x2c70590();
   input += synapse0x2c70ad0();
   input += synapse0x2c70b10();
   input += synapse0x2c70f50();
   input += synapse0x2c70f90();
   input += synapse0x2c713d0();
   input += synapse0x2c71410();
   input += synapse0x2c71850();
   input += synapse0x2c71890();
   input += synapse0x2c71cd0();
   input += synapse0x2c71d10();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c80ee0() {
   double input = input0x2c80ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c7b500() {
   double input = 0.298147;
   input += synapse0x2c7b690();
   input += synapse0x2c7b6d0();
   input += synapse0x2c72f70();
   input += synapse0x2c72fb0();
   input += synapse0x2c81070();
   input += synapse0x2c810b0();
   input += synapse0x2c6e320();
   input += synapse0x2c6e360();
   input += synapse0x2c73b10();
   input += synapse0x2c73b50();
   input += synapse0x2c73f90();
   input += synapse0x2c73fd0();
   input += synapse0x2c74410();
   input += synapse0x2c74450();
   input += synapse0x2c74890();
   input += synapse0x2c748d0();
   input += synapse0x2c74d10();
   input += synapse0x2c74d50();
   input += synapse0x2c75190();
   input += synapse0x2c751d0();
   input += synapse0x2c75610();
   input += synapse0x2c75650();
   input += synapse0x2c75a90();
   input += synapse0x2c75ad0();
   input += synapse0x2c721e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c7b500() {
   double input = input0x2c7b500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c84150() {
   double input = -0.416339;
   input += synapse0x2c72220();
   input += synapse0x2c84490();
   input += synapse0x2c844d0();
   input += synapse0x2c84510();
   input += synapse0x2c84550();
   input += synapse0x2c84590();
   input += synapse0x2c845d0();
   input += synapse0x2c84610();
   input += synapse0x2c84650();
   input += synapse0x2c84690();
   input += synapse0x2c846d0();
   input += synapse0x2c84710();
   input += synapse0x2c84750();
   input += synapse0x2c84790();
   input += synapse0x2c847d0();
   input += synapse0x2c84810();
   input += synapse0x2c842e0();
   input += synapse0x2c84320();
   input += synapse0x2c84960();
   input += synapse0x2c849a0();
   input += synapse0x2c849e0();
   input += synapse0x2c84a20();
   input += synapse0x2c84a60();
   input += synapse0x2c84aa0();
   input += synapse0x2c84ae0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c84150() {
   double input = input0x2c84150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c84b20() {
   double input = 0.0175666;
   input += synapse0x2c84e60();
   input += synapse0x2c84ea0();
   input += synapse0x2c84ee0();
   input += synapse0x2c84f20();
   input += synapse0x2c84f60();
   input += synapse0x2c84fa0();
   input += synapse0x2c84fe0();
   input += synapse0x2c85020();
   input += synapse0x2c85060();
   input += synapse0x2c850a0();
   input += synapse0x2c850e0();
   input += synapse0x2c85120();
   input += synapse0x2c85160();
   input += synapse0x2c851a0();
   input += synapse0x2c851e0();
   input += synapse0x2c85220();
   input += synapse0x2c84cb0();
   input += synapse0x2c84cf0();
   input += synapse0x2c85370();
   input += synapse0x2c853b0();
   input += synapse0x2c853f0();
   input += synapse0x2c85430();
   input += synapse0x2c85470();
   input += synapse0x2c854b0();
   input += synapse0x2c854f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c84b20() {
   double input = input0x2c84b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c85530() {
   double input = 0.692965;
   input += synapse0x2c85870();
   input += synapse0x2c858b0();
   input += synapse0x2c858f0();
   input += synapse0x2c85930();
   input += synapse0x2c85970();
   input += synapse0x2c859b0();
   input += synapse0x2c859f0();
   input += synapse0x2c85a30();
   input += synapse0x2c85a70();
   input += synapse0x2c85ab0();
   input += synapse0x2c85af0();
   input += synapse0x2c85b30();
   input += synapse0x2c85b70();
   input += synapse0x2c85bb0();
   input += synapse0x2c85bf0();
   input += synapse0x2c85c30();
   input += synapse0x2c856c0();
   input += synapse0x2c85700();
   input += synapse0x2c85d80();
   input += synapse0x2c85dc0();
   input += synapse0x2c85e00();
   input += synapse0x2c85e40();
   input += synapse0x2c85e80();
   input += synapse0x2c85ec0();
   input += synapse0x2c85f00();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c85530() {
   double input = input0x2c85530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c85f40() {
   double input = -0.167453;
   input += synapse0x2c86280();
   input += synapse0x2c862c0();
   input += synapse0x2c86300();
   input += synapse0x2c86340();
   input += synapse0x2c86380();
   input += synapse0x2c863c0();
   input += synapse0x2c86400();
   input += synapse0x2c86440();
   input += synapse0x2c86480();
   input += synapse0x2c864c0();
   input += synapse0x2c86500();
   input += synapse0x2c86540();
   input += synapse0x2c86580();
   input += synapse0x2c865c0();
   input += synapse0x2c86600();
   input += synapse0x2c86640();
   input += synapse0x2c860d0();
   input += synapse0x2c86110();
   input += synapse0x2c86790();
   input += synapse0x2c867d0();
   input += synapse0x2c86810();
   input += synapse0x2c86850();
   input += synapse0x2c86890();
   input += synapse0x2c868d0();
   input += synapse0x2c86910();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c85f40() {
   double input = input0x2c85f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c86950() {
   double input = 1.09818;
   input += synapse0x2c86c90();
   input += synapse0x2c86cd0();
   input += synapse0x2c86d10();
   input += synapse0x2c86d50();
   input += synapse0x2c86d90();
   input += synapse0x2c86dd0();
   input += synapse0x2c86e10();
   input += synapse0x2c86e50();
   input += synapse0x2c86e90();
   input += synapse0x2c86ed0();
   input += synapse0x2c86f10();
   input += synapse0x2c86f50();
   input += synapse0x2c86f90();
   input += synapse0x2c86fd0();
   input += synapse0x2c87010();
   input += synapse0x2c87050();
   input += synapse0x2c86ae0();
   input += synapse0x2c86b20();
   input += synapse0x2c871a0();
   input += synapse0x2c871e0();
   input += synapse0x2c87220();
   input += synapse0x2c87260();
   input += synapse0x2c872a0();
   input += synapse0x2c872e0();
   input += synapse0x2c87320();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c86950() {
   double input = input0x2c86950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c87360() {
   double input = -0.266155;
   input += synapse0x2c876a0();
   input += synapse0x2c876e0();
   input += synapse0x2c87720();
   input += synapse0x2c87760();
   input += synapse0x2c877a0();
   input += synapse0x2c877e0();
   input += synapse0x2c87820();
   input += synapse0x2c87860();
   input += synapse0x2c878a0();
   input += synapse0x2c878e0();
   input += synapse0x2c87920();
   input += synapse0x2c87960();
   input += synapse0x2c879a0();
   input += synapse0x2c879e0();
   input += synapse0x2c87a20();
   input += synapse0x2c87a60();
   input += synapse0x2c874f0();
   input += synapse0x2c87530();
   input += synapse0x2c87bb0();
   input += synapse0x2c87bf0();
   input += synapse0x2c87c30();
   input += synapse0x2c87c70();
   input += synapse0x2c87cb0();
   input += synapse0x2c87cf0();
   input += synapse0x2c87d30();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c87360() {
   double input = input0x2c87360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c87d70() {
   double input = -0.218895;
   input += synapse0x2c880b0();
   input += synapse0x2c880f0();
   input += synapse0x2c88130();
   input += synapse0x2c88170();
   input += synapse0x2c881b0();
   input += synapse0x2c881f0();
   input += synapse0x2c88230();
   input += synapse0x2c88270();
   input += synapse0x2c882b0();
   input += synapse0x2c882f0();
   input += synapse0x2c88330();
   input += synapse0x2c88370();
   input += synapse0x2c883b0();
   input += synapse0x2c883f0();
   input += synapse0x2c88430();
   input += synapse0x2c88470();
   input += synapse0x2c87f00();
   input += synapse0x2c87f40();
   input += synapse0x2c885c0();
   input += synapse0x2c88600();
   input += synapse0x2c88640();
   input += synapse0x2c88680();
   input += synapse0x2c886c0();
   input += synapse0x2c88700();
   input += synapse0x2c88740();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c87d70() {
   double input = input0x2c87d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c88780() {
   double input = 0.536102;
   input += synapse0x2c88ac0();
   input += synapse0x2c88b00();
   input += synapse0x2c88b40();
   input += synapse0x2c88b80();
   input += synapse0x2c88bc0();
   input += synapse0x2c88c00();
   input += synapse0x2c88c40();
   input += synapse0x2c88c80();
   input += synapse0x2c88cc0();
   input += synapse0x2c88d00();
   input += synapse0x2c88d40();
   input += synapse0x2c88d80();
   input += synapse0x2c88dc0();
   input += synapse0x2c88e00();
   input += synapse0x2c88e40();
   input += synapse0x2c88e80();
   input += synapse0x2c88910();
   input += synapse0x2c88950();
   input += synapse0x2c88fd0();
   input += synapse0x2c89010();
   input += synapse0x2c89050();
   input += synapse0x2c89090();
   input += synapse0x2c890d0();
   input += synapse0x2c89110();
   input += synapse0x2c89150();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c88780() {
   double input = input0x2c88780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight::input0x2c89190() {
   double input = 1.31721;
   input += synapse0x2c893b0();
   input += synapse0x2c893f0();
   input += synapse0x2c89430();
   input += synapse0x2c89470();
   input += synapse0x2c894b0();
   input += synapse0x2c894f0();
   input += synapse0x2c89530();
   input += synapse0x2c89570();
   input += synapse0x2c895b0();
   input += synapse0x2c895f0();
   input += synapse0x2c89630();
   input += synapse0x2c89670();
   input += synapse0x2c896b0();
   input += synapse0x2c896f0();
   input += synapse0x2c89730();
   input += synapse0x2c89770();
   input += synapse0x2c6e780();
   input += synapse0x2c6e7c0();
   input += synapse0x2c898c0();
   input += synapse0x2c89900();
   input += synapse0x2c89940();
   input += synapse0x2c89980();
   input += synapse0x2c899c0();
   input += synapse0x2c89a00();
   input += synapse0x2c89a40();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight::neuron0x2c89190() {
   double input = input0x2c89190();
   return (input * 35.2234)+155.598;
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b7a8a0() {
   return (neuron0x2c6d740()*-1.72968);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c5cbb0() {
   return (neuron0x2c6da80()*0.0444233);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6eb60() {
   return (neuron0x2c6ddc0()*-0.201598);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6eba0() {
   return (neuron0x2c6e100()*2.70298);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ebe0() {
   return (neuron0x2c6e440()*-0.334163);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ef60() {
   return (neuron0x2c6d740()*-4.21717);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6efa0() {
   return (neuron0x2c6da80()*0.115234);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6efe0() {
   return (neuron0x2c6ddc0()*-2.30917);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f020() {
   return (neuron0x2c6e100()*0.245532);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f060() {
   return (neuron0x2c6e440()*0.000377129);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f3e0() {
   return (neuron0x2c6d740()*-5.48325);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f420() {
   return (neuron0x2c6da80()*0.0488989);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f460() {
   return (neuron0x2c6ddc0()*4.04333);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f4a0() {
   return (neuron0x2c6e100()*7.74206);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f4e0() {
   return (neuron0x2c6e440()*0.342619);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f860() {
   return (neuron0x2c6d740()*-0.0584759);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f8a0() {
   return (neuron0x2c6da80()*0.00262708);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b6ca90() {
   return (neuron0x2c6ddc0()*0.00382755);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b6cad0() {
   return (neuron0x2c6e100()*2.54776);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f9f0() {
   return (neuron0x2c6e440()*-1.12305);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fd70() {
   return (neuron0x2c6d740()*0.80689);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fdb0() {
   return (neuron0x2c6da80()*0.103314);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fdf0() {
   return (neuron0x2c6ddc0()*0.948785);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fe30() {
   return (neuron0x2c6e100()*-17.3593);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fe70() {
   return (neuron0x2c6e440()*5.60605);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c701f0() {
   return (neuron0x2c6d740()*-5.75132);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70230() {
   return (neuron0x2c6da80()*-0.0274385);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70270() {
   return (neuron0x2c6ddc0()*-2.55035);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c702b0() {
   return (neuron0x2c6e100()*-4.58363);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c702f0() {
   return (neuron0x2c6e440()*-2.94861);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70670() {
   return (neuron0x2c6d740()*-0.077835);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c706b0() {
   return (neuron0x2c6da80()*-0.0180245);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c706f0() {
   return (neuron0x2c6ddc0()*-0.242269);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f8e0() {
   return (neuron0x2c6e100()*-11.6719);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f920() {
   return (neuron0x2c6e440()*10.6902);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70bf0() {
   return (neuron0x2c6d740()*-1.11356);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70c30() {
   return (neuron0x2c6da80()*0.672629);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70c70() {
   return (neuron0x2c6ddc0()*1.15002);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70cb0() {
   return (neuron0x2c6e100()*2.851);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70cf0() {
   return (neuron0x2c6e440()*0.50518);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71070() {
   return (neuron0x2c6d740()*0.243279);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c710b0() {
   return (neuron0x2c6da80()*0.0370476);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c710f0() {
   return (neuron0x2c6ddc0()*0.548528);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71130() {
   return (neuron0x2c6e100()*17.032);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71170() {
   return (neuron0x2c6e440()*-9.19086);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c714f0() {
   return (neuron0x2c6d740()*0.622139);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71530() {
   return (neuron0x2c6da80()*-0.0801478);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71570() {
   return (neuron0x2c6ddc0()*-0.24389);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c715b0() {
   return (neuron0x2c6e100()*-0.176651);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c715f0() {
   return (neuron0x2c6e440()*-0.552451);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71970() {
   return (neuron0x2c6d740()*-0.250229);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c719b0() {
   return (neuron0x2c6da80()*0.110188);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c719f0() {
   return (neuron0x2c6ddc0()*-0.754325);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71a30() {
   return (neuron0x2c6e100()*-4.16435);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71a70() {
   return (neuron0x2c6e440()*0.219119);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b6c8e0() {
   return (neuron0x2c6d740()*0.673044);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b6c920() {
   return (neuron0x2c6da80()*0.101705);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71f00() {
   return (neuron0x2c6ddc0()*0.382862);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71f40() {
   return (neuron0x2c6e100()*-8.91203);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71f80() {
   return (neuron0x2c6e440()*-0.00887241);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72300() {
   return (neuron0x2c6d740()*0.850219);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72340() {
   return (neuron0x2c6da80()*1.10889);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72380() {
   return (neuron0x2c6ddc0()*1.86832);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c723c0() {
   return (neuron0x2c6e100()*8.86329);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72400() {
   return (neuron0x2c6e440()*-0.158645);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b6d0b0() {
   return (neuron0x2c6d740()*0.417674);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c708c0() {
   return (neuron0x2c6da80()*-0.00458826);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70900() {
   return (neuron0x2c6ddc0()*0.0413793);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72850() {
   return (neuron0x2c6e100()*2.94741);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72890() {
   return (neuron0x2c6e440()*-2.81088);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72c10() {
   return (neuron0x2c6d740()*-1.35414);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72c50() {
   return (neuron0x2c6da80()*0.279694);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72c90() {
   return (neuron0x2c6ddc0()*-2.00729);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72cd0() {
   return (neuron0x2c6e100()*-9.85372);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72d10() {
   return (neuron0x2c6e440()*0.460246);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73090() {
   return (neuron0x2c6d740()*-1.98628);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6d960() {
   return (neuron0x2c6da80()*0.570066);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6d9a0() {
   return (neuron0x2c6ddc0()*-0.015827);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6dca0() {
   return (neuron0x2c6e100()*1.92851);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6dce0() {
   return (neuron0x2c6e440()*0.718362);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c737b0() {
   return (neuron0x2c6d740()*-6.51184);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c737f0() {
   return (neuron0x2c6da80()*-0.0150182);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73830() {
   return (neuron0x2c6ddc0()*-2.7651);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73870() {
   return (neuron0x2c6e100()*-3.46029);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c738b0() {
   return (neuron0x2c6e440()*-6.0822);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73c30() {
   return (neuron0x2c6d740()*-0.29029);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73c70() {
   return (neuron0x2c6da80()*-0.141181);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73cb0() {
   return (neuron0x2c6ddc0()*-1.29065);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73cf0() {
   return (neuron0x2c6e100()*-1.66523);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73d30() {
   return (neuron0x2c6e440()*0.657599);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c740b0() {
   return (neuron0x2c6d740()*-0.386558);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c740f0() {
   return (neuron0x2c6da80()*-0.128314);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74130() {
   return (neuron0x2c6ddc0()*0.795908);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74170() {
   return (neuron0x2c6e100()*1.66363);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c741b0() {
   return (neuron0x2c6e440()*1.49788);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74530() {
   return (neuron0x2c6d740()*-0.622205);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74570() {
   return (neuron0x2c6da80()*-0.0527299);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c745b0() {
   return (neuron0x2c6ddc0()*-0.868121);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c745f0() {
   return (neuron0x2c6e100()*-3.99885);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74630() {
   return (neuron0x2c6e440()*1.74676);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c749b0() {
   return (neuron0x2c6d740()*-1.34282);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c749f0() {
   return (neuron0x2c6da80()*-0.0231205);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74a30() {
   return (neuron0x2c6ddc0()*-1.01914);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74a70() {
   return (neuron0x2c6e100()*2.06056);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74ab0() {
   return (neuron0x2c6e440()*-0.629926);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74e30() {
   return (neuron0x2c6d740()*0.215368);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74e70() {
   return (neuron0x2c6da80()*-0.0373576);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74eb0() {
   return (neuron0x2c6ddc0()*-0.145166);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74ef0() {
   return (neuron0x2c6e100()*-2.73518);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74f30() {
   return (neuron0x2c6e440()*0.0858052);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c752b0() {
   return (neuron0x2c6d740()*-2.58226);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c752f0() {
   return (neuron0x2c6da80()*0.335879);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75330() {
   return (neuron0x2c6ddc0()*1.6815);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75370() {
   return (neuron0x2c6e100()*3.0788);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c753b0() {
   return (neuron0x2c6e440()*0.668043);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75730() {
   return (neuron0x2c6d740()*5.33196);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75770() {
   return (neuron0x2c6da80()*-0.754943);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c757b0() {
   return (neuron0x2c6ddc0()*-1.75776);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c757f0() {
   return (neuron0x2c6e100()*0.094741);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75830() {
   return (neuron0x2c6e440()*-0.55039);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75bb0() {
   return (neuron0x2c6d740()*-1.66574);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75bf0() {
   return (neuron0x2c6da80()*-0.143908);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75c30() {
   return (neuron0x2c6ddc0()*0.56089);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75c70() {
   return (neuron0x2c6e100()*1.97537);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75cb0() {
   return (neuron0x2c6e440()*0.364638);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f7d0() {
   return (neuron0x2c6e8b0()*-0.79918);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f810() {
   return (neuron0x2c6ec20()*0.0500098);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fce0() {
   return (neuron0x2c6f0a0()*1.83756);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fd20() {
   return (neuron0x2c6f520()*-0.201661);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70160() {
   return (neuron0x2c6fa30()*2.88038);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c701a0() {
   return (neuron0x2c6feb0()*0.771574);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c705e0() {
   return (neuron0x2c70330()*0.954282);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70620() {
   return (neuron0x2c70940()*1.995);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70b60() {
   return (neuron0x2c70d30()*2.0146);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70ba0() {
   return (neuron0x2c711b0()*-0.0643357);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70fe0() {
   return (neuron0x2c71630()*-1.60512);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71020() {
   return (neuron0x2c71ab0()*-1.43236);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71460() {
   return (neuron0x2c71fc0()*-0.404017);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c714a0() {
   return (neuron0x2c70730()*-0.130556);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c718e0() {
   return (neuron0x2c728d0()*2.24383);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71920() {
   return (neuron0x2c72d50()*0.708007);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71d60() {
   return (neuron0x2c73620()*-0.677941);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71da0() {
   return (neuron0x2c738f0()*0.517236);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72270() {
   return (neuron0x2c73d70()*1.44354);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c722b0() {
   return (neuron0x2c741f0()*0.483148);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72b80() {
   return (neuron0x2c74670()*0.345744);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72bc0() {
   return (neuron0x2c74af0()*-0.197758);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73000() {
   return (neuron0x2c74f70()*-1.98928);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73040() {
   return (neuron0x2c753f0()*0.162493);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6e660() {
   return (neuron0x2c75870()*0.158775);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c726e0() {
   return (neuron0x2c6e8b0()*2.60425);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72720() {
   return (neuron0x2c6ec20()*-15.5423);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72760() {
   return (neuron0x2c6f0a0()*1.91282);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c727a0() {
   return (neuron0x2c6f520()*-0.339651);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c727e0() {
   return (neuron0x2c6fa30()*18.6201);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6e6a0() {
   return (neuron0x2c6feb0()*-17.2685);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74920() {
   return (neuron0x2c70330()*8.43448);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74960() {
   return (neuron0x2c70940()*1.4706);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74da0() {
   return (neuron0x2c70d30()*-22.751);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74de0() {
   return (neuron0x2c711b0()*1.1577);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75220() {
   return (neuron0x2c71630()*1.62837);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75260() {
   return (neuron0x2c71ab0()*0.732217);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c756a0() {
   return (neuron0x2c71fc0()*1.76678);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c756e0() {
   return (neuron0x2c70730()*1.05526);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75b20() {
   return (neuron0x2c728d0()*1.14987);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75b60() {
   return (neuron0x2c72d50()*1.57206);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ead0() {
   return (neuron0x2c73620()*-1.83994);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6eb10() {
   return (neuron0x2c738f0()*-1.1813);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73ba0() {
   return (neuron0x2c73d70()*2.01373);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73be0() {
   return (neuron0x2c741f0()*1.34095);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b7a970() {
   return (neuron0x2c74670()*0.290813);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2b7a9b0() {
   return (neuron0x2c74af0()*2.39668);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78230() {
   return (neuron0x2c74f70()*2.64773);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78270() {
   return (neuron0x2c753f0()*0.237045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c782b0() {
   return (neuron0x2c75870()*2.09312);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71df0() {
   return (neuron0x2c6e8b0()*0.833028);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71e30() {
   return (neuron0x2c6ec20()*-0.668612);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71e70() {
   return (neuron0x2c6f0a0()*-1.98045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71eb0() {
   return (neuron0x2c6f520()*0.056668);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78840() {
   return (neuron0x2c6fa30()*-3.46008);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78880() {
   return (neuron0x2c6feb0()*-0.609581);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c788c0() {
   return (neuron0x2c70330()*-0.831519);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78900() {
   return (neuron0x2c70940()*-2.2336);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78940() {
   return (neuron0x2c70d30()*-2.34893);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78980() {
   return (neuron0x2c711b0()*-0.0976605);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c789c0() {
   return (neuron0x2c71630()*1.20201);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78a00() {
   return (neuron0x2c71ab0()*1.50105);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78a40() {
   return (neuron0x2c71fc0()*0.0520293);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78a80() {
   return (neuron0x2c70730()*-0.556214);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78ac0() {
   return (neuron0x2c728d0()*-2.59939);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78b00() {
   return (neuron0x2c72d50()*-0.863372);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78480() {
   return (neuron0x2c73620()*0.461716);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c784c0() {
   return (neuron0x2c738f0()*-0.596252);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78c50() {
   return (neuron0x2c73d70()*-1.86573);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78c90() {
   return (neuron0x2c741f0()*-1.17022);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78cd0() {
   return (neuron0x2c74670()*-0.211752);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78d10() {
   return (neuron0x2c74af0()*0.159923);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78d50() {
   return (neuron0x2c74f70()*1.89185);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78d90() {
   return (neuron0x2c753f0()*-0.327929);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78dd0() {
   return (neuron0x2c75870()*-0.664558);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79150() {
   return (neuron0x2c6e8b0()*0.701311);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79190() {
   return (neuron0x2c6ec20()*1.4695);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c791d0() {
   return (neuron0x2c6f0a0()*1.92822);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79210() {
   return (neuron0x2c6f520()*0.213685);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79250() {
   return (neuron0x2c6fa30()*2.00235);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79290() {
   return (neuron0x2c6feb0()*1.91628);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c792d0() {
   return (neuron0x2c70330()*1.51323);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79310() {
   return (neuron0x2c70940()*2.43165);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79350() {
   return (neuron0x2c70d30()*2.29863);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79390() {
   return (neuron0x2c711b0()*1.34869);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c793d0() {
   return (neuron0x2c71630()*0.0468785);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79410() {
   return (neuron0x2c71ab0()*0.0179005);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79450() {
   return (neuron0x2c71fc0()*1.6338);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79490() {
   return (neuron0x2c70730()*0.275647);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c794d0() {
   return (neuron0x2c728d0()*1.79905);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79510() {
   return (neuron0x2c72d50()*1.42004);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78fa0() {
   return (neuron0x2c73620()*0.688721);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c78fe0() {
   return (neuron0x2c738f0()*2.13644);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79660() {
   return (neuron0x2c73d70()*1.33939);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c796a0() {
   return (neuron0x2c741f0()*2.2502);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c796e0() {
   return (neuron0x2c74670()*1.15175);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79720() {
   return (neuron0x2c74af0()*1.59887);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79760() {
   return (neuron0x2c74f70()*-0.154689);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c797a0() {
   return (neuron0x2c753f0()*0.206712);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c797e0() {
   return (neuron0x2c75870()*1.44177);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79b60() {
   return (neuron0x2c6e8b0()*0.171958);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79ba0() {
   return (neuron0x2c6ec20()*-0.583486);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79be0() {
   return (neuron0x2c6f0a0()*-1.19331);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79c20() {
   return (neuron0x2c6f520()*1.12972);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79c60() {
   return (neuron0x2c6fa30()*-1.29027);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79ca0() {
   return (neuron0x2c6feb0()*-0.094628);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79ce0() {
   return (neuron0x2c70330()*-0.4208);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79d20() {
   return (neuron0x2c70940()*-0.703933);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79d60() {
   return (neuron0x2c70d30()*-0.731451);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79da0() {
   return (neuron0x2c711b0()*0.198542);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79de0() {
   return (neuron0x2c71630()*0.445714);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79e20() {
   return (neuron0x2c71ab0()*1.24674);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79e60() {
   return (neuron0x2c71fc0()*-0.0940099);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79ea0() {
   return (neuron0x2c70730()*-1.17206);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79ee0() {
   return (neuron0x2c728d0()*-1.78535);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c79f20() {
   return (neuron0x2c72d50()*-1.074);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c799b0() {
   return (neuron0x2c73620()*0.890735);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c799f0() {
   return (neuron0x2c738f0()*-0.358684);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a070() {
   return (neuron0x2c73d70()*-0.46707);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a0b0() {
   return (neuron0x2c741f0()*-2.02826);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a0f0() {
   return (neuron0x2c74670()*0.286785);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a130() {
   return (neuron0x2c74af0()*0.114166);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a170() {
   return (neuron0x2c74f70()*1.86559);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a1b0() {
   return (neuron0x2c753f0()*-0.219675);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a1f0() {
   return (neuron0x2c75870()*0.330522);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a570() {
   return (neuron0x2c6e8b0()*0.132391);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a5b0() {
   return (neuron0x2c6ec20()*0.0324396);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a5f0() {
   return (neuron0x2c6f0a0()*-1.42358);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a630() {
   return (neuron0x2c6f520()*0.206352);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a670() {
   return (neuron0x2c6fa30()*-1.67743);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a6b0() {
   return (neuron0x2c6feb0()*-0.619197);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a6f0() {
   return (neuron0x2c70330()*0.119126);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77910() {
   return (neuron0x2c70940()*-1.44457);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77950() {
   return (neuron0x2c70d30()*-1.68124);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77990() {
   return (neuron0x2c711b0()*-0.460291);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c779d0() {
   return (neuron0x2c71630()*1.17768);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77a10() {
   return (neuron0x2c71ab0()*1.19068);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77a50() {
   return (neuron0x2c71fc0()*-0.00378522);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77a90() {
   return (neuron0x2c70730()*-0.616515);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77ad0() {
   return (neuron0x2c728d0()*-1.90321);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77b10() {
   return (neuron0x2c72d50()*-0.748391);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a3c0() {
   return (neuron0x2c73620()*-0.0340115);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7a400() {
   return (neuron0x2c738f0()*-0.317625);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77c60() {
   return (neuron0x2c73d70()*-1.07919);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77ca0() {
   return (neuron0x2c741f0()*-1.29004);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77ce0() {
   return (neuron0x2c74670()*-0.673649);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77d20() {
   return (neuron0x2c74af0()*-0.401955);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77d60() {
   return (neuron0x2c74f70()*0.835296);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77da0() {
   return (neuron0x2c753f0()*-0.0579157);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77de0() {
   return (neuron0x2c75870()*-0.81347);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c780d0() {
   return (neuron0x2c6e8b0()*-0.0540968);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b7d0() {
   return (neuron0x2c6ec20()*-0.788258);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b810() {
   return (neuron0x2c6f0a0()*-0.712268);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b850() {
   return (neuron0x2c6f520()*-1.01212);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b890() {
   return (neuron0x2c6fa30()*1.75509);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b8d0() {
   return (neuron0x2c6feb0()*0.278582);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b910() {
   return (neuron0x2c70330()*1.8846);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b950() {
   return (neuron0x2c70940()*-0.120309);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b990() {
   return (neuron0x2c70d30()*-3.72898);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b9d0() {
   return (neuron0x2c711b0()*0.219434);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ba10() {
   return (neuron0x2c71630()*0.955241);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ba50() {
   return (neuron0x2c71ab0()*0.396723);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ba90() {
   return (neuron0x2c71fc0()*0.299294);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bad0() {
   return (neuron0x2c70730()*2.34144);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bb10() {
   return (neuron0x2c728d0()*-0.93738);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bb50() {
   return (neuron0x2c72d50()*-0.251761);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77fb0() {
   return (neuron0x2c73620()*-0.274077);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c77ff0() {
   return (neuron0x2c738f0()*0.24924);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bca0() {
   return (neuron0x2c73d70()*-0.499104);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bce0() {
   return (neuron0x2c741f0()*0.466271);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bd20() {
   return (neuron0x2c74670()*0.878089);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bd60() {
   return (neuron0x2c74af0()*0.0218299);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bda0() {
   return (neuron0x2c74f70()*1.25333);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bde0() {
   return (neuron0x2c753f0()*-0.543109);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7be20() {
   return (neuron0x2c75870()*0.368952);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c1a0() {
   return (neuron0x2c6e8b0()*1.52972);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c1e0() {
   return (neuron0x2c6ec20()*1.69112);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c220() {
   return (neuron0x2c6f0a0()*-0.887824);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c260() {
   return (neuron0x2c6f520()*1.32629);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c2a0() {
   return (neuron0x2c6fa30()*-0.491655);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c2e0() {
   return (neuron0x2c6feb0()*0.147884);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c320() {
   return (neuron0x2c70330()*2.69131);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c360() {
   return (neuron0x2c70940()*-0.947497);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c3a0() {
   return (neuron0x2c70d30()*-5.29214);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c3e0() {
   return (neuron0x2c711b0()*1.02598);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c420() {
   return (neuron0x2c71630()*2.13821);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c460() {
   return (neuron0x2c71ab0()*2.62812);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c4a0() {
   return (neuron0x2c71fc0()*1.56964);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c4e0() {
   return (neuron0x2c70730()*-0.304035);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c520() {
   return (neuron0x2c728d0()*-2.17839);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c560() {
   return (neuron0x2c72d50()*-0.477871);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7bff0() {
   return (neuron0x2c73620()*0.244466);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c030() {
   return (neuron0x2c738f0()*0.15376);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c6b0() {
   return (neuron0x2c73d70()*0.0888515);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c6f0() {
   return (neuron0x2c741f0()*-0.506463);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c730() {
   return (neuron0x2c74670()*0.711861);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c770() {
   return (neuron0x2c74af0()*1.21436);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c7b0() {
   return (neuron0x2c74f70()*3.1151);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c7f0() {
   return (neuron0x2c753f0()*-0.679429);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7c830() {
   return (neuron0x2c75870()*1.37134);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cbb0() {
   return (neuron0x2c6e8b0()*-0.725119);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cbf0() {
   return (neuron0x2c6ec20()*0.422413);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cc30() {
   return (neuron0x2c6f0a0()*-0.544297);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cc70() {
   return (neuron0x2c6f520()*-0.633986);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ccb0() {
   return (neuron0x2c6fa30()*-0.146895);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ccf0() {
   return (neuron0x2c6feb0()*-0.507231);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cd30() {
   return (neuron0x2c70330()*0.0631162);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cd70() {
   return (neuron0x2c70940()*-0.224288);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cdb0() {
   return (neuron0x2c70d30()*2.07323);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cdf0() {
   return (neuron0x2c711b0()*0.245286);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ce30() {
   return (neuron0x2c71630()*-0.479931);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ce70() {
   return (neuron0x2c71ab0()*0.070303);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ceb0() {
   return (neuron0x2c71fc0()*-0.662254);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cef0() {
   return (neuron0x2c70730()*0.352182);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cf30() {
   return (neuron0x2c728d0()*0.208559);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7cf70() {
   return (neuron0x2c72d50()*-0.44289);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ca00() {
   return (neuron0x2c73620()*-0.855047);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ca40() {
   return (neuron0x2c738f0()*-0.0203002);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d0c0() {
   return (neuron0x2c73d70()*-1.03379);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d100() {
   return (neuron0x2c741f0()*0.165248);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d140() {
   return (neuron0x2c74670()*-0.255574);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d180() {
   return (neuron0x2c74af0()*-0.0803512);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d1c0() {
   return (neuron0x2c74f70()*-0.840571);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d200() {
   return (neuron0x2c753f0()*0.512417);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d240() {
   return (neuron0x2c75870()*-0.861722);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d5c0() {
   return (neuron0x2c6e8b0()*0.364804);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d600() {
   return (neuron0x2c6ec20()*0.561732);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d640() {
   return (neuron0x2c6f0a0()*0.406592);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d680() {
   return (neuron0x2c6f520()*-0.131889);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d6c0() {
   return (neuron0x2c6fa30()*0.605581);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d700() {
   return (neuron0x2c6feb0()*0.589531);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d740() {
   return (neuron0x2c70330()*0.635901);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d780() {
   return (neuron0x2c70940()*0.506954);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d7c0() {
   return (neuron0x2c70d30()*0.900536);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d800() {
   return (neuron0x2c711b0()*0.513235);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d840() {
   return (neuron0x2c71630()*-0.157234);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d880() {
   return (neuron0x2c71ab0()*-0.0827738);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d8c0() {
   return (neuron0x2c71fc0()*0.00302769);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d900() {
   return (neuron0x2c70730()*0.416606);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d940() {
   return (neuron0x2c728d0()*1.20443);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d980() {
   return (neuron0x2c72d50()*0.717839);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d410() {
   return (neuron0x2c73620()*0.18802);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7d450() {
   return (neuron0x2c738f0()*0.0902929);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7dad0() {
   return (neuron0x2c73d70()*0.400283);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7db10() {
   return (neuron0x2c741f0()*0.654316);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7db50() {
   return (neuron0x2c74670()*0.384025);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7db90() {
   return (neuron0x2c74af0()*0.0388194);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7dbd0() {
   return (neuron0x2c74f70()*-0.41607);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7dc10() {
   return (neuron0x2c753f0()*0.567906);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7dc50() {
   return (neuron0x2c75870()*0.117293);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7dfd0() {
   return (neuron0x2c6e8b0()*-0.0989669);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e010() {
   return (neuron0x2c6ec20()*-0.624578);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e050() {
   return (neuron0x2c6f0a0()*-1.69131);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e090() {
   return (neuron0x2c6f520()*-0.0923344);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e0d0() {
   return (neuron0x2c6fa30()*-2.55295);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e110() {
   return (neuron0x2c6feb0()*-1.12787);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e150() {
   return (neuron0x2c70330()*-0.882037);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e190() {
   return (neuron0x2c70940()*-1.69454);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e1d0() {
   return (neuron0x2c70d30()*-2.64011);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e210() {
   return (neuron0x2c711b0()*-0.377527);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e250() {
   return (neuron0x2c71630()*0.789768);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e290() {
   return (neuron0x2c71ab0()*1.0869);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e2d0() {
   return (neuron0x2c71fc0()*-0.723485);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e310() {
   return (neuron0x2c70730()*0.266204);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e350() {
   return (neuron0x2c728d0()*-2.23699);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e390() {
   return (neuron0x2c72d50()*-0.956709);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7de20() {
   return (neuron0x2c73620()*0.661916);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7de60() {
   return (neuron0x2c738f0()*-0.64718);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e4e0() {
   return (neuron0x2c73d70()*-0.885523);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e520() {
   return (neuron0x2c741f0()*-1.19947);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e560() {
   return (neuron0x2c74670()*-0.291734);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e5a0() {
   return (neuron0x2c74af0()*0.0535916);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e5e0() {
   return (neuron0x2c74f70()*0.883344);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e620() {
   return (neuron0x2c753f0()*-0.215328);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e660() {
   return (neuron0x2c75870()*-0.251896);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e9e0() {
   return (neuron0x2c6e8b0()*0.10102);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ea20() {
   return (neuron0x2c6ec20()*0.205796);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ea60() {
   return (neuron0x2c6f0a0()*1.12004);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eaa0() {
   return (neuron0x2c6f520()*0.0909975);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eae0() {
   return (neuron0x2c6fa30()*2.37478);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eb20() {
   return (neuron0x2c6feb0()*1.03735);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eb60() {
   return (neuron0x2c70330()*0.7522);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eba0() {
   return (neuron0x2c70940()*1.8745);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ebe0() {
   return (neuron0x2c70d30()*1.39817);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ec20() {
   return (neuron0x2c711b0()*-0.177896);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ec60() {
   return (neuron0x2c71630()*-0.602183);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eca0() {
   return (neuron0x2c71ab0()*-0.586498);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ece0() {
   return (neuron0x2c71fc0()*0.646191);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ed20() {
   return (neuron0x2c70730()*-0.316095);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ed60() {
   return (neuron0x2c728d0()*1.64249);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eda0() {
   return (neuron0x2c72d50()*1.1008);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e830() {
   return (neuron0x2c73620()*-0.240123);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7e870() {
   return (neuron0x2c738f0()*0.56823);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eef0() {
   return (neuron0x2c73d70()*0.942208);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ef30() {
   return (neuron0x2c741f0()*1.22823);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ef70() {
   return (neuron0x2c74670()*0.43068);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7efb0() {
   return (neuron0x2c74af0()*-0.465738);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7eff0() {
   return (neuron0x2c74f70()*-1.03651);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f030() {
   return (neuron0x2c753f0()*0.15222);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f070() {
   return (neuron0x2c75870()*-0.0152392);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f3f0() {
   return (neuron0x2c6e8b0()*-0.753577);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f430() {
   return (neuron0x2c6ec20()*-13.4045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f470() {
   return (neuron0x2c6f0a0()*2.85116);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f4b0() {
   return (neuron0x2c6f520()*-6.00042);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f4f0() {
   return (neuron0x2c6fa30()*16.9595);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f530() {
   return (neuron0x2c6feb0()*-6.70942);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f570() {
   return (neuron0x2c70330()*11.7727);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f5b0() {
   return (neuron0x2c70940()*3.27161);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f5f0() {
   return (neuron0x2c70d30()*-13.1577);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f630() {
   return (neuron0x2c711b0()*-1.16797);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f670() {
   return (neuron0x2c71630()*-1.78002);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f6b0() {
   return (neuron0x2c71ab0()*-1.68473);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f6f0() {
   return (neuron0x2c71fc0()*0.42735);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f730() {
   return (neuron0x2c70730()*2.82184);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f770() {
   return (neuron0x2c728d0()*2.28119);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f7b0() {
   return (neuron0x2c72d50()*1.73558);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f240() {
   return (neuron0x2c73620()*-8.15202);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f280() {
   return (neuron0x2c738f0()*0.344536);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f900() {
   return (neuron0x2c73d70()*3.12379);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f940() {
   return (neuron0x2c741f0()*3.36289);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f980() {
   return (neuron0x2c74670()*0.219001);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7f9c0() {
   return (neuron0x2c74af0()*-0.772887);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fa00() {
   return (neuron0x2c74f70()*-1.47426);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fa40() {
   return (neuron0x2c753f0()*0.293675);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fa80() {
   return (neuron0x2c75870()*0.285969);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fe00() {
   return (neuron0x2c6e8b0()*-0.423887);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fe40() {
   return (neuron0x2c6ec20()*0.997975);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fe80() {
   return (neuron0x2c6f0a0()*-0.580051);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fec0() {
   return (neuron0x2c6f520()*-2.27667);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ff00() {
   return (neuron0x2c6fa30()*-0.336909);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ff40() {
   return (neuron0x2c6feb0()*1.24965);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ff80() {
   return (neuron0x2c70330()*-3.05566);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7ffc0() {
   return (neuron0x2c70940()*-0.33086);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80000() {
   return (neuron0x2c70d30()*3.55129);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80040() {
   return (neuron0x2c711b0()*0.348888);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80080() {
   return (neuron0x2c71630()*0.509923);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c800c0() {
   return (neuron0x2c71ab0()*0.00385945);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80100() {
   return (neuron0x2c71fc0()*0.235368);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80140() {
   return (neuron0x2c70730()*-2.73608);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80180() {
   return (neuron0x2c728d0()*-0.672356);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c801c0() {
   return (neuron0x2c72d50()*-0.450789);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fc50() {
   return (neuron0x2c73620()*-0.697052);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7fc90() {
   return (neuron0x2c738f0()*0.310034);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80310() {
   return (neuron0x2c73d70()*-0.552872);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80350() {
   return (neuron0x2c741f0()*0.440159);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80390() {
   return (neuron0x2c74670()*0.456388);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c803d0() {
   return (neuron0x2c74af0()*-0.0709824);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80410() {
   return (neuron0x2c74f70()*1.02471);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80450() {
   return (neuron0x2c753f0()*-0.0227737);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80490() {
   return (neuron0x2c75870()*0.110451);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80810() {
   return (neuron0x2c6e8b0()*0.115098);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80850() {
   return (neuron0x2c6ec20()*1.0266);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80890() {
   return (neuron0x2c6f0a0()*0.380575);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c808d0() {
   return (neuron0x2c6f520()*0.259928);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80910() {
   return (neuron0x2c6fa30()*-1.20454);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80950() {
   return (neuron0x2c6feb0()*0.828337);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80990() {
   return (neuron0x2c70330()*0.362363);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c809d0() {
   return (neuron0x2c70940()*0.143806);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80a10() {
   return (neuron0x2c70d30()*-1.41388);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80a50() {
   return (neuron0x2c711b0()*0.916706);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80a90() {
   return (neuron0x2c71630()*0.678656);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80ad0() {
   return (neuron0x2c71ab0()*0.0867773);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80b10() {
   return (neuron0x2c71fc0()*0.553856);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80b50() {
   return (neuron0x2c70730()*-0.266061);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80b90() {
   return (neuron0x2c728d0()*0.0126947);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80bd0() {
   return (neuron0x2c72d50()*0.146135);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80660() {
   return (neuron0x2c73620()*-0.192806);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c806a0() {
   return (neuron0x2c738f0()*0.0550549);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80d20() {
   return (neuron0x2c73d70()*-0.604351);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80d60() {
   return (neuron0x2c741f0()*-0.731043);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80da0() {
   return (neuron0x2c74670()*1.07788);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80de0() {
   return (neuron0x2c74af0()*-0.150031);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80e20() {
   return (neuron0x2c74f70()*0.601604);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80e60() {
   return (neuron0x2c753f0()*0.253821);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c80ea0() {
   return (neuron0x2c75870()*0.553691);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c81220() {
   return (neuron0x2c6e8b0()*0.712713);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ea40() {
   return (neuron0x2c6ec20()*0.436654);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ea80() {
   return (neuron0x2c6f0a0()*0.000565271);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ee40() {
   return (neuron0x2c6f520()*0.30839);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6ee80() {
   return (neuron0x2c6fa30()*1.16446);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f2c0() {
   return (neuron0x2c6feb0()*1.06455);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f300() {
   return (neuron0x2c70330()*0.130237);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f740() {
   return (neuron0x2c70940()*-0.0931949);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6f780() {
   return (neuron0x2c70d30()*-0.753241);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fc50() {
   return (neuron0x2c711b0()*-0.412913);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6fc90() {
   return (neuron0x2c71630()*0.292932);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c700d0() {
   return (neuron0x2c71ab0()*0.486086);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70110() {
   return (neuron0x2c71fc0()*0.162073);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70550() {
   return (neuron0x2c70730()*-2.7318);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70590() {
   return (neuron0x2c728d0()*0.0432546);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70ad0() {
   return (neuron0x2c72d50()*-0.00984916);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70b10() {
   return (neuron0x2c73620()*0.036373);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70f50() {
   return (neuron0x2c738f0()*0.321594);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c70f90() {
   return (neuron0x2c73d70()*-0.269001);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c713d0() {
   return (neuron0x2c741f0()*-0.120922);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71410() {
   return (neuron0x2c74670()*-0.466826);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71850() {
   return (neuron0x2c74af0()*2.50968);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71890() {
   return (neuron0x2c74f70()*0.523319);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71cd0() {
   return (neuron0x2c753f0()*-0.22469);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c71d10() {
   return (neuron0x2c75870()*0.570045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b690() {
   return (neuron0x2c6e8b0()*1.81709);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c7b6d0() {
   return (neuron0x2c6ec20()*0.287938);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72f70() {
   return (neuron0x2c6f0a0()*-1.12268);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72fb0() {
   return (neuron0x2c6f520()*0.97619);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c81070() {
   return (neuron0x2c6fa30()*-3.12224);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c810b0() {
   return (neuron0x2c6feb0()*-1.73085);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6e320() {
   return (neuron0x2c70330()*1.87259);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6e360() {
   return (neuron0x2c70940()*-2.15775);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73b10() {
   return (neuron0x2c70d30()*2.50465);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73b50() {
   return (neuron0x2c711b0()*2.14448);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73f90() {
   return (neuron0x2c71630()*0.804542);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c73fd0() {
   return (neuron0x2c71ab0()*2.09001);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74410() {
   return (neuron0x2c71fc0()*0.746191);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74450() {
   return (neuron0x2c70730()*1.31175);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74890() {
   return (neuron0x2c728d0()*-2.88089);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c748d0() {
   return (neuron0x2c72d50()*-0.872045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74d10() {
   return (neuron0x2c73620()*0.841183);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c74d50() {
   return (neuron0x2c738f0()*0.63275);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75190() {
   return (neuron0x2c73d70()*-1.15211);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c751d0() {
   return (neuron0x2c741f0()*0.243263);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75610() {
   return (neuron0x2c74670()*2.21121);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75650() {
   return (neuron0x2c74af0()*0.78461);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75a90() {
   return (neuron0x2c74f70()*2.79657);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c75ad0() {
   return (neuron0x2c753f0()*-0.83802);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c721e0() {
   return (neuron0x2c75870()*0.853246);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c72220() {
   return (neuron0x2c6e8b0()*0.92436);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84490() {
   return (neuron0x2c6ec20()*0.734979);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c844d0() {
   return (neuron0x2c6f0a0()*-1.62805);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84510() {
   return (neuron0x2c6f520()*0.196248);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84550() {
   return (neuron0x2c6fa30()*-1.79294);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84590() {
   return (neuron0x2c6feb0()*0.091519);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c845d0() {
   return (neuron0x2c70330()*-0.131123);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84610() {
   return (neuron0x2c70940()*-1.56577);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84650() {
   return (neuron0x2c70d30()*-3.16634);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84690() {
   return (neuron0x2c711b0()*0.144014);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c846d0() {
   return (neuron0x2c71630()*1.08909);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84710() {
   return (neuron0x2c71ab0()*1.27747);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84750() {
   return (neuron0x2c71fc0()*0.482066);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84790() {
   return (neuron0x2c70730()*-0.334907);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c847d0() {
   return (neuron0x2c728d0()*-2.34259);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84810() {
   return (neuron0x2c72d50()*-1.33316);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c842e0() {
   return (neuron0x2c73620()*1.0732);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84320() {
   return (neuron0x2c738f0()*-0.700621);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84960() {
   return (neuron0x2c73d70()*-0.921683);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c849a0() {
   return (neuron0x2c741f0()*-0.903018);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c849e0() {
   return (neuron0x2c74670()*0.696692);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84a20() {
   return (neuron0x2c74af0()*0.24774);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84a60() {
   return (neuron0x2c74f70()*2.02794);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84aa0() {
   return (neuron0x2c753f0()*-0.420195);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84ae0() {
   return (neuron0x2c75870()*0.174854);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84e60() {
   return (neuron0x2c6e8b0()*0.525451);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84ea0() {
   return (neuron0x2c6ec20()*5.45347);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84ee0() {
   return (neuron0x2c6f0a0()*-0.935409);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84f20() {
   return (neuron0x2c6f520()*1.24531);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84f60() {
   return (neuron0x2c6fa30()*-7.21577);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84fa0() {
   return (neuron0x2c6feb0()*4.45531);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84fe0() {
   return (neuron0x2c70330()*-7.52376);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85020() {
   return (neuron0x2c70940()*-0.854441);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85060() {
   return (neuron0x2c70d30()*4.90341);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c850a0() {
   return (neuron0x2c711b0()*0.7451);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c850e0() {
   return (neuron0x2c71630()*0.384742);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85120() {
   return (neuron0x2c71ab0()*0.544046);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85160() {
   return (neuron0x2c71fc0()*-0.079425);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c851a0() {
   return (neuron0x2c70730()*-1.40769);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c851e0() {
   return (neuron0x2c728d0()*-1.90045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85220() {
   return (neuron0x2c72d50()*-1.08083);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84cb0() {
   return (neuron0x2c73620()*2.54194);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c84cf0() {
   return (neuron0x2c738f0()*-0.586083);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85370() {
   return (neuron0x2c73d70()*-0.581256);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c853b0() {
   return (neuron0x2c741f0()*-0.700118);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c853f0() {
   return (neuron0x2c74670()*-1.34413);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85430() {
   return (neuron0x2c74af0()*-0.316296);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85470() {
   return (neuron0x2c74f70()*1.19826);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c854b0() {
   return (neuron0x2c753f0()*-1.23316);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c854f0() {
   return (neuron0x2c75870()*0.42232);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85870() {
   return (neuron0x2c6e8b0()*-1.27532);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c858b0() {
   return (neuron0x2c6ec20()*-0.657905);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c858f0() {
   return (neuron0x2c6f0a0()*1.99937);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85930() {
   return (neuron0x2c6f520()*-2.30797);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85970() {
   return (neuron0x2c6fa30()*1.62861);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c859b0() {
   return (neuron0x2c6feb0()*0.179123);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c859f0() {
   return (neuron0x2c70330()*3.59323);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85a30() {
   return (neuron0x2c70940()*2.06798);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85a70() {
   return (neuron0x2c70d30()*2.29574);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85ab0() {
   return (neuron0x2c711b0()*0.244266);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85af0() {
   return (neuron0x2c71630()*-0.832401);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85b30() {
   return (neuron0x2c71ab0()*-0.850424);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85b70() {
   return (neuron0x2c71fc0()*-0.426922);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85bb0() {
   return (neuron0x2c70730()*0.0167134);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85bf0() {
   return (neuron0x2c728d0()*2.08861);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85c30() {
   return (neuron0x2c72d50()*1.01239);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c856c0() {
   return (neuron0x2c73620()*-0.211564);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85700() {
   return (neuron0x2c738f0()*1.91089);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85d80() {
   return (neuron0x2c73d70()*1.45626);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85dc0() {
   return (neuron0x2c741f0()*0.0401266);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85e00() {
   return (neuron0x2c74670()*0.503485);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85e40() {
   return (neuron0x2c74af0()*-0.292937);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85e80() {
   return (neuron0x2c74f70()*-0.552335);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85ec0() {
   return (neuron0x2c753f0()*0.264394);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c85f00() {
   return (neuron0x2c75870()*-0.437507);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86280() {
   return (neuron0x2c6e8b0()*-0.816584);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c862c0() {
   return (neuron0x2c6ec20()*-1.56397);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86300() {
   return (neuron0x2c6f0a0()*1.294);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86340() {
   return (neuron0x2c6f520()*-0.00970085);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86380() {
   return (neuron0x2c6fa30()*3.45785);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c863c0() {
   return (neuron0x2c6feb0()*0.465755);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86400() {
   return (neuron0x2c70330()*-1.17066);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86440() {
   return (neuron0x2c70940()*0.667566);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86480() {
   return (neuron0x2c70d30()*0.476067);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c864c0() {
   return (neuron0x2c711b0()*-0.763732);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86500() {
   return (neuron0x2c71630()*-0.381279);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86540() {
   return (neuron0x2c71ab0()*-0.489699);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86580() {
   return (neuron0x2c71fc0()*0.00528276);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c865c0() {
   return (neuron0x2c70730()*-0.53769);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86600() {
   return (neuron0x2c728d0()*1.86289);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86640() {
   return (neuron0x2c72d50()*1.31829);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c860d0() {
   return (neuron0x2c73620()*-1.17388);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86110() {
   return (neuron0x2c738f0()*1.19399);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86790() {
   return (neuron0x2c73d70()*0.410241);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c867d0() {
   return (neuron0x2c741f0()*0.50538);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86810() {
   return (neuron0x2c74670()*-0.661039);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86850() {
   return (neuron0x2c74af0()*-0.444459);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86890() {
   return (neuron0x2c74f70()*-0.519726);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c868d0() {
   return (neuron0x2c753f0()*0.342146);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86910() {
   return (neuron0x2c75870()*-0.573724);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86c90() {
   return (neuron0x2c6e8b0()*-1.38895);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86cd0() {
   return (neuron0x2c6ec20()*-9.48625);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86d10() {
   return (neuron0x2c6f0a0()*2.44519);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86d50() {
   return (neuron0x2c6f520()*-0.508286);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86d90() {
   return (neuron0x2c6fa30()*11.6465);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86dd0() {
   return (neuron0x2c6feb0()*-2.47966);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86e10() {
   return (neuron0x2c70330()*7.65899);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86e50() {
   return (neuron0x2c70940()*2.44149);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86e90() {
   return (neuron0x2c70d30()*-10.0954);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86ed0() {
   return (neuron0x2c711b0()*-0.496613);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86f10() {
   return (neuron0x2c71630()*-2.02234);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86f50() {
   return (neuron0x2c71ab0()*-1.71238);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86f90() {
   return (neuron0x2c71fc0()*-0.334772);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86fd0() {
   return (neuron0x2c70730()*3.74071);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87010() {
   return (neuron0x2c728d0()*1.81948);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87050() {
   return (neuron0x2c72d50()*2.00991);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86ae0() {
   return (neuron0x2c73620()*-7.47863);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c86b20() {
   return (neuron0x2c738f0()*1.4036);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c871a0() {
   return (neuron0x2c73d70()*1.91819);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c871e0() {
   return (neuron0x2c741f0()*0.891399);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87220() {
   return (neuron0x2c74670()*-0.95014);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87260() {
   return (neuron0x2c74af0()*-2.05869);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c872a0() {
   return (neuron0x2c74f70()*-1.68403);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c872e0() {
   return (neuron0x2c753f0()*1.0184);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87320() {
   return (neuron0x2c75870()*-0.499749);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c876a0() {
   return (neuron0x2c6e8b0()*0.652693);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c876e0() {
   return (neuron0x2c6ec20()*4.6161);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87720() {
   return (neuron0x2c6f0a0()*-1.32156);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87760() {
   return (neuron0x2c6f520()*5.00316);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c877a0() {
   return (neuron0x2c6fa30()*-6.35357);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c877e0() {
   return (neuron0x2c6feb0()*1.69993);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87820() {
   return (neuron0x2c70330()*-7.72035);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87860() {
   return (neuron0x2c70940()*-1.59204);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c878a0() {
   return (neuron0x2c70d30()*2.13386);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c878e0() {
   return (neuron0x2c711b0()*-0.338777);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87920() {
   return (neuron0x2c71630()*1.03461);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87960() {
   return (neuron0x2c71ab0()*1.38409);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c879a0() {
   return (neuron0x2c71fc0()*-0.102448);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c879e0() {
   return (neuron0x2c70730()*-0.389041);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87a20() {
   return (neuron0x2c728d0()*-1.47253);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87a60() {
   return (neuron0x2c72d50()*-1.02079);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c874f0() {
   return (neuron0x2c73620()*3.45026);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87530() {
   return (neuron0x2c738f0()*-0.679864);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87bb0() {
   return (neuron0x2c73d70()*-0.655409);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87bf0() {
   return (neuron0x2c741f0()*-1.08063);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87c30() {
   return (neuron0x2c74670()*-0.00561838);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87c70() {
   return (neuron0x2c74af0()*-0.366303);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87cb0() {
   return (neuron0x2c74f70()*1.18106);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87cf0() {
   return (neuron0x2c753f0()*-0.0425029);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87d30() {
   return (neuron0x2c75870()*-0.243312);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c880b0() {
   return (neuron0x2c6e8b0()*1.20348);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c880f0() {
   return (neuron0x2c6ec20()*0.346076);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88130() {
   return (neuron0x2c6f0a0()*-1.74464);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88170() {
   return (neuron0x2c6f520()*4.34509);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c881b0() {
   return (neuron0x2c6fa30()*-1.31381);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c881f0() {
   return (neuron0x2c6feb0()*0.120047);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88230() {
   return (neuron0x2c70330()*-4.59985);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88270() {
   return (neuron0x2c70940()*-1.94204);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c882b0() {
   return (neuron0x2c70d30()*-1.50349);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c882f0() {
   return (neuron0x2c711b0()*-0.0927998);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88330() {
   return (neuron0x2c71630()*1.43516);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88370() {
   return (neuron0x2c71ab0()*1.23144);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c883b0() {
   return (neuron0x2c71fc0()*0.409967);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c883f0() {
   return (neuron0x2c70730()*0.531469);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88430() {
   return (neuron0x2c728d0()*-1.4835);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88470() {
   return (neuron0x2c72d50()*-0.252957);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87f00() {
   return (neuron0x2c73620()*-0.264115);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c87f40() {
   return (neuron0x2c738f0()*-0.00709393);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c885c0() {
   return (neuron0x2c73d70()*-1.28744);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88600() {
   return (neuron0x2c741f0()*-0.125224);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88640() {
   return (neuron0x2c74670()*0.0483908);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88680() {
   return (neuron0x2c74af0()*0.917612);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c886c0() {
   return (neuron0x2c74f70()*1.60028);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88700() {
   return (neuron0x2c753f0()*0.0634444);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88740() {
   return (neuron0x2c75870()*0.763972);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88ac0() {
   return (neuron0x2c6e8b0()*-0.250852);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88b00() {
   return (neuron0x2c6ec20()*0.988351);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88b40() {
   return (neuron0x2c6f0a0()*0.56903);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88b80() {
   return (neuron0x2c6f520()*-0.104138);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88bc0() {
   return (neuron0x2c6fa30()*1.79009);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88c00() {
   return (neuron0x2c6feb0()*-0.0907953);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88c40() {
   return (neuron0x2c70330()*1.19029);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88c80() {
   return (neuron0x2c70940()*0.639631);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88cc0() {
   return (neuron0x2c70d30()*1.32987);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88d00() {
   return (neuron0x2c711b0()*-0.165954);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88d40() {
   return (neuron0x2c71630()*-0.230263);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88d80() {
   return (neuron0x2c71ab0()*-0.732893);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88dc0() {
   return (neuron0x2c71fc0()*-0.0219167);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88e00() {
   return (neuron0x2c70730()*-0.425114);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88e40() {
   return (neuron0x2c728d0()*0.966337);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88e80() {
   return (neuron0x2c72d50()*0.628189);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88910() {
   return (neuron0x2c73620()*0.0555804);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88950() {
   return (neuron0x2c738f0()*1.17316);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c88fd0() {
   return (neuron0x2c73d70()*0.778588);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89010() {
   return (neuron0x2c741f0()*-0.0452812);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89050() {
   return (neuron0x2c74670()*0.473877);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89090() {
   return (neuron0x2c74af0()*-0.268235);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c890d0() {
   return (neuron0x2c74f70()*0.201477);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89110() {
   return (neuron0x2c753f0()*0.190836);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89150() {
   return (neuron0x2c75870()*-0.162066);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c893b0() {
   return (neuron0x2c77780()*-1.42148);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c893f0() {
   return (neuron0x2c72550()*-10.7987);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89430() {
   return (neuron0x2c782f0()*1.95725);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89470() {
   return (neuron0x2c78e10()*-11.3504);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c894b0() {
   return (neuron0x2c79820()*1.7396);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c894f0() {
   return (neuron0x2c7a230()*5.01345);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89530() {
   return (neuron0x2c77e20()*3.24091);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89570() {
   return (neuron0x2c7be60()*-9.96045);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c895b0() {
   return (neuron0x2c7c870()*4.00627);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c895f0() {
   return (neuron0x2c7d280()*-0.854647);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89630() {
   return (neuron0x2c7dc90()*3.50376);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89670() {
   return (neuron0x2c7e6a0()*-3.78096);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c896b0() {
   return (neuron0x2c7f0b0()*8.51649);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c896f0() {
   return (neuron0x2c7fac0()*3.38121);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89730() {
   return (neuron0x2c804d0()*3.80233);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89770() {
   return (neuron0x2c80ee0()*-3.3869);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6e780() {
   return (neuron0x2c7b500()*6.68451);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c6e7c0() {
   return (neuron0x2c84150()*-0.787733);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c898c0() {
   return (neuron0x2c84b20()*9.18932);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89900() {
   return (neuron0x2c85530()*9.4296);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89940() {
   return (neuron0x2c85f40()*-1.31601);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89980() {
   return (neuron0x2c86950()*5.71409);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c899c0() {
   return (neuron0x2c87360()*-3.11297);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89a00() {
   return (neuron0x2c87d70()*-5.45727);
}

double nnFunc_1C_25_25hi_5000ep_weight::synapse0x2c89a40() {
   return (neuron0x2c88780()*3.86343);
}

