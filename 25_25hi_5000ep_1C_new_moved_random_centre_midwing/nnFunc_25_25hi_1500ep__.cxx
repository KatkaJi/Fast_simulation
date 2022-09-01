#include "25_25hi_5000ep_1C_new_moved_random_centre_midwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1db6f80();
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
         return neuron0x1db6f80();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9b530() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9b870() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9bbb0() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9bef0() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9c230() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x1d9c6a0() {
   double input = 0.665179;
   input += synapse0x1ca89e0();
   input += synapse0x1d8a9a0();
   input += synapse0x1d9c950();
   input += synapse0x1d9c990();
   input += synapse0x1d9c9d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9c6a0() {
   double input = input0x1d9c6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9ca10() {
   double input = 1.96322;
   input += synapse0x1d9cd50();
   input += synapse0x1d9cd90();
   input += synapse0x1d9cdd0();
   input += synapse0x1d9ce10();
   input += synapse0x1d9ce50();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9ca10() {
   double input = input0x1d9ca10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9ce90() {
   double input = -1.52762;
   input += synapse0x1d9d1d0();
   input += synapse0x1d9d210();
   input += synapse0x1d9d250();
   input += synapse0x1d9d290();
   input += synapse0x1d9d2d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9ce90() {
   double input = input0x1d9ce90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9d310() {
   double input = 0.00421844;
   input += synapse0x1d9d650();
   input += synapse0x1d9d690();
   input += synapse0x1c9abd0();
   input += synapse0x1c9ac10();
   input += synapse0x1d9d7e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9d310() {
   double input = input0x1d9d310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9d820() {
   double input = -0.800164;
   input += synapse0x1d9db60();
   input += synapse0x1d9dba0();
   input += synapse0x1d9dbe0();
   input += synapse0x1d9dc20();
   input += synapse0x1d9dc60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9d820() {
   double input = input0x1d9d820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9dca0() {
   double input = 1.04;
   input += synapse0x1d9dfe0();
   input += synapse0x1d9e020();
   input += synapse0x1d9e060();
   input += synapse0x1d9e0a0();
   input += synapse0x1d9e0e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9dca0() {
   double input = input0x1d9dca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9e120() {
   double input = -0.850031;
   input += synapse0x1d9e460();
   input += synapse0x1d9e4a0();
   input += synapse0x1d9e4e0();
   input += synapse0x1d9d6d0();
   input += synapse0x1d9d710();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9e120() {
   double input = input0x1d9e120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9e730() {
   double input = 1.84961;
   input += synapse0x1d9e9e0();
   input += synapse0x1d9ea20();
   input += synapse0x1d9ea60();
   input += synapse0x1d9eaa0();
   input += synapse0x1d9eae0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9e730() {
   double input = input0x1d9e730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9eb20() {
   double input = 4.34525;
   input += synapse0x1d9ee60();
   input += synapse0x1d9eea0();
   input += synapse0x1d9eee0();
   input += synapse0x1d9ef20();
   input += synapse0x1d9ef60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9eb20() {
   double input = input0x1d9eb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9efa0() {
   double input = -0.541312;
   input += synapse0x1d9f2e0();
   input += synapse0x1d9f320();
   input += synapse0x1d9f360();
   input += synapse0x1d9f3a0();
   input += synapse0x1d9f3e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9efa0() {
   double input = input0x1d9efa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9f420() {
   double input = 0.431016;
   input += synapse0x1d9f760();
   input += synapse0x1d9f7a0();
   input += synapse0x1d9f7e0();
   input += synapse0x1d9f820();
   input += synapse0x1d9f860();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9f420() {
   double input = input0x1d9f420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9f8a0() {
   double input = 0.885937;
   input += synapse0x1c9aa20();
   input += synapse0x1c9aa60();
   input += synapse0x1d9fcf0();
   input += synapse0x1d9fd30();
   input += synapse0x1d9fd70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9f8a0() {
   double input = input0x1d9f8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9fdb0() {
   double input = 0.279254;
   input += synapse0x1da00f0();
   input += synapse0x1da0130();
   input += synapse0x1da0170();
   input += synapse0x1da01b0();
   input += synapse0x1da01f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9fdb0() {
   double input = input0x1d9fdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d9e520() {
   double input = -0.165508;
   input += synapse0x1c9b1f0();
   input += synapse0x1d9e6b0();
   input += synapse0x1d9e6f0();
   input += synapse0x1da0640();
   input += synapse0x1da0680();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d9e520() {
   double input = input0x1d9e520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da06c0() {
   double input = 0.451151;
   input += synapse0x1da0a00();
   input += synapse0x1da0a40();
   input += synapse0x1da0a80();
   input += synapse0x1da0ac0();
   input += synapse0x1da0b00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da06c0() {
   double input = input0x1da06c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da0b40() {
   double input = -1.18853;
   input += synapse0x1da0e80();
   input += synapse0x1d9b750();
   input += synapse0x1d9b790();
   input += synapse0x1d9ba90();
   input += synapse0x1d9bad0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da0b40() {
   double input = input0x1da0b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da1410() {
   double input = 0.452197;
   input += synapse0x1da15a0();
   input += synapse0x1da15e0();
   input += synapse0x1da1620();
   input += synapse0x1da1660();
   input += synapse0x1da16a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da1410() {
   double input = input0x1da1410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da16e0() {
   double input = -0.557304;
   input += synapse0x1da1a20();
   input += synapse0x1da1a60();
   input += synapse0x1da1aa0();
   input += synapse0x1da1ae0();
   input += synapse0x1da1b20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da16e0() {
   double input = input0x1da16e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da1b60() {
   double input = 0.104773;
   input += synapse0x1da1ea0();
   input += synapse0x1da1ee0();
   input += synapse0x1da1f20();
   input += synapse0x1da1f60();
   input += synapse0x1da1fa0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da1b60() {
   double input = input0x1da1b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da1fe0() {
   double input = 0.79055;
   input += synapse0x1da2320();
   input += synapse0x1da2360();
   input += synapse0x1da23a0();
   input += synapse0x1da23e0();
   input += synapse0x1da2420();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da1fe0() {
   double input = input0x1da1fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da2460() {
   double input = -1.26964;
   input += synapse0x1da27a0();
   input += synapse0x1da27e0();
   input += synapse0x1da2820();
   input += synapse0x1da2860();
   input += synapse0x1da28a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da2460() {
   double input = input0x1da2460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da28e0() {
   double input = 1.57294;
   input += synapse0x1da2c20();
   input += synapse0x1da2c60();
   input += synapse0x1da2ca0();
   input += synapse0x1da2ce0();
   input += synapse0x1da2d20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da28e0() {
   double input = input0x1da28e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da2d60() {
   double input = 0.0196266;
   input += synapse0x1da30a0();
   input += synapse0x1da30e0();
   input += synapse0x1da3120();
   input += synapse0x1da3160();
   input += synapse0x1da31a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da2d60() {
   double input = input0x1da2d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da31e0() {
   double input = -3.55888;
   input += synapse0x1da3520();
   input += synapse0x1da3560();
   input += synapse0x1da35a0();
   input += synapse0x1da35e0();
   input += synapse0x1da3620();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da31e0() {
   double input = input0x1da31e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da3660() {
   double input = 1.00338;
   input += synapse0x1da39a0();
   input += synapse0x1da39e0();
   input += synapse0x1da3a20();
   input += synapse0x1da3a60();
   input += synapse0x1da3aa0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da3660() {
   double input = input0x1da3660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da5570() {
   double input = -0.800807;
   input += synapse0x1d9d5c0();
   input += synapse0x1d9d600();
   input += synapse0x1d9dad0();
   input += synapse0x1d9db10();
   input += synapse0x1d9df50();
   input += synapse0x1d9df90();
   input += synapse0x1d9e3d0();
   input += synapse0x1d9e410();
   input += synapse0x1d9e950();
   input += synapse0x1d9e990();
   input += synapse0x1d9edd0();
   input += synapse0x1d9ee10();
   input += synapse0x1d9f250();
   input += synapse0x1d9f290();
   input += synapse0x1d9f6d0();
   input += synapse0x1d9f710();
   input += synapse0x1d9fb50();
   input += synapse0x1d9fb90();
   input += synapse0x1da0060();
   input += synapse0x1da00a0();
   input += synapse0x1da0970();
   input += synapse0x1da09b0();
   input += synapse0x1da0df0();
   input += synapse0x1da0e30();
   input += synapse0x1d9c450();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da5570() {
   double input = input0x1da5570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da0340() {
   double input = 0.00823585;
   input += synapse0x1da04d0();
   input += synapse0x1da0510();
   input += synapse0x1da0550();
   input += synapse0x1da0590();
   input += synapse0x1da05d0();
   input += synapse0x1d9c490();
   input += synapse0x1da2710();
   input += synapse0x1da2750();
   input += synapse0x1da2b90();
   input += synapse0x1da2bd0();
   input += synapse0x1da3010();
   input += synapse0x1da3050();
   input += synapse0x1da3490();
   input += synapse0x1da34d0();
   input += synapse0x1da3910();
   input += synapse0x1da3950();
   input += synapse0x1d9c8c0();
   input += synapse0x1d9c900();
   input += synapse0x1da1990();
   input += synapse0x1da19d0();
   input += synapse0x1ca8ab0();
   input += synapse0x1ca8af0();
   input += synapse0x1da6020();
   input += synapse0x1da6060();
   input += synapse0x1da60a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da0340() {
   double input = input0x1da0340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da60e0() {
   double input = -0.696091;
   input += synapse0x1d9fbe0();
   input += synapse0x1d9fc20();
   input += synapse0x1d9fc60();
   input += synapse0x1d9fca0();
   input += synapse0x1da6630();
   input += synapse0x1da6670();
   input += synapse0x1da66b0();
   input += synapse0x1da66f0();
   input += synapse0x1da6730();
   input += synapse0x1da6770();
   input += synapse0x1da67b0();
   input += synapse0x1da67f0();
   input += synapse0x1da6830();
   input += synapse0x1da6870();
   input += synapse0x1da68b0();
   input += synapse0x1da68f0();
   input += synapse0x1da6270();
   input += synapse0x1da62b0();
   input += synapse0x1da6a40();
   input += synapse0x1da6a80();
   input += synapse0x1da6ac0();
   input += synapse0x1da6b00();
   input += synapse0x1da6b40();
   input += synapse0x1da6b80();
   input += synapse0x1da6bc0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da60e0() {
   double input = input0x1da60e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da6c00() {
   double input = -0.922687;
   input += synapse0x1da6f40();
   input += synapse0x1da6f80();
   input += synapse0x1da6fc0();
   input += synapse0x1da7000();
   input += synapse0x1da7040();
   input += synapse0x1da7080();
   input += synapse0x1da70c0();
   input += synapse0x1da7100();
   input += synapse0x1da7140();
   input += synapse0x1da7180();
   input += synapse0x1da71c0();
   input += synapse0x1da7200();
   input += synapse0x1da7240();
   input += synapse0x1da7280();
   input += synapse0x1da72c0();
   input += synapse0x1da7300();
   input += synapse0x1da6d90();
   input += synapse0x1da6dd0();
   input += synapse0x1da7450();
   input += synapse0x1da7490();
   input += synapse0x1da74d0();
   input += synapse0x1da7510();
   input += synapse0x1da7550();
   input += synapse0x1da7590();
   input += synapse0x1da75d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da6c00() {
   double input = input0x1da6c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da7610() {
   double input = -0.907759;
   input += synapse0x1da7950();
   input += synapse0x1da7990();
   input += synapse0x1da79d0();
   input += synapse0x1da7a10();
   input += synapse0x1da7a50();
   input += synapse0x1da7a90();
   input += synapse0x1da7ad0();
   input += synapse0x1da7b10();
   input += synapse0x1da7b50();
   input += synapse0x1da7b90();
   input += synapse0x1da7bd0();
   input += synapse0x1da7c10();
   input += synapse0x1da7c50();
   input += synapse0x1da7c90();
   input += synapse0x1da7cd0();
   input += synapse0x1da7d10();
   input += synapse0x1da77a0();
   input += synapse0x1da77e0();
   input += synapse0x1da7e60();
   input += synapse0x1da7ea0();
   input += synapse0x1da7ee0();
   input += synapse0x1da7f20();
   input += synapse0x1da7f60();
   input += synapse0x1da7fa0();
   input += synapse0x1da7fe0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da7610() {
   double input = input0x1da7610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da8020() {
   double input = -0.841396;
   input += synapse0x1da8360();
   input += synapse0x1da83a0();
   input += synapse0x1da83e0();
   input += synapse0x1da8420();
   input += synapse0x1da8460();
   input += synapse0x1da84a0();
   input += synapse0x1da84e0();
   input += synapse0x1da5700();
   input += synapse0x1da5740();
   input += synapse0x1da5780();
   input += synapse0x1da57c0();
   input += synapse0x1da5800();
   input += synapse0x1da5840();
   input += synapse0x1da5880();
   input += synapse0x1da58c0();
   input += synapse0x1da5900();
   input += synapse0x1da81b0();
   input += synapse0x1da81f0();
   input += synapse0x1da5a50();
   input += synapse0x1da5a90();
   input += synapse0x1da5ad0();
   input += synapse0x1da5b10();
   input += synapse0x1da5b50();
   input += synapse0x1da5b90();
   input += synapse0x1da5bd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da8020() {
   double input = input0x1da8020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da5c10() {
   double input = -0.964997;
   input += synapse0x1da5ec0();
   input += synapse0x1da95c0();
   input += synapse0x1da9600();
   input += synapse0x1da9640();
   input += synapse0x1da9680();
   input += synapse0x1da96c0();
   input += synapse0x1da9700();
   input += synapse0x1da9740();
   input += synapse0x1da9780();
   input += synapse0x1da97c0();
   input += synapse0x1da9800();
   input += synapse0x1da9840();
   input += synapse0x1da9880();
   input += synapse0x1da98c0();
   input += synapse0x1da9900();
   input += synapse0x1da9940();
   input += synapse0x1da5da0();
   input += synapse0x1da5de0();
   input += synapse0x1da9a90();
   input += synapse0x1da9ad0();
   input += synapse0x1da9b10();
   input += synapse0x1da9b50();
   input += synapse0x1da9b90();
   input += synapse0x1da9bd0();
   input += synapse0x1da9c10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da5c10() {
   double input = input0x1da5c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da9c50() {
   double input = -0.401732;
   input += synapse0x1da9f90();
   input += synapse0x1da9fd0();
   input += synapse0x1daa010();
   input += synapse0x1daa050();
   input += synapse0x1daa090();
   input += synapse0x1daa0d0();
   input += synapse0x1daa110();
   input += synapse0x1daa150();
   input += synapse0x1daa190();
   input += synapse0x1daa1d0();
   input += synapse0x1daa210();
   input += synapse0x1daa250();
   input += synapse0x1daa290();
   input += synapse0x1daa2d0();
   input += synapse0x1daa310();
   input += synapse0x1daa350();
   input += synapse0x1da9de0();
   input += synapse0x1da9e20();
   input += synapse0x1daa4a0();
   input += synapse0x1daa4e0();
   input += synapse0x1daa520();
   input += synapse0x1daa560();
   input += synapse0x1daa5a0();
   input += synapse0x1daa5e0();
   input += synapse0x1daa620();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da9c50() {
   double input = input0x1da9c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1daa660() {
   double input = -0.43255;
   input += synapse0x1daa9a0();
   input += synapse0x1daa9e0();
   input += synapse0x1daaa20();
   input += synapse0x1daaa60();
   input += synapse0x1daaaa0();
   input += synapse0x1daaae0();
   input += synapse0x1daab20();
   input += synapse0x1daab60();
   input += synapse0x1daaba0();
   input += synapse0x1daabe0();
   input += synapse0x1daac20();
   input += synapse0x1daac60();
   input += synapse0x1daaca0();
   input += synapse0x1daace0();
   input += synapse0x1daad20();
   input += synapse0x1daad60();
   input += synapse0x1daa7f0();
   input += synapse0x1daa830();
   input += synapse0x1daaeb0();
   input += synapse0x1daaef0();
   input += synapse0x1daaf30();
   input += synapse0x1daaf70();
   input += synapse0x1daafb0();
   input += synapse0x1daaff0();
   input += synapse0x1dab030();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1daa660() {
   double input = input0x1daa660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1dab070() {
   double input = 0.560764;
   input += synapse0x1dab3b0();
   input += synapse0x1dab3f0();
   input += synapse0x1dab430();
   input += synapse0x1dab470();
   input += synapse0x1dab4b0();
   input += synapse0x1dab4f0();
   input += synapse0x1dab530();
   input += synapse0x1dab570();
   input += synapse0x1dab5b0();
   input += synapse0x1dab5f0();
   input += synapse0x1dab630();
   input += synapse0x1dab670();
   input += synapse0x1dab6b0();
   input += synapse0x1dab6f0();
   input += synapse0x1dab730();
   input += synapse0x1dab770();
   input += synapse0x1dab200();
   input += synapse0x1dab240();
   input += synapse0x1dab8c0();
   input += synapse0x1dab900();
   input += synapse0x1dab940();
   input += synapse0x1dab980();
   input += synapse0x1dab9c0();
   input += synapse0x1daba00();
   input += synapse0x1daba40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1dab070() {
   double input = input0x1dab070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1daba80() {
   double input = 0.183295;
   input += synapse0x1dabdc0();
   input += synapse0x1dabe00();
   input += synapse0x1dabe40();
   input += synapse0x1dabe80();
   input += synapse0x1dabec0();
   input += synapse0x1dabf00();
   input += synapse0x1dabf40();
   input += synapse0x1dabf80();
   input += synapse0x1dabfc0();
   input += synapse0x1dac000();
   input += synapse0x1dac040();
   input += synapse0x1dac080();
   input += synapse0x1dac0c0();
   input += synapse0x1dac100();
   input += synapse0x1dac140();
   input += synapse0x1dac180();
   input += synapse0x1dabc10();
   input += synapse0x1dabc50();
   input += synapse0x1dac2d0();
   input += synapse0x1dac310();
   input += synapse0x1dac350();
   input += synapse0x1dac390();
   input += synapse0x1dac3d0();
   input += synapse0x1dac410();
   input += synapse0x1dac450();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1daba80() {
   double input = input0x1daba80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1dac490() {
   double input = -0.373096;
   input += synapse0x1dac7d0();
   input += synapse0x1dac810();
   input += synapse0x1dac850();
   input += synapse0x1dac890();
   input += synapse0x1dac8d0();
   input += synapse0x1dac910();
   input += synapse0x1dac950();
   input += synapse0x1dac990();
   input += synapse0x1dac9d0();
   input += synapse0x1daca10();
   input += synapse0x1daca50();
   input += synapse0x1daca90();
   input += synapse0x1dacad0();
   input += synapse0x1dacb10();
   input += synapse0x1dacb50();
   input += synapse0x1dacb90();
   input += synapse0x1dac620();
   input += synapse0x1dac660();
   input += synapse0x1dacce0();
   input += synapse0x1dacd20();
   input += synapse0x1dacd60();
   input += synapse0x1dacda0();
   input += synapse0x1dacde0();
   input += synapse0x1dace20();
   input += synapse0x1dace60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1dac490() {
   double input = input0x1dac490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1dacea0() {
   double input = 0.0788204;
   input += synapse0x1dad1e0();
   input += synapse0x1dad220();
   input += synapse0x1dad260();
   input += synapse0x1dad2a0();
   input += synapse0x1dad2e0();
   input += synapse0x1dad320();
   input += synapse0x1dad360();
   input += synapse0x1dad3a0();
   input += synapse0x1dad3e0();
   input += synapse0x1dad420();
   input += synapse0x1dad460();
   input += synapse0x1dad4a0();
   input += synapse0x1dad4e0();
   input += synapse0x1dad520();
   input += synapse0x1dad560();
   input += synapse0x1dad5a0();
   input += synapse0x1dad030();
   input += synapse0x1dad070();
   input += synapse0x1dad6f0();
   input += synapse0x1dad730();
   input += synapse0x1dad770();
   input += synapse0x1dad7b0();
   input += synapse0x1dad7f0();
   input += synapse0x1dad830();
   input += synapse0x1dad870();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1dacea0() {
   double input = input0x1dacea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1dad8b0() {
   double input = -0.122125;
   input += synapse0x1dadbf0();
   input += synapse0x1dadc30();
   input += synapse0x1dadc70();
   input += synapse0x1dadcb0();
   input += synapse0x1dadcf0();
   input += synapse0x1dadd30();
   input += synapse0x1dadd70();
   input += synapse0x1daddb0();
   input += synapse0x1daddf0();
   input += synapse0x1dade30();
   input += synapse0x1dade70();
   input += synapse0x1dadeb0();
   input += synapse0x1dadef0();
   input += synapse0x1dadf30();
   input += synapse0x1dadf70();
   input += synapse0x1dadfb0();
   input += synapse0x1dada40();
   input += synapse0x1dada80();
   input += synapse0x1dae100();
   input += synapse0x1dae140();
   input += synapse0x1dae180();
   input += synapse0x1dae1c0();
   input += synapse0x1dae200();
   input += synapse0x1dae240();
   input += synapse0x1dae280();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1dad8b0() {
   double input = input0x1dad8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1dae2c0() {
   double input = 0.392702;
   input += synapse0x1dae600();
   input += synapse0x1dae640();
   input += synapse0x1dae680();
   input += synapse0x1dae6c0();
   input += synapse0x1dae700();
   input += synapse0x1dae740();
   input += synapse0x1dae780();
   input += synapse0x1dae7c0();
   input += synapse0x1dae800();
   input += synapse0x1dae840();
   input += synapse0x1dae880();
   input += synapse0x1dae8c0();
   input += synapse0x1dae900();
   input += synapse0x1dae940();
   input += synapse0x1dae980();
   input += synapse0x1dae9c0();
   input += synapse0x1dae450();
   input += synapse0x1dae490();
   input += synapse0x1daeb10();
   input += synapse0x1daeb50();
   input += synapse0x1daeb90();
   input += synapse0x1daebd0();
   input += synapse0x1daec10();
   input += synapse0x1daec50();
   input += synapse0x1daec90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1dae2c0() {
   double input = input0x1dae2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1daecd0() {
   double input = -0.594737;
   input += synapse0x1daf010();
   input += synapse0x1d9c830();
   input += synapse0x1d9c870();
   input += synapse0x1d9cc30();
   input += synapse0x1d9cc70();
   input += synapse0x1d9d0b0();
   input += synapse0x1d9d0f0();
   input += synapse0x1d9d530();
   input += synapse0x1d9d570();
   input += synapse0x1d9da40();
   input += synapse0x1d9da80();
   input += synapse0x1d9dec0();
   input += synapse0x1d9df00();
   input += synapse0x1d9e340();
   input += synapse0x1d9e380();
   input += synapse0x1d9e8c0();
   input += synapse0x1d9e900();
   input += synapse0x1d9ed40();
   input += synapse0x1d9ed80();
   input += synapse0x1d9f1c0();
   input += synapse0x1d9f200();
   input += synapse0x1d9f640();
   input += synapse0x1d9f680();
   input += synapse0x1d9fac0();
   input += synapse0x1d9fb00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1daecd0() {
   double input = input0x1daecd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1da92f0() {
   double input = 0.185991;
   input += synapse0x1da9480();
   input += synapse0x1da94c0();
   input += synapse0x1da0d60();
   input += synapse0x1da0da0();
   input += synapse0x1daee60();
   input += synapse0x1daeea0();
   input += synapse0x1d9c110();
   input += synapse0x1d9c150();
   input += synapse0x1da1900();
   input += synapse0x1da1940();
   input += synapse0x1da1d80();
   input += synapse0x1da1dc0();
   input += synapse0x1da2200();
   input += synapse0x1da2240();
   input += synapse0x1da2680();
   input += synapse0x1da26c0();
   input += synapse0x1da2b00();
   input += synapse0x1da2b40();
   input += synapse0x1da2f80();
   input += synapse0x1da2fc0();
   input += synapse0x1da3400();
   input += synapse0x1da3440();
   input += synapse0x1da3880();
   input += synapse0x1da38c0();
   input += synapse0x1d9ffd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1da92f0() {
   double input = input0x1da92f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db1f40() {
   double input = -0.0307059;
   input += synapse0x1da0010();
   input += synapse0x1db2280();
   input += synapse0x1db22c0();
   input += synapse0x1db2300();
   input += synapse0x1db2340();
   input += synapse0x1db2380();
   input += synapse0x1db23c0();
   input += synapse0x1db2400();
   input += synapse0x1db2440();
   input += synapse0x1db2480();
   input += synapse0x1db24c0();
   input += synapse0x1db2500();
   input += synapse0x1db2540();
   input += synapse0x1db2580();
   input += synapse0x1db25c0();
   input += synapse0x1db2600();
   input += synapse0x1db20d0();
   input += synapse0x1db2110();
   input += synapse0x1db2750();
   input += synapse0x1db2790();
   input += synapse0x1db27d0();
   input += synapse0x1db2810();
   input += synapse0x1db2850();
   input += synapse0x1db2890();
   input += synapse0x1db28d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db1f40() {
   double input = input0x1db1f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db2910() {
   double input = -0.0500493;
   input += synapse0x1db2c50();
   input += synapse0x1db2c90();
   input += synapse0x1db2cd0();
   input += synapse0x1db2d10();
   input += synapse0x1db2d50();
   input += synapse0x1db2d90();
   input += synapse0x1db2dd0();
   input += synapse0x1db2e10();
   input += synapse0x1db2e50();
   input += synapse0x1db2e90();
   input += synapse0x1db2ed0();
   input += synapse0x1db2f10();
   input += synapse0x1db2f50();
   input += synapse0x1db2f90();
   input += synapse0x1db2fd0();
   input += synapse0x1db3010();
   input += synapse0x1db2aa0();
   input += synapse0x1db2ae0();
   input += synapse0x1db3160();
   input += synapse0x1db31a0();
   input += synapse0x1db31e0();
   input += synapse0x1db3220();
   input += synapse0x1db3260();
   input += synapse0x1db32a0();
   input += synapse0x1db32e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db2910() {
   double input = input0x1db2910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db3320() {
   double input = -0.159546;
   input += synapse0x1db3660();
   input += synapse0x1db36a0();
   input += synapse0x1db36e0();
   input += synapse0x1db3720();
   input += synapse0x1db3760();
   input += synapse0x1db37a0();
   input += synapse0x1db37e0();
   input += synapse0x1db3820();
   input += synapse0x1db3860();
   input += synapse0x1db38a0();
   input += synapse0x1db38e0();
   input += synapse0x1db3920();
   input += synapse0x1db3960();
   input += synapse0x1db39a0();
   input += synapse0x1db39e0();
   input += synapse0x1db3a20();
   input += synapse0x1db34b0();
   input += synapse0x1db34f0();
   input += synapse0x1db3b70();
   input += synapse0x1db3bb0();
   input += synapse0x1db3bf0();
   input += synapse0x1db3c30();
   input += synapse0x1db3c70();
   input += synapse0x1db3cb0();
   input += synapse0x1db3cf0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db3320() {
   double input = input0x1db3320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db3d30() {
   double input = 0.165188;
   input += synapse0x1db4070();
   input += synapse0x1db40b0();
   input += synapse0x1db40f0();
   input += synapse0x1db4130();
   input += synapse0x1db4170();
   input += synapse0x1db41b0();
   input += synapse0x1db41f0();
   input += synapse0x1db4230();
   input += synapse0x1db4270();
   input += synapse0x1db42b0();
   input += synapse0x1db42f0();
   input += synapse0x1db4330();
   input += synapse0x1db4370();
   input += synapse0x1db43b0();
   input += synapse0x1db43f0();
   input += synapse0x1db4430();
   input += synapse0x1db3ec0();
   input += synapse0x1db3f00();
   input += synapse0x1db4580();
   input += synapse0x1db45c0();
   input += synapse0x1db4600();
   input += synapse0x1db4640();
   input += synapse0x1db4680();
   input += synapse0x1db46c0();
   input += synapse0x1db4700();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db3d30() {
   double input = input0x1db3d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db4740() {
   double input = -0.785481;
   input += synapse0x1db4a80();
   input += synapse0x1db4ac0();
   input += synapse0x1db4b00();
   input += synapse0x1db4b40();
   input += synapse0x1db4b80();
   input += synapse0x1db4bc0();
   input += synapse0x1db4c00();
   input += synapse0x1db4c40();
   input += synapse0x1db4c80();
   input += synapse0x1db4cc0();
   input += synapse0x1db4d00();
   input += synapse0x1db4d40();
   input += synapse0x1db4d80();
   input += synapse0x1db4dc0();
   input += synapse0x1db4e00();
   input += synapse0x1db4e40();
   input += synapse0x1db48d0();
   input += synapse0x1db4910();
   input += synapse0x1db4f90();
   input += synapse0x1db4fd0();
   input += synapse0x1db5010();
   input += synapse0x1db5050();
   input += synapse0x1db5090();
   input += synapse0x1db50d0();
   input += synapse0x1db5110();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db4740() {
   double input = input0x1db4740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db5150() {
   double input = -0.308501;
   input += synapse0x1db5490();
   input += synapse0x1db54d0();
   input += synapse0x1db5510();
   input += synapse0x1db5550();
   input += synapse0x1db5590();
   input += synapse0x1db55d0();
   input += synapse0x1db5610();
   input += synapse0x1db5650();
   input += synapse0x1db5690();
   input += synapse0x1db56d0();
   input += synapse0x1db5710();
   input += synapse0x1db5750();
   input += synapse0x1db5790();
   input += synapse0x1db57d0();
   input += synapse0x1db5810();
   input += synapse0x1db5850();
   input += synapse0x1db52e0();
   input += synapse0x1db5320();
   input += synapse0x1db59a0();
   input += synapse0x1db59e0();
   input += synapse0x1db5a20();
   input += synapse0x1db5a60();
   input += synapse0x1db5aa0();
   input += synapse0x1db5ae0();
   input += synapse0x1db5b20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db5150() {
   double input = input0x1db5150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db5b60() {
   double input = 0.0568168;
   input += synapse0x1db5ea0();
   input += synapse0x1db5ee0();
   input += synapse0x1db5f20();
   input += synapse0x1db5f60();
   input += synapse0x1db5fa0();
   input += synapse0x1db5fe0();
   input += synapse0x1db6020();
   input += synapse0x1db6060();
   input += synapse0x1db60a0();
   input += synapse0x1db60e0();
   input += synapse0x1db6120();
   input += synapse0x1db6160();
   input += synapse0x1db61a0();
   input += synapse0x1db61e0();
   input += synapse0x1db6220();
   input += synapse0x1db6260();
   input += synapse0x1db5cf0();
   input += synapse0x1db5d30();
   input += synapse0x1db63b0();
   input += synapse0x1db63f0();
   input += synapse0x1db6430();
   input += synapse0x1db6470();
   input += synapse0x1db64b0();
   input += synapse0x1db64f0();
   input += synapse0x1db6530();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db5b60() {
   double input = input0x1db5b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db6570() {
   double input = -0.280834;
   input += synapse0x1db68b0();
   input += synapse0x1db68f0();
   input += synapse0x1db6930();
   input += synapse0x1db6970();
   input += synapse0x1db69b0();
   input += synapse0x1db69f0();
   input += synapse0x1db6a30();
   input += synapse0x1db6a70();
   input += synapse0x1db6ab0();
   input += synapse0x1db6af0();
   input += synapse0x1db6b30();
   input += synapse0x1db6b70();
   input += synapse0x1db6bb0();
   input += synapse0x1db6bf0();
   input += synapse0x1db6c30();
   input += synapse0x1db6c70();
   input += synapse0x1db6700();
   input += synapse0x1db6740();
   input += synapse0x1db6dc0();
   input += synapse0x1db6e00();
   input += synapse0x1db6e40();
   input += synapse0x1db6e80();
   input += synapse0x1db6ec0();
   input += synapse0x1db6f00();
   input += synapse0x1db6f40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db6570() {
   double input = input0x1db6570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1db6f80() {
   double input = 0.189657;
   input += synapse0x1db71a0();
   input += synapse0x1db71e0();
   input += synapse0x1db7220();
   input += synapse0x1db7260();
   input += synapse0x1db72a0();
   input += synapse0x1db72e0();
   input += synapse0x1db7320();
   input += synapse0x1db7360();
   input += synapse0x1db73a0();
   input += synapse0x1db73e0();
   input += synapse0x1db7420();
   input += synapse0x1db7460();
   input += synapse0x1db74a0();
   input += synapse0x1db74e0();
   input += synapse0x1db7520();
   input += synapse0x1db7560();
   input += synapse0x1d9c570();
   input += synapse0x1d9c5b0();
   input += synapse0x1db76b0();
   input += synapse0x1db76f0();
   input += synapse0x1db7730();
   input += synapse0x1db7770();
   input += synapse0x1db77b0();
   input += synapse0x1db77f0();
   input += synapse0x1db7830();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1db6f80() {
   double input = input0x1db6f80();
   return (input * 2.75285)+123.311;
}

double nnFunc_25_25hi_1500ep__::synapse0x1ca89e0() {
   return (neuron0x1d9b530()*-0.853284);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d8a9a0() {
   return (neuron0x1d9b870()*0.617198);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c950() {
   return (neuron0x1d9bbb0()*2.37145);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c990() {
   return (neuron0x1d9bef0()*0.0340053);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c9d0() {
   return (neuron0x1d9c230()*0.802042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9cd50() {
   return (neuron0x1d9b530()*-3.47574);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9cd90() {
   return (neuron0x1d9b870()*1.26711);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9cdd0() {
   return (neuron0x1d9bbb0()*0.765064);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ce10() {
   return (neuron0x1d9bef0()*0.320184);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ce50() {
   return (neuron0x1d9c230()*1.51123);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d1d0() {
   return (neuron0x1d9b530()*-0.0310972);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d210() {
   return (neuron0x1d9b870()*0.747486);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d250() {
   return (neuron0x1d9bbb0()*-0.633853);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d290() {
   return (neuron0x1d9bef0()*-0.756946);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d2d0() {
   return (neuron0x1d9c230()*0.518446);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d650() {
   return (neuron0x1d9b530()*1.73307);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d690() {
   return (neuron0x1d9b870()*-0.831746);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c9abd0() {
   return (neuron0x1d9bbb0()*-1.28482);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c9ac10() {
   return (neuron0x1d9bef0()*-1.01853);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d7e0() {
   return (neuron0x1d9c230()*-0.326653);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9db60() {
   return (neuron0x1d9b530()*1.4237);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dba0() {
   return (neuron0x1d9b870()*-0.532111);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dbe0() {
   return (neuron0x1d9bbb0()*-0.446665);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dc20() {
   return (neuron0x1d9bef0()*-0.608608);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dc60() {
   return (neuron0x1d9c230()*-0.482909);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dfe0() {
   return (neuron0x1d9b530()*-0.0816521);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e020() {
   return (neuron0x1d9b870()*0.213115);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e060() {
   return (neuron0x1d9bbb0()*0.142161);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e0a0() {
   return (neuron0x1d9bef0()*5.4518);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e0e0() {
   return (neuron0x1d9c230()*-0.252068);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e460() {
   return (neuron0x1d9b530()*1.23204);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e4a0() {
   return (neuron0x1d9b870()*-0.588714);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e4e0() {
   return (neuron0x1d9bbb0()*-2.22348);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d6d0() {
   return (neuron0x1d9bef0()*-0.0467231);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d710() {
   return (neuron0x1d9c230()*-0.662136);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e9e0() {
   return (neuron0x1d9b530()*0.266678);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ea20() {
   return (neuron0x1d9b870()*-0.0923829);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ea60() {
   return (neuron0x1d9bbb0()*-0.181608);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9eaa0() {
   return (neuron0x1d9bef0()*0.610334);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9eae0() {
   return (neuron0x1d9c230()*-0.854244);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ee60() {
   return (neuron0x1d9b530()*-0.00213908);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9eea0() {
   return (neuron0x1d9b870()*-0.180195);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9eee0() {
   return (neuron0x1d9bbb0()*0.0631351);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ef20() {
   return (neuron0x1d9bef0()*-10.5625);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ef60() {
   return (neuron0x1d9c230()*-1.35945);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f2e0() {
   return (neuron0x1d9b530()*-0.0127121);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f320() {
   return (neuron0x1d9b870()*-0.537846);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f360() {
   return (neuron0x1d9bbb0()*-0.236321);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f3a0() {
   return (neuron0x1d9bef0()*-3.53875);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f3e0() {
   return (neuron0x1d9c230()*-0.00235687);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f760() {
   return (neuron0x1d9b530()*-1.20959);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f7a0() {
   return (neuron0x1d9b870()*0.650683);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f7e0() {
   return (neuron0x1d9bbb0()*0.894264);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f820() {
   return (neuron0x1d9bef0()*0.521669);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f860() {
   return (neuron0x1d9c230()*0.35528);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c9aa20() {
   return (neuron0x1d9b530()*-2.06125);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c9aa60() {
   return (neuron0x1d9b870()*0.824214);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fcf0() {
   return (neuron0x1d9bbb0()*3.64609);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fd30() {
   return (neuron0x1d9bef0()*0.398384);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fd70() {
   return (neuron0x1d9c230()*0.274778);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da00f0() {
   return (neuron0x1d9b530()*0.351657);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0130() {
   return (neuron0x1d9b870()*0.0602122);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0170() {
   return (neuron0x1d9bbb0()*0.289636);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da01b0() {
   return (neuron0x1d9bef0()*-0.24482);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da01f0() {
   return (neuron0x1d9c230()*1.26446);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c9b1f0() {
   return (neuron0x1d9b530()*-0.0299236);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e6b0() {
   return (neuron0x1d9b870()*0.0993069);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e6f0() {
   return (neuron0x1d9bbb0()*-1.28022);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0640() {
   return (neuron0x1d9bef0()*0.0992268);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0680() {
   return (neuron0x1d9c230()*-0.220685);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0a00() {
   return (neuron0x1d9b530()*-1.11524);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0a40() {
   return (neuron0x1d9b870()*0.679749);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0a80() {
   return (neuron0x1d9bbb0()*0.0377001);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0ac0() {
   return (neuron0x1d9bef0()*-3.86368);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0b00() {
   return (neuron0x1d9c230()*0.409159);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0e80() {
   return (neuron0x1d9b530()*0.00920642);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9b750() {
   return (neuron0x1d9b870()*-0.178156);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9b790() {
   return (neuron0x1d9bbb0()*-0.0423101);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ba90() {
   return (neuron0x1d9bef0()*-2.21059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9bad0() {
   return (neuron0x1d9c230()*-0.703237);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da15a0() {
   return (neuron0x1d9b530()*-1.69068);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da15e0() {
   return (neuron0x1d9b870()*0.562576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1620() {
   return (neuron0x1d9bbb0()*1.36128);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1660() {
   return (neuron0x1d9bef0()*1.03898);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da16a0() {
   return (neuron0x1d9c230()*0.739767);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1a20() {
   return (neuron0x1d9b530()*1.50621);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1a60() {
   return (neuron0x1d9b870()*-0.276197);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1aa0() {
   return (neuron0x1d9bbb0()*-1.45064);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1ae0() {
   return (neuron0x1d9bef0()*-0.112617);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1b20() {
   return (neuron0x1d9c230()*0.210868);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1ea0() {
   return (neuron0x1d9b530()*-0.82086);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1ee0() {
   return (neuron0x1d9b870()*0.369786);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1f20() {
   return (neuron0x1d9bbb0()*-0.118514);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1f60() {
   return (neuron0x1d9bef0()*0.538355);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1fa0() {
   return (neuron0x1d9c230()*0.630936);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2320() {
   return (neuron0x1d9b530()*-0.0195018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2360() {
   return (neuron0x1d9b870()*-0.995653);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da23a0() {
   return (neuron0x1d9bbb0()*0.580483);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da23e0() {
   return (neuron0x1d9bef0()*-0.174833);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2420() {
   return (neuron0x1d9c230()*-0.46328);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da27a0() {
   return (neuron0x1d9b530()*0.0220403);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da27e0() {
   return (neuron0x1d9b870()*0.188954);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2820() {
   return (neuron0x1d9bbb0()*0.158877);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2860() {
   return (neuron0x1d9bef0()*4.70528);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da28a0() {
   return (neuron0x1d9c230()*0.13402);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2c20() {
   return (neuron0x1d9b530()*-0.0955475);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2c60() {
   return (neuron0x1d9b870()*-0.164944);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2ca0() {
   return (neuron0x1d9bbb0()*-0.296239);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2ce0() {
   return (neuron0x1d9bef0()*-1.34149);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2d20() {
   return (neuron0x1d9c230()*-0.0562975);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da30a0() {
   return (neuron0x1d9b530()*0.136864);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da30e0() {
   return (neuron0x1d9b870()*0.793854);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3120() {
   return (neuron0x1d9bbb0()*1.05576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3160() {
   return (neuron0x1d9bef0()*0.628724);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da31a0() {
   return (neuron0x1d9c230()*-0.00397671);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3520() {
   return (neuron0x1d9b530()*0.00344608);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3560() {
   return (neuron0x1d9b870()*0.187098);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da35a0() {
   return (neuron0x1d9bbb0()*-0.00705093);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da35e0() {
   return (neuron0x1d9bef0()*-6.41782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3620() {
   return (neuron0x1d9c230()*1.47843);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da39a0() {
   return (neuron0x1d9b530()*-1.69534);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da39e0() {
   return (neuron0x1d9b870()*0.25517);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3a20() {
   return (neuron0x1d9bbb0()*1.07361);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3a60() {
   return (neuron0x1d9bef0()*0.420586);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3aa0() {
   return (neuron0x1d9c230()*0.74677);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d5c0() {
   return (neuron0x1d9c6a0()*-0.694833);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d600() {
   return (neuron0x1d9ca10()*-1.05629);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dad0() {
   return (neuron0x1d9ce90()*-0.00699346);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9db10() {
   return (neuron0x1d9d310()*0.0856927);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9df50() {
   return (neuron0x1d9d820()*-0.620431);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9df90() {
   return (neuron0x1d9dca0()*0.0909109);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e3d0() {
   return (neuron0x1d9e120()*-0.313414);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e410() {
   return (neuron0x1d9e730()*-0.207872);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e950() {
   return (neuron0x1d9eb20()*-0.596935);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e990() {
   return (neuron0x1d9efa0()*-0.128846);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9edd0() {
   return (neuron0x1d9f420()*-0.296042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ee10() {
   return (neuron0x1d9f8a0()*-0.0437167);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f250() {
   return (neuron0x1d9fdb0()*0.00863226);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f290() {
   return (neuron0x1d9e520()*-0.561756);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f6d0() {
   return (neuron0x1da06c0()*-0.358286);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f710() {
   return (neuron0x1da0b40()*-0.520207);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fb50() {
   return (neuron0x1da1410()*-0.120409);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fb90() {
   return (neuron0x1da16e0()*-0.315051);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0060() {
   return (neuron0x1da1b60()*-0.283345);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da00a0() {
   return (neuron0x1da1fe0()*-0.385763);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0970() {
   return (neuron0x1da2460()*-0.0341564);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da09b0() {
   return (neuron0x1da28e0()*-0.271504);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0df0() {
   return (neuron0x1da2d60()*-0.623137);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0e30() {
   return (neuron0x1da31e0()*0.085711);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c450() {
   return (neuron0x1da3660()*-0.562081);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da04d0() {
   return (neuron0x1d9c6a0()*0.364616);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0510() {
   return (neuron0x1d9ca10()*1.03678);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0550() {
   return (neuron0x1d9ce90()*0.657997);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0590() {
   return (neuron0x1d9d310()*-0.384813);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da05d0() {
   return (neuron0x1d9d820()*-0.591857);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c490() {
   return (neuron0x1d9dca0()*-0.286255);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2710() {
   return (neuron0x1d9e120()*-0.329897);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2750() {
   return (neuron0x1d9e730()*0.90043);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2b90() {
   return (neuron0x1d9eb20()*0.071623);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2bd0() {
   return (neuron0x1d9efa0()*0.0471367);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3010() {
   return (neuron0x1d9f420()*-0.724103);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3050() {
   return (neuron0x1d9f8a0()*0.74539);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3490() {
   return (neuron0x1d9fdb0()*-0.493808);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da34d0() {
   return (neuron0x1d9e520()*-0.54962);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3910() {
   return (neuron0x1da06c0()*-0.153025);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3950() {
   return (neuron0x1da0b40()*-0.136832);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c8c0() {
   return (neuron0x1da1410()*0.131197);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c900() {
   return (neuron0x1da16e0()*0.0387525);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1990() {
   return (neuron0x1da1b60()*-0.305635);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da19d0() {
   return (neuron0x1da1fe0()*0.329128);
}

double nnFunc_25_25hi_1500ep__::synapse0x1ca8ab0() {
   return (neuron0x1da2460()*0.881842);
}

double nnFunc_25_25hi_1500ep__::synapse0x1ca8af0() {
   return (neuron0x1da28e0()*0.396171);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6020() {
   return (neuron0x1da2d60()*0.569391);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6060() {
   return (neuron0x1da31e0()*0.711327);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da60a0() {
   return (neuron0x1da3660()*0.049355);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fbe0() {
   return (neuron0x1d9c6a0()*-0.311957);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fc20() {
   return (neuron0x1d9ca10()*-0.982722);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fc60() {
   return (neuron0x1d9ce90()*-0.3754);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fca0() {
   return (neuron0x1d9d310()*0.0237581);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6630() {
   return (neuron0x1d9d820()*0.366601);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6670() {
   return (neuron0x1d9dca0()*0.0333492);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da66b0() {
   return (neuron0x1d9e120()*-0.310402);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da66f0() {
   return (neuron0x1d9e730()*-0.624942);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6730() {
   return (neuron0x1d9eb20()*-0.21674);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6770() {
   return (neuron0x1d9efa0()*-0.496129);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da67b0() {
   return (neuron0x1d9f420()*0.238562);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da67f0() {
   return (neuron0x1d9f8a0()*0.0272083);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6830() {
   return (neuron0x1d9fdb0()*0.610868);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6870() {
   return (neuron0x1d9e520()*0.0862402);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da68b0() {
   return (neuron0x1da06c0()*0.302772);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da68f0() {
   return (neuron0x1da0b40()*-0.0223249);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6270() {
   return (neuron0x1da1410()*-0.352771);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da62b0() {
   return (neuron0x1da16e0()*-0.11335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6a40() {
   return (neuron0x1da1b60()*-0.410885);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6a80() {
   return (neuron0x1da1fe0()*-0.301697);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6ac0() {
   return (neuron0x1da2460()*-0.91643);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6b00() {
   return (neuron0x1da28e0()*-0.0693765);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6b40() {
   return (neuron0x1da2d60()*-0.614164);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6b80() {
   return (neuron0x1da31e0()*-0.473951);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6bc0() {
   return (neuron0x1da3660()*-0.47162);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6f40() {
   return (neuron0x1d9c6a0()*-0.154601);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6f80() {
   return (neuron0x1d9ca10()*-0.466971);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6fc0() {
   return (neuron0x1d9ce90()*0.427568);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7000() {
   return (neuron0x1d9d310()*-0.0154519);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7040() {
   return (neuron0x1d9d820()*-0.136183);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7080() {
   return (neuron0x1d9dca0()*-1.08938);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da70c0() {
   return (neuron0x1d9e120()*-0.167624);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7100() {
   return (neuron0x1d9e730()*0.453191);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7140() {
   return (neuron0x1d9eb20()*-1.68042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7180() {
   return (neuron0x1d9efa0()*0.971204);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da71c0() {
   return (neuron0x1d9f420()*-0.686087);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7200() {
   return (neuron0x1d9f8a0()*-1.18527);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7240() {
   return (neuron0x1d9fdb0()*-0.272091);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7280() {
   return (neuron0x1d9e520()*-0.474666);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da72c0() {
   return (neuron0x1da06c0()*-0.475897);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7300() {
   return (neuron0x1da0b40()*-0.784392);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6d90() {
   return (neuron0x1da1410()*-0.0478798);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da6dd0() {
   return (neuron0x1da16e0()*-0.141581);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7450() {
   return (neuron0x1da1b60()*-0.187129);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7490() {
   return (neuron0x1da1fe0()*-0.443781);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da74d0() {
   return (neuron0x1da2460()*0.789707);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7510() {
   return (neuron0x1da28e0()*0.252697);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7550() {
   return (neuron0x1da2d60()*-0.321894);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7590() {
   return (neuron0x1da31e0()*0.918919);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da75d0() {
   return (neuron0x1da3660()*-0.248531);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7950() {
   return (neuron0x1d9c6a0()*-1.10653);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7990() {
   return (neuron0x1d9ca10()*-1.63046);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da79d0() {
   return (neuron0x1d9ce90()*-1.22736);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7a10() {
   return (neuron0x1d9d310()*-0.542763);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7a50() {
   return (neuron0x1d9d820()*0.118427);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7a90() {
   return (neuron0x1d9dca0()*1.03552);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7ad0() {
   return (neuron0x1d9e120()*0.670207);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7b10() {
   return (neuron0x1d9e730()*-1.50458);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7b50() {
   return (neuron0x1d9eb20()*1.4162);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7b90() {
   return (neuron0x1d9efa0()*0.991511);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7bd0() {
   return (neuron0x1d9f420()*0.653855);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7c10() {
   return (neuron0x1d9f8a0()*-1.06676);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7c50() {
   return (neuron0x1d9fdb0()*0.852693);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7c90() {
   return (neuron0x1d9e520()*-0.270857);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7cd0() {
   return (neuron0x1da06c0()*1.04376);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7d10() {
   return (neuron0x1da0b40()*0.387799);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da77a0() {
   return (neuron0x1da1410()*-0.121853);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da77e0() {
   return (neuron0x1da16e0()*0.366098);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7e60() {
   return (neuron0x1da1b60()*0.0391192);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7ea0() {
   return (neuron0x1da1fe0()*-0.311881);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7ee0() {
   return (neuron0x1da2460()*-1.54009);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7f20() {
   return (neuron0x1da28e0()*-1.02962);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7f60() {
   return (neuron0x1da2d60()*0.0221164);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7fa0() {
   return (neuron0x1da31e0()*-1.44016);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da7fe0() {
   return (neuron0x1da3660()*-0.404441);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da8360() {
   return (neuron0x1d9c6a0()*0.072231);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da83a0() {
   return (neuron0x1d9ca10()*-0.993677);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da83e0() {
   return (neuron0x1d9ce90()*-0.300302);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da8420() {
   return (neuron0x1d9d310()*-0.594202);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da8460() {
   return (neuron0x1d9d820()*-1.03955);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da84a0() {
   return (neuron0x1d9dca0()*-0.894927);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da84e0() {
   return (neuron0x1d9e120()*-0.0331129);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5700() {
   return (neuron0x1d9e730()*-0.156519);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5740() {
   return (neuron0x1d9eb20()*-1.1018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5780() {
   return (neuron0x1d9efa0()*-0.0724448);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da57c0() {
   return (neuron0x1d9f420()*-0.766209);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5800() {
   return (neuron0x1d9f8a0()*-0.54251);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5840() {
   return (neuron0x1d9fdb0()*-0.425782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5880() {
   return (neuron0x1d9e520()*-0.0238311);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da58c0() {
   return (neuron0x1da06c0()*-0.638628);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5900() {
   return (neuron0x1da0b40()*-0.582891);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da81b0() {
   return (neuron0x1da1410()*0.136469);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da81f0() {
   return (neuron0x1da16e0()*-0.413962);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5a50() {
   return (neuron0x1da1b60()*0.649959);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5a90() {
   return (neuron0x1da1fe0()*-0.286281);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5ad0() {
   return (neuron0x1da2460()*-0.175338);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5b10() {
   return (neuron0x1da28e0()*-0.636643);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5b50() {
   return (neuron0x1da2d60()*-0.503393);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5b90() {
   return (neuron0x1da31e0()*-0.111731);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5bd0() {
   return (neuron0x1da3660()*-0.2632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5ec0() {
   return (neuron0x1d9c6a0()*-0.0967945);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da95c0() {
   return (neuron0x1d9ca10()*-0.0843132);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9600() {
   return (neuron0x1d9ce90()*0.394556);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9640() {
   return (neuron0x1d9d310()*0.243115);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9680() {
   return (neuron0x1d9d820()*-0.227787);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da96c0() {
   return (neuron0x1d9dca0()*-0.778237);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9700() {
   return (neuron0x1d9e120()*0.248297);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9740() {
   return (neuron0x1d9e730()*-0.388737);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9780() {
   return (neuron0x1d9eb20()*-1.10933);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da97c0() {
   return (neuron0x1d9efa0()*0.614497);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9800() {
   return (neuron0x1d9f420()*-0.931696);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9840() {
   return (neuron0x1d9f8a0()*-0.725281);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9880() {
   return (neuron0x1d9fdb0()*-0.655283);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da98c0() {
   return (neuron0x1d9e520()*-0.246152);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9900() {
   return (neuron0x1da06c0()*-0.0737533);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9940() {
   return (neuron0x1da0b40()*-0.743169);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5da0() {
   return (neuron0x1da1410()*-0.323141);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da5de0() {
   return (neuron0x1da16e0()*0.573693);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9a90() {
   return (neuron0x1da1b60()*-0.175262);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9ad0() {
   return (neuron0x1da1fe0()*0.171154);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9b10() {
   return (neuron0x1da2460()*0.759213);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9b50() {
   return (neuron0x1da28e0()*0.440244);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9b90() {
   return (neuron0x1da2d60()*-0.784448);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9bd0() {
   return (neuron0x1da31e0()*1.27899);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9c10() {
   return (neuron0x1da3660()*-0.139037);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9f90() {
   return (neuron0x1d9c6a0()*-0.245994);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9fd0() {
   return (neuron0x1d9ca10()*-0.0524949);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa010() {
   return (neuron0x1d9ce90()*-0.453679);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa050() {
   return (neuron0x1d9d310()*-0.350017);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa090() {
   return (neuron0x1d9d820()*-0.346018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa0d0() {
   return (neuron0x1d9dca0()*-0.423455);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa110() {
   return (neuron0x1d9e120()*0.117026);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa150() {
   return (neuron0x1d9e730()*-0.970514);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa190() {
   return (neuron0x1d9eb20()*-0.280836);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa1d0() {
   return (neuron0x1d9efa0()*-0.413175);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa210() {
   return (neuron0x1d9f420()*0.122727);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa250() {
   return (neuron0x1d9f8a0()*-0.183562);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa290() {
   return (neuron0x1d9fdb0()*0.567071);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa2d0() {
   return (neuron0x1d9e520()*-0.0659848);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa310() {
   return (neuron0x1da06c0()*0.0559378);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa350() {
   return (neuron0x1da0b40()*0.292842);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9de0() {
   return (neuron0x1da1410()*0.426637);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9e20() {
   return (neuron0x1da16e0()*-0.137899);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa4a0() {
   return (neuron0x1da1b60()*-0.248028);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa4e0() {
   return (neuron0x1da1fe0()*0.380476);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa520() {
   return (neuron0x1da2460()*0.370283);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa560() {
   return (neuron0x1da28e0()*-1.13445);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa5a0() {
   return (neuron0x1da2d60()*0.562805);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa5e0() {
   return (neuron0x1da31e0()*-0.997378);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa620() {
   return (neuron0x1da3660()*0.114019);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa9a0() {
   return (neuron0x1d9c6a0()*0.0139489);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa9e0() {
   return (neuron0x1d9ca10()*0.112719);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaa20() {
   return (neuron0x1d9ce90()*0.719616);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaa60() {
   return (neuron0x1d9d310()*-0.255622);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaaa0() {
   return (neuron0x1d9d820()*-0.708326);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaae0() {
   return (neuron0x1d9dca0()*-0.620616);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daab20() {
   return (neuron0x1d9e120()*-0.931943);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daab60() {
   return (neuron0x1d9e730()*0.297503);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaba0() {
   return (neuron0x1d9eb20()*-0.248149);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daabe0() {
   return (neuron0x1d9efa0()*0.0330201);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daac20() {
   return (neuron0x1d9f420()*-0.42348);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daac60() {
   return (neuron0x1d9f8a0()*-0.0555275);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaca0() {
   return (neuron0x1d9fdb0()*-0.627894);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daace0() {
   return (neuron0x1d9e520()*0.0301038);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daad20() {
   return (neuron0x1da06c0()*0.0181615);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daad60() {
   return (neuron0x1da0b40()*0.0158944);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa7f0() {
   return (neuron0x1da1410()*0.474731);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daa830() {
   return (neuron0x1da16e0()*-0.122921);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaeb0() {
   return (neuron0x1da1b60()*-0.543662);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaef0() {
   return (neuron0x1da1fe0()*-0.306436);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaf30() {
   return (neuron0x1da2460()*-0.0393893);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaf70() {
   return (neuron0x1da28e0()*0.399483);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daafb0() {
   return (neuron0x1da2d60()*-0.198583);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daaff0() {
   return (neuron0x1da31e0()*0.197298);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab030() {
   return (neuron0x1da3660()*0.279669);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab3b0() {
   return (neuron0x1d9c6a0()*-0.137518);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab3f0() {
   return (neuron0x1d9ca10()*-0.484983);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab430() {
   return (neuron0x1d9ce90()*-1.75742);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab470() {
   return (neuron0x1d9d310()*0.110102);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab4b0() {
   return (neuron0x1d9d820()*0.797032);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab4f0() {
   return (neuron0x1d9dca0()*0.828302);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab530() {
   return (neuron0x1d9e120()*0.103314);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab570() {
   return (neuron0x1d9e730()*0.568941);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab5b0() {
   return (neuron0x1d9eb20()*7.00998);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab5f0() {
   return (neuron0x1d9efa0()*-2.01342);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab630() {
   return (neuron0x1d9f420()*0.516874);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab670() {
   return (neuron0x1d9f8a0()*-0.0445507);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab6b0() {
   return (neuron0x1d9fdb0()*-0.752584);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab6f0() {
   return (neuron0x1d9e520()*0.33784);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab730() {
   return (neuron0x1da06c0()*0.122705);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab770() {
   return (neuron0x1da0b40()*1.22677);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab200() {
   return (neuron0x1da1410()*0.641269);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab240() {
   return (neuron0x1da16e0()*0.393798);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab8c0() {
   return (neuron0x1da1b60()*0.388545);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab900() {
   return (neuron0x1da1fe0()*-1.15676);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab940() {
   return (neuron0x1da2460()*-0.438947);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab980() {
   return (neuron0x1da28e0()*-1.62488);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dab9c0() {
   return (neuron0x1da2d60()*-0.159005);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daba00() {
   return (neuron0x1da31e0()*-5.39045);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daba40() {
   return (neuron0x1da3660()*0.20213);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabdc0() {
   return (neuron0x1d9c6a0()*-0.269372);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabe00() {
   return (neuron0x1d9ca10()*-0.188137);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabe40() {
   return (neuron0x1d9ce90()*-0.293819);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabe80() {
   return (neuron0x1d9d310()*0.0508266);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabec0() {
   return (neuron0x1d9d820()*-0.101626);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabf00() {
   return (neuron0x1d9dca0()*-0.00990797);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabf40() {
   return (neuron0x1d9e120()*-0.244541);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabf80() {
   return (neuron0x1d9e730()*-0.181386);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabfc0() {
   return (neuron0x1d9eb20()*0.634569);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac000() {
   return (neuron0x1d9efa0()*-0.0415964);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac040() {
   return (neuron0x1d9f420()*-0.643634);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac080() {
   return (neuron0x1d9f8a0()*0.235133);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac0c0() {
   return (neuron0x1d9fdb0()*-0.0992563);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac100() {
   return (neuron0x1d9e520()*0.297782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac140() {
   return (neuron0x1da06c0()*-0.201105);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac180() {
   return (neuron0x1da0b40()*-0.226229);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabc10() {
   return (neuron0x1da1410()*-0.383724);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dabc50() {
   return (neuron0x1da16e0()*-0.372082);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac2d0() {
   return (neuron0x1da1b60()*-0.832032);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac310() {
   return (neuron0x1da1fe0()*-0.644787);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac350() {
   return (neuron0x1da2460()*0.0604629);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac390() {
   return (neuron0x1da28e0()*-0.500348);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac3d0() {
   return (neuron0x1da2d60()*0.207056);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac410() {
   return (neuron0x1da31e0()*-0.395005);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac450() {
   return (neuron0x1da3660()*-0.352744);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac7d0() {
   return (neuron0x1d9c6a0()*-0.449894);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac810() {
   return (neuron0x1d9ca10()*-1.21239);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac850() {
   return (neuron0x1d9ce90()*0.0748125);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac890() {
   return (neuron0x1d9d310()*0.223756);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac8d0() {
   return (neuron0x1d9d820()*-0.0755716);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac910() {
   return (neuron0x1d9dca0()*0.417492);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac950() {
   return (neuron0x1d9e120()*0.837761);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac990() {
   return (neuron0x1d9e730()*-0.358427);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac9d0() {
   return (neuron0x1d9eb20()*0.265475);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daca10() {
   return (neuron0x1d9efa0()*0.00773336);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daca50() {
   return (neuron0x1d9f420()*0.276588);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daca90() {
   return (neuron0x1d9f8a0()*-0.609441);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacad0() {
   return (neuron0x1d9fdb0()*0.465734);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacb10() {
   return (neuron0x1d9e520()*-0.105345);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacb50() {
   return (neuron0x1da06c0()*0.429898);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacb90() {
   return (neuron0x1da0b40()*0.307782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac620() {
   return (neuron0x1da1410()*0.0886562);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dac660() {
   return (neuron0x1da16e0()*0.378259);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacce0() {
   return (neuron0x1da1b60()*-0.0141738);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacd20() {
   return (neuron0x1da1fe0()*-0.166676);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacd60() {
   return (neuron0x1da2460()*-0.210567);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacda0() {
   return (neuron0x1da28e0()*-0.147382);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dacde0() {
   return (neuron0x1da2d60()*0.044503);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dace20() {
   return (neuron0x1da31e0()*-0.528104);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dace60() {
   return (neuron0x1da3660()*-0.284951);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad1e0() {
   return (neuron0x1d9c6a0()*-0.0532005);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad220() {
   return (neuron0x1d9ca10()*-0.922933);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad260() {
   return (neuron0x1d9ce90()*-0.0375468);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad2a0() {
   return (neuron0x1d9d310()*-0.25448);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad2e0() {
   return (neuron0x1d9d820()*0.0212517);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad320() {
   return (neuron0x1d9dca0()*-0.716096);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad360() {
   return (neuron0x1d9e120()*0.148455);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad3a0() {
   return (neuron0x1d9e730()*-0.0182919);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad3e0() {
   return (neuron0x1d9eb20()*1.88766);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad420() {
   return (neuron0x1d9efa0()*-0.160799);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad460() {
   return (neuron0x1d9f420()*0.170861);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad4a0() {
   return (neuron0x1d9f8a0()*-0.331775);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad4e0() {
   return (neuron0x1d9fdb0()*0.447053);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad520() {
   return (neuron0x1d9e520()*-0.0123079);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad560() {
   return (neuron0x1da06c0()*-0.053751);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad5a0() {
   return (neuron0x1da0b40()*0.333633);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad030() {
   return (neuron0x1da1410()*-0.167722);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad070() {
   return (neuron0x1da16e0()*-0.420304);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad6f0() {
   return (neuron0x1da1b60()*-0.0610937);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad730() {
   return (neuron0x1da1fe0()*-0.647406);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad770() {
   return (neuron0x1da2460()*-0.286576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad7b0() {
   return (neuron0x1da28e0()*-0.244148);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad7f0() {
   return (neuron0x1da2d60()*-0.465403);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad830() {
   return (neuron0x1da31e0()*-0.839102);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dad870() {
   return (neuron0x1da3660()*-0.652543);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadbf0() {
   return (neuron0x1d9c6a0()*0.179236);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadc30() {
   return (neuron0x1d9ca10()*0.4547);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadc70() {
   return (neuron0x1d9ce90()*0.278486);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadcb0() {
   return (neuron0x1d9d310()*0.115923);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadcf0() {
   return (neuron0x1d9d820()*-0.558738);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadd30() {
   return (neuron0x1d9dca0()*0.177237);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadd70() {
   return (neuron0x1d9e120()*0.0245749);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daddb0() {
   return (neuron0x1d9e730()*-0.654548);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daddf0() {
   return (neuron0x1d9eb20()*-0.096354);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dade30() {
   return (neuron0x1d9efa0()*-0.406144);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dade70() {
   return (neuron0x1d9f420()*-0.0882285);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadeb0() {
   return (neuron0x1d9f8a0()*-0.0222318);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadef0() {
   return (neuron0x1d9fdb0()*0.248526);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadf30() {
   return (neuron0x1d9e520()*0.304195);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadf70() {
   return (neuron0x1da06c0()*-0.144994);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dadfb0() {
   return (neuron0x1da0b40()*-0.33177);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dada40() {
   return (neuron0x1da1410()*-0.0851933);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dada80() {
   return (neuron0x1da16e0()*0.189513);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae100() {
   return (neuron0x1da1b60()*-0.297654);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae140() {
   return (neuron0x1da1fe0()*-0.344432);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae180() {
   return (neuron0x1da2460()*0.1029);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae1c0() {
   return (neuron0x1da28e0()*-0.612111);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae200() {
   return (neuron0x1da2d60()*-0.0748717);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae240() {
   return (neuron0x1da31e0()*-0.376133);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae280() {
   return (neuron0x1da3660()*0.205012);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae600() {
   return (neuron0x1d9c6a0()*0.688746);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae640() {
   return (neuron0x1d9ca10()*1.27606);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae680() {
   return (neuron0x1d9ce90()*0.14421);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae6c0() {
   return (neuron0x1d9d310()*0.0967703);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae700() {
   return (neuron0x1d9d820()*-0.137039);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae740() {
   return (neuron0x1d9dca0()*-1.12347);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae780() {
   return (neuron0x1d9e120()*-0.310998);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae7c0() {
   return (neuron0x1d9e730()*0.876749);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae800() {
   return (neuron0x1d9eb20()*-2.03287);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae840() {
   return (neuron0x1d9efa0()*-0.541057);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae880() {
   return (neuron0x1d9f420()*-0.868248);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae8c0() {
   return (neuron0x1d9f8a0()*0.248934);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae900() {
   return (neuron0x1d9fdb0()*-0.647975);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae940() {
   return (neuron0x1d9e520()*0.103985);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae980() {
   return (neuron0x1da06c0()*-0.488825);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae9c0() {
   return (neuron0x1da0b40()*-0.280793);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae450() {
   return (neuron0x1da1410()*0.222767);
}

double nnFunc_25_25hi_1500ep__::synapse0x1dae490() {
   return (neuron0x1da16e0()*0.274223);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daeb10() {
   return (neuron0x1da1b60()*0.246544);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daeb50() {
   return (neuron0x1da1fe0()*-0.099019);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daeb90() {
   return (neuron0x1da2460()*1.3994);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daebd0() {
   return (neuron0x1da28e0()*1.10457);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daec10() {
   return (neuron0x1da2d60()*0.148731);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daec50() {
   return (neuron0x1da31e0()*1.36359);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daec90() {
   return (neuron0x1da3660()*0.089096);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daf010() {
   return (neuron0x1d9c6a0()*-0.399074);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c830() {
   return (neuron0x1d9ca10()*-0.209277);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c870() {
   return (neuron0x1d9ce90()*0.227733);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9cc30() {
   return (neuron0x1d9d310()*-0.100466);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9cc70() {
   return (neuron0x1d9d820()*-0.168825);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d0b0() {
   return (neuron0x1d9dca0()*0.211061);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d0f0() {
   return (neuron0x1d9e120()*-0.228006);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d530() {
   return (neuron0x1d9e730()*-0.337248);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9d570() {
   return (neuron0x1d9eb20()*-0.173509);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9da40() {
   return (neuron0x1d9efa0()*0.866158);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9da80() {
   return (neuron0x1d9f420()*0.145831);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9dec0() {
   return (neuron0x1d9f8a0()*0.0290732);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9df00() {
   return (neuron0x1d9fdb0()*-0.645665);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e340() {
   return (neuron0x1d9e520()*0.0941643);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e380() {
   return (neuron0x1da06c0()*-0.131141);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e8c0() {
   return (neuron0x1da0b40()*-0.0869715);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9e900() {
   return (neuron0x1da1410()*-0.407917);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ed40() {
   return (neuron0x1da16e0()*-0.34501);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ed80() {
   return (neuron0x1da1b60()*-0.095337);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f1c0() {
   return (neuron0x1da1fe0()*-0.00647768);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f200() {
   return (neuron0x1da2460()*-0.925962);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f640() {
   return (neuron0x1da28e0()*0.370841);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9f680() {
   return (neuron0x1da2d60()*-0.46573);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fac0() {
   return (neuron0x1da31e0()*1.04488);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9fb00() {
   return (neuron0x1da3660()*0.30604);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da9480() {
   return (neuron0x1d9c6a0()*-0.450902);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da94c0() {
   return (neuron0x1d9ca10()*-0.342779);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0d60() {
   return (neuron0x1d9ce90()*-0.424225);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0da0() {
   return (neuron0x1d9d310()*0.0932293);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daee60() {
   return (neuron0x1d9d820()*-0.294619);
}

double nnFunc_25_25hi_1500ep__::synapse0x1daeea0() {
   return (neuron0x1d9dca0()*0.575753);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c110() {
   return (neuron0x1d9e120()*0.0168448);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c150() {
   return (neuron0x1d9e730()*1.00218);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1900() {
   return (neuron0x1d9eb20()*0.427693);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1940() {
   return (neuron0x1d9efa0()*0.498114);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1d80() {
   return (neuron0x1d9f420()*-0.128424);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da1dc0() {
   return (neuron0x1d9f8a0()*-0.172642);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2200() {
   return (neuron0x1d9fdb0()*-0.18183);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2240() {
   return (neuron0x1d9e520()*0.051567);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2680() {
   return (neuron0x1da06c0()*0.0871736);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da26c0() {
   return (neuron0x1da0b40()*-0.245743);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2b00() {
   return (neuron0x1da1410()*-0.0413864);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2b40() {
   return (neuron0x1da16e0()*-0.143581);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2f80() {
   return (neuron0x1da1b60()*0.375246);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da2fc0() {
   return (neuron0x1da1fe0()*-0.0868975);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3400() {
   return (neuron0x1da2460()*-0.176443);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3440() {
   return (neuron0x1da28e0()*0.759181);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da3880() {
   return (neuron0x1da2d60()*-0.394664);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da38c0() {
   return (neuron0x1da31e0()*0.691226);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9ffd0() {
   return (neuron0x1da3660()*0.0241119);
}

double nnFunc_25_25hi_1500ep__::synapse0x1da0010() {
   return (neuron0x1d9c6a0()*-0.429394);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2280() {
   return (neuron0x1d9ca10()*-0.323581);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db22c0() {
   return (neuron0x1d9ce90()*0.252222);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2300() {
   return (neuron0x1d9d310()*0.348887);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2340() {
   return (neuron0x1d9d820()*-0.293641);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2380() {
   return (neuron0x1d9dca0()*-0.100676);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db23c0() {
   return (neuron0x1d9e120()*-0.23941);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2400() {
   return (neuron0x1d9e730()*0.161728);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2440() {
   return (neuron0x1d9eb20()*-0.499115);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2480() {
   return (neuron0x1d9efa0()*0.0869214);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db24c0() {
   return (neuron0x1d9f420()*-0.138081);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2500() {
   return (neuron0x1d9f8a0()*0.497273);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2540() {
   return (neuron0x1d9fdb0()*-0.168493);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2580() {
   return (neuron0x1d9e520()*0.137412);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db25c0() {
   return (neuron0x1da06c0()*-0.0552983);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2600() {
   return (neuron0x1da0b40()*-0.0333428);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db20d0() {
   return (neuron0x1da1410()*0.221893);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2110() {
   return (neuron0x1da16e0()*0.191665);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2750() {
   return (neuron0x1da1b60()*-0.122531);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2790() {
   return (neuron0x1da1fe0()*-0.399787);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db27d0() {
   return (neuron0x1da2460()*-0.00481633);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2810() {
   return (neuron0x1da28e0()*-0.645044);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2850() {
   return (neuron0x1da2d60()*0.497181);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2890() {
   return (neuron0x1da31e0()*-0.389401);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db28d0() {
   return (neuron0x1da3660()*0.22632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2c50() {
   return (neuron0x1d9c6a0()*-0.643154);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2c90() {
   return (neuron0x1d9ca10()*-0.124821);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2cd0() {
   return (neuron0x1d9ce90()*0.106675);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2d10() {
   return (neuron0x1d9d310()*-0.185328);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2d50() {
   return (neuron0x1d9d820()*-0.238228);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2d90() {
   return (neuron0x1d9dca0()*0.0132417);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2dd0() {
   return (neuron0x1d9e120()*0.0473247);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2e10() {
   return (neuron0x1d9e730()*-0.446041);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2e50() {
   return (neuron0x1d9eb20()*0.614638);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2e90() {
   return (neuron0x1d9efa0()*0.0960868);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2ed0() {
   return (neuron0x1d9f420()*0.563243);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2f10() {
   return (neuron0x1d9f8a0()*-0.181158);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2f50() {
   return (neuron0x1d9fdb0()*0.0294016);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2f90() {
   return (neuron0x1d9e520()*0.489424);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2fd0() {
   return (neuron0x1da06c0()*0.117055);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3010() {
   return (neuron0x1da0b40()*0.505691);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2aa0() {
   return (neuron0x1da1410()*-0.158636);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db2ae0() {
   return (neuron0x1da16e0()*0.195168);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3160() {
   return (neuron0x1da1b60()*0.656087);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db31a0() {
   return (neuron0x1da1fe0()*0.0654549);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db31e0() {
   return (neuron0x1da2460()*0.010901);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3220() {
   return (neuron0x1da28e0()*0.593142);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3260() {
   return (neuron0x1da2d60()*-0.252764);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db32a0() {
   return (neuron0x1da31e0()*0.17577);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db32e0() {
   return (neuron0x1da3660()*-0.156532);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3660() {
   return (neuron0x1d9c6a0()*0.212365);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db36a0() {
   return (neuron0x1d9ca10()*0.733242);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db36e0() {
   return (neuron0x1d9ce90()*0.00837856);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3720() {
   return (neuron0x1d9d310()*-0.0501308);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3760() {
   return (neuron0x1d9d820()*-0.687749);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db37a0() {
   return (neuron0x1d9dca0()*-0.502885);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db37e0() {
   return (neuron0x1d9e120()*-0.318028);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3820() {
   return (neuron0x1d9e730()*0.408323);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3860() {
   return (neuron0x1d9eb20()*-0.370807);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db38a0() {
   return (neuron0x1d9efa0()*-0.879818);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db38e0() {
   return (neuron0x1d9f420()*-0.885232);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3920() {
   return (neuron0x1d9f8a0()*0.0524537);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3960() {
   return (neuron0x1d9fdb0()*-0.685053);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db39a0() {
   return (neuron0x1d9e520()*0.016834);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db39e0() {
   return (neuron0x1da06c0()*-0.401545);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3a20() {
   return (neuron0x1da0b40()*-0.402215);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db34b0() {
   return (neuron0x1da1410()*-0.385647);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db34f0() {
   return (neuron0x1da16e0()*0.256282);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3b70() {
   return (neuron0x1da1b60()*-0.410371);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3bb0() {
   return (neuron0x1da1fe0()*0.217356);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3bf0() {
   return (neuron0x1da2460()*0.809766);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3c30() {
   return (neuron0x1da28e0()*0.598871);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3c70() {
   return (neuron0x1da2d60()*-0.0469021);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3cb0() {
   return (neuron0x1da31e0()*0.198625);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3cf0() {
   return (neuron0x1da3660()*-0.311987);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4070() {
   return (neuron0x1d9c6a0()*0.437806);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db40b0() {
   return (neuron0x1d9ca10()*0.882374);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db40f0() {
   return (neuron0x1d9ce90()*0.159363);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4130() {
   return (neuron0x1d9d310()*0.111878);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4170() {
   return (neuron0x1d9d820()*-0.584126);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db41b0() {
   return (neuron0x1d9dca0()*-0.436892);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db41f0() {
   return (neuron0x1d9e120()*-1.18269);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4230() {
   return (neuron0x1d9e730()*0.936257);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4270() {
   return (neuron0x1d9eb20()*-0.194945);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db42b0() {
   return (neuron0x1d9efa0()*-0.253622);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db42f0() {
   return (neuron0x1d9f420()*-1.02596);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4330() {
   return (neuron0x1d9f8a0()*0.693101);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4370() {
   return (neuron0x1d9fdb0()*-0.955125);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db43b0() {
   return (neuron0x1d9e520()*-0.349714);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db43f0() {
   return (neuron0x1da06c0()*-0.349174);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4430() {
   return (neuron0x1da0b40()*-0.294751);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3ec0() {
   return (neuron0x1da1410()*0.233013);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db3f00() {
   return (neuron0x1da16e0()*0.258395);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4580() {
   return (neuron0x1da1b60()*-0.416299);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db45c0() {
   return (neuron0x1da1fe0()*0.242202);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4600() {
   return (neuron0x1da2460()*0.294764);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4640() {
   return (neuron0x1da28e0()*0.298947);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4680() {
   return (neuron0x1da2d60()*-0.0590316);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db46c0() {
   return (neuron0x1da31e0()*0.889628);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4700() {
   return (neuron0x1da3660()*0.737565);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4a80() {
   return (neuron0x1d9c6a0()*-0.79388);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4ac0() {
   return (neuron0x1d9ca10()*-0.481548);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4b00() {
   return (neuron0x1d9ce90()*0.33335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4b40() {
   return (neuron0x1d9d310()*-0.88191);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4b80() {
   return (neuron0x1d9d820()*0.244011);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4bc0() {
   return (neuron0x1d9dca0()*0.348372);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4c00() {
   return (neuron0x1d9e120()*-0.299031);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4c40() {
   return (neuron0x1d9e730()*0.295258);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4c80() {
   return (neuron0x1d9eb20()*1.09498);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4cc0() {
   return (neuron0x1d9efa0()*-0.590328);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4d00() {
   return (neuron0x1d9f420()*-0.793161);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4d40() {
   return (neuron0x1d9f8a0()*-0.535145);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4d80() {
   return (neuron0x1d9fdb0()*-0.245991);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4dc0() {
   return (neuron0x1d9e520()*-0.400126);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4e00() {
   return (neuron0x1da06c0()*-0.600291);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4e40() {
   return (neuron0x1da0b40()*0.0318363);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db48d0() {
   return (neuron0x1da1410()*-0.449172);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4910() {
   return (neuron0x1da16e0()*0.0758721);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4f90() {
   return (neuron0x1da1b60()*-0.0991229);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db4fd0() {
   return (neuron0x1da1fe0()*-0.824231);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5010() {
   return (neuron0x1da2460()*-1.11541);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5050() {
   return (neuron0x1da28e0()*-0.366038);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5090() {
   return (neuron0x1da2d60()*-0.0140311);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db50d0() {
   return (neuron0x1da31e0()*-1.29845);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5110() {
   return (neuron0x1da3660()*-0.501291);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5490() {
   return (neuron0x1d9c6a0()*-0.718549);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db54d0() {
   return (neuron0x1d9ca10()*-1.1574);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5510() {
   return (neuron0x1d9ce90()*-0.685817);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5550() {
   return (neuron0x1d9d310()*0.498545);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5590() {
   return (neuron0x1d9d820()*0.425524);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db55d0() {
   return (neuron0x1d9dca0()*0.671932);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5610() {
   return (neuron0x1d9e120()*0.369167);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5650() {
   return (neuron0x1d9e730()*-1.24336);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5690() {
   return (neuron0x1d9eb20()*0.216667);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db56d0() {
   return (neuron0x1d9efa0()*0.313115);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5710() {
   return (neuron0x1d9f420()*0.982632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5750() {
   return (neuron0x1d9f8a0()*-0.747429);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5790() {
   return (neuron0x1d9fdb0()*1.0342);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db57d0() {
   return (neuron0x1d9e520()*-0.0185263);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5810() {
   return (neuron0x1da06c0()*0.636442);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5850() {
   return (neuron0x1da0b40()*0.113024);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db52e0() {
   return (neuron0x1da1410()*-0.289243);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5320() {
   return (neuron0x1da16e0()*-0.374208);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db59a0() {
   return (neuron0x1da1b60()*-0.196076);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db59e0() {
   return (neuron0x1da1fe0()*-0.183933);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5a20() {
   return (neuron0x1da2460()*-0.99291);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5a60() {
   return (neuron0x1da28e0()*-0.577147);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5aa0() {
   return (neuron0x1da2d60()*-0.30768);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5ae0() {
   return (neuron0x1da31e0()*-1.14269);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5b20() {
   return (neuron0x1da3660()*-0.649234);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5ea0() {
   return (neuron0x1d9c6a0()*0.127131);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5ee0() {
   return (neuron0x1d9ca10()*1.21968);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5f20() {
   return (neuron0x1d9ce90()*-0.405729);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5f60() {
   return (neuron0x1d9d310()*-0.0520473);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5fa0() {
   return (neuron0x1d9d820()*-0.492991);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5fe0() {
   return (neuron0x1d9dca0()*-0.781192);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6020() {
   return (neuron0x1d9e120()*-0.351225);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6060() {
   return (neuron0x1d9e730()*0.870427);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db60a0() {
   return (neuron0x1d9eb20()*-1.55472);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db60e0() {
   return (neuron0x1d9efa0()*-0.0899417);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6120() {
   return (neuron0x1d9f420()*-0.797779);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6160() {
   return (neuron0x1d9f8a0()*-0.131326);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db61a0() {
   return (neuron0x1d9fdb0()*-0.97267);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db61e0() {
   return (neuron0x1d9e520()*0.410191);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6220() {
   return (neuron0x1da06c0()*0.489585);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6260() {
   return (neuron0x1da0b40()*-0.0420871);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5cf0() {
   return (neuron0x1da1410()*0.18619);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db5d30() {
   return (neuron0x1da16e0()*0.476306);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db63b0() {
   return (neuron0x1da1b60()*0.70502);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db63f0() {
   return (neuron0x1da1fe0()*-0.247194);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6430() {
   return (neuron0x1da2460()*1.03713);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6470() {
   return (neuron0x1da28e0()*0.347921);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db64b0() {
   return (neuron0x1da2d60()*0.626692);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db64f0() {
   return (neuron0x1da31e0()*1.27034);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6530() {
   return (neuron0x1da3660()*0.816922);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db68b0() {
   return (neuron0x1d9c6a0()*0.249782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db68f0() {
   return (neuron0x1d9ca10()*-0.120256);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6930() {
   return (neuron0x1d9ce90()*-0.0214728);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6970() {
   return (neuron0x1d9d310()*-0.0668059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db69b0() {
   return (neuron0x1d9d820()*-0.14488);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db69f0() {
   return (neuron0x1d9dca0()*0.000884576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6a30() {
   return (neuron0x1d9e120()*-0.0106533);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6a70() {
   return (neuron0x1d9e730()*-0.043008);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6ab0() {
   return (neuron0x1d9eb20()*-0.0324909);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6af0() {
   return (neuron0x1d9efa0()*-0.137312);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6b30() {
   return (neuron0x1d9f420()*-0.318357);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6b70() {
   return (neuron0x1d9f8a0()*0.480201);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6bb0() {
   return (neuron0x1d9fdb0()*-0.218613);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6bf0() {
   return (neuron0x1d9e520()*-0.367529);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6c30() {
   return (neuron0x1da06c0()*-0.130978);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6c70() {
   return (neuron0x1da0b40()*-0.13908);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6700() {
   return (neuron0x1da1410()*0.488876);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6740() {
   return (neuron0x1da16e0()*-0.366497);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6dc0() {
   return (neuron0x1da1b60()*-0.121114);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6e00() {
   return (neuron0x1da1fe0()*0.524965);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6e40() {
   return (neuron0x1da2460()*0.0888874);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6e80() {
   return (neuron0x1da28e0()*-1.06585);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6ec0() {
   return (neuron0x1da2d60()*0.0981956);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6f00() {
   return (neuron0x1da31e0()*-0.238909);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db6f40() {
   return (neuron0x1da3660()*-0.3626);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db71a0() {
   return (neuron0x1da5570()*1.50109);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db71e0() {
   return (neuron0x1da0340()*0.145007);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7220() {
   return (neuron0x1da60e0()*-1.85738);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7260() {
   return (neuron0x1da6c00()*3.19584);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db72a0() {
   return (neuron0x1da7610()*-2.873);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db72e0() {
   return (neuron0x1da8020()*2.74381);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7320() {
   return (neuron0x1da5c10()*2.61677);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7360() {
   return (neuron0x1da9c50()*-1.9424);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db73a0() {
   return (neuron0x1daa660()*-0.0626625);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db73e0() {
   return (neuron0x1dab070()*-4.92724);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7420() {
   return (neuron0x1daba80()*-1.13273);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7460() {
   return (neuron0x1dac490()*-0.0752726);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db74a0() {
   return (neuron0x1dacea0()*-1.86204);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db74e0() {
   return (neuron0x1dad8b0()*-1.11672);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7520() {
   return (neuron0x1dae2c0()*3.20795);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7560() {
   return (neuron0x1daecd0()*1.98256);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c570() {
   return (neuron0x1da92f0()*1.59492);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d9c5b0() {
   return (neuron0x1db1f40()*-0.770618);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db76b0() {
   return (neuron0x1db2910()*0.42098);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db76f0() {
   return (neuron0x1db3320()*0.238824);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7730() {
   return (neuron0x1db3d30()*0.131201);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7770() {
   return (neuron0x1db4740()*-4.44745);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db77b0() {
   return (neuron0x1db5150()*-1.43038);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db77f0() {
   return (neuron0x1db5b60()*2.64959);
}

double nnFunc_25_25hi_1500ep__::synapse0x1db7830() {
   return (neuron0x1db6570()*-1.11457);
}

