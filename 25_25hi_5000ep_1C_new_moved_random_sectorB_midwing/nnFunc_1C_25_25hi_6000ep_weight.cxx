#include "25_25hi_5000ep_1C_new_moved_random_sectorB_midwing/nnFunc_1C_25_25hi_6000ep_weight.h"
#include <cmath>

double nnFunc_1C_25_25hi_6000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x25c7d50();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_6000ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x25c7d50();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ac2c0() {
   return input0;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ac600() {
   return input1;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ac940() {
   return input2;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25acc80() {
   return input3;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25acfc0() {
   return input4;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25ad430() {
   double input = 8.58236;
   input += synapse0x259b5d0();
   input += synapse0x25ad6e0();
   input += synapse0x25ad720();
   input += synapse0x25ad760();
   input += synapse0x25ad7a0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ad430() {
   double input = input0x25ad430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25ad7e0() {
   double input = 1.05295;
   input += synapse0x25adb20();
   input += synapse0x25adb60();
   input += synapse0x25adba0();
   input += synapse0x25adbe0();
   input += synapse0x25adc20();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ad7e0() {
   double input = input0x25ad7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25adc60() {
   double input = 1.04257;
   input += synapse0x25adfa0();
   input += synapse0x25adfe0();
   input += synapse0x25ae020();
   input += synapse0x25ae060();
   input += synapse0x25ae0a0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25adc60() {
   double input = input0x25adc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25ae0e0() {
   double input = -27.8986;
   input += synapse0x25ae420();
   input += synapse0x25ae460();
   input += synapse0x2426ad0();
   input += synapse0x2426b10();
   input += synapse0x25ae5b0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ae0e0() {
   double input = input0x25ae0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25ae5f0() {
   double input = 18.0269;
   input += synapse0x25ae930();
   input += synapse0x25ae970();
   input += synapse0x25ae9b0();
   input += synapse0x25ae9f0();
   input += synapse0x25aea30();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ae5f0() {
   double input = input0x25ae5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25aea70() {
   double input = 0.988429;
   input += synapse0x25aedb0();
   input += synapse0x25aedf0();
   input += synapse0x25aee30();
   input += synapse0x25aee70();
   input += synapse0x25aeeb0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25aea70() {
   double input = input0x25aea70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25aeef0() {
   double input = -2.69805;
   input += synapse0x25af230();
   input += synapse0x25af270();
   input += synapse0x25af2b0();
   input += synapse0x25ae4a0();
   input += synapse0x25ae4e0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25aeef0() {
   double input = input0x25aeef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25af500() {
   double input = -1.4131;
   input += synapse0x25af7b0();
   input += synapse0x25af7f0();
   input += synapse0x25af830();
   input += synapse0x25af870();
   input += synapse0x25af8b0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25af500() {
   double input = input0x25af500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25af8f0() {
   double input = -1.12835;
   input += synapse0x25afc30();
   input += synapse0x25afc70();
   input += synapse0x25afcb0();
   input += synapse0x25afcf0();
   input += synapse0x25afd30();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25af8f0() {
   double input = input0x25af8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25afd70() {
   double input = -1.49147;
   input += synapse0x25b00b0();
   input += synapse0x25b00f0();
   input += synapse0x25b0130();
   input += synapse0x25b0170();
   input += synapse0x25b01b0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25afd70() {
   double input = input0x25afd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b01f0() {
   double input = 0.362693;
   input += synapse0x25b0530();
   input += synapse0x25b0570();
   input += synapse0x25b05b0();
   input += synapse0x25b05f0();
   input += synapse0x25b0630();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b01f0() {
   double input = input0x25b01f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b0670() {
   double input = -1.09319;
   input += synapse0x2426920();
   input += synapse0x2426960();
   input += synapse0x25b0ac0();
   input += synapse0x25b0b00();
   input += synapse0x25b0b40();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b0670() {
   double input = input0x25b0670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b0b80() {
   double input = 1.9048;
   input += synapse0x25b0ec0();
   input += synapse0x25b0f00();
   input += synapse0x25b0f40();
   input += synapse0x25b0f80();
   input += synapse0x25b0fc0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b0b80() {
   double input = input0x25b0b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25347b0() {
   double input = -5.45948;
   input += synapse0x2534940();
   input += synapse0x259b570();
   input += synapse0x25af4a0();
   input += synapse0x25b1410();
   input += synapse0x25b1450();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25347b0() {
   double input = input0x25347b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b1490() {
   double input = -0.642708;
   input += synapse0x25b17d0();
   input += synapse0x25b1810();
   input += synapse0x25b1850();
   input += synapse0x25b1890();
   input += synapse0x25b18d0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b1490() {
   double input = input0x25b1490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b1910() {
   double input = -23.3947;
   input += synapse0x25b1c50();
   input += synapse0x25ac4e0();
   input += synapse0x25ac520();
   input += synapse0x25ac820();
   input += synapse0x25ac860();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b1910() {
   double input = input0x25b1910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b21e0() {
   double input = -1.46534;
   input += synapse0x25b2370();
   input += synapse0x25b23b0();
   input += synapse0x25b23f0();
   input += synapse0x25b2430();
   input += synapse0x25b2470();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b21e0() {
   double input = input0x25b21e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b24b0() {
   double input = 1.89248;
   input += synapse0x25b27f0();
   input += synapse0x25b2830();
   input += synapse0x25b2870();
   input += synapse0x25b28b0();
   input += synapse0x25b28f0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b24b0() {
   double input = input0x25b24b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b2930() {
   double input = 33.8568;
   input += synapse0x25b2c70();
   input += synapse0x25b2cb0();
   input += synapse0x25b2cf0();
   input += synapse0x25b2d30();
   input += synapse0x25b2d70();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b2930() {
   double input = input0x25b2930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b2db0() {
   double input = -0.0152437;
   input += synapse0x25b30f0();
   input += synapse0x25b3130();
   input += synapse0x25b3170();
   input += synapse0x25b31b0();
   input += synapse0x25b31f0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b2db0() {
   double input = input0x25b2db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b3230() {
   double input = -2.50868;
   input += synapse0x25b3570();
   input += synapse0x25b35b0();
   input += synapse0x25b35f0();
   input += synapse0x25b3630();
   input += synapse0x25b3670();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b3230() {
   double input = input0x25b3230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b36b0() {
   double input = 1.47128;
   input += synapse0x25b39f0();
   input += synapse0x25b3a30();
   input += synapse0x25b3a70();
   input += synapse0x25b3ab0();
   input += synapse0x25b3af0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b36b0() {
   double input = input0x25b36b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b3b30() {
   double input = -0.298572;
   input += synapse0x25b3e70();
   input += synapse0x25b3eb0();
   input += synapse0x25b3ef0();
   input += synapse0x25b3f30();
   input += synapse0x25b3f70();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b3b30() {
   double input = input0x25b3b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b3fb0() {
   double input = 11.3884;
   input += synapse0x25b42f0();
   input += synapse0x25b4330();
   input += synapse0x25b4370();
   input += synapse0x25b43b0();
   input += synapse0x25b43f0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b3fb0() {
   double input = input0x25b3fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b4430() {
   double input = -1.40329;
   input += synapse0x25b4770();
   input += synapse0x25b47b0();
   input += synapse0x25b47f0();
   input += synapse0x25b4830();
   input += synapse0x25b4870();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b4430() {
   double input = input0x25b4430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b6340() {
   double input = -0.275974;
   input += synapse0x25ae390();
   input += synapse0x25ae3d0();
   input += synapse0x25ae8a0();
   input += synapse0x25ae8e0();
   input += synapse0x25aed20();
   input += synapse0x25aed60();
   input += synapse0x25af1a0();
   input += synapse0x25af1e0();
   input += synapse0x25af720();
   input += synapse0x25af760();
   input += synapse0x25afba0();
   input += synapse0x25afbe0();
   input += synapse0x25b0020();
   input += synapse0x25b0060();
   input += synapse0x25b04a0();
   input += synapse0x25b04e0();
   input += synapse0x25b0920();
   input += synapse0x25b0960();
   input += synapse0x25b0e30();
   input += synapse0x25b0e70();
   input += synapse0x25af410();
   input += synapse0x25af450();
   input += synapse0x25b1740();
   input += synapse0x25b1780();
   input += synapse0x25b1bc0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b6340() {
   double input = input0x25b6340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b1110() {
   double input = -1.62972;
   input += synapse0x25b12a0();
   input += synapse0x25b12e0();
   input += synapse0x25b1320();
   input += synapse0x25b1360();
   input += synapse0x25b13a0();
   input += synapse0x25b1c00();
   input += synapse0x25b3060();
   input += synapse0x25b30a0();
   input += synapse0x25b34e0();
   input += synapse0x25b3520();
   input += synapse0x25b3960();
   input += synapse0x25b39a0();
   input += synapse0x25b3de0();
   input += synapse0x25b3e20();
   input += synapse0x25b4260();
   input += synapse0x25b42a0();
   input += synapse0x25b46e0();
   input += synapse0x25b4720();
   input += synapse0x25ad650();
   input += synapse0x25ad690();
   input += synapse0x25ad1e0();
   input += synapse0x25ad220();
   input += synapse0x25b6df0();
   input += synapse0x25b6e30();
   input += synapse0x25b6e70();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b1110() {
   double input = input0x25b1110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b6eb0() {
   double input = -0.610641;
   input += synapse0x25b09b0();
   input += synapse0x25b09f0();
   input += synapse0x25b0a30();
   input += synapse0x25b0a70();
   input += synapse0x25b7400();
   input += synapse0x25b7440();
   input += synapse0x25b7480();
   input += synapse0x25b74c0();
   input += synapse0x25b7500();
   input += synapse0x25b7540();
   input += synapse0x25b7580();
   input += synapse0x25b75c0();
   input += synapse0x25b7600();
   input += synapse0x25b7640();
   input += synapse0x25b7680();
   input += synapse0x25b76c0();
   input += synapse0x25b7040();
   input += synapse0x25b7080();
   input += synapse0x25b7810();
   input += synapse0x25b7850();
   input += synapse0x25b7890();
   input += synapse0x25b78d0();
   input += synapse0x25b7910();
   input += synapse0x25b7950();
   input += synapse0x25b7990();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b6eb0() {
   double input = input0x25b6eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b79d0() {
   double input = -1.38547;
   input += synapse0x25b7d10();
   input += synapse0x25b7d50();
   input += synapse0x25b7d90();
   input += synapse0x25b7dd0();
   input += synapse0x25b7e10();
   input += synapse0x25b7e50();
   input += synapse0x25b7e90();
   input += synapse0x25b7ed0();
   input += synapse0x25b7f10();
   input += synapse0x25b7f50();
   input += synapse0x25b7f90();
   input += synapse0x25b7fd0();
   input += synapse0x25b8010();
   input += synapse0x25b8050();
   input += synapse0x25b8090();
   input += synapse0x25b80d0();
   input += synapse0x25b7b60();
   input += synapse0x25b7ba0();
   input += synapse0x25b8220();
   input += synapse0x25b8260();
   input += synapse0x25b82a0();
   input += synapse0x25b82e0();
   input += synapse0x25b8320();
   input += synapse0x25b8360();
   input += synapse0x25b83a0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b79d0() {
   double input = input0x25b79d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b83e0() {
   double input = 1.20349;
   input += synapse0x25b8720();
   input += synapse0x25b8760();
   input += synapse0x25b87a0();
   input += synapse0x25b87e0();
   input += synapse0x25b8820();
   input += synapse0x25b8860();
   input += synapse0x25b88a0();
   input += synapse0x25b88e0();
   input += synapse0x25b8920();
   input += synapse0x25b8960();
   input += synapse0x25b89a0();
   input += synapse0x25b89e0();
   input += synapse0x25b8a20();
   input += synapse0x25b8a60();
   input += synapse0x25b8aa0();
   input += synapse0x25b8ae0();
   input += synapse0x25b8570();
   input += synapse0x25b85b0();
   input += synapse0x25b8c30();
   input += synapse0x25b8c70();
   input += synapse0x25b8cb0();
   input += synapse0x25b8cf0();
   input += synapse0x25b8d30();
   input += synapse0x25b8d70();
   input += synapse0x25b8db0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b83e0() {
   double input = input0x25b83e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b8df0() {
   double input = -2.34424;
   input += synapse0x25b9130();
   input += synapse0x25b9170();
   input += synapse0x25b91b0();
   input += synapse0x25b91f0();
   input += synapse0x25b9230();
   input += synapse0x25b9270();
   input += synapse0x25b92b0();
   input += synapse0x25b64d0();
   input += synapse0x25b6510();
   input += synapse0x25b6550();
   input += synapse0x25b6590();
   input += synapse0x25b65d0();
   input += synapse0x25b6610();
   input += synapse0x25b6650();
   input += synapse0x25b6690();
   input += synapse0x25b66d0();
   input += synapse0x25b8f80();
   input += synapse0x25b8fc0();
   input += synapse0x25b6820();
   input += synapse0x25b6860();
   input += synapse0x25b68a0();
   input += synapse0x25b68e0();
   input += synapse0x25b6920();
   input += synapse0x25b6960();
   input += synapse0x25b69a0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b8df0() {
   double input = input0x25b8df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25b69e0() {
   double input = 0.375978;
   input += synapse0x25b6c90();
   input += synapse0x25ba390();
   input += synapse0x25ba3d0();
   input += synapse0x25ba410();
   input += synapse0x25ba450();
   input += synapse0x25ba490();
   input += synapse0x25ba4d0();
   input += synapse0x25ba510();
   input += synapse0x25ba550();
   input += synapse0x25ba590();
   input += synapse0x25ba5d0();
   input += synapse0x25ba610();
   input += synapse0x25ba650();
   input += synapse0x25ba690();
   input += synapse0x25ba6d0();
   input += synapse0x25ba710();
   input += synapse0x25b6b70();
   input += synapse0x25b6bb0();
   input += synapse0x25ba860();
   input += synapse0x25ba8a0();
   input += synapse0x25ba8e0();
   input += synapse0x25ba920();
   input += synapse0x25ba960();
   input += synapse0x25ba9a0();
   input += synapse0x25ba9e0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25b69e0() {
   double input = input0x25b69e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25baa20() {
   double input = 1.00005;
   input += synapse0x25bad60();
   input += synapse0x25bada0();
   input += synapse0x25bade0();
   input += synapse0x25bae20();
   input += synapse0x25bae60();
   input += synapse0x25baea0();
   input += synapse0x25baee0();
   input += synapse0x25baf20();
   input += synapse0x25baf60();
   input += synapse0x25bafa0();
   input += synapse0x25bafe0();
   input += synapse0x25bb020();
   input += synapse0x25bb060();
   input += synapse0x25bb0a0();
   input += synapse0x25bb0e0();
   input += synapse0x25bb120();
   input += synapse0x25babb0();
   input += synapse0x25babf0();
   input += synapse0x25bb270();
   input += synapse0x25bb2b0();
   input += synapse0x25bb2f0();
   input += synapse0x25bb330();
   input += synapse0x25bb370();
   input += synapse0x25bb3b0();
   input += synapse0x25bb3f0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25baa20() {
   double input = input0x25baa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bb430() {
   double input = -0.0784039;
   input += synapse0x25bb770();
   input += synapse0x25bb7b0();
   input += synapse0x25bb7f0();
   input += synapse0x25bb830();
   input += synapse0x25bb870();
   input += synapse0x25bb8b0();
   input += synapse0x25bb8f0();
   input += synapse0x25bb930();
   input += synapse0x25bb970();
   input += synapse0x25bb9b0();
   input += synapse0x25bb9f0();
   input += synapse0x25bba30();
   input += synapse0x25bba70();
   input += synapse0x25bbab0();
   input += synapse0x25bbaf0();
   input += synapse0x25bbb30();
   input += synapse0x25bb5c0();
   input += synapse0x25bb600();
   input += synapse0x25bbc80();
   input += synapse0x25bbcc0();
   input += synapse0x25bbd00();
   input += synapse0x25bbd40();
   input += synapse0x25bbd80();
   input += synapse0x25bbdc0();
   input += synapse0x25bbe00();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bb430() {
   double input = input0x25bb430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bbe40() {
   double input = -2.75778;
   input += synapse0x25bc180();
   input += synapse0x25bc1c0();
   input += synapse0x25bc200();
   input += synapse0x25bc240();
   input += synapse0x25bc280();
   input += synapse0x25bc2c0();
   input += synapse0x25bc300();
   input += synapse0x25bc340();
   input += synapse0x25bc380();
   input += synapse0x25bc3c0();
   input += synapse0x25bc400();
   input += synapse0x25bc440();
   input += synapse0x25bc480();
   input += synapse0x25bc4c0();
   input += synapse0x25bc500();
   input += synapse0x25bc540();
   input += synapse0x25bbfd0();
   input += synapse0x25bc010();
   input += synapse0x25bc690();
   input += synapse0x25bc6d0();
   input += synapse0x25bc710();
   input += synapse0x25bc750();
   input += synapse0x25bc790();
   input += synapse0x25bc7d0();
   input += synapse0x25bc810();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bbe40() {
   double input = input0x25bbe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bc850() {
   double input = -0.388819;
   input += synapse0x25bcb90();
   input += synapse0x25bcbd0();
   input += synapse0x25bcc10();
   input += synapse0x25bcc50();
   input += synapse0x25bcc90();
   input += synapse0x25bccd0();
   input += synapse0x25bcd10();
   input += synapse0x25bcd50();
   input += synapse0x25bcd90();
   input += synapse0x25bcdd0();
   input += synapse0x25bce10();
   input += synapse0x25bce50();
   input += synapse0x25bce90();
   input += synapse0x25bced0();
   input += synapse0x25bcf10();
   input += synapse0x25bcf50();
   input += synapse0x25bc9e0();
   input += synapse0x25bca20();
   input += synapse0x25bd0a0();
   input += synapse0x25bd0e0();
   input += synapse0x25bd120();
   input += synapse0x25bd160();
   input += synapse0x25bd1a0();
   input += synapse0x25bd1e0();
   input += synapse0x25bd220();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bc850() {
   double input = input0x25bc850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bd260() {
   double input = 1.23599;
   input += synapse0x25bd5a0();
   input += synapse0x25bd5e0();
   input += synapse0x25bd620();
   input += synapse0x25bd660();
   input += synapse0x25bd6a0();
   input += synapse0x25bd6e0();
   input += synapse0x25bd720();
   input += synapse0x25bd760();
   input += synapse0x25bd7a0();
   input += synapse0x25bd7e0();
   input += synapse0x25bd820();
   input += synapse0x25bd860();
   input += synapse0x25bd8a0();
   input += synapse0x25bd8e0();
   input += synapse0x25bd920();
   input += synapse0x25bd960();
   input += synapse0x25bd3f0();
   input += synapse0x25bd430();
   input += synapse0x25bdab0();
   input += synapse0x25bdaf0();
   input += synapse0x25bdb30();
   input += synapse0x25bdb70();
   input += synapse0x25bdbb0();
   input += synapse0x25bdbf0();
   input += synapse0x25bdc30();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bd260() {
   double input = input0x25bd260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bdc70() {
   double input = -0.952247;
   input += synapse0x25bdfb0();
   input += synapse0x25bdff0();
   input += synapse0x25be030();
   input += synapse0x25be070();
   input += synapse0x25be0b0();
   input += synapse0x25be0f0();
   input += synapse0x25be130();
   input += synapse0x25be170();
   input += synapse0x25be1b0();
   input += synapse0x25be1f0();
   input += synapse0x25be230();
   input += synapse0x25be270();
   input += synapse0x25be2b0();
   input += synapse0x25be2f0();
   input += synapse0x25be330();
   input += synapse0x25be370();
   input += synapse0x25bde00();
   input += synapse0x25bde40();
   input += synapse0x25be4c0();
   input += synapse0x25be500();
   input += synapse0x25be540();
   input += synapse0x25be580();
   input += synapse0x25be5c0();
   input += synapse0x25be600();
   input += synapse0x25be640();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bdc70() {
   double input = input0x25bdc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25be680() {
   double input = 0.212955;
   input += synapse0x25be9c0();
   input += synapse0x25bea00();
   input += synapse0x25bea40();
   input += synapse0x25bea80();
   input += synapse0x25beac0();
   input += synapse0x25beb00();
   input += synapse0x25beb40();
   input += synapse0x25beb80();
   input += synapse0x25bebc0();
   input += synapse0x25bec00();
   input += synapse0x25bec40();
   input += synapse0x25bec80();
   input += synapse0x25becc0();
   input += synapse0x25bed00();
   input += synapse0x25bed40();
   input += synapse0x25bed80();
   input += synapse0x25be810();
   input += synapse0x25be850();
   input += synapse0x25beed0();
   input += synapse0x25bef10();
   input += synapse0x25bef50();
   input += synapse0x25bef90();
   input += synapse0x25befd0();
   input += synapse0x25bf010();
   input += synapse0x25bf050();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25be680() {
   double input = input0x25be680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bf090() {
   double input = 0.440902;
   input += synapse0x25bf3d0();
   input += synapse0x25bf410();
   input += synapse0x25bf450();
   input += synapse0x25bf490();
   input += synapse0x25bf4d0();
   input += synapse0x25bf510();
   input += synapse0x25bf550();
   input += synapse0x25bf590();
   input += synapse0x25bf5d0();
   input += synapse0x25bf610();
   input += synapse0x25bf650();
   input += synapse0x25bf690();
   input += synapse0x25bf6d0();
   input += synapse0x25bf710();
   input += synapse0x25bf750();
   input += synapse0x25bf790();
   input += synapse0x25bf220();
   input += synapse0x25bf260();
   input += synapse0x25bf8e0();
   input += synapse0x25bf920();
   input += synapse0x25bf960();
   input += synapse0x25bf9a0();
   input += synapse0x25bf9e0();
   input += synapse0x25bfa20();
   input += synapse0x25bfa60();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bf090() {
   double input = input0x25bf090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25bfaa0() {
   double input = 1.19997;
   input += synapse0x25bfde0();
   input += synapse0x25ad5c0();
   input += synapse0x25ad600();
   input += synapse0x25ada00();
   input += synapse0x25ada40();
   input += synapse0x25ade80();
   input += synapse0x25adec0();
   input += synapse0x25ae300();
   input += synapse0x25ae340();
   input += synapse0x25ae810();
   input += synapse0x25ae850();
   input += synapse0x25aec90();
   input += synapse0x25aecd0();
   input += synapse0x25af110();
   input += synapse0x25af150();
   input += synapse0x25af690();
   input += synapse0x25af6d0();
   input += synapse0x25afb10();
   input += synapse0x25afb50();
   input += synapse0x25aff90();
   input += synapse0x25affd0();
   input += synapse0x25b0410();
   input += synapse0x25b0450();
   input += synapse0x25b0890();
   input += synapse0x25b08d0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25bfaa0() {
   double input = input0x25bfaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25ba0c0() {
   double input = 0.816291;
   input += synapse0x25ba250();
   input += synapse0x25ba290();
   input += synapse0x25b1b30();
   input += synapse0x25b1b70();
   input += synapse0x25bfc30();
   input += synapse0x25bfc70();
   input += synapse0x25acea0();
   input += synapse0x25acee0();
   input += synapse0x25b26d0();
   input += synapse0x25b2710();
   input += synapse0x25b2b50();
   input += synapse0x25b2b90();
   input += synapse0x25b2fd0();
   input += synapse0x25b3010();
   input += synapse0x25b3450();
   input += synapse0x25b3490();
   input += synapse0x25b38d0();
   input += synapse0x25b3910();
   input += synapse0x25b3d50();
   input += synapse0x25b3d90();
   input += synapse0x25b41d0();
   input += synapse0x25b4210();
   input += synapse0x25b4650();
   input += synapse0x25b4690();
   input += synapse0x25b0da0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25ba0c0() {
   double input = input0x25ba0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c2d10() {
   double input = -0.342673;
   input += synapse0x25b0de0();
   input += synapse0x25c3050();
   input += synapse0x25c3090();
   input += synapse0x25c30d0();
   input += synapse0x25c3110();
   input += synapse0x25c3150();
   input += synapse0x25c3190();
   input += synapse0x25c31d0();
   input += synapse0x25c3210();
   input += synapse0x25c3250();
   input += synapse0x25c3290();
   input += synapse0x25c32d0();
   input += synapse0x25c3310();
   input += synapse0x25c3350();
   input += synapse0x25c3390();
   input += synapse0x25c33d0();
   input += synapse0x25c2ea0();
   input += synapse0x25c2ee0();
   input += synapse0x25c3520();
   input += synapse0x25c3560();
   input += synapse0x25c35a0();
   input += synapse0x25c35e0();
   input += synapse0x25c3620();
   input += synapse0x25c3660();
   input += synapse0x25c36a0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c2d10() {
   double input = input0x25c2d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c36e0() {
   double input = 0.269795;
   input += synapse0x25c3a20();
   input += synapse0x25c3a60();
   input += synapse0x25c3aa0();
   input += synapse0x25c3ae0();
   input += synapse0x25c3b20();
   input += synapse0x25c3b60();
   input += synapse0x25c3ba0();
   input += synapse0x25c3be0();
   input += synapse0x25c3c20();
   input += synapse0x25c3c60();
   input += synapse0x25c3ca0();
   input += synapse0x25c3ce0();
   input += synapse0x25c3d20();
   input += synapse0x25c3d60();
   input += synapse0x25c3da0();
   input += synapse0x25c3de0();
   input += synapse0x25c3870();
   input += synapse0x25c38b0();
   input += synapse0x25c3f30();
   input += synapse0x25c3f70();
   input += synapse0x25c3fb0();
   input += synapse0x25c3ff0();
   input += synapse0x25c4030();
   input += synapse0x25c4070();
   input += synapse0x25c40b0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c36e0() {
   double input = input0x25c36e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c40f0() {
   double input = -1.99571;
   input += synapse0x25c4430();
   input += synapse0x25c4470();
   input += synapse0x25c44b0();
   input += synapse0x25c44f0();
   input += synapse0x25c4530();
   input += synapse0x25c4570();
   input += synapse0x25c45b0();
   input += synapse0x25c45f0();
   input += synapse0x25c4630();
   input += synapse0x25c4670();
   input += synapse0x25c46b0();
   input += synapse0x25c46f0();
   input += synapse0x25c4730();
   input += synapse0x25c4770();
   input += synapse0x25c47b0();
   input += synapse0x25c47f0();
   input += synapse0x25c4280();
   input += synapse0x25c42c0();
   input += synapse0x25c4940();
   input += synapse0x25c4980();
   input += synapse0x25c49c0();
   input += synapse0x25c4a00();
   input += synapse0x25c4a40();
   input += synapse0x25c4a80();
   input += synapse0x25c4ac0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c40f0() {
   double input = input0x25c40f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c4b00() {
   double input = 1.54663;
   input += synapse0x25c4e40();
   input += synapse0x25c4e80();
   input += synapse0x25c4ec0();
   input += synapse0x25c4f00();
   input += synapse0x25c4f40();
   input += synapse0x25c4f80();
   input += synapse0x25c4fc0();
   input += synapse0x25c5000();
   input += synapse0x25c5040();
   input += synapse0x25c5080();
   input += synapse0x25c50c0();
   input += synapse0x25c5100();
   input += synapse0x25c5140();
   input += synapse0x25c5180();
   input += synapse0x25c51c0();
   input += synapse0x25c5200();
   input += synapse0x25c4c90();
   input += synapse0x25c4cd0();
   input += synapse0x25c5350();
   input += synapse0x25c5390();
   input += synapse0x25c53d0();
   input += synapse0x25c5410();
   input += synapse0x25c5450();
   input += synapse0x25c5490();
   input += synapse0x25c54d0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c4b00() {
   double input = input0x25c4b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c5510() {
   double input = -1.40193;
   input += synapse0x25c5850();
   input += synapse0x25c5890();
   input += synapse0x25c58d0();
   input += synapse0x25c5910();
   input += synapse0x25c5950();
   input += synapse0x25c5990();
   input += synapse0x25c59d0();
   input += synapse0x25c5a10();
   input += synapse0x25c5a50();
   input += synapse0x25c5a90();
   input += synapse0x25c5ad0();
   input += synapse0x25c5b10();
   input += synapse0x25c5b50();
   input += synapse0x25c5b90();
   input += synapse0x25c5bd0();
   input += synapse0x25c5c10();
   input += synapse0x25c56a0();
   input += synapse0x25c56e0();
   input += synapse0x25c5d60();
   input += synapse0x25c5da0();
   input += synapse0x25c5de0();
   input += synapse0x25c5e20();
   input += synapse0x25c5e60();
   input += synapse0x25c5ea0();
   input += synapse0x25c5ee0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c5510() {
   double input = input0x25c5510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c5f20() {
   double input = 0.328174;
   input += synapse0x25c6260();
   input += synapse0x25c62a0();
   input += synapse0x25c62e0();
   input += synapse0x25c6320();
   input += synapse0x25c6360();
   input += synapse0x25c63a0();
   input += synapse0x25c63e0();
   input += synapse0x25c6420();
   input += synapse0x25c6460();
   input += synapse0x25c64a0();
   input += synapse0x25c64e0();
   input += synapse0x25c6520();
   input += synapse0x25c6560();
   input += synapse0x25c65a0();
   input += synapse0x25c65e0();
   input += synapse0x25c6620();
   input += synapse0x25c60b0();
   input += synapse0x25c60f0();
   input += synapse0x25c6770();
   input += synapse0x25c67b0();
   input += synapse0x25c67f0();
   input += synapse0x25c6830();
   input += synapse0x25c6870();
   input += synapse0x25c68b0();
   input += synapse0x25c68f0();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c5f20() {
   double input = input0x25c5f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c6930() {
   double input = -0.87433;
   input += synapse0x25c6c70();
   input += synapse0x25c6cb0();
   input += synapse0x25c6cf0();
   input += synapse0x25c6d30();
   input += synapse0x25c6d70();
   input += synapse0x25c6db0();
   input += synapse0x25c6df0();
   input += synapse0x25c6e30();
   input += synapse0x25c6e70();
   input += synapse0x25c6eb0();
   input += synapse0x25c6ef0();
   input += synapse0x25c6f30();
   input += synapse0x25c6f70();
   input += synapse0x25c6fb0();
   input += synapse0x25c6ff0();
   input += synapse0x25c7030();
   input += synapse0x25c6ac0();
   input += synapse0x25c6b00();
   input += synapse0x25c7180();
   input += synapse0x25c71c0();
   input += synapse0x25c7200();
   input += synapse0x25c7240();
   input += synapse0x25c7280();
   input += synapse0x25c72c0();
   input += synapse0x25c7300();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c6930() {
   double input = input0x25c6930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c7340() {
   double input = 1.20286;
   input += synapse0x25c7680();
   input += synapse0x25c76c0();
   input += synapse0x25c7700();
   input += synapse0x25c7740();
   input += synapse0x25c7780();
   input += synapse0x25c77c0();
   input += synapse0x25c7800();
   input += synapse0x25c7840();
   input += synapse0x25c7880();
   input += synapse0x25c78c0();
   input += synapse0x25c7900();
   input += synapse0x25c7940();
   input += synapse0x25c7980();
   input += synapse0x25c79c0();
   input += synapse0x25c7a00();
   input += synapse0x25c7a40();
   input += synapse0x25c74d0();
   input += synapse0x25c7510();
   input += synapse0x25c7b90();
   input += synapse0x25c7bd0();
   input += synapse0x25c7c10();
   input += synapse0x25c7c50();
   input += synapse0x25c7c90();
   input += synapse0x25c7cd0();
   input += synapse0x25c7d10();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c7340() {
   double input = input0x25c7340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_6000ep_weight::input0x25c7d50() {
   double input = 3.84388;
   input += synapse0x25c7f70();
   input += synapse0x25c7fb0();
   input += synapse0x25c7ff0();
   input += synapse0x25c8030();
   input += synapse0x25c8070();
   input += synapse0x25c80b0();
   input += synapse0x25c80f0();
   input += synapse0x25c8130();
   input += synapse0x25c8170();
   input += synapse0x25c81b0();
   input += synapse0x25c81f0();
   input += synapse0x25c8230();
   input += synapse0x25c8270();
   input += synapse0x25c82b0();
   input += synapse0x25c82f0();
   input += synapse0x25c8330();
   input += synapse0x25ad300();
   input += synapse0x25ad340();
   input += synapse0x25c8480();
   input += synapse0x25c84c0();
   input += synapse0x25c8500();
   input += synapse0x25c8540();
   input += synapse0x25c8580();
   input += synapse0x25c85c0();
   input += synapse0x25c8600();
   return input;
}

double nnFunc_1C_25_25hi_6000ep_weight::neuron0x25c7d50() {
   double input = input0x25c7d50();
   return (input * 3.57394)+135.817;
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x259b5d0() {
   return (neuron0x25ac2c0()*-0.0986777);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad6e0() {
   return (neuron0x25ac600()*-0.42827);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad720() {
   return (neuron0x25ac940()*-1.28659);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad760() {
   return (neuron0x25acc80()*0.832688);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad7a0() {
   return (neuron0x25acfc0()*-4.53894);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adb20() {
   return (neuron0x25ac2c0()*1.46396);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adb60() {
   return (neuron0x25ac600()*-1.08796);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adba0() {
   return (neuron0x25ac940()*-0.860621);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adbe0() {
   return (neuron0x25acc80()*11.772);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adc20() {
   return (neuron0x25acfc0()*0.703758);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adfa0() {
   return (neuron0x25ac2c0()*-1.51366);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adfe0() {
   return (neuron0x25ac600()*0.114348);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae020() {
   return (neuron0x25ac940()*0.361971);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae060() {
   return (neuron0x25acc80()*-2.78143);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae0a0() {
   return (neuron0x25acfc0()*0.660424);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae420() {
   return (neuron0x25ac2c0()*-0.00677305);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae460() {
   return (neuron0x25ac600()*-0.636028);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x2426ad0() {
   return (neuron0x25ac940()*-0.0837537);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x2426b10() {
   return (neuron0x25acc80()*-23.259);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae5b0() {
   return (neuron0x25acfc0()*15.3092);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae930() {
   return (neuron0x25ac2c0()*0.0535499);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae970() {
   return (neuron0x25ac600()*-0.0750726);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae9b0() {
   return (neuron0x25ac940()*0.532476);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae9f0() {
   return (neuron0x25acc80()*14.8418);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aea30() {
   return (neuron0x25acfc0()*-5.3092);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aedb0() {
   return (neuron0x25ac2c0()*-6.16105);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aedf0() {
   return (neuron0x25ac600()*1.7192);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aee30() {
   return (neuron0x25ac940()*1.73689);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aee70() {
   return (neuron0x25acc80()*-2.62879);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aeeb0() {
   return (neuron0x25acfc0()*0.316558);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af230() {
   return (neuron0x25ac2c0()*-0.0941178);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af270() {
   return (neuron0x25ac600()*-0.666521);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af2b0() {
   return (neuron0x25ac940()*-1.19503);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae4a0() {
   return (neuron0x25acc80()*-9.05572);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae4e0() {
   return (neuron0x25acfc0()*2.30582);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af7b0() {
   return (neuron0x25ac2c0()*0.0107042);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af7f0() {
   return (neuron0x25ac600()*0.0364844);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af830() {
   return (neuron0x25ac940()*0.154178);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af870() {
   return (neuron0x25acc80()*-7.10308);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af8b0() {
   return (neuron0x25acfc0()*-2.78029);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afc30() {
   return (neuron0x25ac2c0()*1.86636);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afc70() {
   return (neuron0x25ac600()*-0.641506);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afcb0() {
   return (neuron0x25ac940()*0.806318);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afcf0() {
   return (neuron0x25acc80()*1.34444);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afd30() {
   return (neuron0x25acfc0()*-0.80059);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b00b0() {
   return (neuron0x25ac2c0()*0.989736);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b00f0() {
   return (neuron0x25ac600()*-1.76277);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0130() {
   return (neuron0x25ac940()*-1.33693);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0170() {
   return (neuron0x25acc80()*0.185281);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b01b0() {
   return (neuron0x25acfc0()*-1.28871);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0530() {
   return (neuron0x25ac2c0()*2.16786);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0570() {
   return (neuron0x25ac600()*-0.360312);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b05b0() {
   return (neuron0x25ac940()*-0.343089);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b05f0() {
   return (neuron0x25acc80()*3.47532);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0630() {
   return (neuron0x25acfc0()*0.300362);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x2426920() {
   return (neuron0x25ac2c0()*-2.25334);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x2426960() {
   return (neuron0x25ac600()*0.722064);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0ac0() {
   return (neuron0x25ac940()*1.06721);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0b00() {
   return (neuron0x25acc80()*-9.78603);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0b40() {
   return (neuron0x25acfc0()*-0.179491);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0ec0() {
   return (neuron0x25ac2c0()*-1.56853);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0f00() {
   return (neuron0x25ac600()*1.24488);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0f40() {
   return (neuron0x25ac940()*0.821013);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0f80() {
   return (neuron0x25acc80()*-0.166737);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0fc0() {
   return (neuron0x25acfc0()*1.27188);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x2534940() {
   return (neuron0x25ac2c0()*-0.0315801);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x259b570() {
   return (neuron0x25ac600()*0.164452);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af4a0() {
   return (neuron0x25ac940()*-0.313837);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1410() {
   return (neuron0x25acc80()*-4.81912);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1450() {
   return (neuron0x25acfc0()*0.916532);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b17d0() {
   return (neuron0x25ac2c0()*3.07311);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1810() {
   return (neuron0x25ac600()*-0.603839);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1850() {
   return (neuron0x25ac940()*-1.24487);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1890() {
   return (neuron0x25acc80()*7.77329);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b18d0() {
   return (neuron0x25acfc0()*-0.708133);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1c50() {
   return (neuron0x25ac2c0()*-0.019625);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ac4e0() {
   return (neuron0x25ac600()*-0.386139);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ac520() {
   return (neuron0x25ac940()*-0.211543);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ac820() {
   return (neuron0x25acc80()*-13.0242);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ac860() {
   return (neuron0x25acfc0()*13.277);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2370() {
   return (neuron0x25ac2c0()*1.65331);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b23b0() {
   return (neuron0x25ac600()*-0.883931);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b23f0() {
   return (neuron0x25ac940()*0.157709);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2430() {
   return (neuron0x25acc80()*2.23746);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2470() {
   return (neuron0x25acfc0()*-0.463891);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b27f0() {
   return (neuron0x25ac2c0()*-1.84805);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2830() {
   return (neuron0x25ac600()*0.441104);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2870() {
   return (neuron0x25ac940()*0.623683);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b28b0() {
   return (neuron0x25acc80()*-1.1149);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b28f0() {
   return (neuron0x25acfc0()*1.26154);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2c70() {
   return (neuron0x25ac2c0()*0.0344689);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2cb0() {
   return (neuron0x25ac600()*0.734697);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2cf0() {
   return (neuron0x25ac940()*0.349549);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2d30() {
   return (neuron0x25acc80()*34.9516);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2d70() {
   return (neuron0x25acfc0()*-17.1736);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b30f0() {
   return (neuron0x25ac2c0()*-2.45251);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3130() {
   return (neuron0x25ac600()*1.65853);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3170() {
   return (neuron0x25ac940()*1.41865);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b31b0() {
   return (neuron0x25acc80()*-5.78132);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b31f0() {
   return (neuron0x25acfc0()*-0.317953);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3570() {
   return (neuron0x25ac2c0()*1.61686);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b35b0() {
   return (neuron0x25ac600()*-1.74701);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b35f0() {
   return (neuron0x25ac940()*-2.85267);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3630() {
   return (neuron0x25acc80()*-1.31762);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3670() {
   return (neuron0x25acfc0()*-1.31697);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b39f0() {
   return (neuron0x25ac2c0()*0.00588313);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3a30() {
   return (neuron0x25ac600()*1.14681);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3a70() {
   return (neuron0x25ac940()*1.41047);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3ab0() {
   return (neuron0x25acc80()*0.168673);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3af0() {
   return (neuron0x25acfc0()*1.13056);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3e70() {
   return (neuron0x25ac2c0()*-2.86232);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3eb0() {
   return (neuron0x25ac600()*0.914827);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3ef0() {
   return (neuron0x25ac940()*1.28646);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3f30() {
   return (neuron0x25acc80()*-5.86269);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3f70() {
   return (neuron0x25acfc0()*0.0258221);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b42f0() {
   return (neuron0x25ac2c0()*-0.0295491);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4330() {
   return (neuron0x25ac600()*0.493201);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4370() {
   return (neuron0x25ac940()*-0.270749);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b43b0() {
   return (neuron0x25acc80()*5.70995);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b43f0() {
   return (neuron0x25acfc0()*-10.0002);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4770() {
   return (neuron0x25ac2c0()*2.80246);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b47b0() {
   return (neuron0x25ac600()*-1.328);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b47f0() {
   return (neuron0x25ac940()*-2.932);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4830() {
   return (neuron0x25acc80()*0.12479);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4870() {
   return (neuron0x25acfc0()*-0.435388);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae390() {
   return (neuron0x25ad430()*-0.0691347);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae3d0() {
   return (neuron0x25ad7e0()*1.73989);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae8a0() {
   return (neuron0x25adc60()*-0.418125);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae8e0() {
   return (neuron0x25ae0e0()*-1.40515);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aed20() {
   return (neuron0x25ae5f0()*-0.855341);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aed60() {
   return (neuron0x25aea70()*-0.793521);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af1a0() {
   return (neuron0x25aeef0()*-1.01613);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af1e0() {
   return (neuron0x25af500()*-0.370465);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af720() {
   return (neuron0x25af8f0()*0.372168);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af760() {
   return (neuron0x25afd70()*0.911498);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afba0() {
   return (neuron0x25b01f0()*-0.294874);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afbe0() {
   return (neuron0x25b0670()*-1.96576);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0020() {
   return (neuron0x25b0b80()*-0.181958);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0060() {
   return (neuron0x25347b0()*-0.928416);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b04a0() {
   return (neuron0x25b1490()*1.49216);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b04e0() {
   return (neuron0x25b1910()*-0.567509);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0920() {
   return (neuron0x25b21e0()*0.466916);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0960() {
   return (neuron0x25b24b0()*0.309436);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0e30() {
   return (neuron0x25b2930()*1.34531);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0e70() {
   return (neuron0x25b2db0()*-1.93465);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af410() {
   return (neuron0x25b3230()*-0.194711);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af450() {
   return (neuron0x25b36b0()*-0.0842337);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1740() {
   return (neuron0x25b3b30()*-1.69211);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1780() {
   return (neuron0x25b3fb0()*0.478382);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1bc0() {
   return (neuron0x25b4430()*0.342663);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b12a0() {
   return (neuron0x25ad430()*1.19075);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b12e0() {
   return (neuron0x25ad7e0()*2.23361);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1320() {
   return (neuron0x25adc60()*-1.05094);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1360() {
   return (neuron0x25ae0e0()*-1.54193);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b13a0() {
   return (neuron0x25ae5f0()*-1.64514);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1c00() {
   return (neuron0x25aea70()*-1.73001);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3060() {
   return (neuron0x25aeef0()*0.00570386);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b30a0() {
   return (neuron0x25af500()*0.810779);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b34e0() {
   return (neuron0x25af8f0()*-0.0849658);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3520() {
   return (neuron0x25afd70()*0.312902);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3960() {
   return (neuron0x25b01f0()*-0.838438);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b39a0() {
   return (neuron0x25b0670()*-4.1163);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3de0() {
   return (neuron0x25b0b80()*-0.981881);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3e20() {
   return (neuron0x25347b0()*-1.01772);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4260() {
   return (neuron0x25b1490()*2.66407);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b42a0() {
   return (neuron0x25b1910()*-2.51012);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b46e0() {
   return (neuron0x25b21e0()*0.552878);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4720() {
   return (neuron0x25b24b0()*1.44687);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad650() {
   return (neuron0x25b2930()*2.4236);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad690() {
   return (neuron0x25b2db0()*-3.14871);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad1e0() {
   return (neuron0x25b3230()*0.174407);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad220() {
   return (neuron0x25b36b0()*-0.924314);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6df0() {
   return (neuron0x25b3b30()*-3.3097);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6e30() {
   return (neuron0x25b3fb0()*-0.87321);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6e70() {
   return (neuron0x25b4430()*1.19182);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b09b0() {
   return (neuron0x25ad430()*0.792414);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b09f0() {
   return (neuron0x25ad7e0()*2.30334);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0a30() {
   return (neuron0x25adc60()*-0.104214);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0a70() {
   return (neuron0x25ae0e0()*-0.889763);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7400() {
   return (neuron0x25ae5f0()*-0.874853);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7440() {
   return (neuron0x25aea70()*-0.79292);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7480() {
   return (neuron0x25aeef0()*-0.98107);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b74c0() {
   return (neuron0x25af500()*0.5687);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7500() {
   return (neuron0x25af8f0()*-0.0573416);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7540() {
   return (neuron0x25afd70()*-0.195976);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7580() {
   return (neuron0x25b01f0()*-0.555053);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b75c0() {
   return (neuron0x25b0670()*-2.69146);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7600() {
   return (neuron0x25b0b80()*0.0481155);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7640() {
   return (neuron0x25347b0()*-0.954404);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7680() {
   return (neuron0x25b1490()*2.52125);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b76c0() {
   return (neuron0x25b1910()*-1.54197);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7040() {
   return (neuron0x25b21e0()*-0.102169);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7080() {
   return (neuron0x25b24b0()*0.628667);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7810() {
   return (neuron0x25b2930()*1.43718);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7850() {
   return (neuron0x25b2db0()*-1.64513);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7890() {
   return (neuron0x25b3230()*-0.141974);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b78d0() {
   return (neuron0x25b36b0()*-0.26517);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7910() {
   return (neuron0x25b3b30()*-2.40894);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7950() {
   return (neuron0x25b3fb0()*0.009816);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7990() {
   return (neuron0x25b4430()*0.861165);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7d10() {
   return (neuron0x25ad430()*-1.1501);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7d50() {
   return (neuron0x25ad7e0()*0.495079);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7d90() {
   return (neuron0x25adc60()*-0.345636);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7dd0() {
   return (neuron0x25ae0e0()*-1.01544);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7e10() {
   return (neuron0x25ae5f0()*-0.0915057);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7e50() {
   return (neuron0x25aea70()*-0.515044);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7e90() {
   return (neuron0x25aeef0()*-0.887659);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7ed0() {
   return (neuron0x25af500()*-0.319997);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7f10() {
   return (neuron0x25af8f0()*-0.507557);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7f50() {
   return (neuron0x25afd70()*-0.45171);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7f90() {
   return (neuron0x25b01f0()*-0.809453);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7fd0() {
   return (neuron0x25b0670()*-1.27074);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8010() {
   return (neuron0x25b0b80()*-0.568232);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8050() {
   return (neuron0x25347b0()*-1.03318);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8090() {
   return (neuron0x25b1490()*0.322226);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b80d0() {
   return (neuron0x25b1910()*-0.955965);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7b60() {
   return (neuron0x25b21e0()*-0.572203);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b7ba0() {
   return (neuron0x25b24b0()*0.359398);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8220() {
   return (neuron0x25b2930()*0.96484);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8260() {
   return (neuron0x25b2db0()*-1.19392);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b82a0() {
   return (neuron0x25b3230()*-0.312082);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b82e0() {
   return (neuron0x25b36b0()*-0.876117);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8320() {
   return (neuron0x25b3b30()*-1.16018);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8360() {
   return (neuron0x25b3fb0()*-0.443863);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b83a0() {
   return (neuron0x25b4430()*-0.217316);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8720() {
   return (neuron0x25ad430()*-0.140223);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8760() {
   return (neuron0x25ad7e0()*0.668632);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b87a0() {
   return (neuron0x25adc60()*1.40947);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b87e0() {
   return (neuron0x25ae0e0()*-0.105471);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8820() {
   return (neuron0x25ae5f0()*0.969605);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8860() {
   return (neuron0x25aea70()*2.04249);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b88a0() {
   return (neuron0x25aeef0()*0.643537);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b88e0() {
   return (neuron0x25af500()*0.411038);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8920() {
   return (neuron0x25af8f0()*-0.227203);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8960() {
   return (neuron0x25afd70()*-0.200049);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b89a0() {
   return (neuron0x25b01f0()*-0.808582);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b89e0() {
   return (neuron0x25b0670()*0.583419);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8a20() {
   return (neuron0x25b0b80()*1.19471);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8a60() {
   return (neuron0x25347b0()*-0.174306);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8aa0() {
   return (neuron0x25b1490()*1.25626);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8ae0() {
   return (neuron0x25b1910()*1.02473);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8570() {
   return (neuron0x25b21e0()*-0.138176);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b85b0() {
   return (neuron0x25b24b0()*-0.429448);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8c30() {
   return (neuron0x25b2930()*1.76865);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8c70() {
   return (neuron0x25b2db0()*0.27794);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8cb0() {
   return (neuron0x25b3230()*0.231274);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8cf0() {
   return (neuron0x25b36b0()*1.36056);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8d30() {
   return (neuron0x25b3b30()*0.506649);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8d70() {
   return (neuron0x25b3fb0()*-1.01512);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8db0() {
   return (neuron0x25b4430()*-0.524835);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b9130() {
   return (neuron0x25ad430()*1.6738);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b9170() {
   return (neuron0x25ad7e0()*2.02219);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b91b0() {
   return (neuron0x25adc60()*-2.10836);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b91f0() {
   return (neuron0x25ae0e0()*18.6038);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b9230() {
   return (neuron0x25ae5f0()*8.51995);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b9270() {
   return (neuron0x25aea70()*-1.14776);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b92b0() {
   return (neuron0x25aeef0()*-1.70738);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b64d0() {
   return (neuron0x25af500()*-2.61342);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6510() {
   return (neuron0x25af8f0()*-0.57753);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6550() {
   return (neuron0x25afd70()*0.182535);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6590() {
   return (neuron0x25b01f0()*-0.610115);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b65d0() {
   return (neuron0x25b0670()*-3.9578);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6610() {
   return (neuron0x25b0b80()*-1.06595);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6650() {
   return (neuron0x25347b0()*2.91241);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6690() {
   return (neuron0x25b1490()*1.79187);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b66d0() {
   return (neuron0x25b1910()*-16.4261);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8f80() {
   return (neuron0x25b21e0()*-0.389297);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b8fc0() {
   return (neuron0x25b24b0()*-0.26619);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6820() {
   return (neuron0x25b2930()*29.5737);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6860() {
   return (neuron0x25b2db0()*-3.40564);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b68a0() {
   return (neuron0x25b3230()*0.524947);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b68e0() {
   return (neuron0x25b36b0()*-2.1512);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6920() {
   return (neuron0x25b3b30()*-3.43106);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6960() {
   return (neuron0x25b3fb0()*6.20382);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b69a0() {
   return (neuron0x25b4430()*0.206107);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6c90() {
   return (neuron0x25ad430()*-0.691798);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba390() {
   return (neuron0x25ad7e0()*-0.448112);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba3d0() {
   return (neuron0x25adc60()*-0.32259);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba410() {
   return (neuron0x25ae0e0()*-7.2142);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba450() {
   return (neuron0x25ae5f0()*-1.14509);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba490() {
   return (neuron0x25aea70()*0.316513);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba4d0() {
   return (neuron0x25aeef0()*0.596879);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba510() {
   return (neuron0x25af500()*2.7375);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba550() {
   return (neuron0x25af8f0()*0.43913);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba590() {
   return (neuron0x25afd70()*-0.824921);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba5d0() {
   return (neuron0x25b01f0()*0.207019);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba610() {
   return (neuron0x25b0670()*0.312711);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba650() {
   return (neuron0x25b0b80()*0.675594);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba690() {
   return (neuron0x25347b0()*3.16945);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba6d0() {
   return (neuron0x25b1490()*0.0699443);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba710() {
   return (neuron0x25b1910()*6.27268);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6b70() {
   return (neuron0x25b21e0()*0.0565663);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b6bb0() {
   return (neuron0x25b24b0()*0.00886549);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba860() {
   return (neuron0x25b2930()*-15.3471);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba8a0() {
   return (neuron0x25b2db0()*0.5827);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba8e0() {
   return (neuron0x25b3230()*0.0257305);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba920() {
   return (neuron0x25b36b0()*0.793231);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba960() {
   return (neuron0x25b3b30()*0.437834);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba9a0() {
   return (neuron0x25b3fb0()*-4.11365);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba9e0() {
   return (neuron0x25b4430()*0.0538096);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bad60() {
   return (neuron0x25ad430()*1.51384);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bada0() {
   return (neuron0x25ad7e0()*-0.418532);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bade0() {
   return (neuron0x25adc60()*1.10376);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bae20() {
   return (neuron0x25ae0e0()*-0.798311);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bae60() {
   return (neuron0x25ae5f0()*5.38593);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25baea0() {
   return (neuron0x25aea70()*1.40696);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25baee0() {
   return (neuron0x25aeef0()*-2.63306);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25baf20() {
   return (neuron0x25af500()*-1.03644);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25baf60() {
   return (neuron0x25af8f0()*-0.416155);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bafa0() {
   return (neuron0x25afd70()*-0.0279853);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bafe0() {
   return (neuron0x25b01f0()*0.538853);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb020() {
   return (neuron0x25b0670()*1.83063);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb060() {
   return (neuron0x25b0b80()*0.757491);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb0a0() {
   return (neuron0x25347b0()*2.43968);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb0e0() {
   return (neuron0x25b1490()*-0.36649);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb120() {
   return (neuron0x25b1910()*2.79344);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25babb0() {
   return (neuron0x25b21e0()*0.105961);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25babf0() {
   return (neuron0x25b24b0()*0.405492);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb270() {
   return (neuron0x25b2930()*-18.4816);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb2b0() {
   return (neuron0x25b2db0()*1.90503);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb2f0() {
   return (neuron0x25b3230()*0.0794414);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb330() {
   return (neuron0x25b36b0()*1.27032);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb370() {
   return (neuron0x25b3b30()*2.02502);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb3b0() {
   return (neuron0x25b3fb0()*-0.428818);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb3f0() {
   return (neuron0x25b4430()*-0.235751);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb770() {
   return (neuron0x25ad430()*0.382116);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb7b0() {
   return (neuron0x25ad7e0()*1.4725);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb7f0() {
   return (neuron0x25adc60()*-0.592942);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb830() {
   return (neuron0x25ae0e0()*-1.16631);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb870() {
   return (neuron0x25ae5f0()*-0.760073);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb8b0() {
   return (neuron0x25aea70()*-0.576603);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb8f0() {
   return (neuron0x25aeef0()*-1.03199);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb930() {
   return (neuron0x25af500()*0.157017);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb970() {
   return (neuron0x25af8f0()*-0.170899);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb9b0() {
   return (neuron0x25afd70()*0.741544);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb9f0() {
   return (neuron0x25b01f0()*-0.786245);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bba30() {
   return (neuron0x25b0670()*-2.20643);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bba70() {
   return (neuron0x25b0b80()*0.243289);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbab0() {
   return (neuron0x25347b0()*-1.01457);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbaf0() {
   return (neuron0x25b1490()*2.07082);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbb30() {
   return (neuron0x25b1910()*-0.7164);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb5c0() {
   return (neuron0x25b21e0()*-0.063828);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bb600() {
   return (neuron0x25b24b0()*0.0504044);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbc80() {
   return (neuron0x25b2930()*1.65026);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbcc0() {
   return (neuron0x25b2db0()*-1.39066);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbd00() {
   return (neuron0x25b3230()*-0.248023);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbd40() {
   return (neuron0x25b36b0()*-0.839557);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbd80() {
   return (neuron0x25b3b30()*-1.66413);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbdc0() {
   return (neuron0x25b3fb0()*0.0809843);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbe00() {
   return (neuron0x25b4430()*0.386023);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc180() {
   return (neuron0x25ad430()*5.57787);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc1c0() {
   return (neuron0x25ad7e0()*1.44395);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc200() {
   return (neuron0x25adc60()*-2.72271);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc240() {
   return (neuron0x25ae0e0()*-7.05466);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc280() {
   return (neuron0x25ae5f0()*-2.09172);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc2c0() {
   return (neuron0x25aea70()*-0.348988);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc300() {
   return (neuron0x25aeef0()*-4.7083);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc340() {
   return (neuron0x25af500()*2.58804);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc380() {
   return (neuron0x25af8f0()*-0.7636);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc3c0() {
   return (neuron0x25afd70()*-0.405652);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc400() {
   return (neuron0x25b01f0()*-0.892637);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc440() {
   return (neuron0x25b0670()*-3.55547);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc480() {
   return (neuron0x25b0b80()*-2.41658);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc4c0() {
   return (neuron0x25347b0()*0.672498);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc500() {
   return (neuron0x25b1490()*1.02628);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc540() {
   return (neuron0x25b1910()*-5.85839);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bbfd0() {
   return (neuron0x25b21e0()*-0.568929);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc010() {
   return (neuron0x25b24b0()*-2.74666);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc690() {
   return (neuron0x25b2930()*30.8799);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc6d0() {
   return (neuron0x25b2db0()*-3.9266);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc710() {
   return (neuron0x25b3230()*-0.754616);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc750() {
   return (neuron0x25b36b0()*-2.77251);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc790() {
   return (neuron0x25b3b30()*-3.74962);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc7d0() {
   return (neuron0x25b3fb0()*-0.169251);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc810() {
   return (neuron0x25b4430()*0.420375);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcb90() {
   return (neuron0x25ad430()*1.68153);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcbd0() {
   return (neuron0x25ad7e0()*-0.648325);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcc10() {
   return (neuron0x25adc60()*3.99208e-05);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcc50() {
   return (neuron0x25ae0e0()*-1.5405);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcc90() {
   return (neuron0x25ae5f0()*0.54009);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bccd0() {
   return (neuron0x25aea70()*0.0831328);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcd10() {
   return (neuron0x25aeef0()*-0.857224);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcd50() {
   return (neuron0x25af500()*1.27087);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcd90() {
   return (neuron0x25af8f0()*-0.11637);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcdd0() {
   return (neuron0x25afd70()*-0.177637);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bce10() {
   return (neuron0x25b01f0()*0.324467);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bce50() {
   return (neuron0x25b0670()*0.658881);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bce90() {
   return (neuron0x25b0b80()*-0.815335);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bced0() {
   return (neuron0x25347b0()*1.65411);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcf10() {
   return (neuron0x25b1490()*-0.507877);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bcf50() {
   return (neuron0x25b1910()*-3.25575);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bc9e0() {
   return (neuron0x25b21e0()*0.306005);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bca20() {
   return (neuron0x25b24b0()*0.530766);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd0a0() {
   return (neuron0x25b2930()*-1.32085);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd0e0() {
   return (neuron0x25b2db0()*0.122144);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd120() {
   return (neuron0x25b3230()*-0.212606);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd160() {
   return (neuron0x25b36b0()*-0.546097);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd1a0() {
   return (neuron0x25b3b30()*0.539713);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd1e0() {
   return (neuron0x25b3fb0()*1.83172);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd220() {
   return (neuron0x25b4430()*-0.348131);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd5a0() {
   return (neuron0x25ad430()*-0.559701);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd5e0() {
   return (neuron0x25ad7e0()*-2.64304);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd620() {
   return (neuron0x25adc60()*1.07093);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd660() {
   return (neuron0x25ae0e0()*1.56658);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd6a0() {
   return (neuron0x25ae5f0()*1.46492);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd6e0() {
   return (neuron0x25aea70()*1.34799);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd720() {
   return (neuron0x25aeef0()*1.26629);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd760() {
   return (neuron0x25af500()*-0.916382);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd7a0() {
   return (neuron0x25af8f0()*-0.483342);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd7e0() {
   return (neuron0x25afd70()*-0.818019);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd820() {
   return (neuron0x25b01f0()*1.21014);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd860() {
   return (neuron0x25b0670()*3.6389);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd8a0() {
   return (neuron0x25b0b80()*0.478973);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd8e0() {
   return (neuron0x25347b0()*1.62293);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd920() {
   return (neuron0x25b1490()*-2.15768);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd960() {
   return (neuron0x25b1910()*1.29254);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd3f0() {
   return (neuron0x25b21e0()*-0.548634);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bd430() {
   return (neuron0x25b24b0()*-0.715027);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdab0() {
   return (neuron0x25b2930()*-2.40673);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdaf0() {
   return (neuron0x25b2db0()*1.85305);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdb30() {
   return (neuron0x25b3230()*-0.141429);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdb70() {
   return (neuron0x25b36b0()*0.350024);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdbb0() {
   return (neuron0x25b3b30()*2.58226);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdbf0() {
   return (neuron0x25b3fb0()*-0.357571);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdc30() {
   return (neuron0x25b4430()*-0.899088);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdfb0() {
   return (neuron0x25ad430()*0.432536);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bdff0() {
   return (neuron0x25ad7e0()*-0.0959293);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be030() {
   return (neuron0x25adc60()*-0.318344);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be070() {
   return (neuron0x25ae0e0()*0.149042);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be0b0() {
   return (neuron0x25ae5f0()*-1.79302);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be0f0() {
   return (neuron0x25aea70()*-0.443281);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be130() {
   return (neuron0x25aeef0()*0.448036);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be170() {
   return (neuron0x25af500()*3.62705);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be1b0() {
   return (neuron0x25af8f0()*0.532538);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be1f0() {
   return (neuron0x25afd70()*0.346896);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be230() {
   return (neuron0x25b01f0()*-0.567017);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be270() {
   return (neuron0x25b0670()*-0.186215);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be2b0() {
   return (neuron0x25b0b80()*-0.843371);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be2f0() {
   return (neuron0x25347b0()*4.15956);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be330() {
   return (neuron0x25b1490()*0.268306);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be370() {
   return (neuron0x25b1910()*12.2775);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bde00() {
   return (neuron0x25b21e0()*-0.124263);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bde40() {
   return (neuron0x25b24b0()*-0.497507);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be4c0() {
   return (neuron0x25b2930()*1.73697);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be500() {
   return (neuron0x25b2db0()*-0.472366);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be540() {
   return (neuron0x25b3230()*0.488728);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be580() {
   return (neuron0x25b36b0()*-0.762485);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be5c0() {
   return (neuron0x25b3b30()*0.26553);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be600() {
   return (neuron0x25b3fb0()*-2.75093);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be640() {
   return (neuron0x25b4430()*0.207461);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be9c0() {
   return (neuron0x25ad430()*-2.40355);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bea00() {
   return (neuron0x25ad7e0()*0.487826);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bea40() {
   return (neuron0x25adc60()*-0.0672288);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bea80() {
   return (neuron0x25ae0e0()*-1.75138);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25beac0() {
   return (neuron0x25ae5f0()*-6.56222);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25beb00() {
   return (neuron0x25aea70()*0.485143);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25beb40() {
   return (neuron0x25aeef0()*3.4424);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25beb80() {
   return (neuron0x25af500()*1.58556);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bebc0() {
   return (neuron0x25af8f0()*-0.441394);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bec00() {
   return (neuron0x25afd70()*0.0481486);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bec40() {
   return (neuron0x25b01f0()*-0.0867527);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bec80() {
   return (neuron0x25b0670()*-0.715296);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25becc0() {
   return (neuron0x25b0b80()*0.403231);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bed00() {
   return (neuron0x25347b0()*-3.31624);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bed40() {
   return (neuron0x25b1490()*0.401832);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bed80() {
   return (neuron0x25b1910()*9.92352);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be810() {
   return (neuron0x25b21e0()*-0.0801685);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25be850() {
   return (neuron0x25b24b0()*0.124444);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25beed0() {
   return (neuron0x25b2930()*0.750285);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bef10() {
   return (neuron0x25b2db0()*-0.558001);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bef50() {
   return (neuron0x25b3230()*0.17905);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bef90() {
   return (neuron0x25b36b0()*-0.0242513);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25befd0() {
   return (neuron0x25b3b30()*-0.488122);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf010() {
   return (neuron0x25b3fb0()*-3.30581);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf050() {
   return (neuron0x25b4430()*-0.850802);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf3d0() {
   return (neuron0x25ad430()*0.878942);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf410() {
   return (neuron0x25ad7e0()*-0.556002);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf450() {
   return (neuron0x25adc60()*0.307453);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf490() {
   return (neuron0x25ae0e0()*0.985079);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf4d0() {
   return (neuron0x25ae5f0()*0.587128);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf510() {
   return (neuron0x25aea70()*1.22274);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf550() {
   return (neuron0x25aeef0()*-0.11307);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf590() {
   return (neuron0x25af500()*-0.149304);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf5d0() {
   return (neuron0x25af8f0()*0.296839);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf610() {
   return (neuron0x25afd70()*0.133841);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf650() {
   return (neuron0x25b01f0()*-0.0635015);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf690() {
   return (neuron0x25b0670()*1.02053);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf6d0() {
   return (neuron0x25b0b80()*0.0978031);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf710() {
   return (neuron0x25347b0()*1.6749);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf750() {
   return (neuron0x25b1490()*-1.38501);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf790() {
   return (neuron0x25b1910()*0.568114);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf220() {
   return (neuron0x25b21e0()*0.0879087);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf260() {
   return (neuron0x25b24b0()*0.40745);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf8e0() {
   return (neuron0x25b2930()*-0.760639);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf920() {
   return (neuron0x25b2db0()*0.604046);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf960() {
   return (neuron0x25b3230()*0.571898);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf9a0() {
   return (neuron0x25b36b0()*0.0230623);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bf9e0() {
   return (neuron0x25b3b30()*1.08102);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bfa20() {
   return (neuron0x25b3fb0()*0.277449);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bfa60() {
   return (neuron0x25b4430()*-0.468101);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bfde0() {
   return (neuron0x25ad430()*2.39332);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad5c0() {
   return (neuron0x25ad7e0()*-0.694223);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad600() {
   return (neuron0x25adc60()*1.43486);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ada00() {
   return (neuron0x25ae0e0()*7.84544);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ada40() {
   return (neuron0x25ae5f0()*-0.391103);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ade80() {
   return (neuron0x25aea70()*1.50493);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25adec0() {
   return (neuron0x25aeef0()*-1.6825);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae300() {
   return (neuron0x25af500()*0.223385);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae340() {
   return (neuron0x25af8f0()*-0.522006);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae810() {
   return (neuron0x25afd70()*0.0906315);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ae850() {
   return (neuron0x25b01f0()*0.36514);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aec90() {
   return (neuron0x25b0670()*2.07441);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aecd0() {
   return (neuron0x25b0b80()*0.616776);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af110() {
   return (neuron0x25347b0()*5.38856);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af150() {
   return (neuron0x25b1490()*-1.18741);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af690() {
   return (neuron0x25b1910()*-1.26213);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25af6d0() {
   return (neuron0x25b21e0()*0.178851);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afb10() {
   return (neuron0x25b24b0()*0.669705);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25afb50() {
   return (neuron0x25b2930()*-11.5514);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25aff90() {
   return (neuron0x25b2db0()*1.44978);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25affd0() {
   return (neuron0x25b3230()*0.245998);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0410() {
   return (neuron0x25b36b0()*1.30553);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0450() {
   return (neuron0x25b3b30()*1.46991);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0890() {
   return (neuron0x25b3fb0()*-1.65837);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b08d0() {
   return (neuron0x25b4430()*0.384538);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba250() {
   return (neuron0x25ad430()*0.664688);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ba290() {
   return (neuron0x25ad7e0()*0.588657);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1b30() {
   return (neuron0x25adc60()*0.522656);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b1b70() {
   return (neuron0x25ae0e0()*0.34777);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bfc30() {
   return (neuron0x25ae5f0()*0.792532);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25bfc70() {
   return (neuron0x25aea70()*0.0565708);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25acea0() {
   return (neuron0x25aeef0()*0.518434);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25acee0() {
   return (neuron0x25af500()*0.798832);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b26d0() {
   return (neuron0x25af8f0()*-0.288347);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2710() {
   return (neuron0x25afd70()*-0.289513);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2b50() {
   return (neuron0x25b01f0()*0.329763);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2b90() {
   return (neuron0x25b0670()*0.361692);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b2fd0() {
   return (neuron0x25b0b80()*1.04789);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3010() {
   return (neuron0x25347b0()*-0.95657);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3450() {
   return (neuron0x25b1490()*0.389629);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3490() {
   return (neuron0x25b1910()*-0.575633);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b38d0() {
   return (neuron0x25b21e0()*0.0109401);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3910() {
   return (neuron0x25b24b0()*1.50585);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3d50() {
   return (neuron0x25b2930()*2.16715);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b3d90() {
   return (neuron0x25b2db0()*0.421024);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b41d0() {
   return (neuron0x25b3230()*0.0583958);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4210() {
   return (neuron0x25b36b0()*0.966454);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4650() {
   return (neuron0x25b3b30()*0.373073);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b4690() {
   return (neuron0x25b3fb0()*0.566016);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0da0() {
   return (neuron0x25b4430()*-0.209728);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25b0de0() {
   return (neuron0x25ad430()*-0.270918);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3050() {
   return (neuron0x25ad7e0()*-1.10251);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3090() {
   return (neuron0x25adc60()*-1.21613);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c30d0() {
   return (neuron0x25ae0e0()*15.7643);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3110() {
   return (neuron0x25ae5f0()*-12.7969);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3150() {
   return (neuron0x25aea70()*0.784938);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3190() {
   return (neuron0x25aeef0()*1.50326);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c31d0() {
   return (neuron0x25af500()*-4.26682);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3210() {
   return (neuron0x25af8f0()*-1.03518);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3250() {
   return (neuron0x25afd70()*0.00603204);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3290() {
   return (neuron0x25b01f0()*1.75834);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c32d0() {
   return (neuron0x25b0670()*0.326393);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3310() {
   return (neuron0x25b0b80()*-0.488996);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3350() {
   return (neuron0x25347b0()*6.07958);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3390() {
   return (neuron0x25b1490()*-1.00952);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c33d0() {
   return (neuron0x25b1910()*5.96709);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c2ea0() {
   return (neuron0x25b21e0()*-0.438213);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c2ee0() {
   return (neuron0x25b24b0()*0.193791);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3520() {
   return (neuron0x25b2930()*-1.5806);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3560() {
   return (neuron0x25b2db0()*0.450194);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c35a0() {
   return (neuron0x25b3230()*0.217171);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c35e0() {
   return (neuron0x25b36b0()*-0.27113);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3620() {
   return (neuron0x25b3b30()*-0.568674);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3660() {
   return (neuron0x25b3fb0()*-12.6833);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c36a0() {
   return (neuron0x25b4430()*-0.939816);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3a20() {
   return (neuron0x25ad430()*1.10744);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3a60() {
   return (neuron0x25ad7e0()*-0.205898);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3aa0() {
   return (neuron0x25adc60()*0.438213);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3ae0() {
   return (neuron0x25ae0e0()*-0.649106);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3b20() {
   return (neuron0x25ae5f0()*1.19876);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3b60() {
   return (neuron0x25aea70()*0.219516);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3ba0() {
   return (neuron0x25aeef0()*0.0280993);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3be0() {
   return (neuron0x25af500()*-0.189765);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3c20() {
   return (neuron0x25af8f0()*0.189699);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3c60() {
   return (neuron0x25afd70()*0.391305);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3ca0() {
   return (neuron0x25b01f0()*0.116734);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3ce0() {
   return (neuron0x25b0670()*0.482883);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3d20() {
   return (neuron0x25b0b80()*0.0972124);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3d60() {
   return (neuron0x25347b0()*0.170444);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3da0() {
   return (neuron0x25b1490()*0.273503);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3de0() {
   return (neuron0x25b1910()*0.404145);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3870() {
   return (neuron0x25b21e0()*0.17759);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c38b0() {
   return (neuron0x25b24b0()*0.481842);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3f30() {
   return (neuron0x25b2930()*-0.808213);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3f70() {
   return (neuron0x25b2db0()*0.278952);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3fb0() {
   return (neuron0x25b3230()*-0.200642);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c3ff0() {
   return (neuron0x25b36b0()*-0.202168);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4030() {
   return (neuron0x25b3b30()*0.167933);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4070() {
   return (neuron0x25b3fb0()*0.080963);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c40b0() {
   return (neuron0x25b4430()*0.136776);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4430() {
   return (neuron0x25ad430()*-1.60443);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4470() {
   return (neuron0x25ad7e0()*-1.29125);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c44b0() {
   return (neuron0x25adc60()*-0.76953);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c44f0() {
   return (neuron0x25ae0e0()*0.561534);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4530() {
   return (neuron0x25ae5f0()*-0.245764);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4570() {
   return (neuron0x25aea70()*-0.37829);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c45b0() {
   return (neuron0x25aeef0()*0.385746);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c45f0() {
   return (neuron0x25af500()*-0.823397);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4630() {
   return (neuron0x25af8f0()*-0.583341);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4670() {
   return (neuron0x25afd70()*-1.14433);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c46b0() {
   return (neuron0x25b01f0()*0.458238);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c46f0() {
   return (neuron0x25b0670()*-0.00262742);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4730() {
   return (neuron0x25b0b80()*-0.931234);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4770() {
   return (neuron0x25347b0()*-0.247591);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c47b0() {
   return (neuron0x25b1490()*-1.75599);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c47f0() {
   return (neuron0x25b1910()*-0.262377);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4280() {
   return (neuron0x25b21e0()*-1.14463);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c42c0() {
   return (neuron0x25b24b0()*-0.777473);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4940() {
   return (neuron0x25b2930()*-1.6338);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4980() {
   return (neuron0x25b2db0()*-0.457663);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c49c0() {
   return (neuron0x25b3230()*-0.768062);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4a00() {
   return (neuron0x25b36b0()*-1.4685);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4a40() {
   return (neuron0x25b3b30()*-0.534106);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4a80() {
   return (neuron0x25b3fb0()*-1.47936);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4ac0() {
   return (neuron0x25b4430()*-1.48617);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4e40() {
   return (neuron0x25ad430()*3.12106);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4e80() {
   return (neuron0x25ad7e0()*0.226672);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4ec0() {
   return (neuron0x25adc60()*1.59882);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4f00() {
   return (neuron0x25ae0e0()*10.8706);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4f40() {
   return (neuron0x25ae5f0()*-4.56337);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4f80() {
   return (neuron0x25aea70()*1.22213);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4fc0() {
   return (neuron0x25aeef0()*-2.29621);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5000() {
   return (neuron0x25af500()*1.55885);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5040() {
   return (neuron0x25af8f0()*-1.11698);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5080() {
   return (neuron0x25afd70()*0.47228);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c50c0() {
   return (neuron0x25b01f0()*-0.810309);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5100() {
   return (neuron0x25b0670()*0.856736);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5140() {
   return (neuron0x25b0b80()*0.501832);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5180() {
   return (neuron0x25347b0()*3.2349);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c51c0() {
   return (neuron0x25b1490()*-0.324374);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5200() {
   return (neuron0x25b1910()*2.31121);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4c90() {
   return (neuron0x25b21e0()*-0.371433);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c4cd0() {
   return (neuron0x25b24b0()*-0.673271);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5350() {
   return (neuron0x25b2930()*-27.0024);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5390() {
   return (neuron0x25b2db0()*1.01364);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c53d0() {
   return (neuron0x25b3230()*0.605253);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5410() {
   return (neuron0x25b36b0()*1.29094);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5450() {
   return (neuron0x25b3b30()*1.31199);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5490() {
   return (neuron0x25b3fb0()*-1.29391);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c54d0() {
   return (neuron0x25b4430()*0.239885);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5850() {
   return (neuron0x25ad430()*-2.27714);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5890() {
   return (neuron0x25ad7e0()*-1.8451);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c58d0() {
   return (neuron0x25adc60()*-0.623799);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5910() {
   return (neuron0x25ae0e0()*0.94996);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5950() {
   return (neuron0x25ae5f0()*1.17895);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5990() {
   return (neuron0x25aea70()*-2.87054);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c59d0() {
   return (neuron0x25aeef0()*-0.846267);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5a10() {
   return (neuron0x25af500()*-2.41408);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5a50() {
   return (neuron0x25af8f0()*-0.181377);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5a90() {
   return (neuron0x25afd70()*-0.82172);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5ad0() {
   return (neuron0x25b01f0()*0.750169);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5b10() {
   return (neuron0x25b0670()*0.416799);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5b50() {
   return (neuron0x25b0b80()*-1.36287);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5b90() {
   return (neuron0x25347b0()*-0.38617);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5bd0() {
   return (neuron0x25b1490()*-1.71371);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5c10() {
   return (neuron0x25b1910()*0.515871);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c56a0() {
   return (neuron0x25b21e0()*-0.538387);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c56e0() {
   return (neuron0x25b24b0()*-1.68615);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5d60() {
   return (neuron0x25b2930()*-4.31099);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5da0() {
   return (neuron0x25b2db0()*0.810381);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5de0() {
   return (neuron0x25b3230()*0.310568);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5e20() {
   return (neuron0x25b36b0()*-0.362112);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5e60() {
   return (neuron0x25b3b30()*-0.0779994);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5ea0() {
   return (neuron0x25b3fb0()*-2.67548);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c5ee0() {
   return (neuron0x25b4430()*-2.33044);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6260() {
   return (neuron0x25ad430()*-0.49507);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c62a0() {
   return (neuron0x25ad7e0()*0.26527);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c62e0() {
   return (neuron0x25adc60()*0.981477);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6320() {
   return (neuron0x25ae0e0()*-7.24658);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6360() {
   return (neuron0x25ae5f0()*2.42739);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c63a0() {
   return (neuron0x25aea70()*1.00706);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c63e0() {
   return (neuron0x25aeef0()*0.612486);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6420() {
   return (neuron0x25af500()*-2.83217);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6460() {
   return (neuron0x25af8f0()*0.430702);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c64a0() {
   return (neuron0x25afd70()*-0.723374);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c64e0() {
   return (neuron0x25b01f0()*-0.183054);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6520() {
   return (neuron0x25b0670()*-0.276087);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6560() {
   return (neuron0x25b0b80()*0.950816);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c65a0() {
   return (neuron0x25347b0()*-7.8555);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c65e0() {
   return (neuron0x25b1490()*0.475126);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6620() {
   return (neuron0x25b1910()*3.50872);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c60b0() {
   return (neuron0x25b21e0()*-0.208345);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c60f0() {
   return (neuron0x25b24b0()*0.344578);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6770() {
   return (neuron0x25b2930()*-2.04801);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c67b0() {
   return (neuron0x25b2db0()*-0.0836489);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c67f0() {
   return (neuron0x25b3230()*-0.178645);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6830() {
   return (neuron0x25b36b0()*1.22751);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6870() {
   return (neuron0x25b3b30()*0.435241);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c68b0() {
   return (neuron0x25b3fb0()*0.74195);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c68f0() {
   return (neuron0x25b4430()*0.235412);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6c70() {
   return (neuron0x25ad430()*-0.822397);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6cb0() {
   return (neuron0x25ad7e0()*-0.235153);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6cf0() {
   return (neuron0x25adc60()*-0.167669);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6d30() {
   return (neuron0x25ae0e0()*-1.2282);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6d70() {
   return (neuron0x25ae5f0()*-0.996386);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6db0() {
   return (neuron0x25aea70()*-0.423444);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6df0() {
   return (neuron0x25aeef0()*-0.320209);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6e30() {
   return (neuron0x25af500()*-0.64193);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6e70() {
   return (neuron0x25af8f0()*0.0799947);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6eb0() {
   return (neuron0x25afd70()*-0.30838);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6ef0() {
   return (neuron0x25b01f0()*-0.631434);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6f30() {
   return (neuron0x25b0670()*-1.25122);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6f70() {
   return (neuron0x25b0b80()*-0.624253);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6fb0() {
   return (neuron0x25347b0()*-0.578123);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6ff0() {
   return (neuron0x25b1490()*0.0803176);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7030() {
   return (neuron0x25b1910()*-0.939075);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6ac0() {
   return (neuron0x25b21e0()*-0.712767);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c6b00() {
   return (neuron0x25b24b0()*-0.301086);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7180() {
   return (neuron0x25b2930()*0.0513047);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c71c0() {
   return (neuron0x25b2db0()*-0.434572);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7200() {
   return (neuron0x25b3230()*-0.842715);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7240() {
   return (neuron0x25b36b0()*-0.962846);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7280() {
   return (neuron0x25b3b30()*-0.483535);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c72c0() {
   return (neuron0x25b3fb0()*-0.51383);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7300() {
   return (neuron0x25b4430()*0.137409);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7680() {
   return (neuron0x25ad430()*-2.43817);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c76c0() {
   return (neuron0x25ad7e0()*0.0593822);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7700() {
   return (neuron0x25adc60()*1.31344);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7740() {
   return (neuron0x25ae0e0()*5.61458);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7780() {
   return (neuron0x25ae5f0()*0.147431);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c77c0() {
   return (neuron0x25aea70()*0.847751);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7800() {
   return (neuron0x25aeef0()*-1.66301);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7840() {
   return (neuron0x25af500()*0.473468);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7880() {
   return (neuron0x25af8f0()*-0.0655181);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c78c0() {
   return (neuron0x25afd70()*-0.286414);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7900() {
   return (neuron0x25b01f0()*0.242619);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7940() {
   return (neuron0x25b0670()*1.40006);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7980() {
   return (neuron0x25b0b80()*1.25223);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c79c0() {
   return (neuron0x25347b0()*2.06059);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7a00() {
   return (neuron0x25b1490()*0.171291);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7a40() {
   return (neuron0x25b1910()*-2.91016);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c74d0() {
   return (neuron0x25b21e0()*0.118966);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7510() {
   return (neuron0x25b24b0()*1.93833);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7b90() {
   return (neuron0x25b2930()*-11.0115);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7bd0() {
   return (neuron0x25b2db0()*1.2454);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7c10() {
   return (neuron0x25b3230()*-0.650413);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7c50() {
   return (neuron0x25b36b0()*1.0287);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7c90() {
   return (neuron0x25b3b30()*0.588487);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7cd0() {
   return (neuron0x25b3fb0()*1.44176);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7d10() {
   return (neuron0x25b4430()*0.305584);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7f70() {
   return (neuron0x25b6340()*-4.95902);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7fb0() {
   return (neuron0x25b1110()*-3.94081);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c7ff0() {
   return (neuron0x25b6eb0()*-3.61434);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8030() {
   return (neuron0x25b79d0()*0.539173);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8070() {
   return (neuron0x25b83e0()*2.12081);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c80b0() {
   return (neuron0x25b8df0()*-12.0315);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c80f0() {
   return (neuron0x25b69e0()*-18.2278);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8130() {
   return (neuron0x25baa20()*-19.8959);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8170() {
   return (neuron0x25bb430()*-2.77503);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c81b0() {
   return (neuron0x25bbe40()*-10.8292);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c81f0() {
   return (neuron0x25bc850()*5.25479);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8230() {
   return (neuron0x25bd260()*9.2713);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8270() {
   return (neuron0x25bdc70()*-14.8322);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c82b0() {
   return (neuron0x25be680()*8.06204);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c82f0() {
   return (neuron0x25bf090()*2.08056);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8330() {
   return (neuron0x25bfaa0()*11.7732);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad300() {
   return (neuron0x25ba0c0()*4.56036);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25ad340() {
   return (neuron0x25c2d10()*10.2465);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8480() {
   return (neuron0x25c36e0()*1.42776);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c84c0() {
   return (neuron0x25c40f0()*3.59293);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8500() {
   return (neuron0x25c4b00()*-5.54145);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8540() {
   return (neuron0x25c5510()*5.91548);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8580() {
   return (neuron0x25c5f20()*-12.4536);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c85c0() {
   return (neuron0x25c6930()*1.38755);
}

double nnFunc_1C_25_25hi_6000ep_weight::synapse0x25c8600() {
   return (neuron0x25c7340()*4.56738);
}

