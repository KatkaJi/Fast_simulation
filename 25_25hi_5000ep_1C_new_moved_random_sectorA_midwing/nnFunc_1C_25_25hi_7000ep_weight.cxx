#include "25_25hi_5000ep_1C_new_moved_random_sectorA_midwing/nnFunc_1C_25_25hi_7000ep_weight.h"
#include <cmath>

double nnFunc_1C_25_25hi_7000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2c7f0a0();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_7000ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2c7f0a0();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c63610() {
   return input0;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c63950() {
   return input1;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c63c90() {
   return input2;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c63fd0() {
   return input3;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c64310() {
   return input4;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c64780() {
   double input = 0.469033;
   input += synapse0x2c52920();
   input += synapse0x2c64a30();
   input += synapse0x2c64a70();
   input += synapse0x2c64ab0();
   input += synapse0x2c64af0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c64780() {
   double input = input0x2c64780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c64b30() {
   double input = 0.84583;
   input += synapse0x2c64e70();
   input += synapse0x2c64eb0();
   input += synapse0x2c64ef0();
   input += synapse0x2c64f30();
   input += synapse0x2c64f70();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c64b30() {
   double input = input0x2c64b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c64fb0() {
   double input = 1.49057;
   input += synapse0x2c652f0();
   input += synapse0x2c65330();
   input += synapse0x2c65370();
   input += synapse0x2c653b0();
   input += synapse0x2c653f0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c64fb0() {
   double input = input0x2c64fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c65430() {
   double input = 9.48012;
   input += synapse0x2c65770();
   input += synapse0x2c657b0();
   input += synapse0x2addae0();
   input += synapse0x2addb20();
   input += synapse0x2c65900();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c65430() {
   double input = input0x2c65430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c65940() {
   double input = 11.5991;
   input += synapse0x2c65c80();
   input += synapse0x2c65cc0();
   input += synapse0x2c65d00();
   input += synapse0x2c65d40();
   input += synapse0x2c65d80();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c65940() {
   double input = input0x2c65940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c65dc0() {
   double input = -1.57643;
   input += synapse0x2c66100();
   input += synapse0x2c66140();
   input += synapse0x2c66180();
   input += synapse0x2c661c0();
   input += synapse0x2c66200();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c65dc0() {
   double input = input0x2c65dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c66240() {
   double input = -0.849669;
   input += synapse0x2c66580();
   input += synapse0x2c665c0();
   input += synapse0x2c66600();
   input += synapse0x2c657f0();
   input += synapse0x2c65830();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c66240() {
   double input = input0x2c66240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c66850() {
   double input = -1.81643;
   input += synapse0x2c66b00();
   input += synapse0x2c66b40();
   input += synapse0x2c66b80();
   input += synapse0x2c66bc0();
   input += synapse0x2c66c00();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c66850() {
   double input = input0x2c66850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c66c40() {
   double input = -1.65008;
   input += synapse0x2c66f80();
   input += synapse0x2c66fc0();
   input += synapse0x2c67000();
   input += synapse0x2c67040();
   input += synapse0x2c67080();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c66c40() {
   double input = input0x2c66c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c670c0() {
   double input = -2.04127;
   input += synapse0x2c67400();
   input += synapse0x2c67440();
   input += synapse0x2c67480();
   input += synapse0x2c674c0();
   input += synapse0x2c67500();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c670c0() {
   double input = input0x2c670c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c67540() {
   double input = 1.96454;
   input += synapse0x2c67880();
   input += synapse0x2c678c0();
   input += synapse0x2c67900();
   input += synapse0x2c67940();
   input += synapse0x2c67980();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c67540() {
   double input = input0x2c67540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c679c0() {
   double input = -2.09111;
   input += synapse0x2add930();
   input += synapse0x2add970();
   input += synapse0x2c67e10();
   input += synapse0x2c67e50();
   input += synapse0x2c67e90();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c679c0() {
   double input = input0x2c679c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c67ed0() {
   double input = -7.12612;
   input += synapse0x2c68210();
   input += synapse0x2c68250();
   input += synapse0x2c68290();
   input += synapse0x2c682d0();
   input += synapse0x2c68310();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c67ed0() {
   double input = input0x2c67ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2bebb00() {
   double input = 3.52088;
   input += synapse0x2bebc90();
   input += synapse0x2c528c0();
   input += synapse0x2c667f0();
   input += synapse0x2c68760();
   input += synapse0x2c687a0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2bebb00() {
   double input = input0x2bebb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c687e0() {
   double input = -21.6151;
   input += synapse0x2c68b20();
   input += synapse0x2c68b60();
   input += synapse0x2c68ba0();
   input += synapse0x2c68be0();
   input += synapse0x2c68c20();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c687e0() {
   double input = input0x2c687e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c68c60() {
   double input = 2.31063;
   input += synapse0x2c68fa0();
   input += synapse0x2c63830();
   input += synapse0x2c63870();
   input += synapse0x2c63b70();
   input += synapse0x2c63bb0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c68c60() {
   double input = input0x2c68c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c69530() {
   double input = 1.31814;
   input += synapse0x2c696c0();
   input += synapse0x2c69700();
   input += synapse0x2c69740();
   input += synapse0x2c69780();
   input += synapse0x2c697c0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c69530() {
   double input = input0x2c69530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c69800() {
   double input = -1.22002;
   input += synapse0x2c69b40();
   input += synapse0x2c69b80();
   input += synapse0x2c69bc0();
   input += synapse0x2c69c00();
   input += synapse0x2c69c40();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c69800() {
   double input = input0x2c69800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c69c80() {
   double input = 19.0877;
   input += synapse0x2c69fc0();
   input += synapse0x2c6a000();
   input += synapse0x2c6a040();
   input += synapse0x2c6a080();
   input += synapse0x2c6a0c0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c69c80() {
   double input = input0x2c69c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6a100() {
   double input = 2.23229;
   input += synapse0x2c6a440();
   input += synapse0x2c6a480();
   input += synapse0x2c6a4c0();
   input += synapse0x2c6a500();
   input += synapse0x2c6a540();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6a100() {
   double input = input0x2c6a100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6a580() {
   double input = 0.40281;
   input += synapse0x2c6a8c0();
   input += synapse0x2c6a900();
   input += synapse0x2c6a940();
   input += synapse0x2c6a980();
   input += synapse0x2c6a9c0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6a580() {
   double input = input0x2c6a580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6aa00() {
   double input = -50.429;
   input += synapse0x2c6ad40();
   input += synapse0x2c6ad80();
   input += synapse0x2c6adc0();
   input += synapse0x2c6ae00();
   input += synapse0x2c6ae40();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6aa00() {
   double input = input0x2c6aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6ae80() {
   double input = -3.54617;
   input += synapse0x2c6b1c0();
   input += synapse0x2c6b200();
   input += synapse0x2c6b240();
   input += synapse0x2c6b280();
   input += synapse0x2c6b2c0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6ae80() {
   double input = input0x2c6ae80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6b300() {
   double input = 7.09652;
   input += synapse0x2c6b640();
   input += synapse0x2c6b680();
   input += synapse0x2c6b6c0();
   input += synapse0x2c6b700();
   input += synapse0x2c6b740();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6b300() {
   double input = input0x2c6b300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6b780() {
   double input = -43.2115;
   input += synapse0x2c6bac0();
   input += synapse0x2c6bb00();
   input += synapse0x2c6bb40();
   input += synapse0x2c6bb80();
   input += synapse0x2c6bbc0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6b780() {
   double input = input0x2c6b780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6d690() {
   double input = -0.669814;
   input += synapse0x2c656e0();
   input += synapse0x2c65720();
   input += synapse0x2c65bf0();
   input += synapse0x2c65c30();
   input += synapse0x2c66070();
   input += synapse0x2c660b0();
   input += synapse0x2c664f0();
   input += synapse0x2c66530();
   input += synapse0x2c66a70();
   input += synapse0x2c66ab0();
   input += synapse0x2c66ef0();
   input += synapse0x2c66f30();
   input += synapse0x2c67370();
   input += synapse0x2c673b0();
   input += synapse0x2c677f0();
   input += synapse0x2c67830();
   input += synapse0x2c67c70();
   input += synapse0x2c67cb0();
   input += synapse0x2c68180();
   input += synapse0x2c681c0();
   input += synapse0x2c66760();
   input += synapse0x2c667a0();
   input += synapse0x2c68a90();
   input += synapse0x2c68ad0();
   input += synapse0x2c68f10();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6d690() {
   double input = input0x2c6d690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c68460() {
   double input = -0.631261;
   input += synapse0x2c685f0();
   input += synapse0x2c68630();
   input += synapse0x2c68670();
   input += synapse0x2c686b0();
   input += synapse0x2c686f0();
   input += synapse0x2c68f50();
   input += synapse0x2c6a3b0();
   input += synapse0x2c6a3f0();
   input += synapse0x2c6a830();
   input += synapse0x2c6a870();
   input += synapse0x2c6acb0();
   input += synapse0x2c6acf0();
   input += synapse0x2c6b130();
   input += synapse0x2c6b170();
   input += synapse0x2c6b5b0();
   input += synapse0x2c6b5f0();
   input += synapse0x2c6ba30();
   input += synapse0x2c6ba70();
   input += synapse0x2c649a0();
   input += synapse0x2c649e0();
   input += synapse0x2c64530();
   input += synapse0x2c64570();
   input += synapse0x2c6e140();
   input += synapse0x2c6e180();
   input += synapse0x2c6e1c0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c68460() {
   double input = input0x2c68460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6e200() {
   double input = 0.0127845;
   input += synapse0x2c67d00();
   input += synapse0x2c67d40();
   input += synapse0x2c67d80();
   input += synapse0x2c67dc0();
   input += synapse0x2c6e750();
   input += synapse0x2c6e790();
   input += synapse0x2c6e7d0();
   input += synapse0x2c6e810();
   input += synapse0x2c6e850();
   input += synapse0x2c6e890();
   input += synapse0x2c6e8d0();
   input += synapse0x2c6e910();
   input += synapse0x2c6e950();
   input += synapse0x2c6e990();
   input += synapse0x2c6e9d0();
   input += synapse0x2c6ea10();
   input += synapse0x2c6e390();
   input += synapse0x2c6e3d0();
   input += synapse0x2c6eb60();
   input += synapse0x2c6eba0();
   input += synapse0x2c6ebe0();
   input += synapse0x2c6ec20();
   input += synapse0x2c6ec60();
   input += synapse0x2c6eca0();
   input += synapse0x2c6ece0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6e200() {
   double input = input0x2c6e200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6ed20() {
   double input = -0.00825326;
   input += synapse0x2c6f060();
   input += synapse0x2c6f0a0();
   input += synapse0x2c6f0e0();
   input += synapse0x2c6f120();
   input += synapse0x2c6f160();
   input += synapse0x2c6f1a0();
   input += synapse0x2c6f1e0();
   input += synapse0x2c6f220();
   input += synapse0x2c6f260();
   input += synapse0x2c6f2a0();
   input += synapse0x2c6f2e0();
   input += synapse0x2c6f320();
   input += synapse0x2c6f360();
   input += synapse0x2c6f3a0();
   input += synapse0x2c6f3e0();
   input += synapse0x2c6f420();
   input += synapse0x2c6eeb0();
   input += synapse0x2c6eef0();
   input += synapse0x2c6f570();
   input += synapse0x2c6f5b0();
   input += synapse0x2c6f5f0();
   input += synapse0x2c6f630();
   input += synapse0x2c6f670();
   input += synapse0x2c6f6b0();
   input += synapse0x2c6f6f0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6ed20() {
   double input = input0x2c6ed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6f730() {
   double input = 1.18365;
   input += synapse0x2c6fa70();
   input += synapse0x2c6fab0();
   input += synapse0x2c6faf0();
   input += synapse0x2c6fb30();
   input += synapse0x2c6fb70();
   input += synapse0x2c6fbb0();
   input += synapse0x2c6fbf0();
   input += synapse0x2c6fc30();
   input += synapse0x2c6fc70();
   input += synapse0x2c6fcb0();
   input += synapse0x2c6fcf0();
   input += synapse0x2c6fd30();
   input += synapse0x2c6fd70();
   input += synapse0x2c6fdb0();
   input += synapse0x2c6fdf0();
   input += synapse0x2c6fe30();
   input += synapse0x2c6f8c0();
   input += synapse0x2c6f900();
   input += synapse0x2c6ff80();
   input += synapse0x2c6ffc0();
   input += synapse0x2c70000();
   input += synapse0x2c70040();
   input += synapse0x2c70080();
   input += synapse0x2c700c0();
   input += synapse0x2c70100();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6f730() {
   double input = input0x2c6f730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c70140() {
   double input = 0.0705099;
   input += synapse0x2c70480();
   input += synapse0x2c704c0();
   input += synapse0x2c70500();
   input += synapse0x2c70540();
   input += synapse0x2c70580();
   input += synapse0x2c705c0();
   input += synapse0x2c70600();
   input += synapse0x2c6d820();
   input += synapse0x2c6d860();
   input += synapse0x2c6d8a0();
   input += synapse0x2c6d8e0();
   input += synapse0x2c6d920();
   input += synapse0x2c6d960();
   input += synapse0x2c6d9a0();
   input += synapse0x2c6d9e0();
   input += synapse0x2c6da20();
   input += synapse0x2c702d0();
   input += synapse0x2c70310();
   input += synapse0x2c6db70();
   input += synapse0x2c6dbb0();
   input += synapse0x2c6dbf0();
   input += synapse0x2c6dc30();
   input += synapse0x2c6dc70();
   input += synapse0x2c6dcb0();
   input += synapse0x2c6dcf0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c70140() {
   double input = input0x2c70140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c6dd30() {
   double input = -0.0227213;
   input += synapse0x2c6dfe0();
   input += synapse0x2c716e0();
   input += synapse0x2c71720();
   input += synapse0x2c71760();
   input += synapse0x2c717a0();
   input += synapse0x2c717e0();
   input += synapse0x2c71820();
   input += synapse0x2c71860();
   input += synapse0x2c718a0();
   input += synapse0x2c718e0();
   input += synapse0x2c71920();
   input += synapse0x2c71960();
   input += synapse0x2c719a0();
   input += synapse0x2c719e0();
   input += synapse0x2c71a20();
   input += synapse0x2c71a60();
   input += synapse0x2c6dec0();
   input += synapse0x2c6df00();
   input += synapse0x2c71bb0();
   input += synapse0x2c71bf0();
   input += synapse0x2c71c30();
   input += synapse0x2c71c70();
   input += synapse0x2c71cb0();
   input += synapse0x2c71cf0();
   input += synapse0x2c71d30();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c6dd30() {
   double input = input0x2c6dd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c71d70() {
   double input = 4.29415;
   input += synapse0x2c720b0();
   input += synapse0x2c720f0();
   input += synapse0x2c72130();
   input += synapse0x2c72170();
   input += synapse0x2c721b0();
   input += synapse0x2c721f0();
   input += synapse0x2c72230();
   input += synapse0x2c72270();
   input += synapse0x2c722b0();
   input += synapse0x2c722f0();
   input += synapse0x2c72330();
   input += synapse0x2c72370();
   input += synapse0x2c723b0();
   input += synapse0x2c723f0();
   input += synapse0x2c72430();
   input += synapse0x2c72470();
   input += synapse0x2c71f00();
   input += synapse0x2c71f40();
   input += synapse0x2c725c0();
   input += synapse0x2c72600();
   input += synapse0x2c72640();
   input += synapse0x2c72680();
   input += synapse0x2c726c0();
   input += synapse0x2c72700();
   input += synapse0x2c72740();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c71d70() {
   double input = input0x2c71d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c72780() {
   double input = 0.873908;
   input += synapse0x2c72ac0();
   input += synapse0x2c72b00();
   input += synapse0x2c72b40();
   input += synapse0x2c72b80();
   input += synapse0x2c72bc0();
   input += synapse0x2c72c00();
   input += synapse0x2c72c40();
   input += synapse0x2c72c80();
   input += synapse0x2c72cc0();
   input += synapse0x2c72d00();
   input += synapse0x2c72d40();
   input += synapse0x2c72d80();
   input += synapse0x2c72dc0();
   input += synapse0x2c72e00();
   input += synapse0x2c72e40();
   input += synapse0x2c72e80();
   input += synapse0x2c72910();
   input += synapse0x2c72950();
   input += synapse0x2c72fd0();
   input += synapse0x2c73010();
   input += synapse0x2c73050();
   input += synapse0x2c73090();
   input += synapse0x2c730d0();
   input += synapse0x2c73110();
   input += synapse0x2c73150();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c72780() {
   double input = input0x2c72780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c73190() {
   double input = 1.51187;
   input += synapse0x2c734d0();
   input += synapse0x2c73510();
   input += synapse0x2c73550();
   input += synapse0x2c73590();
   input += synapse0x2c735d0();
   input += synapse0x2c73610();
   input += synapse0x2c73650();
   input += synapse0x2c73690();
   input += synapse0x2c736d0();
   input += synapse0x2c73710();
   input += synapse0x2c73750();
   input += synapse0x2c73790();
   input += synapse0x2c737d0();
   input += synapse0x2c73810();
   input += synapse0x2c73850();
   input += synapse0x2c73890();
   input += synapse0x2c73320();
   input += synapse0x2c73360();
   input += synapse0x2c739e0();
   input += synapse0x2c73a20();
   input += synapse0x2c73a60();
   input += synapse0x2c73aa0();
   input += synapse0x2c73ae0();
   input += synapse0x2c73b20();
   input += synapse0x2c73b60();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c73190() {
   double input = input0x2c73190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c73ba0() {
   double input = 0.36838;
   input += synapse0x2c73ee0();
   input += synapse0x2c73f20();
   input += synapse0x2c73f60();
   input += synapse0x2c73fa0();
   input += synapse0x2c73fe0();
   input += synapse0x2c74020();
   input += synapse0x2c74060();
   input += synapse0x2c740a0();
   input += synapse0x2c740e0();
   input += synapse0x2c74120();
   input += synapse0x2c74160();
   input += synapse0x2c741a0();
   input += synapse0x2c741e0();
   input += synapse0x2c74220();
   input += synapse0x2c74260();
   input += synapse0x2c742a0();
   input += synapse0x2c73d30();
   input += synapse0x2c73d70();
   input += synapse0x2c743f0();
   input += synapse0x2c74430();
   input += synapse0x2c74470();
   input += synapse0x2c744b0();
   input += synapse0x2c744f0();
   input += synapse0x2c74530();
   input += synapse0x2c74570();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c73ba0() {
   double input = input0x2c73ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c745b0() {
   double input = -2.63014;
   input += synapse0x2c748f0();
   input += synapse0x2c74930();
   input += synapse0x2c74970();
   input += synapse0x2c749b0();
   input += synapse0x2c749f0();
   input += synapse0x2c74a30();
   input += synapse0x2c74a70();
   input += synapse0x2c74ab0();
   input += synapse0x2c74af0();
   input += synapse0x2c74b30();
   input += synapse0x2c74b70();
   input += synapse0x2c74bb0();
   input += synapse0x2c74bf0();
   input += synapse0x2c74c30();
   input += synapse0x2c74c70();
   input += synapse0x2c74cb0();
   input += synapse0x2c74740();
   input += synapse0x2c74780();
   input += synapse0x2c74e00();
   input += synapse0x2c74e40();
   input += synapse0x2c74e80();
   input += synapse0x2c74ec0();
   input += synapse0x2c74f00();
   input += synapse0x2c74f40();
   input += synapse0x2c74f80();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c745b0() {
   double input = input0x2c745b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c74fc0() {
   double input = -0.370644;
   input += synapse0x2c75300();
   input += synapse0x2c75340();
   input += synapse0x2c75380();
   input += synapse0x2c753c0();
   input += synapse0x2c75400();
   input += synapse0x2c75440();
   input += synapse0x2c75480();
   input += synapse0x2c754c0();
   input += synapse0x2c75500();
   input += synapse0x2c75540();
   input += synapse0x2c75580();
   input += synapse0x2c755c0();
   input += synapse0x2c75600();
   input += synapse0x2c75640();
   input += synapse0x2c75680();
   input += synapse0x2c756c0();
   input += synapse0x2c75150();
   input += synapse0x2c75190();
   input += synapse0x2c75810();
   input += synapse0x2c75850();
   input += synapse0x2c75890();
   input += synapse0x2c758d0();
   input += synapse0x2c75910();
   input += synapse0x2c75950();
   input += synapse0x2c75990();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c74fc0() {
   double input = input0x2c74fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c759d0() {
   double input = -0.433078;
   input += synapse0x2c75d10();
   input += synapse0x2c75d50();
   input += synapse0x2c75d90();
   input += synapse0x2c75dd0();
   input += synapse0x2c75e10();
   input += synapse0x2c75e50();
   input += synapse0x2c75e90();
   input += synapse0x2c75ed0();
   input += synapse0x2c75f10();
   input += synapse0x2c75f50();
   input += synapse0x2c75f90();
   input += synapse0x2c75fd0();
   input += synapse0x2c76010();
   input += synapse0x2c76050();
   input += synapse0x2c76090();
   input += synapse0x2c760d0();
   input += synapse0x2c75b60();
   input += synapse0x2c75ba0();
   input += synapse0x2c76220();
   input += synapse0x2c76260();
   input += synapse0x2c762a0();
   input += synapse0x2c762e0();
   input += synapse0x2c76320();
   input += synapse0x2c76360();
   input += synapse0x2c763a0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c759d0() {
   double input = input0x2c759d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c763e0() {
   double input = 0.861725;
   input += synapse0x2c76720();
   input += synapse0x2c76760();
   input += synapse0x2c767a0();
   input += synapse0x2c767e0();
   input += synapse0x2c76820();
   input += synapse0x2c76860();
   input += synapse0x2c768a0();
   input += synapse0x2c768e0();
   input += synapse0x2c76920();
   input += synapse0x2c76960();
   input += synapse0x2c769a0();
   input += synapse0x2c769e0();
   input += synapse0x2c76a20();
   input += synapse0x2c76a60();
   input += synapse0x2c76aa0();
   input += synapse0x2c76ae0();
   input += synapse0x2c76570();
   input += synapse0x2c765b0();
   input += synapse0x2c76c30();
   input += synapse0x2c76c70();
   input += synapse0x2c76cb0();
   input += synapse0x2c76cf0();
   input += synapse0x2c76d30();
   input += synapse0x2c76d70();
   input += synapse0x2c76db0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c763e0() {
   double input = input0x2c763e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c76df0() {
   double input = -1.82565;
   input += synapse0x2c77130();
   input += synapse0x2c64910();
   input += synapse0x2c64950();
   input += synapse0x2c64d50();
   input += synapse0x2c64d90();
   input += synapse0x2c651d0();
   input += synapse0x2c65210();
   input += synapse0x2c65650();
   input += synapse0x2c65690();
   input += synapse0x2c65b60();
   input += synapse0x2c65ba0();
   input += synapse0x2c65fe0();
   input += synapse0x2c66020();
   input += synapse0x2c66460();
   input += synapse0x2c664a0();
   input += synapse0x2c669e0();
   input += synapse0x2c66a20();
   input += synapse0x2c66e60();
   input += synapse0x2c66ea0();
   input += synapse0x2c672e0();
   input += synapse0x2c67320();
   input += synapse0x2c67760();
   input += synapse0x2c677a0();
   input += synapse0x2c67be0();
   input += synapse0x2c67c20();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c76df0() {
   double input = input0x2c76df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c71410() {
   double input = -0.22529;
   input += synapse0x2c715a0();
   input += synapse0x2c715e0();
   input += synapse0x2c68e80();
   input += synapse0x2c68ec0();
   input += synapse0x2c76f80();
   input += synapse0x2c76fc0();
   input += synapse0x2c641f0();
   input += synapse0x2c64230();
   input += synapse0x2c69a20();
   input += synapse0x2c69a60();
   input += synapse0x2c69ea0();
   input += synapse0x2c69ee0();
   input += synapse0x2c6a320();
   input += synapse0x2c6a360();
   input += synapse0x2c6a7a0();
   input += synapse0x2c6a7e0();
   input += synapse0x2c6ac20();
   input += synapse0x2c6ac60();
   input += synapse0x2c6b0a0();
   input += synapse0x2c6b0e0();
   input += synapse0x2c6b520();
   input += synapse0x2c6b560();
   input += synapse0x2c6b9a0();
   input += synapse0x2c6b9e0();
   input += synapse0x2c680f0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c71410() {
   double input = input0x2c71410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7a060() {
   double input = -0.484765;
   input += synapse0x2c68130();
   input += synapse0x2c7a3a0();
   input += synapse0x2c7a3e0();
   input += synapse0x2c7a420();
   input += synapse0x2c7a460();
   input += synapse0x2c7a4a0();
   input += synapse0x2c7a4e0();
   input += synapse0x2c7a520();
   input += synapse0x2c7a560();
   input += synapse0x2c7a5a0();
   input += synapse0x2c7a5e0();
   input += synapse0x2c7a620();
   input += synapse0x2c7a660();
   input += synapse0x2c7a6a0();
   input += synapse0x2c7a6e0();
   input += synapse0x2c7a720();
   input += synapse0x2c7a1f0();
   input += synapse0x2c7a230();
   input += synapse0x2c7a870();
   input += synapse0x2c7a8b0();
   input += synapse0x2c7a8f0();
   input += synapse0x2c7a930();
   input += synapse0x2c7a970();
   input += synapse0x2c7a9b0();
   input += synapse0x2c7a9f0();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7a060() {
   double input = input0x2c7a060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7aa30() {
   double input = 0.292485;
   input += synapse0x2c7ad70();
   input += synapse0x2c7adb0();
   input += synapse0x2c7adf0();
   input += synapse0x2c7ae30();
   input += synapse0x2c7ae70();
   input += synapse0x2c7aeb0();
   input += synapse0x2c7aef0();
   input += synapse0x2c7af30();
   input += synapse0x2c7af70();
   input += synapse0x2c7afb0();
   input += synapse0x2c7aff0();
   input += synapse0x2c7b030();
   input += synapse0x2c7b070();
   input += synapse0x2c7b0b0();
   input += synapse0x2c7b0f0();
   input += synapse0x2c7b130();
   input += synapse0x2c7abc0();
   input += synapse0x2c7ac00();
   input += synapse0x2c7b280();
   input += synapse0x2c7b2c0();
   input += synapse0x2c7b300();
   input += synapse0x2c7b340();
   input += synapse0x2c7b380();
   input += synapse0x2c7b3c0();
   input += synapse0x2c7b400();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7aa30() {
   double input = input0x2c7aa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7b440() {
   double input = 0.222242;
   input += synapse0x2c7b780();
   input += synapse0x2c7b7c0();
   input += synapse0x2c7b800();
   input += synapse0x2c7b840();
   input += synapse0x2c7b880();
   input += synapse0x2c7b8c0();
   input += synapse0x2c7b900();
   input += synapse0x2c7b940();
   input += synapse0x2c7b980();
   input += synapse0x2c7b9c0();
   input += synapse0x2c7ba00();
   input += synapse0x2c7ba40();
   input += synapse0x2c7ba80();
   input += synapse0x2c7bac0();
   input += synapse0x2c7bb00();
   input += synapse0x2c7bb40();
   input += synapse0x2c7b5d0();
   input += synapse0x2c7b610();
   input += synapse0x2c7bc90();
   input += synapse0x2c7bcd0();
   input += synapse0x2c7bd10();
   input += synapse0x2c7bd50();
   input += synapse0x2c7bd90();
   input += synapse0x2c7bdd0();
   input += synapse0x2c7be10();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7b440() {
   double input = input0x2c7b440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7be50() {
   double input = -0.0718517;
   input += synapse0x2c7c190();
   input += synapse0x2c7c1d0();
   input += synapse0x2c7c210();
   input += synapse0x2c7c250();
   input += synapse0x2c7c290();
   input += synapse0x2c7c2d0();
   input += synapse0x2c7c310();
   input += synapse0x2c7c350();
   input += synapse0x2c7c390();
   input += synapse0x2c7c3d0();
   input += synapse0x2c7c410();
   input += synapse0x2c7c450();
   input += synapse0x2c7c490();
   input += synapse0x2c7c4d0();
   input += synapse0x2c7c510();
   input += synapse0x2c7c550();
   input += synapse0x2c7bfe0();
   input += synapse0x2c7c020();
   input += synapse0x2c7c6a0();
   input += synapse0x2c7c6e0();
   input += synapse0x2c7c720();
   input += synapse0x2c7c760();
   input += synapse0x2c7c7a0();
   input += synapse0x2c7c7e0();
   input += synapse0x2c7c820();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7be50() {
   double input = input0x2c7be50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7c860() {
   double input = 0.493044;
   input += synapse0x2c7cba0();
   input += synapse0x2c7cbe0();
   input += synapse0x2c7cc20();
   input += synapse0x2c7cc60();
   input += synapse0x2c7cca0();
   input += synapse0x2c7cce0();
   input += synapse0x2c7cd20();
   input += synapse0x2c7cd60();
   input += synapse0x2c7cda0();
   input += synapse0x2c7cde0();
   input += synapse0x2c7ce20();
   input += synapse0x2c7ce60();
   input += synapse0x2c7cea0();
   input += synapse0x2c7cee0();
   input += synapse0x2c7cf20();
   input += synapse0x2c7cf60();
   input += synapse0x2c7c9f0();
   input += synapse0x2c7ca30();
   input += synapse0x2c7d0b0();
   input += synapse0x2c7d0f0();
   input += synapse0x2c7d130();
   input += synapse0x2c7d170();
   input += synapse0x2c7d1b0();
   input += synapse0x2c7d1f0();
   input += synapse0x2c7d230();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7c860() {
   double input = input0x2c7c860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7d270() {
   double input = -0.883846;
   input += synapse0x2c7d5b0();
   input += synapse0x2c7d5f0();
   input += synapse0x2c7d630();
   input += synapse0x2c7d670();
   input += synapse0x2c7d6b0();
   input += synapse0x2c7d6f0();
   input += synapse0x2c7d730();
   input += synapse0x2c7d770();
   input += synapse0x2c7d7b0();
   input += synapse0x2c7d7f0();
   input += synapse0x2c7d830();
   input += synapse0x2c7d870();
   input += synapse0x2c7d8b0();
   input += synapse0x2c7d8f0();
   input += synapse0x2c7d930();
   input += synapse0x2c7d970();
   input += synapse0x2c7d400();
   input += synapse0x2c7d440();
   input += synapse0x2c7dac0();
   input += synapse0x2c7db00();
   input += synapse0x2c7db40();
   input += synapse0x2c7db80();
   input += synapse0x2c7dbc0();
   input += synapse0x2c7dc00();
   input += synapse0x2c7dc40();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7d270() {
   double input = input0x2c7d270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7dc80() {
   double input = 0.523773;
   input += synapse0x2c7dfc0();
   input += synapse0x2c7e000();
   input += synapse0x2c7e040();
   input += synapse0x2c7e080();
   input += synapse0x2c7e0c0();
   input += synapse0x2c7e100();
   input += synapse0x2c7e140();
   input += synapse0x2c7e180();
   input += synapse0x2c7e1c0();
   input += synapse0x2c7e200();
   input += synapse0x2c7e240();
   input += synapse0x2c7e280();
   input += synapse0x2c7e2c0();
   input += synapse0x2c7e300();
   input += synapse0x2c7e340();
   input += synapse0x2c7e380();
   input += synapse0x2c7de10();
   input += synapse0x2c7de50();
   input += synapse0x2c7e4d0();
   input += synapse0x2c7e510();
   input += synapse0x2c7e550();
   input += synapse0x2c7e590();
   input += synapse0x2c7e5d0();
   input += synapse0x2c7e610();
   input += synapse0x2c7e650();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7dc80() {
   double input = input0x2c7dc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7e690() {
   double input = 0.524321;
   input += synapse0x2c7e9d0();
   input += synapse0x2c7ea10();
   input += synapse0x2c7ea50();
   input += synapse0x2c7ea90();
   input += synapse0x2c7ead0();
   input += synapse0x2c7eb10();
   input += synapse0x2c7eb50();
   input += synapse0x2c7eb90();
   input += synapse0x2c7ebd0();
   input += synapse0x2c7ec10();
   input += synapse0x2c7ec50();
   input += synapse0x2c7ec90();
   input += synapse0x2c7ecd0();
   input += synapse0x2c7ed10();
   input += synapse0x2c7ed50();
   input += synapse0x2c7ed90();
   input += synapse0x2c7e820();
   input += synapse0x2c7e860();
   input += synapse0x2c7eee0();
   input += synapse0x2c7ef20();
   input += synapse0x2c7ef60();
   input += synapse0x2c7efa0();
   input += synapse0x2c7efe0();
   input += synapse0x2c7f020();
   input += synapse0x2c7f060();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7e690() {
   double input = input0x2c7e690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_7000ep_weight::input0x2c7f0a0() {
   double input = 2.27169;
   input += synapse0x2c7f2c0();
   input += synapse0x2c7f300();
   input += synapse0x2c7f340();
   input += synapse0x2c7f380();
   input += synapse0x2c7f3c0();
   input += synapse0x2c7f400();
   input += synapse0x2c7f440();
   input += synapse0x2c7f480();
   input += synapse0x2c7f4c0();
   input += synapse0x2c7f500();
   input += synapse0x2c7f540();
   input += synapse0x2c7f580();
   input += synapse0x2c7f5c0();
   input += synapse0x2c7f600();
   input += synapse0x2c7f640();
   input += synapse0x2c7f680();
   input += synapse0x2c64650();
   input += synapse0x2c64690();
   input += synapse0x2c7f7d0();
   input += synapse0x2c7f810();
   input += synapse0x2c7f850();
   input += synapse0x2c7f890();
   input += synapse0x2c7f8d0();
   input += synapse0x2c7f910();
   input += synapse0x2c7f950();
   return input;
}

double nnFunc_1C_25_25hi_7000ep_weight::neuron0x2c7f0a0() {
   double input = input0x2c7f0a0();
   return (input * 3.74251)+135.245;
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c52920() {
   return (neuron0x2c63610()*-2.23618);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64a30() {
   return (neuron0x2c63950()*0.783494);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64a70() {
   return (neuron0x2c63c90()*1.58936);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64ab0() {
   return (neuron0x2c63fd0()*4.53145);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64af0() {
   return (neuron0x2c64310()*1.2136);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64e70() {
   return (neuron0x2c63610()*-4.73228);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64eb0() {
   return (neuron0x2c63950()*2.83973);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64ef0() {
   return (neuron0x2c63c90()*2.08935);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64f30() {
   return (neuron0x2c63fd0()*15.1376);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64f70() {
   return (neuron0x2c64310()*1.13959);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c652f0() {
   return (neuron0x2c63610()*-2.23664);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65330() {
   return (neuron0x2c63950()*1.84445);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65370() {
   return (neuron0x2c63c90()*1.82147);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c653b0() {
   return (neuron0x2c63fd0()*1.09157);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c653f0() {
   return (neuron0x2c64310()*1.91045);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65770() {
   return (neuron0x2c63610()*0.00554414);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c657b0() {
   return (neuron0x2c63950()*-0.336989);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2addae0() {
   return (neuron0x2c63c90()*0.0317961);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2addb20() {
   return (neuron0x2c63fd0()*2.38813);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65900() {
   return (neuron0x2c64310()*-12.8196);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65c80() {
   return (neuron0x2c63610()*0.0673379);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65cc0() {
   return (neuron0x2c63950()*-0.330288);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65d00() {
   return (neuron0x2c63c90()*0.834007);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65d40() {
   return (neuron0x2c63fd0()*-14.2249);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65d80() {
   return (neuron0x2c64310()*-1.93315);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66100() {
   return (neuron0x2c63610()*-0.168405);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66140() {
   return (neuron0x2c63950()*0.638153);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66180() {
   return (neuron0x2c63c90()*-2.4313);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c661c0() {
   return (neuron0x2c63fd0()*0.443394);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66200() {
   return (neuron0x2c64310()*1.00549);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66580() {
   return (neuron0x2c63610()*0.535742);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c665c0() {
   return (neuron0x2c63950()*-1.83759);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66600() {
   return (neuron0x2c63c90()*-2.13535);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c657f0() {
   return (neuron0x2c63fd0()*-4.25283);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65830() {
   return (neuron0x2c64310()*-2.07192);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66b00() {
   return (neuron0x2c63610()*0.0393632);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66b40() {
   return (neuron0x2c63950()*-2.17236);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66b80() {
   return (neuron0x2c63c90()*1.22628);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66bc0() {
   return (neuron0x2c63fd0()*12.6097);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66c00() {
   return (neuron0x2c64310()*-4.04088);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66f80() {
   return (neuron0x2c63610()*6.34803);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66fc0() {
   return (neuron0x2c63950()*-2.36215);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67000() {
   return (neuron0x2c63c90()*-0.278943);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67040() {
   return (neuron0x2c63fd0()*-11.6848);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67080() {
   return (neuron0x2c64310()*-1.66025);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67400() {
   return (neuron0x2c63610()*-2.1376);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67440() {
   return (neuron0x2c63950()*0.827561);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67480() {
   return (neuron0x2c63c90()*2.21733);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c674c0() {
   return (neuron0x2c63fd0()*12.8106);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67500() {
   return (neuron0x2c64310()*-1.61827);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67880() {
   return (neuron0x2c63610()*-0.0283391);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c678c0() {
   return (neuron0x2c63950()*1.19165);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67900() {
   return (neuron0x2c63c90()*-1.40954);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67940() {
   return (neuron0x2c63fd0()*6.30553);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67980() {
   return (neuron0x2c64310()*1.73931);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2add930() {
   return (neuron0x2c63610()*1.52032);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2add970() {
   return (neuron0x2c63950()*-0.247745);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67e10() {
   return (neuron0x2c63c90()*-0.967891);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67e50() {
   return (neuron0x2c63fd0()*0.631996);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67e90() {
   return (neuron0x2c64310()*-0.576289);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68210() {
   return (neuron0x2c63610()*-0.0116454);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68250() {
   return (neuron0x2c63950()*0.0221698);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68290() {
   return (neuron0x2c63c90()*-0.0811702);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c682d0() {
   return (neuron0x2c63fd0()*5.66938);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68310() {
   return (neuron0x2c64310()*2.07662);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2bebc90() {
   return (neuron0x2c63610()*-0.07019);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c528c0() {
   return (neuron0x2c63950()*0.276865);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c667f0() {
   return (neuron0x2c63c90()*-0.741177);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68760() {
   return (neuron0x2c63fd0()*-1.85775);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c687a0() {
   return (neuron0x2c64310()*1.02196);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68b20() {
   return (neuron0x2c63610()*-0.0155627);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68b60() {
   return (neuron0x2c63950()*0.761439);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68ba0() {
   return (neuron0x2c63c90()*-0.249322);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68be0() {
   return (neuron0x2c63fd0()*16.0404);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68c20() {
   return (neuron0x2c64310()*15.2808);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68fa0() {
   return (neuron0x2c63610()*-2.23928);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c63830() {
   return (neuron0x2c63950()*2.21912);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c63870() {
   return (neuron0x2c63c90()*-0.443636);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c63b70() {
   return (neuron0x2c63fd0()*-0.399452);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c63bb0() {
   return (neuron0x2c64310()*1.00044);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c696c0() {
   return (neuron0x2c63610()*0.0392274);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69700() {
   return (neuron0x2c63950()*-0.0462224);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69740() {
   return (neuron0x2c63c90()*0.463535);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69780() {
   return (neuron0x2c63fd0()*-6.99856);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c697c0() {
   return (neuron0x2c64310()*3.24341);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69b40() {
   return (neuron0x2c63610()*0.0407715);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69b80() {
   return (neuron0x2c63950()*0.986028);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69bc0() {
   return (neuron0x2c63c90()*-0.0786416);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69c00() {
   return (neuron0x2c63fd0()*1.09971);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69c40() {
   return (neuron0x2c64310()*-1.42267);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69fc0() {
   return (neuron0x2c63610()*-0.0331776);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a000() {
   return (neuron0x2c63950()*-0.00905388);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a040() {
   return (neuron0x2c63c90()*-0.498724);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a080() {
   return (neuron0x2c63fd0()*-18.6462);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a0c0() {
   return (neuron0x2c64310()*-7.03587);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a440() {
   return (neuron0x2c63610()*2.05803);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a480() {
   return (neuron0x2c63950()*-1.29341);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a4c0() {
   return (neuron0x2c63c90()*-1.39359);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a500() {
   return (neuron0x2c63fd0()*-11.0037);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a540() {
   return (neuron0x2c64310()*-0.391984);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a8c0() {
   return (neuron0x2c63610()*-0.183648);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a900() {
   return (neuron0x2c63950()*-0.936974);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a940() {
   return (neuron0x2c63c90()*-1.08086);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a980() {
   return (neuron0x2c63fd0()*8.25036);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a9c0() {
   return (neuron0x2c64310()*-0.244584);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ad40() {
   return (neuron0x2c63610()*-0.0649511);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ad80() {
   return (neuron0x2c63950()*1.12787);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6adc0() {
   return (neuron0x2c63c90()*-0.609767);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ae00() {
   return (neuron0x2c63fd0()*48.5029);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ae40() {
   return (neuron0x2c64310()*25.6147);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b1c0() {
   return (neuron0x2c63610()*2.77204);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b200() {
   return (neuron0x2c63950()*-0.194767);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b240() {
   return (neuron0x2c63c90()*-1.14506);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b280() {
   return (neuron0x2c63fd0()*2.7742);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b2c0() {
   return (neuron0x2c64310()*-2.56525);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b640() {
   return (neuron0x2c63610()*-0.054519);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b680() {
   return (neuron0x2c63950()*0.157335);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b6c0() {
   return (neuron0x2c63c90()*-0.784294);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b700() {
   return (neuron0x2c63fd0()*-7.04814);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b740() {
   return (neuron0x2c64310()*-2.71214);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6bac0() {
   return (neuron0x2c63610()*-0.0501882);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6bb00() {
   return (neuron0x2c63950()*0.550423);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6bb40() {
   return (neuron0x2c63c90()*-0.489009);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6bb80() {
   return (neuron0x2c63fd0()*26.7675);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6bbc0() {
   return (neuron0x2c64310()*22.2944);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c656e0() {
   return (neuron0x2c64780()*-0.197329);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65720() {
   return (neuron0x2c64b30()*-1.31629);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65bf0() {
   return (neuron0x2c64fb0()*-0.0445159);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65c30() {
   return (neuron0x2c65430()*0.200045);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66070() {
   return (neuron0x2c65940()*-0.186107);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c660b0() {
   return (neuron0x2c65dc0()*-0.349388);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c664f0() {
   return (neuron0x2c66240()*-0.769978);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66530() {
   return (neuron0x2c66850()*-0.639258);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66a70() {
   return (neuron0x2c66c40()*0.3855);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66ab0() {
   return (neuron0x2c670c0()*-0.617276);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66ef0() {
   return (neuron0x2c67540()*-0.336587);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66f30() {
   return (neuron0x2c679c0()*-0.0896261);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67370() {
   return (neuron0x2c67ed0()*-0.801154);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c673b0() {
   return (neuron0x2bebb00()*-0.307608);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c677f0() {
   return (neuron0x2c687e0()*0.0307469);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67830() {
   return (neuron0x2c68c60()*0.107715);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67c70() {
   return (neuron0x2c69530()*-0.673866);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67cb0() {
   return (neuron0x2c69800()*-0.411753);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68180() {
   return (neuron0x2c69c80()*-0.0174482);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c681c0() {
   return (neuron0x2c6a100()*0.923542);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66760() {
   return (neuron0x2c6a580()*-0.451887);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c667a0() {
   return (neuron0x2c6aa00()*-0.980128);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68a90() {
   return (neuron0x2c6ae80()*0.493788);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68ad0() {
   return (neuron0x2c6b300()*-0.598759);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68f10() {
   return (neuron0x2c6b780()*-0.521632);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c685f0() {
   return (neuron0x2c64780()*-1.60296);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68630() {
   return (neuron0x2c64b30()*-1.35401);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68670() {
   return (neuron0x2c64fb0()*-0.879249);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c686b0() {
   return (neuron0x2c65430()*3.35059);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c686f0() {
   return (neuron0x2c65940()*-2.7668);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68f50() {
   return (neuron0x2c65dc0()*-2.94682);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a3b0() {
   return (neuron0x2c66240()*-0.289397);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a3f0() {
   return (neuron0x2c66850()*-8.31066);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a830() {
   return (neuron0x2c66c40()*0.194795);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a870() {
   return (neuron0x2c670c0()*-0.108886);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6acb0() {
   return (neuron0x2c67540()*-1.14144);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6acf0() {
   return (neuron0x2c679c0()*-0.45855);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b130() {
   return (neuron0x2c67ed0()*-0.0356261);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b170() {
   return (neuron0x2bebb00()*1.04329);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b5b0() {
   return (neuron0x2c687e0()*16.7492);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b5f0() {
   return (neuron0x2c68c60()*-0.302115);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ba30() {
   return (neuron0x2c69530()*-4.646);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ba70() {
   return (neuron0x2c69800()*-1.16828);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c649a0() {
   return (neuron0x2c69c80()*-6.06456);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c649e0() {
   return (neuron0x2c6a100()*1.28815);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64530() {
   return (neuron0x2c6a580()*-1.36924);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64570() {
   return (neuron0x2c6aa00()*16.5411);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e140() {
   return (neuron0x2c6ae80()*0.212078);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e180() {
   return (neuron0x2c6b300()*0.92277);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e1c0() {
   return (neuron0x2c6b780()*0.657505);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67d00() {
   return (neuron0x2c64780()*1.60243);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67d40() {
   return (neuron0x2c64b30()*2.19617);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67d80() {
   return (neuron0x2c64fb0()*-0.480518);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67dc0() {
   return (neuron0x2c65430()*-0.889981);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e750() {
   return (neuron0x2c65940()*1.60811);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e790() {
   return (neuron0x2c65dc0()*-1.27758);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e7d0() {
   return (neuron0x2c66240()*-0.406359);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e810() {
   return (neuron0x2c66850()*1.68051);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e850() {
   return (neuron0x2c66c40()*-1.4436);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e890() {
   return (neuron0x2c670c0()*1.17939);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e8d0() {
   return (neuron0x2c67540()*1.00103);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e910() {
   return (neuron0x2c679c0()*0.829998);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e950() {
   return (neuron0x2c67ed0()*0.53799);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e990() {
   return (neuron0x2bebb00()*0.19882);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e9d0() {
   return (neuron0x2c687e0()*0.903698);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ea10() {
   return (neuron0x2c68c60()*0.137573);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e390() {
   return (neuron0x2c69530()*-0.153201);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6e3d0() {
   return (neuron0x2c69800()*0.0755435);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6eb60() {
   return (neuron0x2c69c80()*-0.238);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6eba0() {
   return (neuron0x2c6a100()*-2.29465);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ebe0() {
   return (neuron0x2c6a580()*0.0612845);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ec20() {
   return (neuron0x2c6aa00()*3.8507);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ec60() {
   return (neuron0x2c6ae80()*-1.21662);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6eca0() {
   return (neuron0x2c6b300()*-0.378088);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ece0() {
   return (neuron0x2c6b780()*1.8654);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f060() {
   return (neuron0x2c64780()*-1.59865);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f0a0() {
   return (neuron0x2c64b30()*-1.16484);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f0e0() {
   return (neuron0x2c64fb0()*0.491794);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f120() {
   return (neuron0x2c65430()*0.307912);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f160() {
   return (neuron0x2c65940()*-0.878176);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f1a0() {
   return (neuron0x2c65dc0()*0.803371);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f1e0() {
   return (neuron0x2c66240()*-0.0225462);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f220() {
   return (neuron0x2c66850()*-3.02885);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f260() {
   return (neuron0x2c66c40()*1.61187);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f2a0() {
   return (neuron0x2c670c0()*-1.50285);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f2e0() {
   return (neuron0x2c67540()*-2.20714);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f320() {
   return (neuron0x2c679c0()*-0.622354);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f360() {
   return (neuron0x2c67ed0()*-1.83592);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f3a0() {
   return (neuron0x2bebb00()*0.361214);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f3e0() {
   return (neuron0x2c687e0()*-0.081534);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f420() {
   return (neuron0x2c68c60()*-0.10507);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6eeb0() {
   return (neuron0x2c69530()*-0.576802);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6eef0() {
   return (neuron0x2c69800()*-0.569238);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f570() {
   return (neuron0x2c69c80()*-0.312386);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f5b0() {
   return (neuron0x2c6a100()*4.34227);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f5f0() {
   return (neuron0x2c6a580()*0.168157);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f630() {
   return (neuron0x2c6aa00()*-2.04222);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f670() {
   return (neuron0x2c6ae80()*1.24766);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f6b0() {
   return (neuron0x2c6b300()*0.25842);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f6f0() {
   return (neuron0x2c6b780()*-1.32518);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fa70() {
   return (neuron0x2c64780()*0.0198623);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fab0() {
   return (neuron0x2c64b30()*0.388337);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6faf0() {
   return (neuron0x2c64fb0()*2.21384);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fb30() {
   return (neuron0x2c65430()*-0.153884);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fb70() {
   return (neuron0x2c65940()*-2.88336);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fbb0() {
   return (neuron0x2c65dc0()*-0.373139);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fbf0() {
   return (neuron0x2c66240()*0.222831);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fc30() {
   return (neuron0x2c66850()*1.38558);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fc70() {
   return (neuron0x2c66c40()*0.565244);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fcb0() {
   return (neuron0x2c670c0()*0.791629);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fcf0() {
   return (neuron0x2c67540()*-0.0888274);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fd30() {
   return (neuron0x2c679c0()*0.199187);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fd70() {
   return (neuron0x2c67ed0()*1.91267);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fdb0() {
   return (neuron0x2bebb00()*0.494843);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fdf0() {
   return (neuron0x2c687e0()*0.905944);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6fe30() {
   return (neuron0x2c68c60()*0.758855);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f8c0() {
   return (neuron0x2c69530()*0.385161);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6f900() {
   return (neuron0x2c69800()*0.170352);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ff80() {
   return (neuron0x2c69c80()*-4.33922);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ffc0() {
   return (neuron0x2c6a100()*1.44501);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70000() {
   return (neuron0x2c6a580()*0.976445);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70040() {
   return (neuron0x2c6aa00()*-7.10917);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70080() {
   return (neuron0x2c6ae80()*1.25693);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c700c0() {
   return (neuron0x2c6b300()*2.0461);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70100() {
   return (neuron0x2c6b780()*-6.92227);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70480() {
   return (neuron0x2c64780()*-0.95372);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c704c0() {
   return (neuron0x2c64b30()*-1.77845);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70500() {
   return (neuron0x2c64fb0()*0.75257);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70540() {
   return (neuron0x2c65430()*0.386677);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70580() {
   return (neuron0x2c65940()*-0.639045);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c705c0() {
   return (neuron0x2c65dc0()*0.868351);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70600() {
   return (neuron0x2c66240()*-0.276574);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d820() {
   return (neuron0x2c66850()*-2.51531);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d860() {
   return (neuron0x2c66c40()*0.950727);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d8a0() {
   return (neuron0x2c670c0()*-0.464948);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d8e0() {
   return (neuron0x2c67540()*-1.22011);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d920() {
   return (neuron0x2c679c0()*-0.739266);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d960() {
   return (neuron0x2c67ed0()*-0.947182);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d9a0() {
   return (neuron0x2bebb00()*-0.721306);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6d9e0() {
   return (neuron0x2c687e0()*-1.01435);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6da20() {
   return (neuron0x2c68c60()*-0.921661);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c702d0() {
   return (neuron0x2c69530()*0.198606);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c70310() {
   return (neuron0x2c69800()*-0.435258);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6db70() {
   return (neuron0x2c69c80()*0.742456);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dbb0() {
   return (neuron0x2c6a100()*2.38375);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dbf0() {
   return (neuron0x2c6a580()*-0.549342);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dc30() {
   return (neuron0x2c6aa00()*-3.20413);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dc70() {
   return (neuron0x2c6ae80()*1.39128);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dcb0() {
   return (neuron0x2c6b300()*-0.12682);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dcf0() {
   return (neuron0x2c6b780()*-1.29251);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dfe0() {
   return (neuron0x2c64780()*-0.365256);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c716e0() {
   return (neuron0x2c64b30()*-0.246365);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71720() {
   return (neuron0x2c64fb0()*0.81581);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71760() {
   return (neuron0x2c65430()*0.173917);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c717a0() {
   return (neuron0x2c65940()*1.18919);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c717e0() {
   return (neuron0x2c65dc0()*-0.225087);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71820() {
   return (neuron0x2c66240()*-0.183745);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71860() {
   return (neuron0x2c66850()*-1.10254);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c718a0() {
   return (neuron0x2c66c40()*0.284139);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c718e0() {
   return (neuron0x2c670c0()*0.146988);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71920() {
   return (neuron0x2c67540()*-0.225607);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71960() {
   return (neuron0x2c679c0()*-0.140696);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c719a0() {
   return (neuron0x2c67ed0()*-4.57385);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c719e0() {
   return (neuron0x2bebb00()*-0.397167);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71a20() {
   return (neuron0x2c687e0()*-2.67174);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71a60() {
   return (neuron0x2c68c60()*0.191941);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6dec0() {
   return (neuron0x2c69530()*2.22529);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6df00() {
   return (neuron0x2c69800()*-0.346273);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71bb0() {
   return (neuron0x2c69c80()*-1.21424);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71bf0() {
   return (neuron0x2c6a100()*0.426066);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71c30() {
   return (neuron0x2c6a580()*0.288317);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71c70() {
   return (neuron0x2c6aa00()*3.47303);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71cb0() {
   return (neuron0x2c6ae80()*-0.0869702);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71cf0() {
   return (neuron0x2c6b300()*0.588691);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71d30() {
   return (neuron0x2c6b780()*4.04976);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c720b0() {
   return (neuron0x2c64780()*2.61862);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c720f0() {
   return (neuron0x2c64b30()*3.06268);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72130() {
   return (neuron0x2c64fb0()*3.78133);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72170() {
   return (neuron0x2c65430()*6.02243);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c721b0() {
   return (neuron0x2c65940()*6.57816);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c721f0() {
   return (neuron0x2c65dc0()*7.14734);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72230() {
   return (neuron0x2c66240()*0.271546);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72270() {
   return (neuron0x2c66850()*-0.0116916);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c722b0() {
   return (neuron0x2c66c40()*0.637925);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c722f0() {
   return (neuron0x2c670c0()*0.0239866);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72330() {
   return (neuron0x2c67540()*3.27973);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72370() {
   return (neuron0x2c679c0()*0.685838);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c723b0() {
   return (neuron0x2c67ed0()*1.93797);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c723f0() {
   return (neuron0x2bebb00()*2.46673);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72430() {
   return (neuron0x2c687e0()*-21.7827);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72470() {
   return (neuron0x2c68c60()*4.2083);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71f00() {
   return (neuron0x2c69530()*12.1342);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c71f40() {
   return (neuron0x2c69800()*1.57637);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c725c0() {
   return (neuron0x2c69c80()*12.001);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72600() {
   return (neuron0x2c6a100()*2.29892);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72640() {
   return (neuron0x2c6a580()*8.81954);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72680() {
   return (neuron0x2c6aa00()*-74.5317);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c726c0() {
   return (neuron0x2c6ae80()*0.748213);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72700() {
   return (neuron0x2c6b300()*1.21139);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72740() {
   return (neuron0x2c6b780()*-2.3574);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72ac0() {
   return (neuron0x2c64780()*0.279174);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72b00() {
   return (neuron0x2c64b30()*-0.00346984);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72b40() {
   return (neuron0x2c64fb0()*1.32431);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72b80() {
   return (neuron0x2c65430()*-0.311503);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72bc0() {
   return (neuron0x2c65940()*0.313925);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72c00() {
   return (neuron0x2c65dc0()*-0.071669);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72c40() {
   return (neuron0x2c66240()*0.244895);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72c80() {
   return (neuron0x2c66850()*-1.09068);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72cc0() {
   return (neuron0x2c66c40()*-0.00473912);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72d00() {
   return (neuron0x2c670c0()*0.492123);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72d40() {
   return (neuron0x2c67540()*0.523105);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72d80() {
   return (neuron0x2c679c0()*-0.393946);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72dc0() {
   return (neuron0x2c67ed0()*0.0933621);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72e00() {
   return (neuron0x2bebb00()*-1.34447);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72e40() {
   return (neuron0x2c687e0()*0.02062);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72e80() {
   return (neuron0x2c68c60()*1.17706);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72910() {
   return (neuron0x2c69530()*0.237871);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72950() {
   return (neuron0x2c69800()*-0.791392);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c72fd0() {
   return (neuron0x2c69c80()*-2.53931);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73010() {
   return (neuron0x2c6a100()*1.05023);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73050() {
   return (neuron0x2c6a580()*-0.215444);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73090() {
   return (neuron0x2c6aa00()*-3.57806);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c730d0() {
   return (neuron0x2c6ae80()*0.939059);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73110() {
   return (neuron0x2c6b300()*0.0743597);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73150() {
   return (neuron0x2c6b780()*-0.408311);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c734d0() {
   return (neuron0x2c64780()*1.50851);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73510() {
   return (neuron0x2c64b30()*1.27777);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73550() {
   return (neuron0x2c64fb0()*1.52474);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73590() {
   return (neuron0x2c65430()*4.85576);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c735d0() {
   return (neuron0x2c65940()*-1.1393);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73610() {
   return (neuron0x2c65dc0()*0.576563);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73650() {
   return (neuron0x2c66240()*1.98217);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73690() {
   return (neuron0x2c66850()*0.212474);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c736d0() {
   return (neuron0x2c66c40()*-0.199977);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73710() {
   return (neuron0x2c670c0()*3.03673);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73750() {
   return (neuron0x2c67540()*1.6923);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73790() {
   return (neuron0x2c679c0()*0.00501824);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c737d0() {
   return (neuron0x2c67ed0()*-2.29453);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73810() {
   return (neuron0x2bebb00()*2.27448);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73850() {
   return (neuron0x2c687e0()*4.17842);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73890() {
   return (neuron0x2c68c60()*1.11526);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73320() {
   return (neuron0x2c69530()*-0.352274);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73360() {
   return (neuron0x2c69800()*1.22389);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c739e0() {
   return (neuron0x2c69c80()*1.61443);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73a20() {
   return (neuron0x2c6a100()*0.203532);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73a60() {
   return (neuron0x2c6a580()*-0.673776);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73aa0() {
   return (neuron0x2c6aa00()*-0.13207);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73ae0() {
   return (neuron0x2c6ae80()*-0.909284);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73b20() {
   return (neuron0x2c6b300()*3.27969);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73b60() {
   return (neuron0x2c6b780()*-30.7654);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73ee0() {
   return (neuron0x2c64780()*-0.613065);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73f20() {
   return (neuron0x2c64b30()*0.118912);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73f60() {
   return (neuron0x2c64fb0()*1.03722);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73fa0() {
   return (neuron0x2c65430()*9.2577);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73fe0() {
   return (neuron0x2c65940()*2.65975);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74020() {
   return (neuron0x2c65dc0()*-2.19394);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74060() {
   return (neuron0x2c66240()*2.67194);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c740a0() {
   return (neuron0x2c66850()*0.159982);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c740e0() {
   return (neuron0x2c66c40()*1.1195);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74120() {
   return (neuron0x2c670c0()*0.211847);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74160() {
   return (neuron0x2c67540()*1.53476);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c741a0() {
   return (neuron0x2c679c0()*-0.848946);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c741e0() {
   return (neuron0x2c67ed0()*-3.47573);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74220() {
   return (neuron0x2bebb00()*2.41873);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74260() {
   return (neuron0x2c687e0()*-6.34092);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c742a0() {
   return (neuron0x2c68c60()*-0.102427);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73d30() {
   return (neuron0x2c69530()*4.10672);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c73d70() {
   return (neuron0x2c69800()*-1.34097);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c743f0() {
   return (neuron0x2c69c80()*10.9032);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74430() {
   return (neuron0x2c6a100()*1.67616);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74470() {
   return (neuron0x2c6a580()*0.81228);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c744b0() {
   return (neuron0x2c6aa00()*-8.44423);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c744f0() {
   return (neuron0x2c6ae80()*-0.018468);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74530() {
   return (neuron0x2c6b300()*4.99109);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74570() {
   return (neuron0x2c6b780()*-12.2248);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c748f0() {
   return (neuron0x2c64780()*-1.38996);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74930() {
   return (neuron0x2c64b30()*-0.967559);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74970() {
   return (neuron0x2c64fb0()*-2.37346);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c749b0() {
   return (neuron0x2c65430()*-4.62561);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c749f0() {
   return (neuron0x2c65940()*-10.3702);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74a30() {
   return (neuron0x2c65dc0()*1.76834);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74a70() {
   return (neuron0x2c66240()*-0.532711);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74ab0() {
   return (neuron0x2c66850()*-1.30671);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74af0() {
   return (neuron0x2c66c40()*-0.58534);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74b30() {
   return (neuron0x2c670c0()*-1.43854);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74b70() {
   return (neuron0x2c67540()*-1.32382);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74bb0() {
   return (neuron0x2c679c0()*-0.562566);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74bf0() {
   return (neuron0x2c67ed0()*-0.665208);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74c30() {
   return (neuron0x2bebb00()*-0.464996);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74c70() {
   return (neuron0x2c687e0()*15.4426);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74cb0() {
   return (neuron0x2c68c60()*-2.60219);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74740() {
   return (neuron0x2c69530()*5.37851);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74780() {
   return (neuron0x2c69800()*-2.27995);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74e00() {
   return (neuron0x2c69c80()*-11.7838);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74e40() {
   return (neuron0x2c6a100()*-1.11572);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74e80() {
   return (neuron0x2c6a580()*-3.06573);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74ec0() {
   return (neuron0x2c6aa00()*12.4783);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74f00() {
   return (neuron0x2c6ae80()*-1.01557);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74f40() {
   return (neuron0x2c6b300()*-2.43146);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c74f80() {
   return (neuron0x2c6b780()*-31.7456);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75300() {
   return (neuron0x2c64780()*1.27973);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75340() {
   return (neuron0x2c64b30()*1.97806);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75380() {
   return (neuron0x2c64fb0()*-0.772848);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c753c0() {
   return (neuron0x2c65430()*-0.455755);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75400() {
   return (neuron0x2c65940()*1.16092);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75440() {
   return (neuron0x2c65dc0()*-1.00821);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75480() {
   return (neuron0x2c66240()*0.196972);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c754c0() {
   return (neuron0x2c66850()*1.72108);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75500() {
   return (neuron0x2c66c40()*-1.22233);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75540() {
   return (neuron0x2c670c0()*0.436192);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75580() {
   return (neuron0x2c67540()*1.38924);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c755c0() {
   return (neuron0x2c679c0()*1.1105);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75600() {
   return (neuron0x2c67ed0()*0.27432);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75640() {
   return (neuron0x2bebb00()*-0.171882);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75680() {
   return (neuron0x2c687e0()*0.46379);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c756c0() {
   return (neuron0x2c68c60()*0.169988);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75150() {
   return (neuron0x2c69530()*-0.244536);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75190() {
   return (neuron0x2c69800()*-0.145175);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75810() {
   return (neuron0x2c69c80()*0.0414486);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75850() {
   return (neuron0x2c6a100()*-2.77085);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75890() {
   return (neuron0x2c6a580()*0.178734);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c758d0() {
   return (neuron0x2c6aa00()*0.956324);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75910() {
   return (neuron0x2c6ae80()*-1.49156);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75950() {
   return (neuron0x2c6b300()*0.454834);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75990() {
   return (neuron0x2c6b780()*0.991672);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75d10() {
   return (neuron0x2c64780()*0.0121931);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75d50() {
   return (neuron0x2c64b30()*0.0737562);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75d90() {
   return (neuron0x2c64fb0()*-0.337104);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75dd0() {
   return (neuron0x2c65430()*-6.21878);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75e10() {
   return (neuron0x2c65940()*1.09599);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75e50() {
   return (neuron0x2c65dc0()*0.533957);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75e90() {
   return (neuron0x2c66240()*-0.240212);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75ed0() {
   return (neuron0x2c66850()*-0.868503);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75f10() {
   return (neuron0x2c66c40()*-0.0306224);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75f50() {
   return (neuron0x2c670c0()*0.305158);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75f90() {
   return (neuron0x2c67540()*0.417141);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75fd0() {
   return (neuron0x2c679c0()*0.539434);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76010() {
   return (neuron0x2c67ed0()*-3.91533);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76050() {
   return (neuron0x2bebb00()*-2.18623);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76090() {
   return (neuron0x2c687e0()*-19.71);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c760d0() {
   return (neuron0x2c68c60()*0.556033);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75b60() {
   return (neuron0x2c69530()*6.28554);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c75ba0() {
   return (neuron0x2c69800()*0.189648);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76220() {
   return (neuron0x2c69c80()*6.77033);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76260() {
   return (neuron0x2c6a100()*-0.922979);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c762a0() {
   return (neuron0x2c6a580()*-1.51061);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c762e0() {
   return (neuron0x2c6aa00()*-1.4762);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76320() {
   return (neuron0x2c6ae80()*-0.11527);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76360() {
   return (neuron0x2c6b300()*2.61739);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c763a0() {
   return (neuron0x2c6b780()*3.55143);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76720() {
   return (neuron0x2c64780()*-1.64368);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76760() {
   return (neuron0x2c64b30()*-1.40025);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c767a0() {
   return (neuron0x2c64fb0()*1.22839);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c767e0() {
   return (neuron0x2c65430()*-0.917771);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76820() {
   return (neuron0x2c65940()*0.111633);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76860() {
   return (neuron0x2c65dc0()*0.399902);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c768a0() {
   return (neuron0x2c66240()*0.26394);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c768e0() {
   return (neuron0x2c66850()*-0.957285);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76920() {
   return (neuron0x2c66c40()*1.37865);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76960() {
   return (neuron0x2c670c0()*-0.387957);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c769a0() {
   return (neuron0x2c67540()*-0.16296);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c769e0() {
   return (neuron0x2c679c0()*-0.775978);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76a20() {
   return (neuron0x2c67ed0()*-1.42714);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76a60() {
   return (neuron0x2bebb00()*1.0006);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76aa0() {
   return (neuron0x2c687e0()*-2.74929);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76ae0() {
   return (neuron0x2c68c60()*-0.382693);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76570() {
   return (neuron0x2c69530()*1.66694);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c765b0() {
   return (neuron0x2c69800()*-0.40493);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76c30() {
   return (neuron0x2c69c80()*2.02956);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76c70() {
   return (neuron0x2c6a100()*3.2498);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76cb0() {
   return (neuron0x2c6a580()*-0.868113);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76cf0() {
   return (neuron0x2c6aa00()*-6.02117);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76d30() {
   return (neuron0x2c6ae80()*1.24606);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76d70() {
   return (neuron0x2c6b300()*1.23617);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76db0() {
   return (neuron0x2c6b780()*-1.00528);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c77130() {
   return (neuron0x2c64780()*-0.686526);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64910() {
   return (neuron0x2c64b30()*-0.263884);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64950() {
   return (neuron0x2c64fb0()*-1.19172);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64d50() {
   return (neuron0x2c65430()*-6.93732);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64d90() {
   return (neuron0x2c65940()*-0.526288);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c651d0() {
   return (neuron0x2c65dc0()*1.50694);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65210() {
   return (neuron0x2c66240()*0.61948);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65650() {
   return (neuron0x2c66850()*-0.279421);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65690() {
   return (neuron0x2c66c40()*-1.11804);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65b60() {
   return (neuron0x2c670c0()*-1.55821);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65ba0() {
   return (neuron0x2c67540()*-0.858124);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c65fe0() {
   return (neuron0x2c679c0()*0.526202);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66020() {
   return (neuron0x2c67ed0()*4.28524);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66460() {
   return (neuron0x2bebb00()*-0.231103);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c664a0() {
   return (neuron0x2c687e0()*9.26799);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c669e0() {
   return (neuron0x2c68c60()*-1.2099);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66a20() {
   return (neuron0x2c69530()*-1.67319);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66e60() {
   return (neuron0x2c69800()*1.79174);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c66ea0() {
   return (neuron0x2c69c80()*-9.24542);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c672e0() {
   return (neuron0x2c6a100()*-1.28916);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67320() {
   return (neuron0x2c6a580()*0.895865);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67760() {
   return (neuron0x2c6aa00()*2.42315);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c677a0() {
   return (neuron0x2c6ae80()*-1.40911);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67be0() {
   return (neuron0x2c6b300()*-3.39299);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c67c20() {
   return (neuron0x2c6b780()*24.9021);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c715a0() {
   return (neuron0x2c64780()*-1.28136);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c715e0() {
   return (neuron0x2c64b30()*-1.48407);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68e80() {
   return (neuron0x2c64fb0()*0.216833);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68ec0() {
   return (neuron0x2c65430()*0.254304);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76f80() {
   return (neuron0x2c65940()*-0.795213);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c76fc0() {
   return (neuron0x2c65dc0()*1.2014);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c641f0() {
   return (neuron0x2c66240()*-0.465806);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64230() {
   return (neuron0x2c66850()*-1.3406);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69a20() {
   return (neuron0x2c66c40()*0.865049);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69a60() {
   return (neuron0x2c670c0()*-0.285942);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69ea0() {
   return (neuron0x2c67540()*-1.24207);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c69ee0() {
   return (neuron0x2c679c0()*-0.621673);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a320() {
   return (neuron0x2c67ed0()*-0.978451);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a360() {
   return (neuron0x2bebb00()*-0.10796);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a7a0() {
   return (neuron0x2c687e0()*0.180211);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6a7e0() {
   return (neuron0x2c68c60()*-0.491017);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ac20() {
   return (neuron0x2c69530()*-0.403936);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6ac60() {
   return (neuron0x2c69800()*-0.032064);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b0a0() {
   return (neuron0x2c69c80()*0.0162734);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b0e0() {
   return (neuron0x2c6a100()*2.14701);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b520() {
   return (neuron0x2c6a580()*0.0665929);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b560() {
   return (neuron0x2c6aa00()*-1.74441);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b9a0() {
   return (neuron0x2c6ae80()*1.08404);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c6b9e0() {
   return (neuron0x2c6b300()*0.0444007);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c680f0() {
   return (neuron0x2c6b780()*-1.61587);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c68130() {
   return (neuron0x2c64780()*1.79405);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a3a0() {
   return (neuron0x2c64b30()*1.82526);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a3e0() {
   return (neuron0x2c64fb0()*-0.941051);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a420() {
   return (neuron0x2c65430()*5.64241);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a460() {
   return (neuron0x2c65940()*1.54753);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a4a0() {
   return (neuron0x2c65dc0()*-0.10085);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a4e0() {
   return (neuron0x2c66240()*0.373548);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a520() {
   return (neuron0x2c66850()*1.28679);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a560() {
   return (neuron0x2c66c40()*-1.95328);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a5a0() {
   return (neuron0x2c670c0()*0.95619);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a5e0() {
   return (neuron0x2c67540()*4.67734);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a620() {
   return (neuron0x2c679c0()*1.54362);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a660() {
   return (neuron0x2c67ed0()*1.18644);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a6a0() {
   return (neuron0x2bebb00()*9.41941);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a6e0() {
   return (neuron0x2c687e0()*20.5474);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a720() {
   return (neuron0x2c68c60()*1.08765);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a1f0() {
   return (neuron0x2c69530()*-6.23956);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a230() {
   return (neuron0x2c69800()*3.04934);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a870() {
   return (neuron0x2c69c80()*-29.7293);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a8b0() {
   return (neuron0x2c6a100()*-3.58442);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a8f0() {
   return (neuron0x2c6a580()*2.38466);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a930() {
   return (neuron0x2c6aa00()*8.51586);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a970() {
   return (neuron0x2c6ae80()*-2.26861);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a9b0() {
   return (neuron0x2c6b300()*-0.956488);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7a9f0() {
   return (neuron0x2c6b780()*2.39443);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ad70() {
   return (neuron0x2c64780()*1.08728);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7adb0() {
   return (neuron0x2c64b30()*2.036);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7adf0() {
   return (neuron0x2c64fb0()*-0.613025);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ae30() {
   return (neuron0x2c65430()*0.0717415);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ae70() {
   return (neuron0x2c65940()*1.20192);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7aeb0() {
   return (neuron0x2c65dc0()*-1.95104);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7aef0() {
   return (neuron0x2c66240()*0.128415);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7af30() {
   return (neuron0x2c66850()*2.79159);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7af70() {
   return (neuron0x2c66c40()*-0.992922);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7afb0() {
   return (neuron0x2c670c0()*0.975456);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7aff0() {
   return (neuron0x2c67540()*1.32476);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b030() {
   return (neuron0x2c679c0()*1.56766);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b070() {
   return (neuron0x2c67ed0()*0.795468);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b0b0() {
   return (neuron0x2bebb00()*0.784038);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b0f0() {
   return (neuron0x2c687e0()*-0.176019);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b130() {
   return (neuron0x2c68c60()*0.850263);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7abc0() {
   return (neuron0x2c69530()*0.745004);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ac00() {
   return (neuron0x2c69800()*-0.335381);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b280() {
   return (neuron0x2c69c80()*0.874091);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b2c0() {
   return (neuron0x2c6a100()*-3.20804);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b300() {
   return (neuron0x2c6a580()*-0.0198823);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b340() {
   return (neuron0x2c6aa00()*3.07987);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b380() {
   return (neuron0x2c6ae80()*-2.32026);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b3c0() {
   return (neuron0x2c6b300()*-0.0207584);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b400() {
   return (neuron0x2c6b780()*3.08732);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b780() {
   return (neuron0x2c64780()*0.536729);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b7c0() {
   return (neuron0x2c64b30()*-0.586495);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b800() {
   return (neuron0x2c64fb0()*0.619088);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b840() {
   return (neuron0x2c65430()*0.40062);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b880() {
   return (neuron0x2c65940()*0.654975);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b8c0() {
   return (neuron0x2c65dc0()*-0.333129);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b900() {
   return (neuron0x2c66240()*-0.94523);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b940() {
   return (neuron0x2c66850()*-0.614876);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b980() {
   return (neuron0x2c66c40()*0.29486);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b9c0() {
   return (neuron0x2c670c0()*0.818402);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ba00() {
   return (neuron0x2c67540()*-0.728393);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ba40() {
   return (neuron0x2c679c0()*-0.214799);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ba80() {
   return (neuron0x2c67ed0()*-4.76519);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bac0() {
   return (neuron0x2bebb00()*2.59496);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bb00() {
   return (neuron0x2c687e0()*-1.67313);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bb40() {
   return (neuron0x2c68c60()*-0.114314);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b5d0() {
   return (neuron0x2c69530()*0.914615);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7b610() {
   return (neuron0x2c69800()*-0.46844);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bc90() {
   return (neuron0x2c69c80()*-3.69485);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bcd0() {
   return (neuron0x2c6a100()*0.124509);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bd10() {
   return (neuron0x2c6a580()*0.654623);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bd50() {
   return (neuron0x2c6aa00()*-0.0652193);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bd90() {
   return (neuron0x2c6ae80()*0.00858222);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bdd0() {
   return (neuron0x2c6b300()*1.49015);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7be10() {
   return (neuron0x2c6b780()*-5.27182);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c190() {
   return (neuron0x2c64780()*-0.848806);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c1d0() {
   return (neuron0x2c64b30()*-0.695655);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c210() {
   return (neuron0x2c64fb0()*0.036618);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c250() {
   return (neuron0x2c65430()*-0.0927989);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c290() {
   return (neuron0x2c65940()*-0.154199);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c2d0() {
   return (neuron0x2c65dc0()*0.403966);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c310() {
   return (neuron0x2c66240()*-0.11121);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c350() {
   return (neuron0x2c66850()*-1.72992);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c390() {
   return (neuron0x2c66c40()*0.54356);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c3d0() {
   return (neuron0x2c670c0()*-0.759705);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c410() {
   return (neuron0x2c67540()*-1.5647);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c450() {
   return (neuron0x2c679c0()*-0.568756);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c490() {
   return (neuron0x2c67ed0()*-1.11976);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c4d0() {
   return (neuron0x2bebb00()*-0.269442);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c510() {
   return (neuron0x2c687e0()*-0.370483);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c550() {
   return (neuron0x2c68c60()*-0.734107);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7bfe0() {
   return (neuron0x2c69530()*0.180304);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c020() {
   return (neuron0x2c69800()*-0.971739);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c6a0() {
   return (neuron0x2c69c80()*-0.0569639);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c6e0() {
   return (neuron0x2c6a100()*1.55732);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c720() {
   return (neuron0x2c6a580()*-0.300839);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c760() {
   return (neuron0x2c6aa00()*-1.15278);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c7a0() {
   return (neuron0x2c6ae80()*0.76499);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c7e0() {
   return (neuron0x2c6b300()*-0.222221);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c820() {
   return (neuron0x2c6b780()*-0.768987);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cba0() {
   return (neuron0x2c64780()*1.35981);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cbe0() {
   return (neuron0x2c64b30()*2.22791);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cc20() {
   return (neuron0x2c64fb0()*-1.41182);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cc60() {
   return (neuron0x2c65430()*-0.737018);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cca0() {
   return (neuron0x2c65940()*1.34956);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cce0() {
   return (neuron0x2c65dc0()*-1.06856);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cd20() {
   return (neuron0x2c66240()*0.0172637);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cd60() {
   return (neuron0x2c66850()*2.69495);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cda0() {
   return (neuron0x2c66c40()*-1.19985);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cde0() {
   return (neuron0x2c670c0()*1.00094);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ce20() {
   return (neuron0x2c67540()*1.3987);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ce60() {
   return (neuron0x2c679c0()*1.03011);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cea0() {
   return (neuron0x2c67ed0()*0.949514);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cee0() {
   return (neuron0x2bebb00()*0.0723792);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cf20() {
   return (neuron0x2c687e0()*0.470764);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7cf60() {
   return (neuron0x2c68c60()*0.942644);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7c9f0() {
   return (neuron0x2c69530()*-0.089979);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ca30() {
   return (neuron0x2c69800()*-0.302095);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d0b0() {
   return (neuron0x2c69c80()*-0.321432);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d0f0() {
   return (neuron0x2c6a100()*-2.51446);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d130() {
   return (neuron0x2c6a580()*-0.325993);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d170() {
   return (neuron0x2c6aa00()*2.40673);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d1b0() {
   return (neuron0x2c6ae80()*-1.70997);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d1f0() {
   return (neuron0x2c6b300()*-0.0217555);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d230() {
   return (neuron0x2c6b780()*1.6852);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d5b0() {
   return (neuron0x2c64780()*-0.603006);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d5f0() {
   return (neuron0x2c64b30()*-0.70761);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d630() {
   return (neuron0x2c64fb0()*-0.110633);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d670() {
   return (neuron0x2c65430()*0.161572);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d6b0() {
   return (neuron0x2c65940()*-0.397152);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d6f0() {
   return (neuron0x2c65dc0()*0.484096);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d730() {
   return (neuron0x2c66240()*0.292054);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d770() {
   return (neuron0x2c66850()*-1.0687);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d7b0() {
   return (neuron0x2c66c40()*0.691248);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d7f0() {
   return (neuron0x2c670c0()*-0.0828655);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d830() {
   return (neuron0x2c67540()*-1.22954);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d870() {
   return (neuron0x2c679c0()*-0.162933);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d8b0() {
   return (neuron0x2c67ed0()*-0.934017);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d8f0() {
   return (neuron0x2bebb00()*-0.337623);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d930() {
   return (neuron0x2c687e0()*0.0224816);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d970() {
   return (neuron0x2c68c60()*-0.842957);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d400() {
   return (neuron0x2c69530()*-0.326289);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7d440() {
   return (neuron0x2c69800()*-0.104567);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7dac0() {
   return (neuron0x2c69c80()*0.270661);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7db00() {
   return (neuron0x2c6a100()*0.358226);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7db40() {
   return (neuron0x2c6a580()*0.133345);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7db80() {
   return (neuron0x2c6aa00()*-0.667929);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7dbc0() {
   return (neuron0x2c6ae80()*0.176755);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7dc00() {
   return (neuron0x2c6b300()*-0.459174);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7dc40() {
   return (neuron0x2c6b780()*-1.22267);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7dfc0() {
   return (neuron0x2c64780()*0.11763);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e000() {
   return (neuron0x2c64b30()*0.183628);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e040() {
   return (neuron0x2c64fb0()*0.502933);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e080() {
   return (neuron0x2c65430()*0.625158);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e0c0() {
   return (neuron0x2c65940()*0.0952052);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e100() {
   return (neuron0x2c65dc0()*-0.634797);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e140() {
   return (neuron0x2c66240()*0.174035);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e180() {
   return (neuron0x2c66850()*0.757177);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e1c0() {
   return (neuron0x2c66c40()*-0.360519);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e200() {
   return (neuron0x2c670c0()*0.479685);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e240() {
   return (neuron0x2c67540()*-0.0672204);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e280() {
   return (neuron0x2c679c0()*0.172589);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e2c0() {
   return (neuron0x2c67ed0()*0.131802);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e300() {
   return (neuron0x2bebb00()*0.677898);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e340() {
   return (neuron0x2c687e0()*0.651046);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e380() {
   return (neuron0x2c68c60()*0.581856);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7de10() {
   return (neuron0x2c69530()*0.729463);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7de50() {
   return (neuron0x2c69800()*0.551316);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e4d0() {
   return (neuron0x2c69c80()*0.262177);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e510() {
   return (neuron0x2c6a100()*-0.0809751);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e550() {
   return (neuron0x2c6a580()*0.157668);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e590() {
   return (neuron0x2c6aa00()*0.551928);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e5d0() {
   return (neuron0x2c6ae80()*-0.148863);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e610() {
   return (neuron0x2c6b300()*0.104398);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e650() {
   return (neuron0x2c6b780()*0.402434);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e9d0() {
   return (neuron0x2c64780()*0.720959);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ea10() {
   return (neuron0x2c64b30()*0.0870879);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ea50() {
   return (neuron0x2c64fb0()*0.825804);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ea90() {
   return (neuron0x2c65430()*2.76746);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ead0() {
   return (neuron0x2c65940()*3.98609);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7eb10() {
   return (neuron0x2c65dc0()*0.361686);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7eb50() {
   return (neuron0x2c66240()*0.476495);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7eb90() {
   return (neuron0x2c66850()*0.79485);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ebd0() {
   return (neuron0x2c66c40()*0.703066);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ec10() {
   return (neuron0x2c670c0()*1.05376);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ec50() {
   return (neuron0x2c67540()*0.799154);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ec90() {
   return (neuron0x2c679c0()*-0.156884);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ecd0() {
   return (neuron0x2c67ed0()*-3.53993);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ed10() {
   return (neuron0x2bebb00()*-0.354002);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ed50() {
   return (neuron0x2c687e0()*1.02682);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ed90() {
   return (neuron0x2c68c60()*0.933546);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e820() {
   return (neuron0x2c69530()*4.57728);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7e860() {
   return (neuron0x2c69800()*0.370407);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7eee0() {
   return (neuron0x2c69c80()*1.44587);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ef20() {
   return (neuron0x2c6a100()*0.959214);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7ef60() {
   return (neuron0x2c6a580()*0.735481);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7efa0() {
   return (neuron0x2c6aa00()*-0.508044);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7efe0() {
   return (neuron0x2c6ae80()*-0.313496);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f020() {
   return (neuron0x2c6b300()*0.558087);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f060() {
   return (neuron0x2c6b780()*-5.80125);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f2c0() {
   return (neuron0x2c6d690()*0.495215);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f300() {
   return (neuron0x2c68460()*-0.952533);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f340() {
   return (neuron0x2c6e200()*4.29094);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f380() {
   return (neuron0x2c6ed20()*-6.97724);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f3c0() {
   return (neuron0x2c6f730()*-7.92876);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f400() {
   return (neuron0x2c70140()*-4.78214);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f440() {
   return (neuron0x2c6dd30()*-13.4655);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f480() {
   return (neuron0x2c71d70()*-3.05413);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f4c0() {
   return (neuron0x2c72780()*6.04366);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f500() {
   return (neuron0x2c73190()*-1.89495);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f540() {
   return (neuron0x2c73ba0()*-15.2955);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f580() {
   return (neuron0x2c745b0()*-5.29253);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f5c0() {
   return (neuron0x2c74fc0()*0.341987);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f600() {
   return (neuron0x2c759d0()*14.1364);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f640() {
   return (neuron0x2c763e0()*-4.42974);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f680() {
   return (neuron0x2c76df0()*-10.158);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64650() {
   return (neuron0x2c71410()*-0.669099);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c64690() {
   return (neuron0x2c7a060()*10.7986);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f7d0() {
   return (neuron0x2c7aa30()*5.85859);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f810() {
   return (neuron0x2c7b440()*11.5329);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f850() {
   return (neuron0x2c7be50()*-3.45043);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f890() {
   return (neuron0x2c7c860()*3.22643);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f8d0() {
   return (neuron0x2c7d270()*-0.805951);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f910() {
   return (neuron0x2c7dc80()*0.34043);
}

double nnFunc_1C_25_25hi_7000ep_weight::synapse0x2c7f950() {
   return (neuron0x2c7e690()*-4.9734);
}

