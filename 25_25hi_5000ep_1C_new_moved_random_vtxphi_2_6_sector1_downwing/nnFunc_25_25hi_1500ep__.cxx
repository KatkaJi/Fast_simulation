#include "25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_downwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x10f5e60();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x10f5e60();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x10da400() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x10da740() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x10daa80() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dadc0() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x10db100() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x10db570() {
   double input = -3.68358;
   input += synapse0x10c9710();
   input += synapse0x10db820();
   input += synapse0x10db860();
   input += synapse0x10db8a0();
   input += synapse0x10db8e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10db570() {
   double input = input0x10db570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10db920() {
   double input = 9.07284;
   input += synapse0x10dbc60();
   input += synapse0x10dbca0();
   input += synapse0x10dbce0();
   input += synapse0x10dbd20();
   input += synapse0x10dbd60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10db920() {
   double input = input0x10db920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dbda0() {
   double input = -0.730151;
   input += synapse0x10dc0e0();
   input += synapse0x10dc120();
   input += synapse0x10dc160();
   input += synapse0x10dc1a0();
   input += synapse0x10dc1e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dbda0() {
   double input = input0x10dbda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dc220() {
   double input = -0.131454;
   input += synapse0x10dc560();
   input += synapse0x10dc5a0();
   input += synapse0xf623f0();
   input += synapse0xf62430();
   input += synapse0x10dc6f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dc220() {
   double input = input0x10dc220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dc730() {
   double input = 3.84636;
   input += synapse0x10dca70();
   input += synapse0x10dcab0();
   input += synapse0x10dcaf0();
   input += synapse0x10dcb30();
   input += synapse0x10dcb70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dc730() {
   double input = input0x10dc730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dcbb0() {
   double input = -2.09345;
   input += synapse0x10dcef0();
   input += synapse0x10dcf30();
   input += synapse0x10dcf70();
   input += synapse0x10dcfb0();
   input += synapse0x10dcff0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dcbb0() {
   double input = input0x10dcbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dd030() {
   double input = -1.8984;
   input += synapse0x10dd370();
   input += synapse0x10dd3b0();
   input += synapse0x10dd3f0();
   input += synapse0x10dc5e0();
   input += synapse0x10dc620();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dd030() {
   double input = input0x10dd030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dd640() {
   double input = 0.694186;
   input += synapse0x10dd8f0();
   input += synapse0x10dd930();
   input += synapse0x10dd970();
   input += synapse0x10dd9b0();
   input += synapse0x10dd9f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dd640() {
   double input = input0x10dd640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dda30() {
   double input = 0.738817;
   input += synapse0x10ddd70();
   input += synapse0x10dddb0();
   input += synapse0x10dddf0();
   input += synapse0x10dde30();
   input += synapse0x10dde70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dda30() {
   double input = input0x10dda30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10ddeb0() {
   double input = 0.312179;
   input += synapse0x10de1f0();
   input += synapse0x10de230();
   input += synapse0x10de270();
   input += synapse0x10de2b0();
   input += synapse0x10de2f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10ddeb0() {
   double input = input0x10ddeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10de330() {
   double input = -0.752798;
   input += synapse0x10de670();
   input += synapse0x10de6b0();
   input += synapse0x10de6f0();
   input += synapse0x10de730();
   input += synapse0x10de770();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10de330() {
   double input = input0x10de330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10de7b0() {
   double input = 2.11862;
   input += synapse0xf62240();
   input += synapse0xf62280();
   input += synapse0x10dec00();
   input += synapse0x10dec40();
   input += synapse0x10dec80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10de7b0() {
   double input = input0x10de7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10decc0() {
   double input = -1.5084;
   input += synapse0x10df000();
   input += synapse0x10df040();
   input += synapse0x10df080();
   input += synapse0x10df0c0();
   input += synapse0x10df100();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10decc0() {
   double input = input0x10decc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dd430() {
   double input = 0.365879;
   input += synapse0xf629c0();
   input += synapse0x10c96b0();
   input += synapse0xfdef00();
   input += synapse0x10dd5c0();
   input += synapse0x10dd600();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dd430() {
   double input = input0x10dd430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10df5e0() {
   double input = -0.375728;
   input += synapse0x10df920();
   input += synapse0x10df960();
   input += synapse0x10df9a0();
   input += synapse0x10df9e0();
   input += synapse0x10dfa20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10df5e0() {
   double input = input0x10df5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10dfa60() {
   double input = 2.62168;
   input += synapse0x10dfda0();
   input += synapse0x10da620();
   input += synapse0x10da660();
   input += synapse0x10da960();
   input += synapse0x10da9a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10dfa60() {
   double input = input0x10dfa60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e0330() {
   double input = -0.00738281;
   input += synapse0x10e04c0();
   input += synapse0x10e0500();
   input += synapse0x10e0540();
   input += synapse0x10e0580();
   input += synapse0x10e05c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e0330() {
   double input = input0x10e0330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e0600() {
   double input = -0.426177;
   input += synapse0x10e0940();
   input += synapse0x10e0980();
   input += synapse0x10e09c0();
   input += synapse0x10e0a00();
   input += synapse0x10e0a40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e0600() {
   double input = input0x10e0600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e0a80() {
   double input = 3.17838;
   input += synapse0x10e0dc0();
   input += synapse0x10e0e00();
   input += synapse0x10e0e40();
   input += synapse0x10e0e80();
   input += synapse0x10e0ec0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e0a80() {
   double input = input0x10e0a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e0f00() {
   double input = 0.699004;
   input += synapse0x10e1240();
   input += synapse0x10e1280();
   input += synapse0x10e12c0();
   input += synapse0x10e1300();
   input += synapse0x10e1340();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e0f00() {
   double input = input0x10e0f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e1380() {
   double input = 1.64546;
   input += synapse0x10e16c0();
   input += synapse0x10e1700();
   input += synapse0x10e1740();
   input += synapse0x10e1780();
   input += synapse0x10e17c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e1380() {
   double input = input0x10e1380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e1800() {
   double input = -0.0263338;
   input += synapse0x10e1b40();
   input += synapse0x10e1b80();
   input += synapse0x10e1bc0();
   input += synapse0x10e1c00();
   input += synapse0x10e1c40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e1800() {
   double input = input0x10e1800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e1c80() {
   double input = -0.70773;
   input += synapse0x10e1fc0();
   input += synapse0x10e2000();
   input += synapse0x10e2040();
   input += synapse0x10e2080();
   input += synapse0x10e20c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e1c80() {
   double input = input0x10e1c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e2100() {
   double input = 0.340809;
   input += synapse0x10e2440();
   input += synapse0x10e2480();
   input += synapse0x10e24c0();
   input += synapse0x10e2500();
   input += synapse0x10e2540();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e2100() {
   double input = input0x10e2100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e2580() {
   double input = -1.54521;
   input += synapse0x10e28c0();
   input += synapse0x10e2900();
   input += synapse0x10e2940();
   input += synapse0x10e2980();
   input += synapse0x10e29c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e2580() {
   double input = input0x10e2580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e4490() {
   double input = 0.419846;
   input += synapse0x10dc4d0();
   input += synapse0x10dc510();
   input += synapse0x10dc9e0();
   input += synapse0x10dca20();
   input += synapse0x10dce60();
   input += synapse0x10dcea0();
   input += synapse0x10dd2e0();
   input += synapse0x10dd320();
   input += synapse0x10dd860();
   input += synapse0x10dd8a0();
   input += synapse0x10ddce0();
   input += synapse0x10ddd20();
   input += synapse0x10de160();
   input += synapse0x10de1a0();
   input += synapse0x10de5e0();
   input += synapse0x10de620();
   input += synapse0x10dea60();
   input += synapse0x10deaa0();
   input += synapse0x10def70();
   input += synapse0x10defb0();
   input += synapse0x10df890();
   input += synapse0x10df8d0();
   input += synapse0x10dfd10();
   input += synapse0x10dfd50();
   input += synapse0x10db320();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e4490() {
   double input = input0x10e4490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10df250() {
   double input = 0.427899;
   input += synapse0x10df3e0();
   input += synapse0x10df420();
   input += synapse0x10df460();
   input += synapse0x10df4a0();
   input += synapse0x10df4e0();
   input += synapse0x10df520();
   input += synapse0x10df560();
   input += synapse0x10df5a0();
   input += synapse0x10db360();
   input += synapse0x10e1630();
   input += synapse0x10e1670();
   input += synapse0x10e1ab0();
   input += synapse0x10e1af0();
   input += synapse0x10e1f30();
   input += synapse0x10e1f70();
   input += synapse0x10e23b0();
   input += synapse0x10e23f0();
   input += synapse0x10e2830();
   input += synapse0x10e2870();
   input += synapse0x10db790();
   input += synapse0x10db7d0();
   input += synapse0x10e08b0();
   input += synapse0x10e08f0();
   input += synapse0x10e4f40();
   input += synapse0x10e4f80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10df250() {
   double input = input0x10df250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e4fc0() {
   double input = -0.16388;
   input += synapse0x10deaf0();
   input += synapse0x10deb30();
   input += synapse0x10deb70();
   input += synapse0x10debb0();
   input += synapse0x10e5510();
   input += synapse0x10e5550();
   input += synapse0x10e5590();
   input += synapse0x10e55d0();
   input += synapse0x10e5610();
   input += synapse0x10e5650();
   input += synapse0x10e5690();
   input += synapse0x10e56d0();
   input += synapse0x10e5710();
   input += synapse0x10e5750();
   input += synapse0x10e5790();
   input += synapse0x10e57d0();
   input += synapse0x10e5150();
   input += synapse0x10e5190();
   input += synapse0x10e5920();
   input += synapse0x10e5960();
   input += synapse0x10e59a0();
   input += synapse0x10e59e0();
   input += synapse0x10e5a20();
   input += synapse0x10e5a60();
   input += synapse0x10e5aa0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e4fc0() {
   double input = input0x10e4fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e5ae0() {
   double input = -0.0911807;
   input += synapse0x10e5e20();
   input += synapse0x10e5e60();
   input += synapse0x10e5ea0();
   input += synapse0x10e5ee0();
   input += synapse0x10e5f20();
   input += synapse0x10e5f60();
   input += synapse0x10e5fa0();
   input += synapse0x10e5fe0();
   input += synapse0x10e6020();
   input += synapse0x10e6060();
   input += synapse0x10e60a0();
   input += synapse0x10e60e0();
   input += synapse0x10e6120();
   input += synapse0x10e6160();
   input += synapse0x10e61a0();
   input += synapse0x10e61e0();
   input += synapse0x10e5c70();
   input += synapse0x10e5cb0();
   input += synapse0x10e6330();
   input += synapse0x10e6370();
   input += synapse0x10e63b0();
   input += synapse0x10e63f0();
   input += synapse0x10e6430();
   input += synapse0x10e6470();
   input += synapse0x10e64b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e5ae0() {
   double input = input0x10e5ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e64f0() {
   double input = 0.0928267;
   input += synapse0x10e6830();
   input += synapse0x10e6870();
   input += synapse0x10e68b0();
   input += synapse0x10e68f0();
   input += synapse0x10e6930();
   input += synapse0x10e6970();
   input += synapse0x10e69b0();
   input += synapse0x10e69f0();
   input += synapse0x10e6a30();
   input += synapse0x10e6a70();
   input += synapse0x10e6ab0();
   input += synapse0x10e6af0();
   input += synapse0x10e6b30();
   input += synapse0x10e6b70();
   input += synapse0x10e6bb0();
   input += synapse0x10e6bf0();
   input += synapse0x10e6680();
   input += synapse0x10e66c0();
   input += synapse0x10e6d40();
   input += synapse0x10e6d80();
   input += synapse0x10e6dc0();
   input += synapse0x10e6e00();
   input += synapse0x10e6e40();
   input += synapse0x10e6e80();
   input += synapse0x10e6ec0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e64f0() {
   double input = input0x10e64f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e6f00() {
   double input = 0.381134;
   input += synapse0x10e7240();
   input += synapse0x10e7280();
   input += synapse0x10e72c0();
   input += synapse0x10e7300();
   input += synapse0x10e7340();
   input += synapse0x10e7380();
   input += synapse0x10e73c0();
   input += synapse0x10e4620();
   input += synapse0x10e4660();
   input += synapse0x10e46a0();
   input += synapse0x10e46e0();
   input += synapse0x10e4720();
   input += synapse0x10e4760();
   input += synapse0x10e47a0();
   input += synapse0x10e47e0();
   input += synapse0x10e4820();
   input += synapse0x10e7090();
   input += synapse0x10e70d0();
   input += synapse0x10e4970();
   input += synapse0x10e49b0();
   input += synapse0x10e49f0();
   input += synapse0x10e4a30();
   input += synapse0x10e4a70();
   input += synapse0x10e4ab0();
   input += synapse0x10e4af0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e6f00() {
   double input = input0x10e6f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e4b30() {
   double input = 0.0986043;
   input += synapse0x10e4de0();
   input += synapse0x10e84a0();
   input += synapse0x10e84e0();
   input += synapse0x10e8520();
   input += synapse0x10e8560();
   input += synapse0x10e85a0();
   input += synapse0x10e85e0();
   input += synapse0x10e8620();
   input += synapse0x10e8660();
   input += synapse0x10e86a0();
   input += synapse0x10e86e0();
   input += synapse0x10e8720();
   input += synapse0x10e8760();
   input += synapse0x10e87a0();
   input += synapse0x10e87e0();
   input += synapse0x10e8820();
   input += synapse0x10e4cc0();
   input += synapse0x10e4d00();
   input += synapse0x10e8970();
   input += synapse0x10e89b0();
   input += synapse0x10e89f0();
   input += synapse0x10e8a30();
   input += synapse0x10e8a70();
   input += synapse0x10e8ab0();
   input += synapse0x10e8af0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e4b30() {
   double input = input0x10e4b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e8b30() {
   double input = -0.233568;
   input += synapse0x10e8e70();
   input += synapse0x10e8eb0();
   input += synapse0x10e8ef0();
   input += synapse0x10e8f30();
   input += synapse0x10e8f70();
   input += synapse0x10e8fb0();
   input += synapse0x10e8ff0();
   input += synapse0x10e9030();
   input += synapse0x10e9070();
   input += synapse0x10e90b0();
   input += synapse0x10e90f0();
   input += synapse0x10e9130();
   input += synapse0x10e9170();
   input += synapse0x10e91b0();
   input += synapse0x10e91f0();
   input += synapse0x10e9230();
   input += synapse0x10e8cc0();
   input += synapse0x10e8d00();
   input += synapse0x10e9380();
   input += synapse0x10e93c0();
   input += synapse0x10e9400();
   input += synapse0x10e9440();
   input += synapse0x10e9480();
   input += synapse0x10e94c0();
   input += synapse0x10e9500();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e8b30() {
   double input = input0x10e8b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e9540() {
   double input = -0.447629;
   input += synapse0x10e9880();
   input += synapse0x10e98c0();
   input += synapse0x10e9900();
   input += synapse0x10e9940();
   input += synapse0x10e9980();
   input += synapse0x10e99c0();
   input += synapse0x10e9a00();
   input += synapse0x10e9a40();
   input += synapse0x10e9a80();
   input += synapse0x10e9ac0();
   input += synapse0x10e9b00();
   input += synapse0x10e9b40();
   input += synapse0x10e9b80();
   input += synapse0x10e9bc0();
   input += synapse0x10e9c00();
   input += synapse0x10e9c40();
   input += synapse0x10e96d0();
   input += synapse0x10e9710();
   input += synapse0x10e9d90();
   input += synapse0x10e9dd0();
   input += synapse0x10e9e10();
   input += synapse0x10e9e50();
   input += synapse0x10e9e90();
   input += synapse0x10e9ed0();
   input += synapse0x10e9f10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e9540() {
   double input = input0x10e9540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e9f50() {
   double input = 0.101865;
   input += synapse0x10ea290();
   input += synapse0x10ea2d0();
   input += synapse0x10ea310();
   input += synapse0x10ea350();
   input += synapse0x10ea390();
   input += synapse0x10ea3d0();
   input += synapse0x10ea410();
   input += synapse0x10ea450();
   input += synapse0x10ea490();
   input += synapse0x10ea4d0();
   input += synapse0x10ea510();
   input += synapse0x10ea550();
   input += synapse0x10ea590();
   input += synapse0x10ea5d0();
   input += synapse0x10ea610();
   input += synapse0x10ea650();
   input += synapse0x10ea0e0();
   input += synapse0x10ea120();
   input += synapse0x10ea7a0();
   input += synapse0x10ea7e0();
   input += synapse0x10ea820();
   input += synapse0x10ea860();
   input += synapse0x10ea8a0();
   input += synapse0x10ea8e0();
   input += synapse0x10ea920();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e9f50() {
   double input = input0x10e9f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10ea960() {
   double input = -0.28191;
   input += synapse0x10eaca0();
   input += synapse0x10eace0();
   input += synapse0x10ead20();
   input += synapse0x10ead60();
   input += synapse0x10eada0();
   input += synapse0x10eade0();
   input += synapse0x10eae20();
   input += synapse0x10eae60();
   input += synapse0x10eaea0();
   input += synapse0x10eaee0();
   input += synapse0x10eaf20();
   input += synapse0x10eaf60();
   input += synapse0x10eafa0();
   input += synapse0x10eafe0();
   input += synapse0x10eb020();
   input += synapse0x10eb060();
   input += synapse0x10eaaf0();
   input += synapse0x10eab30();
   input += synapse0x10eb1b0();
   input += synapse0x10eb1f0();
   input += synapse0x10eb230();
   input += synapse0x10eb270();
   input += synapse0x10eb2b0();
   input += synapse0x10eb2f0();
   input += synapse0x10eb330();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10ea960() {
   double input = input0x10ea960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10eb370() {
   double input = -1.27392;
   input += synapse0x10eb6b0();
   input += synapse0x10eb6f0();
   input += synapse0x10eb730();
   input += synapse0x10eb770();
   input += synapse0x10eb7b0();
   input += synapse0x10eb7f0();
   input += synapse0x10eb830();
   input += synapse0x10eb870();
   input += synapse0x10eb8b0();
   input += synapse0x10eb8f0();
   input += synapse0x10eb930();
   input += synapse0x10eb970();
   input += synapse0x10eb9b0();
   input += synapse0x10eb9f0();
   input += synapse0x10eba30();
   input += synapse0x10eba70();
   input += synapse0x10eb500();
   input += synapse0x10eb540();
   input += synapse0x10ebbc0();
   input += synapse0x10ebc00();
   input += synapse0x10ebc40();
   input += synapse0x10ebc80();
   input += synapse0x10ebcc0();
   input += synapse0x10ebd00();
   input += synapse0x10ebd40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10eb370() {
   double input = input0x10eb370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10ebd80() {
   double input = -0.388579;
   input += synapse0x10ec0c0();
   input += synapse0x10ec100();
   input += synapse0x10ec140();
   input += synapse0x10ec180();
   input += synapse0x10ec1c0();
   input += synapse0x10ec200();
   input += synapse0x10ec240();
   input += synapse0x10ec280();
   input += synapse0x10ec2c0();
   input += synapse0x10ec300();
   input += synapse0x10ec340();
   input += synapse0x10ec380();
   input += synapse0x10ec3c0();
   input += synapse0x10ec400();
   input += synapse0x10ec440();
   input += synapse0x10ec480();
   input += synapse0x10ebf10();
   input += synapse0x10ebf50();
   input += synapse0x10ec5d0();
   input += synapse0x10ec610();
   input += synapse0x10ec650();
   input += synapse0x10ec690();
   input += synapse0x10ec6d0();
   input += synapse0x10ec710();
   input += synapse0x10ec750();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10ebd80() {
   double input = input0x10ebd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10ec790() {
   double input = -0.252925;
   input += synapse0x10ecad0();
   input += synapse0x10ecb10();
   input += synapse0x10ecb50();
   input += synapse0x10ecb90();
   input += synapse0x10ecbd0();
   input += synapse0x10ecc10();
   input += synapse0x10ecc50();
   input += synapse0x10ecc90();
   input += synapse0x10eccd0();
   input += synapse0x10ecd10();
   input += synapse0x10ecd50();
   input += synapse0x10ecd90();
   input += synapse0x10ecdd0();
   input += synapse0x10ece10();
   input += synapse0x10ece50();
   input += synapse0x10ece90();
   input += synapse0x10ec920();
   input += synapse0x10ec960();
   input += synapse0x10ecfe0();
   input += synapse0x10ed020();
   input += synapse0x10ed060();
   input += synapse0x10ed0a0();
   input += synapse0x10ed0e0();
   input += synapse0x10ed120();
   input += synapse0x10ed160();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10ec790() {
   double input = input0x10ec790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10ed1a0() {
   double input = -0.610181;
   input += synapse0x10ed4e0();
   input += synapse0x10ed520();
   input += synapse0x10ed560();
   input += synapse0x10ed5a0();
   input += synapse0x10ed5e0();
   input += synapse0x10ed620();
   input += synapse0x10ed660();
   input += synapse0x10ed6a0();
   input += synapse0x10ed6e0();
   input += synapse0x10ed720();
   input += synapse0x10ed760();
   input += synapse0x10ed7a0();
   input += synapse0x10ed7e0();
   input += synapse0x10ed820();
   input += synapse0x10ed860();
   input += synapse0x10ed8a0();
   input += synapse0x10ed330();
   input += synapse0x10ed370();
   input += synapse0x10ed9f0();
   input += synapse0x10eda30();
   input += synapse0x10eda70();
   input += synapse0x10edab0();
   input += synapse0x10edaf0();
   input += synapse0x10edb30();
   input += synapse0x10edb70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10ed1a0() {
   double input = input0x10ed1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10edbb0() {
   double input = 0.495566;
   input += synapse0x10edef0();
   input += synapse0x10db700();
   input += synapse0x10db740();
   input += synapse0x10dbb40();
   input += synapse0x10dbb80();
   input += synapse0x10dbfc0();
   input += synapse0x10dc000();
   input += synapse0x10dc440();
   input += synapse0x10dc480();
   input += synapse0x10dc950();
   input += synapse0x10dc990();
   input += synapse0x10dcdd0();
   input += synapse0x10dce10();
   input += synapse0x10dd250();
   input += synapse0x10dd290();
   input += synapse0x10dd7d0();
   input += synapse0x10dd810();
   input += synapse0x10ddc50();
   input += synapse0x10ddc90();
   input += synapse0x10de0d0();
   input += synapse0x10de110();
   input += synapse0x10de550();
   input += synapse0x10de590();
   input += synapse0x10de9d0();
   input += synapse0x10dea10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10edbb0() {
   double input = input0x10edbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10e81d0() {
   double input = 0.586241;
   input += synapse0x10e8360();
   input += synapse0x10e83a0();
   input += synapse0x10dfc80();
   input += synapse0x10dfcc0();
   input += synapse0x10edd40();
   input += synapse0x10edd80();
   input += synapse0x10dafe0();
   input += synapse0x10db020();
   input += synapse0x10e0820();
   input += synapse0x10e0860();
   input += synapse0x10e0ca0();
   input += synapse0x10e0ce0();
   input += synapse0x10e1120();
   input += synapse0x10e1160();
   input += synapse0x10e15a0();
   input += synapse0x10e15e0();
   input += synapse0x10e1a20();
   input += synapse0x10e1a60();
   input += synapse0x10e1ea0();
   input += synapse0x10e1ee0();
   input += synapse0x10e2320();
   input += synapse0x10e2360();
   input += synapse0x10e27a0();
   input += synapse0x10e27e0();
   input += synapse0x10deee0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10e81d0() {
   double input = input0x10e81d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f0e20() {
   double input = -0.33087;
   input += synapse0x10def20();
   input += synapse0x10f1160();
   input += synapse0x10f11a0();
   input += synapse0x10f11e0();
   input += synapse0x10f1220();
   input += synapse0x10f1260();
   input += synapse0x10f12a0();
   input += synapse0x10f12e0();
   input += synapse0x10f1320();
   input += synapse0x10f1360();
   input += synapse0x10f13a0();
   input += synapse0x10f13e0();
   input += synapse0x10f1420();
   input += synapse0x10f1460();
   input += synapse0x10f14a0();
   input += synapse0x10f14e0();
   input += synapse0x10f0fb0();
   input += synapse0x10f0ff0();
   input += synapse0x10f1630();
   input += synapse0x10f1670();
   input += synapse0x10f16b0();
   input += synapse0x10f16f0();
   input += synapse0x10f1730();
   input += synapse0x10f1770();
   input += synapse0x10f17b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f0e20() {
   double input = input0x10f0e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f17f0() {
   double input = -0.537837;
   input += synapse0x10f1b30();
   input += synapse0x10f1b70();
   input += synapse0x10f1bb0();
   input += synapse0x10f1bf0();
   input += synapse0x10f1c30();
   input += synapse0x10f1c70();
   input += synapse0x10f1cb0();
   input += synapse0x10f1cf0();
   input += synapse0x10f1d30();
   input += synapse0x10f1d70();
   input += synapse0x10f1db0();
   input += synapse0x10f1df0();
   input += synapse0x10f1e30();
   input += synapse0x10f1e70();
   input += synapse0x10f1eb0();
   input += synapse0x10f1ef0();
   input += synapse0x10f1980();
   input += synapse0x10f19c0();
   input += synapse0x10f2040();
   input += synapse0x10f2080();
   input += synapse0x10f20c0();
   input += synapse0x10f2100();
   input += synapse0x10f2140();
   input += synapse0x10f2180();
   input += synapse0x10f21c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f17f0() {
   double input = input0x10f17f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f2200() {
   double input = 0.53416;
   input += synapse0x10f2540();
   input += synapse0x10f2580();
   input += synapse0x10f25c0();
   input += synapse0x10f2600();
   input += synapse0x10f2640();
   input += synapse0x10f2680();
   input += synapse0x10f26c0();
   input += synapse0x10f2700();
   input += synapse0x10f2740();
   input += synapse0x10f2780();
   input += synapse0x10f27c0();
   input += synapse0x10f2800();
   input += synapse0x10f2840();
   input += synapse0x10f2880();
   input += synapse0x10f28c0();
   input += synapse0x10f2900();
   input += synapse0x10f2390();
   input += synapse0x10f23d0();
   input += synapse0x10f2a50();
   input += synapse0x10f2a90();
   input += synapse0x10f2ad0();
   input += synapse0x10f2b10();
   input += synapse0x10f2b50();
   input += synapse0x10f2b90();
   input += synapse0x10f2bd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f2200() {
   double input = input0x10f2200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f2c10() {
   double input = 0.363043;
   input += synapse0x10f2f50();
   input += synapse0x10f2f90();
   input += synapse0x10f2fd0();
   input += synapse0x10f3010();
   input += synapse0x10f3050();
   input += synapse0x10f3090();
   input += synapse0x10f30d0();
   input += synapse0x10f3110();
   input += synapse0x10f3150();
   input += synapse0x10f3190();
   input += synapse0x10f31d0();
   input += synapse0x10f3210();
   input += synapse0x10f3250();
   input += synapse0x10f3290();
   input += synapse0x10f32d0();
   input += synapse0x10f3310();
   input += synapse0x10f2da0();
   input += synapse0x10f2de0();
   input += synapse0x10f3460();
   input += synapse0x10f34a0();
   input += synapse0x10f34e0();
   input += synapse0x10f3520();
   input += synapse0x10f3560();
   input += synapse0x10f35a0();
   input += synapse0x10f35e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f2c10() {
   double input = input0x10f2c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f3620() {
   double input = 0.0443718;
   input += synapse0x10f3960();
   input += synapse0x10f39a0();
   input += synapse0x10f39e0();
   input += synapse0x10f3a20();
   input += synapse0x10f3a60();
   input += synapse0x10f3aa0();
   input += synapse0x10f3ae0();
   input += synapse0x10f3b20();
   input += synapse0x10f3b60();
   input += synapse0x10f3ba0();
   input += synapse0x10f3be0();
   input += synapse0x10f3c20();
   input += synapse0x10f3c60();
   input += synapse0x10f3ca0();
   input += synapse0x10f3ce0();
   input += synapse0x10f3d20();
   input += synapse0x10f37b0();
   input += synapse0x10f37f0();
   input += synapse0x10f3e70();
   input += synapse0x10f3eb0();
   input += synapse0x10f3ef0();
   input += synapse0x10f3f30();
   input += synapse0x10f3f70();
   input += synapse0x10f3fb0();
   input += synapse0x10f3ff0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f3620() {
   double input = input0x10f3620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f4030() {
   double input = 0.272939;
   input += synapse0x10f4370();
   input += synapse0x10f43b0();
   input += synapse0x10f43f0();
   input += synapse0x10f4430();
   input += synapse0x10f4470();
   input += synapse0x10f44b0();
   input += synapse0x10f44f0();
   input += synapse0x10f4530();
   input += synapse0x10f4570();
   input += synapse0x10f45b0();
   input += synapse0x10f45f0();
   input += synapse0x10f4630();
   input += synapse0x10f4670();
   input += synapse0x10f46b0();
   input += synapse0x10f46f0();
   input += synapse0x10f4730();
   input += synapse0x10f41c0();
   input += synapse0x10f4200();
   input += synapse0x10f4880();
   input += synapse0x10f48c0();
   input += synapse0x10f4900();
   input += synapse0x10f4940();
   input += synapse0x10f4980();
   input += synapse0x10f49c0();
   input += synapse0x10f4a00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f4030() {
   double input = input0x10f4030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f4a40() {
   double input = 0.554966;
   input += synapse0x10f4d80();
   input += synapse0x10f4dc0();
   input += synapse0x10f4e00();
   input += synapse0x10f4e40();
   input += synapse0x10f4e80();
   input += synapse0x10f4ec0();
   input += synapse0x10f4f00();
   input += synapse0x10f4f40();
   input += synapse0x10f4f80();
   input += synapse0x10f4fc0();
   input += synapse0x10f5000();
   input += synapse0x10f5040();
   input += synapse0x10f5080();
   input += synapse0x10f50c0();
   input += synapse0x10f5100();
   input += synapse0x10f5140();
   input += synapse0x10f4bd0();
   input += synapse0x10f4c10();
   input += synapse0x10f5290();
   input += synapse0x10f52d0();
   input += synapse0x10f5310();
   input += synapse0x10f5350();
   input += synapse0x10f5390();
   input += synapse0x10f53d0();
   input += synapse0x10f5410();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f4a40() {
   double input = input0x10f4a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f5450() {
   double input = 0.132535;
   input += synapse0x10f5790();
   input += synapse0x10f57d0();
   input += synapse0x10f5810();
   input += synapse0x10f5850();
   input += synapse0x10f5890();
   input += synapse0x10f58d0();
   input += synapse0x10f5910();
   input += synapse0x10f5950();
   input += synapse0x10f5990();
   input += synapse0x10f59d0();
   input += synapse0x10f5a10();
   input += synapse0x10f5a50();
   input += synapse0x10f5a90();
   input += synapse0x10f5ad0();
   input += synapse0x10f5b10();
   input += synapse0x10f5b50();
   input += synapse0x10f55e0();
   input += synapse0x10f5620();
   input += synapse0x10f5ca0();
   input += synapse0x10f5ce0();
   input += synapse0x10f5d20();
   input += synapse0x10f5d60();
   input += synapse0x10f5da0();
   input += synapse0x10f5de0();
   input += synapse0x10f5e20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f5450() {
   double input = input0x10f5450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x10f5e60() {
   double input = 1.48122;
   input += synapse0x10f6080();
   input += synapse0x10f60c0();
   input += synapse0x10f6100();
   input += synapse0x10f6140();
   input += synapse0x10f6180();
   input += synapse0x10f61c0();
   input += synapse0x10f6200();
   input += synapse0x10f6240();
   input += synapse0x10f6280();
   input += synapse0x10f62c0();
   input += synapse0x10f6300();
   input += synapse0x10f6340();
   input += synapse0x10f6380();
   input += synapse0x10f63c0();
   input += synapse0x10f6400();
   input += synapse0x10f6440();
   input += synapse0x10db440();
   input += synapse0x10db480();
   input += synapse0x10f6590();
   input += synapse0x10f65d0();
   input += synapse0x10f6610();
   input += synapse0x10f6650();
   input += synapse0x10f6690();
   input += synapse0x10f66d0();
   input += synapse0x10f6710();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x10f5e60() {
   double input = input0x10f5e60();
   return (input * 3.71596)+119.127;
}

double nnFunc_25_25hi_1500ep__::synapse0x10c9710() {
   return (neuron0x10da400()*0.3596);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db820() {
   return (neuron0x10da740()*-0.54771);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db860() {
   return (neuron0x10daa80()*0.130261);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db8a0() {
   return (neuron0x10dadc0()*0.762683);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db8e0() {
   return (neuron0x10db100()*-1.91965);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbc60() {
   return (neuron0x10da400()*-0.0619244);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbca0() {
   return (neuron0x10da740()*0.389455);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbce0() {
   return (neuron0x10daa80()*-0.0206431);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbd20() {
   return (neuron0x10dadc0()*4.23412);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbd60() {
   return (neuron0x10db100()*1.70182);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc0e0() {
   return (neuron0x10da400()*-0.384376);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc120() {
   return (neuron0x10da740()*-0.229698);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc160() {
   return (neuron0x10daa80()*-0.0134634);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc1a0() {
   return (neuron0x10dadc0()*-0.693775);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc1e0() {
   return (neuron0x10db100()*1.13182);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc560() {
   return (neuron0x10da400()*1.05932);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc5a0() {
   return (neuron0x10da740()*-1.25003);
}

double nnFunc_25_25hi_1500ep__::synapse0xf623f0() {
   return (neuron0x10daa80()*0.0376023);
}

double nnFunc_25_25hi_1500ep__::synapse0xf62430() {
   return (neuron0x10dadc0()*-1.13717);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc6f0() {
   return (neuron0x10db100()*0.394885);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dca70() {
   return (neuron0x10da400()*0.0943451);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcab0() {
   return (neuron0x10da740()*-0.841875);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcaf0() {
   return (neuron0x10daa80()*0.049649);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcb30() {
   return (neuron0x10dadc0()*1.818);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcb70() {
   return (neuron0x10db100()*1.15299);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcef0() {
   return (neuron0x10da400()*-1.15064);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcf30() {
   return (neuron0x10da740()*-0.437397);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcf70() {
   return (neuron0x10daa80()*0.281596);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcfb0() {
   return (neuron0x10dadc0()*-4.28639);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcff0() {
   return (neuron0x10db100()*-1.78065);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd370() {
   return (neuron0x10da400()*0.109591);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd3b0() {
   return (neuron0x10da740()*-0.0905672);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd3f0() {
   return (neuron0x10daa80()*0.00619507);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc5e0() {
   return (neuron0x10dadc0()*-1.34994);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc620() {
   return (neuron0x10db100()*-0.764475);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd8f0() {
   return (neuron0x10da400()*0.276818);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd930() {
   return (neuron0x10da740()*-0.0809222);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd970() {
   return (neuron0x10daa80()*-0.0529579);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd9b0() {
   return (neuron0x10dadc0()*2.11678);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd9f0() {
   return (neuron0x10db100()*0.342473);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ddd70() {
   return (neuron0x10da400()*-0.969598);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dddb0() {
   return (neuron0x10da740()*0.422919);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dddf0() {
   return (neuron0x10daa80()*0.622777);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dde30() {
   return (neuron0x10dadc0()*-0.741434);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dde70() {
   return (neuron0x10db100()*0.286844);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de1f0() {
   return (neuron0x10da400()*2.68629);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de230() {
   return (neuron0x10da740()*0.386798);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de270() {
   return (neuron0x10daa80()*-1.01507);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de2b0() {
   return (neuron0x10dadc0()*0.752641);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de2f0() {
   return (neuron0x10db100()*-0.148361);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de670() {
   return (neuron0x10da400()*-0.877499);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de6b0() {
   return (neuron0x10da740()*0.307382);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de6f0() {
   return (neuron0x10daa80()*0.0221342);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de730() {
   return (neuron0x10dadc0()*-0.340891);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de770() {
   return (neuron0x10db100()*-0.668131);
}

double nnFunc_25_25hi_1500ep__::synapse0xf62240() {
   return (neuron0x10da400()*1.23264);
}

double nnFunc_25_25hi_1500ep__::synapse0xf62280() {
   return (neuron0x10da740()*0.603785);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dec00() {
   return (neuron0x10daa80()*0.649033);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dec40() {
   return (neuron0x10dadc0()*4.25889);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dec80() {
   return (neuron0x10db100()*1.16584);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df000() {
   return (neuron0x10da400()*-0.0418088);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df040() {
   return (neuron0x10da740()*0.235763);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df080() {
   return (neuron0x10daa80()*0.016703);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df0c0() {
   return (neuron0x10dadc0()*-2.39898);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df100() {
   return (neuron0x10db100()*-0.418721);
}

double nnFunc_25_25hi_1500ep__::synapse0xf629c0() {
   return (neuron0x10da400()*3.60983);
}

double nnFunc_25_25hi_1500ep__::synapse0x10c96b0() {
   return (neuron0x10da740()*-0.0653371);
}

double nnFunc_25_25hi_1500ep__::synapse0xfdef00() {
   return (neuron0x10daa80()*-1.64186);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd5c0() {
   return (neuron0x10dadc0()*0.960191);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd600() {
   return (neuron0x10db100()*-0.394531);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df920() {
   return (neuron0x10da400()*5.67383);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df960() {
   return (neuron0x10da740()*0.1184);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df9a0() {
   return (neuron0x10daa80()*-1.91349);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df9e0() {
   return (neuron0x10dadc0()*1.77547);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dfa20() {
   return (neuron0x10db100()*0.177023);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dfda0() {
   return (neuron0x10da400()*-0.124222);
}

double nnFunc_25_25hi_1500ep__::synapse0x10da620() {
   return (neuron0x10da740()*-0.250384);
}

double nnFunc_25_25hi_1500ep__::synapse0x10da660() {
   return (neuron0x10daa80()*-0.00672376);
}

double nnFunc_25_25hi_1500ep__::synapse0x10da960() {
   return (neuron0x10dadc0()*3.4075);
}

double nnFunc_25_25hi_1500ep__::synapse0x10da9a0() {
   return (neuron0x10db100()*1.64429);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e04c0() {
   return (neuron0x10da400()*-0.234666);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0500() {
   return (neuron0x10da740()*-0.356831);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0540() {
   return (neuron0x10daa80()*-0.0125816);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0580() {
   return (neuron0x10dadc0()*-1.05524);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e05c0() {
   return (neuron0x10db100()*-1.11696);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0940() {
   return (neuron0x10da400()*-0.339178);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0980() {
   return (neuron0x10da740()*-0.117484);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e09c0() {
   return (neuron0x10daa80()*0.33447);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0a00() {
   return (neuron0x10dadc0()*-2.20204);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0a40() {
   return (neuron0x10db100()*-0.257626);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0dc0() {
   return (neuron0x10da400()*-0.282621);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0e00() {
   return (neuron0x10da740()*-0.0266025);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0e40() {
   return (neuron0x10daa80()*-0.000178467);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0e80() {
   return (neuron0x10dadc0()*4.39887);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0ec0() {
   return (neuron0x10db100()*2.82887);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1240() {
   return (neuron0x10da400()*-1.21619);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1280() {
   return (neuron0x10da740()*0.342932);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e12c0() {
   return (neuron0x10daa80()*0.592606);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1300() {
   return (neuron0x10dadc0()*-0.771335);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1340() {
   return (neuron0x10db100()*0.508375);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e16c0() {
   return (neuron0x10da400()*0.428837);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1700() {
   return (neuron0x10da740()*0.0830364);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1740() {
   return (neuron0x10daa80()*0.04582);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1780() {
   return (neuron0x10dadc0()*1.70114);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e17c0() {
   return (neuron0x10db100()*-0.540829);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1b40() {
   return (neuron0x10da400()*-0.147989);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1b80() {
   return (neuron0x10da740()*1.33105);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1bc0() {
   return (neuron0x10daa80()*-0.0790527);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1c00() {
   return (neuron0x10dadc0()*-0.155894);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1c40() {
   return (neuron0x10db100()*-0.806901);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1fc0() {
   return (neuron0x10da400()*2.07876);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2000() {
   return (neuron0x10da740()*-0.352985);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2040() {
   return (neuron0x10daa80()*-1.09151);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2080() {
   return (neuron0x10dadc0()*0.800566);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e20c0() {
   return (neuron0x10db100()*-1.2563);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2440() {
   return (neuron0x10da400()*2.02918);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2480() {
   return (neuron0x10da740()*-0.481047);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e24c0() {
   return (neuron0x10daa80()*-0.770919);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2500() {
   return (neuron0x10dadc0()*1.89919);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2540() {
   return (neuron0x10db100()*0.618871);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e28c0() {
   return (neuron0x10da400()*2.20259);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2900() {
   return (neuron0x10da740()*-0.732738);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2940() {
   return (neuron0x10daa80()*-0.0820561);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2980() {
   return (neuron0x10dadc0()*0.587946);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e29c0() {
   return (neuron0x10db100()*-1.55638);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc4d0() {
   return (neuron0x10db570()*0.169965);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc510() {
   return (neuron0x10db920()*0.462169);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc9e0() {
   return (neuron0x10dbda0()*-0.216835);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dca20() {
   return (neuron0x10dc220()*0.287884);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dce60() {
   return (neuron0x10dc730()*0.369578);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcea0() {
   return (neuron0x10dcbb0()*-0.359743);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd2e0() {
   return (neuron0x10dd030()*-1.35936);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd320() {
   return (neuron0x10dd640()*-0.256378);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd860() {
   return (neuron0x10dda30()*0.42659);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd8a0() {
   return (neuron0x10ddeb0()*0.248331);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ddce0() {
   return (neuron0x10de330()*-0.16721);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ddd20() {
   return (neuron0x10de7b0()*-0.215147);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de160() {
   return (neuron0x10decc0()*0.505661);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de1a0() {
   return (neuron0x10dd430()*0.174872);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de5e0() {
   return (neuron0x10df5e0()*0.586816);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de620() {
   return (neuron0x10dfa60()*-0.224206);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dea60() {
   return (neuron0x10e0330()*-0.599496);
}

double nnFunc_25_25hi_1500ep__::synapse0x10deaa0() {
   return (neuron0x10e0600()*0.24268);
}

double nnFunc_25_25hi_1500ep__::synapse0x10def70() {
   return (neuron0x10e0a80()*-0.227346);
}

double nnFunc_25_25hi_1500ep__::synapse0x10defb0() {
   return (neuron0x10e0f00()*-0.00210906);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df890() {
   return (neuron0x10e1380()*-0.347992);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df8d0() {
   return (neuron0x10e1800()*-0.472838);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dfd10() {
   return (neuron0x10e1c80()*-0.198567);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dfd50() {
   return (neuron0x10e2100()*-0.483388);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db320() {
   return (neuron0x10e2580()*-0.0162476);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df3e0() {
   return (neuron0x10db570()*0.23677);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df420() {
   return (neuron0x10db920()*-0.982315);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df460() {
   return (neuron0x10dbda0()*-0.121433);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df4a0() {
   return (neuron0x10dc220()*0.123443);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df4e0() {
   return (neuron0x10dc730()*-0.130298);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df520() {
   return (neuron0x10dcbb0()*0.732663);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df560() {
   return (neuron0x10dd030()*-0.152143);
}

double nnFunc_25_25hi_1500ep__::synapse0x10df5a0() {
   return (neuron0x10dd640()*0.107839);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db360() {
   return (neuron0x10dda30()*-0.231399);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1630() {
   return (neuron0x10ddeb0()*-0.4124);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1670() {
   return (neuron0x10de330()*0.22973);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1ab0() {
   return (neuron0x10de7b0()*0.214918);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1af0() {
   return (neuron0x10decc0()*0.115389);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1f30() {
   return (neuron0x10dd430()*-0.319923);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1f70() {
   return (neuron0x10df5e0()*-0.292332);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e23b0() {
   return (neuron0x10dfa60()*0.123356);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e23f0() {
   return (neuron0x10e0330()*0.29145);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2830() {
   return (neuron0x10e0600()*0.45668);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2870() {
   return (neuron0x10e0a80()*0.151963);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db790() {
   return (neuron0x10e0f00()*0.310139);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db7d0() {
   return (neuron0x10e1380()*-0.19679);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e08b0() {
   return (neuron0x10e1800()*0.172475);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e08f0() {
   return (neuron0x10e1c80()*0.0707471);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4f40() {
   return (neuron0x10e2100()*0.00236938);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4f80() {
   return (neuron0x10e2580()*0.577088);
}

double nnFunc_25_25hi_1500ep__::synapse0x10deaf0() {
   return (neuron0x10db570()*0.128512);
}

double nnFunc_25_25hi_1500ep__::synapse0x10deb30() {
   return (neuron0x10db920()*0.272136);
}

double nnFunc_25_25hi_1500ep__::synapse0x10deb70() {
   return (neuron0x10dbda0()*0.0437611);
}

double nnFunc_25_25hi_1500ep__::synapse0x10debb0() {
   return (neuron0x10dc220()*-0.053234);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5510() {
   return (neuron0x10dc730()*-0.084766);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5550() {
   return (neuron0x10dcbb0()*-0.337249);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5590() {
   return (neuron0x10dd030()*0.212231);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e55d0() {
   return (neuron0x10dd640()*-0.26819);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5610() {
   return (neuron0x10dda30()*-0.0839681);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5650() {
   return (neuron0x10ddeb0()*0.0698864);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5690() {
   return (neuron0x10de330()*0.230371);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e56d0() {
   return (neuron0x10de7b0()*0.202266);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5710() {
   return (neuron0x10decc0()*-0.60304);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5750() {
   return (neuron0x10dd430()*-0.0488615);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5790() {
   return (neuron0x10df5e0()*0.372555);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e57d0() {
   return (neuron0x10dfa60()*0.424277);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5150() {
   return (neuron0x10e0330()*0.348272);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5190() {
   return (neuron0x10e0600()*-0.391899);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5920() {
   return (neuron0x10e0a80()*0.82852);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5960() {
   return (neuron0x10e0f00()*-0.06179);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e59a0() {
   return (neuron0x10e1380()*-0.0916672);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e59e0() {
   return (neuron0x10e1800()*-0.394241);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5a20() {
   return (neuron0x10e1c80()*-0.464837);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5a60() {
   return (neuron0x10e2100()*-0.252905);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5aa0() {
   return (neuron0x10e2580()*-0.302772);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5e20() {
   return (neuron0x10db570()*-0.679438);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5e60() {
   return (neuron0x10db920()*0.486947);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5ea0() {
   return (neuron0x10dbda0()*0.0152662);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5ee0() {
   return (neuron0x10dc220()*-0.209778);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5f20() {
   return (neuron0x10dc730()*0.457872);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5f60() {
   return (neuron0x10dcbb0()*-0.794325);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5fa0() {
   return (neuron0x10dd030()*0.569779);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5fe0() {
   return (neuron0x10dd640()*0.915902);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6020() {
   return (neuron0x10dda30()*-0.581751);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6060() {
   return (neuron0x10ddeb0()*0.416959);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e60a0() {
   return (neuron0x10de330()*-0.5582);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e60e0() {
   return (neuron0x10de7b0()*0.276593);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6120() {
   return (neuron0x10decc0()*-0.0570806);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6160() {
   return (neuron0x10dd430()*0.398833);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e61a0() {
   return (neuron0x10df5e0()*0.145036);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e61e0() {
   return (neuron0x10dfa60()*0.370043);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5c70() {
   return (neuron0x10e0330()*0.413656);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e5cb0() {
   return (neuron0x10e0600()*-0.0106063);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6330() {
   return (neuron0x10e0a80()*1.24531);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6370() {
   return (neuron0x10e0f00()*-0.413871);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e63b0() {
   return (neuron0x10e1380()*0.694367);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e63f0() {
   return (neuron0x10e1800()*-0.137702);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6430() {
   return (neuron0x10e1c80()*-0.54058);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6470() {
   return (neuron0x10e2100()*-0.483841);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e64b0() {
   return (neuron0x10e2580()*-0.809081);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6830() {
   return (neuron0x10db570()*0.410515);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6870() {
   return (neuron0x10db920()*-0.523159);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e68b0() {
   return (neuron0x10dbda0()*-0.247274);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e68f0() {
   return (neuron0x10dc220()*0.250902);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6930() {
   return (neuron0x10dc730()*-0.697927);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6970() {
   return (neuron0x10dcbb0()*0.195338);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e69b0() {
   return (neuron0x10dd030()*-0.933881);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e69f0() {
   return (neuron0x10dd640()*-0.355952);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6a30() {
   return (neuron0x10dda30()*0.131115);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6a70() {
   return (neuron0x10ddeb0()*0.38899);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6ab0() {
   return (neuron0x10de330()*0.227679);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6af0() {
   return (neuron0x10de7b0()*-0.325981);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6b30() {
   return (neuron0x10decc0()*0.32552);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6b70() {
   return (neuron0x10dd430()*0.442284);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6bb0() {
   return (neuron0x10df5e0()*-0.311822);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6bf0() {
   return (neuron0x10dfa60()*-0.536244);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6680() {
   return (neuron0x10e0330()*0.069164);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e66c0() {
   return (neuron0x10e0600()*0.315036);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6d40() {
   return (neuron0x10e0a80()*-0.440826);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6d80() {
   return (neuron0x10e0f00()*-0.231283);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6dc0() {
   return (neuron0x10e1380()*-0.240719);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6e00() {
   return (neuron0x10e1800()*-0.12549);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6e40() {
   return (neuron0x10e1c80()*-0.519118);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6e80() {
   return (neuron0x10e2100()*0.0820041);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e6ec0() {
   return (neuron0x10e2580()*0.015727);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e7240() {
   return (neuron0x10db570()*0.722405);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e7280() {
   return (neuron0x10db920()*-0.830497);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e72c0() {
   return (neuron0x10dbda0()*0.626105);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e7300() {
   return (neuron0x10dc220()*0.138384);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e7340() {
   return (neuron0x10dc730()*-0.452869);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e7380() {
   return (neuron0x10dcbb0()*1.36981);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e73c0() {
   return (neuron0x10dd030()*-0.233007);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4620() {
   return (neuron0x10dd640()*-0.445556);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4660() {
   return (neuron0x10dda30()*0.468398);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e46a0() {
   return (neuron0x10ddeb0()*-0.488471);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e46e0() {
   return (neuron0x10de330()*0.654284);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4720() {
   return (neuron0x10de7b0()*-1.02231);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4760() {
   return (neuron0x10decc0()*0.165527);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e47a0() {
   return (neuron0x10dd430()*0.0519106);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e47e0() {
   return (neuron0x10df5e0()*-0.364935);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4820() {
   return (neuron0x10dfa60()*-0.734706);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e7090() {
   return (neuron0x10e0330()*0.292741);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e70d0() {
   return (neuron0x10e0600()*0.49808);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4970() {
   return (neuron0x10e0a80()*-0.407996);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e49b0() {
   return (neuron0x10e0f00()*-0.00517518);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e49f0() {
   return (neuron0x10e1380()*-0.907057);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4a30() {
   return (neuron0x10e1800()*0.0689887);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4a70() {
   return (neuron0x10e1c80()*0.567597);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4ab0() {
   return (neuron0x10e2100()*-0.173128);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4af0() {
   return (neuron0x10e2580()*0.243882);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4de0() {
   return (neuron0x10db570()*0.4404);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e84a0() {
   return (neuron0x10db920()*0.23961);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e84e0() {
   return (neuron0x10dbda0()*-0.370045);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8520() {
   return (neuron0x10dc220()*0.142484);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8560() {
   return (neuron0x10dc730()*-0.461074);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e85a0() {
   return (neuron0x10dcbb0()*-0.0287315);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e85e0() {
   return (neuron0x10dd030()*-0.964965);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8620() {
   return (neuron0x10dd640()*-0.778659);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8660() {
   return (neuron0x10dda30()*0.464882);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e86a0() {
   return (neuron0x10ddeb0()*0.247203);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e86e0() {
   return (neuron0x10de330()*0.192385);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8720() {
   return (neuron0x10de7b0()*-0.369514);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8760() {
   return (neuron0x10decc0()*0.37302);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e87a0() {
   return (neuron0x10dd430()*-0.152245);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e87e0() {
   return (neuron0x10df5e0()*-0.185327);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8820() {
   return (neuron0x10dfa60()*-0.123854);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4cc0() {
   return (neuron0x10e0330()*-0.296169);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e4d00() {
   return (neuron0x10e0600()*0.224579);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8970() {
   return (neuron0x10e0a80()*-0.361996);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e89b0() {
   return (neuron0x10e0f00()*-0.166912);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e89f0() {
   return (neuron0x10e1380()*-0.660786);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8a30() {
   return (neuron0x10e1800()*-0.435301);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8a70() {
   return (neuron0x10e1c80()*-0.458865);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8ab0() {
   return (neuron0x10e2100()*-0.239636);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8af0() {
   return (neuron0x10e2580()*0.546626);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8e70() {
   return (neuron0x10db570()*0.309147);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8eb0() {
   return (neuron0x10db920()*0.269088);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8ef0() {
   return (neuron0x10dbda0()*-0.0957267);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8f30() {
   return (neuron0x10dc220()*-0.366217);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8f70() {
   return (neuron0x10dc730()*0.240121);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8fb0() {
   return (neuron0x10dcbb0()*-0.128927);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8ff0() {
   return (neuron0x10dd030()*0.758874);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9030() {
   return (neuron0x10dd640()*0.0597278);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9070() {
   return (neuron0x10dda30()*-0.197222);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e90b0() {
   return (neuron0x10ddeb0()*0.418654);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e90f0() {
   return (neuron0x10de330()*0.242184);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9130() {
   return (neuron0x10de7b0()*0.146796);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9170() {
   return (neuron0x10decc0()*0.234154);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e91b0() {
   return (neuron0x10dd430()*0.276372);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e91f0() {
   return (neuron0x10df5e0()*-0.415271);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9230() {
   return (neuron0x10dfa60()*0.480887);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8cc0() {
   return (neuron0x10e0330()*0.453509);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8d00() {
   return (neuron0x10e0600()*-0.50681);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9380() {
   return (neuron0x10e0a80()*0.469818);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e93c0() {
   return (neuron0x10e0f00()*-0.00182771);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9400() {
   return (neuron0x10e1380()*-0.204926);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9440() {
   return (neuron0x10e1800()*-0.358679);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9480() {
   return (neuron0x10e1c80()*-0.141758);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e94c0() {
   return (neuron0x10e2100()*0.201582);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9500() {
   return (neuron0x10e2580()*0.31488);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9880() {
   return (neuron0x10db570()*0.790276);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e98c0() {
   return (neuron0x10db920()*-1.1878);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9900() {
   return (neuron0x10dbda0()*0.612331);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9940() {
   return (neuron0x10dc220()*-0.852101);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9980() {
   return (neuron0x10dc730()*-1.18758);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e99c0() {
   return (neuron0x10dcbb0()*0.716146);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9a00() {
   return (neuron0x10dd030()*-0.959716);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9a40() {
   return (neuron0x10dd640()*-1.23485);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9a80() {
   return (neuron0x10dda30()*-0.409438);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9ac0() {
   return (neuron0x10ddeb0()*-0.222449);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9b00() {
   return (neuron0x10de330()*0.130711);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9b40() {
   return (neuron0x10de7b0()*-0.451389);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9b80() {
   return (neuron0x10decc0()*0.472842);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9bc0() {
   return (neuron0x10dd430()*0.230567);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9c00() {
   return (neuron0x10df5e0()*-0.546327);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9c40() {
   return (neuron0x10dfa60()*-1.44009);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e96d0() {
   return (neuron0x10e0330()*-0.396782);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9710() {
   return (neuron0x10e0600()*0.0184996);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9d90() {
   return (neuron0x10e0a80()*-1.11021);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9dd0() {
   return (neuron0x10e0f00()*-0.68279);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9e10() {
   return (neuron0x10e1380()*-0.389652);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9e50() {
   return (neuron0x10e1800()*-0.800623);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9e90() {
   return (neuron0x10e1c80()*-0.0514653);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9ed0() {
   return (neuron0x10e2100()*0.105684);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e9f10() {
   return (neuron0x10e2580()*0.571012);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea290() {
   return (neuron0x10db570()*-1.26656);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea2d0() {
   return (neuron0x10db920()*2.02004);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea310() {
   return (neuron0x10dbda0()*-2.35397);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea350() {
   return (neuron0x10dc220()*-0.585623);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea390() {
   return (neuron0x10dc730()*1.27339);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea3d0() {
   return (neuron0x10dcbb0()*-1.89248);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea410() {
   return (neuron0x10dd030()*1.92893);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea450() {
   return (neuron0x10dd640()*2.15714);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea490() {
   return (neuron0x10dda30()*-0.202792);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea4d0() {
   return (neuron0x10ddeb0()*-0.585238);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea510() {
   return (neuron0x10de330()*0.73949);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea550() {
   return (neuron0x10de7b0()*1.27211);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea590() {
   return (neuron0x10decc0()*-0.71014);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea5d0() {
   return (neuron0x10dd430()*-0.247201);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea610() {
   return (neuron0x10df5e0()*0.296641);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea650() {
   return (neuron0x10dfa60()*2.42957);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea0e0() {
   return (neuron0x10e0330()*0.349759);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea120() {
   return (neuron0x10e0600()*-0.633171);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea7a0() {
   return (neuron0x10e0a80()*2.3978);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea7e0() {
   return (neuron0x10e0f00()*-0.280263);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea820() {
   return (neuron0x10e1380()*1.70512);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea860() {
   return (neuron0x10e1800()*0.976872);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea8a0() {
   return (neuron0x10e1c80()*0.963252);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea8e0() {
   return (neuron0x10e2100()*0.22462);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ea920() {
   return (neuron0x10e2580()*-0.936219);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eaca0() {
   return (neuron0x10db570()*-0.528997);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eace0() {
   return (neuron0x10db920()*1.5961);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ead20() {
   return (neuron0x10dbda0()*-1.65936);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ead60() {
   return (neuron0x10dc220()*-0.556963);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eada0() {
   return (neuron0x10dc730()*1.00355);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eade0() {
   return (neuron0x10dcbb0()*-1.56041);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eae20() {
   return (neuron0x10dd030()*1.62659);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eae60() {
   return (neuron0x10dd640()*1.98172);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eaea0() {
   return (neuron0x10dda30()*-0.113902);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eaee0() {
   return (neuron0x10ddeb0()*0.274329);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eaf20() {
   return (neuron0x10de330()*0.555138);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eaf60() {
   return (neuron0x10de7b0()*0.82469);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eafa0() {
   return (neuron0x10decc0()*-0.982428);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eafe0() {
   return (neuron0x10dd430()*-0.353149);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb020() {
   return (neuron0x10df5e0()*0.47887);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb060() {
   return (neuron0x10dfa60()*1.42903);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eaaf0() {
   return (neuron0x10e0330()*0.535666);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eab30() {
   return (neuron0x10e0600()*-0.569435);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb1b0() {
   return (neuron0x10e0a80()*2.60856);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb1f0() {
   return (neuron0x10e0f00()*-0.0254205);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb230() {
   return (neuron0x10e1380()*0.946889);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb270() {
   return (neuron0x10e1800()*0.665513);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb2b0() {
   return (neuron0x10e1c80()*0.399636);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb2f0() {
   return (neuron0x10e2100()*0.125984);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb330() {
   return (neuron0x10e2580()*-0.380655);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb6b0() {
   return (neuron0x10db570()*0.995708);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb6f0() {
   return (neuron0x10db920()*-2.04172);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb730() {
   return (neuron0x10dbda0()*0.479363);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb770() {
   return (neuron0x10dc220()*-0.454365);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb7b0() {
   return (neuron0x10dc730()*-0.911537);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb7f0() {
   return (neuron0x10dcbb0()*1.4083);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb830() {
   return (neuron0x10dd030()*-1.99695);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb870() {
   return (neuron0x10dd640()*-2.33261);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb8b0() {
   return (neuron0x10dda30()*-0.899404);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb8f0() {
   return (neuron0x10ddeb0()*-0.300586);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb930() {
   return (neuron0x10de330()*-0.534065);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb970() {
   return (neuron0x10de7b0()*-1.92953);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb9b0() {
   return (neuron0x10decc0()*-0.345331);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb9f0() {
   return (neuron0x10dd430()*-0.19666);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eba30() {
   return (neuron0x10df5e0()*-0.126071);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eba70() {
   return (neuron0x10dfa60()*-2.35984);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb500() {
   return (neuron0x10e0330()*-0.854453);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eb540() {
   return (neuron0x10e0600()*-0.961916);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebbc0() {
   return (neuron0x10e0a80()*-2.27585);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebc00() {
   return (neuron0x10e0f00()*-1.26172);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebc40() {
   return (neuron0x10e1380()*-1.60061);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebc80() {
   return (neuron0x10e1800()*-1.24506);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebcc0() {
   return (neuron0x10e1c80()*-0.637677);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebd00() {
   return (neuron0x10e2100()*-0.859077);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebd40() {
   return (neuron0x10e2580()*0.790857);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec0c0() {
   return (neuron0x10db570()*0.426716);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec100() {
   return (neuron0x10db920()*-0.551201);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec140() {
   return (neuron0x10dbda0()*0.278168);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec180() {
   return (neuron0x10dc220()*-0.666528);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec1c0() {
   return (neuron0x10dc730()*-1.04791);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec200() {
   return (neuron0x10dcbb0()*1.37477);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec240() {
   return (neuron0x10dd030()*-1.36687);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec280() {
   return (neuron0x10dd640()*-0.870249);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec2c0() {
   return (neuron0x10dda30()*0.505388);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec300() {
   return (neuron0x10ddeb0()*-0.0836133);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec340() {
   return (neuron0x10de330()*-0.252434);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec380() {
   return (neuron0x10de7b0()*-1.07548);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec3c0() {
   return (neuron0x10decc0()*0.671292);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec400() {
   return (neuron0x10dd430()*-0.336769);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec440() {
   return (neuron0x10df5e0()*-0.0210639);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec480() {
   return (neuron0x10dfa60()*-0.875459);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebf10() {
   return (neuron0x10e0330()*-0.985927);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ebf50() {
   return (neuron0x10e0600()*-0.369779);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec5d0() {
   return (neuron0x10e0a80()*-1.87383);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec610() {
   return (neuron0x10e0f00()*-0.497142);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec650() {
   return (neuron0x10e1380()*-1.25088);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec690() {
   return (neuron0x10e1800()*-0.124673);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec6d0() {
   return (neuron0x10e1c80()*-0.542424);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec710() {
   return (neuron0x10e2100()*-0.0957015);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec750() {
   return (neuron0x10e2580()*0.0150805);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecad0() {
   return (neuron0x10db570()*0.724048);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecb10() {
   return (neuron0x10db920()*-0.816781);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecb50() {
   return (neuron0x10dbda0()*0.432367);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecb90() {
   return (neuron0x10dc220()*-0.103126);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecbd0() {
   return (neuron0x10dc730()*-0.75229);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecc10() {
   return (neuron0x10dcbb0()*1.03143);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecc50() {
   return (neuron0x10dd030()*-1.07649);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecc90() {
   return (neuron0x10dd640()*-0.519959);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eccd0() {
   return (neuron0x10dda30()*0.238205);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecd10() {
   return (neuron0x10ddeb0()*0.518132);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecd50() {
   return (neuron0x10de330()*0.344058);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecd90() {
   return (neuron0x10de7b0()*-0.556483);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecdd0() {
   return (neuron0x10decc0()*0.0600613);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ece10() {
   return (neuron0x10dd430()*0.38755);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ece50() {
   return (neuron0x10df5e0()*-0.119472);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ece90() {
   return (neuron0x10dfa60()*-0.643262);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec920() {
   return (neuron0x10e0330()*-0.783282);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ec960() {
   return (neuron0x10e0600()*0.278294);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ecfe0() {
   return (neuron0x10e0a80()*-0.635652);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed020() {
   return (neuron0x10e0f00()*-0.000728579);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed060() {
   return (neuron0x10e1380()*-0.850368);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed0a0() {
   return (neuron0x10e1800()*-0.399099);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed0e0() {
   return (neuron0x10e1c80()*-0.331695);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed120() {
   return (neuron0x10e2100()*-0.436263);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed160() {
   return (neuron0x10e2580()*0.109935);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed4e0() {
   return (neuron0x10db570()*0.301855);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed520() {
   return (neuron0x10db920()*-1.13978);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed560() {
   return (neuron0x10dbda0()*0.708889);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed5a0() {
   return (neuron0x10dc220()*0.219534);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed5e0() {
   return (neuron0x10dc730()*-0.690502);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed620() {
   return (neuron0x10dcbb0()*0.910588);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed660() {
   return (neuron0x10dd030()*-0.974128);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed6a0() {
   return (neuron0x10dd640()*-0.907213);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed6e0() {
   return (neuron0x10dda30()*0.046194);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed720() {
   return (neuron0x10ddeb0()*-0.335485);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed760() {
   return (neuron0x10de330()*-0.493851);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed7a0() {
   return (neuron0x10de7b0()*-1.26267);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed7e0() {
   return (neuron0x10decc0()*-0.247766);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed820() {
   return (neuron0x10dd430()*-0.176621);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed860() {
   return (neuron0x10df5e0()*-0.494275);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed8a0() {
   return (neuron0x10dfa60()*-0.937316);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed330() {
   return (neuron0x10e0330()*-0.822604);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed370() {
   return (neuron0x10e0600()*-0.600848);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ed9f0() {
   return (neuron0x10e0a80()*-1.86343);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eda30() {
   return (neuron0x10e0f00()*-0.111467);
}

double nnFunc_25_25hi_1500ep__::synapse0x10eda70() {
   return (neuron0x10e1380()*-1.07363);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edab0() {
   return (neuron0x10e1800()*-1.19882);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edaf0() {
   return (neuron0x10e1c80()*-0.268328);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edb30() {
   return (neuron0x10e2100()*-0.0120781);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edb70() {
   return (neuron0x10e2580()*-0.335858);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edef0() {
   return (neuron0x10db570()*-1.36603);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db700() {
   return (neuron0x10db920()*1.64629);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db740() {
   return (neuron0x10dbda0()*-1.02602);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbb40() {
   return (neuron0x10dc220()*0.423113);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbb80() {
   return (neuron0x10dc730()*1.6656);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dbfc0() {
   return (neuron0x10dcbb0()*-1.80086);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc000() {
   return (neuron0x10dd030()*2.22012);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc440() {
   return (neuron0x10dd640()*1.74755);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc480() {
   return (neuron0x10dda30()*0.220145);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc950() {
   return (neuron0x10ddeb0()*0.102423);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dc990() {
   return (neuron0x10de330()*-0.265082);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dcdd0() {
   return (neuron0x10de7b0()*0.672484);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dce10() {
   return (neuron0x10decc0()*-1.16673);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd250() {
   return (neuron0x10dd430()*0.0019753);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd290() {
   return (neuron0x10df5e0()*0.174068);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd7d0() {
   return (neuron0x10dfa60()*2.25238);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dd810() {
   return (neuron0x10e0330()*0.400769);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ddc50() {
   return (neuron0x10e0600()*-0.209714);
}

double nnFunc_25_25hi_1500ep__::synapse0x10ddc90() {
   return (neuron0x10e0a80()*2.51322);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de0d0() {
   return (neuron0x10e0f00()*-0.167832);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de110() {
   return (neuron0x10e1380()*1.65453);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de550() {
   return (neuron0x10e1800()*0.593956);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de590() {
   return (neuron0x10e1c80()*-0.446486);
}

double nnFunc_25_25hi_1500ep__::synapse0x10de9d0() {
   return (neuron0x10e2100()*0.646903);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dea10() {
   return (neuron0x10e2580()*-0.840646);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e8360() {
   return (neuron0x10db570()*-0.909186);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e83a0() {
   return (neuron0x10db920()*0.671111);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dfc80() {
   return (neuron0x10dbda0()*-0.703622);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dfcc0() {
   return (neuron0x10dc220()*-0.542004);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edd40() {
   return (neuron0x10dc730()*0.424518);
}

double nnFunc_25_25hi_1500ep__::synapse0x10edd80() {
   return (neuron0x10dcbb0()*-0.517475);
}

double nnFunc_25_25hi_1500ep__::synapse0x10dafe0() {
   return (neuron0x10dd030()*1.01708);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db020() {
   return (neuron0x10dd640()*0.532566);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0820() {
   return (neuron0x10dda30()*-0.4818);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0860() {
   return (neuron0x10ddeb0()*0.53005);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0ca0() {
   return (neuron0x10de330()*0.0626638);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e0ce0() {
   return (neuron0x10de7b0()*0.600441);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1120() {
   return (neuron0x10decc0()*-0.329472);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1160() {
   return (neuron0x10dd430()*-0.355432);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e15a0() {
   return (neuron0x10df5e0()*-0.261207);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e15e0() {
   return (neuron0x10dfa60()*1.0746);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1a20() {
   return (neuron0x10e0330()*0.0119423);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1a60() {
   return (neuron0x10e0600()*-0.0238761);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1ea0() {
   return (neuron0x10e0a80()*0.357169);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e1ee0() {
   return (neuron0x10e0f00()*-0.538798);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2320() {
   return (neuron0x10e1380()*0.448996);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e2360() {
   return (neuron0x10e1800()*-0.0636623);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e27a0() {
   return (neuron0x10e1c80()*0.205363);
}

double nnFunc_25_25hi_1500ep__::synapse0x10e27e0() {
   return (neuron0x10e2100()*0.487181);
}

double nnFunc_25_25hi_1500ep__::synapse0x10deee0() {
   return (neuron0x10e2580()*-0.395578);
}

double nnFunc_25_25hi_1500ep__::synapse0x10def20() {
   return (neuron0x10db570()*0.679832);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1160() {
   return (neuron0x10db920()*-0.778628);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f11a0() {
   return (neuron0x10dbda0()*0.631892);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f11e0() {
   return (neuron0x10dc220()*0.3515);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1220() {
   return (neuron0x10dc730()*-0.906781);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1260() {
   return (neuron0x10dcbb0()*0.845483);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f12a0() {
   return (neuron0x10dd030()*-1.77016);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f12e0() {
   return (neuron0x10dd640()*-0.683595);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1320() {
   return (neuron0x10dda30()*0.247881);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1360() {
   return (neuron0x10ddeb0()*-0.0279353);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f13a0() {
   return (neuron0x10de330()*-0.215533);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f13e0() {
   return (neuron0x10de7b0()*-1.03387);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1420() {
   return (neuron0x10decc0()*0.970696);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1460() {
   return (neuron0x10dd430()*0.00292449);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f14a0() {
   return (neuron0x10df5e0()*-0.101547);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f14e0() {
   return (neuron0x10dfa60()*-1.12877);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f0fb0() {
   return (neuron0x10e0330()*-0.708023);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f0ff0() {
   return (neuron0x10e0600()*0.425943);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1630() {
   return (neuron0x10e0a80()*-1.32417);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1670() {
   return (neuron0x10e0f00()*-0.0192877);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f16b0() {
   return (neuron0x10e1380()*-0.746076);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f16f0() {
   return (neuron0x10e1800()*-0.371159);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1730() {
   return (neuron0x10e1c80()*0.191607);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1770() {
   return (neuron0x10e2100()*-0.269154);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f17b0() {
   return (neuron0x10e2580()*0.388218);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1b30() {
   return (neuron0x10db570()*1.219);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1b70() {
   return (neuron0x10db920()*-1.40067);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1bb0() {
   return (neuron0x10dbda0()*1.30976);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1bf0() {
   return (neuron0x10dc220()*0.532625);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1c30() {
   return (neuron0x10dc730()*-1.48106);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1c70() {
   return (neuron0x10dcbb0()*2.3746);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1cb0() {
   return (neuron0x10dd030()*-2.4269);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1cf0() {
   return (neuron0x10dd640()*-2.34983);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1d30() {
   return (neuron0x10dda30()*0.183884);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1d70() {
   return (neuron0x10ddeb0()*0.293431);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1db0() {
   return (neuron0x10de330()*0.0442209);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1df0() {
   return (neuron0x10de7b0()*-1.78738);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1e30() {
   return (neuron0x10decc0()*0.515528);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1e70() {
   return (neuron0x10dd430()*-0.176389);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1eb0() {
   return (neuron0x10df5e0()*-0.470723);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1ef0() {
   return (neuron0x10dfa60()*-1.84205);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f1980() {
   return (neuron0x10e0330()*-0.68725);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f19c0() {
   return (neuron0x10e0600()*0.546352);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2040() {
   return (neuron0x10e0a80()*-2.60924);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2080() {
   return (neuron0x10e0f00()*0.553442);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f20c0() {
   return (neuron0x10e1380()*-1.94693);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2100() {
   return (neuron0x10e1800()*-0.394406);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2140() {
   return (neuron0x10e1c80()*-0.301062);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2180() {
   return (neuron0x10e2100()*-0.592055);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f21c0() {
   return (neuron0x10e2580()*1.22313);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2540() {
   return (neuron0x10db570()*-0.399851);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2580() {
   return (neuron0x10db920()*0.269135);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f25c0() {
   return (neuron0x10dbda0()*-0.568128);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2600() {
   return (neuron0x10dc220()*-0.110765);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2640() {
   return (neuron0x10dc730()*0.709364);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2680() {
   return (neuron0x10dcbb0()*-0.255675);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f26c0() {
   return (neuron0x10dd030()*1.27114);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2700() {
   return (neuron0x10dd640()*0.280863);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2740() {
   return (neuron0x10dda30()*-0.379901);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2780() {
   return (neuron0x10ddeb0()*-0.428318);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f27c0() {
   return (neuron0x10de330()*0.106605);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2800() {
   return (neuron0x10de7b0()*0.393536);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2840() {
   return (neuron0x10decc0()*-0.414637);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2880() {
   return (neuron0x10dd430()*0.423877);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f28c0() {
   return (neuron0x10df5e0()*-0.0845624);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2900() {
   return (neuron0x10dfa60()*0.771653);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2390() {
   return (neuron0x10e0330()*-0.142044);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f23d0() {
   return (neuron0x10e0600()*-0.325579);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2a50() {
   return (neuron0x10e0a80()*0.889582);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2a90() {
   return (neuron0x10e0f00()*0.0360982);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2ad0() {
   return (neuron0x10e1380()*0.309423);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2b10() {
   return (neuron0x10e1800()*0.402926);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2b50() {
   return (neuron0x10e1c80()*0.0595461);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2b90() {
   return (neuron0x10e2100()*0.241156);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2bd0() {
   return (neuron0x10e2580()*-0.367885);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2f50() {
   return (neuron0x10db570()*0.00240588);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2f90() {
   return (neuron0x10db920()*-0.588318);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2fd0() {
   return (neuron0x10dbda0()*-0.194184);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3010() {
   return (neuron0x10dc220()*-0.552386);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3050() {
   return (neuron0x10dc730()*0.154811);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3090() {
   return (neuron0x10dcbb0()*0.687651);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f30d0() {
   return (neuron0x10dd030()*-0.148426);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3110() {
   return (neuron0x10dd640()*0.390409);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3150() {
   return (neuron0x10dda30()*0.0631084);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3190() {
   return (neuron0x10ddeb0()*0.337248);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f31d0() {
   return (neuron0x10de330()*-0.0241253);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3210() {
   return (neuron0x10de7b0()*0.00394992);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3250() {
   return (neuron0x10decc0()*0.234712);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3290() {
   return (neuron0x10dd430()*0.10926);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f32d0() {
   return (neuron0x10df5e0()*0.243572);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3310() {
   return (neuron0x10dfa60()*0.316235);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2da0() {
   return (neuron0x10e0330()*0.315834);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f2de0() {
   return (neuron0x10e0600()*0.509587);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3460() {
   return (neuron0x10e0a80()*0.180405);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f34a0() {
   return (neuron0x10e0f00()*-0.0600119);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f34e0() {
   return (neuron0x10e1380()*-0.0260406);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3520() {
   return (neuron0x10e1800()*-0.222384);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3560() {
   return (neuron0x10e1c80()*0.333838);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f35a0() {
   return (neuron0x10e2100()*-0.393539);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f35e0() {
   return (neuron0x10e2580()*-0.201585);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3960() {
   return (neuron0x10db570()*0.152807);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f39a0() {
   return (neuron0x10db920()*-0.0183043);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f39e0() {
   return (neuron0x10dbda0()*0.311916);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3a20() {
   return (neuron0x10dc220()*0.0673822);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3a60() {
   return (neuron0x10dc730()*-0.357715);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3aa0() {
   return (neuron0x10dcbb0()*0.696449);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3ae0() {
   return (neuron0x10dd030()*0.0416095);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3b20() {
   return (neuron0x10dd640()*-0.122182);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3b60() {
   return (neuron0x10dda30()*-0.247654);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3ba0() {
   return (neuron0x10ddeb0()*0.42888);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3be0() {
   return (neuron0x10de330()*0.0874837);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3c20() {
   return (neuron0x10de7b0()*-0.328839);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3c60() {
   return (neuron0x10decc0()*0.385195);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3ca0() {
   return (neuron0x10dd430()*-0.0104477);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3ce0() {
   return (neuron0x10df5e0()*-0.0763233);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3d20() {
   return (neuron0x10dfa60()*-0.438754);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f37b0() {
   return (neuron0x10e0330()*-0.0244362);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f37f0() {
   return (neuron0x10e0600()*0.464894);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3e70() {
   return (neuron0x10e0a80()*-0.644627);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3eb0() {
   return (neuron0x10e0f00()*-0.20891);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3ef0() {
   return (neuron0x10e1380()*0.0287943);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3f30() {
   return (neuron0x10e1800()*-0.184679);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3f70() {
   return (neuron0x10e1c80()*-0.384478);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3fb0() {
   return (neuron0x10e2100()*-0.0990762);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f3ff0() {
   return (neuron0x10e2580()*0.24125);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4370() {
   return (neuron0x10db570()*-1.7556);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f43b0() {
   return (neuron0x10db920()*2.00449);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f43f0() {
   return (neuron0x10dbda0()*-1.35892);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4430() {
   return (neuron0x10dc220()*1.11228);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4470() {
   return (neuron0x10dc730()*1.4565);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f44b0() {
   return (neuron0x10dcbb0()*-2.60559);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f44f0() {
   return (neuron0x10dd030()*2.7941);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4530() {
   return (neuron0x10dd640()*1.8343);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4570() {
   return (neuron0x10dda30()*-0.0128082);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f45b0() {
   return (neuron0x10ddeb0()*0.506561);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f45f0() {
   return (neuron0x10de330()*-0.0646172);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4630() {
   return (neuron0x10de7b0()*1.98049);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4670() {
   return (neuron0x10decc0()*-1.02965);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f46b0() {
   return (neuron0x10dd430()*0.46957);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f46f0() {
   return (neuron0x10df5e0()*0.22273);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4730() {
   return (neuron0x10dfa60()*2.05135);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f41c0() {
   return (neuron0x10e0330()*1.5268);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4200() {
   return (neuron0x10e0600()*-0.618581);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4880() {
   return (neuron0x10e0a80()*2.15682);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f48c0() {
   return (neuron0x10e0f00()*0.250962);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4900() {
   return (neuron0x10e1380()*1.11244);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4940() {
   return (neuron0x10e1800()*0.407773);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4980() {
   return (neuron0x10e1c80()*-0.662394);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f49c0() {
   return (neuron0x10e2100()*0.942268);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4a00() {
   return (neuron0x10e2580()*-1.00313);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4d80() {
   return (neuron0x10db570()*0.357136);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4dc0() {
   return (neuron0x10db920()*0.389145);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4e00() {
   return (neuron0x10dbda0()*-0.603536);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4e40() {
   return (neuron0x10dc220()*0.31808);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4e80() {
   return (neuron0x10dc730()*0.408981);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4ec0() {
   return (neuron0x10dcbb0()*-0.372448);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4f00() {
   return (neuron0x10dd030()*0.60973);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4f40() {
   return (neuron0x10dd640()*0.412891);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4f80() {
   return (neuron0x10dda30()*0.411394);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4fc0() {
   return (neuron0x10ddeb0()*0.0383819);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5000() {
   return (neuron0x10de330()*-0.0561321);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5040() {
   return (neuron0x10de7b0()*0.0204807);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5080() {
   return (neuron0x10decc0()*0.336138);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f50c0() {
   return (neuron0x10dd430()*0.25677);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5100() {
   return (neuron0x10df5e0()*-0.298057);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5140() {
   return (neuron0x10dfa60()*0.497678);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4bd0() {
   return (neuron0x10e0330()*0.107108);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f4c10() {
   return (neuron0x10e0600()*-0.0168186);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5290() {
   return (neuron0x10e0a80()*0.549627);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f52d0() {
   return (neuron0x10e0f00()*0.276754);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5310() {
   return (neuron0x10e1380()*0.00597306);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5350() {
   return (neuron0x10e1800()*0.146984);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5390() {
   return (neuron0x10e1c80()*0.457764);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f53d0() {
   return (neuron0x10e2100()*0.245644);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5410() {
   return (neuron0x10e2580()*-0.0269528);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5790() {
   return (neuron0x10db570()*0.225603);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f57d0() {
   return (neuron0x10db920()*-0.27874);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5810() {
   return (neuron0x10dbda0()*0.0108851);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5850() {
   return (neuron0x10dc220()*-0.510438);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5890() {
   return (neuron0x10dc730()*0.238275);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f58d0() {
   return (neuron0x10dcbb0()*-0.394447);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5910() {
   return (neuron0x10dd030()*1.00486);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5950() {
   return (neuron0x10dd640()*-0.358318);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5990() {
   return (neuron0x10dda30()*-0.44861);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f59d0() {
   return (neuron0x10ddeb0()*-0.586697);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5a10() {
   return (neuron0x10de330()*0.0647059);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5a50() {
   return (neuron0x10de7b0()*-0.557016);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5a90() {
   return (neuron0x10decc0()*0.0713111);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5ad0() {
   return (neuron0x10dd430()*0.431577);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5b10() {
   return (neuron0x10df5e0()*-0.586203);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5b50() {
   return (neuron0x10dfa60()*0.317304);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f55e0() {
   return (neuron0x10e0330()*-0.00706689);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5620() {
   return (neuron0x10e0600()*0.241636);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5ca0() {
   return (neuron0x10e0a80()*0.489615);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5ce0() {
   return (neuron0x10e0f00()*0.297448);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5d20() {
   return (neuron0x10e1380()*0.449824);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5d60() {
   return (neuron0x10e1800()*0.246411);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5da0() {
   return (neuron0x10e1c80()*0.43367);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5de0() {
   return (neuron0x10e2100()*-0.16347);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f5e20() {
   return (neuron0x10e2580()*-0.0698416);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6080() {
   return (neuron0x10e4490()*-3.97319);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f60c0() {
   return (neuron0x10df250()*1.34204);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6100() {
   return (neuron0x10e4fc0()*-0.674481);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6140() {
   return (neuron0x10e5ae0()*0.596782);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6180() {
   return (neuron0x10e64f0()*-1.25822);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f61c0() {
   return (neuron0x10e6f00()*1.1982);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6200() {
   return (neuron0x10e4b30()*-2.6271);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6240() {
   return (neuron0x10e8b30()*0.61724);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6280() {
   return (neuron0x10e9540()*-1.92454);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f62c0() {
   return (neuron0x10e9f50()*7.36343);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6300() {
   return (neuron0x10ea960()*4.95439);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6340() {
   return (neuron0x10eb370()*-6.96377);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6380() {
   return (neuron0x10ebd80()*-3.81113);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f63c0() {
   return (neuron0x10ec790()*-2.23902);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6400() {
   return (neuron0x10ed1a0()*-2.41677);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6440() {
   return (neuron0x10edbb0()*4.14727);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db440() {
   return (neuron0x10e81d0()*1.22829);
}

double nnFunc_25_25hi_1500ep__::synapse0x10db480() {
   return (neuron0x10f0e20()*-3.04027);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6590() {
   return (neuron0x10f17f0()*-5.62511);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f65d0() {
   return (neuron0x10f2200()*1.76856);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6610() {
   return (neuron0x10f2c10()*0.94882);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6650() {
   return (neuron0x10f3620()*-0.837813);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6690() {
   return (neuron0x10f4030()*4.46884);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f66d0() {
   return (neuron0x10f4a40()*0.421628);
}

double nnFunc_25_25hi_1500ep__::synapse0x10f6710() {
   return (neuron0x10f5450()*2.359);
}

