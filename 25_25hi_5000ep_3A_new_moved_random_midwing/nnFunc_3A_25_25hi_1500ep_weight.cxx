#include "nnFunc_3A_25_25hi_1500ep_weight.h"
#include <cmath>
//#include "25_25hi_5000ep_3A_new_moved_random_midwing/nnFun_3A_25_25hi_1500ep_weight.h"

double nnFunc_3A_25_25hi_1500ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2b008e0();
     default:
         return 0.;
   }
}

double nnFunc_3A_25_25hi_1500ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2b008e0();
     default:
         return 0.;
   }
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae4e90() {
   return input0;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae51d0() {
   return input1;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae5510() {
   return input2;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae5850() {
   return input3;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae5b90() {
   return input4;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae6000() {
   double input = 0.757553;
   input += synapse0x29f2270();
   input += synapse0x2ad4300();
   input += synapse0x2ae62b0();
   input += synapse0x2ae62f0();
   input += synapse0x2ae6330();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae6000() {
   double input = input0x2ae6000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae6370() {
   double input = -6.07966;
   input += synapse0x2ae66b0();
   input += synapse0x2ae66f0();
   input += synapse0x2ae6730();
   input += synapse0x2ae6770();
   input += synapse0x2ae67b0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae6370() {
   double input = input0x2ae6370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae67f0() {
   double input = -0.869491;
   input += synapse0x2ae6b30();
   input += synapse0x2ae6b70();
   input += synapse0x2ae6bb0();
   input += synapse0x2ae6bf0();
   input += synapse0x2ae6c30();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae67f0() {
   double input = input0x2ae67f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae6c70() {
   double input = -0.611037;
   input += synapse0x2ae6fb0();
   input += synapse0x2ae6ff0();
   input += synapse0x29e4460();
   input += synapse0x29e44a0();
   input += synapse0x2ae7140();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae6c70() {
   double input = input0x2ae6c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae7180() {
   double input = 0.642384;
   input += synapse0x2ae74c0();
   input += synapse0x2ae7500();
   input += synapse0x2ae7540();
   input += synapse0x2ae7580();
   input += synapse0x2ae75c0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae7180() {
   double input = input0x2ae7180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae7600() {
   double input = 5.13716;
   input += synapse0x2ae7940();
   input += synapse0x2ae7980();
   input += synapse0x2ae79c0();
   input += synapse0x2ae7a00();
   input += synapse0x2ae7a40();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae7600() {
   double input = input0x2ae7600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae7a80() {
   double input = -0.0512613;
   input += synapse0x2ae7dc0();
   input += synapse0x2ae7e00();
   input += synapse0x2ae7e40();
   input += synapse0x2ae7030();
   input += synapse0x2ae7070();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae7a80() {
   double input = input0x2ae7a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae8090() {
   double input = 0.1267;
   input += synapse0x2ae8340();
   input += synapse0x2ae8380();
   input += synapse0x2ae83c0();
   input += synapse0x2ae8400();
   input += synapse0x2ae8440();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae8090() {
   double input = input0x2ae8090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae8480() {
   double input = 0.0721617;
   input += synapse0x2ae87c0();
   input += synapse0x2ae8800();
   input += synapse0x2ae8840();
   input += synapse0x2ae8880();
   input += synapse0x2ae88c0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae8480() {
   double input = input0x2ae8480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae8900() {
   double input = 3.54961;
   input += synapse0x2ae8c40();
   input += synapse0x2ae8c80();
   input += synapse0x2ae8cc0();
   input += synapse0x2ae8d00();
   input += synapse0x2ae8d40();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae8900() {
   double input = input0x2ae8900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae8d80() {
   double input = 1.19819;
   input += synapse0x2ae90c0();
   input += synapse0x2ae9100();
   input += synapse0x2ae9140();
   input += synapse0x2ae9180();
   input += synapse0x2ae91c0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae8d80() {
   double input = input0x2ae8d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae9200() {
   double input = 0.135678;
   input += synapse0x29e42b0();
   input += synapse0x29e42f0();
   input += synapse0x2ae9650();
   input += synapse0x2ae9690();
   input += synapse0x2ae96d0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae9200() {
   double input = input0x2ae9200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae9710() {
   double input = -0.0873635;
   input += synapse0x2ae9a50();
   input += synapse0x2ae9a90();
   input += synapse0x2ae9ad0();
   input += synapse0x2ae9b10();
   input += synapse0x2ae9b50();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae9710() {
   double input = input0x2ae9710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae7e80() {
   double input = -0.116841;
   input += synapse0x29e4a80();
   input += synapse0x2ae8010();
   input += synapse0x2ae8050();
   input += synapse0x2ae9fa0();
   input += synapse0x2ae9fe0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae7e80() {
   double input = input0x2ae7e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aea020() {
   double input = -0.170874;
   input += synapse0x2aea360();
   input += synapse0x2aea3a0();
   input += synapse0x2aea3e0();
   input += synapse0x2aea420();
   input += synapse0x2aea460();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aea020() {
   double input = input0x2aea020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aea4a0() {
   double input = -3.28058;
   input += synapse0x2aea7e0();
   input += synapse0x2ae50b0();
   input += synapse0x2ae50f0();
   input += synapse0x2ae53f0();
   input += synapse0x2ae5430();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aea4a0() {
   double input = input0x2aea4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aead70() {
   double input = 0.528416;
   input += synapse0x2aeaf00();
   input += synapse0x2aeaf40();
   input += synapse0x2aeaf80();
   input += synapse0x2aeafc0();
   input += synapse0x2aeb000();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aead70() {
   double input = input0x2aead70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aeb040() {
   double input = -0.209586;
   input += synapse0x2aeb380();
   input += synapse0x2aeb3c0();
   input += synapse0x2aeb400();
   input += synapse0x2aeb440();
   input += synapse0x2aeb480();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aeb040() {
   double input = input0x2aeb040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aeb4c0() {
   double input = -0.969497;
   input += synapse0x2aeb800();
   input += synapse0x2aeb840();
   input += synapse0x2aeb880();
   input += synapse0x2aeb8c0();
   input += synapse0x2aeb900();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aeb4c0() {
   double input = input0x2aeb4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aeb940() {
   double input = 1.2198;
   input += synapse0x2aebc80();
   input += synapse0x2aebcc0();
   input += synapse0x2aebd00();
   input += synapse0x2aebd40();
   input += synapse0x2aebd80();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aeb940() {
   double input = input0x2aeb940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aebdc0() {
   double input = 0.521582;
   input += synapse0x2aec100();
   input += synapse0x2aec140();
   input += synapse0x2aec180();
   input += synapse0x2aec1c0();
   input += synapse0x2aec200();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aebdc0() {
   double input = input0x2aebdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aec240() {
   double input = 2.21739;
   input += synapse0x2aec580();
   input += synapse0x2aec5c0();
   input += synapse0x2aec600();
   input += synapse0x2aec640();
   input += synapse0x2aec680();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aec240() {
   double input = input0x2aec240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aec6c0() {
   double input = 0.755288;
   input += synapse0x2aeca00();
   input += synapse0x2aeca40();
   input += synapse0x2aeca80();
   input += synapse0x2aecac0();
   input += synapse0x2aecb00();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aec6c0() {
   double input = input0x2aec6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aecb40() {
   double input = -1.3153;
   input += synapse0x2aece80();
   input += synapse0x2aecec0();
   input += synapse0x2aecf00();
   input += synapse0x2aecf40();
   input += synapse0x2aecf80();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aecb40() {
   double input = input0x2aecb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aecfc0() {
   double input = 0.732202;
   input += synapse0x2aed300();
   input += synapse0x2aed340();
   input += synapse0x2aed380();
   input += synapse0x2aed3c0();
   input += synapse0x2aed400();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aecfc0() {
   double input = input0x2aecfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aeeed0() {
   double input = -0.73323;
   input += synapse0x2ae6f20();
   input += synapse0x2ae6f60();
   input += synapse0x2ae7430();
   input += synapse0x2ae7470();
   input += synapse0x2ae78b0();
   input += synapse0x2ae78f0();
   input += synapse0x2ae7d30();
   input += synapse0x2ae7d70();
   input += synapse0x2ae82b0();
   input += synapse0x2ae82f0();
   input += synapse0x2ae8730();
   input += synapse0x2ae8770();
   input += synapse0x2ae8bb0();
   input += synapse0x2ae8bf0();
   input += synapse0x2ae9030();
   input += synapse0x2ae9070();
   input += synapse0x2ae94b0();
   input += synapse0x2ae94f0();
   input += synapse0x2ae99c0();
   input += synapse0x2ae9a00();
   input += synapse0x2aea2d0();
   input += synapse0x2aea310();
   input += synapse0x2aea750();
   input += synapse0x2aea790();
   input += synapse0x2ae5db0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aeeed0() {
   double input = input0x2aeeed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2ae9ca0() {
   double input = -0.0371835;
   input += synapse0x2ae9e30();
   input += synapse0x2ae9e70();
   input += synapse0x2ae9eb0();
   input += synapse0x2ae9ef0();
   input += synapse0x2ae9f30();
   input += synapse0x2ae5df0();
   input += synapse0x2aec070();
   input += synapse0x2aec0b0();
   input += synapse0x2aec4f0();
   input += synapse0x2aec530();
   input += synapse0x2aec970();
   input += synapse0x2aec9b0();
   input += synapse0x2aecdf0();
   input += synapse0x2aece30();
   input += synapse0x2aed270();
   input += synapse0x2aed2b0();
   input += synapse0x2ae6220();
   input += synapse0x2ae6260();
   input += synapse0x2aeb2f0();
   input += synapse0x2aeb330();
   input += synapse0x29f2340();
   input += synapse0x29f2380();
   input += synapse0x2aef980();
   input += synapse0x2aef9c0();
   input += synapse0x2aefa00();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2ae9ca0() {
   double input = input0x2ae9ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aefa40() {
   double input = -0.391412;
   input += synapse0x2ae9540();
   input += synapse0x2ae9580();
   input += synapse0x2ae95c0();
   input += synapse0x2ae9600();
   input += synapse0x2aeff90();
   input += synapse0x2aeffd0();
   input += synapse0x2af0010();
   input += synapse0x2af0050();
   input += synapse0x2af0090();
   input += synapse0x2af00d0();
   input += synapse0x2af0110();
   input += synapse0x2af0150();
   input += synapse0x2af0190();
   input += synapse0x2af01d0();
   input += synapse0x2af0210();
   input += synapse0x2af0250();
   input += synapse0x2aefbd0();
   input += synapse0x2aefc10();
   input += synapse0x2af03a0();
   input += synapse0x2af03e0();
   input += synapse0x2af0420();
   input += synapse0x2af0460();
   input += synapse0x2af04a0();
   input += synapse0x2af04e0();
   input += synapse0x2af0520();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aefa40() {
   double input = input0x2aefa40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af0560() {
   double input = 0.491395;
   input += synapse0x2af08a0();
   input += synapse0x2af08e0();
   input += synapse0x2af0920();
   input += synapse0x2af0960();
   input += synapse0x2af09a0();
   input += synapse0x2af09e0();
   input += synapse0x2af0a20();
   input += synapse0x2af0a60();
   input += synapse0x2af0aa0();
   input += synapse0x2af0ae0();
   input += synapse0x2af0b20();
   input += synapse0x2af0b60();
   input += synapse0x2af0ba0();
   input += synapse0x2af0be0();
   input += synapse0x2af0c20();
   input += synapse0x2af0c60();
   input += synapse0x2af06f0();
   input += synapse0x2af0730();
   input += synapse0x2af0db0();
   input += synapse0x2af0df0();
   input += synapse0x2af0e30();
   input += synapse0x2af0e70();
   input += synapse0x2af0eb0();
   input += synapse0x2af0ef0();
   input += synapse0x2af0f30();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af0560() {
   double input = input0x2af0560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af0f70() {
   double input = -0.400752;
   input += synapse0x2af12b0();
   input += synapse0x2af12f0();
   input += synapse0x2af1330();
   input += synapse0x2af1370();
   input += synapse0x2af13b0();
   input += synapse0x2af13f0();
   input += synapse0x2af1430();
   input += synapse0x2af1470();
   input += synapse0x2af14b0();
   input += synapse0x2af14f0();
   input += synapse0x2af1530();
   input += synapse0x2af1570();
   input += synapse0x2af15b0();
   input += synapse0x2af15f0();
   input += synapse0x2af1630();
   input += synapse0x2af1670();
   input += synapse0x2af1100();
   input += synapse0x2af1140();
   input += synapse0x2af17c0();
   input += synapse0x2af1800();
   input += synapse0x2af1840();
   input += synapse0x2af1880();
   input += synapse0x2af18c0();
   input += synapse0x2af1900();
   input += synapse0x2af1940();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af0f70() {
   double input = input0x2af0f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af1980() {
   double input = -0.138162;
   input += synapse0x2af1cc0();
   input += synapse0x2af1d00();
   input += synapse0x2af1d40();
   input += synapse0x2af1d80();
   input += synapse0x2af1dc0();
   input += synapse0x2af1e00();
   input += synapse0x2af1e40();
   input += synapse0x2aef060();
   input += synapse0x2aef0a0();
   input += synapse0x2aef0e0();
   input += synapse0x2aef120();
   input += synapse0x2aef160();
   input += synapse0x2aef1a0();
   input += synapse0x2aef1e0();
   input += synapse0x2aef220();
   input += synapse0x2aef260();
   input += synapse0x2af1b10();
   input += synapse0x2af1b50();
   input += synapse0x2aef3b0();
   input += synapse0x2aef3f0();
   input += synapse0x2aef430();
   input += synapse0x2aef470();
   input += synapse0x2aef4b0();
   input += synapse0x2aef4f0();
   input += synapse0x2aef530();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af1980() {
   double input = input0x2af1980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aef570() {
   double input = -0.706822;
   input += synapse0x2aef820();
   input += synapse0x2af2f20();
   input += synapse0x2af2f60();
   input += synapse0x2af2fa0();
   input += synapse0x2af2fe0();
   input += synapse0x2af3020();
   input += synapse0x2af3060();
   input += synapse0x2af30a0();
   input += synapse0x2af30e0();
   input += synapse0x2af3120();
   input += synapse0x2af3160();
   input += synapse0x2af31a0();
   input += synapse0x2af31e0();
   input += synapse0x2af3220();
   input += synapse0x2af3260();
   input += synapse0x2af32a0();
   input += synapse0x2aef700();
   input += synapse0x2aef740();
   input += synapse0x2af33f0();
   input += synapse0x2af3430();
   input += synapse0x2af3470();
   input += synapse0x2af34b0();
   input += synapse0x2af34f0();
   input += synapse0x2af3530();
   input += synapse0x2af3570();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aef570() {
   double input = input0x2aef570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af35b0() {
   double input = 0.594138;
   input += synapse0x2af38f0();
   input += synapse0x2af3930();
   input += synapse0x2af3970();
   input += synapse0x2af39b0();
   input += synapse0x2af39f0();
   input += synapse0x2af3a30();
   input += synapse0x2af3a70();
   input += synapse0x2af3ab0();
   input += synapse0x2af3af0();
   input += synapse0x2af3b30();
   input += synapse0x2af3b70();
   input += synapse0x2af3bb0();
   input += synapse0x2af3bf0();
   input += synapse0x2af3c30();
   input += synapse0x2af3c70();
   input += synapse0x2af3cb0();
   input += synapse0x2af3740();
   input += synapse0x2af3780();
   input += synapse0x2af3e00();
   input += synapse0x2af3e40();
   input += synapse0x2af3e80();
   input += synapse0x2af3ec0();
   input += synapse0x2af3f00();
   input += synapse0x2af3f40();
   input += synapse0x2af3f80();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af35b0() {
   double input = input0x2af35b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af3fc0() {
   double input = 0.252964;
   input += synapse0x2af4300();
   input += synapse0x2af4340();
   input += synapse0x2af4380();
   input += synapse0x2af43c0();
   input += synapse0x2af4400();
   input += synapse0x2af4440();
   input += synapse0x2af4480();
   input += synapse0x2af44c0();
   input += synapse0x2af4500();
   input += synapse0x2af4540();
   input += synapse0x2af4580();
   input += synapse0x2af45c0();
   input += synapse0x2af4600();
   input += synapse0x2af4640();
   input += synapse0x2af4680();
   input += synapse0x2af46c0();
   input += synapse0x2af4150();
   input += synapse0x2af4190();
   input += synapse0x2af4810();
   input += synapse0x2af4850();
   input += synapse0x2af4890();
   input += synapse0x2af48d0();
   input += synapse0x2af4910();
   input += synapse0x2af4950();
   input += synapse0x2af4990();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af3fc0() {
   double input = input0x2af3fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af49d0() {
   double input = 0.0915204;
   input += synapse0x2af4d10();
   input += synapse0x2af4d50();
   input += synapse0x2af4d90();
   input += synapse0x2af4dd0();
   input += synapse0x2af4e10();
   input += synapse0x2af4e50();
   input += synapse0x2af4e90();
   input += synapse0x2af4ed0();
   input += synapse0x2af4f10();
   input += synapse0x2af4f50();
   input += synapse0x2af4f90();
   input += synapse0x2af4fd0();
   input += synapse0x2af5010();
   input += synapse0x2af5050();
   input += synapse0x2af5090();
   input += synapse0x2af50d0();
   input += synapse0x2af4b60();
   input += synapse0x2af4ba0();
   input += synapse0x2af5220();
   input += synapse0x2af5260();
   input += synapse0x2af52a0();
   input += synapse0x2af52e0();
   input += synapse0x2af5320();
   input += synapse0x2af5360();
   input += synapse0x2af53a0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af49d0() {
   double input = input0x2af49d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af53e0() {
   double input = 0.0951263;
   input += synapse0x2af5720();
   input += synapse0x2af5760();
   input += synapse0x2af57a0();
   input += synapse0x2af57e0();
   input += synapse0x2af5820();
   input += synapse0x2af5860();
   input += synapse0x2af58a0();
   input += synapse0x2af58e0();
   input += synapse0x2af5920();
   input += synapse0x2af5960();
   input += synapse0x2af59a0();
   input += synapse0x2af59e0();
   input += synapse0x2af5a20();
   input += synapse0x2af5a60();
   input += synapse0x2af5aa0();
   input += synapse0x2af5ae0();
   input += synapse0x2af5570();
   input += synapse0x2af55b0();
   input += synapse0x2af5c30();
   input += synapse0x2af5c70();
   input += synapse0x2af5cb0();
   input += synapse0x2af5cf0();
   input += synapse0x2af5d30();
   input += synapse0x2af5d70();
   input += synapse0x2af5db0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af53e0() {
   double input = input0x2af53e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af5df0() {
   double input = 0.24755;
   input += synapse0x2af6130();
   input += synapse0x2af6170();
   input += synapse0x2af61b0();
   input += synapse0x2af61f0();
   input += synapse0x2af6230();
   input += synapse0x2af6270();
   input += synapse0x2af62b0();
   input += synapse0x2af62f0();
   input += synapse0x2af6330();
   input += synapse0x2af6370();
   input += synapse0x2af63b0();
   input += synapse0x2af63f0();
   input += synapse0x2af6430();
   input += synapse0x2af6470();
   input += synapse0x2af64b0();
   input += synapse0x2af64f0();
   input += synapse0x2af5f80();
   input += synapse0x2af5fc0();
   input += synapse0x2af6640();
   input += synapse0x2af6680();
   input += synapse0x2af66c0();
   input += synapse0x2af6700();
   input += synapse0x2af6740();
   input += synapse0x2af6780();
   input += synapse0x2af67c0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af5df0() {
   double input = input0x2af5df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af6800() {
   double input = -0.125213;
   input += synapse0x2af6b40();
   input += synapse0x2af6b80();
   input += synapse0x2af6bc0();
   input += synapse0x2af6c00();
   input += synapse0x2af6c40();
   input += synapse0x2af6c80();
   input += synapse0x2af6cc0();
   input += synapse0x2af6d00();
   input += synapse0x2af6d40();
   input += synapse0x2af6d80();
   input += synapse0x2af6dc0();
   input += synapse0x2af6e00();
   input += synapse0x2af6e40();
   input += synapse0x2af6e80();
   input += synapse0x2af6ec0();
   input += synapse0x2af6f00();
   input += synapse0x2af6990();
   input += synapse0x2af69d0();
   input += synapse0x2af7050();
   input += synapse0x2af7090();
   input += synapse0x2af70d0();
   input += synapse0x2af7110();
   input += synapse0x2af7150();
   input += synapse0x2af7190();
   input += synapse0x2af71d0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af6800() {
   double input = input0x2af6800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af7210() {
   double input = 0.181989;
   input += synapse0x2af7550();
   input += synapse0x2af7590();
   input += synapse0x2af75d0();
   input += synapse0x2af7610();
   input += synapse0x2af7650();
   input += synapse0x2af7690();
   input += synapse0x2af76d0();
   input += synapse0x2af7710();
   input += synapse0x2af7750();
   input += synapse0x2af7790();
   input += synapse0x2af77d0();
   input += synapse0x2af7810();
   input += synapse0x2af7850();
   input += synapse0x2af7890();
   input += synapse0x2af78d0();
   input += synapse0x2af7910();
   input += synapse0x2af73a0();
   input += synapse0x2af73e0();
   input += synapse0x2af7a60();
   input += synapse0x2af7aa0();
   input += synapse0x2af7ae0();
   input += synapse0x2af7b20();
   input += synapse0x2af7b60();
   input += synapse0x2af7ba0();
   input += synapse0x2af7be0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af7210() {
   double input = input0x2af7210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af7c20() {
   double input = -0.266304;
   input += synapse0x2af7f60();
   input += synapse0x2af7fa0();
   input += synapse0x2af7fe0();
   input += synapse0x2af8020();
   input += synapse0x2af8060();
   input += synapse0x2af80a0();
   input += synapse0x2af80e0();
   input += synapse0x2af8120();
   input += synapse0x2af8160();
   input += synapse0x2af81a0();
   input += synapse0x2af81e0();
   input += synapse0x2af8220();
   input += synapse0x2af8260();
   input += synapse0x2af82a0();
   input += synapse0x2af82e0();
   input += synapse0x2af8320();
   input += synapse0x2af7db0();
   input += synapse0x2af7df0();
   input += synapse0x2af8470();
   input += synapse0x2af84b0();
   input += synapse0x2af84f0();
   input += synapse0x2af8530();
   input += synapse0x2af8570();
   input += synapse0x2af85b0();
   input += synapse0x2af85f0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af7c20() {
   double input = input0x2af7c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af8630() {
   double input = -0.0522444;
   input += synapse0x2af8970();
   input += synapse0x2ae6190();
   input += synapse0x2ae61d0();
   input += synapse0x2ae6590();
   input += synapse0x2ae65d0();
   input += synapse0x2ae6a10();
   input += synapse0x2ae6a50();
   input += synapse0x2ae6e90();
   input += synapse0x2ae6ed0();
   input += synapse0x2ae73a0();
   input += synapse0x2ae73e0();
   input += synapse0x2ae7820();
   input += synapse0x2ae7860();
   input += synapse0x2ae7ca0();
   input += synapse0x2ae7ce0();
   input += synapse0x2ae8220();
   input += synapse0x2ae8260();
   input += synapse0x2ae86a0();
   input += synapse0x2ae86e0();
   input += synapse0x2ae8b20();
   input += synapse0x2ae8b60();
   input += synapse0x2ae8fa0();
   input += synapse0x2ae8fe0();
   input += synapse0x2ae9420();
   input += synapse0x2ae9460();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af8630() {
   double input = input0x2af8630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2af2c50() {
   double input = 0.0575802;
   input += synapse0x2af2de0();
   input += synapse0x2af2e20();
   input += synapse0x2aea6c0();
   input += synapse0x2aea700();
   input += synapse0x2af87c0();
   input += synapse0x2af8800();
   input += synapse0x2ae5a70();
   input += synapse0x2ae5ab0();
   input += synapse0x2aeb260();
   input += synapse0x2aeb2a0();
   input += synapse0x2aeb6e0();
   input += synapse0x2aeb720();
   input += synapse0x2aebb60();
   input += synapse0x2aebba0();
   input += synapse0x2aebfe0();
   input += synapse0x2aec020();
   input += synapse0x2aec460();
   input += synapse0x2aec4a0();
   input += synapse0x2aec8e0();
   input += synapse0x2aec920();
   input += synapse0x2aecd60();
   input += synapse0x2aecda0();
   input += synapse0x2aed1e0();
   input += synapse0x2aed220();
   input += synapse0x2ae9930();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2af2c50() {
   double input = input0x2af2c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2afb8a0() {
   double input = 0.50984;
   input += synapse0x2ae9970();
   input += synapse0x2afbbe0();
   input += synapse0x2afbc20();
   input += synapse0x2afbc60();
   input += synapse0x2afbca0();
   input += synapse0x2afbce0();
   input += synapse0x2afbd20();
   input += synapse0x2afbd60();
   input += synapse0x2afbda0();
   input += synapse0x2afbde0();
   input += synapse0x2afbe20();
   input += synapse0x2afbe60();
   input += synapse0x2afbea0();
   input += synapse0x2afbee0();
   input += synapse0x2afbf20();
   input += synapse0x2afbf60();
   input += synapse0x2afba30();
   input += synapse0x2afba70();
   input += synapse0x2afc0b0();
   input += synapse0x2afc0f0();
   input += synapse0x2afc130();
   input += synapse0x2afc170();
   input += synapse0x2afc1b0();
   input += synapse0x2afc1f0();
   input += synapse0x2afc230();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2afb8a0() {
   double input = input0x2afb8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2afc270() {
   double input = 0.464967;
   input += synapse0x2afc5b0();
   input += synapse0x2afc5f0();
   input += synapse0x2afc630();
   input += synapse0x2afc670();
   input += synapse0x2afc6b0();
   input += synapse0x2afc6f0();
   input += synapse0x2afc730();
   input += synapse0x2afc770();
   input += synapse0x2afc7b0();
   input += synapse0x2afc7f0();
   input += synapse0x2afc830();
   input += synapse0x2afc870();
   input += synapse0x2afc8b0();
   input += synapse0x2afc8f0();
   input += synapse0x2afc930();
   input += synapse0x2afc970();
   input += synapse0x2afc400();
   input += synapse0x2afc440();
   input += synapse0x2afcac0();
   input += synapse0x2afcb00();
   input += synapse0x2afcb40();
   input += synapse0x2afcb80();
   input += synapse0x2afcbc0();
   input += synapse0x2afcc00();
   input += synapse0x2afcc40();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2afc270() {
   double input = input0x2afc270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2afcc80() {
   double input = -0.0610869;
   input += synapse0x2afcfc0();
   input += synapse0x2afd000();
   input += synapse0x2afd040();
   input += synapse0x2afd080();
   input += synapse0x2afd0c0();
   input += synapse0x2afd100();
   input += synapse0x2afd140();
   input += synapse0x2afd180();
   input += synapse0x2afd1c0();
   input += synapse0x2afd200();
   input += synapse0x2afd240();
   input += synapse0x2afd280();
   input += synapse0x2afd2c0();
   input += synapse0x2afd300();
   input += synapse0x2afd340();
   input += synapse0x2afd380();
   input += synapse0x2afce10();
   input += synapse0x2afce50();
   input += synapse0x2afd4d0();
   input += synapse0x2afd510();
   input += synapse0x2afd550();
   input += synapse0x2afd590();
   input += synapse0x2afd5d0();
   input += synapse0x2afd610();
   input += synapse0x2afd650();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2afcc80() {
   double input = input0x2afcc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2afd690() {
   double input = -0.837793;
   input += synapse0x2afd9d0();
   input += synapse0x2afda10();
   input += synapse0x2afda50();
   input += synapse0x2afda90();
   input += synapse0x2afdad0();
   input += synapse0x2afdb10();
   input += synapse0x2afdb50();
   input += synapse0x2afdb90();
   input += synapse0x2afdbd0();
   input += synapse0x2afdc10();
   input += synapse0x2afdc50();
   input += synapse0x2afdc90();
   input += synapse0x2afdcd0();
   input += synapse0x2afdd10();
   input += synapse0x2afdd50();
   input += synapse0x2afdd90();
   input += synapse0x2afd820();
   input += synapse0x2afd860();
   input += synapse0x2afdee0();
   input += synapse0x2afdf20();
   input += synapse0x2afdf60();
   input += synapse0x2afdfa0();
   input += synapse0x2afdfe0();
   input += synapse0x2afe020();
   input += synapse0x2afe060();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2afd690() {
   double input = input0x2afd690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2afe0a0() {
   double input = -0.200762;
   input += synapse0x2afe3e0();
   input += synapse0x2afe420();
   input += synapse0x2afe460();
   input += synapse0x2afe4a0();
   input += synapse0x2afe4e0();
   input += synapse0x2afe520();
   input += synapse0x2afe560();
   input += synapse0x2afe5a0();
   input += synapse0x2afe5e0();
   input += synapse0x2afe620();
   input += synapse0x2afe660();
   input += synapse0x2afe6a0();
   input += synapse0x2afe6e0();
   input += synapse0x2afe720();
   input += synapse0x2afe760();
   input += synapse0x2afe7a0();
   input += synapse0x2afe230();
   input += synapse0x2afe270();
   input += synapse0x2afe8f0();
   input += synapse0x2afe930();
   input += synapse0x2afe970();
   input += synapse0x2afe9b0();
   input += synapse0x2afe9f0();
   input += synapse0x2afea30();
   input += synapse0x2afea70();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2afe0a0() {
   double input = input0x2afe0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2afeab0() {
   double input = -0.264157;
   input += synapse0x2afedf0();
   input += synapse0x2afee30();
   input += synapse0x2afee70();
   input += synapse0x2afeeb0();
   input += synapse0x2afeef0();
   input += synapse0x2afef30();
   input += synapse0x2afef70();
   input += synapse0x2afefb0();
   input += synapse0x2afeff0();
   input += synapse0x2aff030();
   input += synapse0x2aff070();
   input += synapse0x2aff0b0();
   input += synapse0x2aff0f0();
   input += synapse0x2aff130();
   input += synapse0x2aff170();
   input += synapse0x2aff1b0();
   input += synapse0x2afec40();
   input += synapse0x2afec80();
   input += synapse0x2aff300();
   input += synapse0x2aff340();
   input += synapse0x2aff380();
   input += synapse0x2aff3c0();
   input += synapse0x2aff400();
   input += synapse0x2aff440();
   input += synapse0x2aff480();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2afeab0() {
   double input = input0x2afeab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2aff4c0() {
   double input = 0.203048;
   input += synapse0x2aff800();
   input += synapse0x2aff840();
   input += synapse0x2aff880();
   input += synapse0x2aff8c0();
   input += synapse0x2aff900();
   input += synapse0x2aff940();
   input += synapse0x2aff980();
   input += synapse0x2aff9c0();
   input += synapse0x2affa00();
   input += synapse0x2affa40();
   input += synapse0x2affa80();
   input += synapse0x2affac0();
   input += synapse0x2affb00();
   input += synapse0x2affb40();
   input += synapse0x2affb80();
   input += synapse0x2affbc0();
   input += synapse0x2aff650();
   input += synapse0x2aff690();
   input += synapse0x2affd10();
   input += synapse0x2affd50();
   input += synapse0x2affd90();
   input += synapse0x2affdd0();
   input += synapse0x2affe10();
   input += synapse0x2affe50();
   input += synapse0x2affe90();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2aff4c0() {
   double input = input0x2aff4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2affed0() {
   double input = 0.690139;
   input += synapse0x2b00210();
   input += synapse0x2b00250();
   input += synapse0x2b00290();
   input += synapse0x2b002d0();
   input += synapse0x2b00310();
   input += synapse0x2b00350();
   input += synapse0x2b00390();
   input += synapse0x2b003d0();
   input += synapse0x2b00410();
   input += synapse0x2b00450();
   input += synapse0x2b00490();
   input += synapse0x2b004d0();
   input += synapse0x2b00510();
   input += synapse0x2b00550();
   input += synapse0x2b00590();
   input += synapse0x2b005d0();
   input += synapse0x2b00060();
   input += synapse0x2b000a0();
   input += synapse0x2b00720();
   input += synapse0x2b00760();
   input += synapse0x2b007a0();
   input += synapse0x2b007e0();
   input += synapse0x2b00820();
   input += synapse0x2b00860();
   input += synapse0x2b008a0();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2affed0() {
   double input = input0x2affed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_1500ep_weight::input0x2b008e0() {
   double input = -0.243271;
   input += synapse0x2b00b00();
   input += synapse0x2b00b40();
   input += synapse0x2b00b80();
   input += synapse0x2b00bc0();
   input += synapse0x2b00c00();
   input += synapse0x2b00c40();
   input += synapse0x2b00c80();
   input += synapse0x2b00cc0();
   input += synapse0x2b00d00();
   input += synapse0x2b00d40();
   input += synapse0x2b00d80();
   input += synapse0x2b00dc0();
   input += synapse0x2b00e00();
   input += synapse0x2b00e40();
   input += synapse0x2b00e80();
   input += synapse0x2b00ec0();
   input += synapse0x2ae5ed0();
   input += synapse0x2ae5f10();
   input += synapse0x2b01010();
   input += synapse0x2b01050();
   input += synapse0x2b01090();
   input += synapse0x2b010d0();
   input += synapse0x2b01110();
   input += synapse0x2b01150();
   input += synapse0x2b01190();
   return input;
}

double nnFunc_3A_25_25hi_1500ep_weight::neuron0x2b008e0() {
   double input = input0x2b008e0();
   return (input * 8.36458)+120.208;
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29f2270() {
   return (neuron0x2ae4e90()*-1.41011);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ad4300() {
   return (neuron0x2ae51d0()*0.824379);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae62b0() {
   return (neuron0x2ae5510()*0.489884);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae62f0() {
   return (neuron0x2ae5850()*-0.41233);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6330() {
   return (neuron0x2ae5b90()*0.577703);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae66b0() {
   return (neuron0x2ae4e90()*-0.00605587);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae66f0() {
   return (neuron0x2ae51d0()*-0.31747);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6730() {
   return (neuron0x2ae5510()*-0.103311);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6770() {
   return (neuron0x2ae5850()*-6.27709);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae67b0() {
   return (neuron0x2ae5b90()*1.74665);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6b30() {
   return (neuron0x2ae4e90()*0.154639);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6b70() {
   return (neuron0x2ae51d0()*-0.150025);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6bb0() {
   return (neuron0x2ae5510()*0.0928163);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6bf0() {
   return (neuron0x2ae5850()*1.0993);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6c30() {
   return (neuron0x2ae5b90()*0.499743);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6fb0() {
   return (neuron0x2ae4e90()*1.0235);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6ff0() {
   return (neuron0x2ae51d0()*-0.285434);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29e4460() {
   return (neuron0x2ae5510()*-0.837565);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29e44a0() {
   return (neuron0x2ae5850()*-0.824954);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7140() {
   return (neuron0x2ae5b90()*-0.697301);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae74c0() {
   return (neuron0x2ae4e90()*-0.774398);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7500() {
   return (neuron0x2ae51d0()*0.684365);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7540() {
   return (neuron0x2ae5510()*0.293438);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7580() {
   return (neuron0x2ae5850()*1.45333);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae75c0() {
   return (neuron0x2ae5b90()*0.857989);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7940() {
   return (neuron0x2ae4e90()*-0.0361923);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7980() {
   return (neuron0x2ae51d0()*0.308919);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae79c0() {
   return (neuron0x2ae5510()*0.0510231);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7a00() {
   return (neuron0x2ae5850()*-5.45173);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7a40() {
   return (neuron0x2ae5b90()*-1.55819);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7dc0() {
   return (neuron0x2ae4e90()*1.64691);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7e00() {
   return (neuron0x2ae51d0()*-0.984469);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7e40() {
   return (neuron0x2ae5510()*-0.589334);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7030() {
   return (neuron0x2ae5850()*-0.569831);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7070() {
   return (neuron0x2ae5b90()*-0.243176);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8340() {
   return (neuron0x2ae4e90()*-1.39528);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8380() {
   return (neuron0x2ae51d0()*0.57936);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae83c0() {
   return (neuron0x2ae5510()*0.525751);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8400() {
   return (neuron0x2ae5850()*0.913242);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8440() {
   return (neuron0x2ae5b90()*-0.277793);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae87c0() {
   return (neuron0x2ae4e90()*-0.734546);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8800() {
   return (neuron0x2ae51d0()*0.477684);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8840() {
   return (neuron0x2ae5510()*0.497836);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8880() {
   return (neuron0x2ae5850()*0.688983);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae88c0() {
   return (neuron0x2ae5b90()*0.0234451);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8c40() {
   return (neuron0x2ae4e90()*0.0121528);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8c80() {
   return (neuron0x2ae51d0()*0.0786988);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8cc0() {
   return (neuron0x2ae5510()*0.0387834);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8d00() {
   return (neuron0x2ae5850()*4.11438);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8d40() {
   return (neuron0x2ae5b90()*-1.6144);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae90c0() {
   return (neuron0x2ae4e90()*-0.724104);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9100() {
   return (neuron0x2ae51d0()*0.36709);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9140() {
   return (neuron0x2ae5510()*0.431772);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9180() {
   return (neuron0x2ae5850()*0.430728);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae91c0() {
   return (neuron0x2ae5b90()*0.177013);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29e42b0() {
   return (neuron0x2ae4e90()*-1.85406);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29e42f0() {
   return (neuron0x2ae51d0()*0.947021);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9650() {
   return (neuron0x2ae5510()*0.602306);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9690() {
   return (neuron0x2ae5850()*0.906127);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae96d0() {
   return (neuron0x2ae5b90()*0.782816);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9a50() {
   return (neuron0x2ae4e90()*1.36266);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9a90() {
   return (neuron0x2ae51d0()*-0.207848);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9ad0() {
   return (neuron0x2ae5510()*-0.578423);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9b10() {
   return (neuron0x2ae5850()*0.579352);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9b50() {
   return (neuron0x2ae5b90()*0.399547);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29e4a80() {
   return (neuron0x2ae4e90()*-1.41586);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8010() {
   return (neuron0x2ae51d0()*0.566845);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8050() {
   return (neuron0x2ae5510()*1.64374);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9fa0() {
   return (neuron0x2ae5850()*0.0947353);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9fe0() {
   return (neuron0x2ae5b90()*-0.355417);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea360() {
   return (neuron0x2ae4e90()*0.000957714);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea3a0() {
   return (neuron0x2ae51d0()*-0.920547);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea3e0() {
   return (neuron0x2ae5510()*0.0497077);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea420() {
   return (neuron0x2ae5850()*0.354199);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea460() {
   return (neuron0x2ae5b90()*0.222916);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea7e0() {
   return (neuron0x2ae4e90()*0.019438);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae50b0() {
   return (neuron0x2ae51d0()*-0.091468);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae50f0() {
   return (neuron0x2ae5510()*-0.0222245);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae53f0() {
   return (neuron0x2ae5850()*4.0775);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5430() {
   return (neuron0x2ae5b90()*1.55661);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeaf00() {
   return (neuron0x2ae4e90()*-0.902827);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeaf40() {
   return (neuron0x2ae51d0()*0.395311);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeaf80() {
   return (neuron0x2ae5510()*0.37596);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeafc0() {
   return (neuron0x2ae5850()*0.431967);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb000() {
   return (neuron0x2ae5b90()*0.53863);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb380() {
   return (neuron0x2ae4e90()*0.212925);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb3c0() {
   return (neuron0x2ae51d0()*-0.0274024);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb400() {
   return (neuron0x2ae5510()*0.10685);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb440() {
   return (neuron0x2ae5850()*-0.212315);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb480() {
   return (neuron0x2ae5b90()*1.72994);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb800() {
   return (neuron0x2ae4e90()*0.129791);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb840() {
   return (neuron0x2ae51d0()*0.0836268);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb880() {
   return (neuron0x2ae5510()*0.138535);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb8c0() {
   return (neuron0x2ae5850()*-0.20677);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb900() {
   return (neuron0x2ae5b90()*0.3544);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebc80() {
   return (neuron0x2ae4e90()*0.501739);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebcc0() {
   return (neuron0x2ae51d0()*-0.00703809);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebd00() {
   return (neuron0x2ae5510()*-0.0603038);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebd40() {
   return (neuron0x2ae5850()*-0.217153);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebd80() {
   return (neuron0x2ae5b90()*0.856294);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec100() {
   return (neuron0x2ae4e90()*-2.63816);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec140() {
   return (neuron0x2ae51d0()*1.01665);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec180() {
   return (neuron0x2ae5510()*2.53031);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec1c0() {
   return (neuron0x2ae5850()*6.34631);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec200() {
   return (neuron0x2ae5b90()*0.736017);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec580() {
   return (neuron0x2ae4e90()*-0.000924111);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec5c0() {
   return (neuron0x2ae51d0()*-0.482964);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec600() {
   return (neuron0x2ae5510()*0.0336746);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec640() {
   return (neuron0x2ae5850()*-0.0179449);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec680() {
   return (neuron0x2ae5b90()*-0.546164);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeca00() {
   return (neuron0x2ae4e90()*-2.25941);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeca40() {
   return (neuron0x2ae51d0()*0.955421);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeca80() {
   return (neuron0x2ae5510()*1.16492);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecac0() {
   return (neuron0x2ae5850()*3.44147);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecb00() {
   return (neuron0x2ae5b90()*0.215613);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aece80() {
   return (neuron0x2ae4e90()*1.94567);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecec0() {
   return (neuron0x2ae51d0()*-2.23444);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecf00() {
   return (neuron0x2ae5510()*-0.547468);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecf40() {
   return (neuron0x2ae5850()*0.330165);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecf80() {
   return (neuron0x2ae5b90()*-0.840266);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed300() {
   return (neuron0x2ae4e90()*-0.776634);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed340() {
   return (neuron0x2ae51d0()*0.246696);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed380() {
   return (neuron0x2ae5510()*0.00346169);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed3c0() {
   return (neuron0x2ae5850()*-1.85782);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed400() {
   return (neuron0x2ae5b90()*0.0963955);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6f20() {
   return (neuron0x2ae6000()*-0.544813);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6f60() {
   return (neuron0x2ae6370()*0.361734);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7430() {
   return (neuron0x2ae67f0()*-0.020887);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7470() {
   return (neuron0x2ae6c70()*-0.583021);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae78b0() {
   return (neuron0x2ae7180()*-0.545375);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae78f0() {
   return (neuron0x2ae7600()*-0.698581);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7d30() {
   return (neuron0x2ae7a80()*-0.281908);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7d70() {
   return (neuron0x2ae8090()*-0.286516);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae82b0() {
   return (neuron0x2ae8480()*0.48078);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae82f0() {
   return (neuron0x2ae8900()*-0.565134);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8730() {
   return (neuron0x2ae8d80()*-0.677684);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8770() {
   return (neuron0x2ae9200()*-0.488245);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8bb0() {
   return (neuron0x2ae9710()*-0.79432);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8bf0() {
   return (neuron0x2ae7e80()*-0.178258);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9030() {
   return (neuron0x2aea020()*-0.536229);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9070() {
   return (neuron0x2aea4a0()*0.0954209);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae94b0() {
   return (neuron0x2aead70()*-0.330847);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae94f0() {
   return (neuron0x2aeb040()*-0.397501);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae99c0() {
   return (neuron0x2aeb4c0()*-0.74886);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9a00() {
   return (neuron0x2aeb940()*-0.361746);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea2d0() {
   return (neuron0x2aebdc0()*-0.0996723);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea310() {
   return (neuron0x2aec240()*0.0617267);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea750() {
   return (neuron0x2aec6c0()*0.0367193);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea790() {
   return (neuron0x2aecb40()*0.118496);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5db0() {
   return (neuron0x2aecfc0()*0.204897);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9e30() {
   return (neuron0x2ae6000()*0.0542211);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9e70() {
   return (neuron0x2ae6370()*1.76689);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9eb0() {
   return (neuron0x2ae67f0()*-0.230551);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9ef0() {
   return (neuron0x2ae6c70()*-0.585293);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9f30() {
   return (neuron0x2ae7180()*-0.214221);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5df0() {
   return (neuron0x2ae7600()*-0.336577);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec070() {
   return (neuron0x2ae7a80()*-0.038839);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec0b0() {
   return (neuron0x2ae8090()*0.0805771);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec4f0() {
   return (neuron0x2ae8480()*0.549548);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec530() {
   return (neuron0x2ae8900()*-0.238404);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec970() {
   return (neuron0x2ae8d80()*-0.55398);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec9b0() {
   return (neuron0x2ae9200()*-0.25287);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecdf0() {
   return (neuron0x2ae9710()*0.250292);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aece30() {
   return (neuron0x2ae7e80()*-0.211813);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed270() {
   return (neuron0x2aea020()*-0.118809);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed2b0() {
   return (neuron0x2aea4a0()*-0.419722);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6220() {
   return (neuron0x2aead70()*-0.098374);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6260() {
   return (neuron0x2aeb040()*1.23234);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb2f0() {
   return (neuron0x2aeb4c0()*0.0765237);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb330() {
   return (neuron0x2aeb940()*-0.163412);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29f2340() {
   return (neuron0x2aebdc0()*0.311943);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x29f2380() {
   return (neuron0x2aec240()*0.178753);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef980() {
   return (neuron0x2aec6c0()*-0.243215);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef9c0() {
   return (neuron0x2aecb40()*-0.687873);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aefa00() {
   return (neuron0x2aecfc0()*0.361869);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9540() {
   return (neuron0x2ae6000()*0.293488);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9580() {
   return (neuron0x2ae6370()*0.475174);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae95c0() {
   return (neuron0x2ae67f0()*0.129663);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9600() {
   return (neuron0x2ae6c70()*0.164635);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeff90() {
   return (neuron0x2ae7180()*0.110014);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeffd0() {
   return (neuron0x2ae7600()*0.491275);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0010() {
   return (neuron0x2ae7a80()*0.285173);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0050() {
   return (neuron0x2ae8090()*-0.430858);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0090() {
   return (neuron0x2ae8480()*0.000784581);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af00d0() {
   return (neuron0x2ae8900()*0.949202);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0110() {
   return (neuron0x2ae8d80()*0.150599);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0150() {
   return (neuron0x2ae9200()*-0.342998);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0190() {
   return (neuron0x2ae9710()*0.527498);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af01d0() {
   return (neuron0x2ae7e80()*-0.521407);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0210() {
   return (neuron0x2aea020()*-0.0504024);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0250() {
   return (neuron0x2aea4a0()*-0.610146);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aefbd0() {
   return (neuron0x2aead70()*0.0289627);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aefc10() {
   return (neuron0x2aeb040()*-0.0229642);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af03a0() {
   return (neuron0x2aeb4c0()*0.365792);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af03e0() {
   return (neuron0x2aeb940()*0.292012);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0420() {
   return (neuron0x2aebdc0()*0.0739014);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0460() {
   return (neuron0x2aec240()*0.339019);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af04a0() {
   return (neuron0x2aec6c0()*-0.101627);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af04e0() {
   return (neuron0x2aecb40()*-0.161257);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0520() {
   return (neuron0x2aecfc0()*0.626504);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af08a0() {
   return (neuron0x2ae6000()*0.495034);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af08e0() {
   return (neuron0x2ae6370()*0.551711);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0920() {
   return (neuron0x2ae67f0()*-0.376415);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0960() {
   return (neuron0x2ae6c70()*0.544214);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af09a0() {
   return (neuron0x2ae7180()*0.700241);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af09e0() {
   return (neuron0x2ae7600()*0.290096);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0a20() {
   return (neuron0x2ae7a80()*0.21147);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0a60() {
   return (neuron0x2ae8090()*-0.159045);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0aa0() {
   return (neuron0x2ae8480()*-0.532844);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0ae0() {
   return (neuron0x2ae8900()*-1.22923);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0b20() {
   return (neuron0x2ae8d80()*0.470902);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0b60() {
   return (neuron0x2ae9200()*0.33739);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0ba0() {
   return (neuron0x2ae9710()*0.687964);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0be0() {
   return (neuron0x2ae7e80()*0.271067);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0c20() {
   return (neuron0x2aea020()*0.0670578);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0c60() {
   return (neuron0x2aea4a0()*1.25137);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af06f0() {
   return (neuron0x2aead70()*0.286983);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0730() {
   return (neuron0x2aeb040()*-1.24247);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0db0() {
   return (neuron0x2aeb4c0()*-0.583806);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0df0() {
   return (neuron0x2aeb940()*0.991239);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0e30() {
   return (neuron0x2aebdc0()*-0.0997381);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0e70() {
   return (neuron0x2aec240()*0.52948);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0eb0() {
   return (neuron0x2aec6c0()*-0.591289);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0ef0() {
   return (neuron0x2aecb40()*-0.435617);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af0f30() {
   return (neuron0x2aecfc0()*0.0499303);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af12b0() {
   return (neuron0x2ae6000()*-0.529799);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af12f0() {
   return (neuron0x2ae6370()*-0.609193);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1330() {
   return (neuron0x2ae67f0()*0.329263);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1370() {
   return (neuron0x2ae6c70()*-0.428169);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af13b0() {
   return (neuron0x2ae7180()*-0.320347);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af13f0() {
   return (neuron0x2ae7600()*0.674285);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1430() {
   return (neuron0x2ae7a80()*-0.624498);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1470() {
   return (neuron0x2ae8090()*-0.369823);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af14b0() {
   return (neuron0x2ae8480()*0.491994);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af14f0() {
   return (neuron0x2ae8900()*0.92274);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1530() {
   return (neuron0x2ae8d80()*-0.147504);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1570() {
   return (neuron0x2ae9200()*-0.357281);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af15b0() {
   return (neuron0x2ae9710()*-0.474547);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af15f0() {
   return (neuron0x2ae7e80()*0.343718);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1630() {
   return (neuron0x2aea020()*-0.107278);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1670() {
   return (neuron0x2aea4a0()*-0.606706);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1100() {
   return (neuron0x2aead70()*-0.305479);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1140() {
   return (neuron0x2aeb040()*0.545194);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af17c0() {
   return (neuron0x2aeb4c0()*0.272121);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1800() {
   return (neuron0x2aeb940()*-1.03958);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1840() {
   return (neuron0x2aebdc0()*-0.0512523);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1880() {
   return (neuron0x2aec240()*-0.172212);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af18c0() {
   return (neuron0x2aec6c0()*-0.677113);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1900() {
   return (neuron0x2aecb40()*0.100766);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1940() {
   return (neuron0x2aecfc0()*-0.226721);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1cc0() {
   return (neuron0x2ae6000()*-0.170874);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1d00() {
   return (neuron0x2ae6370()*-0.467238);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1d40() {
   return (neuron0x2ae67f0()*0.106473);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1d80() {
   return (neuron0x2ae6c70()*0.405658);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1dc0() {
   return (neuron0x2ae7180()*-0.207629);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1e00() {
   return (neuron0x2ae7600()*0.569667);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1e40() {
   return (neuron0x2ae7a80()*0.196176);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef060() {
   return (neuron0x2ae8090()*-0.598095);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef0a0() {
   return (neuron0x2ae8480()*0.186459);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef0e0() {
   return (neuron0x2ae8900()*0.647333);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef120() {
   return (neuron0x2ae8d80()*0.544798);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef160() {
   return (neuron0x2ae9200()*-0.0587403);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef1a0() {
   return (neuron0x2ae9710()*0.277537);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef1e0() {
   return (neuron0x2ae7e80()*0.314938);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef220() {
   return (neuron0x2aea020()*0.463779);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef260() {
   return (neuron0x2aea4a0()*-0.349325);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1b10() {
   return (neuron0x2aead70()*0.325259);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af1b50() {
   return (neuron0x2aeb040()*0.429026);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef3b0() {
   return (neuron0x2aeb4c0()*-0.127171);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef3f0() {
   return (neuron0x2aeb940()*0.250851);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef430() {
   return (neuron0x2aebdc0()*-0.348113);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef470() {
   return (neuron0x2aec240()*0.0275426);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef4b0() {
   return (neuron0x2aec6c0()*-0.216164);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef4f0() {
   return (neuron0x2aecb40()*0.17029);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef530() {
   return (neuron0x2aecfc0()*0.103884);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef820() {
   return (neuron0x2ae6000()*-0.139819);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af2f20() {
   return (neuron0x2ae6370()*-0.942324);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af2f60() {
   return (neuron0x2ae67f0()*0.77449);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af2fa0() {
   return (neuron0x2ae6c70()*-0.397873);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af2fe0() {
   return (neuron0x2ae7180()*-0.277615);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3020() {
   return (neuron0x2ae7600()*-0.0506232);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3060() {
   return (neuron0x2ae7a80()*-0.457512);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af30a0() {
   return (neuron0x2ae8090()*0.246666);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af30e0() {
   return (neuron0x2ae8480()*-0.370269);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3120() {
   return (neuron0x2ae8900()*1.0814);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3160() {
   return (neuron0x2ae8d80()*0.109489);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af31a0() {
   return (neuron0x2ae9200()*0.136317);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af31e0() {
   return (neuron0x2ae9710()*-0.0768973);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3220() {
   return (neuron0x2ae7e80()*-0.0646055);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3260() {
   return (neuron0x2aea020()*-0.0476516);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af32a0() {
   return (neuron0x2aea4a0()*-1.12423);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef700() {
   return (neuron0x2aead70()*-0.081968);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aef740() {
   return (neuron0x2aeb040()*1.04761);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af33f0() {
   return (neuron0x2aeb4c0()*0.482727);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3430() {
   return (neuron0x2aeb940()*-0.145384);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3470() {
   return (neuron0x2aebdc0()*-0.520211);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af34b0() {
   return (neuron0x2aec240()*-0.467187);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af34f0() {
   return (neuron0x2aec6c0()*-0.102014);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3530() {
   return (neuron0x2aecb40()*0.328208);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3570() {
   return (neuron0x2aecfc0()*-0.606071);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af38f0() {
   return (neuron0x2ae6000()*0.281301);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3930() {
   return (neuron0x2ae6370()*2.795);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3970() {
   return (neuron0x2ae67f0()*-0.442547);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af39b0() {
   return (neuron0x2ae6c70()*-0.265118);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af39f0() {
   return (neuron0x2ae7180()*-0.356675);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3a30() {
   return (neuron0x2ae7600()*-3.25125);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3a70() {
   return (neuron0x2ae7a80()*0.761122);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3ab0() {
   return (neuron0x2ae8090()*0.999343);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3af0() {
   return (neuron0x2ae8480()*0.607711);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3b30() {
   return (neuron0x2ae8900()*-2.34642);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3b70() {
   return (neuron0x2ae8d80()*-0.156357);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3bb0() {
   return (neuron0x2ae9200()*-0.418589);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3bf0() {
   return (neuron0x2ae9710()*0.0356482);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3c30() {
   return (neuron0x2ae7e80()*-0.248271);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3c70() {
   return (neuron0x2aea020()*0.242005);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3cb0() {
   return (neuron0x2aea4a0()*2.41371);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3740() {
   return (neuron0x2aead70()*0.025793);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3780() {
   return (neuron0x2aeb040()*-0.114645);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3e00() {
   return (neuron0x2aeb4c0()*1.36088);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3e40() {
   return (neuron0x2aeb940()*-0.482813);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3e80() {
   return (neuron0x2aebdc0()*-0.347797);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3ec0() {
   return (neuron0x2aec240()*-2.0411);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3f00() {
   return (neuron0x2aec6c0()*1.19873);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3f40() {
   return (neuron0x2aecb40()*-0.153142);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af3f80() {
   return (neuron0x2aecfc0()*-0.233181);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4300() {
   return (neuron0x2ae6000()*0.248886);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4340() {
   return (neuron0x2ae6370()*0.164353);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4380() {
   return (neuron0x2ae67f0()*-0.622867);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af43c0() {
   return (neuron0x2ae6c70()*-0.0330591);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4400() {
   return (neuron0x2ae7180()*-0.00348711);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4440() {
   return (neuron0x2ae7600()*-0.645994);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4480() {
   return (neuron0x2ae7a80()*0.495553);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af44c0() {
   return (neuron0x2ae8090()*-0.512966);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4500() {
   return (neuron0x2ae8480()*-0.111237);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4540() {
   return (neuron0x2ae8900()*-1.11046);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4580() {
   return (neuron0x2ae8d80()*0.296099);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af45c0() {
   return (neuron0x2ae9200()*0.560605);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4600() {
   return (neuron0x2ae9710()*-0.0656414);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4640() {
   return (neuron0x2ae7e80()*-0.114363);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4680() {
   return (neuron0x2aea020()*-0.969328);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af46c0() {
   return (neuron0x2aea4a0()*1.75474);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4150() {
   return (neuron0x2aead70()*-0.0272689);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4190() {
   return (neuron0x2aeb040()*-0.506186);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4810() {
   return (neuron0x2aeb4c0()*0.846486);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4850() {
   return (neuron0x2aeb940()*-0.220623);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4890() {
   return (neuron0x2aebdc0()*-0.24475);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af48d0() {
   return (neuron0x2aec240()*-0.889605);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4910() {
   return (neuron0x2aec6c0()*-0.0199267);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4950() {
   return (neuron0x2aecb40()*0.343297);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4990() {
   return (neuron0x2aecfc0()*-0.191242);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4d10() {
   return (neuron0x2ae6000()*0.146617);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4d50() {
   return (neuron0x2ae6370()*1.16856);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4d90() {
   return (neuron0x2ae67f0()*-0.388445);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4dd0() {
   return (neuron0x2ae6c70()*-0.709729);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4e10() {
   return (neuron0x2ae7180()*0.27091);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4e50() {
   return (neuron0x2ae7600()*-0.281041);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4e90() {
   return (neuron0x2ae7a80()*-0.486069);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4ed0() {
   return (neuron0x2ae8090()*-0.0351592);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4f10() {
   return (neuron0x2ae8480()*-0.148413);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4f50() {
   return (neuron0x2ae8900()*-0.211252);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4f90() {
   return (neuron0x2ae8d80()*0.0159336);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4fd0() {
   return (neuron0x2ae9200()*-0.536142);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5010() {
   return (neuron0x2ae9710()*-0.298648);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5050() {
   return (neuron0x2ae7e80()*-0.168438);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5090() {
   return (neuron0x2aea020()*0.0317008);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af50d0() {
   return (neuron0x2aea4a0()*-0.0553745);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4b60() {
   return (neuron0x2aead70()*-0.4158);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af4ba0() {
   return (neuron0x2aeb040()*-0.221738);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5220() {
   return (neuron0x2aeb4c0()*-0.361927);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5260() {
   return (neuron0x2aeb940()*-0.407179);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af52a0() {
   return (neuron0x2aebdc0()*0.55008);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af52e0() {
   return (neuron0x2aec240()*-0.610836);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5320() {
   return (neuron0x2aec6c0()*-0.284502);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5360() {
   return (neuron0x2aecb40()*-0.373743);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af53a0() {
   return (neuron0x2aecfc0()*0.0143761);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5720() {
   return (neuron0x2ae6000()*-0.0355405);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5760() {
   return (neuron0x2ae6370()*-1.28912);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af57a0() {
   return (neuron0x2ae67f0()*0.110896);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af57e0() {
   return (neuron0x2ae6c70()*0.442092);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5820() {
   return (neuron0x2ae7180()*0.489525);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5860() {
   return (neuron0x2ae7600()*0.33331);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af58a0() {
   return (neuron0x2ae7a80()*-0.542398);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af58e0() {
   return (neuron0x2ae8090()*-0.232491);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5920() {
   return (neuron0x2ae8480()*0.0639854);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5960() {
   return (neuron0x2ae8900()*0.867662);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af59a0() {
   return (neuron0x2ae8d80()*0.328841);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af59e0() {
   return (neuron0x2ae9200()*0.851858);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5a20() {
   return (neuron0x2ae9710()*0.312844);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5a60() {
   return (neuron0x2ae7e80()*-0.0438449);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5aa0() {
   return (neuron0x2aea020()*0.468053);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5ae0() {
   return (neuron0x2aea4a0()*-0.917886);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5570() {
   return (neuron0x2aead70()*0.0959037);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af55b0() {
   return (neuron0x2aeb040()*-0.295414);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5c30() {
   return (neuron0x2aeb4c0()*-0.447919);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5c70() {
   return (neuron0x2aeb940()*0.28496);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5cb0() {
   return (neuron0x2aebdc0()*-0.0253295);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5cf0() {
   return (neuron0x2aec240()*0.0178632);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5d30() {
   return (neuron0x2aec6c0()*0.182271);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5d70() {
   return (neuron0x2aecb40()*-0.114877);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5db0() {
   return (neuron0x2aecfc0()*-0.0504502);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6130() {
   return (neuron0x2ae6000()*-0.181982);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6170() {
   return (neuron0x2ae6370()*0.160664);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af61b0() {
   return (neuron0x2ae67f0()*0.000733651);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af61f0() {
   return (neuron0x2ae6c70()*-0.268977);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6230() {
   return (neuron0x2ae7180()*0.491511);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6270() {
   return (neuron0x2ae7600()*-0.173931);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af62b0() {
   return (neuron0x2ae7a80()*0.304418);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af62f0() {
   return (neuron0x2ae8090()*-0.0862704);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6330() {
   return (neuron0x2ae8480()*0.408678);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6370() {
   return (neuron0x2ae8900()*-0.182906);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af63b0() {
   return (neuron0x2ae8d80()*0.212224);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af63f0() {
   return (neuron0x2ae9200()*0.483509);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6430() {
   return (neuron0x2ae9710()*-0.37343);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6470() {
   return (neuron0x2ae7e80()*0.358973);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af64b0() {
   return (neuron0x2aea020()*-0.387252);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af64f0() {
   return (neuron0x2aea4a0()*-0.048128);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5f80() {
   return (neuron0x2aead70()*-0.0876061);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af5fc0() {
   return (neuron0x2aeb040()*0.208494);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6640() {
   return (neuron0x2aeb4c0()*0.0551755);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6680() {
   return (neuron0x2aeb940()*0.671249);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af66c0() {
   return (neuron0x2aebdc0()*-0.371685);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6700() {
   return (neuron0x2aec240()*0.498429);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6740() {
   return (neuron0x2aec6c0()*-0.0324924);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6780() {
   return (neuron0x2aecb40()*0.0259624);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af67c0() {
   return (neuron0x2aecfc0()*0.335612);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6b40() {
   return (neuron0x2ae6000()*0.186892);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6b80() {
   return (neuron0x2ae6370()*0.0482619);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6bc0() {
   return (neuron0x2ae67f0()*0.148479);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6c00() {
   return (neuron0x2ae6c70()*0.516714);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6c40() {
   return (neuron0x2ae7180()*-0.376569);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6c80() {
   return (neuron0x2ae7600()*-0.403317);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6cc0() {
   return (neuron0x2ae7a80()*0.223754);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6d00() {
   return (neuron0x2ae8090()*0.0659275);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6d40() {
   return (neuron0x2ae8480()*0.0296709);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6d80() {
   return (neuron0x2ae8900()*-0.980366);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6dc0() {
   return (neuron0x2ae8d80()*0.0753812);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6e00() {
   return (neuron0x2ae9200()*-0.202396);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6e40() {
   return (neuron0x2ae9710()*-0.232002);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6e80() {
   return (neuron0x2ae7e80()*0.282052);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6ec0() {
   return (neuron0x2aea020()*-0.348686);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6f00() {
   return (neuron0x2aea4a0()*0.473832);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af6990() {
   return (neuron0x2aead70()*0.126577);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af69d0() {
   return (neuron0x2aeb040()*-0.353456);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7050() {
   return (neuron0x2aeb4c0()*0.257612);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7090() {
   return (neuron0x2aeb940()*0.055768);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af70d0() {
   return (neuron0x2aebdc0()*-0.727577);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7110() {
   return (neuron0x2aec240()*0.259794);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7150() {
   return (neuron0x2aec6c0()*0.138063);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7190() {
   return (neuron0x2aecb40()*-0.121846);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af71d0() {
   return (neuron0x2aecfc0()*-0.387624);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7550() {
   return (neuron0x2ae6000()*0.128124);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7590() {
   return (neuron0x2ae6370()*-0.393262);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af75d0() {
   return (neuron0x2ae67f0()*-0.116458);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7610() {
   return (neuron0x2ae6c70()*0.0802006);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7650() {
   return (neuron0x2ae7180()*0.481455);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7690() {
   return (neuron0x2ae7600()*0.0595428);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af76d0() {
   return (neuron0x2ae7a80()*0.114529);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7710() {
   return (neuron0x2ae8090()*0.3812);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7750() {
   return (neuron0x2ae8480()*0.0805489);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7790() {
   return (neuron0x2ae8900()*1.01444);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af77d0() {
   return (neuron0x2ae8d80()*0.308825);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7810() {
   return (neuron0x2ae9200()*0.686845);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7850() {
   return (neuron0x2ae9710()*0.274059);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7890() {
   return (neuron0x2ae7e80()*-0.423127);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af78d0() {
   return (neuron0x2aea020()*0.0269549);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7910() {
   return (neuron0x2aea4a0()*-0.189126);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af73a0() {
   return (neuron0x2aead70()*0.219256);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af73e0() {
   return (neuron0x2aeb040()*0.285821);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7a60() {
   return (neuron0x2aeb4c0()*-0.599666);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7aa0() {
   return (neuron0x2aeb940()*-0.407323);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7ae0() {
   return (neuron0x2aebdc0()*0.464329);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7b20() {
   return (neuron0x2aec240()*-0.0665241);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7b60() {
   return (neuron0x2aec6c0()*-0.323529);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7ba0() {
   return (neuron0x2aecb40()*0.323422);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7be0() {
   return (neuron0x2aecfc0()*-0.50072);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7f60() {
   return (neuron0x2ae6000()*-0.466835);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7fa0() {
   return (neuron0x2ae6370()*0.427945);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7fe0() {
   return (neuron0x2ae67f0()*-0.371023);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8020() {
   return (neuron0x2ae6c70()*-0.254199);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8060() {
   return (neuron0x2ae7180()*-0.597773);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af80a0() {
   return (neuron0x2ae7600()*-0.500615);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af80e0() {
   return (neuron0x2ae7a80()*-0.198656);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8120() {
   return (neuron0x2ae8090()*-0.624822);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8160() {
   return (neuron0x2ae8480()*-0.51959);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af81a0() {
   return (neuron0x2ae8900()*-0.0995224);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af81e0() {
   return (neuron0x2ae8d80()*-0.0809483);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8220() {
   return (neuron0x2ae9200()*-0.555367);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8260() {
   return (neuron0x2ae9710()*-0.654329);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af82a0() {
   return (neuron0x2ae7e80()*0.178055);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af82e0() {
   return (neuron0x2aea020()*0.323495);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8320() {
   return (neuron0x2aea4a0()*0.257875);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7db0() {
   return (neuron0x2aead70()*-0.762145);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af7df0() {
   return (neuron0x2aeb040()*0.0897716);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8470() {
   return (neuron0x2aeb4c0()*-1.00001);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af84b0() {
   return (neuron0x2aeb940()*-0.102925);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af84f0() {
   return (neuron0x2aebdc0()*-0.052447);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8530() {
   return (neuron0x2aec240()*0.181349);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8570() {
   return (neuron0x2aec6c0()*-0.00268431);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af85b0() {
   return (neuron0x2aecb40()*0.262979);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af85f0() {
   return (neuron0x2aecfc0()*-0.259544);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8970() {
   return (neuron0x2ae6000()*-0.135073);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6190() {
   return (neuron0x2ae6370()*0.767977);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae61d0() {
   return (neuron0x2ae67f0()*-0.803197);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6590() {
   return (neuron0x2ae6c70()*-0.360004);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae65d0() {
   return (neuron0x2ae7180()*-0.144817);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6a10() {
   return (neuron0x2ae7600()*-1.236);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6a50() {
   return (neuron0x2ae7a80()*-0.0731408);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6e90() {
   return (neuron0x2ae8090()*0.511355);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae6ed0() {
   return (neuron0x2ae8480()*0.109712);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae73a0() {
   return (neuron0x2ae8900()*-1.01727);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae73e0() {
   return (neuron0x2ae8d80()*-0.104038);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7820() {
   return (neuron0x2ae9200()*-0.600993);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7860() {
   return (neuron0x2ae9710()*-0.635339);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7ca0() {
   return (neuron0x2ae7e80()*0.102537);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae7ce0() {
   return (neuron0x2aea020()*0.00312578);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8220() {
   return (neuron0x2aea4a0()*0.501812);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8260() {
   return (neuron0x2aead70()*-0.598264);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae86a0() {
   return (neuron0x2aeb040()*0.0121529);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae86e0() {
   return (neuron0x2aeb4c0()*-0.5701);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8b20() {
   return (neuron0x2aeb940()*-0.308572);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8b60() {
   return (neuron0x2aebdc0()*-0.00403588);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8fa0() {
   return (neuron0x2aec240()*-0.797911);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae8fe0() {
   return (neuron0x2aec6c0()*-0.136342);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9420() {
   return (neuron0x2aecb40()*-0.440064);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9460() {
   return (neuron0x2aecfc0()*0.854027);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af2de0() {
   return (neuron0x2ae6000()*0.69402);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af2e20() {
   return (neuron0x2ae6370()*-0.0678853);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea6c0() {
   return (neuron0x2ae67f0()*0.455166);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aea700() {
   return (neuron0x2ae6c70()*0.671864);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af87c0() {
   return (neuron0x2ae7180()*0.650331);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2af8800() {
   return (neuron0x2ae7600()*0.477403);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5a70() {
   return (neuron0x2ae7a80()*-0.201265);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5ab0() {
   return (neuron0x2ae8090()*0.091922);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb260() {
   return (neuron0x2ae8480()*0.47373);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb2a0() {
   return (neuron0x2ae8900()*0.48795);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb6e0() {
   return (neuron0x2ae8d80()*0.348037);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aeb720() {
   return (neuron0x2ae9200()*0.855447);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebb60() {
   return (neuron0x2ae9710()*0.562678);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebba0() {
   return (neuron0x2ae7e80()*-0.268745);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aebfe0() {
   return (neuron0x2aea020()*0.442358);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec020() {
   return (neuron0x2aea4a0()*-0.186051);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec460() {
   return (neuron0x2aead70()*0.240362);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec4a0() {
   return (neuron0x2aeb040()*-0.135574);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec8e0() {
   return (neuron0x2aeb4c0()*0.596233);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aec920() {
   return (neuron0x2aeb940()*0.386072);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecd60() {
   return (neuron0x2aebdc0()*-0.0199399);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aecda0() {
   return (neuron0x2aec240()*0.673439);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed1e0() {
   return (neuron0x2aec6c0()*0.411228);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aed220() {
   return (neuron0x2aecb40()*0.0310489);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9930() {
   return (neuron0x2aecfc0()*0.193731);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae9970() {
   return (neuron0x2ae6000()*-0.0640525);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbbe0() {
   return (neuron0x2ae6370()*1.2365);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbc20() {
   return (neuron0x2ae67f0()*-0.0736383);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbc60() {
   return (neuron0x2ae6c70()*-0.227238);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbca0() {
   return (neuron0x2ae7180()*-0.320316);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbce0() {
   return (neuron0x2ae7600()*-0.382865);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbd20() {
   return (neuron0x2ae7a80()*0.563153);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbd60() {
   return (neuron0x2ae8090()*0.539386);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbda0() {
   return (neuron0x2ae8480()*-0.0683167);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbde0() {
   return (neuron0x2ae8900()*-0.496537);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbe20() {
   return (neuron0x2ae8d80()*0.282147);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbe60() {
   return (neuron0x2ae9200()*-0.662036);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbea0() {
   return (neuron0x2ae9710()*0.148874);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbee0() {
   return (neuron0x2ae7e80()*-0.170532);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbf20() {
   return (neuron0x2aea020()*0.42147);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afbf60() {
   return (neuron0x2aea4a0()*1.18049);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afba30() {
   return (neuron0x2aead70()*-0.202086);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afba70() {
   return (neuron0x2aeb040()*-0.834581);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc0b0() {
   return (neuron0x2aeb4c0()*-0.177042);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc0f0() {
   return (neuron0x2aeb940()*0.194269);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc130() {
   return (neuron0x2aebdc0()*0.877525);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc170() {
   return (neuron0x2aec240()*-0.0964806);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc1b0() {
   return (neuron0x2aec6c0()*0.582725);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc1f0() {
   return (neuron0x2aecb40()*0.0407116);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc230() {
   return (neuron0x2aecfc0()*0.667184);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc5b0() {
   return (neuron0x2ae6000()*0.13288);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc5f0() {
   return (neuron0x2ae6370()*-0.216699);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc630() {
   return (neuron0x2ae67f0()*-0.458611);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc670() {
   return (neuron0x2ae6c70()*0.467259);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc6b0() {
   return (neuron0x2ae7180()*-0.434399);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc6f0() {
   return (neuron0x2ae7600()*-0.24251);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc730() {
   return (neuron0x2ae7a80()*0.0529036);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc770() {
   return (neuron0x2ae8090()*0.101489);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc7b0() {
   return (neuron0x2ae8480()*-0.442092);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc7f0() {
   return (neuron0x2ae8900()*-0.399758);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc830() {
   return (neuron0x2ae8d80()*0.411668);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc870() {
   return (neuron0x2ae9200()*0.378118);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc8b0() {
   return (neuron0x2ae9710()*0.230672);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc8f0() {
   return (neuron0x2ae7e80()*0.232996);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc930() {
   return (neuron0x2aea020()*0.363008);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc970() {
   return (neuron0x2aea4a0()*0.12144);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc400() {
   return (neuron0x2aead70()*0.464983);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afc440() {
   return (neuron0x2aeb040()*0.275238);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcac0() {
   return (neuron0x2aeb4c0()*0.273778);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcb00() {
   return (neuron0x2aeb940()*-0.0425448);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcb40() {
   return (neuron0x2aebdc0()*0.194174);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcb80() {
   return (neuron0x2aec240()*0.418405);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcbc0() {
   return (neuron0x2aec6c0()*-0.345777);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcc00() {
   return (neuron0x2aecb40()*0.450988);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcc40() {
   return (neuron0x2aecfc0()*0.193383);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afcfc0() {
   return (neuron0x2ae6000()*-0.233751);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd000() {
   return (neuron0x2ae6370()*-0.417966);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd040() {
   return (neuron0x2ae67f0()*-0.15404);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd080() {
   return (neuron0x2ae6c70()*-0.263487);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd0c0() {
   return (neuron0x2ae7180()*-0.461775);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd100() {
   return (neuron0x2ae7600()*0.0323918);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd140() {
   return (neuron0x2ae7a80()*-0.557665);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd180() {
   return (neuron0x2ae8090()*-0.240644);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd1c0() {
   return (neuron0x2ae8480()*0.0129493);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd200() {
   return (neuron0x2ae8900()*0.66839);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd240() {
   return (neuron0x2ae8d80()*-0.271311);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd280() {
   return (neuron0x2ae9200()*-0.236726);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd2c0() {
   return (neuron0x2ae9710()*0.336644);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd300() {
   return (neuron0x2ae7e80()*0.393479);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd340() {
   return (neuron0x2aea020()*-0.0802153);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd380() {
   return (neuron0x2aea4a0()*-0.841591);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afce10() {
   return (neuron0x2aead70()*-0.00953179);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afce50() {
   return (neuron0x2aeb040()*-0.206214);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd4d0() {
   return (neuron0x2aeb4c0()*-0.273653);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd510() {
   return (neuron0x2aeb940()*-0.295717);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd550() {
   return (neuron0x2aebdc0()*-0.306337);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd590() {
   return (neuron0x2aec240()*-0.515801);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd5d0() {
   return (neuron0x2aec6c0()*-0.398365);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd610() {
   return (neuron0x2aecb40()*0.208602);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd650() {
   return (neuron0x2aecfc0()*-0.340175);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd9d0() {
   return (neuron0x2ae6000()*-0.41478);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afda10() {
   return (neuron0x2ae6370()*-1.54728);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afda50() {
   return (neuron0x2ae67f0()*0.463954);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afda90() {
   return (neuron0x2ae6c70()*0.00276491);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdad0() {
   return (neuron0x2ae7180()*0.544454);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdb10() {
   return (neuron0x2ae7600()*1.43531);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdb50() {
   return (neuron0x2ae7a80()*-0.981239);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdb90() {
   return (neuron0x2ae8090()*0.132575);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdbd0() {
   return (neuron0x2ae8480()*0.276744);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdc10() {
   return (neuron0x2ae8900()*1.97838);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdc50() {
   return (neuron0x2ae8d80()*-0.0533358);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdc90() {
   return (neuron0x2ae9200()*0.0446581);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdcd0() {
   return (neuron0x2ae9710()*-0.212346);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdd10() {
   return (neuron0x2ae7e80()*0.471743);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdd50() {
   return (neuron0x2aea020()*0.311977);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdd90() {
   return (neuron0x2aea4a0()*-1.71329);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd820() {
   return (neuron0x2aead70()*0.18174);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afd860() {
   return (neuron0x2aeb040()*0.108308);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdee0() {
   return (neuron0x2aeb4c0()*-0.778119);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdf20() {
   return (neuron0x2aeb940()*-0.215895);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdf60() {
   return (neuron0x2aebdc0()*0.153316);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdfa0() {
   return (neuron0x2aec240()*0.885885);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afdfe0() {
   return (neuron0x2aec6c0()*-0.492112);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe020() {
   return (neuron0x2aecb40()*-0.205907);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe060() {
   return (neuron0x2aecfc0()*-0.679781);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe3e0() {
   return (neuron0x2ae6000()*0.134987);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe420() {
   return (neuron0x2ae6370()*-0.956246);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe460() {
   return (neuron0x2ae67f0()*0.3023);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe4a0() {
   return (neuron0x2ae6c70()*0.702102);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe4e0() {
   return (neuron0x2ae7180()*0.304494);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe520() {
   return (neuron0x2ae7600()*1.41983);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe560() {
   return (neuron0x2ae7a80()*0.0911272);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe5a0() {
   return (neuron0x2ae8090()*-0.436594);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe5e0() {
   return (neuron0x2ae8480()*-0.446813);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe620() {
   return (neuron0x2ae8900()*1.46598);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe660() {
   return (neuron0x2ae8d80()*0.17623);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe6a0() {
   return (neuron0x2ae9200()*0.480978);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe6e0() {
   return (neuron0x2ae9710()*-0.186985);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe720() {
   return (neuron0x2ae7e80()*0.278105);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe760() {
   return (neuron0x2aea020()*0.547394);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe7a0() {
   return (neuron0x2aea4a0()*-0.54376);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe230() {
   return (neuron0x2aead70()*0.127072);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe270() {
   return (neuron0x2aeb040()*0.16213);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe8f0() {
   return (neuron0x2aeb4c0()*-0.053916);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe930() {
   return (neuron0x2aeb940()*-0.30039);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe970() {
   return (neuron0x2aebdc0()*-0.29605);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe9b0() {
   return (neuron0x2aec240()*0.576787);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afe9f0() {
   return (neuron0x2aec6c0()*-0.443914);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afea30() {
   return (neuron0x2aecb40()*0.414421);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afea70() {
   return (neuron0x2aecfc0()*-0.397024);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afedf0() {
   return (neuron0x2ae6000()*-0.0578206);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afee30() {
   return (neuron0x2ae6370()*0.351157);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afee70() {
   return (neuron0x2ae67f0()*-0.569872);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afeeb0() {
   return (neuron0x2ae6c70()*0.131542);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afeef0() {
   return (neuron0x2ae7180()*-0.144207);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afef30() {
   return (neuron0x2ae7600()*-0.839601);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afef70() {
   return (neuron0x2ae7a80()*-0.109433);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afefb0() {
   return (neuron0x2ae8090()*0.331383);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afeff0() {
   return (neuron0x2ae8480()*-0.0289666);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff030() {
   return (neuron0x2ae8900()*-1.576);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff070() {
   return (neuron0x2ae8d80()*-0.050966);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff0b0() {
   return (neuron0x2ae9200()*-0.268352);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff0f0() {
   return (neuron0x2ae9710()*0.345848);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff130() {
   return (neuron0x2ae7e80()*0.346723);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff170() {
   return (neuron0x2aea020()*-0.291772);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff1b0() {
   return (neuron0x2aea4a0()*1.34453);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afec40() {
   return (neuron0x2aead70()*-0.0788654);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2afec80() {
   return (neuron0x2aeb040()*0.157396);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff300() {
   return (neuron0x2aeb4c0()*0.174099);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff340() {
   return (neuron0x2aeb940()*0.164349);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff380() {
   return (neuron0x2aebdc0()*-0.0345729);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff3c0() {
   return (neuron0x2aec240()*-0.37352);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff400() {
   return (neuron0x2aec6c0()*0.394109);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff440() {
   return (neuron0x2aecb40()*-0.522818);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff480() {
   return (neuron0x2aecfc0()*-0.00307814);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff800() {
   return (neuron0x2ae6000()*0.0300123);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff840() {
   return (neuron0x2ae6370()*0.499023);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff880() {
   return (neuron0x2ae67f0()*0.179153);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff8c0() {
   return (neuron0x2ae6c70()*0.143621);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff900() {
   return (neuron0x2ae7180()*-0.572202);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff940() {
   return (neuron0x2ae7600()*0.29384);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff980() {
   return (neuron0x2ae7a80()*-0.0739412);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff9c0() {
   return (neuron0x2ae8090()*-0.151428);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affa00() {
   return (neuron0x2ae8480()*-0.427786);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affa40() {
   return (neuron0x2ae8900()*0.55666);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affa80() {
   return (neuron0x2ae8d80()*-0.108575);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affac0() {
   return (neuron0x2ae9200()*0.349897);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affb00() {
   return (neuron0x2ae9710()*0.390135);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affb40() {
   return (neuron0x2ae7e80()*-0.144702);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affb80() {
   return (neuron0x2aea020()*0.0387108);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affbc0() {
   return (neuron0x2aea4a0()*-0.0437324);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff650() {
   return (neuron0x2aead70()*0.225539);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2aff690() {
   return (neuron0x2aeb040()*0.664736);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affd10() {
   return (neuron0x2aeb4c0()*0.0596047);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affd50() {
   return (neuron0x2aeb940()*-0.166509);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affd90() {
   return (neuron0x2aebdc0()*-0.184039);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affdd0() {
   return (neuron0x2aec240()*-0.158949);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affe10() {
   return (neuron0x2aec6c0()*0.0193696);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affe50() {
   return (neuron0x2aecb40()*-0.462661);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2affe90() {
   return (neuron0x2aecfc0()*0.332682);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00210() {
   return (neuron0x2ae6000()*0.539444);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00250() {
   return (neuron0x2ae6370()*0.79734);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00290() {
   return (neuron0x2ae67f0()*-0.26884);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b002d0() {
   return (neuron0x2ae6c70()*0.24676);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00310() {
   return (neuron0x2ae7180()*0.0714825);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00350() {
   return (neuron0x2ae7600()*-0.3826);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00390() {
   return (neuron0x2ae7a80()*0.18392);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b003d0() {
   return (neuron0x2ae8090()*-0.207281);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00410() {
   return (neuron0x2ae8480()*-0.302931);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00450() {
   return (neuron0x2ae8900()*-0.318105);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00490() {
   return (neuron0x2ae8d80()*0.755244);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b004d0() {
   return (neuron0x2ae9200()*0.186293);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00510() {
   return (neuron0x2ae9710()*0.414544);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00550() {
   return (neuron0x2ae7e80()*0.752374);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00590() {
   return (neuron0x2aea020()*0.509773);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b005d0() {
   return (neuron0x2aea4a0()*0.384307);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00060() {
   return (neuron0x2aead70()*0.321092);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b000a0() {
   return (neuron0x2aeb040()*-0.182034);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00720() {
   return (neuron0x2aeb4c0()*0.666831);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00760() {
   return (neuron0x2aeb940()*0.344972);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b007a0() {
   return (neuron0x2aebdc0()*0.309628);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b007e0() {
   return (neuron0x2aec240()*0.100856);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00820() {
   return (neuron0x2aec6c0()*0.30608);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00860() {
   return (neuron0x2aecb40()*-0.215599);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b008a0() {
   return (neuron0x2aecfc0()*0.393001);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00b00() {
   return (neuron0x2aeeed0()*-2.1124);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00b40() {
   return (neuron0x2ae9ca0()*-1.64758);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00b80() {
   return (neuron0x2aefa40()*-1.00269);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00bc0() {
   return (neuron0x2af0560()*3.21934);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00c00() {
   return (neuron0x2af0f70()*-1.26001);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00c40() {
   return (neuron0x2af1980()*-0.435595);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00c80() {
   return (neuron0x2aef570()*-2.15012);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00cc0() {
   return (neuron0x2af35b0()*4.68576);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00d00() {
   return (neuron0x2af3fc0()*3.26899);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00d40() {
   return (neuron0x2af49d0()*-0.307133);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00d80() {
   return (neuron0x2af53e0()*-0.967877);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00dc0() {
   return (neuron0x2af5df0()*0.684348);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00e00() {
   return (neuron0x2af6800()*1.54682);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00e40() {
   return (neuron0x2af7210()*-0.79018);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00e80() {
   return (neuron0x2af7c20()*-0.978466);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b00ec0() {
   return (neuron0x2af8630()*0.178971);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5ed0() {
   return (neuron0x2af2c50()*1.01054);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2ae5f10() {
   return (neuron0x2afb8a0()*1.06174);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b01010() {
   return (neuron0x2afc270()*0.179221);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b01050() {
   return (neuron0x2afcc80()*-0.4646);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b01090() {
   return (neuron0x2afd690()*-2.39851);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b010d0() {
   return (neuron0x2afe0a0()*-0.694418);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b01110() {
   return (neuron0x2afeab0()*1.93364);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b01150() {
   return (neuron0x2aff4c0()*-0.845661);
}

double nnFunc_3A_25_25hi_1500ep_weight::synapse0x2b01190() {
   return (neuron0x2affed0()*2.17806);
}

