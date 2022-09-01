#include "25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_upwing/nnFunc_25_25hi_6000ep_weight.h"
#include <cmath>

double nnFunc_25_25hi_6000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x24b06e0();
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
         return neuron0x24b06e0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2494c90() {
   return input0;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2494fd0() {
   return input1;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2495310() {
   return input2;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2495650() {
   return input3;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2495990() {
   return input4;
}

double nnFunc_25_25hi_6000ep_weight::input0x2495e00() {
   double input = -0.242055;
   input += synapse0x239b720();
   input += synapse0x2484100();
   input += synapse0x24960b0();
   input += synapse0x24960f0();
   input += synapse0x2496130();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2495e00() {
   double input = input0x2495e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2496170() {
   double input = 0.705835;
   input += synapse0x24964b0();
   input += synapse0x24964f0();
   input += synapse0x2496530();
   input += synapse0x2496570();
   input += synapse0x24965b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2496170() {
   double input = input0x2496170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24965f0() {
   double input = -0.7108;
   input += synapse0x2496930();
   input += synapse0x2496970();
   input += synapse0x24969b0();
   input += synapse0x24969f0();
   input += synapse0x2496a30();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24965f0() {
   double input = input0x24965f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2496a70() {
   double input = -1.22172;
   input += synapse0x2496db0();
   input += synapse0x2496df0();
   input += synapse0x239ebb0();
   input += synapse0x239ebf0();
   input += synapse0x2496f40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2496a70() {
   double input = input0x2496a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2496f80() {
   double input = 2.61434;
   input += synapse0x24972c0();
   input += synapse0x2497300();
   input += synapse0x2497340();
   input += synapse0x2497380();
   input += synapse0x24973c0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2496f80() {
   double input = input0x2496f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2497400() {
   double input = -5.86414;
   input += synapse0x2497740();
   input += synapse0x2497780();
   input += synapse0x24977c0();
   input += synapse0x2497800();
   input += synapse0x2497840();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2497400() {
   double input = input0x2497400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2497880() {
   double input = -5.32885;
   input += synapse0x2497bc0();
   input += synapse0x2497c00();
   input += synapse0x2497c40();
   input += synapse0x2496e30();
   input += synapse0x2496e70();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2497880() {
   double input = input0x2497880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2497e90() {
   double input = 13.1328;
   input += synapse0x2498140();
   input += synapse0x2498180();
   input += synapse0x24981c0();
   input += synapse0x2498200();
   input += synapse0x2498240();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2497e90() {
   double input = input0x2497e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2498280() {
   double input = 3.46463;
   input += synapse0x24985c0();
   input += synapse0x2498600();
   input += synapse0x2498640();
   input += synapse0x2498680();
   input += synapse0x24986c0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2498280() {
   double input = input0x2498280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2498700() {
   double input = 3.75325;
   input += synapse0x2498a40();
   input += synapse0x2498a80();
   input += synapse0x2498ac0();
   input += synapse0x2498b00();
   input += synapse0x2498b40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2498700() {
   double input = input0x2498700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2498b80() {
   double input = -0.438447;
   input += synapse0x2498ec0();
   input += synapse0x2498f00();
   input += synapse0x2498f40();
   input += synapse0x2498f80();
   input += synapse0x2498fc0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2498b80() {
   double input = input0x2498b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2499000() {
   double input = -3.34967;
   input += synapse0x239ea00();
   input += synapse0x239ea40();
   input += synapse0x2499450();
   input += synapse0x2499490();
   input += synapse0x24994d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2499000() {
   double input = input0x2499000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2499510() {
   double input = 2.18098;
   input += synapse0x2499850();
   input += synapse0x2499890();
   input += synapse0x24998d0();
   input += synapse0x2499910();
   input += synapse0x2499950();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2499510() {
   double input = input0x2499510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2497c80() {
   double input = 5.77648;
   input += synapse0x239f1d0();
   input += synapse0x2497e10();
   input += synapse0x2497e50();
   input += synapse0x2499da0();
   input += synapse0x2499de0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2497c80() {
   double input = input0x2497c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2499e20() {
   double input = -3.80203;
   input += synapse0x249a160();
   input += synapse0x249a1a0();
   input += synapse0x249a1e0();
   input += synapse0x249a220();
   input += synapse0x249a260();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2499e20() {
   double input = input0x2499e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249a2a0() {
   double input = 0.292671;
   input += synapse0x249a5e0();
   input += synapse0x2494eb0();
   input += synapse0x2494ef0();
   input += synapse0x24951f0();
   input += synapse0x2495230();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249a2a0() {
   double input = input0x249a2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249ab70() {
   double input = -0.58443;
   input += synapse0x249ad00();
   input += synapse0x249ad40();
   input += synapse0x249ad80();
   input += synapse0x249adc0();
   input += synapse0x249ae00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249ab70() {
   double input = input0x249ab70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249ae40() {
   double input = -0.0431307;
   input += synapse0x249b180();
   input += synapse0x249b1c0();
   input += synapse0x249b200();
   input += synapse0x249b240();
   input += synapse0x249b280();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249ae40() {
   double input = input0x249ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249b2c0() {
   double input = -16.3386;
   input += synapse0x249b600();
   input += synapse0x249b640();
   input += synapse0x249b680();
   input += synapse0x249b6c0();
   input += synapse0x249b700();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249b2c0() {
   double input = input0x249b2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249b740() {
   double input = -2.43131;
   input += synapse0x249ba80();
   input += synapse0x249bac0();
   input += synapse0x249bb00();
   input += synapse0x249bb40();
   input += synapse0x249bb80();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249b740() {
   double input = input0x249b740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249bbc0() {
   double input = -0.904018;
   input += synapse0x249bf00();
   input += synapse0x249bf40();
   input += synapse0x249bf80();
   input += synapse0x249bfc0();
   input += synapse0x249c000();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249bbc0() {
   double input = input0x249bbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249c040() {
   double input = -0.774053;
   input += synapse0x249c380();
   input += synapse0x249c3c0();
   input += synapse0x249c400();
   input += synapse0x249c440();
   input += synapse0x249c480();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249c040() {
   double input = input0x249c040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249c4c0() {
   double input = -0.403514;
   input += synapse0x249c800();
   input += synapse0x249c840();
   input += synapse0x249c880();
   input += synapse0x249c8c0();
   input += synapse0x249c900();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249c4c0() {
   double input = input0x249c4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249c940() {
   double input = 0.793992;
   input += synapse0x249cc80();
   input += synapse0x249ccc0();
   input += synapse0x249cd00();
   input += synapse0x249cd40();
   input += synapse0x249cd80();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249c940() {
   double input = input0x249c940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249cdc0() {
   double input = 10.3617;
   input += synapse0x249d100();
   input += synapse0x249d140();
   input += synapse0x249d180();
   input += synapse0x249d1c0();
   input += synapse0x249d200();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249cdc0() {
   double input = input0x249cdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249ecd0() {
   double input = 0.52915;
   input += synapse0x2496d20();
   input += synapse0x2496d60();
   input += synapse0x2497230();
   input += synapse0x2497270();
   input += synapse0x24976b0();
   input += synapse0x24976f0();
   input += synapse0x2497b30();
   input += synapse0x2497b70();
   input += synapse0x24980b0();
   input += synapse0x24980f0();
   input += synapse0x2498530();
   input += synapse0x2498570();
   input += synapse0x24989b0();
   input += synapse0x24989f0();
   input += synapse0x2498e30();
   input += synapse0x2498e70();
   input += synapse0x24992b0();
   input += synapse0x24992f0();
   input += synapse0x24997c0();
   input += synapse0x2499800();
   input += synapse0x249a0d0();
   input += synapse0x249a110();
   input += synapse0x249a550();
   input += synapse0x249a590();
   input += synapse0x2495bb0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249ecd0() {
   double input = input0x249ecd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x2499aa0() {
   double input = 0.302379;
   input += synapse0x2499c30();
   input += synapse0x2499c70();
   input += synapse0x2499cb0();
   input += synapse0x2499cf0();
   input += synapse0x2499d30();
   input += synapse0x2495bf0();
   input += synapse0x249be70();
   input += synapse0x249beb0();
   input += synapse0x249c2f0();
   input += synapse0x249c330();
   input += synapse0x249c770();
   input += synapse0x249c7b0();
   input += synapse0x249cbf0();
   input += synapse0x249cc30();
   input += synapse0x249d070();
   input += synapse0x249d0b0();
   input += synapse0x2496020();
   input += synapse0x2496060();
   input += synapse0x249b0f0();
   input += synapse0x249b130();
   input += synapse0x239b7f0();
   input += synapse0x239b830();
   input += synapse0x249f780();
   input += synapse0x249f7c0();
   input += synapse0x249f800();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x2499aa0() {
   double input = input0x2499aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249f840() {
   double input = 0.79896;
   input += synapse0x2499340();
   input += synapse0x2499380();
   input += synapse0x24993c0();
   input += synapse0x2499400();
   input += synapse0x249fd90();
   input += synapse0x249fdd0();
   input += synapse0x249fe10();
   input += synapse0x249fe50();
   input += synapse0x249fe90();
   input += synapse0x249fed0();
   input += synapse0x249ff10();
   input += synapse0x249ff50();
   input += synapse0x249ff90();
   input += synapse0x249ffd0();
   input += synapse0x24a0010();
   input += synapse0x24a0050();
   input += synapse0x249f9d0();
   input += synapse0x249fa10();
   input += synapse0x24a01a0();
   input += synapse0x24a01e0();
   input += synapse0x24a0220();
   input += synapse0x24a0260();
   input += synapse0x24a02a0();
   input += synapse0x24a02e0();
   input += synapse0x24a0320();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249f840() {
   double input = input0x249f840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a0360() {
   double input = 0.312732;
   input += synapse0x24a06a0();
   input += synapse0x24a06e0();
   input += synapse0x24a0720();
   input += synapse0x24a0760();
   input += synapse0x24a07a0();
   input += synapse0x24a07e0();
   input += synapse0x24a0820();
   input += synapse0x24a0860();
   input += synapse0x24a08a0();
   input += synapse0x24a08e0();
   input += synapse0x24a0920();
   input += synapse0x24a0960();
   input += synapse0x24a09a0();
   input += synapse0x24a09e0();
   input += synapse0x24a0a20();
   input += synapse0x24a0a60();
   input += synapse0x24a04f0();
   input += synapse0x24a0530();
   input += synapse0x24a0bb0();
   input += synapse0x24a0bf0();
   input += synapse0x24a0c30();
   input += synapse0x24a0c70();
   input += synapse0x24a0cb0();
   input += synapse0x24a0cf0();
   input += synapse0x24a0d30();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a0360() {
   double input = input0x24a0360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a0d70() {
   double input = -0.567428;
   input += synapse0x24a10b0();
   input += synapse0x24a10f0();
   input += synapse0x24a1130();
   input += synapse0x24a1170();
   input += synapse0x24a11b0();
   input += synapse0x24a11f0();
   input += synapse0x24a1230();
   input += synapse0x24a1270();
   input += synapse0x24a12b0();
   input += synapse0x24a12f0();
   input += synapse0x24a1330();
   input += synapse0x24a1370();
   input += synapse0x24a13b0();
   input += synapse0x24a13f0();
   input += synapse0x24a1430();
   input += synapse0x24a1470();
   input += synapse0x24a0f00();
   input += synapse0x24a0f40();
   input += synapse0x24a15c0();
   input += synapse0x24a1600();
   input += synapse0x24a1640();
   input += synapse0x24a1680();
   input += synapse0x24a16c0();
   input += synapse0x24a1700();
   input += synapse0x24a1740();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a0d70() {
   double input = input0x24a0d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a1780() {
   double input = -0.115325;
   input += synapse0x24a1ac0();
   input += synapse0x24a1b00();
   input += synapse0x24a1b40();
   input += synapse0x24a1b80();
   input += synapse0x24a1bc0();
   input += synapse0x24a1c00();
   input += synapse0x24a1c40();
   input += synapse0x249ee60();
   input += synapse0x249eea0();
   input += synapse0x249eee0();
   input += synapse0x249ef20();
   input += synapse0x249ef60();
   input += synapse0x249efa0();
   input += synapse0x249efe0();
   input += synapse0x249f020();
   input += synapse0x249f060();
   input += synapse0x24a1910();
   input += synapse0x24a1950();
   input += synapse0x249f1b0();
   input += synapse0x249f1f0();
   input += synapse0x249f230();
   input += synapse0x249f270();
   input += synapse0x249f2b0();
   input += synapse0x249f2f0();
   input += synapse0x249f330();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a1780() {
   double input = input0x24a1780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x249f370() {
   double input = 0.0540347;
   input += synapse0x249f620();
   input += synapse0x24a2d20();
   input += synapse0x24a2d60();
   input += synapse0x24a2da0();
   input += synapse0x24a2de0();
   input += synapse0x24a2e20();
   input += synapse0x24a2e60();
   input += synapse0x24a2ea0();
   input += synapse0x24a2ee0();
   input += synapse0x24a2f20();
   input += synapse0x24a2f60();
   input += synapse0x24a2fa0();
   input += synapse0x24a2fe0();
   input += synapse0x24a3020();
   input += synapse0x24a3060();
   input += synapse0x24a30a0();
   input += synapse0x249f500();
   input += synapse0x249f540();
   input += synapse0x24a31f0();
   input += synapse0x24a3230();
   input += synapse0x24a3270();
   input += synapse0x24a32b0();
   input += synapse0x24a32f0();
   input += synapse0x24a3330();
   input += synapse0x24a3370();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x249f370() {
   double input = input0x249f370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a33b0() {
   double input = 0.569244;
   input += synapse0x24a36f0();
   input += synapse0x24a3730();
   input += synapse0x24a3770();
   input += synapse0x24a37b0();
   input += synapse0x24a37f0();
   input += synapse0x24a3830();
   input += synapse0x24a3870();
   input += synapse0x24a38b0();
   input += synapse0x24a38f0();
   input += synapse0x24a3930();
   input += synapse0x24a3970();
   input += synapse0x24a39b0();
   input += synapse0x24a39f0();
   input += synapse0x24a3a30();
   input += synapse0x24a3a70();
   input += synapse0x24a3ab0();
   input += synapse0x24a3540();
   input += synapse0x24a3580();
   input += synapse0x24a3c00();
   input += synapse0x24a3c40();
   input += synapse0x24a3c80();
   input += synapse0x24a3cc0();
   input += synapse0x24a3d00();
   input += synapse0x24a3d40();
   input += synapse0x24a3d80();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a33b0() {
   double input = input0x24a33b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a3dc0() {
   double input = 0.211481;
   input += synapse0x24a4100();
   input += synapse0x24a4140();
   input += synapse0x24a4180();
   input += synapse0x24a41c0();
   input += synapse0x24a4200();
   input += synapse0x24a4240();
   input += synapse0x24a4280();
   input += synapse0x24a42c0();
   input += synapse0x24a4300();
   input += synapse0x24a4340();
   input += synapse0x24a4380();
   input += synapse0x24a43c0();
   input += synapse0x24a4400();
   input += synapse0x24a4440();
   input += synapse0x24a4480();
   input += synapse0x24a44c0();
   input += synapse0x24a3f50();
   input += synapse0x24a3f90();
   input += synapse0x24a4610();
   input += synapse0x24a4650();
   input += synapse0x24a4690();
   input += synapse0x24a46d0();
   input += synapse0x24a4710();
   input += synapse0x24a4750();
   input += synapse0x24a4790();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a3dc0() {
   double input = input0x24a3dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a47d0() {
   double input = -0.128448;
   input += synapse0x24a4b10();
   input += synapse0x24a4b50();
   input += synapse0x24a4b90();
   input += synapse0x24a4bd0();
   input += synapse0x24a4c10();
   input += synapse0x24a4c50();
   input += synapse0x24a4c90();
   input += synapse0x24a4cd0();
   input += synapse0x24a4d10();
   input += synapse0x24a4d50();
   input += synapse0x24a4d90();
   input += synapse0x24a4dd0();
   input += synapse0x24a4e10();
   input += synapse0x24a4e50();
   input += synapse0x24a4e90();
   input += synapse0x24a4ed0();
   input += synapse0x24a4960();
   input += synapse0x24a49a0();
   input += synapse0x24a5020();
   input += synapse0x24a5060();
   input += synapse0x24a50a0();
   input += synapse0x24a50e0();
   input += synapse0x24a5120();
   input += synapse0x24a5160();
   input += synapse0x24a51a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a47d0() {
   double input = input0x24a47d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a51e0() {
   double input = -0.780054;
   input += synapse0x24a5520();
   input += synapse0x24a5560();
   input += synapse0x24a55a0();
   input += synapse0x24a55e0();
   input += synapse0x24a5620();
   input += synapse0x24a5660();
   input += synapse0x24a56a0();
   input += synapse0x24a56e0();
   input += synapse0x24a5720();
   input += synapse0x24a5760();
   input += synapse0x24a57a0();
   input += synapse0x24a57e0();
   input += synapse0x24a5820();
   input += synapse0x24a5860();
   input += synapse0x24a58a0();
   input += synapse0x24a58e0();
   input += synapse0x24a5370();
   input += synapse0x24a53b0();
   input += synapse0x24a5a30();
   input += synapse0x24a5a70();
   input += synapse0x24a5ab0();
   input += synapse0x24a5af0();
   input += synapse0x24a5b30();
   input += synapse0x24a5b70();
   input += synapse0x24a5bb0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a51e0() {
   double input = input0x24a51e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a5bf0() {
   double input = -0.575258;
   input += synapse0x24a5f30();
   input += synapse0x24a5f70();
   input += synapse0x24a5fb0();
   input += synapse0x24a5ff0();
   input += synapse0x24a6030();
   input += synapse0x24a6070();
   input += synapse0x24a60b0();
   input += synapse0x24a60f0();
   input += synapse0x24a6130();
   input += synapse0x24a6170();
   input += synapse0x24a61b0();
   input += synapse0x24a61f0();
   input += synapse0x24a6230();
   input += synapse0x24a6270();
   input += synapse0x24a62b0();
   input += synapse0x24a62f0();
   input += synapse0x24a5d80();
   input += synapse0x24a5dc0();
   input += synapse0x24a6440();
   input += synapse0x24a6480();
   input += synapse0x24a64c0();
   input += synapse0x24a6500();
   input += synapse0x24a6540();
   input += synapse0x24a6580();
   input += synapse0x24a65c0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a5bf0() {
   double input = input0x24a5bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a6600() {
   double input = 0.15271;
   input += synapse0x24a6940();
   input += synapse0x24a6980();
   input += synapse0x24a69c0();
   input += synapse0x24a6a00();
   input += synapse0x24a6a40();
   input += synapse0x24a6a80();
   input += synapse0x24a6ac0();
   input += synapse0x24a6b00();
   input += synapse0x24a6b40();
   input += synapse0x24a6b80();
   input += synapse0x24a6bc0();
   input += synapse0x24a6c00();
   input += synapse0x24a6c40();
   input += synapse0x24a6c80();
   input += synapse0x24a6cc0();
   input += synapse0x24a6d00();
   input += synapse0x24a6790();
   input += synapse0x24a67d0();
   input += synapse0x24a6e50();
   input += synapse0x24a6e90();
   input += synapse0x24a6ed0();
   input += synapse0x24a6f10();
   input += synapse0x24a6f50();
   input += synapse0x24a6f90();
   input += synapse0x24a6fd0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a6600() {
   double input = input0x24a6600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a7010() {
   double input = 0.0958914;
   input += synapse0x24a7350();
   input += synapse0x24a7390();
   input += synapse0x24a73d0();
   input += synapse0x24a7410();
   input += synapse0x24a7450();
   input += synapse0x24a7490();
   input += synapse0x24a74d0();
   input += synapse0x24a7510();
   input += synapse0x24a7550();
   input += synapse0x24a7590();
   input += synapse0x24a75d0();
   input += synapse0x24a7610();
   input += synapse0x24a7650();
   input += synapse0x24a7690();
   input += synapse0x24a76d0();
   input += synapse0x24a7710();
   input += synapse0x24a71a0();
   input += synapse0x24a71e0();
   input += synapse0x24a7860();
   input += synapse0x24a78a0();
   input += synapse0x24a78e0();
   input += synapse0x24a7920();
   input += synapse0x24a7960();
   input += synapse0x24a79a0();
   input += synapse0x24a79e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a7010() {
   double input = input0x24a7010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a7a20() {
   double input = -0.00916015;
   input += synapse0x24a7d60();
   input += synapse0x24a7da0();
   input += synapse0x24a7de0();
   input += synapse0x24a7e20();
   input += synapse0x24a7e60();
   input += synapse0x24a7ea0();
   input += synapse0x24a7ee0();
   input += synapse0x24a7f20();
   input += synapse0x24a7f60();
   input += synapse0x24a7fa0();
   input += synapse0x24a7fe0();
   input += synapse0x24a8020();
   input += synapse0x24a8060();
   input += synapse0x24a80a0();
   input += synapse0x24a80e0();
   input += synapse0x24a8120();
   input += synapse0x24a7bb0();
   input += synapse0x24a7bf0();
   input += synapse0x24a8270();
   input += synapse0x24a82b0();
   input += synapse0x24a82f0();
   input += synapse0x24a8330();
   input += synapse0x24a8370();
   input += synapse0x24a83b0();
   input += synapse0x24a83f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a7a20() {
   double input = input0x24a7a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a8430() {
   double input = 0.515445;
   input += synapse0x24a8770();
   input += synapse0x2495f90();
   input += synapse0x2495fd0();
   input += synapse0x2496390();
   input += synapse0x24963d0();
   input += synapse0x2496810();
   input += synapse0x2496850();
   input += synapse0x2496c90();
   input += synapse0x2496cd0();
   input += synapse0x24971a0();
   input += synapse0x24971e0();
   input += synapse0x2497620();
   input += synapse0x2497660();
   input += synapse0x2497aa0();
   input += synapse0x2497ae0();
   input += synapse0x2498020();
   input += synapse0x2498060();
   input += synapse0x24984a0();
   input += synapse0x24984e0();
   input += synapse0x2498920();
   input += synapse0x2498960();
   input += synapse0x2498da0();
   input += synapse0x2498de0();
   input += synapse0x2499220();
   input += synapse0x2499260();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a8430() {
   double input = input0x24a8430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24a2a50() {
   double input = -0.32071;
   input += synapse0x24a2be0();
   input += synapse0x24a2c20();
   input += synapse0x249a4c0();
   input += synapse0x249a500();
   input += synapse0x24a85c0();
   input += synapse0x24a8600();
   input += synapse0x2495870();
   input += synapse0x24958b0();
   input += synapse0x249b060();
   input += synapse0x249b0a0();
   input += synapse0x249b4e0();
   input += synapse0x249b520();
   input += synapse0x249b960();
   input += synapse0x249b9a0();
   input += synapse0x249bde0();
   input += synapse0x249be20();
   input += synapse0x249c260();
   input += synapse0x249c2a0();
   input += synapse0x249c6e0();
   input += synapse0x249c720();
   input += synapse0x249cb60();
   input += synapse0x249cba0();
   input += synapse0x249cfe0();
   input += synapse0x249d020();
   input += synapse0x2499730();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24a2a50() {
   double input = input0x24a2a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24ab6a0() {
   double input = 0.158626;
   input += synapse0x2499770();
   input += synapse0x24ab9e0();
   input += synapse0x24aba20();
   input += synapse0x24aba60();
   input += synapse0x24abaa0();
   input += synapse0x24abae0();
   input += synapse0x24abb20();
   input += synapse0x24abb60();
   input += synapse0x24abba0();
   input += synapse0x24abbe0();
   input += synapse0x24abc20();
   input += synapse0x24abc60();
   input += synapse0x24abca0();
   input += synapse0x24abce0();
   input += synapse0x24abd20();
   input += synapse0x24abd60();
   input += synapse0x24ab830();
   input += synapse0x24ab870();
   input += synapse0x24abeb0();
   input += synapse0x24abef0();
   input += synapse0x24abf30();
   input += synapse0x24abf70();
   input += synapse0x24abfb0();
   input += synapse0x24abff0();
   input += synapse0x24ac030();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24ab6a0() {
   double input = input0x24ab6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24ac070() {
   double input = 0.101931;
   input += synapse0x24ac3b0();
   input += synapse0x24ac3f0();
   input += synapse0x24ac430();
   input += synapse0x24ac470();
   input += synapse0x24ac4b0();
   input += synapse0x24ac4f0();
   input += synapse0x24ac530();
   input += synapse0x24ac570();
   input += synapse0x24ac5b0();
   input += synapse0x24ac5f0();
   input += synapse0x24ac630();
   input += synapse0x24ac670();
   input += synapse0x24ac6b0();
   input += synapse0x24ac6f0();
   input += synapse0x24ac730();
   input += synapse0x24ac770();
   input += synapse0x24ac200();
   input += synapse0x24ac240();
   input += synapse0x24ac8c0();
   input += synapse0x24ac900();
   input += synapse0x24ac940();
   input += synapse0x24ac980();
   input += synapse0x24ac9c0();
   input += synapse0x24aca00();
   input += synapse0x24aca40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24ac070() {
   double input = input0x24ac070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24aca80() {
   double input = -0.944949;
   input += synapse0x24acdc0();
   input += synapse0x24ace00();
   input += synapse0x24ace40();
   input += synapse0x24ace80();
   input += synapse0x24acec0();
   input += synapse0x24acf00();
   input += synapse0x24acf40();
   input += synapse0x24acf80();
   input += synapse0x24acfc0();
   input += synapse0x24ad000();
   input += synapse0x24ad040();
   input += synapse0x24ad080();
   input += synapse0x24ad0c0();
   input += synapse0x24ad100();
   input += synapse0x24ad140();
   input += synapse0x24ad180();
   input += synapse0x24acc10();
   input += synapse0x24acc50();
   input += synapse0x24ad2d0();
   input += synapse0x24ad310();
   input += synapse0x24ad350();
   input += synapse0x24ad390();
   input += synapse0x24ad3d0();
   input += synapse0x24ad410();
   input += synapse0x24ad450();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24aca80() {
   double input = input0x24aca80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24ad490() {
   double input = 0.0831128;
   input += synapse0x24ad7d0();
   input += synapse0x24ad810();
   input += synapse0x24ad850();
   input += synapse0x24ad890();
   input += synapse0x24ad8d0();
   input += synapse0x24ad910();
   input += synapse0x24ad950();
   input += synapse0x24ad990();
   input += synapse0x24ad9d0();
   input += synapse0x24ada10();
   input += synapse0x24ada50();
   input += synapse0x24ada90();
   input += synapse0x24adad0();
   input += synapse0x24adb10();
   input += synapse0x24adb50();
   input += synapse0x24adb90();
   input += synapse0x24ad620();
   input += synapse0x24ad660();
   input += synapse0x24adce0();
   input += synapse0x24add20();
   input += synapse0x24add60();
   input += synapse0x24adda0();
   input += synapse0x24adde0();
   input += synapse0x24ade20();
   input += synapse0x24ade60();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24ad490() {
   double input = input0x24ad490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24adea0() {
   double input = 0.519908;
   input += synapse0x24ae1e0();
   input += synapse0x24ae220();
   input += synapse0x24ae260();
   input += synapse0x24ae2a0();
   input += synapse0x24ae2e0();
   input += synapse0x24ae320();
   input += synapse0x24ae360();
   input += synapse0x24ae3a0();
   input += synapse0x24ae3e0();
   input += synapse0x24ae420();
   input += synapse0x24ae460();
   input += synapse0x24ae4a0();
   input += synapse0x24ae4e0();
   input += synapse0x24ae520();
   input += synapse0x24ae560();
   input += synapse0x24ae5a0();
   input += synapse0x24ae030();
   input += synapse0x24ae070();
   input += synapse0x24ae6f0();
   input += synapse0x24ae730();
   input += synapse0x24ae770();
   input += synapse0x24ae7b0();
   input += synapse0x24ae7f0();
   input += synapse0x24ae830();
   input += synapse0x24ae870();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24adea0() {
   double input = input0x24adea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24ae8b0() {
   double input = 0.219526;
   input += synapse0x24aebf0();
   input += synapse0x24aec30();
   input += synapse0x24aec70();
   input += synapse0x24aecb0();
   input += synapse0x24aecf0();
   input += synapse0x24aed30();
   input += synapse0x24aed70();
   input += synapse0x24aedb0();
   input += synapse0x24aedf0();
   input += synapse0x24aee30();
   input += synapse0x24aee70();
   input += synapse0x24aeeb0();
   input += synapse0x24aeef0();
   input += synapse0x24aef30();
   input += synapse0x24aef70();
   input += synapse0x24aefb0();
   input += synapse0x24aea40();
   input += synapse0x24aea80();
   input += synapse0x24af100();
   input += synapse0x24af140();
   input += synapse0x24af180();
   input += synapse0x24af1c0();
   input += synapse0x24af200();
   input += synapse0x24af240();
   input += synapse0x24af280();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24ae8b0() {
   double input = input0x24ae8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24af2c0() {
   double input = 0.297702;
   input += synapse0x24af600();
   input += synapse0x24af640();
   input += synapse0x24af680();
   input += synapse0x24af6c0();
   input += synapse0x24af700();
   input += synapse0x24af740();
   input += synapse0x24af780();
   input += synapse0x24af7c0();
   input += synapse0x24af800();
   input += synapse0x24af840();
   input += synapse0x24af880();
   input += synapse0x24af8c0();
   input += synapse0x24af900();
   input += synapse0x24af940();
   input += synapse0x24af980();
   input += synapse0x24af9c0();
   input += synapse0x24af450();
   input += synapse0x24af490();
   input += synapse0x24afb10();
   input += synapse0x24afb50();
   input += synapse0x24afb90();
   input += synapse0x24afbd0();
   input += synapse0x24afc10();
   input += synapse0x24afc50();
   input += synapse0x24afc90();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24af2c0() {
   double input = input0x24af2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24afcd0() {
   double input = 0.238647;
   input += synapse0x24b0010();
   input += synapse0x24b0050();
   input += synapse0x24b0090();
   input += synapse0x24b00d0();
   input += synapse0x24b0110();
   input += synapse0x24b0150();
   input += synapse0x24b0190();
   input += synapse0x24b01d0();
   input += synapse0x24b0210();
   input += synapse0x24b0250();
   input += synapse0x24b0290();
   input += synapse0x24b02d0();
   input += synapse0x24b0310();
   input += synapse0x24b0350();
   input += synapse0x24b0390();
   input += synapse0x24b03d0();
   input += synapse0x24afe60();
   input += synapse0x24afea0();
   input += synapse0x24b0520();
   input += synapse0x24b0560();
   input += synapse0x24b05a0();
   input += synapse0x24b05e0();
   input += synapse0x24b0620();
   input += synapse0x24b0660();
   input += synapse0x24b06a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24afcd0() {
   double input = input0x24afcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x24b06e0() {
   double input = 0.30799;
   input += synapse0x24b0900();
   input += synapse0x24b0940();
   input += synapse0x24b0980();
   input += synapse0x24b09c0();
   input += synapse0x24b0a00();
   input += synapse0x24b0a40();
   input += synapse0x24b0a80();
   input += synapse0x24b0ac0();
   input += synapse0x24b0b00();
   input += synapse0x24b0b40();
   input += synapse0x24b0b80();
   input += synapse0x24b0bc0();
   input += synapse0x24b0c00();
   input += synapse0x24b0c40();
   input += synapse0x24b0c80();
   input += synapse0x24b0cc0();
   input += synapse0x2495cd0();
   input += synapse0x2495d10();
   input += synapse0x24b0e10();
   input += synapse0x24b0e50();
   input += synapse0x24b0e90();
   input += synapse0x24b0ed0();
   input += synapse0x24b0f10();
   input += synapse0x24b0f50();
   input += synapse0x24b0f90();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x24b06e0() {
   double input = input0x24b06e0();
   return (input * 4.09296)+130.901;
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239b720() {
   return (neuron0x2494c90()*-2.46964);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2484100() {
   return (neuron0x2494fd0()*-0.192819);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24960b0() {
   return (neuron0x2495310()*-0.225332);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24960f0() {
   return (neuron0x2495650()*3.68791);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496130() {
   return (neuron0x2495990()*0.0994142);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24964b0() {
   return (neuron0x2494c90()*-5.56733);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24964f0() {
   return (neuron0x2494fd0()*-0.27536);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496530() {
   return (neuron0x2495310()*2.95381);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496570() {
   return (neuron0x2495650()*1.70507);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24965b0() {
   return (neuron0x2495990()*-0.116866);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496930() {
   return (neuron0x2494c90()*1.55367);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496970() {
   return (neuron0x2494fd0()*-0.691988);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24969b0() {
   return (neuron0x2495310()*-0.527005);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24969f0() {
   return (neuron0x2495650()*-1.7243);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496a30() {
   return (neuron0x2495990()*-0.753851);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496db0() {
   return (neuron0x2494c90()*0.770042);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496df0() {
   return (neuron0x2494fd0()*1.10291);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239ebb0() {
   return (neuron0x2495310()*-0.0721502);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239ebf0() {
   return (neuron0x2495650()*0.172505);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496f40() {
   return (neuron0x2495990()*-1.12019);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24972c0() {
   return (neuron0x2494c90()*1.03588);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497300() {
   return (neuron0x2494fd0()*2.78344);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497340() {
   return (neuron0x2495310()*-0.083549);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497380() {
   return (neuron0x2495650()*-2.73306);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24973c0() {
   return (neuron0x2495990()*5.22415);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497740() {
   return (neuron0x2494c90()*0.0228911);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497780() {
   return (neuron0x2494fd0()*-0.023536);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24977c0() {
   return (neuron0x2495310()*0.00122599);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497800() {
   return (neuron0x2495650()*3.72248);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497840() {
   return (neuron0x2495990()*-5.49358);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497bc0() {
   return (neuron0x2494c90()*-0.0385781);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497c00() {
   return (neuron0x2494fd0()*-0.279781);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497c40() {
   return (neuron0x2495310()*-0.00656309);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496e30() {
   return (neuron0x2495650()*2.59669);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496e70() {
   return (neuron0x2495990()*-2.46126);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498140() {
   return (neuron0x2494c90()*-0.258503);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498180() {
   return (neuron0x2494fd0()*-0.421503);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24981c0() {
   return (neuron0x2495310()*-0.00687797);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498200() {
   return (neuron0x2495650()*-9.19103);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498240() {
   return (neuron0x2495990()*10.0862);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24985c0() {
   return (neuron0x2494c90()*0.409067);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498600() {
   return (neuron0x2494fd0()*0.529117);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498640() {
   return (neuron0x2495310()*0.0197388);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498680() {
   return (neuron0x2495650()*-1.37786);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24986c0() {
   return (neuron0x2495990()*-0.0532904);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498a40() {
   return (neuron0x2494c90()*0.0900851);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498a80() {
   return (neuron0x2494fd0()*0.451527);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498ac0() {
   return (neuron0x2495310()*-0.0211483);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498b00() {
   return (neuron0x2495650()*-2.00488);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498b40() {
   return (neuron0x2495990()*-0.447246);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498ec0() {
   return (neuron0x2494c90()*-1.16559);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498f00() {
   return (neuron0x2494fd0()*-3.70651);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498f40() {
   return (neuron0x2495310()*0.189087);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498f80() {
   return (neuron0x2495650()*-3.21006);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498fc0() {
   return (neuron0x2495990()*4.63023);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239ea00() {
   return (neuron0x2494c90()*-0.954679);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239ea40() {
   return (neuron0x2494fd0()*0.647309);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499450() {
   return (neuron0x2495310()*0.732416);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499490() {
   return (neuron0x2495650()*5.50297);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24994d0() {
   return (neuron0x2495990()*-3.0037);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499850() {
   return (neuron0x2494c90()*1.17626);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499890() {
   return (neuron0x2494fd0()*3.8568);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24998d0() {
   return (neuron0x2495310()*-0.154998);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499910() {
   return (neuron0x2495650()*-0.517777);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499950() {
   return (neuron0x2495990()*3.67364);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239f1d0() {
   return (neuron0x2494c90()*0.3079);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497e10() {
   return (neuron0x2494fd0()*0.41625);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497e50() {
   return (neuron0x2495310()*0.0315011);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499da0() {
   return (neuron0x2495650()*0.162706);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499de0() {
   return (neuron0x2495990()*-5.01632);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a160() {
   return (neuron0x2494c90()*1.25988);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a1a0() {
   return (neuron0x2494fd0()*1.75211);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a1e0() {
   return (neuron0x2495310()*-0.0431384);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a220() {
   return (neuron0x2495650()*4.29267);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a260() {
   return (neuron0x2495990()*1.81895);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a5e0() {
   return (neuron0x2494c90()*-6.65217);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2494eb0() {
   return (neuron0x2494fd0()*0.420615);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2494ef0() {
   return (neuron0x2495310()*2.53757);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24951f0() {
   return (neuron0x2495650()*1.57154);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495230() {
   return (neuron0x2495990()*0.702038);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ad00() {
   return (neuron0x2494c90()*1.76647);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ad40() {
   return (neuron0x2494fd0()*-0.886102);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ad80() {
   return (neuron0x2495310()*-0.754458);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249adc0() {
   return (neuron0x2495650()*-1.91196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ae00() {
   return (neuron0x2495990()*-0.114809);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b180() {
   return (neuron0x2494c90()*9.14218);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b1c0() {
   return (neuron0x2494fd0()*-0.188671);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b200() {
   return (neuron0x2495310()*-3.56001);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b240() {
   return (neuron0x2495650()*-2.12122);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b280() {
   return (neuron0x2495990()*0.202953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b600() {
   return (neuron0x2494c90()*0.040648);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b640() {
   return (neuron0x2494fd0()*0.260512);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b680() {
   return (neuron0x2495310()*-0.0115133);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b6c0() {
   return (neuron0x2495650()*6.30474);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b700() {
   return (neuron0x2495990()*-0.0262055);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ba80() {
   return (neuron0x2494c90()*-0.477977);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bac0() {
   return (neuron0x2494fd0()*-0.202508);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bb00() {
   return (neuron0x2495310()*0.0549716);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bb40() {
   return (neuron0x2495650()*4.39989);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bb80() {
   return (neuron0x2495990()*-2.12744);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bf00() {
   return (neuron0x2494c90()*1.66681);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bf40() {
   return (neuron0x2494fd0()*-0.673277);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bf80() {
   return (neuron0x2495310()*-0.776953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bfc0() {
   return (neuron0x2495650()*-3.11793);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c000() {
   return (neuron0x2495990()*-0.910243);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c380() {
   return (neuron0x2494c90()*0.682089);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c3c0() {
   return (neuron0x2494fd0()*-1.41475);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c400() {
   return (neuron0x2495310()*-0.680592);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c440() {
   return (neuron0x2495650()*-3.17214);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c480() {
   return (neuron0x2495990()*-0.628336);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c800() {
   return (neuron0x2494c90()*1.15169);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c840() {
   return (neuron0x2494fd0()*2.91752);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c880() {
   return (neuron0x2495310()*-0.192372);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c8c0() {
   return (neuron0x2495650()*1.80683);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c900() {
   return (neuron0x2495990()*7.04333);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cc80() {
   return (neuron0x2494c90()*2.62845);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ccc0() {
   return (neuron0x2494fd0()*-0.10824);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cd00() {
   return (neuron0x2495310()*0.331862);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cd40() {
   return (neuron0x2495650()*-3.51764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cd80() {
   return (neuron0x2495990()*0.213408);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d100() {
   return (neuron0x2494c90()*-0.0660507);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d140() {
   return (neuron0x2494fd0()*-0.380863);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d180() {
   return (neuron0x2495310()*0.0242907);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d1c0() {
   return (neuron0x2495650()*-4.15891);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d200() {
   return (neuron0x2495990()*-0.244804);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496d20() {
   return (neuron0x2495e00()*0.831284);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496d60() {
   return (neuron0x2496170()*0.232588);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497230() {
   return (neuron0x24965f0()*0.365535);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497270() {
   return (neuron0x2496a70()*-0.444606);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24976b0() {
   return (neuron0x2496f80()*-0.368155);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24976f0() {
   return (neuron0x2497400()*-2.38201);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497b30() {
   return (neuron0x2497880()*2.62069);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497b70() {
   return (neuron0x2497e90()*0.46713);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24980b0() {
   return (neuron0x2498280()*1.57266);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24980f0() {
   return (neuron0x2498700()*0.615451);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498530() {
   return (neuron0x2498b80()*-0.0268827);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498570() {
   return (neuron0x2499000()*-0.31897);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24989b0() {
   return (neuron0x2499510()*-1.03342);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24989f0() {
   return (neuron0x2497c80()*0.797538);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498e30() {
   return (neuron0x2499e20()*0.115858);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498e70() {
   return (neuron0x249a2a0()*0.512944);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24992b0() {
   return (neuron0x249ab70()*0.485829);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24992f0() {
   return (neuron0x249ae40()*-0.701512);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24997c0() {
   return (neuron0x249b2c0()*-0.77873);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499800() {
   return (neuron0x249b740()*0.148365);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a0d0() {
   return (neuron0x249bbc0()*0.528632);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a110() {
   return (neuron0x249c040()*-0.162222);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a550() {
   return (neuron0x249c4c0()*-1.88928);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a590() {
   return (neuron0x249c940()*0.0747953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495bb0() {
   return (neuron0x249cdc0()*-2.72129);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499c30() {
   return (neuron0x2495e00()*-0.113192);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499c70() {
   return (neuron0x2496170()*-0.203337);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499cb0() {
   return (neuron0x24965f0()*0.223043);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499cf0() {
   return (neuron0x2496a70()*-0.772202);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499d30() {
   return (neuron0x2496f80()*-0.44858);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495bf0() {
   return (neuron0x2497400()*-0.831054);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249be70() {
   return (neuron0x2497880()*-0.374082);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249beb0() {
   return (neuron0x2497e90()*1.33313);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c2f0() {
   return (neuron0x2498280()*1.0272);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c330() {
   return (neuron0x2498700()*0.430746);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c770() {
   return (neuron0x2498b80()*0.285686);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c7b0() {
   return (neuron0x2499000()*-1.70076);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cbf0() {
   return (neuron0x2499510()*0.486536);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cc30() {
   return (neuron0x2497c80()*0.67077);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d070() {
   return (neuron0x2499e20()*-0.836943);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d0b0() {
   return (neuron0x249a2a0()*-0.074167);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496020() {
   return (neuron0x249ab70()*0.59877);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496060() {
   return (neuron0x249ae40()*0.958657);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b0f0() {
   return (neuron0x249b2c0()*-1.22958);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b130() {
   return (neuron0x249b740()*-0.528586);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239b7f0() {
   return (neuron0x249bbc0()*0.297246);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x239b830() {
   return (neuron0x249c040()*0.59929);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f780() {
   return (neuron0x249c4c0()*-0.8171);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f7c0() {
   return (neuron0x249c940()*1.43207);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f800() {
   return (neuron0x249cdc0()*0.974031);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499340() {
   return (neuron0x2495e00()*-0.191554);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499380() {
   return (neuron0x2496170()*1.1754);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24993c0() {
   return (neuron0x24965f0()*0.623241);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499400() {
   return (neuron0x2496a70()*-0.021565);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fd90() {
   return (neuron0x2496f80()*0.838381);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fdd0() {
   return (neuron0x2497400()*-2.04548);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fe10() {
   return (neuron0x2497880()*2.00115);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fe50() {
   return (neuron0x2497e90()*1.48417);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fe90() {
   return (neuron0x2498280()*0.596806);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fed0() {
   return (neuron0x2498700()*1.15166);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ff10() {
   return (neuron0x2498b80()*1.17853);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ff50() {
   return (neuron0x2499000()*-1.0325);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ff90() {
   return (neuron0x2499510()*1.43533);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ffd0() {
   return (neuron0x2497c80()*-0.146672);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0010() {
   return (neuron0x2499e20()*-0.197884);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0050() {
   return (neuron0x249a2a0()*0.903377);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f9d0() {
   return (neuron0x249ab70()*0.673506);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249fa10() {
   return (neuron0x249ae40()*0.311597);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a01a0() {
   return (neuron0x249b2c0()*-3.24322);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a01e0() {
   return (neuron0x249b740()*-0.877432);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0220() {
   return (neuron0x249bbc0()*0.57524);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0260() {
   return (neuron0x249c040()*0.452625);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a02a0() {
   return (neuron0x249c4c0()*1.89343);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a02e0() {
   return (neuron0x249c940()*0.571806);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0320() {
   return (neuron0x249cdc0()*-0.541192);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a06a0() {
   return (neuron0x2495e00()*-0.0899069);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a06e0() {
   return (neuron0x2496170()*-0.0979298);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0720() {
   return (neuron0x24965f0()*-0.243173);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0760() {
   return (neuron0x2496a70()*-0.268429);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a07a0() {
   return (neuron0x2496f80()*0.127747);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a07e0() {
   return (neuron0x2497400()*0.203266);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0820() {
   return (neuron0x2497880()*-0.44914);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0860() {
   return (neuron0x2497e90()*0.26643);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a08a0() {
   return (neuron0x2498280()*0.560343);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a08e0() {
   return (neuron0x2498700()*0.556991);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0920() {
   return (neuron0x2498b80()*0.472818);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0960() {
   return (neuron0x2499000()*-0.477878);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a09a0() {
   return (neuron0x2499510()*0.226475);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a09e0() {
   return (neuron0x2497c80()*0.197371);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0a20() {
   return (neuron0x2499e20()*-0.130729);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0a60() {
   return (neuron0x249a2a0()*0.165956);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a04f0() {
   return (neuron0x249ab70()*0.144312);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0530() {
   return (neuron0x249ae40()*0.322135);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0bb0() {
   return (neuron0x249b2c0()*0.211335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0bf0() {
   return (neuron0x249b740()*0.392843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0c30() {
   return (neuron0x249bbc0()*-0.0180654);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0c70() {
   return (neuron0x249c040()*-0.183072);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0cb0() {
   return (neuron0x249c4c0()*-0.30939);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0cf0() {
   return (neuron0x249c940()*0.456743);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0d30() {
   return (neuron0x249cdc0()*0.383422);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a10b0() {
   return (neuron0x2495e00()*-1.28308);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a10f0() {
   return (neuron0x2496170()*-0.432518);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1130() {
   return (neuron0x24965f0()*-0.0832816);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1170() {
   return (neuron0x2496a70()*0.168053);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a11b0() {
   return (neuron0x2496f80()*2.52816);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a11f0() {
   return (neuron0x2497400()*-2.07394);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1230() {
   return (neuron0x2497880()*-1.93918);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1270() {
   return (neuron0x2497e90()*5.97644);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a12b0() {
   return (neuron0x2498280()*0.895131);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a12f0() {
   return (neuron0x2498700()*0.132919);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1330() {
   return (neuron0x2498b80()*2.52261);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1370() {
   return (neuron0x2499000()*-1.31281);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a13b0() {
   return (neuron0x2499510()*-0.977898);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a13f0() {
   return (neuron0x2497c80()*-0.435239);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1430() {
   return (neuron0x2499e20()*-3.35288);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1470() {
   return (neuron0x249a2a0()*-0.348435);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0f00() {
   return (neuron0x249ab70()*0.44386);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a0f40() {
   return (neuron0x249ae40()*1.41423);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a15c0() {
   return (neuron0x249b2c0()*-3.98807);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1600() {
   return (neuron0x249b740()*-0.587344);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1640() {
   return (neuron0x249bbc0()*0.352);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1680() {
   return (neuron0x249c040()*0.312604);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a16c0() {
   return (neuron0x249c4c0()*0.406851);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1700() {
   return (neuron0x249c940()*0.467582);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1740() {
   return (neuron0x249cdc0()*3.20577);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1ac0() {
   return (neuron0x2495e00()*0.135448);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1b00() {
   return (neuron0x2496170()*-0.748221);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1b40() {
   return (neuron0x24965f0()*-0.155371);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1b80() {
   return (neuron0x2496a70()*0.57358);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1bc0() {
   return (neuron0x2496f80()*0.0488996);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1c00() {
   return (neuron0x2497400()*0.713653);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1c40() {
   return (neuron0x2497880()*0.136672);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ee60() {
   return (neuron0x2497e90()*-0.998642);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249eea0() {
   return (neuron0x2498280()*-0.9692);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249eee0() {
   return (neuron0x2498700()*-1.07543);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ef20() {
   return (neuron0x2498b80()*-0.537776);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249ef60() {
   return (neuron0x2499000()*2.43645);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249efa0() {
   return (neuron0x2499510()*-1.4396);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249efe0() {
   return (neuron0x2497c80()*-1.55942);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f020() {
   return (neuron0x2499e20()*1.893);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f060() {
   return (neuron0x249a2a0()*-0.6668);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1910() {
   return (neuron0x249ab70()*-1.1033);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a1950() {
   return (neuron0x249ae40()*-2.02122);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f1b0() {
   return (neuron0x249b2c0()*1.23576);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f1f0() {
   return (neuron0x249b740()*0.951821);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f230() {
   return (neuron0x249bbc0()*-0.693951);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f270() {
   return (neuron0x249c040()*-0.863245);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f2b0() {
   return (neuron0x249c4c0()*1.16287);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f2f0() {
   return (neuron0x249c940()*-1.85565);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f330() {
   return (neuron0x249cdc0()*-1.31457);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f620() {
   return (neuron0x2495e00()*1.42629);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2d20() {
   return (neuron0x2496170()*-0.106391);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2d60() {
   return (neuron0x24965f0()*-0.46583);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2da0() {
   return (neuron0x2496a70()*0.705891);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2de0() {
   return (neuron0x2496f80()*-0.0041409);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2e20() {
   return (neuron0x2497400()*1.31333);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2e60() {
   return (neuron0x2497880()*0.326396);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2ea0() {
   return (neuron0x2497e90()*-1.90709);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2ee0() {
   return (neuron0x2498280()*-0.984719);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2f20() {
   return (neuron0x2498700()*-1.61641);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2f60() {
   return (neuron0x2498b80()*-0.888394);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2fa0() {
   return (neuron0x2499000()*2.35844);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2fe0() {
   return (neuron0x2499510()*-0.783335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3020() {
   return (neuron0x2497c80()*-1.42462);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3060() {
   return (neuron0x2499e20()*1.65109);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a30a0() {
   return (neuron0x249a2a0()*-0.939587);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f500() {
   return (neuron0x249ab70()*-0.234196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249f540() {
   return (neuron0x249ae40()*-1.32198);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a31f0() {
   return (neuron0x249b2c0()*1.48914);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3230() {
   return (neuron0x249b740()*1.78111);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3270() {
   return (neuron0x249bbc0()*-1.40422);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a32b0() {
   return (neuron0x249c040()*-1.44063);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a32f0() {
   return (neuron0x249c4c0()*2.36293);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3330() {
   return (neuron0x249c940()*-1.4369);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3370() {
   return (neuron0x249cdc0()*-1.29206);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a36f0() {
   return (neuron0x2495e00()*0.127414);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3730() {
   return (neuron0x2496170()*0.395335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3770() {
   return (neuron0x24965f0()*0.319713);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a37b0() {
   return (neuron0x2496a70()*0.95278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a37f0() {
   return (neuron0x2496f80()*0.325151);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3830() {
   return (neuron0x2497400()*0.619118);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3870() {
   return (neuron0x2497880()*1.0818);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a38b0() {
   return (neuron0x2497e90()*0.177233);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a38f0() {
   return (neuron0x2498280()*0.0307821);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3930() {
   return (neuron0x2498700()*-0.0624405);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3970() {
   return (neuron0x2498b80()*0.230809);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a39b0() {
   return (neuron0x2499000()*1.27018);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a39f0() {
   return (neuron0x2499510()*0.437753);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3a30() {
   return (neuron0x2497c80()*0.226124);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3a70() {
   return (neuron0x2499e20()*1.30299);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3ab0() {
   return (neuron0x249a2a0()*0.480263);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3540() {
   return (neuron0x249ab70()*-0.142923);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3580() {
   return (neuron0x249ae40()*-0.22078);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3c00() {
   return (neuron0x249b2c0()*0.989828);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3c40() {
   return (neuron0x249b740()*0.337727);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3c80() {
   return (neuron0x249bbc0()*-0.667775);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3cc0() {
   return (neuron0x249c040()*0.0724305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3d00() {
   return (neuron0x249c4c0()*1.11825);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3d40() {
   return (neuron0x249c940()*0.184752);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3d80() {
   return (neuron0x249cdc0()*0.215347);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4100() {
   return (neuron0x2495e00()*-1.01161);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4140() {
   return (neuron0x2496170()*0.349014);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4180() {
   return (neuron0x24965f0()*0.833237);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a41c0() {
   return (neuron0x2496a70()*-0.793229);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4200() {
   return (neuron0x2496f80()*-1.06318);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4240() {
   return (neuron0x2497400()*-1.91412);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4280() {
   return (neuron0x2497880()*-0.299319);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a42c0() {
   return (neuron0x2497e90()*2.19062);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4300() {
   return (neuron0x2498280()*1.56915);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4340() {
   return (neuron0x2498700()*1.07013);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4380() {
   return (neuron0x2498b80()*1.22603);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a43c0() {
   return (neuron0x2499000()*-2.37949);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4400() {
   return (neuron0x2499510()*1.18163);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4440() {
   return (neuron0x2497c80()*0.902931);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4480() {
   return (neuron0x2499e20()*-1.5957);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a44c0() {
   return (neuron0x249a2a0()*0.295281);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3f50() {
   return (neuron0x249ab70()*0.427426);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a3f90() {
   return (neuron0x249ae40()*1.56221);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4610() {
   return (neuron0x249b2c0()*-1.87874);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4650() {
   return (neuron0x249b740()*-1.57057);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4690() {
   return (neuron0x249bbc0()*1.31026);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a46d0() {
   return (neuron0x249c040()*1.32574);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4710() {
   return (neuron0x249c4c0()*-2.718);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4750() {
   return (neuron0x249c940()*1.33298);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4790() {
   return (neuron0x249cdc0()*1.56755);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4b10() {
   return (neuron0x2495e00()*0.328111);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4b50() {
   return (neuron0x2496170()*-0.26911);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4b90() {
   return (neuron0x24965f0()*-0.172607);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4bd0() {
   return (neuron0x2496a70()*0.414031);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4c10() {
   return (neuron0x2496f80()*0.0823673);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4c50() {
   return (neuron0x2497400()*0.613624);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4c90() {
   return (neuron0x2497880()*-0.154996);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4cd0() {
   return (neuron0x2497e90()*-0.703586);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4d10() {
   return (neuron0x2498280()*-1.39307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4d50() {
   return (neuron0x2498700()*-1.1491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4d90() {
   return (neuron0x2498b80()*-1.15093);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4dd0() {
   return (neuron0x2499000()*2.24653);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4e10() {
   return (neuron0x2499510()*-0.680454);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4e50() {
   return (neuron0x2497c80()*-0.972831);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4e90() {
   return (neuron0x2499e20()*1.60587);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4ed0() {
   return (neuron0x249a2a0()*-0.691332);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a4960() {
   return (neuron0x249ab70()*-0.226418);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a49a0() {
   return (neuron0x249ae40()*-1.32403);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5020() {
   return (neuron0x249b2c0()*1.32211);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5060() {
   return (neuron0x249b740()*1.06204);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a50a0() {
   return (neuron0x249bbc0()*-1.17548);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a50e0() {
   return (neuron0x249c040()*-0.551302);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5120() {
   return (neuron0x249c4c0()*1.00611);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5160() {
   return (neuron0x249c940()*-1.23715);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a51a0() {
   return (neuron0x249cdc0()*-1.45517);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5520() {
   return (neuron0x2495e00()*0.234251);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5560() {
   return (neuron0x2496170()*-0.580191);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a55a0() {
   return (neuron0x24965f0()*-0.00683127);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a55e0() {
   return (neuron0x2496a70()*0.234785);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5620() {
   return (neuron0x2496f80()*1.80028);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5660() {
   return (neuron0x2497400()*-1.24758);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a56a0() {
   return (neuron0x2497880()*-3.63232);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a56e0() {
   return (neuron0x2497e90()*-1.05967);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5720() {
   return (neuron0x2498280()*-0.792129);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5760() {
   return (neuron0x2498700()*-1.26042);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a57a0() {
   return (neuron0x2498b80()*-3.19339);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a57e0() {
   return (neuron0x2499000()*0.571216);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5820() {
   return (neuron0x2499510()*-1.99587);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5860() {
   return (neuron0x2497c80()*2.40527);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a58a0() {
   return (neuron0x2499e20()*-4.33141);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a58e0() {
   return (neuron0x249a2a0()*-0.981148);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5370() {
   return (neuron0x249ab70()*-0.419518);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a53b0() {
   return (neuron0x249ae40()*-0.419548);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5a30() {
   return (neuron0x249b2c0()*-6.39645);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5a70() {
   return (neuron0x249b740()*-0.0382831);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5ab0() {
   return (neuron0x249bbc0()*0.0188374);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5af0() {
   return (neuron0x249c040()*-0.255753);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5b30() {
   return (neuron0x249c4c0()*6.5102);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5b70() {
   return (neuron0x249c940()*-0.467172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5bb0() {
   return (neuron0x249cdc0()*4.83265);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5f30() {
   return (neuron0x2495e00()*0.947934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5f70() {
   return (neuron0x2496170()*-0.466299);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5fb0() {
   return (neuron0x24965f0()*-0.269177);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5ff0() {
   return (neuron0x2496a70()*-0.139007);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6030() {
   return (neuron0x2496f80()*0.0670581);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6070() {
   return (neuron0x2497400()*1.7334);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a60b0() {
   return (neuron0x2497880()*-0.0915412);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a60f0() {
   return (neuron0x2497e90()*-1.6583);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6130() {
   return (neuron0x2498280()*-1.31895);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6170() {
   return (neuron0x2498700()*-1.21988);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a61b0() {
   return (neuron0x2498b80()*-1.64456);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a61f0() {
   return (neuron0x2499000()*3.72944);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6230() {
   return (neuron0x2499510()*-1.29265);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6270() {
   return (neuron0x2497c80()*-1.59757);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a62b0() {
   return (neuron0x2499e20()*1.64591);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a62f0() {
   return (neuron0x249a2a0()*-0.764187);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5d80() {
   return (neuron0x249ab70()*-0.591551);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a5dc0() {
   return (neuron0x249ae40()*-1.75025);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6440() {
   return (neuron0x249b2c0()*2.00551);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6480() {
   return (neuron0x249b740()*1.65323);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a64c0() {
   return (neuron0x249bbc0()*-1.02926);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6500() {
   return (neuron0x249c040()*-1.22597);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6540() {
   return (neuron0x249c4c0()*2.23097);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6580() {
   return (neuron0x249c940()*-2.15054);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a65c0() {
   return (neuron0x249cdc0()*-1.42405);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6940() {
   return (neuron0x2495e00()*-0.938847);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6980() {
   return (neuron0x2496170()*0.673518);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a69c0() {
   return (neuron0x24965f0()*0.136934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6a00() {
   return (neuron0x2496a70()*-1.23584);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6a40() {
   return (neuron0x2496f80()*-0.931201);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6a80() {
   return (neuron0x2497400()*-2.09016);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6ac0() {
   return (neuron0x2497880()*-0.374759);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6b00() {
   return (neuron0x2497e90()*2.60527);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6b40() {
   return (neuron0x2498280()*2.5724);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6b80() {
   return (neuron0x2498700()*1.88801);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6bc0() {
   return (neuron0x2498b80()*0.625979);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6c00() {
   return (neuron0x2499000()*-2.40256);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6c40() {
   return (neuron0x2499510()*1.82795);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6c80() {
   return (neuron0x2497c80()*1.81616);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6cc0() {
   return (neuron0x2499e20()*-0.7739);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6d00() {
   return (neuron0x249a2a0()*0.778257);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6790() {
   return (neuron0x249ab70()*0.766025);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a67d0() {
   return (neuron0x249ae40()*0.0430086);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6e50() {
   return (neuron0x249b2c0()*-3.58823);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6e90() {
   return (neuron0x249b740()*-1.4459);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6ed0() {
   return (neuron0x249bbc0()*0.309448);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6f10() {
   return (neuron0x249c040()*0.760448);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6f50() {
   return (neuron0x249c4c0()*-1.69759);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6f90() {
   return (neuron0x249c940()*1.49798);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a6fd0() {
   return (neuron0x249cdc0()*1.12218);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7350() {
   return (neuron0x2495e00()*-0.256038);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7390() {
   return (neuron0x2496170()*-0.320075);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a73d0() {
   return (neuron0x24965f0()*0.569701);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7410() {
   return (neuron0x2496a70()*-0.532908);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7450() {
   return (neuron0x2496f80()*1.54729);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7490() {
   return (neuron0x2497400()*-0.109811);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a74d0() {
   return (neuron0x2497880()*-0.485528);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7510() {
   return (neuron0x2497e90()*1.12545);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7550() {
   return (neuron0x2498280()*-0.0375859);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7590() {
   return (neuron0x2498700()*-0.342812);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a75d0() {
   return (neuron0x2498b80()*2.60019);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7610() {
   return (neuron0x2499000()*-0.951317);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7650() {
   return (neuron0x2499510()*-2.22503);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7690() {
   return (neuron0x2497c80()*-1.02123);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a76d0() {
   return (neuron0x2499e20()*-1.12475);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7710() {
   return (neuron0x249a2a0()*0.0262895);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a71a0() {
   return (neuron0x249ab70()*0.0796093);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a71e0() {
   return (neuron0x249ae40()*0.554061);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7860() {
   return (neuron0x249b2c0()*-2.762);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a78a0() {
   return (neuron0x249b740()*-0.237746);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a78e0() {
   return (neuron0x249bbc0()*0.271843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7920() {
   return (neuron0x249c040()*0.250463);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7960() {
   return (neuron0x249c4c0()*-0.386838);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a79a0() {
   return (neuron0x249c940()*0.347614);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a79e0() {
   return (neuron0x249cdc0()*2.41848);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7d60() {
   return (neuron0x2495e00()*1.24597);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7da0() {
   return (neuron0x2496170()*-0.284092);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7de0() {
   return (neuron0x24965f0()*0.0986673);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7e20() {
   return (neuron0x2496a70()*0.2236);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7e60() {
   return (neuron0x2496f80()*-1.05671);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7ea0() {
   return (neuron0x2497400()*1.19905);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7ee0() {
   return (neuron0x2497880()*0.758322);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7f20() {
   return (neuron0x2497e90()*-2.73376);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7f60() {
   return (neuron0x2498280()*-0.691277);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7fa0() {
   return (neuron0x2498700()*-0.23616);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7fe0() {
   return (neuron0x2498b80()*-0.766299);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8020() {
   return (neuron0x2499000()*1.54791);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8060() {
   return (neuron0x2499510()*0.765347);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a80a0() {
   return (neuron0x2497c80()*-0.511344);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a80e0() {
   return (neuron0x2499e20()*2.09253);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8120() {
   return (neuron0x249a2a0()*0.176806);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7bb0() {
   return (neuron0x249ab70()*-0.11827);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a7bf0() {
   return (neuron0x249ae40()*-1.17466);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8270() {
   return (neuron0x249b2c0()*1.86178);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a82b0() {
   return (neuron0x249b740()*1.24235);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a82f0() {
   return (neuron0x249bbc0()*-0.241693);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8330() {
   return (neuron0x249c040()*-0.267955);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8370() {
   return (neuron0x249c4c0()*-0.0599177);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a83b0() {
   return (neuron0x249c940()*-0.956184);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a83f0() {
   return (neuron0x249cdc0()*-2.43098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8770() {
   return (neuron0x2495e00()*0.445817);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495f90() {
   return (neuron0x2496170()*-0.630753);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495fd0() {
   return (neuron0x24965f0()*-0.576586);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496390() {
   return (neuron0x2496a70()*0.957924);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24963d0() {
   return (neuron0x2496f80()*0.68213);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496810() {
   return (neuron0x2497400()*1.19202);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496850() {
   return (neuron0x2497880()*0.451329);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496c90() {
   return (neuron0x2497e90()*-1.16768);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2496cd0() {
   return (neuron0x2498280()*-1.1162);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24971a0() {
   return (neuron0x2498700()*-1.16792);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24971e0() {
   return (neuron0x2498b80()*-1.00532);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497620() {
   return (neuron0x2499000()*2.39118);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497660() {
   return (neuron0x2499510()*-0.747838);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497aa0() {
   return (neuron0x2497c80()*-1.36473);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2497ae0() {
   return (neuron0x2499e20()*1.57156);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498020() {
   return (neuron0x249a2a0()*-0.380745);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498060() {
   return (neuron0x249ab70()*-0.42433);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24984a0() {
   return (neuron0x249ae40()*-1.38764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24984e0() {
   return (neuron0x249b2c0()*1.12934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498920() {
   return (neuron0x249b740()*1.57891);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498960() {
   return (neuron0x249bbc0()*-0.443288);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498da0() {
   return (neuron0x249c040()*-1.0335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2498de0() {
   return (neuron0x249c4c0()*1.86626);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499220() {
   return (neuron0x249c940()*-1.33564);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499260() {
   return (neuron0x249cdc0()*-0.792539);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2be0() {
   return (neuron0x2495e00()*0.0922839);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a2c20() {
   return (neuron0x2496170()*-1.17727);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a4c0() {
   return (neuron0x24965f0()*-0.434134);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249a500() {
   return (neuron0x2496a70()*-0.394885);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a85c0() {
   return (neuron0x2496f80()*0.162477);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24a8600() {
   return (neuron0x2497400()*1.30634);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495870() {
   return (neuron0x2497880()*-1.39155);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24958b0() {
   return (neuron0x2497e90()*-0.120225);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b060() {
   return (neuron0x2498280()*-0.212413);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b0a0() {
   return (neuron0x2498700()*-0.772819);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b4e0() {
   return (neuron0x2498b80()*-0.120522);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b520() {
   return (neuron0x2499000()*0.0309624);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b960() {
   return (neuron0x2499510()*0.517801);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249b9a0() {
   return (neuron0x2497c80()*-0.720728);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249bde0() {
   return (neuron0x2499e20()*-0.477179);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249be20() {
   return (neuron0x249a2a0()*-0.857803);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c260() {
   return (neuron0x249ab70()*0.222137);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c2a0() {
   return (neuron0x249ae40()*-0.0637508);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c6e0() {
   return (neuron0x249b2c0()*2.90071);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249c720() {
   return (neuron0x249b740()*0.233728);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cb60() {
   return (neuron0x249bbc0()*-0.590101);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cba0() {
   return (neuron0x249c040()*-0.430046);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249cfe0() {
   return (neuron0x249c4c0()*-0.398821);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x249d020() {
   return (neuron0x249c940()*-0.212478);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499730() {
   return (neuron0x249cdc0()*-0.140575);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2499770() {
   return (neuron0x2495e00()*-0.171127);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ab9e0() {
   return (neuron0x2496170()*-0.306113);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aba20() {
   return (neuron0x24965f0()*-0.305775);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aba60() {
   return (neuron0x2496a70()*0.114382);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abaa0() {
   return (neuron0x2496f80()*-5.42957);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abae0() {
   return (neuron0x2497400()*3.87124);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abb20() {
   return (neuron0x2497880()*4.99359);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abb60() {
   return (neuron0x2497e90()*-4.65873);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abba0() {
   return (neuron0x2498280()*-0.975635);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abbe0() {
   return (neuron0x2498700()*0.199163);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abc20() {
   return (neuron0x2498b80()*1.74422);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abc60() {
   return (neuron0x2499000()*-0.0738402);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abca0() {
   return (neuron0x2499510()*5.57694);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abce0() {
   return (neuron0x2497c80()*-1.84442);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abd20() {
   return (neuron0x2499e20()*2.81063);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abd60() {
   return (neuron0x249a2a0()*-0.255672);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ab830() {
   return (neuron0x249ab70()*0.15228);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ab870() {
   return (neuron0x249ae40()*-0.110188);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abeb0() {
   return (neuron0x249b2c0()*10.5192);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abef0() {
   return (neuron0x249b740()*-0.366816);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abf30() {
   return (neuron0x249bbc0()*-0.272963);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abf70() {
   return (neuron0x249c040()*0.32774);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abfb0() {
   return (neuron0x249c4c0()*-4.98522);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24abff0() {
   return (neuron0x249c940()*-0.208252);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac030() {
   return (neuron0x249cdc0()*-7.90363);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac3b0() {
   return (neuron0x2495e00()*-0.615764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac3f0() {
   return (neuron0x2496170()*0.492053);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac430() {
   return (neuron0x24965f0()*0.814704);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac470() {
   return (neuron0x2496a70()*-0.204399);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac4b0() {
   return (neuron0x2496f80()*0.377355);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac4f0() {
   return (neuron0x2497400()*-1.27212);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac530() {
   return (neuron0x2497880()*-1.17818);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac570() {
   return (neuron0x2497e90()*1.24315);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac5b0() {
   return (neuron0x2498280()*1.07467);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac5f0() {
   return (neuron0x2498700()*0.546658);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac630() {
   return (neuron0x2498b80()*0.832126);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac670() {
   return (neuron0x2499000()*-1.66494);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac6b0() {
   return (neuron0x2499510()*0.313532);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac6f0() {
   return (neuron0x2497c80()*0.250345);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac730() {
   return (neuron0x2499e20()*-2.06361);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac770() {
   return (neuron0x249a2a0()*0.718774);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac200() {
   return (neuron0x249ab70()*0.0989741);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac240() {
   return (neuron0x249ae40()*1.34685);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac8c0() {
   return (neuron0x249b2c0()*-1.39455);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac900() {
   return (neuron0x249b740()*-0.980627);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac940() {
   return (neuron0x249bbc0()*0.432572);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac980() {
   return (neuron0x249c040()*0.512093);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ac9c0() {
   return (neuron0x249c4c0()*-1.15477);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aca00() {
   return (neuron0x249c940()*1.5324);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aca40() {
   return (neuron0x249cdc0()*1.33127);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acdc0() {
   return (neuron0x2495e00()*1.32028);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ace00() {
   return (neuron0x2496170()*-0.475882);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ace40() {
   return (neuron0x24965f0()*-0.635918);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ace80() {
   return (neuron0x2496a70()*0.473968);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acec0() {
   return (neuron0x2496f80()*0.00045017);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acf00() {
   return (neuron0x2497400()*1.98319);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acf40() {
   return (neuron0x2497880()*-0.103082);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acf80() {
   return (neuron0x2497e90()*-2.26028);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acfc0() {
   return (neuron0x2498280()*-1.40934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad000() {
   return (neuron0x2498700()*-1.13579);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad040() {
   return (neuron0x2498b80()*-0.864603);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad080() {
   return (neuron0x2499000()*3.19353);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad0c0() {
   return (neuron0x2499510()*-0.369635);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad100() {
   return (neuron0x2497c80()*-1.28222);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad140() {
   return (neuron0x2499e20()*1.25712);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad180() {
   return (neuron0x249a2a0()*-0.645748);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acc10() {
   return (neuron0x249ab70()*-1.0716);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24acc50() {
   return (neuron0x249ae40()*-0.934185);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad2d0() {
   return (neuron0x249b2c0()*1.91953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad310() {
   return (neuron0x249b740()*1.9051);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad350() {
   return (neuron0x249bbc0()*-1.46305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad390() {
   return (neuron0x249c040()*-1.14115);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad3d0() {
   return (neuron0x249c4c0()*1.8201);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad410() {
   return (neuron0x249c940()*-1.89821);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad450() {
   return (neuron0x249cdc0()*-0.273097);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad7d0() {
   return (neuron0x2495e00()*-1.35041);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad810() {
   return (neuron0x2496170()*-0.623878);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad850() {
   return (neuron0x24965f0()*0.386328);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad890() {
   return (neuron0x2496a70()*-1.3309);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad8d0() {
   return (neuron0x2496f80()*2.20072);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad910() {
   return (neuron0x2497400()*1.93489);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad950() {
   return (neuron0x2497880()*1.9631);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad990() {
   return (neuron0x2497e90()*10.4998);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad9d0() {
   return (neuron0x2498280()*1.69155);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ada10() {
   return (neuron0x2498700()*3.03017);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ada50() {
   return (neuron0x2498b80()*1.39459);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ada90() {
   return (neuron0x2499000()*-2.29664);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adad0() {
   return (neuron0x2499510()*-0.82284);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adb10() {
   return (neuron0x2497c80()*5.89129);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adb50() {
   return (neuron0x2499e20()*-2.72751);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adb90() {
   return (neuron0x249a2a0()*-0.0210896);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad620() {
   return (neuron0x249ab70()*0.275461);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ad660() {
   return (neuron0x249ae40()*-0.531611);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adce0() {
   return (neuron0x249b2c0()*-9.21676);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24add20() {
   return (neuron0x249b740()*-2.2749);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24add60() {
   return (neuron0x249bbc0()*0.862021);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adda0() {
   return (neuron0x249c040()*0.518842);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24adde0() {
   return (neuron0x249c4c0()*3.92908);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ade20() {
   return (neuron0x249c940()*0.481017);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ade60() {
   return (neuron0x249cdc0()*-1.47567);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae1e0() {
   return (neuron0x2495e00()*0.24267);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae220() {
   return (neuron0x2496170()*0.516677);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae260() {
   return (neuron0x24965f0()*-0.388656);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae2a0() {
   return (neuron0x2496a70()*0.50222);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae2e0() {
   return (neuron0x2496f80()*0.0160368);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae320() {
   return (neuron0x2497400()*-0.30429);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae360() {
   return (neuron0x2497880()*-0.949357);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae3a0() {
   return (neuron0x2497e90()*0.80629);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae3e0() {
   return (neuron0x2498280()*0.455645);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae420() {
   return (neuron0x2498700()*0.141188);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae460() {
   return (neuron0x2498b80()*1.20696);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae4a0() {
   return (neuron0x2499000()*-0.266966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae4e0() {
   return (neuron0x2499510()*-0.639198);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae520() {
   return (neuron0x2497c80()*-0.426078);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae560() {
   return (neuron0x2499e20()*0.086099);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae5a0() {
   return (neuron0x249a2a0()*-0.204096);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae030() {
   return (neuron0x249ab70()*-0.288623);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae070() {
   return (neuron0x249ae40()*-0.0183834);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae6f0() {
   return (neuron0x249b2c0()*0.438864);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae730() {
   return (neuron0x249b740()*0.138772);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae770() {
   return (neuron0x249bbc0()*0.409566);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae7b0() {
   return (neuron0x249c040()*-0.224328);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae7f0() {
   return (neuron0x249c4c0()*0.0577014);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae830() {
   return (neuron0x249c940()*0.0309596);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24ae870() {
   return (neuron0x249cdc0()*0.806788);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aebf0() {
   return (neuron0x2495e00()*0.194176);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aec30() {
   return (neuron0x2496170()*0.659554);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aec70() {
   return (neuron0x24965f0()*-0.012138);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aecb0() {
   return (neuron0x2496a70()*0.315138);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aecf0() {
   return (neuron0x2496f80()*-0.181841);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aed30() {
   return (neuron0x2497400()*-1.06716);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aed70() {
   return (neuron0x2497880()*1.97743);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aedb0() {
   return (neuron0x2497e90()*0.977631);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aedf0() {
   return (neuron0x2498280()*1.0153);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aee30() {
   return (neuron0x2498700()*1.1107);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aee70() {
   return (neuron0x2498b80()*-0.631651);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aeeb0() {
   return (neuron0x2499000()*-0.807467);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aeef0() {
   return (neuron0x2499510()*-0.236241);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aef30() {
   return (neuron0x2497c80()*1.90043);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aef70() {
   return (neuron0x2499e20()*-0.371433);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aefb0() {
   return (neuron0x249a2a0()*0.518221);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aea40() {
   return (neuron0x249ab70()*0.290404);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24aea80() {
   return (neuron0x249ae40()*0.0229714);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af100() {
   return (neuron0x249b2c0()*-0.338258);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af140() {
   return (neuron0x249b740()*-0.619101);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af180() {
   return (neuron0x249bbc0()*0.337283);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af1c0() {
   return (neuron0x249c040()*0.783655);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af200() {
   return (neuron0x249c4c0()*-0.0759619);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af240() {
   return (neuron0x249c940()*0.577438);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af280() {
   return (neuron0x249cdc0()*-1.57385);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af600() {
   return (neuron0x2495e00()*-1.01414);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af640() {
   return (neuron0x2496170()*0.228695);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af680() {
   return (neuron0x24965f0()*-0.0457829);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af6c0() {
   return (neuron0x2496a70()*0.0322142);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af700() {
   return (neuron0x2496f80()*-0.618082);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af740() {
   return (neuron0x2497400()*-1.72156);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af780() {
   return (neuron0x2497880()*0.120272);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af7c0() {
   return (neuron0x2497e90()*2.06564);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af800() {
   return (neuron0x2498280()*1.82361);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af840() {
   return (neuron0x2498700()*1.75924);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af880() {
   return (neuron0x2498b80()*1.2575);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af8c0() {
   return (neuron0x2499000()*-2.24857);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af900() {
   return (neuron0x2499510()*0.332164);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af940() {
   return (neuron0x2497c80()*1.0077);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af980() {
   return (neuron0x2499e20()*-1.24242);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af9c0() {
   return (neuron0x249a2a0()*0.0748978);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af450() {
   return (neuron0x249ab70()*0.20303);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24af490() {
   return (neuron0x249ae40()*0.459764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afb10() {
   return (neuron0x249b2c0()*-2.67725);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afb50() {
   return (neuron0x249b740()*-1.64895);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afb90() {
   return (neuron0x249bbc0()*0.589886);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afbd0() {
   return (neuron0x249c040()*0.85421);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afc10() {
   return (neuron0x249c4c0()*-2.84322);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afc50() {
   return (neuron0x249c940()*0.965555);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afc90() {
   return (neuron0x249cdc0()*0.634858);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0010() {
   return (neuron0x2495e00()*-0.705655);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0050() {
   return (neuron0x2496170()*0.272612);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0090() {
   return (neuron0x24965f0()*-0.18843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b00d0() {
   return (neuron0x2496a70()*-0.0917239);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0110() {
   return (neuron0x2496f80()*-0.719295);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0150() {
   return (neuron0x2497400()*-1.08702);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0190() {
   return (neuron0x2497880()*-0.513693);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b01d0() {
   return (neuron0x2497e90()*0.184172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0210() {
   return (neuron0x2498280()*-0.0301059);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0250() {
   return (neuron0x2498700()*-0.111731);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0290() {
   return (neuron0x2498b80()*0.89196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b02d0() {
   return (neuron0x2499000()*-1.14274);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0310() {
   return (neuron0x2499510()*0.60405);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0350() {
   return (neuron0x2497c80()*0.0111715);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0390() {
   return (neuron0x2499e20()*-1.01991);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b03d0() {
   return (neuron0x249a2a0()*0.650347);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afe60() {
   return (neuron0x249ab70()*0.289804);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24afea0() {
   return (neuron0x249ae40()*0.79083);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0520() {
   return (neuron0x249b2c0()*-0.385104);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0560() {
   return (neuron0x249b740()*-0.830798);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b05a0() {
   return (neuron0x249bbc0()*0.31404);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b05e0() {
   return (neuron0x249c040()*0.472083);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0620() {
   return (neuron0x249c4c0()*-1.39068);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0660() {
   return (neuron0x249c940()*1.22596);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b06a0() {
   return (neuron0x249cdc0()*0.137197);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0900() {
   return (neuron0x249ecd0()*6.32258);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0940() {
   return (neuron0x2499aa0()*0.869704);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0980() {
   return (neuron0x249f840()*4.65859);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b09c0() {
   return (neuron0x24a0360()*-0.855973);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0a00() {
   return (neuron0x24a0d70()*-6.47204);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0a40() {
   return (neuron0x24a1780()*-1.06256);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0a80() {
   return (neuron0x249f370()*-3.68572);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0ac0() {
   return (neuron0x24a33b0()*1.1263);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0b00() {
   return (neuron0x24a3dc0()*1.96498);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0b40() {
   return (neuron0x24a47d0()*-2.01281);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0b80() {
   return (neuron0x24a51e0()*-9.3258);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0bc0() {
   return (neuron0x24a5bf0()*-3.25433);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0c00() {
   return (neuron0x24a6600()*8.02563);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0c40() {
   return (neuron0x24a7010()*-4.09482);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0c80() {
   return (neuron0x24a7a20()*2.50915);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0cc0() {
   return (neuron0x24a8430()*-2.85559);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495cd0() {
   return (neuron0x24a2a50()*-4.46333);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x2495d10() {
   return (neuron0x24ab6a0()*10.2268);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0e10() {
   return (neuron0x24ac070()*-1.65105);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0e50() {
   return (neuron0x24aca80()*-5.3802);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0e90() {
   return (neuron0x24ad490()*14.1736);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0ed0() {
   return (neuron0x24adea0()*-3.59098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0f10() {
   return (neuron0x24ae8b0()*4.27709);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0f50() {
   return (neuron0x24af2c0()*7.12101);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x24b0f90() {
   return (neuron0x24afcd0()*-1.59388);
}

