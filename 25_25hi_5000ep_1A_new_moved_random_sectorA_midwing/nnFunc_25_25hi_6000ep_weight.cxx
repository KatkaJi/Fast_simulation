#include "25_25hi_5000ep_1A_new_moved_random_sectorA_midwing/nnFunc_25_25hi_6000ep_weight.h"
#include <cmath>

double nnFunc_25_25hi_6000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2ce4990();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_6000ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2ce4990();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cc8f40() {
   return input0;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cc9280() {
   return input1;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cc95c0() {
   return input2;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cc9900() {
   return input3;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cc9c40() {
   return input4;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cca0b0() {
   double input = -7.78372;
   input += synapse0x2c51680();
   input += synapse0x2cb83b0();
   input += synapse0x2cca360();
   input += synapse0x2cca3a0();
   input += synapse0x2cca3e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cca0b0() {
   double input = input0x2cca0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cca420() {
   double input = 0.63953;
   input += synapse0x2cca760();
   input += synapse0x2cca7a0();
   input += synapse0x2cca7e0();
   input += synapse0x2cca820();
   input += synapse0x2cca860();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cca420() {
   double input = input0x2cca420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cca8a0() {
   double input = -1.75997;
   input += synapse0x2ccabe0();
   input += synapse0x2ccac20();
   input += synapse0x2ccac60();
   input += synapse0x2ccaca0();
   input += synapse0x2ccace0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cca8a0() {
   double input = input0x2cca8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccad20() {
   double input = 2.01148;
   input += synapse0x2ccb060();
   input += synapse0x2ccb0a0();
   input += synapse0x2bce4a0();
   input += synapse0x2bce4e0();
   input += synapse0x2ccb1f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccad20() {
   double input = input0x2ccad20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccb230() {
   double input = -2.67032;
   input += synapse0x2ccb570();
   input += synapse0x2ccb5b0();
   input += synapse0x2ccb5f0();
   input += synapse0x2ccb630();
   input += synapse0x2ccb670();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccb230() {
   double input = input0x2ccb230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccb6b0() {
   double input = -18.4005;
   input += synapse0x2ccb9f0();
   input += synapse0x2ccba30();
   input += synapse0x2ccba70();
   input += synapse0x2ccbab0();
   input += synapse0x2ccbaf0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccb6b0() {
   double input = input0x2ccb6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccbb30() {
   double input = 14.0835;
   input += synapse0x2ccbe70();
   input += synapse0x2ccbeb0();
   input += synapse0x2ccbef0();
   input += synapse0x2ccb0e0();
   input += synapse0x2ccb120();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccbb30() {
   double input = input0x2ccbb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccc140() {
   double input = -0.451695;
   input += synapse0x2ccc3f0();
   input += synapse0x2ccc430();
   input += synapse0x2ccc470();
   input += synapse0x2ccc4b0();
   input += synapse0x2ccc4f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccc140() {
   double input = input0x2ccc140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccc530() {
   double input = 2.28507;
   input += synapse0x2ccc870();
   input += synapse0x2ccc8b0();
   input += synapse0x2ccc8f0();
   input += synapse0x2ccc930();
   input += synapse0x2ccc970();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccc530() {
   double input = input0x2ccc530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccc9b0() {
   double input = 17.6742;
   input += synapse0x2ccccf0();
   input += synapse0x2cccd30();
   input += synapse0x2cccd70();
   input += synapse0x2cccdb0();
   input += synapse0x2cccdf0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccc9b0() {
   double input = input0x2ccc9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccce30() {
   double input = -6.49152;
   input += synapse0x2ccd170();
   input += synapse0x2ccd1b0();
   input += synapse0x2ccd1f0();
   input += synapse0x2ccd230();
   input += synapse0x2ccd270();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccce30() {
   double input = input0x2ccce30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccd2b0() {
   double input = -0.949338;
   input += synapse0x2bce2f0();
   input += synapse0x2bce330();
   input += synapse0x2ccd700();
   input += synapse0x2ccd740();
   input += synapse0x2ccd780();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccd2b0() {
   double input = input0x2ccd2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccd7c0() {
   double input = -0.348725;
   input += synapse0x2ccdb00();
   input += synapse0x2ccdb40();
   input += synapse0x2ccdb80();
   input += synapse0x2ccdbc0();
   input += synapse0x2ccdc00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccd7c0() {
   double input = input0x2ccd7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccbf30() {
   double input = -8.13549;
   input += synapse0x2bceac0();
   input += synapse0x2ccc0c0();
   input += synapse0x2ccc100();
   input += synapse0x2cce050();
   input += synapse0x2cce090();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccbf30() {
   double input = input0x2ccbf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cce0d0() {
   double input = 1.18193;
   input += synapse0x2cce410();
   input += synapse0x2cce450();
   input += synapse0x2cce490();
   input += synapse0x2cce4d0();
   input += synapse0x2cce510();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cce0d0() {
   double input = input0x2cce0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cce550() {
   double input = -4.94677;
   input += synapse0x2cce890();
   input += synapse0x2cc9160();
   input += synapse0x2cc91a0();
   input += synapse0x2cc94a0();
   input += synapse0x2cc94e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cce550() {
   double input = input0x2cce550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccee20() {
   double input = -0.996072;
   input += synapse0x2ccefb0();
   input += synapse0x2cceff0();
   input += synapse0x2ccf030();
   input += synapse0x2ccf070();
   input += synapse0x2ccf0b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccee20() {
   double input = input0x2ccee20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccf0f0() {
   double input = 29.9026;
   input += synapse0x2ccf430();
   input += synapse0x2ccf470();
   input += synapse0x2ccf4b0();
   input += synapse0x2ccf4f0();
   input += synapse0x2ccf530();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccf0f0() {
   double input = input0x2ccf0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccf570() {
   double input = -1.38373;
   input += synapse0x2ccf8b0();
   input += synapse0x2ccf8f0();
   input += synapse0x2ccf930();
   input += synapse0x2ccf970();
   input += synapse0x2ccf9b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccf570() {
   double input = input0x2ccf570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccf9f0() {
   double input = -1.04414;
   input += synapse0x2ccfd30();
   input += synapse0x2ccfd70();
   input += synapse0x2ccfdb0();
   input += synapse0x2ccfdf0();
   input += synapse0x2ccfe30();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccf9f0() {
   double input = input0x2ccf9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccfe70() {
   double input = -3.10358;
   input += synapse0x2cd01b0();
   input += synapse0x2cd01f0();
   input += synapse0x2cd0230();
   input += synapse0x2cd0270();
   input += synapse0x2cd02b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccfe70() {
   double input = input0x2ccfe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd02f0() {
   double input = 0.341023;
   input += synapse0x2cd0630();
   input += synapse0x2cd0670();
   input += synapse0x2cd06b0();
   input += synapse0x2cd06f0();
   input += synapse0x2cd0730();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd02f0() {
   double input = input0x2cd02f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd0770() {
   double input = -27.3241;
   input += synapse0x2cd0ab0();
   input += synapse0x2cd0af0();
   input += synapse0x2cd0b30();
   input += synapse0x2cd0b70();
   input += synapse0x2cd0bb0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd0770() {
   double input = input0x2cd0770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd0bf0() {
   double input = -21.8231;
   input += synapse0x2cd0f30();
   input += synapse0x2cd0f70();
   input += synapse0x2cd0fb0();
   input += synapse0x2cd0ff0();
   input += synapse0x2cd1030();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd0bf0() {
   double input = input0x2cd0bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd1070() {
   double input = -0.506032;
   input += synapse0x2cd13b0();
   input += synapse0x2cd13f0();
   input += synapse0x2cd1430();
   input += synapse0x2cd1470();
   input += synapse0x2cd14b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd1070() {
   double input = input0x2cd1070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd2f80() {
   double input = -2.04598;
   input += synapse0x2ccafd0();
   input += synapse0x2ccb010();
   input += synapse0x2ccb4e0();
   input += synapse0x2ccb520();
   input += synapse0x2ccb960();
   input += synapse0x2ccb9a0();
   input += synapse0x2ccbde0();
   input += synapse0x2ccbe20();
   input += synapse0x2ccc360();
   input += synapse0x2ccc3a0();
   input += synapse0x2ccc7e0();
   input += synapse0x2ccc820();
   input += synapse0x2cccc60();
   input += synapse0x2cccca0();
   input += synapse0x2ccd0e0();
   input += synapse0x2ccd120();
   input += synapse0x2ccd560();
   input += synapse0x2ccd5a0();
   input += synapse0x2ccda70();
   input += synapse0x2ccdab0();
   input += synapse0x2cce380();
   input += synapse0x2cce3c0();
   input += synapse0x2cce800();
   input += synapse0x2cce840();
   input += synapse0x2cc9e60();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd2f80() {
   double input = input0x2cd2f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ccdd50() {
   double input = 1.96327;
   input += synapse0x2ccdee0();
   input += synapse0x2ccdf20();
   input += synapse0x2ccdf60();
   input += synapse0x2ccdfa0();
   input += synapse0x2ccdfe0();
   input += synapse0x2cc9ea0();
   input += synapse0x2cd0120();
   input += synapse0x2cd0160();
   input += synapse0x2cd05a0();
   input += synapse0x2cd05e0();
   input += synapse0x2cd0a20();
   input += synapse0x2cd0a60();
   input += synapse0x2cd0ea0();
   input += synapse0x2cd0ee0();
   input += synapse0x2cd1320();
   input += synapse0x2cd1360();
   input += synapse0x2cca2d0();
   input += synapse0x2cca310();
   input += synapse0x2ccf3a0();
   input += synapse0x2ccf3e0();
   input += synapse0x2c51750();
   input += synapse0x2c51790();
   input += synapse0x2cd3a30();
   input += synapse0x2cd3a70();
   input += synapse0x2cd3ab0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ccdd50() {
   double input = input0x2ccdd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd3af0() {
   double input = 1.63926;
   input += synapse0x2ccd5f0();
   input += synapse0x2ccd630();
   input += synapse0x2ccd670();
   input += synapse0x2ccd6b0();
   input += synapse0x2cd4040();
   input += synapse0x2cd4080();
   input += synapse0x2cd40c0();
   input += synapse0x2cd4100();
   input += synapse0x2cd4140();
   input += synapse0x2cd4180();
   input += synapse0x2cd41c0();
   input += synapse0x2cd4200();
   input += synapse0x2cd4240();
   input += synapse0x2cd4280();
   input += synapse0x2cd42c0();
   input += synapse0x2cd4300();
   input += synapse0x2cd3c80();
   input += synapse0x2cd3cc0();
   input += synapse0x2cd4450();
   input += synapse0x2cd4490();
   input += synapse0x2cd44d0();
   input += synapse0x2cd4510();
   input += synapse0x2cd4550();
   input += synapse0x2cd4590();
   input += synapse0x2cd45d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd3af0() {
   double input = input0x2cd3af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd4610() {
   double input = 0.218932;
   input += synapse0x2cd4950();
   input += synapse0x2cd4990();
   input += synapse0x2cd49d0();
   input += synapse0x2cd4a10();
   input += synapse0x2cd4a50();
   input += synapse0x2cd4a90();
   input += synapse0x2cd4ad0();
   input += synapse0x2cd4b10();
   input += synapse0x2cd4b50();
   input += synapse0x2cd4b90();
   input += synapse0x2cd4bd0();
   input += synapse0x2cd4c10();
   input += synapse0x2cd4c50();
   input += synapse0x2cd4c90();
   input += synapse0x2cd4cd0();
   input += synapse0x2cd4d10();
   input += synapse0x2cd47a0();
   input += synapse0x2cd47e0();
   input += synapse0x2cd4e60();
   input += synapse0x2cd4ea0();
   input += synapse0x2cd4ee0();
   input += synapse0x2cd4f20();
   input += synapse0x2cd4f60();
   input += synapse0x2cd4fa0();
   input += synapse0x2cd4fe0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd4610() {
   double input = input0x2cd4610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd5020() {
   double input = 1.8959;
   input += synapse0x2cd5360();
   input += synapse0x2cd53a0();
   input += synapse0x2cd53e0();
   input += synapse0x2cd5420();
   input += synapse0x2cd5460();
   input += synapse0x2cd54a0();
   input += synapse0x2cd54e0();
   input += synapse0x2cd5520();
   input += synapse0x2cd5560();
   input += synapse0x2cd55a0();
   input += synapse0x2cd55e0();
   input += synapse0x2cd5620();
   input += synapse0x2cd5660();
   input += synapse0x2cd56a0();
   input += synapse0x2cd56e0();
   input += synapse0x2cd5720();
   input += synapse0x2cd51b0();
   input += synapse0x2cd51f0();
   input += synapse0x2cd5870();
   input += synapse0x2cd58b0();
   input += synapse0x2cd58f0();
   input += synapse0x2cd5930();
   input += synapse0x2cd5970();
   input += synapse0x2cd59b0();
   input += synapse0x2cd59f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd5020() {
   double input = input0x2cd5020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd5a30() {
   double input = 0.831384;
   input += synapse0x2cd5d70();
   input += synapse0x2cd5db0();
   input += synapse0x2cd5df0();
   input += synapse0x2cd5e30();
   input += synapse0x2cd5e70();
   input += synapse0x2cd5eb0();
   input += synapse0x2cd5ef0();
   input += synapse0x2cd3110();
   input += synapse0x2cd3150();
   input += synapse0x2cd3190();
   input += synapse0x2cd31d0();
   input += synapse0x2cd3210();
   input += synapse0x2cd3250();
   input += synapse0x2cd3290();
   input += synapse0x2cd32d0();
   input += synapse0x2cd3310();
   input += synapse0x2cd5bc0();
   input += synapse0x2cd5c00();
   input += synapse0x2cd3460();
   input += synapse0x2cd34a0();
   input += synapse0x2cd34e0();
   input += synapse0x2cd3520();
   input += synapse0x2cd3560();
   input += synapse0x2cd35a0();
   input += synapse0x2cd35e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd5a30() {
   double input = input0x2cd5a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd3620() {
   double input = -0.839628;
   input += synapse0x2cd38d0();
   input += synapse0x2cd6fd0();
   input += synapse0x2cd7010();
   input += synapse0x2cd7050();
   input += synapse0x2cd7090();
   input += synapse0x2cd70d0();
   input += synapse0x2cd7110();
   input += synapse0x2cd7150();
   input += synapse0x2cd7190();
   input += synapse0x2cd71d0();
   input += synapse0x2cd7210();
   input += synapse0x2cd7250();
   input += synapse0x2cd7290();
   input += synapse0x2cd72d0();
   input += synapse0x2cd7310();
   input += synapse0x2cd7350();
   input += synapse0x2cd37b0();
   input += synapse0x2cd37f0();
   input += synapse0x2cd74a0();
   input += synapse0x2cd74e0();
   input += synapse0x2cd7520();
   input += synapse0x2cd7560();
   input += synapse0x2cd75a0();
   input += synapse0x2cd75e0();
   input += synapse0x2cd7620();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd3620() {
   double input = input0x2cd3620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd7660() {
   double input = 0.928883;
   input += synapse0x2cd79a0();
   input += synapse0x2cd79e0();
   input += synapse0x2cd7a20();
   input += synapse0x2cd7a60();
   input += synapse0x2cd7aa0();
   input += synapse0x2cd7ae0();
   input += synapse0x2cd7b20();
   input += synapse0x2cd7b60();
   input += synapse0x2cd7ba0();
   input += synapse0x2cd7be0();
   input += synapse0x2cd7c20();
   input += synapse0x2cd7c60();
   input += synapse0x2cd7ca0();
   input += synapse0x2cd7ce0();
   input += synapse0x2cd7d20();
   input += synapse0x2cd7d60();
   input += synapse0x2cd77f0();
   input += synapse0x2cd7830();
   input += synapse0x2cd7eb0();
   input += synapse0x2cd7ef0();
   input += synapse0x2cd7f30();
   input += synapse0x2cd7f70();
   input += synapse0x2cd7fb0();
   input += synapse0x2cd7ff0();
   input += synapse0x2cd8030();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd7660() {
   double input = input0x2cd7660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd8070() {
   double input = -0.294209;
   input += synapse0x2cd83b0();
   input += synapse0x2cd83f0();
   input += synapse0x2cd8430();
   input += synapse0x2cd8470();
   input += synapse0x2cd84b0();
   input += synapse0x2cd84f0();
   input += synapse0x2cd8530();
   input += synapse0x2cd8570();
   input += synapse0x2cd85b0();
   input += synapse0x2cd85f0();
   input += synapse0x2cd8630();
   input += synapse0x2cd8670();
   input += synapse0x2cd86b0();
   input += synapse0x2cd86f0();
   input += synapse0x2cd8730();
   input += synapse0x2cd8770();
   input += synapse0x2cd8200();
   input += synapse0x2cd8240();
   input += synapse0x2cd88c0();
   input += synapse0x2cd8900();
   input += synapse0x2cd8940();
   input += synapse0x2cd8980();
   input += synapse0x2cd89c0();
   input += synapse0x2cd8a00();
   input += synapse0x2cd8a40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd8070() {
   double input = input0x2cd8070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd8a80() {
   double input = -6.29755e-05;
   input += synapse0x2cd8dc0();
   input += synapse0x2cd8e00();
   input += synapse0x2cd8e40();
   input += synapse0x2cd8e80();
   input += synapse0x2cd8ec0();
   input += synapse0x2cd8f00();
   input += synapse0x2cd8f40();
   input += synapse0x2cd8f80();
   input += synapse0x2cd8fc0();
   input += synapse0x2cd9000();
   input += synapse0x2cd9040();
   input += synapse0x2cd9080();
   input += synapse0x2cd90c0();
   input += synapse0x2cd9100();
   input += synapse0x2cd9140();
   input += synapse0x2cd9180();
   input += synapse0x2cd8c10();
   input += synapse0x2cd8c50();
   input += synapse0x2cd92d0();
   input += synapse0x2cd9310();
   input += synapse0x2cd9350();
   input += synapse0x2cd9390();
   input += synapse0x2cd93d0();
   input += synapse0x2cd9410();
   input += synapse0x2cd9450();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd8a80() {
   double input = input0x2cd8a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd9490() {
   double input = 0.121112;
   input += synapse0x2cd97d0();
   input += synapse0x2cd9810();
   input += synapse0x2cd9850();
   input += synapse0x2cd9890();
   input += synapse0x2cd98d0();
   input += synapse0x2cd9910();
   input += synapse0x2cd9950();
   input += synapse0x2cd9990();
   input += synapse0x2cd99d0();
   input += synapse0x2cd9a10();
   input += synapse0x2cd9a50();
   input += synapse0x2cd9a90();
   input += synapse0x2cd9ad0();
   input += synapse0x2cd9b10();
   input += synapse0x2cd9b50();
   input += synapse0x2cd9b90();
   input += synapse0x2cd9620();
   input += synapse0x2cd9660();
   input += synapse0x2cd9ce0();
   input += synapse0x2cd9d20();
   input += synapse0x2cd9d60();
   input += synapse0x2cd9da0();
   input += synapse0x2cd9de0();
   input += synapse0x2cd9e20();
   input += synapse0x2cd9e60();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd9490() {
   double input = input0x2cd9490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd9ea0() {
   double input = -0.198624;
   input += synapse0x2cda1e0();
   input += synapse0x2cda220();
   input += synapse0x2cda260();
   input += synapse0x2cda2a0();
   input += synapse0x2cda2e0();
   input += synapse0x2cda320();
   input += synapse0x2cda360();
   input += synapse0x2cda3a0();
   input += synapse0x2cda3e0();
   input += synapse0x2cda420();
   input += synapse0x2cda460();
   input += synapse0x2cda4a0();
   input += synapse0x2cda4e0();
   input += synapse0x2cda520();
   input += synapse0x2cda560();
   input += synapse0x2cda5a0();
   input += synapse0x2cda030();
   input += synapse0x2cda070();
   input += synapse0x2cda6f0();
   input += synapse0x2cda730();
   input += synapse0x2cda770();
   input += synapse0x2cda7b0();
   input += synapse0x2cda7f0();
   input += synapse0x2cda830();
   input += synapse0x2cda870();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd9ea0() {
   double input = input0x2cd9ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cda8b0() {
   double input = -0.841717;
   input += synapse0x2cdabf0();
   input += synapse0x2cdac30();
   input += synapse0x2cdac70();
   input += synapse0x2cdacb0();
   input += synapse0x2cdacf0();
   input += synapse0x2cdad30();
   input += synapse0x2cdad70();
   input += synapse0x2cdadb0();
   input += synapse0x2cdadf0();
   input += synapse0x2cdae30();
   input += synapse0x2cdae70();
   input += synapse0x2cdaeb0();
   input += synapse0x2cdaef0();
   input += synapse0x2cdaf30();
   input += synapse0x2cdaf70();
   input += synapse0x2cdafb0();
   input += synapse0x2cdaa40();
   input += synapse0x2cdaa80();
   input += synapse0x2cdb100();
   input += synapse0x2cdb140();
   input += synapse0x2cdb180();
   input += synapse0x2cdb1c0();
   input += synapse0x2cdb200();
   input += synapse0x2cdb240();
   input += synapse0x2cdb280();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cda8b0() {
   double input = input0x2cda8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cdb2c0() {
   double input = -0.714907;
   input += synapse0x2cdb600();
   input += synapse0x2cdb640();
   input += synapse0x2cdb680();
   input += synapse0x2cdb6c0();
   input += synapse0x2cdb700();
   input += synapse0x2cdb740();
   input += synapse0x2cdb780();
   input += synapse0x2cdb7c0();
   input += synapse0x2cdb800();
   input += synapse0x2cdb840();
   input += synapse0x2cdb880();
   input += synapse0x2cdb8c0();
   input += synapse0x2cdb900();
   input += synapse0x2cdb940();
   input += synapse0x2cdb980();
   input += synapse0x2cdb9c0();
   input += synapse0x2cdb450();
   input += synapse0x2cdb490();
   input += synapse0x2cdbb10();
   input += synapse0x2cdbb50();
   input += synapse0x2cdbb90();
   input += synapse0x2cdbbd0();
   input += synapse0x2cdbc10();
   input += synapse0x2cdbc50();
   input += synapse0x2cdbc90();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cdb2c0() {
   double input = input0x2cdb2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cdbcd0() {
   double input = -0.916406;
   input += synapse0x2cdc010();
   input += synapse0x2cdc050();
   input += synapse0x2cdc090();
   input += synapse0x2cdc0d0();
   input += synapse0x2cdc110();
   input += synapse0x2cdc150();
   input += synapse0x2cdc190();
   input += synapse0x2cdc1d0();
   input += synapse0x2cdc210();
   input += synapse0x2cdc250();
   input += synapse0x2cdc290();
   input += synapse0x2cdc2d0();
   input += synapse0x2cdc310();
   input += synapse0x2cdc350();
   input += synapse0x2cdc390();
   input += synapse0x2cdc3d0();
   input += synapse0x2cdbe60();
   input += synapse0x2cdbea0();
   input += synapse0x2cdc520();
   input += synapse0x2cdc560();
   input += synapse0x2cdc5a0();
   input += synapse0x2cdc5e0();
   input += synapse0x2cdc620();
   input += synapse0x2cdc660();
   input += synapse0x2cdc6a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cdbcd0() {
   double input = input0x2cdbcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cdc6e0() {
   double input = -0.299068;
   input += synapse0x2cdca20();
   input += synapse0x2cca240();
   input += synapse0x2cca280();
   input += synapse0x2cca640();
   input += synapse0x2cca680();
   input += synapse0x2ccaac0();
   input += synapse0x2ccab00();
   input += synapse0x2ccaf40();
   input += synapse0x2ccaf80();
   input += synapse0x2ccb450();
   input += synapse0x2ccb490();
   input += synapse0x2ccb8d0();
   input += synapse0x2ccb910();
   input += synapse0x2ccbd50();
   input += synapse0x2ccbd90();
   input += synapse0x2ccc2d0();
   input += synapse0x2ccc310();
   input += synapse0x2ccc750();
   input += synapse0x2ccc790();
   input += synapse0x2cccbd0();
   input += synapse0x2cccc10();
   input += synapse0x2ccd050();
   input += synapse0x2ccd090();
   input += synapse0x2ccd4d0();
   input += synapse0x2ccd510();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cdc6e0() {
   double input = input0x2cdc6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cd6d00() {
   double input = -0.811635;
   input += synapse0x2cd6e90();
   input += synapse0x2cd6ed0();
   input += synapse0x2cce770();
   input += synapse0x2cce7b0();
   input += synapse0x2cdc870();
   input += synapse0x2cdc8b0();
   input += synapse0x2cc9b20();
   input += synapse0x2cc9b60();
   input += synapse0x2ccf310();
   input += synapse0x2ccf350();
   input += synapse0x2ccf790();
   input += synapse0x2ccf7d0();
   input += synapse0x2ccfc10();
   input += synapse0x2ccfc50();
   input += synapse0x2cd0090();
   input += synapse0x2cd00d0();
   input += synapse0x2cd0510();
   input += synapse0x2cd0550();
   input += synapse0x2cd0990();
   input += synapse0x2cd09d0();
   input += synapse0x2cd0e10();
   input += synapse0x2cd0e50();
   input += synapse0x2cd1290();
   input += synapse0x2cd12d0();
   input += synapse0x2ccd9e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cd6d00() {
   double input = input0x2cd6d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2cdf950() {
   double input = 1.2106;
   input += synapse0x2ccda20();
   input += synapse0x2cdfc90();
   input += synapse0x2cdfcd0();
   input += synapse0x2cdfd10();
   input += synapse0x2cdfd50();
   input += synapse0x2cdfd90();
   input += synapse0x2cdfdd0();
   input += synapse0x2cdfe10();
   input += synapse0x2cdfe50();
   input += synapse0x2cdfe90();
   input += synapse0x2cdfed0();
   input += synapse0x2cdff10();
   input += synapse0x2cdff50();
   input += synapse0x2cdff90();
   input += synapse0x2cdffd0();
   input += synapse0x2ce0010();
   input += synapse0x2cdfae0();
   input += synapse0x2cdfb20();
   input += synapse0x2ce0160();
   input += synapse0x2ce01a0();
   input += synapse0x2ce01e0();
   input += synapse0x2ce0220();
   input += synapse0x2ce0260();
   input += synapse0x2ce02a0();
   input += synapse0x2ce02e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2cdf950() {
   double input = input0x2cdf950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce0320() {
   double input = -0.546398;
   input += synapse0x2ce0660();
   input += synapse0x2ce06a0();
   input += synapse0x2ce06e0();
   input += synapse0x2ce0720();
   input += synapse0x2ce0760();
   input += synapse0x2ce07a0();
   input += synapse0x2ce07e0();
   input += synapse0x2ce0820();
   input += synapse0x2ce0860();
   input += synapse0x2ce08a0();
   input += synapse0x2ce08e0();
   input += synapse0x2ce0920();
   input += synapse0x2ce0960();
   input += synapse0x2ce09a0();
   input += synapse0x2ce09e0();
   input += synapse0x2ce0a20();
   input += synapse0x2ce04b0();
   input += synapse0x2ce04f0();
   input += synapse0x2ce0b70();
   input += synapse0x2ce0bb0();
   input += synapse0x2ce0bf0();
   input += synapse0x2ce0c30();
   input += synapse0x2ce0c70();
   input += synapse0x2ce0cb0();
   input += synapse0x2ce0cf0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce0320() {
   double input = input0x2ce0320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce0d30() {
   double input = 0.904789;
   input += synapse0x2ce1070();
   input += synapse0x2ce10b0();
   input += synapse0x2ce10f0();
   input += synapse0x2ce1130();
   input += synapse0x2ce1170();
   input += synapse0x2ce11b0();
   input += synapse0x2ce11f0();
   input += synapse0x2ce1230();
   input += synapse0x2ce1270();
   input += synapse0x2ce12b0();
   input += synapse0x2ce12f0();
   input += synapse0x2ce1330();
   input += synapse0x2ce1370();
   input += synapse0x2ce13b0();
   input += synapse0x2ce13f0();
   input += synapse0x2ce1430();
   input += synapse0x2ce0ec0();
   input += synapse0x2ce0f00();
   input += synapse0x2ce1580();
   input += synapse0x2ce15c0();
   input += synapse0x2ce1600();
   input += synapse0x2ce1640();
   input += synapse0x2ce1680();
   input += synapse0x2ce16c0();
   input += synapse0x2ce1700();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce0d30() {
   double input = input0x2ce0d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce1740() {
   double input = -0.0880466;
   input += synapse0x2ce1a80();
   input += synapse0x2ce1ac0();
   input += synapse0x2ce1b00();
   input += synapse0x2ce1b40();
   input += synapse0x2ce1b80();
   input += synapse0x2ce1bc0();
   input += synapse0x2ce1c00();
   input += synapse0x2ce1c40();
   input += synapse0x2ce1c80();
   input += synapse0x2ce1cc0();
   input += synapse0x2ce1d00();
   input += synapse0x2ce1d40();
   input += synapse0x2ce1d80();
   input += synapse0x2ce1dc0();
   input += synapse0x2ce1e00();
   input += synapse0x2ce1e40();
   input += synapse0x2ce18d0();
   input += synapse0x2ce1910();
   input += synapse0x2ce1f90();
   input += synapse0x2ce1fd0();
   input += synapse0x2ce2010();
   input += synapse0x2ce2050();
   input += synapse0x2ce2090();
   input += synapse0x2ce20d0();
   input += synapse0x2ce2110();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce1740() {
   double input = input0x2ce1740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce2150() {
   double input = 0.600633;
   input += synapse0x2ce2490();
   input += synapse0x2ce24d0();
   input += synapse0x2ce2510();
   input += synapse0x2ce2550();
   input += synapse0x2ce2590();
   input += synapse0x2ce25d0();
   input += synapse0x2ce2610();
   input += synapse0x2ce2650();
   input += synapse0x2ce2690();
   input += synapse0x2ce26d0();
   input += synapse0x2ce2710();
   input += synapse0x2ce2750();
   input += synapse0x2ce2790();
   input += synapse0x2ce27d0();
   input += synapse0x2ce2810();
   input += synapse0x2ce2850();
   input += synapse0x2ce22e0();
   input += synapse0x2ce2320();
   input += synapse0x2ce29a0();
   input += synapse0x2ce29e0();
   input += synapse0x2ce2a20();
   input += synapse0x2ce2a60();
   input += synapse0x2ce2aa0();
   input += synapse0x2ce2ae0();
   input += synapse0x2ce2b20();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce2150() {
   double input = input0x2ce2150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce2b60() {
   double input = -1.05077;
   input += synapse0x2ce2ea0();
   input += synapse0x2ce2ee0();
   input += synapse0x2ce2f20();
   input += synapse0x2ce2f60();
   input += synapse0x2ce2fa0();
   input += synapse0x2ce2fe0();
   input += synapse0x2ce3020();
   input += synapse0x2ce3060();
   input += synapse0x2ce30a0();
   input += synapse0x2ce30e0();
   input += synapse0x2ce3120();
   input += synapse0x2ce3160();
   input += synapse0x2ce31a0();
   input += synapse0x2ce31e0();
   input += synapse0x2ce3220();
   input += synapse0x2ce3260();
   input += synapse0x2ce2cf0();
   input += synapse0x2ce2d30();
   input += synapse0x2ce33b0();
   input += synapse0x2ce33f0();
   input += synapse0x2ce3430();
   input += synapse0x2ce3470();
   input += synapse0x2ce34b0();
   input += synapse0x2ce34f0();
   input += synapse0x2ce3530();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce2b60() {
   double input = input0x2ce2b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce3570() {
   double input = 0.256846;
   input += synapse0x2ce38b0();
   input += synapse0x2ce38f0();
   input += synapse0x2ce3930();
   input += synapse0x2ce3970();
   input += synapse0x2ce39b0();
   input += synapse0x2ce39f0();
   input += synapse0x2ce3a30();
   input += synapse0x2ce3a70();
   input += synapse0x2ce3ab0();
   input += synapse0x2ce3af0();
   input += synapse0x2ce3b30();
   input += synapse0x2ce3b70();
   input += synapse0x2ce3bb0();
   input += synapse0x2ce3bf0();
   input += synapse0x2ce3c30();
   input += synapse0x2ce3c70();
   input += synapse0x2ce3700();
   input += synapse0x2ce3740();
   input += synapse0x2ce3dc0();
   input += synapse0x2ce3e00();
   input += synapse0x2ce3e40();
   input += synapse0x2ce3e80();
   input += synapse0x2ce3ec0();
   input += synapse0x2ce3f00();
   input += synapse0x2ce3f40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce3570() {
   double input = input0x2ce3570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce3f80() {
   double input = -0.467894;
   input += synapse0x2ce42c0();
   input += synapse0x2ce4300();
   input += synapse0x2ce4340();
   input += synapse0x2ce4380();
   input += synapse0x2ce43c0();
   input += synapse0x2ce4400();
   input += synapse0x2ce4440();
   input += synapse0x2ce4480();
   input += synapse0x2ce44c0();
   input += synapse0x2ce4500();
   input += synapse0x2ce4540();
   input += synapse0x2ce4580();
   input += synapse0x2ce45c0();
   input += synapse0x2ce4600();
   input += synapse0x2ce4640();
   input += synapse0x2ce4680();
   input += synapse0x2ce4110();
   input += synapse0x2ce4150();
   input += synapse0x2ce47d0();
   input += synapse0x2ce4810();
   input += synapse0x2ce4850();
   input += synapse0x2ce4890();
   input += synapse0x2ce48d0();
   input += synapse0x2ce4910();
   input += synapse0x2ce4950();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce3f80() {
   double input = input0x2ce3f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2ce4990() {
   double input = -1.46068;
   input += synapse0x2ce4bb0();
   input += synapse0x2ce4bf0();
   input += synapse0x2ce4c30();
   input += synapse0x2ce4c70();
   input += synapse0x2ce4cb0();
   input += synapse0x2ce4cf0();
   input += synapse0x2ce4d30();
   input += synapse0x2ce4d70();
   input += synapse0x2ce4db0();
   input += synapse0x2ce4df0();
   input += synapse0x2ce4e30();
   input += synapse0x2ce4e70();
   input += synapse0x2ce4eb0();
   input += synapse0x2ce4ef0();
   input += synapse0x2ce4f30();
   input += synapse0x2ce4f70();
   input += synapse0x2cc9f80();
   input += synapse0x2cc9fc0();
   input += synapse0x2ce50c0();
   input += synapse0x2ce5100();
   input += synapse0x2ce5140();
   input += synapse0x2ce5180();
   input += synapse0x2ce51c0();
   input += synapse0x2ce5200();
   input += synapse0x2ce5240();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2ce4990() {
   double input = input0x2ce4990();
   return (input * 4.53253)+148.481;
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2c51680() {
   return (neuron0x2cc8f40()*-0.0522571);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cb83b0() {
   return (neuron0x2cc9280()*0.695126);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca360() {
   return (neuron0x2cc95c0()*-0.49136);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca3a0() {
   return (neuron0x2cc9900()*14.7666);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca3e0() {
   return (neuron0x2cc9c40()*-1.15726);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca760() {
   return (neuron0x2cc8f40()*-3.12513);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca7a0() {
   return (neuron0x2cc9280()*0.265756);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca7e0() {
   return (neuron0x2cc95c0()*0.544272);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca820() {
   return (neuron0x2cc9900()*6.01944);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca860() {
   return (neuron0x2cc9c40()*1.15366);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccabe0() {
   return (neuron0x2cc8f40()*0.00656478);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccac20() {
   return (neuron0x2cc9280()*-0.832532);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccac60() {
   return (neuron0x2cc95c0()*0.121393);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccaca0() {
   return (neuron0x2cc9900()*9.14443);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccace0() {
   return (neuron0x2cc9c40()*-2.36484);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb060() {
   return (neuron0x2cc8f40()*-0.0512208);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb0a0() {
   return (neuron0x2cc9280()*0.281834);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2bce4a0() {
   return (neuron0x2cc95c0()*-0.800884);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2bce4e0() {
   return (neuron0x2cc9900()*-6.55832);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb1f0() {
   return (neuron0x2cc9c40()*0.966138);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb570() {
   return (neuron0x2cc8f40()*2.55586);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb5b0() {
   return (neuron0x2cc9280()*-1.26931);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb5f0() {
   return (neuron0x2cc95c0()*-3.72289);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb630() {
   return (neuron0x2cc9900()*4.4871);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb670() {
   return (neuron0x2cc9c40()*-1.89307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb9f0() {
   return (neuron0x2cc8f40()*-0.03345);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccba30() {
   return (neuron0x2cc9280()*0.816046);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccba70() {
   return (neuron0x2cc95c0()*-0.328036);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbab0() {
   return (neuron0x2cc9900()*16.4938);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbaf0() {
   return (neuron0x2cc9c40()*8.77209);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbe70() {
   return (neuron0x2cc8f40()*0.00306278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbeb0() {
   return (neuron0x2cc9280()*0.0861095);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbef0() {
   return (neuron0x2cc95c0()*0.0278961);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb0e0() {
   return (neuron0x2cc9900()*-10.8401);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb120() {
   return (neuron0x2cc9c40()*-7.68839);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc3f0() {
   return (neuron0x2cc8f40()*1.7178);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc430() {
   return (neuron0x2cc9280()*-0.215908);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc470() {
   return (neuron0x2cc95c0()*-0.783747);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc4b0() {
   return (neuron0x2cc9900()*-0.480982);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc4f0() {
   return (neuron0x2cc9c40()*0.284253);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc870() {
   return (neuron0x2cc8f40()*-2.60207);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc8b0() {
   return (neuron0x2cc9280()*1.72159);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc8f0() {
   return (neuron0x2cc95c0()*-0.789083);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc930() {
   return (neuron0x2cc9900()*0.868593);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc970() {
   return (neuron0x2cc9c40()*1.1591);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccccf0() {
   return (neuron0x2cc8f40()*0.0631674);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccd30() {
   return (neuron0x2cc9280()*0.000367477);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccd70() {
   return (neuron0x2cc95c0()*0.612139);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccdb0() {
   return (neuron0x2cc9900()*-16.3083);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccdf0() {
   return (neuron0x2cc9c40()*-4.54152);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd170() {
   return (neuron0x2cc8f40()*-0.0217772);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd1b0() {
   return (neuron0x2cc9280()*0.448927);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd1f0() {
   return (neuron0x2cc95c0()*-0.293823);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd230() {
   return (neuron0x2cc9900()*10.8782);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd270() {
   return (neuron0x2cc9c40()*1.50315);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2bce2f0() {
   return (neuron0x2cc8f40()*-1.89946);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2bce330() {
   return (neuron0x2cc9280()*1.11658);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd700() {
   return (neuron0x2cc95c0()*2.53463);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd740() {
   return (neuron0x2cc9900()*7.68922);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd780() {
   return (neuron0x2cc9c40()*-0.284245);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdb00() {
   return (neuron0x2cc8f40()*2.34335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdb40() {
   return (neuron0x2cc9280()*-2.87679);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdb80() {
   return (neuron0x2cc95c0()*-2.64684);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdbc0() {
   return (neuron0x2cc9900()*0.527677);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdc00() {
   return (neuron0x2cc9c40()*-0.800747);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2bceac0() {
   return (neuron0x2cc8f40()*-0.0160923);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc0c0() {
   return (neuron0x2cc9280()*0.0389603);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc100() {
   return (neuron0x2cc95c0()*-0.169787);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce050() {
   return (neuron0x2cc9900()*10.6093);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce090() {
   return (neuron0x2cc9c40()*0.603367);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce410() {
   return (neuron0x2cc8f40()*-1.09662);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce450() {
   return (neuron0x2cc9280()*2.63375);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce490() {
   return (neuron0x2cc95c0()*2.36685);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce4d0() {
   return (neuron0x2cc9900()*0.820581);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce510() {
   return (neuron0x2cc9c40()*2.30809);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce890() {
   return (neuron0x2cc8f40()*-0.051321);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9160() {
   return (neuron0x2cc9280()*0.788678);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc91a0() {
   return (neuron0x2cc95c0()*-0.582278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc94a0() {
   return (neuron0x2cc9900()*10.0569);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc94e0() {
   return (neuron0x2cc9c40()*1.34907);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccefb0() {
   return (neuron0x2cc8f40()*2.50239);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cceff0() {
   return (neuron0x2cc9280()*-1.70565);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf030() {
   return (neuron0x2cc95c0()*-2.89907);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf070() {
   return (neuron0x2cc9900()*-1.28026);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf0b0() {
   return (neuron0x2cc9c40()*-1.41699);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf430() {
   return (neuron0x2cc8f40()*0.0250002);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf470() {
   return (neuron0x2cc9280()*-0.351453);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf4b0() {
   return (neuron0x2cc95c0()*0.20775);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf4f0() {
   return (neuron0x2cc9900()*-29.6588);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf530() {
   return (neuron0x2cc9c40()*-14.8049);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf8b0() {
   return (neuron0x2cc8f40()*2.9468);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf8f0() {
   return (neuron0x2cc9280()*-1.68454);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf930() {
   return (neuron0x2cc95c0()*1.71143);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf970() {
   return (neuron0x2cc9900()*-2.62026);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf9b0() {
   return (neuron0x2cc9c40()*-1.04619);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfd30() {
   return (neuron0x2cc8f40()*3.72449);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfd70() {
   return (neuron0x2cc9280()*-2.06502);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfdb0() {
   return (neuron0x2cc95c0()*-5.22229);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfdf0() {
   return (neuron0x2cc9900()*1.22332);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfe30() {
   return (neuron0x2cc9c40()*-1.12855);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd01b0() {
   return (neuron0x2cc8f40()*-0.0770326);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd01f0() {
   return (neuron0x2cc9280()*-0.643256);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0230() {
   return (neuron0x2cc95c0()*-1.04794);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0270() {
   return (neuron0x2cc9900()*7.35137);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd02b0() {
   return (neuron0x2cc9c40()*-3.74583);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0630() {
   return (neuron0x2cc8f40()*-1.58521);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0670() {
   return (neuron0x2cc9280()*1.05085);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd06b0() {
   return (neuron0x2cc95c0()*0.437571);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd06f0() {
   return (neuron0x2cc9900()*6.39815);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0730() {
   return (neuron0x2cc9c40()*0.131724);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0ab0() {
   return (neuron0x2cc8f40()*0.0141761);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0af0() {
   return (neuron0x2cc9280()*0.554101);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0b30() {
   return (neuron0x2cc95c0()*0.118355);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0b70() {
   return (neuron0x2cc9900()*14.6582);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0bb0() {
   return (neuron0x2cc9c40()*17.5939);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0f30() {
   return (neuron0x2cc8f40()*0.0187373);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0f70() {
   return (neuron0x2cc9280()*-0.0258303);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0fb0() {
   return (neuron0x2cc95c0()*0.261359);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0ff0() {
   return (neuron0x2cc9900()*15.0918);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd1030() {
   return (neuron0x2cc9c40()*15.0866);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd13b0() {
   return (neuron0x2cc8f40()*1.24284);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd13f0() {
   return (neuron0x2cc9280()*-2.40634);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd1430() {
   return (neuron0x2cc95c0()*-2.48216);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd1470() {
   return (neuron0x2cc9900()*-3.12833);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd14b0() {
   return (neuron0x2cc9c40()*-0.252033);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccafd0() {
   return (neuron0x2cca0b0()*-0.0479179);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb010() {
   return (neuron0x2cca420()*-0.950491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb4e0() {
   return (neuron0x2cca8a0()*0.606491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb520() {
   return (neuron0x2ccad20()*-0.417233);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb960() {
   return (neuron0x2ccb230()*0.906172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb9a0() {
   return (neuron0x2ccb6b0()*-0.548513);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbde0() {
   return (neuron0x2ccbb30()*-0.609523);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbe20() {
   return (neuron0x2ccc140()*-0.332716);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc360() {
   return (neuron0x2ccc530()*-2.28778);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc3a0() {
   return (neuron0x2ccc9b0()*-1.79916);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc7e0() {
   return (neuron0x2ccce30()*2.71724);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc820() {
   return (neuron0x2ccd2b0()*-1.65021);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccc60() {
   return (neuron0x2ccd7c0()*0.011425);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccca0() {
   return (neuron0x2ccbf30()*6.27628);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd0e0() {
   return (neuron0x2cce0d0()*-0.201382);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd120() {
   return (neuron0x2cce550()*-1.20609);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd560() {
   return (neuron0x2ccee20()*-0.165851);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd5a0() {
   return (neuron0x2ccf0f0()*-9.66519);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccda70() {
   return (neuron0x2ccf570()*0.073496);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdab0() {
   return (neuron0x2ccf9f0()*-0.1157);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce380() {
   return (neuron0x2ccfe70()*0.997345);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce3c0() {
   return (neuron0x2cd02f0()*-0.246614);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce800() {
   return (neuron0x2cd0770()*3.65736);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce840() {
   return (neuron0x2cd0bf0()*-0.53821);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9e60() {
   return (neuron0x2cd1070()*-0.704502);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdee0() {
   return (neuron0x2cca0b0()*-2.42325);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdf20() {
   return (neuron0x2cca420()*0.832856);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdf60() {
   return (neuron0x2cca8a0()*-4.80692);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdfa0() {
   return (neuron0x2ccad20()*0.525868);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccdfe0() {
   return (neuron0x2ccb230()*-1.59349);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9ea0() {
   return (neuron0x2ccb6b0()*-3.46764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0120() {
   return (neuron0x2ccbb30()*2.31518);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0160() {
   return (neuron0x2ccc140()*0.102051);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd05a0() {
   return (neuron0x2ccc530()*3.08483);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd05e0() {
   return (neuron0x2ccc9b0()*0.478136);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0a20() {
   return (neuron0x2ccce30()*-2.85023);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0a60() {
   return (neuron0x2ccd2b0()*1.15965);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0ea0() {
   return (neuron0x2ccd7c0()*-0.718013);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0ee0() {
   return (neuron0x2ccbf30()*-4.90729);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd1320() {
   return (neuron0x2cce0d0()*1.63712);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd1360() {
   return (neuron0x2cce550()*0.425843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca2d0() {
   return (neuron0x2ccee20()*1.21214);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca310() {
   return (neuron0x2ccf0f0()*12.3516);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf3a0() {
   return (neuron0x2ccf570()*-0.656407);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf3e0() {
   return (neuron0x2ccf9f0()*-0.100325);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2c51750() {
   return (neuron0x2ccfe70()*-1.29107);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2c51790() {
   return (neuron0x2cd02f0()*0.186365);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3a30() {
   return (neuron0x2cd0770()*-3.43989);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3a70() {
   return (neuron0x2cd0bf0()*0.153609);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3ab0() {
   return (neuron0x2cd1070()*0.631529);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd5f0() {
   return (neuron0x2cca0b0()*1.74162);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd630() {
   return (neuron0x2cca420()*0.732327);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd670() {
   return (neuron0x2cca8a0()*0.862793);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd6b0() {
   return (neuron0x2ccad20()*0.766638);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4040() {
   return (neuron0x2ccb230()*2.05665);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4080() {
   return (neuron0x2ccb6b0()*2.4856);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd40c0() {
   return (neuron0x2ccbb30()*0.884956);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4100() {
   return (neuron0x2ccc140()*0.913687);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4140() {
   return (neuron0x2ccc530()*-0.128823);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4180() {
   return (neuron0x2ccc9b0()*0.508289);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd41c0() {
   return (neuron0x2ccce30()*1.44946);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4200() {
   return (neuron0x2ccd2b0()*2.78259);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4240() {
   return (neuron0x2ccd7c0()*0.342564);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4280() {
   return (neuron0x2ccbf30()*1.33738);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd42c0() {
   return (neuron0x2cce0d0()*1.20227);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4300() {
   return (neuron0x2cce550()*1.65049);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3c80() {
   return (neuron0x2ccee20()*0.326196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3cc0() {
   return (neuron0x2ccf0f0()*0.609558);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4450() {
   return (neuron0x2ccf570()*1.58865);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4490() {
   return (neuron0x2ccf9f0()*0.531043);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd44d0() {
   return (neuron0x2ccfe70()*1.83543);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4510() {
   return (neuron0x2cd02f0()*1.37308);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4550() {
   return (neuron0x2cd0770()*2.05453);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4590() {
   return (neuron0x2cd0bf0()*1.16307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd45d0() {
   return (neuron0x2cd1070()*1.05893);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4950() {
   return (neuron0x2cca0b0()*0.282259);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4990() {
   return (neuron0x2cca420()*0.798116);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd49d0() {
   return (neuron0x2cca8a0()*0.154731);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4a10() {
   return (neuron0x2ccad20()*-0.532762);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4a50() {
   return (neuron0x2ccb230()*0.959815);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4a90() {
   return (neuron0x2ccb6b0()*0.624317);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4ad0() {
   return (neuron0x2ccbb30()*0.0815516);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4b10() {
   return (neuron0x2ccc140()*-0.0921643);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4b50() {
   return (neuron0x2ccc530()*-0.0986391);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4b90() {
   return (neuron0x2ccc9b0()*-0.357393);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4bd0() {
   return (neuron0x2ccce30()*-0.0345086);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4c10() {
   return (neuron0x2ccd2b0()*1.25718);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4c50() {
   return (neuron0x2ccd7c0()*0.505553);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4c90() {
   return (neuron0x2ccbf30()*0.976186);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4cd0() {
   return (neuron0x2cce0d0()*0.690516);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4d10() {
   return (neuron0x2cce550()*0.52291);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd47a0() {
   return (neuron0x2ccee20()*-0.53232);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd47e0() {
   return (neuron0x2ccf0f0()*-0.251594);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4e60() {
   return (neuron0x2ccf570()*0.316833);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4ea0() {
   return (neuron0x2ccf9f0()*-0.688949);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4ee0() {
   return (neuron0x2ccfe70()*0.116328);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4f20() {
   return (neuron0x2cd02f0()*1.26892);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4f60() {
   return (neuron0x2cd0770()*1.30219);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4fa0() {
   return (neuron0x2cd0bf0()*0.495443);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd4fe0() {
   return (neuron0x2cd1070()*-1.06397);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5360() {
   return (neuron0x2cca0b0()*0.348357);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd53a0() {
   return (neuron0x2cca420()*1.14349);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd53e0() {
   return (neuron0x2cca8a0()*0.630627);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5420() {
   return (neuron0x2ccad20()*-0.213069);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5460() {
   return (neuron0x2ccb230()*0.271868);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd54a0() {
   return (neuron0x2ccb6b0()*1.33753);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd54e0() {
   return (neuron0x2ccbb30()*-0.00501876);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5520() {
   return (neuron0x2ccc140()*0.0671549);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5560() {
   return (neuron0x2ccc530()*2.02158);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd55a0() {
   return (neuron0x2ccc9b0()*1.03618);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd55e0() {
   return (neuron0x2ccce30()*-0.0565399);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5620() {
   return (neuron0x2ccd2b0()*2.35357);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5660() {
   return (neuron0x2ccd7c0()*0.329209);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd56a0() {
   return (neuron0x2ccbf30()*0.722715);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd56e0() {
   return (neuron0x2cce0d0()*-0.51727);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5720() {
   return (neuron0x2cce550()*0.702164);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd51b0() {
   return (neuron0x2ccee20()*-0.190719);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd51f0() {
   return (neuron0x2ccf0f0()*1.52211);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5870() {
   return (neuron0x2ccf570()*0.161172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd58b0() {
   return (neuron0x2ccf9f0()*0.104135);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd58f0() {
   return (neuron0x2ccfe70()*-1.00501);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5930() {
   return (neuron0x2cd02f0()*1.73642);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5970() {
   return (neuron0x2cd0770()*1.18566);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd59b0() {
   return (neuron0x2cd0bf0()*0.705889);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd59f0() {
   return (neuron0x2cd1070()*-0.00983689);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5d70() {
   return (neuron0x2cca0b0()*0.729755);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5db0() {
   return (neuron0x2cca420()*1.05233);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5df0() {
   return (neuron0x2cca8a0()*0.548574);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5e30() {
   return (neuron0x2ccad20()*0.126652);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5e70() {
   return (neuron0x2ccb230()*1.98332);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5eb0() {
   return (neuron0x2ccb6b0()*1.02305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5ef0() {
   return (neuron0x2ccbb30()*0.0781498);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3110() {
   return (neuron0x2ccc140()*0.0980011);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3150() {
   return (neuron0x2ccc530()*-1.74645);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3190() {
   return (neuron0x2ccc9b0()*-0.162135);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd31d0() {
   return (neuron0x2ccce30()*0.557605);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3210() {
   return (neuron0x2ccd2b0()*1.16283);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3250() {
   return (neuron0x2ccd7c0()*0.940626);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3290() {
   return (neuron0x2ccbf30()*1.71405);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd32d0() {
   return (neuron0x2cce0d0()*0.0757444);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3310() {
   return (neuron0x2cce550()*0.0892548);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5bc0() {
   return (neuron0x2ccee20()*-1.46624);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd5c00() {
   return (neuron0x2ccf0f0()*-0.807139);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3460() {
   return (neuron0x2ccf570()*1.03423);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd34a0() {
   return (neuron0x2ccf9f0()*-0.53452);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd34e0() {
   return (neuron0x2ccfe70()*0.357577);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3520() {
   return (neuron0x2cd02f0()*2.238);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd3560() {
   return (neuron0x2cd0770()*2.33649);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd35a0() {
   return (neuron0x2cd0bf0()*2.12771);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd35e0() {
   return (neuron0x2cd1070()*-1.98237);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd38d0() {
   return (neuron0x2cca0b0()*-0.303419);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd6fd0() {
   return (neuron0x2cca420()*-0.834044);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7010() {
   return (neuron0x2cca8a0()*-0.622358);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7050() {
   return (neuron0x2ccad20()*0.0554958);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7090() {
   return (neuron0x2ccb230()*-1.5547);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd70d0() {
   return (neuron0x2ccb6b0()*-2.27014);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7110() {
   return (neuron0x2ccbb30()*0.577108);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7150() {
   return (neuron0x2ccc140()*-0.763712);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7190() {
   return (neuron0x2ccc530()*0.97352);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd71d0() {
   return (neuron0x2ccc9b0()*0.179894);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7210() {
   return (neuron0x2ccce30()*-0.047912);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7250() {
   return (neuron0x2ccd2b0()*-1.6728);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7290() {
   return (neuron0x2ccd7c0()*-0.655047);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd72d0() {
   return (neuron0x2ccbf30()*-1.31137);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7310() {
   return (neuron0x2cce0d0()*-0.423323);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7350() {
   return (neuron0x2cce550()*-1.08648);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd37b0() {
   return (neuron0x2ccee20()*1.05354);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd37f0() {
   return (neuron0x2ccf0f0()*0.9524);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd74a0() {
   return (neuron0x2ccf570()*-0.662946);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd74e0() {
   return (neuron0x2ccf9f0()*0.229817);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7520() {
   return (neuron0x2ccfe70()*-0.0861541);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7560() {
   return (neuron0x2cd02f0()*-1.41578);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd75a0() {
   return (neuron0x2cd0770()*-2.45792);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd75e0() {
   return (neuron0x2cd0bf0()*-1.24756);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7620() {
   return (neuron0x2cd1070()*0.65158);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd79a0() {
   return (neuron0x2cca0b0()*-3.94438);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd79e0() {
   return (neuron0x2cca420()*1.2367);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7a20() {
   return (neuron0x2cca8a0()*4.88011);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7a60() {
   return (neuron0x2ccad20()*-2.62809);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7aa0() {
   return (neuron0x2ccb230()*0.711396);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7ae0() {
   return (neuron0x2ccb6b0()*16.6242);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7b20() {
   return (neuron0x2ccbb30()*2.72092);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7b60() {
   return (neuron0x2ccc140()*0.451812);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7ba0() {
   return (neuron0x2ccc530()*0.136358);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7be0() {
   return (neuron0x2ccc9b0()*-2.91537);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7c20() {
   return (neuron0x2ccce30()*-0.951959);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7c60() {
   return (neuron0x2ccd2b0()*0.799395);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7ca0() {
   return (neuron0x2ccd7c0()*0.800707);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7ce0() {
   return (neuron0x2ccbf30()*-2.30494);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7d20() {
   return (neuron0x2cce0d0()*1.11738);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7d60() {
   return (neuron0x2cce550()*-3.38041);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd77f0() {
   return (neuron0x2ccee20()*-0.218985);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7830() {
   return (neuron0x2ccf0f0()*-6.97429);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7eb0() {
   return (neuron0x2ccf570()*-0.0388103);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7ef0() {
   return (neuron0x2ccf9f0()*0.517794);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7f30() {
   return (neuron0x2ccfe70()*2.81893);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7f70() {
   return (neuron0x2cd02f0()*1.00756);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7fb0() {
   return (neuron0x2cd0770()*12.966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd7ff0() {
   return (neuron0x2cd0bf0()*-3.20861);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8030() {
   return (neuron0x2cd1070()*0.26293);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd83b0() {
   return (neuron0x2cca0b0()*0.273326);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd83f0() {
   return (neuron0x2cca420()*1.33701);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8430() {
   return (neuron0x2cca8a0()*0.894224);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8470() {
   return (neuron0x2ccad20()*-0.712733);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd84b0() {
   return (neuron0x2ccb230()*2.42384);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd84f0() {
   return (neuron0x2ccb6b0()*1.00872);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8530() {
   return (neuron0x2ccbb30()*0.149305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8570() {
   return (neuron0x2ccc140()*0.383196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd85b0() {
   return (neuron0x2ccc530()*-1.15328);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd85f0() {
   return (neuron0x2ccc9b0()*-0.03562);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8630() {
   return (neuron0x2ccce30()*0.60702);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8670() {
   return (neuron0x2ccd2b0()*1.97353);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd86b0() {
   return (neuron0x2ccd7c0()*0.804749);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd86f0() {
   return (neuron0x2ccbf30()*1.6617);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8730() {
   return (neuron0x2cce0d0()*-0.0279544);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8770() {
   return (neuron0x2cce550()*0.0730355);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8200() {
   return (neuron0x2ccee20()*-1.62531);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8240() {
   return (neuron0x2ccf0f0()*-0.747833);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd88c0() {
   return (neuron0x2ccf570()*0.936885);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8900() {
   return (neuron0x2ccf9f0()*-0.279448);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8940() {
   return (neuron0x2ccfe70()*0.0461879);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8980() {
   return (neuron0x2cd02f0()*2.62363);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd89c0() {
   return (neuron0x2cd0770()*2.46073);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8a00() {
   return (neuron0x2cd0bf0()*1.41023);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8a40() {
   return (neuron0x2cd1070()*-1.34388);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8dc0() {
   return (neuron0x2cca0b0()*-0.00907601);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8e00() {
   return (neuron0x2cca420()*-1.25498);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8e40() {
   return (neuron0x2cca8a0()*-0.723459);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8e80() {
   return (neuron0x2ccad20()*1.23489);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8ec0() {
   return (neuron0x2ccb230()*-1.07917);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8f00() {
   return (neuron0x2ccb6b0()*-2.02703);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8f40() {
   return (neuron0x2ccbb30()*0.536475);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8f80() {
   return (neuron0x2ccc140()*0.266364);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8fc0() {
   return (neuron0x2ccc530()*1.0258);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9000() {
   return (neuron0x2ccc9b0()*0.101545);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9040() {
   return (neuron0x2ccce30()*-0.183706);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9080() {
   return (neuron0x2ccd2b0()*-2.08023);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd90c0() {
   return (neuron0x2ccd7c0()*-0.19411);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9100() {
   return (neuron0x2ccbf30()*-1.35813);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9140() {
   return (neuron0x2cce0d0()*-1.47162);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9180() {
   return (neuron0x2cce550()*-0.55208);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8c10() {
   return (neuron0x2ccee20()*0.585475);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd8c50() {
   return (neuron0x2ccf0f0()*0.416293);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd92d0() {
   return (neuron0x2ccf570()*-0.10992);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9310() {
   return (neuron0x2ccf9f0()*0.882354);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9350() {
   return (neuron0x2ccfe70()*0.887738);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9390() {
   return (neuron0x2cd02f0()*-3.03881);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd93d0() {
   return (neuron0x2cd0770()*-2.25287);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9410() {
   return (neuron0x2cd0bf0()*-1.79895);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9450() {
   return (neuron0x2cd1070()*2.38493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd97d0() {
   return (neuron0x2cca0b0()*-8.00187);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9810() {
   return (neuron0x2cca420()*-0.75492);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9850() {
   return (neuron0x2cca8a0()*1.44475);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9890() {
   return (neuron0x2ccad20()*1.25843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd98d0() {
   return (neuron0x2ccb230()*-2.46812);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9910() {
   return (neuron0x2ccb6b0()*-20.3151);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9950() {
   return (neuron0x2ccbb30()*10.974);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9990() {
   return (neuron0x2ccc140()*-1.70414);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd99d0() {
   return (neuron0x2ccc530()*1.92335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9a10() {
   return (neuron0x2ccc9b0()*8.68296);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9a50() {
   return (neuron0x2ccce30()*-10.8759);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9a90() {
   return (neuron0x2ccd2b0()*-2.47468);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9ad0() {
   return (neuron0x2ccd7c0()*-0.809986);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9b10() {
   return (neuron0x2ccbf30()*-10.0342);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9b50() {
   return (neuron0x2cce0d0()*-0.639886);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9b90() {
   return (neuron0x2cce550()*-11.6059);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9620() {
   return (neuron0x2ccee20()*1.86346);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9660() {
   return (neuron0x2ccf0f0()*42.2225);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9ce0() {
   return (neuron0x2ccf570()*-0.774532);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9d20() {
   return (neuron0x2ccf9f0()*0.748098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9d60() {
   return (neuron0x2ccfe70()*-0.755694);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9da0() {
   return (neuron0x2cd02f0()*-2.88919);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9de0() {
   return (neuron0x2cd0770()*-21.5731);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9e20() {
   return (neuron0x2cd0bf0()*-22.914);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd9e60() {
   return (neuron0x2cd1070()*2.36601);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda1e0() {
   return (neuron0x2cca0b0()*-1.43765);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda220() {
   return (neuron0x2cca420()*1.57004);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda260() {
   return (neuron0x2cca8a0()*-0.247274);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda2a0() {
   return (neuron0x2ccad20()*-1.91529);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda2e0() {
   return (neuron0x2ccb230()*0.535365);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda320() {
   return (neuron0x2ccb6b0()*3.24913);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda360() {
   return (neuron0x2ccbb30()*-7.22499);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda3a0() {
   return (neuron0x2ccc140()*-0.568619);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda3e0() {
   return (neuron0x2ccc530()*-1.64989);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda420() {
   return (neuron0x2ccc9b0()*-6.30306);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda460() {
   return (neuron0x2ccce30()*-1.36936);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda4a0() {
   return (neuron0x2ccd2b0()*1.47166);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda4e0() {
   return (neuron0x2ccd7c0()*1.48828);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda520() {
   return (neuron0x2ccbf30()*3.17774);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda560() {
   return (neuron0x2cce0d0()*-2.15603);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda5a0() {
   return (neuron0x2cce550()*-2.94017);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda030() {
   return (neuron0x2ccee20()*-0.872294);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda070() {
   return (neuron0x2ccf0f0()*15.8158);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda6f0() {
   return (neuron0x2ccf570()*0.928221);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda730() {
   return (neuron0x2ccf9f0()*-0.646909);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda770() {
   return (neuron0x2ccfe70()*2.1374);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda7b0() {
   return (neuron0x2cd02f0()*0.930034);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda7f0() {
   return (neuron0x2cd0770()*13.3944);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda830() {
   return (neuron0x2cd0bf0()*-4.39873);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cda870() {
   return (neuron0x2cd1070()*-0.904021);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdabf0() {
   return (neuron0x2cca0b0()*1.5166);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdac30() {
   return (neuron0x2cca420()*-0.133397);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdac70() {
   return (neuron0x2cca8a0()*4.50478);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdacb0() {
   return (neuron0x2ccad20()*-0.74527);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdacf0() {
   return (neuron0x2ccb230()*1.54169);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdad30() {
   return (neuron0x2ccb6b0()*7.63883);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdad70() {
   return (neuron0x2ccbb30()*-6.45367);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdadb0() {
   return (neuron0x2ccc140()*-0.0491103);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdadf0() {
   return (neuron0x2ccc530()*-2.0361);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdae30() {
   return (neuron0x2ccc9b0()*-5.83691);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdae70() {
   return (neuron0x2ccce30()*-4.01225);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdaeb0() {
   return (neuron0x2ccd2b0()*0.717531);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdaef0() {
   return (neuron0x2ccd7c0()*1.0164);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdaf30() {
   return (neuron0x2ccbf30()*13.5678);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdaf70() {
   return (neuron0x2cce0d0()*-1.32944);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdafb0() {
   return (neuron0x2cce550()*0.353071);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdaa40() {
   return (neuron0x2ccee20()*-1.3648);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdaa80() {
   return (neuron0x2ccf0f0()*8.65694);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb100() {
   return (neuron0x2ccf570()*0.507046);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb140() {
   return (neuron0x2ccf9f0()*-0.542882);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb180() {
   return (neuron0x2ccfe70()*0.310319);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb1c0() {
   return (neuron0x2cd02f0()*0.919644);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb200() {
   return (neuron0x2cd0770()*4.5317);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb240() {
   return (neuron0x2cd0bf0()*1.27554);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb280() {
   return (neuron0x2cd1070()*-1.83543);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb600() {
   return (neuron0x2cca0b0()*0.429699);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb640() {
   return (neuron0x2cca420()*-1.78143);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb680() {
   return (neuron0x2cca8a0()*-0.943657);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb6c0() {
   return (neuron0x2ccad20()*0.28276);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb700() {
   return (neuron0x2ccb230()*-1.70141);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb740() {
   return (neuron0x2ccb6b0()*-2.45082);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb780() {
   return (neuron0x2ccbb30()*0.00991972);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb7c0() {
   return (neuron0x2ccc140()*-0.475207);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb800() {
   return (neuron0x2ccc530()*0.669802);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb840() {
   return (neuron0x2ccc9b0()*0.573194);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb880() {
   return (neuron0x2ccce30()*-0.52937);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb8c0() {
   return (neuron0x2ccd2b0()*-1.78548);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb900() {
   return (neuron0x2ccd7c0()*-0.544484);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb940() {
   return (neuron0x2ccbf30()*-1.34642);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb980() {
   return (neuron0x2cce0d0()*-0.702015);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb9c0() {
   return (neuron0x2cce550()*-1.23098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb450() {
   return (neuron0x2ccee20()*0.8975);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdb490() {
   return (neuron0x2ccf0f0()*1.79859);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbb10() {
   return (neuron0x2ccf570()*-0.915239);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbb50() {
   return (neuron0x2ccf9f0()*0.83558);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbb90() {
   return (neuron0x2ccfe70()*-0.157275);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbbd0() {
   return (neuron0x2cd02f0()*-1.74646);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbc10() {
   return (neuron0x2cd0770()*-2.89387);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbc50() {
   return (neuron0x2cd0bf0()*-1.71543);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbc90() {
   return (neuron0x2cd1070()*1.81992);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc010() {
   return (neuron0x2cca0b0()*-2.59385);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc050() {
   return (neuron0x2cca420()*-1.26793);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc090() {
   return (neuron0x2cca8a0()*0.242238);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc0d0() {
   return (neuron0x2ccad20()*0.729814);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc110() {
   return (neuron0x2ccb230()*-2.23793);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc150() {
   return (neuron0x2ccb6b0()*-2.47544);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc190() {
   return (neuron0x2ccbb30()*0.385706);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc1d0() {
   return (neuron0x2ccc140()*-0.93051);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc210() {
   return (neuron0x2ccc530()*1.22463);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc250() {
   return (neuron0x2ccc9b0()*0.325177);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc290() {
   return (neuron0x2ccce30()*-3.02199);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc2d0() {
   return (neuron0x2ccd2b0()*-1.6652);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc310() {
   return (neuron0x2ccd7c0()*-1.02298);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc350() {
   return (neuron0x2ccbf30()*-1.56463);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc390() {
   return (neuron0x2cce0d0()*-0.195468);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc3d0() {
   return (neuron0x2cce550()*-1.5067);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbe60() {
   return (neuron0x2ccee20()*0.601287);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdbea0() {
   return (neuron0x2ccf0f0()*0.86584);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc520() {
   return (neuron0x2ccf570()*-1.92057);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc560() {
   return (neuron0x2ccf9f0()*0.0137491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc5a0() {
   return (neuron0x2ccfe70()*-0.80635);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc5e0() {
   return (neuron0x2cd02f0()*-1.45526);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc620() {
   return (neuron0x2cd0770()*-2.8469);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc660() {
   return (neuron0x2cd0bf0()*-3.28675);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc6a0() {
   return (neuron0x2cd1070()*0.857375);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdca20() {
   return (neuron0x2cca0b0()*3.34374);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca240() {
   return (neuron0x2cca420()*1.30705);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca280() {
   return (neuron0x2cca8a0()*0.686538);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca640() {
   return (neuron0x2ccad20()*0.850911);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cca680() {
   return (neuron0x2ccb230()*2.08784);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccaac0() {
   return (neuron0x2ccb6b0()*3.21398);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccab00() {
   return (neuron0x2ccbb30()*-2.5305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccaf40() {
   return (neuron0x2ccc140()*1.37146);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccaf80() {
   return (neuron0x2ccc530()*-2.21287);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb450() {
   return (neuron0x2ccc9b0()*-1.17569);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb490() {
   return (neuron0x2ccce30()*7.85079);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb8d0() {
   return (neuron0x2ccd2b0()*0.986024);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccb910() {
   return (neuron0x2ccd7c0()*0.976667);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbd50() {
   return (neuron0x2ccbf30()*2.91328);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccbd90() {
   return (neuron0x2cce0d0()*-0.309356);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc2d0() {
   return (neuron0x2cce550()*4.74467);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc310() {
   return (neuron0x2ccee20()*-1.50021);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc750() {
   return (neuron0x2ccf0f0()*-6.88711);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccc790() {
   return (neuron0x2ccf570()*0.882278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccbd0() {
   return (neuron0x2ccf9f0()*-1.17266);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cccc10() {
   return (neuron0x2ccfe70()*1.82232);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd050() {
   return (neuron0x2cd02f0()*1.69975);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd090() {
   return (neuron0x2cd0770()*3.59237);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd4d0() {
   return (neuron0x2cd0bf0()*10.8877);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd510() {
   return (neuron0x2cd1070()*-1.29159);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd6e90() {
   return (neuron0x2cca0b0()*-0.811995);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd6ed0() {
   return (neuron0x2cca420()*-0.576494);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce770() {
   return (neuron0x2cca8a0()*0.116054);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cce7b0() {
   return (neuron0x2ccad20()*-0.241759);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc870() {
   return (neuron0x2ccb230()*-0.859777);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdc8b0() {
   return (neuron0x2ccb6b0()*-1.39039);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9b20() {
   return (neuron0x2ccbb30()*-0.477672);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9b60() {
   return (neuron0x2ccc140()*-0.337585);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf310() {
   return (neuron0x2ccc530()*0.28877);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf350() {
   return (neuron0x2ccc9b0()*0.0144321);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf790() {
   return (neuron0x2ccce30()*-0.0598137);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccf7d0() {
   return (neuron0x2ccd2b0()*-1.47119);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfc10() {
   return (neuron0x2ccd7c0()*-0.457232);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccfc50() {
   return (neuron0x2ccbf30()*-1.30721);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0090() {
   return (neuron0x2cce0d0()*-0.38373);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd00d0() {
   return (neuron0x2cce550()*-1.42766);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0510() {
   return (neuron0x2ccee20()*0.537901);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0550() {
   return (neuron0x2ccf0f0()*0.304661);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0990() {
   return (neuron0x2ccf570()*-0.865841);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd09d0() {
   return (neuron0x2ccf9f0()*-0.241957);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0e10() {
   return (neuron0x2ccfe70()*-0.750133);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd0e50() {
   return (neuron0x2cd02f0()*-1.27935);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd1290() {
   return (neuron0x2cd0770()*-1.70263);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cd12d0() {
   return (neuron0x2cd0bf0()*-1.3085);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccd9e0() {
   return (neuron0x2cd1070()*-0.114757);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ccda20() {
   return (neuron0x2cca0b0()*7.83719);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfc90() {
   return (neuron0x2cca420()*-0.414515);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfcd0() {
   return (neuron0x2cca8a0()*3.38874);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfd10() {
   return (neuron0x2ccad20()*0.73512);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfd50() {
   return (neuron0x2ccb230()*-0.630107);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfd90() {
   return (neuron0x2ccb6b0()*-5.39077);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfdd0() {
   return (neuron0x2ccbb30()*3.13239);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfe10() {
   return (neuron0x2ccc140()*0.20326);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfe50() {
   return (neuron0x2ccc530()*1.45106);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfe90() {
   return (neuron0x2ccc9b0()*7.12);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfed0() {
   return (neuron0x2ccce30()*-3.659);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdff10() {
   return (neuron0x2ccd2b0()*0.218941);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdff50() {
   return (neuron0x2ccd7c0()*-1.05504);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdff90() {
   return (neuron0x2ccbf30()*-4.89541);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdffd0() {
   return (neuron0x2cce0d0()*0.511369);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0010() {
   return (neuron0x2cce550()*1.01707);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfae0() {
   return (neuron0x2ccee20()*0.806331);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cdfb20() {
   return (neuron0x2ccf0f0()*-0.971706);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0160() {
   return (neuron0x2ccf570()*0.059542);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce01a0() {
   return (neuron0x2ccf9f0()*-0.151502);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce01e0() {
   return (neuron0x2ccfe70()*0.640582);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0220() {
   return (neuron0x2cd02f0()*-0.278288);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0260() {
   return (neuron0x2cd0770()*-5.11811);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce02a0() {
   return (neuron0x2cd0bf0()*-7.81513);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce02e0() {
   return (neuron0x2cd1070()*0.919519);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0660() {
   return (neuron0x2cca0b0()*-0.239693);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce06a0() {
   return (neuron0x2cca420()*-0.914348);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce06e0() {
   return (neuron0x2cca8a0()*-0.927952);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0720() {
   return (neuron0x2ccad20()*0.442213);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0760() {
   return (neuron0x2ccb230()*-0.114846);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce07a0() {
   return (neuron0x2ccb6b0()*-1.47928);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce07e0() {
   return (neuron0x2ccbb30()*-0.392161);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0820() {
   return (neuron0x2ccc140()*-0.143481);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0860() {
   return (neuron0x2ccc530()*-0.21828);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce08a0() {
   return (neuron0x2ccc9b0()*0.680788);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce08e0() {
   return (neuron0x2ccce30()*-0.131819);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0920() {
   return (neuron0x2ccd2b0()*-0.692733);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0960() {
   return (neuron0x2ccd7c0()*-0.00733754);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce09a0() {
   return (neuron0x2ccbf30()*-0.437539);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce09e0() {
   return (neuron0x2cce0d0()*-0.760281);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0a20() {
   return (neuron0x2cce550()*-0.558709);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce04b0() {
   return (neuron0x2ccee20()*0.27225);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce04f0() {
   return (neuron0x2ccf0f0()*-0.013163);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0b70() {
   return (neuron0x2ccf570()*-0.0215991);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0bb0() {
   return (neuron0x2ccf9f0()*-0.129873);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0bf0() {
   return (neuron0x2ccfe70()*-0.677263);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0c30() {
   return (neuron0x2cd02f0()*-0.853506);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0c70() {
   return (neuron0x2cd0770()*-1.46667);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0cb0() {
   return (neuron0x2cd0bf0()*-0.797174);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0cf0() {
   return (neuron0x2cd1070()*0.466397);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1070() {
   return (neuron0x2cca0b0()*-0.592658);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce10b0() {
   return (neuron0x2cca420()*0.798439);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce10f0() {
   return (neuron0x2cca8a0()*0.763465);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1130() {
   return (neuron0x2ccad20()*-0.984727);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1170() {
   return (neuron0x2ccb230()*1.88783);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce11b0() {
   return (neuron0x2ccb6b0()*1.99217);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce11f0() {
   return (neuron0x2ccbb30()*-0.712433);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1230() {
   return (neuron0x2ccc140()*-0.222698);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1270() {
   return (neuron0x2ccc530()*-1.04088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce12b0() {
   return (neuron0x2ccc9b0()*-0.851164);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce12f0() {
   return (neuron0x2ccce30()*0.315604);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1330() {
   return (neuron0x2ccd2b0()*2.23599);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1370() {
   return (neuron0x2ccd7c0()*1.20279);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce13b0() {
   return (neuron0x2ccbf30()*2.48577);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce13f0() {
   return (neuron0x2cce0d0()*0.926109);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1430() {
   return (neuron0x2cce550()*0.910953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0ec0() {
   return (neuron0x2ccee20()*-1.58764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce0f00() {
   return (neuron0x2ccf0f0()*-0.448498);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1580() {
   return (neuron0x2ccf570()*-0.125639);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce15c0() {
   return (neuron0x2ccf9f0()*-0.678715);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1600() {
   return (neuron0x2ccfe70()*0.208581);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1640() {
   return (neuron0x2cd02f0()*3.52123);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1680() {
   return (neuron0x2cd0770()*2.81675);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce16c0() {
   return (neuron0x2cd0bf0()*1.50463);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1700() {
   return (neuron0x2cd1070()*-1.77359);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1a80() {
   return (neuron0x2cca0b0()*-1.71226);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1ac0() {
   return (neuron0x2cca420()*-1.39567);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1b00() {
   return (neuron0x2cca8a0()*-0.491278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1b40() {
   return (neuron0x2ccad20()*0.286384);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1b80() {
   return (neuron0x2ccb230()*-2.37994);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1bc0() {
   return (neuron0x2ccb6b0()*-2.08073);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1c00() {
   return (neuron0x2ccbb30()*-0.361451);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1c40() {
   return (neuron0x2ccc140()*-0.467333);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1c80() {
   return (neuron0x2ccc530()*2.1258);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1cc0() {
   return (neuron0x2ccc9b0()*0.782927);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1d00() {
   return (neuron0x2ccce30()*-2.34428);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1d40() {
   return (neuron0x2ccd2b0()*-1.75183);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1d80() {
   return (neuron0x2ccd7c0()*-0.783196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1dc0() {
   return (neuron0x2ccbf30()*-1.84364);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1e00() {
   return (neuron0x2cce0d0()*-0.485913);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1e40() {
   return (neuron0x2cce550()*-1.7444);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce18d0() {
   return (neuron0x2ccee20()*1.22958);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1910() {
   return (neuron0x2ccf0f0()*0.758668);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1f90() {
   return (neuron0x2ccf570()*-0.870077);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce1fd0() {
   return (neuron0x2ccf9f0()*0.952307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2010() {
   return (neuron0x2ccfe70()*-1.29552);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2050() {
   return (neuron0x2cd02f0()*-1.47307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2090() {
   return (neuron0x2cd0770()*-2.3672);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce20d0() {
   return (neuron0x2cd0bf0()*-2.49722);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2110() {
   return (neuron0x2cd1070()*1.43503);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2490() {
   return (neuron0x2cca0b0()*5.29315);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce24d0() {
   return (neuron0x2cca420()*0.371748);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2510() {
   return (neuron0x2cca8a0()*1.53073);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2550() {
   return (neuron0x2ccad20()*1.26665);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2590() {
   return (neuron0x2ccb230()*-1.64564);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce25d0() {
   return (neuron0x2ccb6b0()*0.977389);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2610() {
   return (neuron0x2ccbb30()*8.18327);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2650() {
   return (neuron0x2ccc140()*1.01899);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2690() {
   return (neuron0x2ccc530()*2.48946);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce26d0() {
   return (neuron0x2ccc9b0()*12.2234);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2710() {
   return (neuron0x2ccce30()*2.90528);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2750() {
   return (neuron0x2ccd2b0()*-0.769387);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2790() {
   return (neuron0x2ccd7c0()*-0.432311);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce27d0() {
   return (neuron0x2ccbf30()*0.554686);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2810() {
   return (neuron0x2cce0d0()*3.07045);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2850() {
   return (neuron0x2cce550()*0.438557);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce22e0() {
   return (neuron0x2ccee20()*0.866535);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2320() {
   return (neuron0x2ccf0f0()*0.89518);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce29a0() {
   return (neuron0x2ccf570()*-0.683763);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce29e0() {
   return (neuron0x2ccf9f0()*0.57119);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2a20() {
   return (neuron0x2ccfe70()*-2.40128);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2a60() {
   return (neuron0x2cd02f0()*-0.683457);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2aa0() {
   return (neuron0x2cd0770()*-21.9164);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2ae0() {
   return (neuron0x2cd0bf0()*-10.2538);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2b20() {
   return (neuron0x2cd1070()*0.970089);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2ea0() {
   return (neuron0x2cca0b0()*-1.49571);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2ee0() {
   return (neuron0x2cca420()*-1.14943);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2f20() {
   return (neuron0x2cca8a0()*-0.498113);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2f60() {
   return (neuron0x2ccad20()*0.0935163);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2fa0() {
   return (neuron0x2ccb230()*-1.81741);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2fe0() {
   return (neuron0x2ccb6b0()*-2.04477);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3020() {
   return (neuron0x2ccbb30()*0.395675);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3060() {
   return (neuron0x2ccc140()*-1.39739);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce30a0() {
   return (neuron0x2ccc530()*0.878113);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce30e0() {
   return (neuron0x2ccc9b0()*-0.301002);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3120() {
   return (neuron0x2ccce30()*-0.874024);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3160() {
   return (neuron0x2ccd2b0()*-1.69927);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce31a0() {
   return (neuron0x2ccd7c0()*-1.06575);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce31e0() {
   return (neuron0x2ccbf30()*-0.944029);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3220() {
   return (neuron0x2cce0d0()*-0.586877);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3260() {
   return (neuron0x2cce550()*-1.4403);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2cf0() {
   return (neuron0x2ccee20()*0.432522);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce2d30() {
   return (neuron0x2ccf0f0()*0.620046);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce33b0() {
   return (neuron0x2ccf570()*-1.28035);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce33f0() {
   return (neuron0x2ccf9f0()*-0.0988206);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3430() {
   return (neuron0x2ccfe70()*-1.22907);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3470() {
   return (neuron0x2cd02f0()*-0.876757);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce34b0() {
   return (neuron0x2cd0770()*-2.25153);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce34f0() {
   return (neuron0x2cd0bf0()*-1.46499);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3530() {
   return (neuron0x2cd1070()*0.465244);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce38b0() {
   return (neuron0x2cca0b0()*-6.49186);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce38f0() {
   return (neuron0x2cca420()*1.80589);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3930() {
   return (neuron0x2cca8a0()*-3.99263);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3970() {
   return (neuron0x2ccad20()*-0.914009);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce39b0() {
   return (neuron0x2ccb230()*2.01819);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce39f0() {
   return (neuron0x2ccb6b0()*-0.587152);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3a30() {
   return (neuron0x2ccbb30()*-1.07414);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3a70() {
   return (neuron0x2ccc140()*-0.277205);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3ab0() {
   return (neuron0x2ccc530()*-1.12119);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3af0() {
   return (neuron0x2ccc9b0()*-18.5382);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3b30() {
   return (neuron0x2ccce30()*-2.03079);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3b70() {
   return (neuron0x2ccd2b0()*2.71286);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3bb0() {
   return (neuron0x2ccd7c0()*1.19651);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3bf0() {
   return (neuron0x2ccbf30()*7.45421);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3c30() {
   return (neuron0x2cce0d0()*-1.66247);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3c70() {
   return (neuron0x2cce550()*1.69078);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3700() {
   return (neuron0x2ccee20()*-1.30874);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3740() {
   return (neuron0x2ccf0f0()*-0.983394);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3dc0() {
   return (neuron0x2ccf570()*0.351858);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3e00() {
   return (neuron0x2ccf9f0()*-0.338172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3e40() {
   return (neuron0x2ccfe70()*-3.13469);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3e80() {
   return (neuron0x2cd02f0()*3.13651);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3ec0() {
   return (neuron0x2cd0770()*11.6045);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3f00() {
   return (neuron0x2cd0bf0()*12.7907);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce3f40() {
   return (neuron0x2cd1070()*-2.82188);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce42c0() {
   return (neuron0x2cca0b0()*-0.308556);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4300() {
   return (neuron0x2cca420()*-1.05073);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4340() {
   return (neuron0x2cca8a0()*-1.19023);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4380() {
   return (neuron0x2ccad20()*-0.0600222);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce43c0() {
   return (neuron0x2ccb230()*-0.652882);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4400() {
   return (neuron0x2ccb6b0()*-1.73497);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4440() {
   return (neuron0x2ccbb30()*0.27617);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4480() {
   return (neuron0x2ccc140()*-0.31509);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce44c0() {
   return (neuron0x2ccc530()*0.483815);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4500() {
   return (neuron0x2ccc9b0()*1.13647);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4540() {
   return (neuron0x2ccce30()*0.174386);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4580() {
   return (neuron0x2ccd2b0()*-0.816742);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce45c0() {
   return (neuron0x2ccd7c0()*-0.513746);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4600() {
   return (neuron0x2ccbf30()*-1.14927);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4640() {
   return (neuron0x2cce0d0()*-0.812754);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4680() {
   return (neuron0x2cce550()*-0.417359);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4110() {
   return (neuron0x2ccee20()*0.548165);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4150() {
   return (neuron0x2ccf0f0()*-0.215615);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce47d0() {
   return (neuron0x2ccf570()*0.178995);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4810() {
   return (neuron0x2ccf9f0()*-0.299089);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4850() {
   return (neuron0x2ccfe70()*-0.472894);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4890() {
   return (neuron0x2cd02f0()*-0.963996);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce48d0() {
   return (neuron0x2cd0770()*-1.5299);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4910() {
   return (neuron0x2cd0bf0()*-1.07754);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4950() {
   return (neuron0x2cd1070()*1.146);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4bb0() {
   return (neuron0x2cd2f80()*9.89517);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4bf0() {
   return (neuron0x2ccdd50()*9.34729);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4c30() {
   return (neuron0x2cd3af0()*-10.3596);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4c70() {
   return (neuron0x2cd4610()*1.15331);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4cb0() {
   return (neuron0x2cd5020()*-3.32509);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4cf0() {
   return (neuron0x2cd5a30()*-0.639819);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4d30() {
   return (neuron0x2cd3620()*-1.23304);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4d70() {
   return (neuron0x2cd7660()*-3.23839);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4db0() {
   return (neuron0x2cd8070()*1.85727);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4df0() {
   return (neuron0x2cd8a80()*-7.60602);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4e30() {
   return (neuron0x2cd9490()*-2.84917);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4e70() {
   return (neuron0x2cd9ea0()*-12.3182);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4eb0() {
   return (neuron0x2cda8b0()*10.9493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4ef0() {
   return (neuron0x2cdb2c0()*-2.23932);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4f30() {
   return (neuron0x2cdbcd0()*4.19523);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce4f70() {
   return (neuron0x2cdc6e0()*-6.98002);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9f80() {
   return (neuron0x2cd6d00()*1.78547);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2cc9fc0() {
   return (neuron0x2cdf950()*14.5858);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce50c0() {
   return (neuron0x2ce0320()*-2.31689);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce5100() {
   return (neuron0x2ce0d30()*6.15224);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce5140() {
   return (neuron0x2ce1740()*2.50934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce5180() {
   return (neuron0x2ce2150()*-8.25418);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce51c0() {
   return (neuron0x2ce2b60()*5.42273);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce5200() {
   return (neuron0x2ce3570()*10.6262);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2ce5240() {
   return (neuron0x2ce3f80()*-4.08746);
}

