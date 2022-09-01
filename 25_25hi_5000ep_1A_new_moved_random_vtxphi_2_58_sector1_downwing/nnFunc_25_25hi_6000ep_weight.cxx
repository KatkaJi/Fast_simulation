#include "25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_downwing/nnFunc_25_25hi_6000ep_weight.h"
#include <cmath>

double nnFunc_25_25hi_6000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1dd9650();
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
         return neuron0x1dd9650();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbdc00() {
   return input0;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbdf40() {
   return input1;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbe280() {
   return input2;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbe5c0() {
   return input3;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbe900() {
   return input4;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dbed70() {
   double input = 6.54598;
   input += synapse0x1ccb010();
   input += synapse0x1dad070();
   input += synapse0x1dbf020();
   input += synapse0x1dbf060();
   input += synapse0x1dbf0a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbed70() {
   double input = input0x1dbed70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dbf0e0() {
   double input = 0.126806;
   input += synapse0x1dbf420();
   input += synapse0x1dbf460();
   input += synapse0x1dbf4a0();
   input += synapse0x1dbf4e0();
   input += synapse0x1dbf520();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbf0e0() {
   double input = input0x1dbf0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dbf560() {
   double input = -19.3873;
   input += synapse0x1dbf8a0();
   input += synapse0x1dbf8e0();
   input += synapse0x1dbf920();
   input += synapse0x1dbf960();
   input += synapse0x1dbf9a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbf560() {
   double input = input0x1dbf560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dbf9e0() {
   double input = -8.18476;
   input += synapse0x1dbfd20();
   input += synapse0x1dbfd60();
   input += synapse0x1cbd200();
   input += synapse0x1cbd240();
   input += synapse0x1dbfeb0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbf9e0() {
   double input = input0x1dbf9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dbfef0() {
   double input = -1.80252;
   input += synapse0x1dc0230();
   input += synapse0x1dc0270();
   input += synapse0x1dc02b0();
   input += synapse0x1dc02f0();
   input += synapse0x1dc0330();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dbfef0() {
   double input = input0x1dbfef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc0370() {
   double input = 0.48398;
   input += synapse0x1dc06b0();
   input += synapse0x1dc06f0();
   input += synapse0x1dc0730();
   input += synapse0x1dc0770();
   input += synapse0x1dc07b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc0370() {
   double input = input0x1dc0370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc07f0() {
   double input = 0.859014;
   input += synapse0x1dc0b30();
   input += synapse0x1dc0b70();
   input += synapse0x1dc0bb0();
   input += synapse0x1dbfda0();
   input += synapse0x1dbfde0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc07f0() {
   double input = input0x1dc07f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc0e00() {
   double input = 1.11014;
   input += synapse0x1dc10b0();
   input += synapse0x1dc10f0();
   input += synapse0x1dc1130();
   input += synapse0x1dc1170();
   input += synapse0x1dc11b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc0e00() {
   double input = input0x1dc0e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc11f0() {
   double input = -1.24659;
   input += synapse0x1dc1530();
   input += synapse0x1dc1570();
   input += synapse0x1dc15b0();
   input += synapse0x1dc15f0();
   input += synapse0x1dc1630();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc11f0() {
   double input = input0x1dc11f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc1670() {
   double input = 15.9988;
   input += synapse0x1dc19b0();
   input += synapse0x1dc19f0();
   input += synapse0x1dc1a30();
   input += synapse0x1dc1a70();
   input += synapse0x1dc1ab0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc1670() {
   double input = input0x1dc1670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc1af0() {
   double input = -9.73631;
   input += synapse0x1dc1e30();
   input += synapse0x1dc1e70();
   input += synapse0x1dc1eb0();
   input += synapse0x1dc1ef0();
   input += synapse0x1dc1f30();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc1af0() {
   double input = input0x1dc1af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc1f70() {
   double input = 38.0864;
   input += synapse0x1cbd050();
   input += synapse0x1cbd090();
   input += synapse0x1dc23c0();
   input += synapse0x1dc2400();
   input += synapse0x1dc2440();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc1f70() {
   double input = input0x1dc1f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc2480() {
   double input = -1.23261;
   input += synapse0x1dc27c0();
   input += synapse0x1dc2800();
   input += synapse0x1dc2840();
   input += synapse0x1dc2880();
   input += synapse0x1dc28c0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc2480() {
   double input = input0x1dc2480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc0bf0() {
   double input = -2.58413;
   input += synapse0x1cbd820();
   input += synapse0x1dc0d80();
   input += synapse0x1dc0dc0();
   input += synapse0x1dc2d10();
   input += synapse0x1dc2d50();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc0bf0() {
   double input = input0x1dc0bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc2d90() {
   double input = 0.341252;
   input += synapse0x1dc30d0();
   input += synapse0x1dc3110();
   input += synapse0x1dc3150();
   input += synapse0x1dc3190();
   input += synapse0x1dc31d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc2d90() {
   double input = input0x1dc2d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc3210() {
   double input = -3.09453;
   input += synapse0x1dc3550();
   input += synapse0x1dbde20();
   input += synapse0x1dbde60();
   input += synapse0x1dbe160();
   input += synapse0x1dbe1a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc3210() {
   double input = input0x1dc3210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc3ae0() {
   double input = 4.41237;
   input += synapse0x1dc3c70();
   input += synapse0x1dc3cb0();
   input += synapse0x1dc3cf0();
   input += synapse0x1dc3d30();
   input += synapse0x1dc3d70();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc3ae0() {
   double input = input0x1dc3ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc3db0() {
   double input = 1.2726;
   input += synapse0x1dc40f0();
   input += synapse0x1dc4130();
   input += synapse0x1dc4170();
   input += synapse0x1dc41b0();
   input += synapse0x1dc41f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc3db0() {
   double input = input0x1dc3db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc4230() {
   double input = -5.58584;
   input += synapse0x1dc4570();
   input += synapse0x1dc45b0();
   input += synapse0x1dc45f0();
   input += synapse0x1dc4630();
   input += synapse0x1dc4670();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc4230() {
   double input = input0x1dc4230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc46b0() {
   double input = 1.74538;
   input += synapse0x1dc49f0();
   input += synapse0x1dc4a30();
   input += synapse0x1dc4a70();
   input += synapse0x1dc4ab0();
   input += synapse0x1dc4af0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc46b0() {
   double input = input0x1dc46b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc4b30() {
   double input = 3.14417;
   input += synapse0x1dc4e70();
   input += synapse0x1dc4eb0();
   input += synapse0x1dc4ef0();
   input += synapse0x1dc4f30();
   input += synapse0x1dc4f70();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc4b30() {
   double input = input0x1dc4b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc4fb0() {
   double input = -1.15703;
   input += synapse0x1dc52f0();
   input += synapse0x1dc5330();
   input += synapse0x1dc5370();
   input += synapse0x1dc53b0();
   input += synapse0x1dc53f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc4fb0() {
   double input = input0x1dc4fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc5430() {
   double input = 4.60827;
   input += synapse0x1dc5770();
   input += synapse0x1dc57b0();
   input += synapse0x1dc57f0();
   input += synapse0x1dc5830();
   input += synapse0x1dc5870();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc5430() {
   double input = input0x1dc5430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc58b0() {
   double input = -5.79247;
   input += synapse0x1dc5bf0();
   input += synapse0x1dc5c30();
   input += synapse0x1dc5c70();
   input += synapse0x1dc5cb0();
   input += synapse0x1dc5cf0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc58b0() {
   double input = input0x1dc58b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc5d30() {
   double input = -0.251538;
   input += synapse0x1dc6070();
   input += synapse0x1dc60b0();
   input += synapse0x1dc60f0();
   input += synapse0x1dc6130();
   input += synapse0x1dc6170();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc5d30() {
   double input = input0x1dc5d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc7c40() {
   double input = 0.12001;
   input += synapse0x1dbfc90();
   input += synapse0x1dbfcd0();
   input += synapse0x1dc01a0();
   input += synapse0x1dc01e0();
   input += synapse0x1dc0620();
   input += synapse0x1dc0660();
   input += synapse0x1dc0aa0();
   input += synapse0x1dc0ae0();
   input += synapse0x1dc1020();
   input += synapse0x1dc1060();
   input += synapse0x1dc14a0();
   input += synapse0x1dc14e0();
   input += synapse0x1dc1920();
   input += synapse0x1dc1960();
   input += synapse0x1dc1da0();
   input += synapse0x1dc1de0();
   input += synapse0x1dc2220();
   input += synapse0x1dc2260();
   input += synapse0x1dc2730();
   input += synapse0x1dc2770();
   input += synapse0x1dc3040();
   input += synapse0x1dc3080();
   input += synapse0x1dc34c0();
   input += synapse0x1dc3500();
   input += synapse0x1dbeb20();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc7c40() {
   double input = input0x1dc7c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc2a10() {
   double input = 0.17451;
   input += synapse0x1dc2ba0();
   input += synapse0x1dc2be0();
   input += synapse0x1dc2c20();
   input += synapse0x1dc2c60();
   input += synapse0x1dc2ca0();
   input += synapse0x1dbeb60();
   input += synapse0x1dc4de0();
   input += synapse0x1dc4e20();
   input += synapse0x1dc5260();
   input += synapse0x1dc52a0();
   input += synapse0x1dc56e0();
   input += synapse0x1dc5720();
   input += synapse0x1dc5b60();
   input += synapse0x1dc5ba0();
   input += synapse0x1dc5fe0();
   input += synapse0x1dc6020();
   input += synapse0x1dbef90();
   input += synapse0x1dbefd0();
   input += synapse0x1dc4060();
   input += synapse0x1dc40a0();
   input += synapse0x1ccb0e0();
   input += synapse0x1ccb120();
   input += synapse0x1dc86f0();
   input += synapse0x1dc8730();
   input += synapse0x1dc8770();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc2a10() {
   double input = input0x1dc2a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc87b0() {
   double input = 0.395609;
   input += synapse0x1dc22b0();
   input += synapse0x1dc22f0();
   input += synapse0x1dc2330();
   input += synapse0x1dc2370();
   input += synapse0x1dc8d00();
   input += synapse0x1dc8d40();
   input += synapse0x1dc8d80();
   input += synapse0x1dc8dc0();
   input += synapse0x1dc8e00();
   input += synapse0x1dc8e40();
   input += synapse0x1dc8e80();
   input += synapse0x1dc8ec0();
   input += synapse0x1dc8f00();
   input += synapse0x1dc8f40();
   input += synapse0x1dc8f80();
   input += synapse0x1dc8fc0();
   input += synapse0x1dc8940();
   input += synapse0x1dc8980();
   input += synapse0x1dc9110();
   input += synapse0x1dc9150();
   input += synapse0x1dc9190();
   input += synapse0x1dc91d0();
   input += synapse0x1dc9210();
   input += synapse0x1dc9250();
   input += synapse0x1dc9290();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc87b0() {
   double input = input0x1dc87b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc92d0() {
   double input = -1.22723;
   input += synapse0x1dc9610();
   input += synapse0x1dc9650();
   input += synapse0x1dc9690();
   input += synapse0x1dc96d0();
   input += synapse0x1dc9710();
   input += synapse0x1dc9750();
   input += synapse0x1dc9790();
   input += synapse0x1dc97d0();
   input += synapse0x1dc9810();
   input += synapse0x1dc9850();
   input += synapse0x1dc9890();
   input += synapse0x1dc98d0();
   input += synapse0x1dc9910();
   input += synapse0x1dc9950();
   input += synapse0x1dc9990();
   input += synapse0x1dc99d0();
   input += synapse0x1dc9460();
   input += synapse0x1dc94a0();
   input += synapse0x1dc9b20();
   input += synapse0x1dc9b60();
   input += synapse0x1dc9ba0();
   input += synapse0x1dc9be0();
   input += synapse0x1dc9c20();
   input += synapse0x1dc9c60();
   input += synapse0x1dc9ca0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc92d0() {
   double input = input0x1dc92d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc9ce0() {
   double input = 0.381883;
   input += synapse0x1dca020();
   input += synapse0x1dca060();
   input += synapse0x1dca0a0();
   input += synapse0x1dca0e0();
   input += synapse0x1dca120();
   input += synapse0x1dca160();
   input += synapse0x1dca1a0();
   input += synapse0x1dca1e0();
   input += synapse0x1dca220();
   input += synapse0x1dca260();
   input += synapse0x1dca2a0();
   input += synapse0x1dca2e0();
   input += synapse0x1dca320();
   input += synapse0x1dca360();
   input += synapse0x1dca3a0();
   input += synapse0x1dca3e0();
   input += synapse0x1dc9e70();
   input += synapse0x1dc9eb0();
   input += synapse0x1dca530();
   input += synapse0x1dca570();
   input += synapse0x1dca5b0();
   input += synapse0x1dca5f0();
   input += synapse0x1dca630();
   input += synapse0x1dca670();
   input += synapse0x1dca6b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc9ce0() {
   double input = input0x1dc9ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dca6f0() {
   double input = 0.0692227;
   input += synapse0x1dcaa30();
   input += synapse0x1dcaa70();
   input += synapse0x1dcaab0();
   input += synapse0x1dcaaf0();
   input += synapse0x1dcab30();
   input += synapse0x1dcab70();
   input += synapse0x1dcabb0();
   input += synapse0x1dc7dd0();
   input += synapse0x1dc7e10();
   input += synapse0x1dc7e50();
   input += synapse0x1dc7e90();
   input += synapse0x1dc7ed0();
   input += synapse0x1dc7f10();
   input += synapse0x1dc7f50();
   input += synapse0x1dc7f90();
   input += synapse0x1dc7fd0();
   input += synapse0x1dca880();
   input += synapse0x1dca8c0();
   input += synapse0x1dc8120();
   input += synapse0x1dc8160();
   input += synapse0x1dc81a0();
   input += synapse0x1dc81e0();
   input += synapse0x1dc8220();
   input += synapse0x1dc8260();
   input += synapse0x1dc82a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dca6f0() {
   double input = input0x1dca6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dc82e0() {
   double input = 0.948451;
   input += synapse0x1dc8590();
   input += synapse0x1dcbc90();
   input += synapse0x1dcbcd0();
   input += synapse0x1dcbd10();
   input += synapse0x1dcbd50();
   input += synapse0x1dcbd90();
   input += synapse0x1dcbdd0();
   input += synapse0x1dcbe10();
   input += synapse0x1dcbe50();
   input += synapse0x1dcbe90();
   input += synapse0x1dcbed0();
   input += synapse0x1dcbf10();
   input += synapse0x1dcbf50();
   input += synapse0x1dcbf90();
   input += synapse0x1dcbfd0();
   input += synapse0x1dcc010();
   input += synapse0x1dc8470();
   input += synapse0x1dc84b0();
   input += synapse0x1dcc160();
   input += synapse0x1dcc1a0();
   input += synapse0x1dcc1e0();
   input += synapse0x1dcc220();
   input += synapse0x1dcc260();
   input += synapse0x1dcc2a0();
   input += synapse0x1dcc2e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dc82e0() {
   double input = input0x1dc82e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dcc320() {
   double input = 0.805692;
   input += synapse0x1dcc660();
   input += synapse0x1dcc6a0();
   input += synapse0x1dcc6e0();
   input += synapse0x1dcc720();
   input += synapse0x1dcc760();
   input += synapse0x1dcc7a0();
   input += synapse0x1dcc7e0();
   input += synapse0x1dcc820();
   input += synapse0x1dcc860();
   input += synapse0x1dcc8a0();
   input += synapse0x1dcc8e0();
   input += synapse0x1dcc920();
   input += synapse0x1dcc960();
   input += synapse0x1dcc9a0();
   input += synapse0x1dcc9e0();
   input += synapse0x1dcca20();
   input += synapse0x1dcc4b0();
   input += synapse0x1dcc4f0();
   input += synapse0x1dccb70();
   input += synapse0x1dccbb0();
   input += synapse0x1dccbf0();
   input += synapse0x1dccc30();
   input += synapse0x1dccc70();
   input += synapse0x1dcccb0();
   input += synapse0x1dcccf0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dcc320() {
   double input = input0x1dcc320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dccd30() {
   double input = 0.19389;
   input += synapse0x1dcd070();
   input += synapse0x1dcd0b0();
   input += synapse0x1dcd0f0();
   input += synapse0x1dcd130();
   input += synapse0x1dcd170();
   input += synapse0x1dcd1b0();
   input += synapse0x1dcd1f0();
   input += synapse0x1dcd230();
   input += synapse0x1dcd270();
   input += synapse0x1dcd2b0();
   input += synapse0x1dcd2f0();
   input += synapse0x1dcd330();
   input += synapse0x1dcd370();
   input += synapse0x1dcd3b0();
   input += synapse0x1dcd3f0();
   input += synapse0x1dcd430();
   input += synapse0x1dccec0();
   input += synapse0x1dccf00();
   input += synapse0x1dcd580();
   input += synapse0x1dcd5c0();
   input += synapse0x1dcd600();
   input += synapse0x1dcd640();
   input += synapse0x1dcd680();
   input += synapse0x1dcd6c0();
   input += synapse0x1dcd700();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dccd30() {
   double input = input0x1dccd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dcd740() {
   double input = -1.1103;
   input += synapse0x1dcda80();
   input += synapse0x1dcdac0();
   input += synapse0x1dcdb00();
   input += synapse0x1dcdb40();
   input += synapse0x1dcdb80();
   input += synapse0x1dcdbc0();
   input += synapse0x1dcdc00();
   input += synapse0x1dcdc40();
   input += synapse0x1dcdc80();
   input += synapse0x1dcdcc0();
   input += synapse0x1dcdd00();
   input += synapse0x1dcdd40();
   input += synapse0x1dcdd80();
   input += synapse0x1dcddc0();
   input += synapse0x1dcde00();
   input += synapse0x1dcde40();
   input += synapse0x1dcd8d0();
   input += synapse0x1dcd910();
   input += synapse0x1dcdf90();
   input += synapse0x1dcdfd0();
   input += synapse0x1dce010();
   input += synapse0x1dce050();
   input += synapse0x1dce090();
   input += synapse0x1dce0d0();
   input += synapse0x1dce110();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dcd740() {
   double input = input0x1dcd740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dce150() {
   double input = -0.232464;
   input += synapse0x1dce490();
   input += synapse0x1dce4d0();
   input += synapse0x1dce510();
   input += synapse0x1dce550();
   input += synapse0x1dce590();
   input += synapse0x1dce5d0();
   input += synapse0x1dce610();
   input += synapse0x1dce650();
   input += synapse0x1dce690();
   input += synapse0x1dce6d0();
   input += synapse0x1dce710();
   input += synapse0x1dce750();
   input += synapse0x1dce790();
   input += synapse0x1dce7d0();
   input += synapse0x1dce810();
   input += synapse0x1dce850();
   input += synapse0x1dce2e0();
   input += synapse0x1dce320();
   input += synapse0x1dce9a0();
   input += synapse0x1dce9e0();
   input += synapse0x1dcea20();
   input += synapse0x1dcea60();
   input += synapse0x1dceaa0();
   input += synapse0x1dceae0();
   input += synapse0x1dceb20();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dce150() {
   double input = input0x1dce150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dceb60() {
   double input = -0.183918;
   input += synapse0x1dceea0();
   input += synapse0x1dceee0();
   input += synapse0x1dcef20();
   input += synapse0x1dcef60();
   input += synapse0x1dcefa0();
   input += synapse0x1dcefe0();
   input += synapse0x1dcf020();
   input += synapse0x1dcf060();
   input += synapse0x1dcf0a0();
   input += synapse0x1dcf0e0();
   input += synapse0x1dcf120();
   input += synapse0x1dcf160();
   input += synapse0x1dcf1a0();
   input += synapse0x1dcf1e0();
   input += synapse0x1dcf220();
   input += synapse0x1dcf260();
   input += synapse0x1dcecf0();
   input += synapse0x1dced30();
   input += synapse0x1dcf3b0();
   input += synapse0x1dcf3f0();
   input += synapse0x1dcf430();
   input += synapse0x1dcf470();
   input += synapse0x1dcf4b0();
   input += synapse0x1dcf4f0();
   input += synapse0x1dcf530();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dceb60() {
   double input = input0x1dceb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dcf570() {
   double input = 0.0948847;
   input += synapse0x1dcf8b0();
   input += synapse0x1dcf8f0();
   input += synapse0x1dcf930();
   input += synapse0x1dcf970();
   input += synapse0x1dcf9b0();
   input += synapse0x1dcf9f0();
   input += synapse0x1dcfa30();
   input += synapse0x1dcfa70();
   input += synapse0x1dcfab0();
   input += synapse0x1dcfaf0();
   input += synapse0x1dcfb30();
   input += synapse0x1dcfb70();
   input += synapse0x1dcfbb0();
   input += synapse0x1dcfbf0();
   input += synapse0x1dcfc30();
   input += synapse0x1dcfc70();
   input += synapse0x1dcf700();
   input += synapse0x1dcf740();
   input += synapse0x1dcfdc0();
   input += synapse0x1dcfe00();
   input += synapse0x1dcfe40();
   input += synapse0x1dcfe80();
   input += synapse0x1dcfec0();
   input += synapse0x1dcff00();
   input += synapse0x1dcff40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dcf570() {
   double input = input0x1dcf570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dcff80() {
   double input = -1.1201;
   input += synapse0x1dd02c0();
   input += synapse0x1dd0300();
   input += synapse0x1dd0340();
   input += synapse0x1dd0380();
   input += synapse0x1dd03c0();
   input += synapse0x1dd0400();
   input += synapse0x1dd0440();
   input += synapse0x1dd0480();
   input += synapse0x1dd04c0();
   input += synapse0x1dd0500();
   input += synapse0x1dd0540();
   input += synapse0x1dd0580();
   input += synapse0x1dd05c0();
   input += synapse0x1dd0600();
   input += synapse0x1dd0640();
   input += synapse0x1dd0680();
   input += synapse0x1dd0110();
   input += synapse0x1dd0150();
   input += synapse0x1dd07d0();
   input += synapse0x1dd0810();
   input += synapse0x1dd0850();
   input += synapse0x1dd0890();
   input += synapse0x1dd08d0();
   input += synapse0x1dd0910();
   input += synapse0x1dd0950();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dcff80() {
   double input = input0x1dcff80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd0990() {
   double input = 0.946136;
   input += synapse0x1dd0cd0();
   input += synapse0x1dd0d10();
   input += synapse0x1dd0d50();
   input += synapse0x1dd0d90();
   input += synapse0x1dd0dd0();
   input += synapse0x1dd0e10();
   input += synapse0x1dd0e50();
   input += synapse0x1dd0e90();
   input += synapse0x1dd0ed0();
   input += synapse0x1dd0f10();
   input += synapse0x1dd0f50();
   input += synapse0x1dd0f90();
   input += synapse0x1dd0fd0();
   input += synapse0x1dd1010();
   input += synapse0x1dd1050();
   input += synapse0x1dd1090();
   input += synapse0x1dd0b20();
   input += synapse0x1dd0b60();
   input += synapse0x1dd11e0();
   input += synapse0x1dd1220();
   input += synapse0x1dd1260();
   input += synapse0x1dd12a0();
   input += synapse0x1dd12e0();
   input += synapse0x1dd1320();
   input += synapse0x1dd1360();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd0990() {
   double input = input0x1dd0990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd13a0() {
   double input = -0.432247;
   input += synapse0x1dd16e0();
   input += synapse0x1dbef00();
   input += synapse0x1dbef40();
   input += synapse0x1dbf300();
   input += synapse0x1dbf340();
   input += synapse0x1dbf780();
   input += synapse0x1dbf7c0();
   input += synapse0x1dbfc00();
   input += synapse0x1dbfc40();
   input += synapse0x1dc0110();
   input += synapse0x1dc0150();
   input += synapse0x1dc0590();
   input += synapse0x1dc05d0();
   input += synapse0x1dc0a10();
   input += synapse0x1dc0a50();
   input += synapse0x1dc0f90();
   input += synapse0x1dc0fd0();
   input += synapse0x1dc1410();
   input += synapse0x1dc1450();
   input += synapse0x1dc1890();
   input += synapse0x1dc18d0();
   input += synapse0x1dc1d10();
   input += synapse0x1dc1d50();
   input += synapse0x1dc2190();
   input += synapse0x1dc21d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd13a0() {
   double input = input0x1dd13a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dcb9c0() {
   double input = 0.425583;
   input += synapse0x1dcbb50();
   input += synapse0x1dcbb90();
   input += synapse0x1dc3430();
   input += synapse0x1dc3470();
   input += synapse0x1dd1530();
   input += synapse0x1dd1570();
   input += synapse0x1dbe7e0();
   input += synapse0x1dbe820();
   input += synapse0x1dc3fd0();
   input += synapse0x1dc4010();
   input += synapse0x1dc4450();
   input += synapse0x1dc4490();
   input += synapse0x1dc48d0();
   input += synapse0x1dc4910();
   input += synapse0x1dc4d50();
   input += synapse0x1dc4d90();
   input += synapse0x1dc51d0();
   input += synapse0x1dc5210();
   input += synapse0x1dc5650();
   input += synapse0x1dc5690();
   input += synapse0x1dc5ad0();
   input += synapse0x1dc5b10();
   input += synapse0x1dc5f50();
   input += synapse0x1dc5f90();
   input += synapse0x1dc26a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dcb9c0() {
   double input = input0x1dcb9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd4610() {
   double input = 0.489099;
   input += synapse0x1dc26e0();
   input += synapse0x1dd4950();
   input += synapse0x1dd4990();
   input += synapse0x1dd49d0();
   input += synapse0x1dd4a10();
   input += synapse0x1dd4a50();
   input += synapse0x1dd4a90();
   input += synapse0x1dd4ad0();
   input += synapse0x1dd4b10();
   input += synapse0x1dd4b50();
   input += synapse0x1dd4b90();
   input += synapse0x1dd4bd0();
   input += synapse0x1dd4c10();
   input += synapse0x1dd4c50();
   input += synapse0x1dd4c90();
   input += synapse0x1dd4cd0();
   input += synapse0x1dd47a0();
   input += synapse0x1dd47e0();
   input += synapse0x1dd4e20();
   input += synapse0x1dd4e60();
   input += synapse0x1dd4ea0();
   input += synapse0x1dd4ee0();
   input += synapse0x1dd4f20();
   input += synapse0x1dd4f60();
   input += synapse0x1dd4fa0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd4610() {
   double input = input0x1dd4610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd4fe0() {
   double input = -0.608248;
   input += synapse0x1dd5320();
   input += synapse0x1dd5360();
   input += synapse0x1dd53a0();
   input += synapse0x1dd53e0();
   input += synapse0x1dd5420();
   input += synapse0x1dd5460();
   input += synapse0x1dd54a0();
   input += synapse0x1dd54e0();
   input += synapse0x1dd5520();
   input += synapse0x1dd5560();
   input += synapse0x1dd55a0();
   input += synapse0x1dd55e0();
   input += synapse0x1dd5620();
   input += synapse0x1dd5660();
   input += synapse0x1dd56a0();
   input += synapse0x1dd56e0();
   input += synapse0x1dd5170();
   input += synapse0x1dd51b0();
   input += synapse0x1dd5830();
   input += synapse0x1dd5870();
   input += synapse0x1dd58b0();
   input += synapse0x1dd58f0();
   input += synapse0x1dd5930();
   input += synapse0x1dd5970();
   input += synapse0x1dd59b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd4fe0() {
   double input = input0x1dd4fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd59f0() {
   double input = -0.442;
   input += synapse0x1dd5d30();
   input += synapse0x1dd5d70();
   input += synapse0x1dd5db0();
   input += synapse0x1dd5df0();
   input += synapse0x1dd5e30();
   input += synapse0x1dd5e70();
   input += synapse0x1dd5eb0();
   input += synapse0x1dd5ef0();
   input += synapse0x1dd5f30();
   input += synapse0x1dd5f70();
   input += synapse0x1dd5fb0();
   input += synapse0x1dd5ff0();
   input += synapse0x1dd6030();
   input += synapse0x1dd6070();
   input += synapse0x1dd60b0();
   input += synapse0x1dd60f0();
   input += synapse0x1dd5b80();
   input += synapse0x1dd5bc0();
   input += synapse0x1dd6240();
   input += synapse0x1dd6280();
   input += synapse0x1dd62c0();
   input += synapse0x1dd6300();
   input += synapse0x1dd6340();
   input += synapse0x1dd6380();
   input += synapse0x1dd63c0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd59f0() {
   double input = input0x1dd59f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd6400() {
   double input = -0.242395;
   input += synapse0x1dd6740();
   input += synapse0x1dd6780();
   input += synapse0x1dd67c0();
   input += synapse0x1dd6800();
   input += synapse0x1dd6840();
   input += synapse0x1dd6880();
   input += synapse0x1dd68c0();
   input += synapse0x1dd6900();
   input += synapse0x1dd6940();
   input += synapse0x1dd6980();
   input += synapse0x1dd69c0();
   input += synapse0x1dd6a00();
   input += synapse0x1dd6a40();
   input += synapse0x1dd6a80();
   input += synapse0x1dd6ac0();
   input += synapse0x1dd6b00();
   input += synapse0x1dd6590();
   input += synapse0x1dd65d0();
   input += synapse0x1dd6c50();
   input += synapse0x1dd6c90();
   input += synapse0x1dd6cd0();
   input += synapse0x1dd6d10();
   input += synapse0x1dd6d50();
   input += synapse0x1dd6d90();
   input += synapse0x1dd6dd0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd6400() {
   double input = input0x1dd6400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd6e10() {
   double input = -1.61301;
   input += synapse0x1dd7150();
   input += synapse0x1dd7190();
   input += synapse0x1dd71d0();
   input += synapse0x1dd7210();
   input += synapse0x1dd7250();
   input += synapse0x1dd7290();
   input += synapse0x1dd72d0();
   input += synapse0x1dd7310();
   input += synapse0x1dd7350();
   input += synapse0x1dd7390();
   input += synapse0x1dd73d0();
   input += synapse0x1dd7410();
   input += synapse0x1dd7450();
   input += synapse0x1dd7490();
   input += synapse0x1dd74d0();
   input += synapse0x1dd7510();
   input += synapse0x1dd6fa0();
   input += synapse0x1dd6fe0();
   input += synapse0x1dd7660();
   input += synapse0x1dd76a0();
   input += synapse0x1dd76e0();
   input += synapse0x1dd7720();
   input += synapse0x1dd7760();
   input += synapse0x1dd77a0();
   input += synapse0x1dd77e0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd6e10() {
   double input = input0x1dd6e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd7820() {
   double input = 0.285338;
   input += synapse0x1dd7b60();
   input += synapse0x1dd7ba0();
   input += synapse0x1dd7be0();
   input += synapse0x1dd7c20();
   input += synapse0x1dd7c60();
   input += synapse0x1dd7ca0();
   input += synapse0x1dd7ce0();
   input += synapse0x1dd7d20();
   input += synapse0x1dd7d60();
   input += synapse0x1dd7da0();
   input += synapse0x1dd7de0();
   input += synapse0x1dd7e20();
   input += synapse0x1dd7e60();
   input += synapse0x1dd7ea0();
   input += synapse0x1dd7ee0();
   input += synapse0x1dd7f20();
   input += synapse0x1dd79b0();
   input += synapse0x1dd79f0();
   input += synapse0x1dd8070();
   input += synapse0x1dd80b0();
   input += synapse0x1dd80f0();
   input += synapse0x1dd8130();
   input += synapse0x1dd8170();
   input += synapse0x1dd81b0();
   input += synapse0x1dd81f0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd7820() {
   double input = input0x1dd7820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd8230() {
   double input = -0.262569;
   input += synapse0x1dd8570();
   input += synapse0x1dd85b0();
   input += synapse0x1dd85f0();
   input += synapse0x1dd8630();
   input += synapse0x1dd8670();
   input += synapse0x1dd86b0();
   input += synapse0x1dd86f0();
   input += synapse0x1dd8730();
   input += synapse0x1dd8770();
   input += synapse0x1dd87b0();
   input += synapse0x1dd87f0();
   input += synapse0x1dd8830();
   input += synapse0x1dd8870();
   input += synapse0x1dd88b0();
   input += synapse0x1dd88f0();
   input += synapse0x1dd8930();
   input += synapse0x1dd83c0();
   input += synapse0x1dd8400();
   input += synapse0x1dd8a80();
   input += synapse0x1dd8ac0();
   input += synapse0x1dd8b00();
   input += synapse0x1dd8b40();
   input += synapse0x1dd8b80();
   input += synapse0x1dd8bc0();
   input += synapse0x1dd8c00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd8230() {
   double input = input0x1dd8230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd8c40() {
   double input = -0.159951;
   input += synapse0x1dd8f80();
   input += synapse0x1dd8fc0();
   input += synapse0x1dd9000();
   input += synapse0x1dd9040();
   input += synapse0x1dd9080();
   input += synapse0x1dd90c0();
   input += synapse0x1dd9100();
   input += synapse0x1dd9140();
   input += synapse0x1dd9180();
   input += synapse0x1dd91c0();
   input += synapse0x1dd9200();
   input += synapse0x1dd9240();
   input += synapse0x1dd9280();
   input += synapse0x1dd92c0();
   input += synapse0x1dd9300();
   input += synapse0x1dd9340();
   input += synapse0x1dd8dd0();
   input += synapse0x1dd8e10();
   input += synapse0x1dd9490();
   input += synapse0x1dd94d0();
   input += synapse0x1dd9510();
   input += synapse0x1dd9550();
   input += synapse0x1dd9590();
   input += synapse0x1dd95d0();
   input += synapse0x1dd9610();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd8c40() {
   double input = input0x1dd8c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight::input0x1dd9650() {
   double input = 2.67625;
   input += synapse0x1dd9870();
   input += synapse0x1dd98b0();
   input += synapse0x1dd98f0();
   input += synapse0x1dd9930();
   input += synapse0x1dd9970();
   input += synapse0x1dd99b0();
   input += synapse0x1dd99f0();
   input += synapse0x1dd9a30();
   input += synapse0x1dd9a70();
   input += synapse0x1dd9ab0();
   input += synapse0x1dd9af0();
   input += synapse0x1dd9b30();
   input += synapse0x1dd9b70();
   input += synapse0x1dd9bb0();
   input += synapse0x1dd9bf0();
   input += synapse0x1dd9c30();
   input += synapse0x1dbec40();
   input += synapse0x1dbec80();
   input += synapse0x1dd9d80();
   input += synapse0x1dd9dc0();
   input += synapse0x1dd9e00();
   input += synapse0x1dd9e40();
   input += synapse0x1dd9e80();
   input += synapse0x1dd9ec0();
   input += synapse0x1dd9f00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight::neuron0x1dd9650() {
   double input = input0x1dd9650();
   return (input * 4.06196)+130.865;
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1ccb010() {
   return (neuron0x1dbdc00()*0.0700244);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dad070() {
   return (neuron0x1dbdf40()*0.166846);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf020() {
   return (neuron0x1dbe280()*0.0470291);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf060() {
   return (neuron0x1dbe5c0()*2.86756);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf0a0() {
   return (neuron0x1dbe900()*0.711215);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf420() {
   return (neuron0x1dbdc00()*-0.332997);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf460() {
   return (neuron0x1dbdf40()*-0.0333742);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf4a0() {
   return (neuron0x1dbe280()*-0.027323);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf4e0() {
   return (neuron0x1dbe5c0()*0.416174);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf520() {
   return (neuron0x1dbe900()*-0.794276);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf8a0() {
   return (neuron0x1dbdc00()*-0.848584);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf8e0() {
   return (neuron0x1dbdf40()*0.676896);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf920() {
   return (neuron0x1dbe280()*0.000834253);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf960() {
   return (neuron0x1dbe5c0()*-6.15702);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf9a0() {
   return (neuron0x1dbe900()*-6.11289);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfd20() {
   return (neuron0x1dbdc00()*0.748648);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfd60() {
   return (neuron0x1dbdf40()*-0.308674);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1cbd200() {
   return (neuron0x1dbe280()*0.000279493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1cbd240() {
   return (neuron0x1dbe5c0()*-6.65148);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfeb0() {
   return (neuron0x1dbe900()*-1.96949);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0230() {
   return (neuron0x1dbdc00()*-0.615909);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0270() {
   return (neuron0x1dbdf40()*0.317184);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc02b0() {
   return (neuron0x1dbe280()*0.226988);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc02f0() {
   return (neuron0x1dbe5c0()*-2.47631);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0330() {
   return (neuron0x1dbe900()*-0.702098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc06b0() {
   return (neuron0x1dbdc00()*2.93416);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc06f0() {
   return (neuron0x1dbdf40()*-0.751451);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0730() {
   return (neuron0x1dbe280()*-2.03998);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0770() {
   return (neuron0x1dbe5c0()*0.488217);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc07b0() {
   return (neuron0x1dbe900()*-0.132197);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0b30() {
   return (neuron0x1dbdc00()*1.98491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0b70() {
   return (neuron0x1dbdf40()*-1.02158);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0bb0() {
   return (neuron0x1dbe280()*-0.0239167);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfda0() {
   return (neuron0x1dbe5c0()*-3.92863);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfde0() {
   return (neuron0x1dbe900()*1.07223);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc10b0() {
   return (neuron0x1dbdc00()*0.336947);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc10f0() {
   return (neuron0x1dbdf40()*-0.549231);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1130() {
   return (neuron0x1dbe280()*-0.532395);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1170() {
   return (neuron0x1dbe5c0()*2.8701);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc11b0() {
   return (neuron0x1dbe900()*0.314408);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1530() {
   return (neuron0x1dbdc00()*4.02424);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1570() {
   return (neuron0x1dbdf40()*-2.09589);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc15b0() {
   return (neuron0x1dbe280()*0.0322248);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc15f0() {
   return (neuron0x1dbe5c0()*-10.2684);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1630() {
   return (neuron0x1dbe900()*0.31366);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc19b0() {
   return (neuron0x1dbdc00()*0.117165);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc19f0() {
   return (neuron0x1dbdf40()*-0.253606);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1a30() {
   return (neuron0x1dbe280()*0.000980132);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1a70() {
   return (neuron0x1dbe5c0()*6.34531);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1ab0() {
   return (neuron0x1dbe900()*2.56237);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1e30() {
   return (neuron0x1dbdc00()*-0.200237);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1e70() {
   return (neuron0x1dbdf40()*0.251428);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1eb0() {
   return (neuron0x1dbe280()*-0.014546);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1ef0() {
   return (neuron0x1dbe5c0()*-4.42611);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1f30() {
   return (neuron0x1dbe900()*-3.53079);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1cbd050() {
   return (neuron0x1dbdc00()*0.0218493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1cbd090() {
   return (neuron0x1dbdf40()*-0.235958);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc23c0() {
   return (neuron0x1dbe280()*-0.0169788);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2400() {
   return (neuron0x1dbe5c0()*16.6959);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2440() {
   return (neuron0x1dbe900()*7.49812);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc27c0() {
   return (neuron0x1dbdc00()*-0.652277);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2800() {
   return (neuron0x1dbdf40()*-0.862119);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2840() {
   return (neuron0x1dbe280()*0.129444);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2880() {
   return (neuron0x1dbe5c0()*-2.3767);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc28c0() {
   return (neuron0x1dbe900()*-1.16337);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1cbd820() {
   return (neuron0x1dbdc00()*1.24432);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0d80() {
   return (neuron0x1dbdf40()*-0.651116);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0dc0() {
   return (neuron0x1dbe280()*0.0138065);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2d10() {
   return (neuron0x1dbe5c0()*-4.35382);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2d50() {
   return (neuron0x1dbe900()*0.449976);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc30d0() {
   return (neuron0x1dbdc00()*4.60695);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3110() {
   return (neuron0x1dbdf40()*-7.49843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3150() {
   return (neuron0x1dbe280()*-0.337927);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3190() {
   return (neuron0x1dbe5c0()*-8.62178);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc31d0() {
   return (neuron0x1dbe900()*3.70542);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3550() {
   return (neuron0x1dbdc00()*-4.32986);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbde20() {
   return (neuron0x1dbdf40()*-0.967876);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbde60() {
   return (neuron0x1dbe280()*-0.208698);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbe160() {
   return (neuron0x1dbe5c0()*-4.67538);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbe1a0() {
   return (neuron0x1dbe900()*-2.59565);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3c70() {
   return (neuron0x1dbdc00()*0.549796);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3cb0() {
   return (neuron0x1dbdf40()*-0.0271853);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3cf0() {
   return (neuron0x1dbe280()*-0.0188352);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3d30() {
   return (neuron0x1dbe5c0()*-0.707618);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3d70() {
   return (neuron0x1dbe900()*-0.120715);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc40f0() {
   return (neuron0x1dbdc00()*-5.10358);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4130() {
   return (neuron0x1dbdf40()*1.08605);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4170() {
   return (neuron0x1dbe280()*2.53829);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc41b0() {
   return (neuron0x1dbe5c0()*-2.52175);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc41f0() {
   return (neuron0x1dbe900()*1.41491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4570() {
   return (neuron0x1dbdc00()*0.875043);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc45b0() {
   return (neuron0x1dbdf40()*-0.513953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc45f0() {
   return (neuron0x1dbe280()*-0.0123791);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4630() {
   return (neuron0x1dbe5c0()*-5.51506);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4670() {
   return (neuron0x1dbe900()*-0.646443);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc49f0() {
   return (neuron0x1dbdc00()*-3.91309);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4a30() {
   return (neuron0x1dbdf40()*1.12038);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4a70() {
   return (neuron0x1dbe280()*2.43947);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4ab0() {
   return (neuron0x1dbe5c0()*-2.49594);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4af0() {
   return (neuron0x1dbe900()*1.55307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4e70() {
   return (neuron0x1dbdc00()*0.828887);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4eb0() {
   return (neuron0x1dbdf40()*0.127707);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4ef0() {
   return (neuron0x1dbe280()*-0.170479);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4f30() {
   return (neuron0x1dbe5c0()*4.21763);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4f70() {
   return (neuron0x1dbe900()*2.47515);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc52f0() {
   return (neuron0x1dbdc00()*0.107941);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5330() {
   return (neuron0x1dbdf40()*-0.104192);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5370() {
   return (neuron0x1dbe280()*-0.0397387);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc53b0() {
   return (neuron0x1dbe5c0()*-0.60701);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc53f0() {
   return (neuron0x1dbe900()*-0.479137);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5770() {
   return (neuron0x1dbdc00()*-0.393424);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc57b0() {
   return (neuron0x1dbdf40()*-0.313444);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc57f0() {
   return (neuron0x1dbe280()*0.0201172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5830() {
   return (neuron0x1dbe5c0()*3.80815);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5870() {
   return (neuron0x1dbe900()*1.70648);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5bf0() {
   return (neuron0x1dbdc00()*-0.101363);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5c30() {
   return (neuron0x1dbdf40()*0.204244);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5c70() {
   return (neuron0x1dbe280()*-0.0188093);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5cb0() {
   return (neuron0x1dbe5c0()*-2.99598);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5cf0() {
   return (neuron0x1dbe900()*-3.60005);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc6070() {
   return (neuron0x1dbdc00()*4.26956);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc60b0() {
   return (neuron0x1dbdf40()*-0.702572);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc60f0() {
   return (neuron0x1dbe280()*-1.10194);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc6130() {
   return (neuron0x1dbe5c0()*2.87003);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc6170() {
   return (neuron0x1dbe900()*0.0838549);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfc90() {
   return (neuron0x1dbed70()*-0.308673);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfcd0() {
   return (neuron0x1dbf0e0()*0.784214);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc01a0() {
   return (neuron0x1dbf560()*0.130047);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc01e0() {
   return (neuron0x1dbf9e0()*0.863677);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0620() {
   return (neuron0x1dbfef0()*0.098319);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0660() {
   return (neuron0x1dc0370()*0.23912);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0aa0() {
   return (neuron0x1dc07f0()*0.177571);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0ae0() {
   return (neuron0x1dc0e00()*-0.65899);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1020() {
   return (neuron0x1dc11f0()*0.745163);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1060() {
   return (neuron0x1dc1670()*-0.438713);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc14a0() {
   return (neuron0x1dc1af0()*-0.285645);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc14e0() {
   return (neuron0x1dc1f70()*-0.170313);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1920() {
   return (neuron0x1dc2480()*0.264896);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1960() {
   return (neuron0x1dc0bf0()*0.253906);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1da0() {
   return (neuron0x1dc2d90()*0.262522);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1de0() {
   return (neuron0x1dc3210()*0.630664);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2220() {
   return (neuron0x1dc3ae0()*-0.547841);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2260() {
   return (neuron0x1dc3db0()*0.689732);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2730() {
   return (neuron0x1dc4230()*0.334485);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2770() {
   return (neuron0x1dc46b0()*0.109074);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3040() {
   return (neuron0x1dc4b30()*-0.198277);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3080() {
   return (neuron0x1dc4fb0()*-0.281331);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc34c0() {
   return (neuron0x1dc5430()*-0.687039);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3500() {
   return (neuron0x1dc58b0()*0.87359);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbeb20() {
   return (neuron0x1dc5d30()*0.439256);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2ba0() {
   return (neuron0x1dbed70()*0.779282);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2be0() {
   return (neuron0x1dbf0e0()*-0.659031);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2c20() {
   return (neuron0x1dbf560()*-0.604966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2c60() {
   return (neuron0x1dbf9e0()*-1.87941);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2ca0() {
   return (neuron0x1dbfef0()*-2.29085);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbeb60() {
   return (neuron0x1dc0370()*0.402735);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4de0() {
   return (neuron0x1dc07f0()*-0.731803);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4e20() {
   return (neuron0x1dc0e00()*2.16424);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5260() {
   return (neuron0x1dc11f0()*-0.750336);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc52a0() {
   return (neuron0x1dc1670()*1.16352);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc56e0() {
   return (neuron0x1dc1af0()*1.36334);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5720() {
   return (neuron0x1dc1f70()*0.815653);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5b60() {
   return (neuron0x1dc2480()*-0.619294);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5ba0() {
   return (neuron0x1dc0bf0()*-1.11993);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5fe0() {
   return (neuron0x1dc2d90()*-0.857249);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc6020() {
   return (neuron0x1dc3210()*-0.353256);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbef90() {
   return (neuron0x1dc3ae0()*0.46826);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbefd0() {
   return (neuron0x1dc3db0()*-0.322755);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4060() {
   return (neuron0x1dc4230()*-0.471357);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc40a0() {
   return (neuron0x1dc46b0()*-0.486533);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1ccb0e0() {
   return (neuron0x1dc4b30()*1.60131);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1ccb120() {
   return (neuron0x1dc4fb0()*0.510559);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc86f0() {
   return (neuron0x1dc5430()*0.517462);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8730() {
   return (neuron0x1dc58b0()*-0.864158);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8770() {
   return (neuron0x1dc5d30()*0.154065);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc22b0() {
   return (neuron0x1dbed70()*-0.555835);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc22f0() {
   return (neuron0x1dbf0e0()*2.26003);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2330() {
   return (neuron0x1dbf560()*-0.160417);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2370() {
   return (neuron0x1dbf9e0()*1.04676);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8d00() {
   return (neuron0x1dbfef0()*0.865427);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8d40() {
   return (neuron0x1dc0370()*0.180181);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8d80() {
   return (neuron0x1dc07f0()*-0.117259);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8dc0() {
   return (neuron0x1dc0e00()*-0.501758);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8e00() {
   return (neuron0x1dc11f0()*0.00367855);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8e40() {
   return (neuron0x1dc1670()*-0.920712);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8e80() {
   return (neuron0x1dc1af0()*1.07583);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8ec0() {
   return (neuron0x1dc1f70()*-4.18383);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8f00() {
   return (neuron0x1dc2480()*0.900325);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8f40() {
   return (neuron0x1dc0bf0()*1.16396);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8f80() {
   return (neuron0x1dc2d90()*-3.14029);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8fc0() {
   return (neuron0x1dc3210()*0.353982);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8940() {
   return (neuron0x1dc3ae0()*-0.351851);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8980() {
   return (neuron0x1dc3db0()*1.09301);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9110() {
   return (neuron0x1dc4230()*0.719973);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9150() {
   return (neuron0x1dc46b0()*0.739724);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9190() {
   return (neuron0x1dc4b30()*0.184476);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc91d0() {
   return (neuron0x1dc4fb0()*-0.186283);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9210() {
   return (neuron0x1dc5430()*0.17832);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9250() {
   return (neuron0x1dc58b0()*1.8934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9290() {
   return (neuron0x1dc5d30()*-0.0847797);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9610() {
   return (neuron0x1dbed70()*-1.47305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9650() {
   return (neuron0x1dbf0e0()*-0.186345);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9690() {
   return (neuron0x1dbf560()*-0.286039);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc96d0() {
   return (neuron0x1dbf9e0()*0.567068);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9710() {
   return (neuron0x1dbfef0()*0.753803);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9750() {
   return (neuron0x1dc0370()*-0.416949);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9790() {
   return (neuron0x1dc07f0()*0.0136108);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc97d0() {
   return (neuron0x1dc0e00()*-2.36455);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9810() {
   return (neuron0x1dc11f0()*-0.00618582);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9850() {
   return (neuron0x1dc1670()*-2.41067);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9890() {
   return (neuron0x1dc1af0()*-1.0239);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc98d0() {
   return (neuron0x1dc1f70()*-1.3824);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9910() {
   return (neuron0x1dc2480()*-1.11977);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9950() {
   return (neuron0x1dc0bf0()*0.277724);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9990() {
   return (neuron0x1dc2d90()*0.319496);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc99d0() {
   return (neuron0x1dc3210()*-0.474953);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9460() {
   return (neuron0x1dc3ae0()*-1.31375);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc94a0() {
   return (neuron0x1dc3db0()*-0.707899);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9b20() {
   return (neuron0x1dc4230()*-0.622512);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9b60() {
   return (neuron0x1dc46b0()*-0.320075);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9ba0() {
   return (neuron0x1dc4b30()*-1.73867);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9be0() {
   return (neuron0x1dc4fb0()*-0.429547);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9c20() {
   return (neuron0x1dc5430()*-0.836951);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9c60() {
   return (neuron0x1dc58b0()*-0.121088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9ca0() {
   return (neuron0x1dc5d30()*-0.139225);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca020() {
   return (neuron0x1dbed70()*1.18697);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca060() {
   return (neuron0x1dbf0e0()*-0.0148633);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca0a0() {
   return (neuron0x1dbf560()*-1.76714);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca0e0() {
   return (neuron0x1dbf9e0()*-1.52538);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca120() {
   return (neuron0x1dbfef0()*-2.28385);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca160() {
   return (neuron0x1dc0370()*-0.0665901);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca1a0() {
   return (neuron0x1dc07f0()*-0.77083);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca1e0() {
   return (neuron0x1dc0e00()*1.87371);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca220() {
   return (neuron0x1dc11f0()*0.830988);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca260() {
   return (neuron0x1dc1670()*0.937331);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca2a0() {
   return (neuron0x1dc1af0()*1.23537);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca2e0() {
   return (neuron0x1dc1f70()*1.72543);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca320() {
   return (neuron0x1dc2480()*-0.252995);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca360() {
   return (neuron0x1dc0bf0()*-1.39436);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca3a0() {
   return (neuron0x1dc2d90()*-1.9764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca3e0() {
   return (neuron0x1dc3210()*-1.21796);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9e70() {
   return (neuron0x1dc3ae0()*0.711616);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc9eb0() {
   return (neuron0x1dc3db0()*-0.715425);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca530() {
   return (neuron0x1dc4230()*-0.773736);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca570() {
   return (neuron0x1dc46b0()*-0.224313);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca5b0() {
   return (neuron0x1dc4b30()*1.34893);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca5f0() {
   return (neuron0x1dc4fb0()*0.0460824);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca630() {
   return (neuron0x1dc5430()*0.0989331);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca670() {
   return (neuron0x1dc58b0()*-1.31431);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca6b0() {
   return (neuron0x1dc5d30()*-0.306393);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcaa30() {
   return (neuron0x1dbed70()*1.01873);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcaa70() {
   return (neuron0x1dbf0e0()*-0.505826);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcaab0() {
   return (neuron0x1dbf560()*-0.489864);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcaaf0() {
   return (neuron0x1dbf9e0()*-0.808422);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcab30() {
   return (neuron0x1dbfef0()*-1.17625);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcab70() {
   return (neuron0x1dc0370()*-0.0870735);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcabb0() {
   return (neuron0x1dc07f0()*-0.242099);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7dd0() {
   return (neuron0x1dc0e00()*1.53942);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7e10() {
   return (neuron0x1dc11f0()*-0.852705);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7e50() {
   return (neuron0x1dc1670()*0.544348);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7e90() {
   return (neuron0x1dc1af0()*1.34232);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7ed0() {
   return (neuron0x1dc1f70()*0.302901);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7f10() {
   return (neuron0x1dc2480()*-0.378263);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7f50() {
   return (neuron0x1dc0bf0()*-0.570843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7f90() {
   return (neuron0x1dc2d90()*-0.350608);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc7fd0() {
   return (neuron0x1dc3210()*-0.464248);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca880() {
   return (neuron0x1dc3ae0()*0.336757);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dca8c0() {
   return (neuron0x1dc3db0()*-0.868335);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8120() {
   return (neuron0x1dc4230()*-0.736676);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8160() {
   return (neuron0x1dc46b0()*0.131049);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc81a0() {
   return (neuron0x1dc4b30()*0.672098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc81e0() {
   return (neuron0x1dc4fb0()*0.108686);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8220() {
   return (neuron0x1dc5430()*0.16091);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8260() {
   return (neuron0x1dc58b0()*-0.768019);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc82a0() {
   return (neuron0x1dc5d30()*0.182179);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8590() {
   return (neuron0x1dbed70()*1.7493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbc90() {
   return (neuron0x1dbf0e0()*-0.681097);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbcd0() {
   return (neuron0x1dbf560()*-3.27147);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbd10() {
   return (neuron0x1dbf9e0()*-1.63286);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbd50() {
   return (neuron0x1dbfef0()*-1.96012);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbd90() {
   return (neuron0x1dc0370()*0.190554);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbdd0() {
   return (neuron0x1dc07f0()*-2.3527);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbe10() {
   return (neuron0x1dc0e00()*2.2014);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbe50() {
   return (neuron0x1dc11f0()*-1.9934);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbe90() {
   return (neuron0x1dc1670()*3.27881);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbed0() {
   return (neuron0x1dc1af0()*0.331011);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbf10() {
   return (neuron0x1dc1f70()*5.65472);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbf50() {
   return (neuron0x1dc2480()*-0.486519);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbf90() {
   return (neuron0x1dc0bf0()*-0.35252);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbfd0() {
   return (neuron0x1dc2d90()*-1.88659);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc010() {
   return (neuron0x1dc3210()*-1.10342);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc8470() {
   return (neuron0x1dc3ae0()*0.715778);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc84b0() {
   return (neuron0x1dc3db0()*-0.11093);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc160() {
   return (neuron0x1dc4230()*0.897686);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc1a0() {
   return (neuron0x1dc46b0()*-0.406468);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc1e0() {
   return (neuron0x1dc4b30()*1.45679);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc220() {
   return (neuron0x1dc4fb0()*0.780185);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc260() {
   return (neuron0x1dc5430()*0.700726);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc2a0() {
   return (neuron0x1dc58b0()*-2.06577);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc2e0() {
   return (neuron0x1dc5d30()*-0.366017);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc660() {
   return (neuron0x1dbed70()*0.645531);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc6a0() {
   return (neuron0x1dbf0e0()*0.636616);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc6e0() {
   return (neuron0x1dbf560()*0.466439);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc720() {
   return (neuron0x1dbf9e0()*0.25701);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc760() {
   return (neuron0x1dbfef0()*-0.254271);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc7a0() {
   return (neuron0x1dc0370()*0.0868229);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc7e0() {
   return (neuron0x1dc07f0()*0.372591);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc820() {
   return (neuron0x1dc0e00()*0.675942);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc860() {
   return (neuron0x1dc11f0()*0.418751);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc8a0() {
   return (neuron0x1dc1670()*0.297363);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc8e0() {
   return (neuron0x1dc1af0()*0.571554);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc920() {
   return (neuron0x1dc1f70()*0.0515278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc960() {
   return (neuron0x1dc2480()*0.576105);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc9a0() {
   return (neuron0x1dc0bf0()*0.345159);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc9e0() {
   return (neuron0x1dc2d90()*0.346762);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcca20() {
   return (neuron0x1dc3210()*-0.144059);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc4b0() {
   return (neuron0x1dc3ae0()*0.0994507);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcc4f0() {
   return (neuron0x1dc3db0()*0.0702799);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccb70() {
   return (neuron0x1dc4230()*0.45438);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccbb0() {
   return (neuron0x1dc46b0()*0.33984);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccbf0() {
   return (neuron0x1dc4b30()*0.554766);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccc30() {
   return (neuron0x1dc4fb0()*0.487966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccc70() {
   return (neuron0x1dc5430()*0.303181);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcccb0() {
   return (neuron0x1dc58b0()*0.351434);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcccf0() {
   return (neuron0x1dc5d30()*0.268773);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd070() {
   return (neuron0x1dbed70()*-0.285467);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd0b0() {
   return (neuron0x1dbf0e0()*-0.389841);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd0f0() {
   return (neuron0x1dbf560()*-0.462626);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd130() {
   return (neuron0x1dbf9e0()*0.0384654);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd170() {
   return (neuron0x1dbfef0()*0.0315687);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd1b0() {
   return (neuron0x1dc0370()*-0.351431);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd1f0() {
   return (neuron0x1dc07f0()*0.29465);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd230() {
   return (neuron0x1dc0e00()*-0.5697);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd270() {
   return (neuron0x1dc11f0()*1.07249);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd2b0() {
   return (neuron0x1dc1670()*-0.132389);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd2f0() {
   return (neuron0x1dc1af0()*0.556697);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd330() {
   return (neuron0x1dc1f70()*-1.86637);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd370() {
   return (neuron0x1dc2480()*-0.336456);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd3b0() {
   return (neuron0x1dc0bf0()*0.510994);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd3f0() {
   return (neuron0x1dc2d90()*0.805355);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd430() {
   return (neuron0x1dc3210()*-0.137738);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccec0() {
   return (neuron0x1dc3ae0()*0.124579);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dccf00() {
   return (neuron0x1dc3db0()*-0.00224636);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd580() {
   return (neuron0x1dc4230()*0.595461);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd5c0() {
   return (neuron0x1dc46b0()*-0.375952);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd600() {
   return (neuron0x1dc4b30()*-0.254834);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd640() {
   return (neuron0x1dc4fb0()*-0.0865833);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd680() {
   return (neuron0x1dc5430()*-0.446431);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd6c0() {
   return (neuron0x1dc58b0()*0.543587);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd700() {
   return (neuron0x1dc5d30()*-0.0864684);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcda80() {
   return (neuron0x1dbed70()*2.27309);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdac0() {
   return (neuron0x1dbf0e0()*-0.63809);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdb00() {
   return (neuron0x1dbf560()*-4.61521);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdb40() {
   return (neuron0x1dbf9e0()*-0.595098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdb80() {
   return (neuron0x1dbfef0()*-0.19783);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdbc0() {
   return (neuron0x1dc0370()*-0.0810171);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdc00() {
   return (neuron0x1dc07f0()*0.134702);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdc40() {
   return (neuron0x1dc0e00()*-0.973507);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdc80() {
   return (neuron0x1dc11f0()*-6.09124);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdcc0() {
   return (neuron0x1dc1670()*6.59615);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdd00() {
   return (neuron0x1dc1af0()*-8.63373);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdd40() {
   return (neuron0x1dc1f70()*23.105);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdd80() {
   return (neuron0x1dc2480()*-1.1116);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcddc0() {
   return (neuron0x1dc0bf0()*-0.643317);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcde00() {
   return (neuron0x1dc2d90()*-2.94307);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcde40() {
   return (neuron0x1dc3210()*-0.122549);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd8d0() {
   return (neuron0x1dc3ae0()*-1.21178);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcd910() {
   return (neuron0x1dc3db0()*-0.889954);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdf90() {
   return (neuron0x1dc4230()*-0.228293);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcdfd0() {
   return (neuron0x1dc46b0()*-0.842085);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce010() {
   return (neuron0x1dc4b30()*0.099489);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce050() {
   return (neuron0x1dc4fb0()*-1.36215);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce090() {
   return (neuron0x1dc5430()*0.643281);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce0d0() {
   return (neuron0x1dc58b0()*-3.19386);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce110() {
   return (neuron0x1dc5d30()*-0.14786);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce490() {
   return (neuron0x1dbed70()*-1.16081);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce4d0() {
   return (neuron0x1dbf0e0()*0.299764);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce510() {
   return (neuron0x1dbf560()*0.332589);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce550() {
   return (neuron0x1dbf9e0()*0.830747);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce590() {
   return (neuron0x1dbfef0()*1.49181);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce5d0() {
   return (neuron0x1dc0370()*0.0826689);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce610() {
   return (neuron0x1dc07f0()*1.11088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce650() {
   return (neuron0x1dc0e00()*-0.943056);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce690() {
   return (neuron0x1dc11f0()*0.725442);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce6d0() {
   return (neuron0x1dc1670()*-0.517161);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce710() {
   return (neuron0x1dc1af0()*-1.04746);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce750() {
   return (neuron0x1dc1f70()*-0.551387);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce790() {
   return (neuron0x1dc2480()*0.178173);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce7d0() {
   return (neuron0x1dc0bf0()*1.13216);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce810() {
   return (neuron0x1dc2d90()*1.14617);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce850() {
   return (neuron0x1dc3210()*0.154608);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce2e0() {
   return (neuron0x1dc3ae0()*-0.790334);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce320() {
   return (neuron0x1dc3db0()*0.509226);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce9a0() {
   return (neuron0x1dc4230()*0.549512);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dce9e0() {
   return (neuron0x1dc46b0()*-0.0796269);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcea20() {
   return (neuron0x1dc4b30()*-0.69616);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcea60() {
   return (neuron0x1dc4fb0()*-0.538278);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dceaa0() {
   return (neuron0x1dc5430()*-0.694199);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dceae0() {
   return (neuron0x1dc58b0()*0.701262);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dceb20() {
   return (neuron0x1dc5d30()*-0.0954427);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dceea0() {
   return (neuron0x1dbed70()*-2.65346);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dceee0() {
   return (neuron0x1dbf0e0()*-0.388086);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcef20() {
   return (neuron0x1dbf560()*4.53028);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcef60() {
   return (neuron0x1dbf9e0()*2.11815);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcefa0() {
   return (neuron0x1dbfef0()*-0.434491);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcefe0() {
   return (neuron0x1dc0370()*-1.01873);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf020() {
   return (neuron0x1dc07f0()*-0.181055);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf060() {
   return (neuron0x1dc0e00()*0.558538);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf0a0() {
   return (neuron0x1dc11f0()*4.59595);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf0e0() {
   return (neuron0x1dc1670()*-5.94025);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf120() {
   return (neuron0x1dc1af0()*3.78965);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf160() {
   return (neuron0x1dc1f70()*-14.1914);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf1a0() {
   return (neuron0x1dc2480()*-0.349114);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf1e0() {
   return (neuron0x1dc0bf0()*2.5525);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf220() {
   return (neuron0x1dc2d90()*3.86626);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf260() {
   return (neuron0x1dc3210()*-0.251749);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcecf0() {
   return (neuron0x1dc3ae0()*0.316065);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dced30() {
   return (neuron0x1dc3db0()*-0.513411);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf3b0() {
   return (neuron0x1dc4230()*2.76061);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf3f0() {
   return (neuron0x1dc46b0()*-0.195309);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf430() {
   return (neuron0x1dc4b30()*-0.274602);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf470() {
   return (neuron0x1dc4fb0()*1.43629);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf4b0() {
   return (neuron0x1dc5430()*-1.90878);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf4f0() {
   return (neuron0x1dc58b0()*0.330079);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf530() {
   return (neuron0x1dc5d30()*-0.134098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf8b0() {
   return (neuron0x1dbed70()*1.295);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf8f0() {
   return (neuron0x1dbf0e0()*-0.219616);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf930() {
   return (neuron0x1dbf560()*-0.671924);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf970() {
   return (neuron0x1dbf9e0()*-0.96342);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf9b0() {
   return (neuron0x1dbfef0()*-1.79872);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf9f0() {
   return (neuron0x1dc0370()*0.284994);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfa30() {
   return (neuron0x1dc07f0()*-0.823081);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfa70() {
   return (neuron0x1dc0e00()*1.68401);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfab0() {
   return (neuron0x1dc11f0()*-0.479962);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfaf0() {
   return (neuron0x1dc1670()*0.983481);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfb30() {
   return (neuron0x1dc1af0()*0.624565);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfb70() {
   return (neuron0x1dc1f70()*0.830436);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfbb0() {
   return (neuron0x1dc2480()*-0.294284);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfbf0() {
   return (neuron0x1dc0bf0()*-0.802228);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfc30() {
   return (neuron0x1dc2d90()*-0.731285);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfc70() {
   return (neuron0x1dc3210()*-1.14954);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf700() {
   return (neuron0x1dc3ae0()*0.946867);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcf740() {
   return (neuron0x1dc3db0()*-0.679916);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfdc0() {
   return (neuron0x1dc4230()*-0.591072);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfe00() {
   return (neuron0x1dc46b0()*-0.699886);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfe40() {
   return (neuron0x1dc4b30()*0.665305);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfe80() {
   return (neuron0x1dc4fb0()*0.572124);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcfec0() {
   return (neuron0x1dc5430()*0.935522);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcff00() {
   return (neuron0x1dc58b0()*-1.16634);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcff40() {
   return (neuron0x1dc5d30()*-0.466656);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd02c0() {
   return (neuron0x1dbed70()*-1.83694);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0300() {
   return (neuron0x1dbf0e0()*1.77916);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0340() {
   return (neuron0x1dbf560()*-0.194586);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0380() {
   return (neuron0x1dbf9e0()*0.814065);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd03c0() {
   return (neuron0x1dbfef0()*2.47129);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0400() {
   return (neuron0x1dc0370()*-0.119428);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0440() {
   return (neuron0x1dc07f0()*0.0592393);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0480() {
   return (neuron0x1dc0e00()*-3.0199);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd04c0() {
   return (neuron0x1dc11f0()*0.458793);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0500() {
   return (neuron0x1dc1670()*-3.76127);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0540() {
   return (neuron0x1dc1af0()*-4.10453);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0580() {
   return (neuron0x1dc1f70()*-0.576729);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd05c0() {
   return (neuron0x1dc2480()*0.387697);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0600() {
   return (neuron0x1dc0bf0()*0.389924);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0640() {
   return (neuron0x1dc2d90()*0.0550339);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0680() {
   return (neuron0x1dc3210()*0.731576);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0110() {
   return (neuron0x1dc3ae0()*-0.527391);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0150() {
   return (neuron0x1dc3db0()*0.27817);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd07d0() {
   return (neuron0x1dc4230()*0.417043);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0810() {
   return (neuron0x1dc46b0()*0.692347);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0850() {
   return (neuron0x1dc4b30()*-1.85223);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0890() {
   return (neuron0x1dc4fb0()*-2.35428);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd08d0() {
   return (neuron0x1dc5430()*-0.340025);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0910() {
   return (neuron0x1dc58b0()*0.722943);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0950() {
   return (neuron0x1dc5d30()*0.410777);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0cd0() {
   return (neuron0x1dbed70()*5.68205);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0d10() {
   return (neuron0x1dbf0e0()*-0.768761);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0d50() {
   return (neuron0x1dbf560()*-19.3159);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0d90() {
   return (neuron0x1dbf9e0()*-9.72439);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0dd0() {
   return (neuron0x1dbfef0()*-3.43591);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0e10() {
   return (neuron0x1dc0370()*-1.04966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0e50() {
   return (neuron0x1dc07f0()*0.921344);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0e90() {
   return (neuron0x1dc0e00()*3.75726);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0ed0() {
   return (neuron0x1dc11f0()*-7.00841);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0f10() {
   return (neuron0x1dc1670()*12.915);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0f50() {
   return (neuron0x1dc1af0()*-5.51471);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0f90() {
   return (neuron0x1dc1f70()*27.31);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0fd0() {
   return (neuron0x1dc2480()*0.307046);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1010() {
   return (neuron0x1dc0bf0()*-3.83945);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1050() {
   return (neuron0x1dc2d90()*-4.70074);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1090() {
   return (neuron0x1dc3210()*-0.863593);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0b20() {
   return (neuron0x1dc3ae0()*5.3578);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd0b60() {
   return (neuron0x1dc3db0()*0.331476);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd11e0() {
   return (neuron0x1dc4230()*-5.78245);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1220() {
   return (neuron0x1dc46b0()*0.266969);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1260() {
   return (neuron0x1dc4b30()*2.74924);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd12a0() {
   return (neuron0x1dc4fb0()*1.33522);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd12e0() {
   return (neuron0x1dc5430()*4.46766);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1320() {
   return (neuron0x1dc58b0()*-5.50542);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1360() {
   return (neuron0x1dc5d30()*0.671943);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd16e0() {
   return (neuron0x1dbed70()*-2.14055);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbef00() {
   return (neuron0x1dbf0e0()*0.310204);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbef40() {
   return (neuron0x1dbf560()*-1.04247);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf300() {
   return (neuron0x1dbf9e0()*2.31416);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf340() {
   return (neuron0x1dbfef0()*1.05365);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf780() {
   return (neuron0x1dc0370()*-0.398878);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbf7c0() {
   return (neuron0x1dc07f0()*-0.2721);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfc00() {
   return (neuron0x1dc0e00()*-2.09829);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbfc40() {
   return (neuron0x1dc11f0()*4.67031);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0110() {
   return (neuron0x1dc1670()*-5.1939);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0150() {
   return (neuron0x1dc1af0()*3.12474);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0590() {
   return (neuron0x1dc1f70()*-15.8761);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc05d0() {
   return (neuron0x1dc2480()*0.211851);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0a10() {
   return (neuron0x1dc0bf0()*1.23701);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0a50() {
   return (neuron0x1dc2d90()*3.12209);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0f90() {
   return (neuron0x1dc3210()*0.711713);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc0fd0() {
   return (neuron0x1dc3ae0()*-0.0980385);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1410() {
   return (neuron0x1dc3db0()*-0.198426);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1450() {
   return (neuron0x1dc4230()*0.0285567);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1890() {
   return (neuron0x1dc46b0()*-0.45917);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc18d0() {
   return (neuron0x1dc4b30()*-1.44197);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1d10() {
   return (neuron0x1dc4fb0()*0.647395);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc1d50() {
   return (neuron0x1dc5430()*-1.86842);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc2190() {
   return (neuron0x1dc58b0()*4.28276);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc21d0() {
   return (neuron0x1dc5d30()*-0.374706);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbb50() {
   return (neuron0x1dbed70()*-0.634613);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dcbb90() {
   return (neuron0x1dbf0e0()*-0.157805);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3430() {
   return (neuron0x1dbf560()*1.19806);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3470() {
   return (neuron0x1dbf9e0()*1.00714);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1530() {
   return (neuron0x1dbfef0()*-0.0988984);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd1570() {
   return (neuron0x1dc0370()*0.208899);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbe7e0() {
   return (neuron0x1dc07f0()*1.48775);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbe820() {
   return (neuron0x1dc0e00()*-0.691287);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc3fd0() {
   return (neuron0x1dc11f0()*0.71825);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4010() {
   return (neuron0x1dc1670()*-0.616903);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4450() {
   return (neuron0x1dc1af0()*1.81116);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4490() {
   return (neuron0x1dc1f70()*-2.36078);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc48d0() {
   return (neuron0x1dc2480()*0.0364183);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4910() {
   return (neuron0x1dc0bf0()*-0.20332);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4d50() {
   return (neuron0x1dc2d90()*0.344485);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc4d90() {
   return (neuron0x1dc3210()*0.494088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc51d0() {
   return (neuron0x1dc3ae0()*-0.154875);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5210() {
   return (neuron0x1dc3db0()*-0.10247);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5650() {
   return (neuron0x1dc4230()*0.353403);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5690() {
   return (neuron0x1dc46b0()*-0.0722346);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5ad0() {
   return (neuron0x1dc4b30()*-0.182114);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5b10() {
   return (neuron0x1dc4fb0()*0.502352);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5f50() {
   return (neuron0x1dc5430()*-0.566824);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc5f90() {
   return (neuron0x1dc58b0()*0.613063);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc26a0() {
   return (neuron0x1dc5d30()*0.286843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dc26e0() {
   return (neuron0x1dbed70()*0.841928);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4950() {
   return (neuron0x1dbf0e0()*-0.169496);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4990() {
   return (neuron0x1dbf560()*-0.772826);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd49d0() {
   return (neuron0x1dbf9e0()*-0.904632);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4a10() {
   return (neuron0x1dbfef0()*-1.40214);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4a50() {
   return (neuron0x1dc0370()*-0.41323);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4a90() {
   return (neuron0x1dc07f0()*-0.288466);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4ad0() {
   return (neuron0x1dc0e00()*1.52421);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4b10() {
   return (neuron0x1dc11f0()*1.50726);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4b50() {
   return (neuron0x1dc1670()*1.20398);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4b90() {
   return (neuron0x1dc1af0()*1.38039);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4bd0() {
   return (neuron0x1dc1f70()*0.471389);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4c10() {
   return (neuron0x1dc2480()*0.0782952);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4c50() {
   return (neuron0x1dc0bf0()*-1.11009);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4c90() {
   return (neuron0x1dc2d90()*-0.459742);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4cd0() {
   return (neuron0x1dc3210()*-0.150292);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd47a0() {
   return (neuron0x1dc3ae0()*0.41946);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd47e0() {
   return (neuron0x1dc3db0()*-0.62262);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4e20() {
   return (neuron0x1dc4230()*-0.632247);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4e60() {
   return (neuron0x1dc46b0()*-0.593861);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4ea0() {
   return (neuron0x1dc4b30()*0.683752);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4ee0() {
   return (neuron0x1dc4fb0()*0.0851705);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4f20() {
   return (neuron0x1dc5430()*0.469117);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4f60() {
   return (neuron0x1dc58b0()*-0.560579);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd4fa0() {
   return (neuron0x1dc5d30()*0.388955);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5320() {
   return (neuron0x1dbed70()*-0.211103);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5360() {
   return (neuron0x1dbf0e0()*0.653743);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd53a0() {
   return (neuron0x1dbf560()*0.287272);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd53e0() {
   return (neuron0x1dbf9e0()*0.518268);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5420() {
   return (neuron0x1dbfef0()*0.564381);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5460() {
   return (neuron0x1dc0370()*-0.290822);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd54a0() {
   return (neuron0x1dc07f0()*0.230585);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd54e0() {
   return (neuron0x1dc0e00()*-0.196394);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5520() {
   return (neuron0x1dc11f0()*0.295257);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5560() {
   return (neuron0x1dc1670()*-0.810493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd55a0() {
   return (neuron0x1dc1af0()*-0.332127);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd55e0() {
   return (neuron0x1dc1f70()*-0.533882);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5620() {
   return (neuron0x1dc2480()*0.131026);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5660() {
   return (neuron0x1dc0bf0()*0.33436);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd56a0() {
   return (neuron0x1dc2d90()*0.684699);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd56e0() {
   return (neuron0x1dc3210()*0.0131536);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5170() {
   return (neuron0x1dc3ae0()*-0.854973);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd51b0() {
   return (neuron0x1dc3db0()*0.54721);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5830() {
   return (neuron0x1dc4230()*0.30826);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5870() {
   return (neuron0x1dc46b0()*0.599843);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd58b0() {
   return (neuron0x1dc4b30()*-0.626847);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd58f0() {
   return (neuron0x1dc4fb0()*-0.0124681);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5930() {
   return (neuron0x1dc5430()*-0.581443);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5970() {
   return (neuron0x1dc58b0()*0.0759229);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd59b0() {
   return (neuron0x1dc5d30()*0.428795);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5d30() {
   return (neuron0x1dbed70()*-1.77223);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5d70() {
   return (neuron0x1dbf0e0()*0.957067);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5db0() {
   return (neuron0x1dbf560()*2.10375);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5df0() {
   return (neuron0x1dbf9e0()*2.09482);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5e30() {
   return (neuron0x1dbfef0()*1.85639);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5e70() {
   return (neuron0x1dc0370()*-0.503717);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5eb0() {
   return (neuron0x1dc07f0()*0.75368);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5ef0() {
   return (neuron0x1dc0e00()*-1.53394);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5f30() {
   return (neuron0x1dc11f0()*1.78747);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5f70() {
   return (neuron0x1dc1670()*-1.56162);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5fb0() {
   return (neuron0x1dc1af0()*-2.12365);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5ff0() {
   return (neuron0x1dc1f70()*-1.32506);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6030() {
   return (neuron0x1dc2480()*0.296431);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6070() {
   return (neuron0x1dc0bf0()*0.91196);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd60b0() {
   return (neuron0x1dc2d90()*2.36611);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd60f0() {
   return (neuron0x1dc3210()*0.619667);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5b80() {
   return (neuron0x1dc3ae0()*-1.6091);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd5bc0() {
   return (neuron0x1dc3db0()*0.359722);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6240() {
   return (neuron0x1dc4230()*1.43131);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6280() {
   return (neuron0x1dc46b0()*0.267088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd62c0() {
   return (neuron0x1dc4b30()*-1.80815);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6300() {
   return (neuron0x1dc4fb0()*-0.731271);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6340() {
   return (neuron0x1dc5430()*-0.0617348);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6380() {
   return (neuron0x1dc58b0()*0.623719);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd63c0() {
   return (neuron0x1dc5d30()*0.337208);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6740() {
   return (neuron0x1dbed70()*0.871888);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6780() {
   return (neuron0x1dbf0e0()*-0.970503);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd67c0() {
   return (neuron0x1dbf560()*-0.220674);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6800() {
   return (neuron0x1dbf9e0()*-1.05779);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6840() {
   return (neuron0x1dbfef0()*-1.03205);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6880() {
   return (neuron0x1dc0370()*0.404734);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd68c0() {
   return (neuron0x1dc07f0()*-0.66363);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6900() {
   return (neuron0x1dc0e00()*1.39118);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6940() {
   return (neuron0x1dc11f0()*-1.34318);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6980() {
   return (neuron0x1dc1670()*0.464122);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd69c0() {
   return (neuron0x1dc1af0()*1.04895);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6a00() {
   return (neuron0x1dc1f70()*0.320426);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6a40() {
   return (neuron0x1dc2480()*-0.683272);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6a80() {
   return (neuron0x1dc0bf0()*-0.612665);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6ac0() {
   return (neuron0x1dc2d90()*-1.51083);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6b00() {
   return (neuron0x1dc3210()*-0.993236);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6590() {
   return (neuron0x1dc3ae0()*0.323474);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd65d0() {
   return (neuron0x1dc3db0()*-0.370088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6c50() {
   return (neuron0x1dc4230()*-0.706784);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6c90() {
   return (neuron0x1dc46b0()*-0.881482);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6cd0() {
   return (neuron0x1dc4b30()*0.6747);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6d10() {
   return (neuron0x1dc4fb0()*0.635073);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6d50() {
   return (neuron0x1dc5430()*0.498787);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6d90() {
   return (neuron0x1dc58b0()*-1.52208);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6dd0() {
   return (neuron0x1dc5d30()*-0.0127942);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7150() {
   return (neuron0x1dbed70()*-0.513513);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7190() {
   return (neuron0x1dbf0e0()*-0.240958);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd71d0() {
   return (neuron0x1dbf560()*-0.22667);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7210() {
   return (neuron0x1dbf9e0()*0.316097);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7250() {
   return (neuron0x1dbfef0()*0.366025);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7290() {
   return (neuron0x1dc0370()*0.0327576);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd72d0() {
   return (neuron0x1dc07f0()*-0.982053);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7310() {
   return (neuron0x1dc0e00()*-1.08351);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7350() {
   return (neuron0x1dc11f0()*-0.323138);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7390() {
   return (neuron0x1dc1670()*-1.08551);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd73d0() {
   return (neuron0x1dc1af0()*-1.00007);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7410() {
   return (neuron0x1dc1f70()*-0.473159);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7450() {
   return (neuron0x1dc2480()*-0.489422);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7490() {
   return (neuron0x1dc0bf0()*0.0872361);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd74d0() {
   return (neuron0x1dc2d90()*0.0823379);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7510() {
   return (neuron0x1dc3210()*-0.574014);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6fa0() {
   return (neuron0x1dc3ae0()*-0.521881);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd6fe0() {
   return (neuron0x1dc3db0()*-0.236184);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7660() {
   return (neuron0x1dc4230()*-0.231406);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd76a0() {
   return (neuron0x1dc46b0()*-0.9712);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd76e0() {
   return (neuron0x1dc4b30()*-0.49075);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7720() {
   return (neuron0x1dc4fb0()*-0.67365);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7760() {
   return (neuron0x1dc5430()*-0.79152);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd77a0() {
   return (neuron0x1dc58b0()*0.207719);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd77e0() {
   return (neuron0x1dc5d30()*-0.209758);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7b60() {
   return (neuron0x1dbed70()*1.71847);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7ba0() {
   return (neuron0x1dbf0e0()*-0.326683);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7be0() {
   return (neuron0x1dbf560()*-1.32992);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7c20() {
   return (neuron0x1dbf9e0()*-2.20521);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7c60() {
   return (neuron0x1dbfef0()*-2.92966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7ca0() {
   return (neuron0x1dc0370()*-0.225881);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7ce0() {
   return (neuron0x1dc07f0()*-2.69406);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7d20() {
   return (neuron0x1dc0e00()*2.34733);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7d60() {
   return (neuron0x1dc11f0()*-1.34026);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7da0() {
   return (neuron0x1dc1670()*1.66393);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7de0() {
   return (neuron0x1dc1af0()*1.13697);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7e20() {
   return (neuron0x1dc1f70()*2.06321);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7e60() {
   return (neuron0x1dc2480()*-0.0786453);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7ea0() {
   return (neuron0x1dc0bf0()*-1.20452);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7ee0() {
   return (neuron0x1dc2d90()*-0.91367);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd7f20() {
   return (neuron0x1dc3210()*-1.00872);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd79b0() {
   return (neuron0x1dc3ae0()*0.652846);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd79f0() {
   return (neuron0x1dc3db0()*-0.529645);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8070() {
   return (neuron0x1dc4230()*-1.55613);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd80b0() {
   return (neuron0x1dc46b0()*-0.233242);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd80f0() {
   return (neuron0x1dc4b30()*2.04816);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8130() {
   return (neuron0x1dc4fb0()*-0.0566252);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8170() {
   return (neuron0x1dc5430()*0.148875);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd81b0() {
   return (neuron0x1dc58b0()*-1.80458);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd81f0() {
   return (neuron0x1dc5d30()*0.320579);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8570() {
   return (neuron0x1dbed70()*-0.624973);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd85b0() {
   return (neuron0x1dbf0e0()*0.0536966);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd85f0() {
   return (neuron0x1dbf560()*0.457343);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8630() {
   return (neuron0x1dbf9e0()*0.527229);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8670() {
   return (neuron0x1dbfef0()*0.34446);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd86b0() {
   return (neuron0x1dc0370()*0.192999);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd86f0() {
   return (neuron0x1dc07f0()*0.238817);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8730() {
   return (neuron0x1dc0e00()*-0.575122);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8770() {
   return (neuron0x1dc11f0()*0.509028);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd87b0() {
   return (neuron0x1dc1670()*-0.135446);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd87f0() {
   return (neuron0x1dc1af0()*-0.19086);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8830() {
   return (neuron0x1dc1f70()*-0.39699);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8870() {
   return (neuron0x1dc2480()*0.317347);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd88b0() {
   return (neuron0x1dc0bf0()*0.07778);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd88f0() {
   return (neuron0x1dc2d90()*0.718835);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8930() {
   return (neuron0x1dc3210()*0.428443);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd83c0() {
   return (neuron0x1dc3ae0()*-0.474271);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8400() {
   return (neuron0x1dc3db0()*0.00126658);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8a80() {
   return (neuron0x1dc4230()*-0.0399172);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8ac0() {
   return (neuron0x1dc46b0()*-0.252483);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8b00() {
   return (neuron0x1dc4b30()*0.226568);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8b40() {
   return (neuron0x1dc4fb0()*0.19704);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8b80() {
   return (neuron0x1dc5430()*0.0199249);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8bc0() {
   return (neuron0x1dc58b0()*0.244271);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8c00() {
   return (neuron0x1dc5d30()*-0.0484088);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8f80() {
   return (neuron0x1dbed70()*-1.24505);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8fc0() {
   return (neuron0x1dbf0e0()*0.457058);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9000() {
   return (neuron0x1dbf560()*-0.0931338);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9040() {
   return (neuron0x1dbf9e0()*1.07781);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9080() {
   return (neuron0x1dbfef0()*0.372584);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd90c0() {
   return (neuron0x1dc0370()*0.14979);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9100() {
   return (neuron0x1dc07f0()*1.12523);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9140() {
   return (neuron0x1dc0e00()*-1.34208);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9180() {
   return (neuron0x1dc11f0()*0.501992);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd91c0() {
   return (neuron0x1dc1670()*-2.02459);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9200() {
   return (neuron0x1dc1af0()*0.0295939);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9240() {
   return (neuron0x1dc1f70()*-2.62099);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9280() {
   return (neuron0x1dc2480()*0.0435663);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd92c0() {
   return (neuron0x1dc0bf0()*1.23079);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9300() {
   return (neuron0x1dc2d90()*0.441732);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9340() {
   return (neuron0x1dc3210()*0.528722);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8dd0() {
   return (neuron0x1dc3ae0()*0.392098);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd8e10() {
   return (neuron0x1dc3db0()*-0.505798);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9490() {
   return (neuron0x1dc4230()*0.862404);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd94d0() {
   return (neuron0x1dc46b0()*0.0400183);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9510() {
   return (neuron0x1dc4b30()*-1.15472);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9550() {
   return (neuron0x1dc4fb0()*-0.373056);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9590() {
   return (neuron0x1dc5430()*-1.62447);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd95d0() {
   return (neuron0x1dc58b0()*0.474528);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9610() {
   return (neuron0x1dc5d30()*0.237192);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9870() {
   return (neuron0x1dc7c40()*1.01751);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd98b0() {
   return (neuron0x1dc2a10()*4.25035);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd98f0() {
   return (neuron0x1dc87b0()*-4.03274);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9930() {
   return (neuron0x1dc92d0()*-4.58493);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9970() {
   return (neuron0x1dc9ce0()*3.47905);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd99b0() {
   return (neuron0x1dca6f0()*1.57968);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd99f0() {
   return (neuron0x1dc82e0()*4.76625);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9a30() {
   return (neuron0x1dcc320()*-0.0986092);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9a70() {
   return (neuron0x1dccd30()*2.40594);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9ab0() {
   return (neuron0x1dcd740()*-13.9435);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9af0() {
   return (neuron0x1dce150()*-0.0374901);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9b30() {
   return (neuron0x1dceb60()*6.54692);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9b70() {
   return (neuron0x1dcf570()*1.17797);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9bb0() {
   return (neuron0x1dcff80()*-7.3551);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9bf0() {
   return (neuron0x1dd0990()*11.621);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9c30() {
   return (neuron0x1dd13a0()*-6.8902);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbec40() {
   return (neuron0x1dcb9c0()*3.38432);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dbec80() {
   return (neuron0x1dd4610()*2.90077);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9d80() {
   return (neuron0x1dd4fe0()*0.334331);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9dc0() {
   return (neuron0x1dd59f0()*-3.57988);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9e00() {
   return (neuron0x1dd6400()*-2.39348);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9e40() {
   return (neuron0x1dd6e10()*-1.92572);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9e80() {
   return (neuron0x1dd7820()*4.68896);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9ec0() {
   return (neuron0x1dd8230()*0.346793);
}

double nnFunc_25_25hi_6000ep_weight::synapse0x1dd9f00() {
   return (neuron0x1dd8c40()*2.97717);
}

