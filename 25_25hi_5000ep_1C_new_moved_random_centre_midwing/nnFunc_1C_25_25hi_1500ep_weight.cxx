#include "25_25hi_5000ep_1C_new_moved_random_centre_midwing/nnFunc_1C_25_25hi_1500ep_weight.h"
#include <cmath>

double nnFunc_1C_25_25hi_1500ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x18c8090();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_1500ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x18c8090();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ac640() {
   return input0;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ac980() {
   return input1;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18accc0() {
   return input2;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ad000() {
   return input3;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ad340() {
   return input4;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18ad7b0() {
   double input = 1.3634;
   input += synapse0x17b9af0();
   input += synapse0x189bab0();
   input += synapse0x18ada60();
   input += synapse0x18adaa0();
   input += synapse0x18adae0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ad7b0() {
   double input = input0x18ad7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18adb20() {
   double input = -0.223401;
   input += synapse0x18ade60();
   input += synapse0x18adea0();
   input += synapse0x18adee0();
   input += synapse0x18adf20();
   input += synapse0x18adf60();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18adb20() {
   double input = input0x18adb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18adfa0() {
   double input = -3.96613;
   input += synapse0x18ae2e0();
   input += synapse0x18ae320();
   input += synapse0x18ae360();
   input += synapse0x18ae3a0();
   input += synapse0x18ae3e0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18adfa0() {
   double input = input0x18adfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18ae420() {
   double input = -1.81249;
   input += synapse0x18ae760();
   input += synapse0x18ae7a0();
   input += synapse0x17abce0();
   input += synapse0x17abd20();
   input += synapse0x18ae8f0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ae420() {
   double input = input0x18ae420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18ae930() {
   double input = -1.804;
   input += synapse0x18aec70();
   input += synapse0x18aecb0();
   input += synapse0x18aecf0();
   input += synapse0x18aed30();
   input += synapse0x18aed70();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ae930() {
   double input = input0x18ae930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18aedb0() {
   double input = 1.44142;
   input += synapse0x18af0f0();
   input += synapse0x18af130();
   input += synapse0x18af170();
   input += synapse0x18af1b0();
   input += synapse0x18af1f0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18aedb0() {
   double input = input0x18aedb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18af230() {
   double input = -5.00964;
   input += synapse0x18af570();
   input += synapse0x18af5b0();
   input += synapse0x18af5f0();
   input += synapse0x18ae7e0();
   input += synapse0x18ae820();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18af230() {
   double input = input0x18af230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18af840() {
   double input = 1.0722;
   input += synapse0x18afaf0();
   input += synapse0x18afb30();
   input += synapse0x18afb70();
   input += synapse0x18afbb0();
   input += synapse0x18afbf0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18af840() {
   double input = input0x18af840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18afc30() {
   double input = 1.06706;
   input += synapse0x18aff70();
   input += synapse0x18affb0();
   input += synapse0x18afff0();
   input += synapse0x18b0030();
   input += synapse0x18b0070();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18afc30() {
   double input = input0x18afc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b00b0() {
   double input = 1.39389;
   input += synapse0x18b03f0();
   input += synapse0x18b0430();
   input += synapse0x18b0470();
   input += synapse0x18b04b0();
   input += synapse0x18b04f0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b00b0() {
   double input = input0x18b00b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b0530() {
   double input = 0.41461;
   input += synapse0x18b0870();
   input += synapse0x18b08b0();
   input += synapse0x18b08f0();
   input += synapse0x18b0930();
   input += synapse0x18b0970();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b0530() {
   double input = input0x18b0530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b09b0() {
   double input = -0.176825;
   input += synapse0x17abb30();
   input += synapse0x17abb70();
   input += synapse0x18b0e00();
   input += synapse0x18b0e40();
   input += synapse0x18b0e80();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b09b0() {
   double input = input0x18b09b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b0ec0() {
   double input = 0.43797;
   input += synapse0x18b1200();
   input += synapse0x18b1240();
   input += synapse0x18b1280();
   input += synapse0x18b12c0();
   input += synapse0x18b1300();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b0ec0() {
   double input = input0x18b0ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18af630() {
   double input = -0.911048;
   input += synapse0x17ac300();
   input += synapse0x18af7c0();
   input += synapse0x18af800();
   input += synapse0x18b1750();
   input += synapse0x18b1790();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18af630() {
   double input = input0x18af630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b17d0() {
   double input = 0.191266;
   input += synapse0x18b1b10();
   input += synapse0x18b1b50();
   input += synapse0x18b1b90();
   input += synapse0x18b1bd0();
   input += synapse0x18b1c10();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b17d0() {
   double input = input0x18b17d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b1c50() {
   double input = 0.230258;
   input += synapse0x18b1f90();
   input += synapse0x18ac860();
   input += synapse0x18ac8a0();
   input += synapse0x18acba0();
   input += synapse0x18acbe0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b1c50() {
   double input = input0x18b1c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b2520() {
   double input = -0.962363;
   input += synapse0x18b26b0();
   input += synapse0x18b26f0();
   input += synapse0x18b2730();
   input += synapse0x18b2770();
   input += synapse0x18b27b0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b2520() {
   double input = input0x18b2520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b27f0() {
   double input = 0.52354;
   input += synapse0x18b2b30();
   input += synapse0x18b2b70();
   input += synapse0x18b2bb0();
   input += synapse0x18b2bf0();
   input += synapse0x18b2c30();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b27f0() {
   double input = input0x18b27f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b2c70() {
   double input = -0.341055;
   input += synapse0x18b2fb0();
   input += synapse0x18b2ff0();
   input += synapse0x18b3030();
   input += synapse0x18b3070();
   input += synapse0x18b30b0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b2c70() {
   double input = input0x18b2c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b30f0() {
   double input = 1.61281;
   input += synapse0x18b3430();
   input += synapse0x18b3470();
   input += synapse0x18b34b0();
   input += synapse0x18b34f0();
   input += synapse0x18b3530();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b30f0() {
   double input = input0x18b30f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b3570() {
   double input = -0.262028;
   input += synapse0x18b38b0();
   input += synapse0x18b38f0();
   input += synapse0x18b3930();
   input += synapse0x18b3970();
   input += synapse0x18b39b0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b3570() {
   double input = input0x18b3570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b39f0() {
   double input = 0.886555;
   input += synapse0x18b3d30();
   input += synapse0x18b3d70();
   input += synapse0x18b3db0();
   input += synapse0x18b3df0();
   input += synapse0x18b3e30();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b39f0() {
   double input = input0x18b39f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b3e70() {
   double input = -0.607864;
   input += synapse0x18b41b0();
   input += synapse0x18b41f0();
   input += synapse0x18b4230();
   input += synapse0x18b4270();
   input += synapse0x18b42b0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b3e70() {
   double input = input0x18b3e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b42f0() {
   double input = -1.511;
   input += synapse0x18b4630();
   input += synapse0x18b4670();
   input += synapse0x18b46b0();
   input += synapse0x18b46f0();
   input += synapse0x18b4730();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b42f0() {
   double input = input0x18b42f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b4770() {
   double input = 0.118665;
   input += synapse0x18b4ab0();
   input += synapse0x18b4af0();
   input += synapse0x18b4b30();
   input += synapse0x18b4b70();
   input += synapse0x18b4bb0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b4770() {
   double input = input0x18b4770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b6680() {
   double input = -1.71591;
   input += synapse0x18ae6d0();
   input += synapse0x18ae710();
   input += synapse0x18aebe0();
   input += synapse0x18aec20();
   input += synapse0x18af060();
   input += synapse0x18af0a0();
   input += synapse0x18af4e0();
   input += synapse0x18af520();
   input += synapse0x18afa60();
   input += synapse0x18afaa0();
   input += synapse0x18afee0();
   input += synapse0x18aff20();
   input += synapse0x18b0360();
   input += synapse0x18b03a0();
   input += synapse0x18b07e0();
   input += synapse0x18b0820();
   input += synapse0x18b0c60();
   input += synapse0x18b0ca0();
   input += synapse0x18b1170();
   input += synapse0x18b11b0();
   input += synapse0x18b1a80();
   input += synapse0x18b1ac0();
   input += synapse0x18b1f00();
   input += synapse0x18b1f40();
   input += synapse0x18ad560();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b6680() {
   double input = input0x18b6680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b1450() {
   double input = 0.867665;
   input += synapse0x18b15e0();
   input += synapse0x18b1620();
   input += synapse0x18b1660();
   input += synapse0x18b16a0();
   input += synapse0x18b16e0();
   input += synapse0x18ad5a0();
   input += synapse0x18b3820();
   input += synapse0x18b3860();
   input += synapse0x18b3ca0();
   input += synapse0x18b3ce0();
   input += synapse0x18b4120();
   input += synapse0x18b4160();
   input += synapse0x18b45a0();
   input += synapse0x18b45e0();
   input += synapse0x18b4a20();
   input += synapse0x18b4a60();
   input += synapse0x18ad9d0();
   input += synapse0x18ada10();
   input += synapse0x18b2aa0();
   input += synapse0x18b2ae0();
   input += synapse0x17b9bc0();
   input += synapse0x17b9c00();
   input += synapse0x18b7130();
   input += synapse0x18b7170();
   input += synapse0x18b71b0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b1450() {
   double input = input0x18b1450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b71f0() {
   double input = -0.777186;
   input += synapse0x18b0cf0();
   input += synapse0x18b0d30();
   input += synapse0x18b0d70();
   input += synapse0x18b0db0();
   input += synapse0x18b7740();
   input += synapse0x18b7780();
   input += synapse0x18b77c0();
   input += synapse0x18b7800();
   input += synapse0x18b7840();
   input += synapse0x18b7880();
   input += synapse0x18b78c0();
   input += synapse0x18b7900();
   input += synapse0x18b7940();
   input += synapse0x18b7980();
   input += synapse0x18b79c0();
   input += synapse0x18b7a00();
   input += synapse0x18b7380();
   input += synapse0x18b73c0();
   input += synapse0x18b7b50();
   input += synapse0x18b7b90();
   input += synapse0x18b7bd0();
   input += synapse0x18b7c10();
   input += synapse0x18b7c50();
   input += synapse0x18b7c90();
   input += synapse0x18b7cd0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b71f0() {
   double input = input0x18b71f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b7d10() {
   double input = 0.165717;
   input += synapse0x18b8050();
   input += synapse0x18b8090();
   input += synapse0x18b80d0();
   input += synapse0x18b8110();
   input += synapse0x18b8150();
   input += synapse0x18b8190();
   input += synapse0x18b81d0();
   input += synapse0x18b8210();
   input += synapse0x18b8250();
   input += synapse0x18b8290();
   input += synapse0x18b82d0();
   input += synapse0x18b8310();
   input += synapse0x18b8350();
   input += synapse0x18b8390();
   input += synapse0x18b83d0();
   input += synapse0x18b8410();
   input += synapse0x18b7ea0();
   input += synapse0x18b7ee0();
   input += synapse0x18b8560();
   input += synapse0x18b85a0();
   input += synapse0x18b85e0();
   input += synapse0x18b8620();
   input += synapse0x18b8660();
   input += synapse0x18b86a0();
   input += synapse0x18b86e0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b7d10() {
   double input = input0x18b7d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b8720() {
   double input = -0.139625;
   input += synapse0x18b8a60();
   input += synapse0x18b8aa0();
   input += synapse0x18b8ae0();
   input += synapse0x18b8b20();
   input += synapse0x18b8b60();
   input += synapse0x18b8ba0();
   input += synapse0x18b8be0();
   input += synapse0x18b8c20();
   input += synapse0x18b8c60();
   input += synapse0x18b8ca0();
   input += synapse0x18b8ce0();
   input += synapse0x18b8d20();
   input += synapse0x18b8d60();
   input += synapse0x18b8da0();
   input += synapse0x18b8de0();
   input += synapse0x18b8e20();
   input += synapse0x18b88b0();
   input += synapse0x18b88f0();
   input += synapse0x18b8f70();
   input += synapse0x18b8fb0();
   input += synapse0x18b8ff0();
   input += synapse0x18b9030();
   input += synapse0x18b9070();
   input += synapse0x18b90b0();
   input += synapse0x18b90f0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b8720() {
   double input = input0x18b8720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b9130() {
   double input = 0.397164;
   input += synapse0x18b9470();
   input += synapse0x18b94b0();
   input += synapse0x18b94f0();
   input += synapse0x18b9530();
   input += synapse0x18b9570();
   input += synapse0x18b95b0();
   input += synapse0x18b95f0();
   input += synapse0x18b6810();
   input += synapse0x18b6850();
   input += synapse0x18b6890();
   input += synapse0x18b68d0();
   input += synapse0x18b6910();
   input += synapse0x18b6950();
   input += synapse0x18b6990();
   input += synapse0x18b69d0();
   input += synapse0x18b6a10();
   input += synapse0x18b92c0();
   input += synapse0x18b9300();
   input += synapse0x18b6b60();
   input += synapse0x18b6ba0();
   input += synapse0x18b6be0();
   input += synapse0x18b6c20();
   input += synapse0x18b6c60();
   input += synapse0x18b6ca0();
   input += synapse0x18b6ce0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b9130() {
   double input = input0x18b9130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18b6d20() {
   double input = -0.561257;
   input += synapse0x18b6fd0();
   input += synapse0x18ba6d0();
   input += synapse0x18ba710();
   input += synapse0x18ba750();
   input += synapse0x18ba790();
   input += synapse0x18ba7d0();
   input += synapse0x18ba810();
   input += synapse0x18ba850();
   input += synapse0x18ba890();
   input += synapse0x18ba8d0();
   input += synapse0x18ba910();
   input += synapse0x18ba950();
   input += synapse0x18ba990();
   input += synapse0x18ba9d0();
   input += synapse0x18baa10();
   input += synapse0x18baa50();
   input += synapse0x18b6eb0();
   input += synapse0x18b6ef0();
   input += synapse0x18baba0();
   input += synapse0x18babe0();
   input += synapse0x18bac20();
   input += synapse0x18bac60();
   input += synapse0x18baca0();
   input += synapse0x18bace0();
   input += synapse0x18bad20();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18b6d20() {
   double input = input0x18b6d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bad60() {
   double input = -0.619862;
   input += synapse0x18bb0a0();
   input += synapse0x18bb0e0();
   input += synapse0x18bb120();
   input += synapse0x18bb160();
   input += synapse0x18bb1a0();
   input += synapse0x18bb1e0();
   input += synapse0x18bb220();
   input += synapse0x18bb260();
   input += synapse0x18bb2a0();
   input += synapse0x18bb2e0();
   input += synapse0x18bb320();
   input += synapse0x18bb360();
   input += synapse0x18bb3a0();
   input += synapse0x18bb3e0();
   input += synapse0x18bb420();
   input += synapse0x18bb460();
   input += synapse0x18baef0();
   input += synapse0x18baf30();
   input += synapse0x18bb5b0();
   input += synapse0x18bb5f0();
   input += synapse0x18bb630();
   input += synapse0x18bb670();
   input += synapse0x18bb6b0();
   input += synapse0x18bb6f0();
   input += synapse0x18bb730();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bad60() {
   double input = input0x18bad60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bb770() {
   double input = 0.346738;
   input += synapse0x18bbab0();
   input += synapse0x18bbaf0();
   input += synapse0x18bbb30();
   input += synapse0x18bbb70();
   input += synapse0x18bbbb0();
   input += synapse0x18bbbf0();
   input += synapse0x18bbc30();
   input += synapse0x18bbc70();
   input += synapse0x18bbcb0();
   input += synapse0x18bbcf0();
   input += synapse0x18bbd30();
   input += synapse0x18bbd70();
   input += synapse0x18bbdb0();
   input += synapse0x18bbdf0();
   input += synapse0x18bbe30();
   input += synapse0x18bbe70();
   input += synapse0x18bb900();
   input += synapse0x18bb940();
   input += synapse0x18bbfc0();
   input += synapse0x18bc000();
   input += synapse0x18bc040();
   input += synapse0x18bc080();
   input += synapse0x18bc0c0();
   input += synapse0x18bc100();
   input += synapse0x18bc140();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bb770() {
   double input = input0x18bb770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bc180() {
   double input = 0.629692;
   input += synapse0x18bc4c0();
   input += synapse0x18bc500();
   input += synapse0x18bc540();
   input += synapse0x18bc580();
   input += synapse0x18bc5c0();
   input += synapse0x18bc600();
   input += synapse0x18bc640();
   input += synapse0x18bc680();
   input += synapse0x18bc6c0();
   input += synapse0x18bc700();
   input += synapse0x18bc740();
   input += synapse0x18bc780();
   input += synapse0x18bc7c0();
   input += synapse0x18bc800();
   input += synapse0x18bc840();
   input += synapse0x18bc880();
   input += synapse0x18bc310();
   input += synapse0x18bc350();
   input += synapse0x18bc9d0();
   input += synapse0x18bca10();
   input += synapse0x18bca50();
   input += synapse0x18bca90();
   input += synapse0x18bcad0();
   input += synapse0x18bcb10();
   input += synapse0x18bcb50();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bc180() {
   double input = input0x18bc180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bcb90() {
   double input = 0.61411;
   input += synapse0x18bced0();
   input += synapse0x18bcf10();
   input += synapse0x18bcf50();
   input += synapse0x18bcf90();
   input += synapse0x18bcfd0();
   input += synapse0x18bd010();
   input += synapse0x18bd050();
   input += synapse0x18bd090();
   input += synapse0x18bd0d0();
   input += synapse0x18bd110();
   input += synapse0x18bd150();
   input += synapse0x18bd190();
   input += synapse0x18bd1d0();
   input += synapse0x18bd210();
   input += synapse0x18bd250();
   input += synapse0x18bd290();
   input += synapse0x18bcd20();
   input += synapse0x18bcd60();
   input += synapse0x18bd3e0();
   input += synapse0x18bd420();
   input += synapse0x18bd460();
   input += synapse0x18bd4a0();
   input += synapse0x18bd4e0();
   input += synapse0x18bd520();
   input += synapse0x18bd560();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bcb90() {
   double input = input0x18bcb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bd5a0() {
   double input = 0.227917;
   input += synapse0x18bd8e0();
   input += synapse0x18bd920();
   input += synapse0x18bd960();
   input += synapse0x18bd9a0();
   input += synapse0x18bd9e0();
   input += synapse0x18bda20();
   input += synapse0x18bda60();
   input += synapse0x18bdaa0();
   input += synapse0x18bdae0();
   input += synapse0x18bdb20();
   input += synapse0x18bdb60();
   input += synapse0x18bdba0();
   input += synapse0x18bdbe0();
   input += synapse0x18bdc20();
   input += synapse0x18bdc60();
   input += synapse0x18bdca0();
   input += synapse0x18bd730();
   input += synapse0x18bd770();
   input += synapse0x18bddf0();
   input += synapse0x18bde30();
   input += synapse0x18bde70();
   input += synapse0x18bdeb0();
   input += synapse0x18bdef0();
   input += synapse0x18bdf30();
   input += synapse0x18bdf70();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bd5a0() {
   double input = input0x18bd5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bdfb0() {
   double input = 1.06716;
   input += synapse0x18be2f0();
   input += synapse0x18be330();
   input += synapse0x18be370();
   input += synapse0x18be3b0();
   input += synapse0x18be3f0();
   input += synapse0x18be430();
   input += synapse0x18be470();
   input += synapse0x18be4b0();
   input += synapse0x18be4f0();
   input += synapse0x18be530();
   input += synapse0x18be570();
   input += synapse0x18be5b0();
   input += synapse0x18be5f0();
   input += synapse0x18be630();
   input += synapse0x18be670();
   input += synapse0x18be6b0();
   input += synapse0x18be140();
   input += synapse0x18be180();
   input += synapse0x18be800();
   input += synapse0x18be840();
   input += synapse0x18be880();
   input += synapse0x18be8c0();
   input += synapse0x18be900();
   input += synapse0x18be940();
   input += synapse0x18be980();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bdfb0() {
   double input = input0x18bdfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18be9c0() {
   double input = 1.11883;
   input += synapse0x18bed00();
   input += synapse0x18bed40();
   input += synapse0x18bed80();
   input += synapse0x18bedc0();
   input += synapse0x18bee00();
   input += synapse0x18bee40();
   input += synapse0x18bee80();
   input += synapse0x18beec0();
   input += synapse0x18bef00();
   input += synapse0x18bef40();
   input += synapse0x18bef80();
   input += synapse0x18befc0();
   input += synapse0x18bf000();
   input += synapse0x18bf040();
   input += synapse0x18bf080();
   input += synapse0x18bf0c0();
   input += synapse0x18beb50();
   input += synapse0x18beb90();
   input += synapse0x18bf210();
   input += synapse0x18bf250();
   input += synapse0x18bf290();
   input += synapse0x18bf2d0();
   input += synapse0x18bf310();
   input += synapse0x18bf350();
   input += synapse0x18bf390();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18be9c0() {
   double input = input0x18be9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bf3d0() {
   double input = -0.0821089;
   input += synapse0x18bf710();
   input += synapse0x18bf750();
   input += synapse0x18bf790();
   input += synapse0x18bf7d0();
   input += synapse0x18bf810();
   input += synapse0x18bf850();
   input += synapse0x18bf890();
   input += synapse0x18bf8d0();
   input += synapse0x18bf910();
   input += synapse0x18bf950();
   input += synapse0x18bf990();
   input += synapse0x18bf9d0();
   input += synapse0x18bfa10();
   input += synapse0x18bfa50();
   input += synapse0x18bfa90();
   input += synapse0x18bfad0();
   input += synapse0x18bf560();
   input += synapse0x18bf5a0();
   input += synapse0x18bfc20();
   input += synapse0x18bfc60();
   input += synapse0x18bfca0();
   input += synapse0x18bfce0();
   input += synapse0x18bfd20();
   input += synapse0x18bfd60();
   input += synapse0x18bfda0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bf3d0() {
   double input = input0x18bf3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18bfde0() {
   double input = 0.622207;
   input += synapse0x18c0120();
   input += synapse0x18ad940();
   input += synapse0x18ad980();
   input += synapse0x18add40();
   input += synapse0x18add80();
   input += synapse0x18ae1c0();
   input += synapse0x18ae200();
   input += synapse0x18ae640();
   input += synapse0x18ae680();
   input += synapse0x18aeb50();
   input += synapse0x18aeb90();
   input += synapse0x18aefd0();
   input += synapse0x18af010();
   input += synapse0x18af450();
   input += synapse0x18af490();
   input += synapse0x18af9d0();
   input += synapse0x18afa10();
   input += synapse0x18afe50();
   input += synapse0x18afe90();
   input += synapse0x18b02d0();
   input += synapse0x18b0310();
   input += synapse0x18b0750();
   input += synapse0x18b0790();
   input += synapse0x18b0bd0();
   input += synapse0x18b0c10();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18bfde0() {
   double input = input0x18bfde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18ba400() {
   double input = 0.127442;
   input += synapse0x18ba590();
   input += synapse0x18ba5d0();
   input += synapse0x18b1e70();
   input += synapse0x18b1eb0();
   input += synapse0x18bff70();
   input += synapse0x18bffb0();
   input += synapse0x18ad220();
   input += synapse0x18ad260();
   input += synapse0x18b2a10();
   input += synapse0x18b2a50();
   input += synapse0x18b2e90();
   input += synapse0x18b2ed0();
   input += synapse0x18b3310();
   input += synapse0x18b3350();
   input += synapse0x18b3790();
   input += synapse0x18b37d0();
   input += synapse0x18b3c10();
   input += synapse0x18b3c50();
   input += synapse0x18b4090();
   input += synapse0x18b40d0();
   input += synapse0x18b4510();
   input += synapse0x18b4550();
   input += synapse0x18b4990();
   input += synapse0x18b49d0();
   input += synapse0x18b10e0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18ba400() {
   double input = input0x18ba400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c3050() {
   double input = -0.268368;
   input += synapse0x18b1120();
   input += synapse0x18c3390();
   input += synapse0x18c33d0();
   input += synapse0x18c3410();
   input += synapse0x18c3450();
   input += synapse0x18c3490();
   input += synapse0x18c34d0();
   input += synapse0x18c3510();
   input += synapse0x18c3550();
   input += synapse0x18c3590();
   input += synapse0x18c35d0();
   input += synapse0x18c3610();
   input += synapse0x18c3650();
   input += synapse0x18c3690();
   input += synapse0x18c36d0();
   input += synapse0x18c3710();
   input += synapse0x18c31e0();
   input += synapse0x18c3220();
   input += synapse0x18c3860();
   input += synapse0x18c38a0();
   input += synapse0x18c38e0();
   input += synapse0x18c3920();
   input += synapse0x18c3960();
   input += synapse0x18c39a0();
   input += synapse0x18c39e0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c3050() {
   double input = input0x18c3050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c3a20() {
   double input = -0.0958939;
   input += synapse0x18c3d60();
   input += synapse0x18c3da0();
   input += synapse0x18c3de0();
   input += synapse0x18c3e20();
   input += synapse0x18c3e60();
   input += synapse0x18c3ea0();
   input += synapse0x18c3ee0();
   input += synapse0x18c3f20();
   input += synapse0x18c3f60();
   input += synapse0x18c3fa0();
   input += synapse0x18c3fe0();
   input += synapse0x18c4020();
   input += synapse0x18c4060();
   input += synapse0x18c40a0();
   input += synapse0x18c40e0();
   input += synapse0x18c4120();
   input += synapse0x18c3bb0();
   input += synapse0x18c3bf0();
   input += synapse0x18c4270();
   input += synapse0x18c42b0();
   input += synapse0x18c42f0();
   input += synapse0x18c4330();
   input += synapse0x18c4370();
   input += synapse0x18c43b0();
   input += synapse0x18c43f0();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c3a20() {
   double input = input0x18c3a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c4430() {
   double input = 0.544542;
   input += synapse0x18c4770();
   input += synapse0x18c47b0();
   input += synapse0x18c47f0();
   input += synapse0x18c4830();
   input += synapse0x18c4870();
   input += synapse0x18c48b0();
   input += synapse0x18c48f0();
   input += synapse0x18c4930();
   input += synapse0x18c4970();
   input += synapse0x18c49b0();
   input += synapse0x18c49f0();
   input += synapse0x18c4a30();
   input += synapse0x18c4a70();
   input += synapse0x18c4ab0();
   input += synapse0x18c4af0();
   input += synapse0x18c4b30();
   input += synapse0x18c45c0();
   input += synapse0x18c4600();
   input += synapse0x18c4c80();
   input += synapse0x18c4cc0();
   input += synapse0x18c4d00();
   input += synapse0x18c4d40();
   input += synapse0x18c4d80();
   input += synapse0x18c4dc0();
   input += synapse0x18c4e00();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c4430() {
   double input = input0x18c4430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c4e40() {
   double input = 0.54284;
   input += synapse0x18c5180();
   input += synapse0x18c51c0();
   input += synapse0x18c5200();
   input += synapse0x18c5240();
   input += synapse0x18c5280();
   input += synapse0x18c52c0();
   input += synapse0x18c5300();
   input += synapse0x18c5340();
   input += synapse0x18c5380();
   input += synapse0x18c53c0();
   input += synapse0x18c5400();
   input += synapse0x18c5440();
   input += synapse0x18c5480();
   input += synapse0x18c54c0();
   input += synapse0x18c5500();
   input += synapse0x18c5540();
   input += synapse0x18c4fd0();
   input += synapse0x18c5010();
   input += synapse0x18c5690();
   input += synapse0x18c56d0();
   input += synapse0x18c5710();
   input += synapse0x18c5750();
   input += synapse0x18c5790();
   input += synapse0x18c57d0();
   input += synapse0x18c5810();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c4e40() {
   double input = input0x18c4e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c5850() {
   double input = 0.488175;
   input += synapse0x18c5b90();
   input += synapse0x18c5bd0();
   input += synapse0x18c5c10();
   input += synapse0x18c5c50();
   input += synapse0x18c5c90();
   input += synapse0x18c5cd0();
   input += synapse0x18c5d10();
   input += synapse0x18c5d50();
   input += synapse0x18c5d90();
   input += synapse0x18c5dd0();
   input += synapse0x18c5e10();
   input += synapse0x18c5e50();
   input += synapse0x18c5e90();
   input += synapse0x18c5ed0();
   input += synapse0x18c5f10();
   input += synapse0x18c5f50();
   input += synapse0x18c59e0();
   input += synapse0x18c5a20();
   input += synapse0x18c60a0();
   input += synapse0x18c60e0();
   input += synapse0x18c6120();
   input += synapse0x18c6160();
   input += synapse0x18c61a0();
   input += synapse0x18c61e0();
   input += synapse0x18c6220();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c5850() {
   double input = input0x18c5850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c6260() {
   double input = 0.165181;
   input += synapse0x18c65a0();
   input += synapse0x18c65e0();
   input += synapse0x18c6620();
   input += synapse0x18c6660();
   input += synapse0x18c66a0();
   input += synapse0x18c66e0();
   input += synapse0x18c6720();
   input += synapse0x18c6760();
   input += synapse0x18c67a0();
   input += synapse0x18c67e0();
   input += synapse0x18c6820();
   input += synapse0x18c6860();
   input += synapse0x18c68a0();
   input += synapse0x18c68e0();
   input += synapse0x18c6920();
   input += synapse0x18c6960();
   input += synapse0x18c63f0();
   input += synapse0x18c6430();
   input += synapse0x18c6ab0();
   input += synapse0x18c6af0();
   input += synapse0x18c6b30();
   input += synapse0x18c6b70();
   input += synapse0x18c6bb0();
   input += synapse0x18c6bf0();
   input += synapse0x18c6c30();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c6260() {
   double input = input0x18c6260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c6c70() {
   double input = -0.273931;
   input += synapse0x18c6fb0();
   input += synapse0x18c6ff0();
   input += synapse0x18c7030();
   input += synapse0x18c7070();
   input += synapse0x18c70b0();
   input += synapse0x18c70f0();
   input += synapse0x18c7130();
   input += synapse0x18c7170();
   input += synapse0x18c71b0();
   input += synapse0x18c71f0();
   input += synapse0x18c7230();
   input += synapse0x18c7270();
   input += synapse0x18c72b0();
   input += synapse0x18c72f0();
   input += synapse0x18c7330();
   input += synapse0x18c7370();
   input += synapse0x18c6e00();
   input += synapse0x18c6e40();
   input += synapse0x18c74c0();
   input += synapse0x18c7500();
   input += synapse0x18c7540();
   input += synapse0x18c7580();
   input += synapse0x18c75c0();
   input += synapse0x18c7600();
   input += synapse0x18c7640();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c6c70() {
   double input = input0x18c6c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c7680() {
   double input = -0.603415;
   input += synapse0x18c79c0();
   input += synapse0x18c7a00();
   input += synapse0x18c7a40();
   input += synapse0x18c7a80();
   input += synapse0x18c7ac0();
   input += synapse0x18c7b00();
   input += synapse0x18c7b40();
   input += synapse0x18c7b80();
   input += synapse0x18c7bc0();
   input += synapse0x18c7c00();
   input += synapse0x18c7c40();
   input += synapse0x18c7c80();
   input += synapse0x18c7cc0();
   input += synapse0x18c7d00();
   input += synapse0x18c7d40();
   input += synapse0x18c7d80();
   input += synapse0x18c7810();
   input += synapse0x18c7850();
   input += synapse0x18c7ed0();
   input += synapse0x18c7f10();
   input += synapse0x18c7f50();
   input += synapse0x18c7f90();
   input += synapse0x18c7fd0();
   input += synapse0x18c8010();
   input += synapse0x18c8050();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c7680() {
   double input = input0x18c7680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_1500ep_weight::input0x18c8090() {
   double input = -0.468583;
   input += synapse0x18c82b0();
   input += synapse0x18c82f0();
   input += synapse0x18c8330();
   input += synapse0x18c8370();
   input += synapse0x18c83b0();
   input += synapse0x18c83f0();
   input += synapse0x18c8430();
   input += synapse0x18c8470();
   input += synapse0x18c84b0();
   input += synapse0x18c84f0();
   input += synapse0x18c8530();
   input += synapse0x18c8570();
   input += synapse0x18c85b0();
   input += synapse0x18c85f0();
   input += synapse0x18c8630();
   input += synapse0x18c8670();
   input += synapse0x18ad680();
   input += synapse0x18ad6c0();
   input += synapse0x18c87c0();
   input += synapse0x18c8800();
   input += synapse0x18c8840();
   input += synapse0x18c8880();
   input += synapse0x18c88c0();
   input += synapse0x18c8900();
   input += synapse0x18c8940();
   return input;
}

double nnFunc_1C_25_25hi_1500ep_weight::neuron0x18c8090() {
   double input = input0x18c8090();
   return (input * 2.75285)+123.311;
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17b9af0() {
   return (neuron0x18ac640()*-2.14632);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x189bab0() {
   return (neuron0x18ac980()*0.884081);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ada60() {
   return (neuron0x18accc0()*0.202509);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18adaa0() {
   return (neuron0x18ad000()*-7.55778);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18adae0() {
   return (neuron0x18ad340()*1.33003);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ade60() {
   return (neuron0x18ac640()*1.69312);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18adea0() {
   return (neuron0x18ac980()*-0.540686);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18adee0() {
   return (neuron0x18accc0()*-2.46346);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18adf20() {
   return (neuron0x18ad000()*-0.46472);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18adf60() {
   return (neuron0x18ad340()*0.0497444);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae2e0() {
   return (neuron0x18ac640()*0.034919);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae320() {
   return (neuron0x18ac980()*0.19147);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae360() {
   return (neuron0x18accc0()*-0.00351203);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae3a0() {
   return (neuron0x18ad000()*11.1509);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae3e0() {
   return (neuron0x18ad340()*0.229387);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae760() {
   return (neuron0x18ac640()*0.178778);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae7a0() {
   return (neuron0x18ac980()*-0.836083);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17abce0() {
   return (neuron0x18accc0()*-0.275677);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17abd20() {
   return (neuron0x18ad000()*-6.85975);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae8f0() {
   return (neuron0x18ad340()*-1.00606);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aec70() {
   return (neuron0x18ac640()*1.90679);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aecb0() {
   return (neuron0x18ac980()*-0.43919);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aecf0() {
   return (neuron0x18accc0()*0.494088);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aed30() {
   return (neuron0x18ad000()*0.0392195);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aed70() {
   return (neuron0x18ad340()*-1.38963);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af0f0() {
   return (neuron0x18ac640()*-1.86915);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af130() {
   return (neuron0x18ac980()*0.795362);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af170() {
   return (neuron0x18accc0()*1.26209);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af1b0() {
   return (neuron0x18ad000()*1.2698);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af1f0() {
   return (neuron0x18ad340()*1.23071);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af570() {
   return (neuron0x18ac640()*0.0455203);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af5b0() {
   return (neuron0x18ac980()*0.167627);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af5f0() {
   return (neuron0x18accc0()*0.176411);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae7e0() {
   return (neuron0x18ad000()*-8.5428);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae820() {
   return (neuron0x18ad340()*1.53431);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afaf0() {
   return (neuron0x18ac640()*-1.50854);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afb30() {
   return (neuron0x18ac980()*0.224501);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afb70() {
   return (neuron0x18accc0()*1.88497);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afbb0() {
   return (neuron0x18ad000()*-1.9107);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afbf0() {
   return (neuron0x18ad340()*0.0418487);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aff70() {
   return (neuron0x18ac640()*-2.19728);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18affb0() {
   return (neuron0x18ac980()*0.636345);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afff0() {
   return (neuron0x18accc0()*0.887538);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0030() {
   return (neuron0x18ad000()*1.12585);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0070() {
   return (neuron0x18ad340()*0.0241701);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b03f0() {
   return (neuron0x18ac640()*-0.020772);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0430() {
   return (neuron0x18ac980()*-0.0218141);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0470() {
   return (neuron0x18accc0()*0.0930726);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b04b0() {
   return (neuron0x18ad000()*-8.20852);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b04f0() {
   return (neuron0x18ad340()*0.166782);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0870() {
   return (neuron0x18ac640()*0.0863196);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b08b0() {
   return (neuron0x18ac980()*0.135436);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b08f0() {
   return (neuron0x18accc0()*0.525445);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0930() {
   return (neuron0x18ad000()*0.756182);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0970() {
   return (neuron0x18ad340()*-0.849472);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17abb30() {
   return (neuron0x18ac640()*0.00247021);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17abb70() {
   return (neuron0x18ac980()*0.0137691);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0e00() {
   return (neuron0x18accc0()*-0.204262);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0e40() {
   return (neuron0x18ad000()*-7.90851);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0e80() {
   return (neuron0x18ad340()*-1.13787);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1200() {
   return (neuron0x18ac640()*-0.111668);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1240() {
   return (neuron0x18ac980()*1.19343);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1280() {
   return (neuron0x18accc0()*-0.489271);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b12c0() {
   return (neuron0x18ad000()*-0.0250231);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1300() {
   return (neuron0x18ad340()*-0.92009);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17ac300() {
   return (neuron0x18ac640()*0.766584);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af7c0() {
   return (neuron0x18ac980()*-0.190439);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af800() {
   return (neuron0x18accc0()*0.32859);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1750() {
   return (neuron0x18ad000()*-1.83854);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1790() {
   return (neuron0x18ad340()*-1.37172);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1b10() {
   return (neuron0x18ac640()*2.38199);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1b50() {
   return (neuron0x18ac980()*-0.748814);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1b90() {
   return (neuron0x18accc0()*-2.02549);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1bd0() {
   return (neuron0x18ad000()*2.44501);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1c10() {
   return (neuron0x18ad340()*-0.00952629);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1f90() {
   return (neuron0x18ac640()*-0.340223);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ac860() {
   return (neuron0x18ac980()*-1.44593);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ac8a0() {
   return (neuron0x18accc0()*-1.67582);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18acba0() {
   return (neuron0x18ad000()*1.37119);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18acbe0() {
   return (neuron0x18ad340()*0.3122);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b26b0() {
   return (neuron0x18ac640()*4.22852);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b26f0() {
   return (neuron0x18ac980()*-0.420117);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2730() {
   return (neuron0x18accc0()*1.57177);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2770() {
   return (neuron0x18ad000()*-4.06947);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b27b0() {
   return (neuron0x18ad340()*-0.966495);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2b30() {
   return (neuron0x18ac640()*-0.00437853);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2b70() {
   return (neuron0x18ac980()*2.06381);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2bb0() {
   return (neuron0x18accc0()*0.539611);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2bf0() {
   return (neuron0x18ad000()*3.3298);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2c30() {
   return (neuron0x18ad340()*1.0416);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2fb0() {
   return (neuron0x18ac640()*2.13552);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2ff0() {
   return (neuron0x18ac980()*-0.128747);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3030() {
   return (neuron0x18accc0()*-1.16738);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3070() {
   return (neuron0x18ad000()*3.19139);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b30b0() {
   return (neuron0x18ad340()*-0.257865);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3430() {
   return (neuron0x18ac640()*-1.60791);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3470() {
   return (neuron0x18ac980()*0.875108);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b34b0() {
   return (neuron0x18accc0()*-0.0634);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b34f0() {
   return (neuron0x18ad000()*1.21188);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3530() {
   return (neuron0x18ad340()*1.11851);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b38b0() {
   return (neuron0x18ac640()*2.74925);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b38f0() {
   return (neuron0x18ac980()*-1.06986);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3930() {
   return (neuron0x18accc0()*-2.88819);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3970() {
   return (neuron0x18ad000()*-0.311493);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b39b0() {
   return (neuron0x18ad340()*-0.880883);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3d30() {
   return (neuron0x18ac640()*0.0252797);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3d70() {
   return (neuron0x18ac980()*-0.682687);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3db0() {
   return (neuron0x18accc0()*-0.262692);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3df0() {
   return (neuron0x18ad000()*2.09833);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3e30() {
   return (neuron0x18ad340()*-0.658862);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b41b0() {
   return (neuron0x18ac640()*3.08844);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b41f0() {
   return (neuron0x18ac980()*-0.368308);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4230() {
   return (neuron0x18accc0()*-0.700613);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4270() {
   return (neuron0x18ad000()*-0.717462);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b42b0() {
   return (neuron0x18ad340()*-0.183367);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4630() {
   return (neuron0x18ac640()*0.11676);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4670() {
   return (neuron0x18ac980()*0.0607311);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b46b0() {
   return (neuron0x18accc0()*0.538196);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b46f0() {
   return (neuron0x18ad000()*0.376448);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4730() {
   return (neuron0x18ad340()*-1.16173);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4ab0() {
   return (neuron0x18ac640()*-2.45142);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4af0() {
   return (neuron0x18ac980()*0.302829);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4b30() {
   return (neuron0x18accc0()*1.22008);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4b70() {
   return (neuron0x18ad000()*-4.28155);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4bb0() {
   return (neuron0x18ad340()*-0.124745);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae6d0() {
   return (neuron0x18ad7b0()*1.25304);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae710() {
   return (neuron0x18adb20()*-1.33106);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aebe0() {
   return (neuron0x18adfa0()*-2.25017);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aec20() {
   return (neuron0x18ae420()*-2.39565);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af060() {
   return (neuron0x18ae930()*0.544267);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af0a0() {
   return (neuron0x18aedb0()*-1.98652);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af4e0() {
   return (neuron0x18af230()*-1.83055);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af520() {
   return (neuron0x18af840()*-2.01558);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afa60() {
   return (neuron0x18afc30()*-0.413347);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afaa0() {
   return (neuron0x18b00b0()*-0.340425);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afee0() {
   return (neuron0x18b0530()*-0.174061);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aff20() {
   return (neuron0x18b09b0()*-2.93572);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0360() {
   return (neuron0x18b0ec0()*-1.92478);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b03a0() {
   return (neuron0x18af630()*-0.110894);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b07e0() {
   return (neuron0x18b17d0()*-1.19215);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0820() {
   return (neuron0x18b1c50()*-2.65246);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0c60() {
   return (neuron0x18b2520()*-0.673962);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0ca0() {
   return (neuron0x18b27f0()*-1.67067);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1170() {
   return (neuron0x18b2c70()*-3.40134);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b11b0() {
   return (neuron0x18b30f0()*-1.51369);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1a80() {
   return (neuron0x18b3570()*-1.44389);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1ac0() {
   return (neuron0x18b39f0()*-2.81499);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1f00() {
   return (neuron0x18b3e70()*-0.906755);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1f40() {
   return (neuron0x18b42f0()*0.524442);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad560() {
   return (neuron0x18b4770()*-1.18446);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b15e0() {
   return (neuron0x18ad7b0()*-0.903086);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1620() {
   return (neuron0x18adb20()*0.992768);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1660() {
   return (neuron0x18adfa0()*1.52844);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b16a0() {
   return (neuron0x18ae420()*1.30281);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b16e0() {
   return (neuron0x18ae930()*0.448198);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad5a0() {
   return (neuron0x18aedb0()*1.36062);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3820() {
   return (neuron0x18af230()*0.483291);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3860() {
   return (neuron0x18af840()*0.74042);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3ca0() {
   return (neuron0x18afc30()*0.429042);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3ce0() {
   return (neuron0x18b00b0()*-0.364802);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4120() {
   return (neuron0x18b0530()*0.479233);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4160() {
   return (neuron0x18b09b0()*1.41477);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b45a0() {
   return (neuron0x18b0ec0()*0.220333);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b45e0() {
   return (neuron0x18af630()*-0.00153037);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4a20() {
   return (neuron0x18b17d0()*0.650638);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4a60() {
   return (neuron0x18b1c50()*0.930803);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad9d0() {
   return (neuron0x18b2520()*0.072535);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ada10() {
   return (neuron0x18b27f0()*0.924137);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2aa0() {
   return (neuron0x18b2c70()*2.49582);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2ae0() {
   return (neuron0x18b30f0()*-0.138063);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17b9bc0() {
   return (neuron0x18b3570()*0.486371);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x17b9c00() {
   return (neuron0x18b39f0()*1.33428);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7130() {
   return (neuron0x18b3e70()*-0.258292);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7170() {
   return (neuron0x18b42f0()*-0.14162);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b71b0() {
   return (neuron0x18b4770()*1.06367);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0cf0() {
   return (neuron0x18ad7b0()*-0.179674);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0d30() {
   return (neuron0x18adb20()*-0.574882);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0d70() {
   return (neuron0x18adfa0()*0.0595171);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0db0() {
   return (neuron0x18ae420()*-1.00173);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7740() {
   return (neuron0x18ae930()*0.468243);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7780() {
   return (neuron0x18aedb0()*-0.14901);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b77c0() {
   return (neuron0x18af230()*-0.264667);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7800() {
   return (neuron0x18af840()*-0.737776);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7840() {
   return (neuron0x18afc30()*-0.0800993);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7880() {
   return (neuron0x18b00b0()*0.585353);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b78c0() {
   return (neuron0x18b0530()*0.490602);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7900() {
   return (neuron0x18b09b0()*-1.01883);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7940() {
   return (neuron0x18b0ec0()*0.135485);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7980() {
   return (neuron0x18af630()*-0.387354);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b79c0() {
   return (neuron0x18b17d0()*0.00753207);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7a00() {
   return (neuron0x18b1c50()*-0.0258304);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7380() {
   return (neuron0x18b2520()*-0.295413);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b73c0() {
   return (neuron0x18b27f0()*0.0143606);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7b50() {
   return (neuron0x18b2c70()*-0.453037);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7b90() {
   return (neuron0x18b30f0()*-0.463484);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7bd0() {
   return (neuron0x18b3570()*-0.11417);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7c10() {
   return (neuron0x18b39f0()*-0.292652);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7c50() {
   return (neuron0x18b3e70()*0.481429);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7c90() {
   return (neuron0x18b42f0()*0.846308);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7cd0() {
   return (neuron0x18b4770()*-1.12038);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8050() {
   return (neuron0x18ad7b0()*0.572701);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8090() {
   return (neuron0x18adb20()*0.432388);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b80d0() {
   return (neuron0x18adfa0()*-0.353442);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8110() {
   return (neuron0x18ae420()*-0.348072);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8150() {
   return (neuron0x18ae930()*0.516014);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8190() {
   return (neuron0x18aedb0()*-0.699223);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b81d0() {
   return (neuron0x18af230()*-0.130029);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8210() {
   return (neuron0x18af840()*-0.270137);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8250() {
   return (neuron0x18afc30()*0.561525);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8290() {
   return (neuron0x18b00b0()*0.673757);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b82d0() {
   return (neuron0x18b0530()*0.471683);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8310() {
   return (neuron0x18b09b0()*-0.873577);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8350() {
   return (neuron0x18b0ec0()*-0.153344);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8390() {
   return (neuron0x18af630()*0.11721);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b83d0() {
   return (neuron0x18b17d0()*-0.194617);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8410() {
   return (neuron0x18b1c50()*-0.62154);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7ea0() {
   return (neuron0x18b2520()*0.379594);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b7ee0() {
   return (neuron0x18b27f0()*-0.565433);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8560() {
   return (neuron0x18b2c70()*-0.422089);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b85a0() {
   return (neuron0x18b30f0()*-0.29217);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b85e0() {
   return (neuron0x18b3570()*-0.0495265);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8620() {
   return (neuron0x18b39f0()*-0.636638);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8660() {
   return (neuron0x18b3e70()*-0.212044);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b86a0() {
   return (neuron0x18b42f0()*0.86349);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b86e0() {
   return (neuron0x18b4770()*-0.430258);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8a60() {
   return (neuron0x18ad7b0()*-0.332084);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8aa0() {
   return (neuron0x18adb20()*0.280283);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8ae0() {
   return (neuron0x18adfa0()*-0.404211);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8b20() {
   return (neuron0x18ae420()*-0.480225);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8b60() {
   return (neuron0x18ae930()*0.0751686);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8ba0() {
   return (neuron0x18aedb0()*-0.937935);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8be0() {
   return (neuron0x18af230()*-0.479709);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8c20() {
   return (neuron0x18af840()*-0.190034);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8c60() {
   return (neuron0x18afc30()*0.1389);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8ca0() {
   return (neuron0x18b00b0()*-0.0416839);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8ce0() {
   return (neuron0x18b0530()*-0.00597873);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8d20() {
   return (neuron0x18b09b0()*-0.65499);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8d60() {
   return (neuron0x18b0ec0()*0.15696);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8da0() {
   return (neuron0x18af630()*-0.121333);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8de0() {
   return (neuron0x18b17d0()*0.0543983);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8e20() {
   return (neuron0x18b1c50()*0.00206013);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b88b0() {
   return (neuron0x18b2520()*-0.263882);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b88f0() {
   return (neuron0x18b27f0()*-0.140296);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8f70() {
   return (neuron0x18b2c70()*-0.362654);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8fb0() {
   return (neuron0x18b30f0()*-0.667701);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b8ff0() {
   return (neuron0x18b3570()*0.110569);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b9030() {
   return (neuron0x18b39f0()*-0.638097);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b9070() {
   return (neuron0x18b3e70()*0.0286394);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b90b0() {
   return (neuron0x18b42f0()*0.206711);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b90f0() {
   return (neuron0x18b4770()*-0.601636);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b9470() {
   return (neuron0x18ad7b0()*0.220368);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b94b0() {
   return (neuron0x18adb20()*0.272216);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b94f0() {
   return (neuron0x18adfa0()*0.444982);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b9530() {
   return (neuron0x18ae420()*0.267047);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b9570() {
   return (neuron0x18ae930()*0.110431);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b95b0() {
   return (neuron0x18aedb0()*0.520396);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b95f0() {
   return (neuron0x18af230()*-0.812142);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6810() {
   return (neuron0x18af840()*-0.250429);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6850() {
   return (neuron0x18afc30()*-0.0251241);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6890() {
   return (neuron0x18b00b0()*0.433196);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b68d0() {
   return (neuron0x18b0530()*0.627206);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6910() {
   return (neuron0x18b09b0()*-0.26897);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6950() {
   return (neuron0x18b0ec0()*-0.22584);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6990() {
   return (neuron0x18af630()*-0.191206);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b69d0() {
   return (neuron0x18b17d0()*-0.0831225);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6a10() {
   return (neuron0x18b1c50()*0.0419045);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b92c0() {
   return (neuron0x18b2520()*0.38256);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b9300() {
   return (neuron0x18b27f0()*0.0771895);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6b60() {
   return (neuron0x18b2c70()*0.643206);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6ba0() {
   return (neuron0x18b30f0()*-0.478198);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6be0() {
   return (neuron0x18b3570()*0.163723);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6c20() {
   return (neuron0x18b39f0()*0.508688);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6c60() {
   return (neuron0x18b3e70()*0.254111);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6ca0() {
   return (neuron0x18b42f0()*0.435741);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6ce0() {
   return (neuron0x18b4770()*-0.0866361);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6fd0() {
   return (neuron0x18ad7b0()*-0.745438);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba6d0() {
   return (neuron0x18adb20()*-0.242801);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba710() {
   return (neuron0x18adfa0()*0.265036);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba750() {
   return (neuron0x18ae420()*-0.198676);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba790() {
   return (neuron0x18ae930()*-0.324345);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba7d0() {
   return (neuron0x18aedb0()*-0.484729);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba810() {
   return (neuron0x18af230()*-0.0884734);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba850() {
   return (neuron0x18af840()*-0.74517);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba890() {
   return (neuron0x18afc30()*-0.484093);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba8d0() {
   return (neuron0x18b00b0()*-0.829937);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba910() {
   return (neuron0x18b0530()*-0.255351);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba950() {
   return (neuron0x18b09b0()*-0.648167);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba990() {
   return (neuron0x18b0ec0()*-0.214678);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba9d0() {
   return (neuron0x18af630()*-0.811347);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18baa10() {
   return (neuron0x18b17d0()*-0.307662);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18baa50() {
   return (neuron0x18b1c50()*-0.519013);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6eb0() {
   return (neuron0x18b2520()*0.0935553);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b6ef0() {
   return (neuron0x18b27f0()*-0.58395);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18baba0() {
   return (neuron0x18b2c70()*0.485096);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18babe0() {
   return (neuron0x18b30f0()*0.130307);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bac20() {
   return (neuron0x18b3570()*-0.115204);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bac60() {
   return (neuron0x18b39f0()*0.137912);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18baca0() {
   return (neuron0x18b3e70()*-0.379862);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bace0() {
   return (neuron0x18b42f0()*-0.463483);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bad20() {
   return (neuron0x18b4770()*-0.323902);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb0a0() {
   return (neuron0x18ad7b0()*0.745773);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb0e0() {
   return (neuron0x18adb20()*-0.57967);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb120() {
   return (neuron0x18adfa0()*-0.647658);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb160() {
   return (neuron0x18ae420()*0.506342);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb1a0() {
   return (neuron0x18ae930()*-0.188829);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb1e0() {
   return (neuron0x18aedb0()*-0.337642);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb220() {
   return (neuron0x18af230()*-0.105366);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb260() {
   return (neuron0x18af840()*-0.218454);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb2a0() {
   return (neuron0x18afc30()*-0.378421);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb2e0() {
   return (neuron0x18b00b0()*0.558574);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb320() {
   return (neuron0x18b0530()*0.154661);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb360() {
   return (neuron0x18b09b0()*0.0450208);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb3a0() {
   return (neuron0x18b0ec0()*-0.278669);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb3e0() {
   return (neuron0x18af630()*-0.261727);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb420() {
   return (neuron0x18b17d0()*-0.393507);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb460() {
   return (neuron0x18b1c50()*-0.0865789);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18baef0() {
   return (neuron0x18b2520()*0.179964);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18baf30() {
   return (neuron0x18b27f0()*-0.546776);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb5b0() {
   return (neuron0x18b2c70()*-1.25559);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb5f0() {
   return (neuron0x18b30f0()*0.383704);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb630() {
   return (neuron0x18b3570()*-0.518345);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb670() {
   return (neuron0x18b39f0()*-0.442039);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb6b0() {
   return (neuron0x18b3e70()*0.0733676);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb6f0() {
   return (neuron0x18b42f0()*-0.140144);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb730() {
   return (neuron0x18b4770()*-0.493697);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbab0() {
   return (neuron0x18ad7b0()*-0.106688);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbaf0() {
   return (neuron0x18adb20()*0.756417);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbb30() {
   return (neuron0x18adfa0()*1.0548);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbb70() {
   return (neuron0x18ae420()*0.838147);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbbb0() {
   return (neuron0x18ae930()*-0.580484);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbbf0() {
   return (neuron0x18aedb0()*0.523651);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbc30() {
   return (neuron0x18af230()*0.497532);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbc70() {
   return (neuron0x18af840()*0.950837);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbcb0() {
   return (neuron0x18afc30()*0.0242258);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbcf0() {
   return (neuron0x18b00b0()*0.138873);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbd30() {
   return (neuron0x18b0530()*-0.386364);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbd70() {
   return (neuron0x18b09b0()*1.16941);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbdb0() {
   return (neuron0x18b0ec0()*0.410719);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbdf0() {
   return (neuron0x18af630()*0.0542368);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbe30() {
   return (neuron0x18b17d0()*0.094506);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbe70() {
   return (neuron0x18b1c50()*0.663179);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb900() {
   return (neuron0x18b2520()*-0.410552);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bb940() {
   return (neuron0x18b27f0()*1.06535);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bbfc0() {
   return (neuron0x18b2c70()*1.08627);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc000() {
   return (neuron0x18b30f0()*0.52433);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc040() {
   return (neuron0x18b3570()*0.4485);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc080() {
   return (neuron0x18b39f0()*0.653024);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc0c0() {
   return (neuron0x18b3e70()*-0.446933);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc100() {
   return (neuron0x18b42f0()*0.0914807);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc140() {
   return (neuron0x18b4770()*0.720885);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc4c0() {
   return (neuron0x18ad7b0()*0.583412);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc500() {
   return (neuron0x18adb20()*0.451519);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc540() {
   return (neuron0x18adfa0()*-3.3346);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc580() {
   return (neuron0x18ae420()*-0.695308);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc5c0() {
   return (neuron0x18ae930()*0.909566);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc600() {
   return (neuron0x18aedb0()*-0.190583);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc640() {
   return (neuron0x18af230()*-2.95055);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc680() {
   return (neuron0x18af840()*0.213046);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc6c0() {
   return (neuron0x18afc30()*0.88856);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc700() {
   return (neuron0x18b00b0()*2.13484);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc740() {
   return (neuron0x18b0530()*1.20549);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc780() {
   return (neuron0x18b09b0()*-2.32734);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc7c0() {
   return (neuron0x18b0ec0()*0.849853);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc800() {
   return (neuron0x18af630()*0.834933);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc840() {
   return (neuron0x18b17d0()*-0.164583);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc880() {
   return (neuron0x18b1c50()*-1.21459);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc310() {
   return (neuron0x18b2520()*0.00962413);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc350() {
   return (neuron0x18b27f0()*-0.657989);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bc9d0() {
   return (neuron0x18b2c70()*0.0296325);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bca10() {
   return (neuron0x18b30f0()*0.127292);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bca50() {
   return (neuron0x18b3570()*0.578772);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bca90() {
   return (neuron0x18b39f0()*0.876803);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcad0() {
   return (neuron0x18b3e70()*-0.33432);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcb10() {
   return (neuron0x18b42f0()*0.781347);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcb50() {
   return (neuron0x18b4770()*-0.107282);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bced0() {
   return (neuron0x18ad7b0()*-1.2591);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcf10() {
   return (neuron0x18adb20()*-0.354003);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcf50() {
   return (neuron0x18adfa0()*1.49293);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcf90() {
   return (neuron0x18ae420()*1.10615);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcfd0() {
   return (neuron0x18ae930()*-1.12433);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd010() {
   return (neuron0x18aedb0()*1.13872);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd050() {
   return (neuron0x18af230()*0.437751);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd090() {
   return (neuron0x18af840()*1.2529);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd0d0() {
   return (neuron0x18afc30()*-0.341087);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd110() {
   return (neuron0x18b00b0()*-0.73079);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd150() {
   return (neuron0x18b0530()*-0.655985);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd190() {
   return (neuron0x18b09b0()*1.50428);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd1d0() {
   return (neuron0x18b0ec0()*1.09735);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd210() {
   return (neuron0x18af630()*-0.951801);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd250() {
   return (neuron0x18b17d0()*-0.128207);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd290() {
   return (neuron0x18b1c50()*0.826291);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcd20() {
   return (neuron0x18b2520()*-0.779898);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bcd60() {
   return (neuron0x18b27f0()*1.33779);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd3e0() {
   return (neuron0x18b2c70()*2.14104);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd420() {
   return (neuron0x18b30f0()*1.12313);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd460() {
   return (neuron0x18b3570()*-0.4122);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd4a0() {
   return (neuron0x18b39f0()*0.844455);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd4e0() {
   return (neuron0x18b3e70()*0.482619);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd520() {
   return (neuron0x18b42f0()*-0.577286);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd560() {
   return (neuron0x18b4770()*0.582875);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd8e0() {
   return (neuron0x18ad7b0()*-1.08239);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd920() {
   return (neuron0x18adb20()*0.0416413);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd960() {
   return (neuron0x18adfa0()*0.886462);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd9a0() {
   return (neuron0x18ae420()*1.98414);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd9e0() {
   return (neuron0x18ae930()*-1.88501);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bda20() {
   return (neuron0x18aedb0()*2.05738);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bda60() {
   return (neuron0x18af230()*0.413133);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdaa0() {
   return (neuron0x18af840()*1.65068);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdae0() {
   return (neuron0x18afc30()*-0.914642);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdb20() {
   return (neuron0x18b00b0()*-0.592498);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdb60() {
   return (neuron0x18b0530()*-0.468407);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdba0() {
   return (neuron0x18b09b0()*1.58698);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdbe0() {
   return (neuron0x18b0ec0()*-0.0115365);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdc20() {
   return (neuron0x18af630()*-0.812318);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdc60() {
   return (neuron0x18b17d0()*-0.69763);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdca0() {
   return (neuron0x18b1c50()*1.11709);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd730() {
   return (neuron0x18b2520()*-1.23951);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bd770() {
   return (neuron0x18b27f0()*1.39289);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bddf0() {
   return (neuron0x18b2c70()*2.42229);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bde30() {
   return (neuron0x18b30f0()*1.2264);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bde70() {
   return (neuron0x18b3570()*-0.561144);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdeb0() {
   return (neuron0x18b39f0()*1.60288);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdef0() {
   return (neuron0x18b3e70()*-0.088041);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdf30() {
   return (neuron0x18b42f0()*-1.36784);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bdf70() {
   return (neuron0x18b4770()*1.36194);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be2f0() {
   return (neuron0x18ad7b0()*1.06881);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be330() {
   return (neuron0x18adb20()*0.901256);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be370() {
   return (neuron0x18adfa0()*0.280012);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be3b0() {
   return (neuron0x18ae420()*-0.113839);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be3f0() {
   return (neuron0x18ae930()*0.925409);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be430() {
   return (neuron0x18aedb0()*0.649661);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be470() {
   return (neuron0x18af230()*-0.237651);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be4b0() {
   return (neuron0x18af840()*0.750948);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be4f0() {
   return (neuron0x18afc30()*-0.0188192);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be530() {
   return (neuron0x18b00b0()*1.3107);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be570() {
   return (neuron0x18b0530()*0.399533);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be5b0() {
   return (neuron0x18b09b0()*0.114321);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be5f0() {
   return (neuron0x18b0ec0()*0.491368);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be630() {
   return (neuron0x18af630()*0.703168);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be670() {
   return (neuron0x18b17d0()*0.792023);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be6b0() {
   return (neuron0x18b1c50()*-0.122916);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be140() {
   return (neuron0x18b2520()*0.603854);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be180() {
   return (neuron0x18b27f0()*0.618445);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be800() {
   return (neuron0x18b2c70()*-0.176132);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be840() {
   return (neuron0x18b30f0()*0.0447192);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be880() {
   return (neuron0x18b3570()*-0.0929068);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be8c0() {
   return (neuron0x18b39f0()*0.309019);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be900() {
   return (neuron0x18b3e70()*0.573986);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be940() {
   return (neuron0x18b42f0()*0.491308);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18be980() {
   return (neuron0x18b4770()*-0.129863);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bed00() {
   return (neuron0x18ad7b0()*-1.43011);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bed40() {
   return (neuron0x18adb20()*0.431839);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bed80() {
   return (neuron0x18adfa0()*0.907831);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bedc0() {
   return (neuron0x18ae420()*1.10028);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bee00() {
   return (neuron0x18ae930()*-1.09586);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bee40() {
   return (neuron0x18aedb0()*1.45666);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bee80() {
   return (neuron0x18af230()*0.508949);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18beec0() {
   return (neuron0x18af840()*1.05092);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bef00() {
   return (neuron0x18afc30()*-0.124782);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bef40() {
   return (neuron0x18b00b0()*-0.602509);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bef80() {
   return (neuron0x18b0530()*-0.503729);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18befc0() {
   return (neuron0x18b09b0()*1.10115);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf000() {
   return (neuron0x18b0ec0()*0.806443);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf040() {
   return (neuron0x18af630()*-0.502114);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf080() {
   return (neuron0x18b17d0()*-0.170182);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf0c0() {
   return (neuron0x18b1c50()*1.2285);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18beb50() {
   return (neuron0x18b2520()*-0.746742);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18beb90() {
   return (neuron0x18b27f0()*1.10392);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf210() {
   return (neuron0x18b2c70()*1.8614);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf250() {
   return (neuron0x18b30f0()*1.0923);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf290() {
   return (neuron0x18b3570()*0.116751);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf2d0() {
   return (neuron0x18b39f0()*1.52927);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf310() {
   return (neuron0x18b3e70()*0.548658);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf350() {
   return (neuron0x18b42f0()*-0.799582);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf390() {
   return (neuron0x18b4770()*0.695459);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf710() {
   return (neuron0x18ad7b0()*0.0625557);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf750() {
   return (neuron0x18adb20()*-0.238157);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf790() {
   return (neuron0x18adfa0()*0.366206);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf7d0() {
   return (neuron0x18ae420()*0.47882);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf810() {
   return (neuron0x18ae930()*-0.00617412);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf850() {
   return (neuron0x18aedb0()*0.387839);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf890() {
   return (neuron0x18af230()*0.298404);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf8d0() {
   return (neuron0x18af840()*0.578998);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf910() {
   return (neuron0x18afc30()*-0.42951);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf950() {
   return (neuron0x18b00b0()*-0.376921);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf990() {
   return (neuron0x18b0530()*-0.135189);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf9d0() {
   return (neuron0x18b09b0()*0.595703);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfa10() {
   return (neuron0x18b0ec0()*0.729532);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfa50() {
   return (neuron0x18af630()*-0.288786);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfa90() {
   return (neuron0x18b17d0()*0.30216);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfad0() {
   return (neuron0x18b1c50()*0.738653);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf560() {
   return (neuron0x18b2520()*-0.71999);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bf5a0() {
   return (neuron0x18b27f0()*0.442333);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfc20() {
   return (neuron0x18b2c70()*0.881011);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfc60() {
   return (neuron0x18b30f0()*-0.0585191);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfca0() {
   return (neuron0x18b3570()*-0.316996);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfce0() {
   return (neuron0x18b39f0()*0.415157);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfd20() {
   return (neuron0x18b3e70()*-0.161438);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfd60() {
   return (neuron0x18b42f0()*-1.0457);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bfda0() {
   return (neuron0x18b4770()*0.234642);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c0120() {
   return (neuron0x18ad7b0()*0.0492563);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad940() {
   return (neuron0x18adb20()*-0.0278098);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad980() {
   return (neuron0x18adfa0()*-3.93676);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18add40() {
   return (neuron0x18ae420()*0.254686);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18add80() {
   return (neuron0x18ae930()*0.591513);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae1c0() {
   return (neuron0x18aedb0()*0.11987);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae200() {
   return (neuron0x18af230()*-3.57089);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae640() {
   return (neuron0x18af840()*0.400446);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ae680() {
   return (neuron0x18afc30()*0.338763);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aeb50() {
   return (neuron0x18b00b0()*2.59785);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aeb90() {
   return (neuron0x18b0530()*2.57252);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18aefd0() {
   return (neuron0x18b09b0()*-1.71309);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af010() {
   return (neuron0x18b0ec0()*1.5577);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af450() {
   return (neuron0x18af630()*0.408924);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af490() {
   return (neuron0x18b17d0()*0.565433);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18af9d0() {
   return (neuron0x18b1c50()*0.851318);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afa10() {
   return (neuron0x18b2520()*0.0833459);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afe50() {
   return (neuron0x18b27f0()*-1.01284);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18afe90() {
   return (neuron0x18b2c70()*-0.560295);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b02d0() {
   return (neuron0x18b30f0()*0.461932);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0310() {
   return (neuron0x18b3570()*0.503159);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0750() {
   return (neuron0x18b39f0()*1.19352);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0790() {
   return (neuron0x18b3e70()*0.147881);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0bd0() {
   return (neuron0x18b42f0()*1.07279);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b0c10() {
   return (neuron0x18b4770()*-0.0957574);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba590() {
   return (neuron0x18ad7b0()*-0.445925);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ba5d0() {
   return (neuron0x18adb20()*0.347697);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1e70() {
   return (neuron0x18adfa0()*-0.281094);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1eb0() {
   return (neuron0x18ae420()*0.163777);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bff70() {
   return (neuron0x18ae930()*0.267035);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18bffb0() {
   return (neuron0x18aedb0()*0.00463161);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad220() {
   return (neuron0x18af230()*-0.642619);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad260() {
   return (neuron0x18af840()*-0.124392);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2a10() {
   return (neuron0x18afc30()*0.137294);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2a50() {
   return (neuron0x18b00b0()*2.02594);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2e90() {
   return (neuron0x18b0530()*0.909495);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b2ed0() {
   return (neuron0x18b09b0()*-0.00286712);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3310() {
   return (neuron0x18b0ec0()*-0.769836);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3350() {
   return (neuron0x18af630()*-0.105852);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3790() {
   return (neuron0x18b17d0()*-0.397748);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b37d0() {
   return (neuron0x18b1c50()*-0.622593);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3c10() {
   return (neuron0x18b2520()*0.0236189);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b3c50() {
   return (neuron0x18b27f0()*-0.0953457);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4090() {
   return (neuron0x18b2c70()*-0.620411);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b40d0() {
   return (neuron0x18b30f0()*-0.174204);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4510() {
   return (neuron0x18b3570()*0.281032);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4550() {
   return (neuron0x18b39f0()*-0.10494);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b4990() {
   return (neuron0x18b3e70()*-0.0155337);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b49d0() {
   return (neuron0x18b42f0()*0.802695);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b10e0() {
   return (neuron0x18b4770()*0.130204);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18b1120() {
   return (neuron0x18ad7b0()*-0.7126);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3390() {
   return (neuron0x18adb20()*-0.455504);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c33d0() {
   return (neuron0x18adfa0()*0.988317);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3410() {
   return (neuron0x18ae420()*0.521558);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3450() {
   return (neuron0x18ae930()*-0.462489);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3490() {
   return (neuron0x18aedb0()*0.483249);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c34d0() {
   return (neuron0x18af230()*0.12328);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3510() {
   return (neuron0x18af840()*0.0931021);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3550() {
   return (neuron0x18afc30()*-0.759408);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3590() {
   return (neuron0x18b00b0()*-0.453254);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c35d0() {
   return (neuron0x18b0530()*-0.740386);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3610() {
   return (neuron0x18b09b0()*0.195115);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3650() {
   return (neuron0x18b0ec0()*0.241693);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3690() {
   return (neuron0x18af630()*-0.089258);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c36d0() {
   return (neuron0x18b17d0()*-0.102809);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3710() {
   return (neuron0x18b1c50()*0.587295);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c31e0() {
   return (neuron0x18b2520()*0.309085);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3220() {
   return (neuron0x18b27f0()*0.437971);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3860() {
   return (neuron0x18b2c70()*0.837758);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c38a0() {
   return (neuron0x18b30f0()*0.120228);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c38e0() {
   return (neuron0x18b3570()*-0.00711561);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3920() {
   return (neuron0x18b39f0()*-0.0143273);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3960() {
   return (neuron0x18b3e70()*-0.291884);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c39a0() {
   return (neuron0x18b42f0()*-0.0610939);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c39e0() {
   return (neuron0x18b4770()*-0.364119);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3d60() {
   return (neuron0x18ad7b0()*-0.273487);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3da0() {
   return (neuron0x18adb20()*-0.286576);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3de0() {
   return (neuron0x18adfa0()*-0.0449552);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3e20() {
   return (neuron0x18ae420()*-0.436892);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3e60() {
   return (neuron0x18ae930()*0.548238);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3ea0() {
   return (neuron0x18aedb0()*-0.0866244);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3ee0() {
   return (neuron0x18af230()*0.179601);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3f20() {
   return (neuron0x18af840()*-0.70732);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3f60() {
   return (neuron0x18afc30()*0.269815);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3fa0() {
   return (neuron0x18b00b0()*1.1609);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3fe0() {
   return (neuron0x18b0530()*0.879731);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4020() {
   return (neuron0x18b09b0()*-0.776217);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4060() {
   return (neuron0x18b0ec0()*0.0598305);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c40a0() {
   return (neuron0x18af630()*0.134271);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c40e0() {
   return (neuron0x18b17d0()*-0.296232);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4120() {
   return (neuron0x18b1c50()*-0.443344);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3bb0() {
   return (neuron0x18b2520()*-0.125596);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c3bf0() {
   return (neuron0x18b27f0()*-0.0306292);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4270() {
   return (neuron0x18b2c70()*-0.704473);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c42b0() {
   return (neuron0x18b30f0()*-0.394709);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c42f0() {
   return (neuron0x18b3570()*-0.392336);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4330() {
   return (neuron0x18b39f0()*-0.469801);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4370() {
   return (neuron0x18b3e70()*0.114259);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c43b0() {
   return (neuron0x18b42f0()*0.725952);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c43f0() {
   return (neuron0x18b4770()*-0.539762);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4770() {
   return (neuron0x18ad7b0()*-1.1842);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c47b0() {
   return (neuron0x18adb20()*0.117031);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c47f0() {
   return (neuron0x18adfa0()*1.06162);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4830() {
   return (neuron0x18ae420()*1.01963);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4870() {
   return (neuron0x18ae930()*-0.882505);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c48b0() {
   return (neuron0x18aedb0()*0.692935);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c48f0() {
   return (neuron0x18af230()*0.0875393);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4930() {
   return (neuron0x18af840()*0.536332);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4970() {
   return (neuron0x18afc30()*-0.370503);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c49b0() {
   return (neuron0x18b00b0()*-0.24688);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c49f0() {
   return (neuron0x18b0530()*-0.306597);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4a30() {
   return (neuron0x18b09b0()*0.50934);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4a70() {
   return (neuron0x18b0ec0()*0.327312);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4ab0() {
   return (neuron0x18af630()*-0.187333);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4af0() {
   return (neuron0x18b17d0()*-0.500838);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4b30() {
   return (neuron0x18b1c50()*0.407093);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c45c0() {
   return (neuron0x18b2520()*-0.861738);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4600() {
   return (neuron0x18b27f0()*0.516442);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4c80() {
   return (neuron0x18b2c70()*0.982397);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4cc0() {
   return (neuron0x18b30f0()*0.356448);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4d00() {
   return (neuron0x18b3570()*-0.0654546);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4d40() {
   return (neuron0x18b39f0()*0.439415);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4d80() {
   return (neuron0x18b3e70()*0.0680848);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4dc0() {
   return (neuron0x18b42f0()*-0.799339);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4e00() {
   return (neuron0x18b4770()*-0.102644);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5180() {
   return (neuron0x18ad7b0()*-0.0734322);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c51c0() {
   return (neuron0x18adb20()*-0.167282);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5200() {
   return (neuron0x18adfa0()*0.0841619);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5240() {
   return (neuron0x18ae420()*-0.36593);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5280() {
   return (neuron0x18ae930()*-0.289152);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c52c0() {
   return (neuron0x18aedb0()*0.00418322);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5300() {
   return (neuron0x18af230()*-1.50337);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5340() {
   return (neuron0x18af840()*0.0833593);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5380() {
   return (neuron0x18afc30()*0.945592);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c53c0() {
   return (neuron0x18b00b0()*0.564045);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5400() {
   return (neuron0x18b0530()*1.99451);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5440() {
   return (neuron0x18b09b0()*-0.961187);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5480() {
   return (neuron0x18b0ec0()*-0.236174);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c54c0() {
   return (neuron0x18af630()*0.0492681);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5500() {
   return (neuron0x18b17d0()*-0.206115);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5540() {
   return (neuron0x18b1c50()*-0.0599317);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c4fd0() {
   return (neuron0x18b2520()*-0.00822475);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5010() {
   return (neuron0x18b27f0()*0.151847);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5690() {
   return (neuron0x18b2c70()*-0.595058);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c56d0() {
   return (neuron0x18b30f0()*0.0803715);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5710() {
   return (neuron0x18b3570()*0.201917);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5750() {
   return (neuron0x18b39f0()*0.527321);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5790() {
   return (neuron0x18b3e70()*0.558949);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c57d0() {
   return (neuron0x18b42f0()*0.878246);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5810() {
   return (neuron0x18b4770()*-0.195162);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5b90() {
   return (neuron0x18ad7b0()*0.174344);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5bd0() {
   return (neuron0x18adb20()*-0.25225);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5c10() {
   return (neuron0x18adfa0()*-0.685286);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5c50() {
   return (neuron0x18ae420()*-0.200096);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5c90() {
   return (neuron0x18ae930()*0.0436601);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5cd0() {
   return (neuron0x18aedb0()*0.271214);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5d10() {
   return (neuron0x18af230()*0.296752);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5d50() {
   return (neuron0x18af840()*0.351417);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5d90() {
   return (neuron0x18afc30()*0.485938);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5dd0() {
   return (neuron0x18b00b0()*-1.32196);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5e10() {
   return (neuron0x18b0530()*0.19268);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5e50() {
   return (neuron0x18b09b0()*1.0742);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5e90() {
   return (neuron0x18b0ec0()*-0.397422);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5ed0() {
   return (neuron0x18af630()*0.733928);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5f10() {
   return (neuron0x18b17d0()*0.260152);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5f50() {
   return (neuron0x18b1c50()*-1.1192);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c59e0() {
   return (neuron0x18b2520()*0.254205);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c5a20() {
   return (neuron0x18b27f0()*-0.651172);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c60a0() {
   return (neuron0x18b2c70()*0.0692089);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c60e0() {
   return (neuron0x18b30f0()*0.169328);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6120() {
   return (neuron0x18b3570()*-0.0801183);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6160() {
   return (neuron0x18b39f0()*-0.533055);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c61a0() {
   return (neuron0x18b3e70()*0.287753);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c61e0() {
   return (neuron0x18b42f0()*-0.12227);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6220() {
   return (neuron0x18b4770()*0.0539686);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c65a0() {
   return (neuron0x18ad7b0()*-0.0428203);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c65e0() {
   return (neuron0x18adb20()*0.212397);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6620() {
   return (neuron0x18adfa0()*0.845888);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6660() {
   return (neuron0x18ae420()*0.309736);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c66a0() {
   return (neuron0x18ae930()*-0.253633);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c66e0() {
   return (neuron0x18aedb0()*0.650068);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6720() {
   return (neuron0x18af230()*0.465371);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6760() {
   return (neuron0x18af840()*0.75207);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c67a0() {
   return (neuron0x18afc30()*0.0827305);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c67e0() {
   return (neuron0x18b00b0()*-0.181094);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6820() {
   return (neuron0x18b0530()*0.201235);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6860() {
   return (neuron0x18b09b0()*0.311393);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c68a0() {
   return (neuron0x18b0ec0()*0.898632);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c68e0() {
   return (neuron0x18af630()*-0.135405);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6920() {
   return (neuron0x18b17d0()*0.497199);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6960() {
   return (neuron0x18b1c50()*0.549228);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c63f0() {
   return (neuron0x18b2520()*-0.0823706);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6430() {
   return (neuron0x18b27f0()*0.831316);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6ab0() {
   return (neuron0x18b2c70()*0.546337);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6af0() {
   return (neuron0x18b30f0()*0.410628);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6b30() {
   return (neuron0x18b3570()*0.520294);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6b70() {
   return (neuron0x18b39f0()*0.848236);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6bb0() {
   return (neuron0x18b3e70()*0.314542);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6bf0() {
   return (neuron0x18b42f0()*-0.0982301);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6c30() {
   return (neuron0x18b4770()*-0.265481);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6fb0() {
   return (neuron0x18ad7b0()*-0.0542043);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6ff0() {
   return (neuron0x18adb20()*-0.420573);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7030() {
   return (neuron0x18adfa0()*0.131278);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7070() {
   return (neuron0x18ae420()*0.192653);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c70b0() {
   return (neuron0x18ae930()*0.162447);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c70f0() {
   return (neuron0x18aedb0()*0.202412);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7130() {
   return (neuron0x18af230()*0.140521);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7170() {
   return (neuron0x18af840()*0.232335);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c71b0() {
   return (neuron0x18afc30()*-0.040717);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c71f0() {
   return (neuron0x18b00b0()*0.0957976);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7230() {
   return (neuron0x18b0530()*0.413833);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7270() {
   return (neuron0x18b09b0()*0.25626);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c72b0() {
   return (neuron0x18b0ec0()*-0.229017);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c72f0() {
   return (neuron0x18af630()*-0.333576);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7330() {
   return (neuron0x18b17d0()*-0.619325);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7370() {
   return (neuron0x18b1c50()*0.0384439);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6e00() {
   return (neuron0x18b2520()*-0.324871);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c6e40() {
   return (neuron0x18b27f0()*0.447471);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c74c0() {
   return (neuron0x18b2c70()*0.747343);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7500() {
   return (neuron0x18b30f0()*-0.0928376);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7540() {
   return (neuron0x18b3570()*-0.0427386);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7580() {
   return (neuron0x18b39f0()*-0.00995075);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c75c0() {
   return (neuron0x18b3e70()*-0.173998);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7600() {
   return (neuron0x18b42f0()*-0.283072);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7640() {
   return (neuron0x18b4770()*0.361011);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c79c0() {
   return (neuron0x18ad7b0()*0.49879);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7a00() {
   return (neuron0x18adb20()*-0.445288);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7a40() {
   return (neuron0x18adfa0()*-0.782368);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7a80() {
   return (neuron0x18ae420()*-0.402804);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7ac0() {
   return (neuron0x18ae930()*0.169389);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7b00() {
   return (neuron0x18aedb0()*-1.22068);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7b40() {
   return (neuron0x18af230()*-0.209463);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7b80() {
   return (neuron0x18af840()*-0.290724);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7bc0() {
   return (neuron0x18afc30()*0.753822);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7c00() {
   return (neuron0x18b00b0()*0.67864);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7c40() {
   return (neuron0x18b0530()*0.186782);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7c80() {
   return (neuron0x18b09b0()*-0.502545);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7cc0() {
   return (neuron0x18b0ec0()*-0.297858);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7d00() {
   return (neuron0x18af630()*0.41756);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7d40() {
   return (neuron0x18b17d0()*0.389695);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7d80() {
   return (neuron0x18b1c50()*-0.454241);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7810() {
   return (neuron0x18b2520()*0.348477);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7850() {
   return (neuron0x18b27f0()*-0.601576);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7ed0() {
   return (neuron0x18b2c70()*-1.616);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7f10() {
   return (neuron0x18b30f0()*-0.685484);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7f50() {
   return (neuron0x18b3570()*0.519204);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7f90() {
   return (neuron0x18b39f0()*-0.563927);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c7fd0() {
   return (neuron0x18b3e70()*-0.20559);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8010() {
   return (neuron0x18b42f0()*1.15285);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8050() {
   return (neuron0x18b4770()*-0.214079);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c82b0() {
   return (neuron0x18b6680()*-7.45641);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c82f0() {
   return (neuron0x18b1450()*4.09963);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8330() {
   return (neuron0x18b71f0()*-3.27532);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8370() {
   return (neuron0x18b7d10()*-0.469046);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c83b0() {
   return (neuron0x18b8720()*-1.25321);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c83f0() {
   return (neuron0x18b9130()*-1.62526);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8430() {
   return (neuron0x18b6d20()*2.03925);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8470() {
   return (neuron0x18bad60()*-0.436495);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c84b0() {
   return (neuron0x18bb770()*2.31438);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c84f0() {
   return (neuron0x18bc180()*-2.22373);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8530() {
   return (neuron0x18bcb90()*2.48354);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8570() {
   return (neuron0x18bd5a0()*4.77739);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c85b0() {
   return (neuron0x18bdfb0()*-3.22115);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c85f0() {
   return (neuron0x18be9c0()*3.30179);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8630() {
   return (neuron0x18bf3d0()*0.855304);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8670() {
   return (neuron0x18bfde0()*-4.61912);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad680() {
   return (neuron0x18ba400()*-1.78039);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18ad6c0() {
   return (neuron0x18c3050()*-0.509066);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c87c0() {
   return (neuron0x18c3a20()*-1.58277);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8800() {
   return (neuron0x18c4430()*0.186645);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8840() {
   return (neuron0x18c4e40()*-3.26979);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8880() {
   return (neuron0x18c5850()*2.02898);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c88c0() {
   return (neuron0x18c6260()*-1.64795);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8900() {
   return (neuron0x18c6c70()*-0.418545);
}

double nnFunc_1C_25_25hi_1500ep_weight::synapse0x18c8940() {
   return (neuron0x18c7680()*-1.62583);
}

