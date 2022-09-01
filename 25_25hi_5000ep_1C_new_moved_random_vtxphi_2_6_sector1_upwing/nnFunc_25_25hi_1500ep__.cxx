#include "25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_upwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2401d80();
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
         return neuron0x2401d80();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x23e6320() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e6660() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e69a0() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e6ce0() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e7020() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x23e7490() {
   double input = 1.30354;
   input += synapse0x23d5630();
   input += synapse0x23e7740();
   input += synapse0x23e7780();
   input += synapse0x23e77c0();
   input += synapse0x23e7800();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e7490() {
   double input = input0x23e7490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e7840() {
   double input = -2.99202;
   input += synapse0x23e7b80();
   input += synapse0x23e7bc0();
   input += synapse0x23e7c00();
   input += synapse0x23e7c40();
   input += synapse0x23e7c80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e7840() {
   double input = input0x23e7840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e7cc0() {
   double input = 3.43734;
   input += synapse0x23e8000();
   input += synapse0x23e8040();
   input += synapse0x23e8080();
   input += synapse0x23e80c0();
   input += synapse0x23e8100();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e7cc0() {
   double input = input0x23e7cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e8140() {
   double input = -1.23465;
   input += synapse0x23e8480();
   input += synapse0x23e84c0();
   input += synapse0x226e310();
   input += synapse0x226e350();
   input += synapse0x23e8610();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e8140() {
   double input = input0x23e8140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e8650() {
   double input = 3.05613;
   input += synapse0x23e8990();
   input += synapse0x23e89d0();
   input += synapse0x23e8a10();
   input += synapse0x23e8a50();
   input += synapse0x23e8a90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e8650() {
   double input = input0x23e8650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e8ad0() {
   double input = 0.430366;
   input += synapse0x23e8e10();
   input += synapse0x23e8e50();
   input += synapse0x23e8e90();
   input += synapse0x23e8ed0();
   input += synapse0x23e8f10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e8ad0() {
   double input = input0x23e8ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e8f50() {
   double input = -0.28911;
   input += synapse0x23e9290();
   input += synapse0x23e92d0();
   input += synapse0x23e9310();
   input += synapse0x23e8500();
   input += synapse0x23e8540();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e8f50() {
   double input = input0x23e8f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e9560() {
   double input = 3.8909;
   input += synapse0x23e9810();
   input += synapse0x23e9850();
   input += synapse0x23e9890();
   input += synapse0x23e98d0();
   input += synapse0x23e9910();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e9560() {
   double input = input0x23e9560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e9950() {
   double input = -1.11001;
   input += synapse0x23e9c90();
   input += synapse0x23e9cd0();
   input += synapse0x23e9d10();
   input += synapse0x23e9d50();
   input += synapse0x23e9d90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e9950() {
   double input = input0x23e9950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e9dd0() {
   double input = 0.692791;
   input += synapse0x23ea110();
   input += synapse0x23ea150();
   input += synapse0x23ea190();
   input += synapse0x23ea1d0();
   input += synapse0x23ea210();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e9dd0() {
   double input = input0x23e9dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ea250() {
   double input = -1.0863;
   input += synapse0x23ea590();
   input += synapse0x23ea5d0();
   input += synapse0x23ea610();
   input += synapse0x23ea650();
   input += synapse0x23ea690();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ea250() {
   double input = input0x23ea250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ea6d0() {
   double input = 0.516676;
   input += synapse0x226e160();
   input += synapse0x226e1a0();
   input += synapse0x23eab20();
   input += synapse0x23eab60();
   input += synapse0x23eaba0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ea6d0() {
   double input = input0x23ea6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23eabe0() {
   double input = 0.0138263;
   input += synapse0x23eaf20();
   input += synapse0x23eaf60();
   input += synapse0x23eafa0();
   input += synapse0x23eafe0();
   input += synapse0x23eb020();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23eabe0() {
   double input = input0x23eabe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23e9350() {
   double input = 2.41678;
   input += synapse0x226e8e0();
   input += synapse0x23d55d0();
   input += synapse0x22eae20();
   input += synapse0x23e94e0();
   input += synapse0x23e9520();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23e9350() {
   double input = input0x23e9350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23eb500() {
   double input = 1.9823;
   input += synapse0x23eb840();
   input += synapse0x23eb880();
   input += synapse0x23eb8c0();
   input += synapse0x23eb900();
   input += synapse0x23eb940();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23eb500() {
   double input = input0x23eb500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23eb980() {
   double input = 0.839352;
   input += synapse0x23ebcc0();
   input += synapse0x23e6540();
   input += synapse0x23e6580();
   input += synapse0x23e6880();
   input += synapse0x23e68c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23eb980() {
   double input = input0x23eb980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ec250() {
   double input = -1.24273;
   input += synapse0x23ec3e0();
   input += synapse0x23ec420();
   input += synapse0x23ec460();
   input += synapse0x23ec4a0();
   input += synapse0x23ec4e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ec250() {
   double input = input0x23ec250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ec520() {
   double input = -2.13447;
   input += synapse0x23ec860();
   input += synapse0x23ec8a0();
   input += synapse0x23ec8e0();
   input += synapse0x23ec920();
   input += synapse0x23ec960();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ec520() {
   double input = input0x23ec520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ec9a0() {
   double input = 2.29086;
   input += synapse0x23ecce0();
   input += synapse0x23ecd20();
   input += synapse0x23ecd60();
   input += synapse0x23ecda0();
   input += synapse0x23ecde0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ec9a0() {
   double input = input0x23ec9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ece20() {
   double input = -0.0534532;
   input += synapse0x23ed160();
   input += synapse0x23ed1a0();
   input += synapse0x23ed1e0();
   input += synapse0x23ed220();
   input += synapse0x23ed260();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ece20() {
   double input = input0x23ece20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ed2a0() {
   double input = 10.6399;
   input += synapse0x23ed5e0();
   input += synapse0x23ed620();
   input += synapse0x23ed660();
   input += synapse0x23ed6a0();
   input += synapse0x23ed6e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ed2a0() {
   double input = input0x23ed2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ed720() {
   double input = -0.50222;
   input += synapse0x23eda60();
   input += synapse0x23edaa0();
   input += synapse0x23edae0();
   input += synapse0x23edb20();
   input += synapse0x23edb60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ed720() {
   double input = input0x23ed720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23edba0() {
   double input = 1.32767;
   input += synapse0x23edee0();
   input += synapse0x23edf20();
   input += synapse0x23edf60();
   input += synapse0x23edfa0();
   input += synapse0x23edfe0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23edba0() {
   double input = input0x23edba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ee020() {
   double input = 0.480728;
   input += synapse0x23ee360();
   input += synapse0x23ee3a0();
   input += synapse0x23ee3e0();
   input += synapse0x23ee420();
   input += synapse0x23ee460();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ee020() {
   double input = input0x23ee020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ee4a0() {
   double input = 0.87196;
   input += synapse0x23ee7e0();
   input += synapse0x23ee820();
   input += synapse0x23ee860();
   input += synapse0x23ee8a0();
   input += synapse0x23ee8e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ee4a0() {
   double input = input0x23ee4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f03b0() {
   double input = 0.236732;
   input += synapse0x23e83f0();
   input += synapse0x23e8430();
   input += synapse0x23e8900();
   input += synapse0x23e8940();
   input += synapse0x23e8d80();
   input += synapse0x23e8dc0();
   input += synapse0x23e9200();
   input += synapse0x23e9240();
   input += synapse0x23e9780();
   input += synapse0x23e97c0();
   input += synapse0x23e9c00();
   input += synapse0x23e9c40();
   input += synapse0x23ea080();
   input += synapse0x23ea0c0();
   input += synapse0x23ea500();
   input += synapse0x23ea540();
   input += synapse0x23ea980();
   input += synapse0x23ea9c0();
   input += synapse0x23eae90();
   input += synapse0x23eaed0();
   input += synapse0x23eb7b0();
   input += synapse0x23eb7f0();
   input += synapse0x23ebc30();
   input += synapse0x23ebc70();
   input += synapse0x23e7240();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f03b0() {
   double input = input0x23f03b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23eb170() {
   double input = -0.23382;
   input += synapse0x23eb300();
   input += synapse0x23eb340();
   input += synapse0x23eb380();
   input += synapse0x23eb3c0();
   input += synapse0x23eb400();
   input += synapse0x23eb440();
   input += synapse0x23eb480();
   input += synapse0x23eb4c0();
   input += synapse0x23e7280();
   input += synapse0x23ed550();
   input += synapse0x23ed590();
   input += synapse0x23ed9d0();
   input += synapse0x23eda10();
   input += synapse0x23ede50();
   input += synapse0x23ede90();
   input += synapse0x23ee2d0();
   input += synapse0x23ee310();
   input += synapse0x23ee750();
   input += synapse0x23ee790();
   input += synapse0x23e76b0();
   input += synapse0x23e76f0();
   input += synapse0x23ec7d0();
   input += synapse0x23ec810();
   input += synapse0x23f0e60();
   input += synapse0x23f0ea0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23eb170() {
   double input = input0x23eb170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f0ee0() {
   double input = -0.254882;
   input += synapse0x23eaa10();
   input += synapse0x23eaa50();
   input += synapse0x23eaa90();
   input += synapse0x23eaad0();
   input += synapse0x23f1430();
   input += synapse0x23f1470();
   input += synapse0x23f14b0();
   input += synapse0x23f14f0();
   input += synapse0x23f1530();
   input += synapse0x23f1570();
   input += synapse0x23f15b0();
   input += synapse0x23f15f0();
   input += synapse0x23f1630();
   input += synapse0x23f1670();
   input += synapse0x23f16b0();
   input += synapse0x23f16f0();
   input += synapse0x23f1070();
   input += synapse0x23f10b0();
   input += synapse0x23f1840();
   input += synapse0x23f1880();
   input += synapse0x23f18c0();
   input += synapse0x23f1900();
   input += synapse0x23f1940();
   input += synapse0x23f1980();
   input += synapse0x23f19c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f0ee0() {
   double input = input0x23f0ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f1a00() {
   double input = -0.163145;
   input += synapse0x23f1d40();
   input += synapse0x23f1d80();
   input += synapse0x23f1dc0();
   input += synapse0x23f1e00();
   input += synapse0x23f1e40();
   input += synapse0x23f1e80();
   input += synapse0x23f1ec0();
   input += synapse0x23f1f00();
   input += synapse0x23f1f40();
   input += synapse0x23f1f80();
   input += synapse0x23f1fc0();
   input += synapse0x23f2000();
   input += synapse0x23f2040();
   input += synapse0x23f2080();
   input += synapse0x23f20c0();
   input += synapse0x23f2100();
   input += synapse0x23f1b90();
   input += synapse0x23f1bd0();
   input += synapse0x23f2250();
   input += synapse0x23f2290();
   input += synapse0x23f22d0();
   input += synapse0x23f2310();
   input += synapse0x23f2350();
   input += synapse0x23f2390();
   input += synapse0x23f23d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f1a00() {
   double input = input0x23f1a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f2410() {
   double input = -0.593948;
   input += synapse0x23f2750();
   input += synapse0x23f2790();
   input += synapse0x23f27d0();
   input += synapse0x23f2810();
   input += synapse0x23f2850();
   input += synapse0x23f2890();
   input += synapse0x23f28d0();
   input += synapse0x23f2910();
   input += synapse0x23f2950();
   input += synapse0x23f2990();
   input += synapse0x23f29d0();
   input += synapse0x23f2a10();
   input += synapse0x23f2a50();
   input += synapse0x23f2a90();
   input += synapse0x23f2ad0();
   input += synapse0x23f2b10();
   input += synapse0x23f25a0();
   input += synapse0x23f25e0();
   input += synapse0x23f2c60();
   input += synapse0x23f2ca0();
   input += synapse0x23f2ce0();
   input += synapse0x23f2d20();
   input += synapse0x23f2d60();
   input += synapse0x23f2da0();
   input += synapse0x23f2de0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f2410() {
   double input = input0x23f2410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f2e20() {
   double input = -0.353147;
   input += synapse0x23f3160();
   input += synapse0x23f31a0();
   input += synapse0x23f31e0();
   input += synapse0x23f3220();
   input += synapse0x23f3260();
   input += synapse0x23f32a0();
   input += synapse0x23f32e0();
   input += synapse0x23f0540();
   input += synapse0x23f0580();
   input += synapse0x23f05c0();
   input += synapse0x23f0600();
   input += synapse0x23f0640();
   input += synapse0x23f0680();
   input += synapse0x23f06c0();
   input += synapse0x23f0700();
   input += synapse0x23f0740();
   input += synapse0x23f2fb0();
   input += synapse0x23f2ff0();
   input += synapse0x23f0890();
   input += synapse0x23f08d0();
   input += synapse0x23f0910();
   input += synapse0x23f0950();
   input += synapse0x23f0990();
   input += synapse0x23f09d0();
   input += synapse0x23f0a10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f2e20() {
   double input = input0x23f2e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f0a50() {
   double input = 0.348726;
   input += synapse0x23f0d00();
   input += synapse0x23f43c0();
   input += synapse0x23f4400();
   input += synapse0x23f4440();
   input += synapse0x23f4480();
   input += synapse0x23f44c0();
   input += synapse0x23f4500();
   input += synapse0x23f4540();
   input += synapse0x23f4580();
   input += synapse0x23f45c0();
   input += synapse0x23f4600();
   input += synapse0x23f4640();
   input += synapse0x23f4680();
   input += synapse0x23f46c0();
   input += synapse0x23f4700();
   input += synapse0x23f4740();
   input += synapse0x23f0be0();
   input += synapse0x23f0c20();
   input += synapse0x23f4890();
   input += synapse0x23f48d0();
   input += synapse0x23f4910();
   input += synapse0x23f4950();
   input += synapse0x23f4990();
   input += synapse0x23f49d0();
   input += synapse0x23f4a10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f0a50() {
   double input = input0x23f0a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f4a50() {
   double input = -0.291074;
   input += synapse0x23f4d90();
   input += synapse0x23f4dd0();
   input += synapse0x23f4e10();
   input += synapse0x23f4e50();
   input += synapse0x23f4e90();
   input += synapse0x23f4ed0();
   input += synapse0x23f4f10();
   input += synapse0x23f4f50();
   input += synapse0x23f4f90();
   input += synapse0x23f4fd0();
   input += synapse0x23f5010();
   input += synapse0x23f5050();
   input += synapse0x23f5090();
   input += synapse0x23f50d0();
   input += synapse0x23f5110();
   input += synapse0x23f5150();
   input += synapse0x23f4be0();
   input += synapse0x23f4c20();
   input += synapse0x23f52a0();
   input += synapse0x23f52e0();
   input += synapse0x23f5320();
   input += synapse0x23f5360();
   input += synapse0x23f53a0();
   input += synapse0x23f53e0();
   input += synapse0x23f5420();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f4a50() {
   double input = input0x23f4a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f5460() {
   double input = -0.644109;
   input += synapse0x23f57a0();
   input += synapse0x23f57e0();
   input += synapse0x23f5820();
   input += synapse0x23f5860();
   input += synapse0x23f58a0();
   input += synapse0x23f58e0();
   input += synapse0x23f5920();
   input += synapse0x23f5960();
   input += synapse0x23f59a0();
   input += synapse0x23f59e0();
   input += synapse0x23f5a20();
   input += synapse0x23f5a60();
   input += synapse0x23f5aa0();
   input += synapse0x23f5ae0();
   input += synapse0x23f5b20();
   input += synapse0x23f5b60();
   input += synapse0x23f55f0();
   input += synapse0x23f5630();
   input += synapse0x23f5cb0();
   input += synapse0x23f5cf0();
   input += synapse0x23f5d30();
   input += synapse0x23f5d70();
   input += synapse0x23f5db0();
   input += synapse0x23f5df0();
   input += synapse0x23f5e30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f5460() {
   double input = input0x23f5460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f5e70() {
   double input = 0.280609;
   input += synapse0x23f61b0();
   input += synapse0x23f61f0();
   input += synapse0x23f6230();
   input += synapse0x23f6270();
   input += synapse0x23f62b0();
   input += synapse0x23f62f0();
   input += synapse0x23f6330();
   input += synapse0x23f6370();
   input += synapse0x23f63b0();
   input += synapse0x23f63f0();
   input += synapse0x23f6430();
   input += synapse0x23f6470();
   input += synapse0x23f64b0();
   input += synapse0x23f64f0();
   input += synapse0x23f6530();
   input += synapse0x23f6570();
   input += synapse0x23f6000();
   input += synapse0x23f6040();
   input += synapse0x23f66c0();
   input += synapse0x23f6700();
   input += synapse0x23f6740();
   input += synapse0x23f6780();
   input += synapse0x23f67c0();
   input += synapse0x23f6800();
   input += synapse0x23f6840();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f5e70() {
   double input = input0x23f5e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f6880() {
   double input = -0.105676;
   input += synapse0x23f6bc0();
   input += synapse0x23f6c00();
   input += synapse0x23f6c40();
   input += synapse0x23f6c80();
   input += synapse0x23f6cc0();
   input += synapse0x23f6d00();
   input += synapse0x23f6d40();
   input += synapse0x23f6d80();
   input += synapse0x23f6dc0();
   input += synapse0x23f6e00();
   input += synapse0x23f6e40();
   input += synapse0x23f6e80();
   input += synapse0x23f6ec0();
   input += synapse0x23f6f00();
   input += synapse0x23f6f40();
   input += synapse0x23f6f80();
   input += synapse0x23f6a10();
   input += synapse0x23f6a50();
   input += synapse0x23f70d0();
   input += synapse0x23f7110();
   input += synapse0x23f7150();
   input += synapse0x23f7190();
   input += synapse0x23f71d0();
   input += synapse0x23f7210();
   input += synapse0x23f7250();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f6880() {
   double input = input0x23f6880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f7290() {
   double input = 0.0865857;
   input += synapse0x23f75d0();
   input += synapse0x23f7610();
   input += synapse0x23f7650();
   input += synapse0x23f7690();
   input += synapse0x23f76d0();
   input += synapse0x23f7710();
   input += synapse0x23f7750();
   input += synapse0x23f7790();
   input += synapse0x23f77d0();
   input += synapse0x23f7810();
   input += synapse0x23f7850();
   input += synapse0x23f7890();
   input += synapse0x23f78d0();
   input += synapse0x23f7910();
   input += synapse0x23f7950();
   input += synapse0x23f7990();
   input += synapse0x23f7420();
   input += synapse0x23f7460();
   input += synapse0x23f7ae0();
   input += synapse0x23f7b20();
   input += synapse0x23f7b60();
   input += synapse0x23f7ba0();
   input += synapse0x23f7be0();
   input += synapse0x23f7c20();
   input += synapse0x23f7c60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f7290() {
   double input = input0x23f7290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f7ca0() {
   double input = 0.33276;
   input += synapse0x23f7fe0();
   input += synapse0x23f8020();
   input += synapse0x23f8060();
   input += synapse0x23f80a0();
   input += synapse0x23f80e0();
   input += synapse0x23f8120();
   input += synapse0x23f8160();
   input += synapse0x23f81a0();
   input += synapse0x23f81e0();
   input += synapse0x23f8220();
   input += synapse0x23f8260();
   input += synapse0x23f82a0();
   input += synapse0x23f82e0();
   input += synapse0x23f8320();
   input += synapse0x23f8360();
   input += synapse0x23f83a0();
   input += synapse0x23f7e30();
   input += synapse0x23f7e70();
   input += synapse0x23f84f0();
   input += synapse0x23f8530();
   input += synapse0x23f8570();
   input += synapse0x23f85b0();
   input += synapse0x23f85f0();
   input += synapse0x23f8630();
   input += synapse0x23f8670();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f7ca0() {
   double input = input0x23f7ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f86b0() {
   double input = 0.0405027;
   input += synapse0x23f89f0();
   input += synapse0x23f8a30();
   input += synapse0x23f8a70();
   input += synapse0x23f8ab0();
   input += synapse0x23f8af0();
   input += synapse0x23f8b30();
   input += synapse0x23f8b70();
   input += synapse0x23f8bb0();
   input += synapse0x23f8bf0();
   input += synapse0x23f8c30();
   input += synapse0x23f8c70();
   input += synapse0x23f8cb0();
   input += synapse0x23f8cf0();
   input += synapse0x23f8d30();
   input += synapse0x23f8d70();
   input += synapse0x23f8db0();
   input += synapse0x23f8840();
   input += synapse0x23f8880();
   input += synapse0x23f8f00();
   input += synapse0x23f8f40();
   input += synapse0x23f8f80();
   input += synapse0x23f8fc0();
   input += synapse0x23f9000();
   input += synapse0x23f9040();
   input += synapse0x23f9080();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f86b0() {
   double input = input0x23f86b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f90c0() {
   double input = -0.339088;
   input += synapse0x23f9400();
   input += synapse0x23f9440();
   input += synapse0x23f9480();
   input += synapse0x23f94c0();
   input += synapse0x23f9500();
   input += synapse0x23f9540();
   input += synapse0x23f9580();
   input += synapse0x23f95c0();
   input += synapse0x23f9600();
   input += synapse0x23f9640();
   input += synapse0x23f9680();
   input += synapse0x23f96c0();
   input += synapse0x23f9700();
   input += synapse0x23f9740();
   input += synapse0x23f9780();
   input += synapse0x23f97c0();
   input += synapse0x23f9250();
   input += synapse0x23f9290();
   input += synapse0x23f9910();
   input += synapse0x23f9950();
   input += synapse0x23f9990();
   input += synapse0x23f99d0();
   input += synapse0x23f9a10();
   input += synapse0x23f9a50();
   input += synapse0x23f9a90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f90c0() {
   double input = input0x23f90c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f9ad0() {
   double input = 0.0776567;
   input += synapse0x23f9e10();
   input += synapse0x23e7620();
   input += synapse0x23e7660();
   input += synapse0x23e7a60();
   input += synapse0x23e7aa0();
   input += synapse0x23e7ee0();
   input += synapse0x23e7f20();
   input += synapse0x23e8360();
   input += synapse0x23e83a0();
   input += synapse0x23e8870();
   input += synapse0x23e88b0();
   input += synapse0x23e8cf0();
   input += synapse0x23e8d30();
   input += synapse0x23e9170();
   input += synapse0x23e91b0();
   input += synapse0x23e96f0();
   input += synapse0x23e9730();
   input += synapse0x23e9b70();
   input += synapse0x23e9bb0();
   input += synapse0x23e9ff0();
   input += synapse0x23ea030();
   input += synapse0x23ea470();
   input += synapse0x23ea4b0();
   input += synapse0x23ea8f0();
   input += synapse0x23ea930();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f9ad0() {
   double input = input0x23f9ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23f40f0() {
   double input = -0.0140691;
   input += synapse0x23f4280();
   input += synapse0x23f42c0();
   input += synapse0x23ebba0();
   input += synapse0x23ebbe0();
   input += synapse0x23f9c60();
   input += synapse0x23f9ca0();
   input += synapse0x23e6f00();
   input += synapse0x23e6f40();
   input += synapse0x23ec740();
   input += synapse0x23ec780();
   input += synapse0x23ecbc0();
   input += synapse0x23ecc00();
   input += synapse0x23ed040();
   input += synapse0x23ed080();
   input += synapse0x23ed4c0();
   input += synapse0x23ed500();
   input += synapse0x23ed940();
   input += synapse0x23ed980();
   input += synapse0x23eddc0();
   input += synapse0x23ede00();
   input += synapse0x23ee240();
   input += synapse0x23ee280();
   input += synapse0x23ee6c0();
   input += synapse0x23ee700();
   input += synapse0x23eae00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23f40f0() {
   double input = input0x23f40f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23fcd40() {
   double input = -0.872189;
   input += synapse0x23eae40();
   input += synapse0x23fd080();
   input += synapse0x23fd0c0();
   input += synapse0x23fd100();
   input += synapse0x23fd140();
   input += synapse0x23fd180();
   input += synapse0x23fd1c0();
   input += synapse0x23fd200();
   input += synapse0x23fd240();
   input += synapse0x23fd280();
   input += synapse0x23fd2c0();
   input += synapse0x23fd300();
   input += synapse0x23fd340();
   input += synapse0x23fd380();
   input += synapse0x23fd3c0();
   input += synapse0x23fd400();
   input += synapse0x23fced0();
   input += synapse0x23fcf10();
   input += synapse0x23fd550();
   input += synapse0x23fd590();
   input += synapse0x23fd5d0();
   input += synapse0x23fd610();
   input += synapse0x23fd650();
   input += synapse0x23fd690();
   input += synapse0x23fd6d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23fcd40() {
   double input = input0x23fcd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23fd710() {
   double input = 0.254694;
   input += synapse0x23fda50();
   input += synapse0x23fda90();
   input += synapse0x23fdad0();
   input += synapse0x23fdb10();
   input += synapse0x23fdb50();
   input += synapse0x23fdb90();
   input += synapse0x23fdbd0();
   input += synapse0x23fdc10();
   input += synapse0x23fdc50();
   input += synapse0x23fdc90();
   input += synapse0x23fdcd0();
   input += synapse0x23fdd10();
   input += synapse0x23fdd50();
   input += synapse0x23fdd90();
   input += synapse0x23fddd0();
   input += synapse0x23fde10();
   input += synapse0x23fd8a0();
   input += synapse0x23fd8e0();
   input += synapse0x23fdf60();
   input += synapse0x23fdfa0();
   input += synapse0x23fdfe0();
   input += synapse0x23fe020();
   input += synapse0x23fe060();
   input += synapse0x23fe0a0();
   input += synapse0x23fe0e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23fd710() {
   double input = input0x23fd710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23fe120() {
   double input = 0.0567176;
   input += synapse0x23fe460();
   input += synapse0x23fe4a0();
   input += synapse0x23fe4e0();
   input += synapse0x23fe520();
   input += synapse0x23fe560();
   input += synapse0x23fe5a0();
   input += synapse0x23fe5e0();
   input += synapse0x23fe620();
   input += synapse0x23fe660();
   input += synapse0x23fe6a0();
   input += synapse0x23fe6e0();
   input += synapse0x23fe720();
   input += synapse0x23fe760();
   input += synapse0x23fe7a0();
   input += synapse0x23fe7e0();
   input += synapse0x23fe820();
   input += synapse0x23fe2b0();
   input += synapse0x23fe2f0();
   input += synapse0x23fe970();
   input += synapse0x23fe9b0();
   input += synapse0x23fe9f0();
   input += synapse0x23fea30();
   input += synapse0x23fea70();
   input += synapse0x23feab0();
   input += synapse0x23feaf0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23fe120() {
   double input = input0x23fe120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23feb30() {
   double input = 0.350902;
   input += synapse0x23fee70();
   input += synapse0x23feeb0();
   input += synapse0x23feef0();
   input += synapse0x23fef30();
   input += synapse0x23fef70();
   input += synapse0x23fefb0();
   input += synapse0x23feff0();
   input += synapse0x23ff030();
   input += synapse0x23ff070();
   input += synapse0x23ff0b0();
   input += synapse0x23ff0f0();
   input += synapse0x23ff130();
   input += synapse0x23ff170();
   input += synapse0x23ff1b0();
   input += synapse0x23ff1f0();
   input += synapse0x23ff230();
   input += synapse0x23fecc0();
   input += synapse0x23fed00();
   input += synapse0x23ff380();
   input += synapse0x23ff3c0();
   input += synapse0x23ff400();
   input += synapse0x23ff440();
   input += synapse0x23ff480();
   input += synapse0x23ff4c0();
   input += synapse0x23ff500();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23feb30() {
   double input = input0x23feb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23ff540() {
   double input = 0.067919;
   input += synapse0x23ff880();
   input += synapse0x23ff8c0();
   input += synapse0x23ff900();
   input += synapse0x23ff940();
   input += synapse0x23ff980();
   input += synapse0x23ff9c0();
   input += synapse0x23ffa00();
   input += synapse0x23ffa40();
   input += synapse0x23ffa80();
   input += synapse0x23ffac0();
   input += synapse0x23ffb00();
   input += synapse0x23ffb40();
   input += synapse0x23ffb80();
   input += synapse0x23ffbc0();
   input += synapse0x23ffc00();
   input += synapse0x23ffc40();
   input += synapse0x23ff6d0();
   input += synapse0x23ff710();
   input += synapse0x23ffd90();
   input += synapse0x23ffdd0();
   input += synapse0x23ffe10();
   input += synapse0x23ffe50();
   input += synapse0x23ffe90();
   input += synapse0x23ffed0();
   input += synapse0x23fff10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23ff540() {
   double input = input0x23ff540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x23fff50() {
   double input = 0.542447;
   input += synapse0x2400290();
   input += synapse0x24002d0();
   input += synapse0x2400310();
   input += synapse0x2400350();
   input += synapse0x2400390();
   input += synapse0x24003d0();
   input += synapse0x2400410();
   input += synapse0x2400450();
   input += synapse0x2400490();
   input += synapse0x24004d0();
   input += synapse0x2400510();
   input += synapse0x2400550();
   input += synapse0x2400590();
   input += synapse0x24005d0();
   input += synapse0x2400610();
   input += synapse0x2400650();
   input += synapse0x24000e0();
   input += synapse0x2400120();
   input += synapse0x24007a0();
   input += synapse0x24007e0();
   input += synapse0x2400820();
   input += synapse0x2400860();
   input += synapse0x24008a0();
   input += synapse0x24008e0();
   input += synapse0x2400920();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x23fff50() {
   double input = input0x23fff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2400960() {
   double input = 0.253928;
   input += synapse0x2400ca0();
   input += synapse0x2400ce0();
   input += synapse0x2400d20();
   input += synapse0x2400d60();
   input += synapse0x2400da0();
   input += synapse0x2400de0();
   input += synapse0x2400e20();
   input += synapse0x2400e60();
   input += synapse0x2400ea0();
   input += synapse0x2400ee0();
   input += synapse0x2400f20();
   input += synapse0x2400f60();
   input += synapse0x2400fa0();
   input += synapse0x2400fe0();
   input += synapse0x2401020();
   input += synapse0x2401060();
   input += synapse0x2400af0();
   input += synapse0x2400b30();
   input += synapse0x24011b0();
   input += synapse0x24011f0();
   input += synapse0x2401230();
   input += synapse0x2401270();
   input += synapse0x24012b0();
   input += synapse0x24012f0();
   input += synapse0x2401330();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2400960() {
   double input = input0x2400960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2401370() {
   double input = 0.215026;
   input += synapse0x24016b0();
   input += synapse0x24016f0();
   input += synapse0x2401730();
   input += synapse0x2401770();
   input += synapse0x24017b0();
   input += synapse0x24017f0();
   input += synapse0x2401830();
   input += synapse0x2401870();
   input += synapse0x24018b0();
   input += synapse0x24018f0();
   input += synapse0x2401930();
   input += synapse0x2401970();
   input += synapse0x24019b0();
   input += synapse0x24019f0();
   input += synapse0x2401a30();
   input += synapse0x2401a70();
   input += synapse0x2401500();
   input += synapse0x2401540();
   input += synapse0x2401bc0();
   input += synapse0x2401c00();
   input += synapse0x2401c40();
   input += synapse0x2401c80();
   input += synapse0x2401cc0();
   input += synapse0x2401d00();
   input += synapse0x2401d40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2401370() {
   double input = input0x2401370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2401d80() {
   double input = -0.721182;
   input += synapse0x2401fa0();
   input += synapse0x2401fe0();
   input += synapse0x2402020();
   input += synapse0x2402060();
   input += synapse0x24020a0();
   input += synapse0x24020e0();
   input += synapse0x2402120();
   input += synapse0x2402160();
   input += synapse0x24021a0();
   input += synapse0x24021e0();
   input += synapse0x2402220();
   input += synapse0x2402260();
   input += synapse0x24022a0();
   input += synapse0x24022e0();
   input += synapse0x2402320();
   input += synapse0x2402360();
   input += synapse0x23e7360();
   input += synapse0x23e73a0();
   input += synapse0x24024b0();
   input += synapse0x24024f0();
   input += synapse0x2402530();
   input += synapse0x2402570();
   input += synapse0x24025b0();
   input += synapse0x24025f0();
   input += synapse0x2402630();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2401d80() {
   double input = input0x2401d80();
   return (input * 3.67599)+119.091;
}

double nnFunc_25_25hi_1500ep__::synapse0x23d5630() {
   return (neuron0x23e6320()*-0.876176);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7740() {
   return (neuron0x23e6660()*-0.167393);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7780() {
   return (neuron0x23e69a0()*0.232014);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e77c0() {
   return (neuron0x23e6ce0()*0.860579);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7800() {
   return (neuron0x23e7020()*0.390658);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7b80() {
   return (neuron0x23e6320()*0.123888);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7bc0() {
   return (neuron0x23e6660()*0.650929);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7c00() {
   return (neuron0x23e69a0()*-0.100617);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7c40() {
   return (neuron0x23e6ce0()*0.342076);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7c80() {
   return (neuron0x23e7020()*-0.837497);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8000() {
   return (neuron0x23e6320()*0.159692);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8040() {
   return (neuron0x23e6660()*0.44199);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8080() {
   return (neuron0x23e69a0()*-0.035285);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e80c0() {
   return (neuron0x23e6ce0()*-1.49058);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8100() {
   return (neuron0x23e7020()*0.790419);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8480() {
   return (neuron0x23e6320()*0.251193);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e84c0() {
   return (neuron0x23e6660()*0.306344);
}

double nnFunc_25_25hi_1500ep__::synapse0x226e310() {
   return (neuron0x23e69a0()*0.00139311);
}

double nnFunc_25_25hi_1500ep__::synapse0x226e350() {
   return (neuron0x23e6ce0()*2.66267);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8610() {
   return (neuron0x23e7020()*-0.373542);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8990() {
   return (neuron0x23e6320()*0.294498);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e89d0() {
   return (neuron0x23e6660()*-1.57347);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8a10() {
   return (neuron0x23e69a0()*0.0643763);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8a50() {
   return (neuron0x23e6ce0()*-4.46124);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8a90() {
   return (neuron0x23e7020()*2.22244);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8e10() {
   return (neuron0x23e6320()*-0.421828);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8e50() {
   return (neuron0x23e6660()*-0.297194);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8e90() {
   return (neuron0x23e69a0()*-0.267515);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8ed0() {
   return (neuron0x23e6ce0()*-4.35995);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8f10() {
   return (neuron0x23e7020()*0.965239);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9290() {
   return (neuron0x23e6320()*1.19296);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e92d0() {
   return (neuron0x23e6660()*-0.284111);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9310() {
   return (neuron0x23e69a0()*-0.640907);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8500() {
   return (neuron0x23e6ce0()*-1.28893);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8540() {
   return (neuron0x23e7020()*-0.280157);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9810() {
   return (neuron0x23e6320()*-0.0757113);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9850() {
   return (neuron0x23e6660()*-0.213959);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9890() {
   return (neuron0x23e69a0()*0.0338163);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e98d0() {
   return (neuron0x23e6ce0()*-2.26385);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9910() {
   return (neuron0x23e7020()*0.807478);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9c90() {
   return (neuron0x23e6320()*0.136809);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9cd0() {
   return (neuron0x23e6660()*0.0584029);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9d10() {
   return (neuron0x23e69a0()*-0.0132537);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9d50() {
   return (neuron0x23e6ce0()*0.896409);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9d90() {
   return (neuron0x23e7020()*-1.04922);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea110() {
   return (neuron0x23e6320()*0.240039);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea150() {
   return (neuron0x23e6660()*1.0371);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea190() {
   return (neuron0x23e69a0()*-0.118583);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea1d0() {
   return (neuron0x23e6ce0()*1.32351);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea210() {
   return (neuron0x23e7020()*-0.0399189);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea590() {
   return (neuron0x23e6320()*-3.11038);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea5d0() {
   return (neuron0x23e6660()*-0.172886);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea610() {
   return (neuron0x23e69a0()*-0.820181);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea650() {
   return (neuron0x23e6ce0()*4.47834);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea690() {
   return (neuron0x23e7020()*-0.381833);
}

double nnFunc_25_25hi_1500ep__::synapse0x226e160() {
   return (neuron0x23e6320()*-0.860991);
}

double nnFunc_25_25hi_1500ep__::synapse0x226e1a0() {
   return (neuron0x23e6660()*0.741755);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eab20() {
   return (neuron0x23e69a0()*0.591247);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eab60() {
   return (neuron0x23e6ce0()*0.501625);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaba0() {
   return (neuron0x23e7020()*0.490456);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaf20() {
   return (neuron0x23e6320()*-1.11677);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaf60() {
   return (neuron0x23e6660()*-3.40457);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eafa0() {
   return (neuron0x23e69a0()*0.0471186);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eafe0() {
   return (neuron0x23e6ce0()*0.493828);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb020() {
   return (neuron0x23e7020()*-1.16615);
}

double nnFunc_25_25hi_1500ep__::synapse0x226e8e0() {
   return (neuron0x23e6320()*-0.0604458);
}

double nnFunc_25_25hi_1500ep__::synapse0x23d55d0() {
   return (neuron0x23e6660()*0.262167);
}

double nnFunc_25_25hi_1500ep__::synapse0x22eae20() {
   return (neuron0x23e69a0()*0.0416584);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e94e0() {
   return (neuron0x23e6ce0()*-3.9158);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9520() {
   return (neuron0x23e7020()*2.1312);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb840() {
   return (neuron0x23e6320()*-0.240405);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb880() {
   return (neuron0x23e6660()*-0.359158);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb8c0() {
   return (neuron0x23e69a0()*-0.0249671);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb900() {
   return (neuron0x23e6ce0()*-3.05148);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb940() {
   return (neuron0x23e7020()*0.856885);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ebcc0() {
   return (neuron0x23e6320()*-0.0694202);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e6540() {
   return (neuron0x23e6660()*-0.318713);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e6580() {
   return (neuron0x23e69a0()*-0.0250849);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e6880() {
   return (neuron0x23e6ce0()*-1.6602);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e68c0() {
   return (neuron0x23e7020()*-0.413923);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec3e0() {
   return (neuron0x23e6320()*0.19658);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec420() {
   return (neuron0x23e6660()*0.331441);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec460() {
   return (neuron0x23e69a0()*0.0743225);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec4a0() {
   return (neuron0x23e6ce0()*2.71856);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec4e0() {
   return (neuron0x23e7020()*-0.123689);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec860() {
   return (neuron0x23e6320()*-0.296208);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec8a0() {
   return (neuron0x23e6660()*-0.307085);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec8e0() {
   return (neuron0x23e69a0()*0.0177341);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec920() {
   return (neuron0x23e6ce0()*-0.274891);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec960() {
   return (neuron0x23e7020()*-1.41188);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecce0() {
   return (neuron0x23e6320()*0.0386436);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecd20() {
   return (neuron0x23e6660()*0.570939);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecd60() {
   return (neuron0x23e69a0()*-0.100392);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecda0() {
   return (neuron0x23e6ce0()*-1.71723);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecde0() {
   return (neuron0x23e7020()*0.248182);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed160() {
   return (neuron0x23e6320()*-8.97048);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed1a0() {
   return (neuron0x23e6660()*-0.18534);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed1e0() {
   return (neuron0x23e69a0()*3.54403);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed220() {
   return (neuron0x23e6ce0()*1.31947);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed260() {
   return (neuron0x23e7020()*0.432564);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed5e0() {
   return (neuron0x23e6320()*0.0317292);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed620() {
   return (neuron0x23e6660()*0.130853);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed660() {
   return (neuron0x23e69a0()*0.0143906);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed6a0() {
   return (neuron0x23e6ce0()*-5.76702);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed6e0() {
   return (neuron0x23e7020()*4.40536);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eda60() {
   return (neuron0x23e6320()*7.45304);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edaa0() {
   return (neuron0x23e6660()*-0.425804);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edae0() {
   return (neuron0x23e69a0()*-3.30281);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edb20() {
   return (neuron0x23e6ce0()*-0.660423);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edb60() {
   return (neuron0x23e7020()*0.124261);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edee0() {
   return (neuron0x23e6320()*-2.31639);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edf20() {
   return (neuron0x23e6660()*0.79689);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edf60() {
   return (neuron0x23e69a0()*1.3756);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edfa0() {
   return (neuron0x23e6ce0()*3.0052);
}

double nnFunc_25_25hi_1500ep__::synapse0x23edfe0() {
   return (neuron0x23e7020()*1.09619);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee360() {
   return (neuron0x23e6320()*-1.94106);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee3a0() {
   return (neuron0x23e6660()*0.864718);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee3e0() {
   return (neuron0x23e69a0()*0.954854);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee420() {
   return (neuron0x23e6ce0()*1.18147);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee460() {
   return (neuron0x23e7020()*0.892516);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee7e0() {
   return (neuron0x23e6320()*-0.123639);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee820() {
   return (neuron0x23e6660()*0.27345);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee860() {
   return (neuron0x23e69a0()*0.278082);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee8a0() {
   return (neuron0x23e6ce0()*1.48448);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee8e0() {
   return (neuron0x23e7020()*0.459936);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e83f0() {
   return (neuron0x23e7490()*0.689789);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8430() {
   return (neuron0x23e7840()*-1.1346);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8900() {
   return (neuron0x23e7cc0()*1.20702);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8940() {
   return (neuron0x23e8140()*-0.878895);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8d80() {
   return (neuron0x23e8650()*2.03266);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8dc0() {
   return (neuron0x23e8ad0()*1.72785);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9200() {
   return (neuron0x23e8f50()*0.254053);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9240() {
   return (neuron0x23e9560()*1.52159);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9780() {
   return (neuron0x23e9950()*0.804527);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e97c0() {
   return (neuron0x23e9dd0()*0.388875);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9c00() {
   return (neuron0x23ea250()*-1.58944);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9c40() {
   return (neuron0x23ea6d0()*-1.23586);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea080() {
   return (neuron0x23eabe0()*-0.298057);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea0c0() {
   return (neuron0x23e9350()*2.13483);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea500() {
   return (neuron0x23eb500()*2.59538);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea540() {
   return (neuron0x23eb980()*0.703087);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea980() {
   return (neuron0x23ec250()*-1.49123);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea9c0() {
   return (neuron0x23ec520()*-0.650037);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eae90() {
   return (neuron0x23ec9a0()*1.22042);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaed0() {
   return (neuron0x23ece20()*-0.0884117);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb7b0() {
   return (neuron0x23ed2a0()*0.922826);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb7f0() {
   return (neuron0x23ed720()*-0.110167);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ebc30() {
   return (neuron0x23edba0()*-0.427832);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ebc70() {
   return (neuron0x23ee020()*-0.881523);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7240() {
   return (neuron0x23ee4a0()*0.14085);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb300() {
   return (neuron0x23e7490()*-0.262664);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb340() {
   return (neuron0x23e7840()*0.560248);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb380() {
   return (neuron0x23e7cc0()*0.655536);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb3c0() {
   return (neuron0x23e8140()*-0.304874);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb400() {
   return (neuron0x23e8650()*-0.304657);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb440() {
   return (neuron0x23e8ad0()*-0.189614);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb480() {
   return (neuron0x23e8f50()*0.0395728);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eb4c0() {
   return (neuron0x23e9560()*-0.812159);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7280() {
   return (neuron0x23e9950()*-0.982715);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed550() {
   return (neuron0x23e9dd0()*0.0787938);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed590() {
   return (neuron0x23ea250()*0.230876);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed9d0() {
   return (neuron0x23ea6d0()*-0.689842);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eda10() {
   return (neuron0x23eabe0()*0.327083);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ede50() {
   return (neuron0x23e9350()*-0.237673);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ede90() {
   return (neuron0x23eb500()*-0.202276);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee2d0() {
   return (neuron0x23eb980()*-0.271187);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee310() {
   return (neuron0x23ec250()*0.342654);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee750() {
   return (neuron0x23ec520()*-0.00484473);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee790() {
   return (neuron0x23ec9a0()*-0.267094);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e76b0() {
   return (neuron0x23ece20()*0.3111);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e76f0() {
   return (neuron0x23ed2a0()*1.60838);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec7d0() {
   return (neuron0x23ed720()*-0.328201);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec810() {
   return (neuron0x23edba0()*-0.135951);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0e60() {
   return (neuron0x23ee020()*-0.373358);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0ea0() {
   return (neuron0x23ee4a0()*-0.43286);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaa10() {
   return (neuron0x23e7490()*-0.15898);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaa50() {
   return (neuron0x23e7840()*-0.282069);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaa90() {
   return (neuron0x23e7cc0()*0.297676);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eaad0() {
   return (neuron0x23e8140()*-0.532578);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1430() {
   return (neuron0x23e8650()*0.517998);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1470() {
   return (neuron0x23e8ad0()*0.249989);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f14b0() {
   return (neuron0x23e8f50()*-0.0377273);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f14f0() {
   return (neuron0x23e9560()*0.0199438);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1530() {
   return (neuron0x23e9950()*-0.388285);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1570() {
   return (neuron0x23e9dd0()*-0.281352);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f15b0() {
   return (neuron0x23ea250()*-0.448183);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f15f0() {
   return (neuron0x23ea6d0()*-0.221631);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1630() {
   return (neuron0x23eabe0()*0.758708);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1670() {
   return (neuron0x23e9350()*0.441668);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f16b0() {
   return (neuron0x23eb500()*0.0487805);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f16f0() {
   return (neuron0x23eb980()*0.536747);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1070() {
   return (neuron0x23ec250()*-0.545463);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f10b0() {
   return (neuron0x23ec520()*-0.605768);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1840() {
   return (neuron0x23ec9a0()*0.397216);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1880() {
   return (neuron0x23ece20()*-0.352267);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f18c0() {
   return (neuron0x23ed2a0()*2.0147);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1900() {
   return (neuron0x23ed720()*-0.150134);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1940() {
   return (neuron0x23edba0()*-0.204672);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1980() {
   return (neuron0x23ee020()*-0.0565974);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f19c0() {
   return (neuron0x23ee4a0()*0.548572);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1d40() {
   return (neuron0x23e7490()*0.079652);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1d80() {
   return (neuron0x23e7840()*-0.682216);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1dc0() {
   return (neuron0x23e7cc0()*-0.139627);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1e00() {
   return (neuron0x23e8140()*-0.500202);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1e40() {
   return (neuron0x23e8650()*-0.37887);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1e80() {
   return (neuron0x23e8ad0()*-0.0733199);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1ec0() {
   return (neuron0x23e8f50()*0.136168);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1f00() {
   return (neuron0x23e9560()*-0.0651947);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1f40() {
   return (neuron0x23e9950()*0.231752);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1f80() {
   return (neuron0x23e9dd0()*-0.153549);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1fc0() {
   return (neuron0x23ea250()*-0.574709);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2000() {
   return (neuron0x23ea6d0()*-0.424692);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2040() {
   return (neuron0x23eabe0()*0.113962);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2080() {
   return (neuron0x23e9350()*0.499891);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f20c0() {
   return (neuron0x23eb500()*-0.192003);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2100() {
   return (neuron0x23eb980()*-0.238448);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1b90() {
   return (neuron0x23ec250()*-0.625379);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f1bd0() {
   return (neuron0x23ec520()*0.048211);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2250() {
   return (neuron0x23ec9a0()*0.25438);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2290() {
   return (neuron0x23ece20()*0.000945951);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f22d0() {
   return (neuron0x23ed2a0()*0.0162701);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2310() {
   return (neuron0x23ed720()*0.163946);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2350() {
   return (neuron0x23edba0()*-0.118912);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2390() {
   return (neuron0x23ee020()*-0.219992);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f23d0() {
   return (neuron0x23ee4a0()*0.199759);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2750() {
   return (neuron0x23e7490()*-0.327713);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2790() {
   return (neuron0x23e7840()*-0.478476);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f27d0() {
   return (neuron0x23e7cc0()*-1.96818);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2810() {
   return (neuron0x23e8140()*0.813832);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2850() {
   return (neuron0x23e8650()*-1.12491);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2890() {
   return (neuron0x23e8ad0()*-1.72532);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f28d0() {
   return (neuron0x23e8f50()*-0.35133);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2910() {
   return (neuron0x23e9560()*-1.07456);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2950() {
   return (neuron0x23e9950()*-0.331092);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2990() {
   return (neuron0x23e9dd0()*-0.592777);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f29d0() {
   return (neuron0x23ea250()*0.352894);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2a10() {
   return (neuron0x23ea6d0()*1.05259);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2a50() {
   return (neuron0x23eabe0()*0.699869);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2a90() {
   return (neuron0x23e9350()*-0.675331);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2ad0() {
   return (neuron0x23eb500()*-1.25086);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2b10() {
   return (neuron0x23eb980()*-0.27978);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f25a0() {
   return (neuron0x23ec250()*1.58548);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f25e0() {
   return (neuron0x23ec520()*0.958291);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2c60() {
   return (neuron0x23ec9a0()*-0.730185);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2ca0() {
   return (neuron0x23ece20()*0.215469);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2ce0() {
   return (neuron0x23ed2a0()*-6.34083);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2d20() {
   return (neuron0x23ed720()*-0.0684211);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2d60() {
   return (neuron0x23edba0()*0.210143);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2da0() {
   return (neuron0x23ee020()*0.516876);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2de0() {
   return (neuron0x23ee4a0()*0.0929537);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f3160() {
   return (neuron0x23e7490()*0.468275);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f31a0() {
   return (neuron0x23e7840()*-0.221976);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f31e0() {
   return (neuron0x23e7cc0()*-1.16979);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f3220() {
   return (neuron0x23e8140()*0.612672);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f3260() {
   return (neuron0x23e8650()*-0.144747);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f32a0() {
   return (neuron0x23e8ad0()*-1.18598);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f32e0() {
   return (neuron0x23e8f50()*-0.164083);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0540() {
   return (neuron0x23e9560()*0.218172);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0580() {
   return (neuron0x23e9950()*1.32487);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f05c0() {
   return (neuron0x23e9dd0()*-0.259749);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0600() {
   return (neuron0x23ea250()*0.257581);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0640() {
   return (neuron0x23ea6d0()*0.909577);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0680() {
   return (neuron0x23eabe0()*-1.39424);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f06c0() {
   return (neuron0x23e9350()*0.24716);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0700() {
   return (neuron0x23eb500()*-0.378258);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0740() {
   return (neuron0x23eb980()*0.429025);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2fb0() {
   return (neuron0x23ec250()*0.5517);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f2ff0() {
   return (neuron0x23ec520()*-0.0547882);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0890() {
   return (neuron0x23ec9a0()*-0.336343);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f08d0() {
   return (neuron0x23ece20()*0.0934726);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0910() {
   return (neuron0x23ed2a0()*-3.40041);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0950() {
   return (neuron0x23ed720()*-0.516053);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0990() {
   return (neuron0x23edba0()*0.45432);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f09d0() {
   return (neuron0x23ee020()*0.473104);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0a10() {
   return (neuron0x23ee4a0()*0.197431);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0d00() {
   return (neuron0x23e7490()*0.548973);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f43c0() {
   return (neuron0x23e7840()*-1.50863);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4400() {
   return (neuron0x23e7cc0()*0.97685);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4440() {
   return (neuron0x23e8140()*-0.997574);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4480() {
   return (neuron0x23e8650()*1.72052);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f44c0() {
   return (neuron0x23e8ad0()*2.03973);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4500() {
   return (neuron0x23e8f50()*0.836652);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4540() {
   return (neuron0x23e9560()*3.11179);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4580() {
   return (neuron0x23e9950()*1.58322);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f45c0() {
   return (neuron0x23e9dd0()*-0.115389);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4600() {
   return (neuron0x23ea250()*-1.1143);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4640() {
   return (neuron0x23ea6d0()*-0.634846);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4680() {
   return (neuron0x23eabe0()*-0.0438561);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f46c0() {
   return (neuron0x23e9350()*2.20707);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4700() {
   return (neuron0x23eb500()*2.68892);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4740() {
   return (neuron0x23eb980()*1.56235);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0be0() {
   return (neuron0x23ec250()*-1.44836);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f0c20() {
   return (neuron0x23ec520()*-0.621452);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4890() {
   return (neuron0x23ec9a0()*0.824622);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f48d0() {
   return (neuron0x23ece20()*0.506393);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4910() {
   return (neuron0x23ed2a0()*0.44516);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4950() {
   return (neuron0x23ed720()*0.172889);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4990() {
   return (neuron0x23edba0()*-0.566904);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f49d0() {
   return (neuron0x23ee020()*0.488416);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4a10() {
   return (neuron0x23ee4a0()*0.966176);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4d90() {
   return (neuron0x23e7490()*-0.265372);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4dd0() {
   return (neuron0x23e7840()*-0.0204321);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4e10() {
   return (neuron0x23e7cc0()*0.629501);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4e50() {
   return (neuron0x23e8140()*-0.0387226);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4e90() {
   return (neuron0x23e8650()*-0.272208);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4ed0() {
   return (neuron0x23e8ad0()*0.132079);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4f10() {
   return (neuron0x23e8f50()*-0.207285);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4f50() {
   return (neuron0x23e9560()*0.077542);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4f90() {
   return (neuron0x23e9950()*-0.447894);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4fd0() {
   return (neuron0x23e9dd0()*0.237689);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5010() {
   return (neuron0x23ea250()*-0.276566);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5050() {
   return (neuron0x23ea6d0()*-0.364995);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5090() {
   return (neuron0x23eabe0()*0.120344);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f50d0() {
   return (neuron0x23e9350()*-0.114214);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5110() {
   return (neuron0x23eb500()*-0.361193);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5150() {
   return (neuron0x23eb980()*-0.000988055);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4be0() {
   return (neuron0x23ec250()*-0.176648);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4c20() {
   return (neuron0x23ec520()*-0.729246);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f52a0() {
   return (neuron0x23ec9a0()*-0.297211);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f52e0() {
   return (neuron0x23ece20()*-0.345537);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5320() {
   return (neuron0x23ed2a0()*0.220545);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5360() {
   return (neuron0x23ed720()*-0.0152371);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f53a0() {
   return (neuron0x23edba0()*0.0124723);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f53e0() {
   return (neuron0x23ee020()*-0.0080569);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5420() {
   return (neuron0x23ee4a0()*0.246227);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f57a0() {
   return (neuron0x23e7490()*-0.912224);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f57e0() {
   return (neuron0x23e7840()*0.00330298);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5820() {
   return (neuron0x23e7cc0()*-0.92186);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5860() {
   return (neuron0x23e8140()*0.876706);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f58a0() {
   return (neuron0x23e8650()*-1.59163);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f58e0() {
   return (neuron0x23e8ad0()*-1.76748);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5920() {
   return (neuron0x23e8f50()*-0.192026);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5960() {
   return (neuron0x23e9560()*-1.21158);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f59a0() {
   return (neuron0x23e9950()*-0.80258);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f59e0() {
   return (neuron0x23e9dd0()*-1.08388);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5a20() {
   return (neuron0x23ea250()*0.69212);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5a60() {
   return (neuron0x23ea6d0()*-0.0658337);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5aa0() {
   return (neuron0x23eabe0()*-0.493655);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5ae0() {
   return (neuron0x23e9350()*-1.82579);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5b20() {
   return (neuron0x23eb500()*-1.51175);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5b60() {
   return (neuron0x23eb980()*-1.20154);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f55f0() {
   return (neuron0x23ec250()*0.807126);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5630() {
   return (neuron0x23ec520()*0.495014);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5cb0() {
   return (neuron0x23ec9a0()*-1.29414);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5cf0() {
   return (neuron0x23ece20()*-0.13599);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5d30() {
   return (neuron0x23ed2a0()*-1.04886);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5d70() {
   return (neuron0x23ed720()*-0.313216);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5db0() {
   return (neuron0x23edba0()*0.531699);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5df0() {
   return (neuron0x23ee020()*-0.23496);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f5e30() {
   return (neuron0x23ee4a0()*-0.712299);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f61b0() {
   return (neuron0x23e7490()*-0.680472);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f61f0() {
   return (neuron0x23e7840()*0.673242);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6230() {
   return (neuron0x23e7cc0()*0.00462247);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6270() {
   return (neuron0x23e8140()*0.502982);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f62b0() {
   return (neuron0x23e8650()*-0.795074);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f62f0() {
   return (neuron0x23e8ad0()*-0.688135);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6330() {
   return (neuron0x23e8f50()*0.118876);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6370() {
   return (neuron0x23e9560()*-0.641605);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f63b0() {
   return (neuron0x23e9950()*-0.999969);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f63f0() {
   return (neuron0x23e9dd0()*0.115561);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6430() {
   return (neuron0x23ea250()*0.189626);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6470() {
   return (neuron0x23ea6d0()*0.818167);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f64b0() {
   return (neuron0x23eabe0()*-0.0331031);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f64f0() {
   return (neuron0x23e9350()*-0.9143);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6530() {
   return (neuron0x23eb500()*-0.95598);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6570() {
   return (neuron0x23eb980()*-0.672493);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6000() {
   return (neuron0x23ec250()*1.14019);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6040() {
   return (neuron0x23ec520()*0.609447);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f66c0() {
   return (neuron0x23ec9a0()*-0.427754);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6700() {
   return (neuron0x23ece20()*0.190362);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6740() {
   return (neuron0x23ed2a0()*-0.161327);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6780() {
   return (neuron0x23ed720()*-0.0537491);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f67c0() {
   return (neuron0x23edba0()*0.248916);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6800() {
   return (neuron0x23ee020()*0.112663);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6840() {
   return (neuron0x23ee4a0()*-0.15202);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6bc0() {
   return (neuron0x23e7490()*0.257277);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6c00() {
   return (neuron0x23e7840()*-1.00006);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6c40() {
   return (neuron0x23e7cc0()*1.10372);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6c80() {
   return (neuron0x23e8140()*-1.49241);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6cc0() {
   return (neuron0x23e8650()*1.16626);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6d00() {
   return (neuron0x23e8ad0()*0.52676);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6d40() {
   return (neuron0x23e8f50()*0.0319951);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6d80() {
   return (neuron0x23e9560()*1.40412);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6dc0() {
   return (neuron0x23e9950()*0.29932);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6e00() {
   return (neuron0x23e9dd0()*0.500602);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6e40() {
   return (neuron0x23ea250()*-0.558659);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6e80() {
   return (neuron0x23ea6d0()*-0.352081);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6ec0() {
   return (neuron0x23eabe0()*-0.722854);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6f00() {
   return (neuron0x23e9350()*1.35104);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6f40() {
   return (neuron0x23eb500()*0.657698);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6f80() {
   return (neuron0x23eb980()*0.864668);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6a10() {
   return (neuron0x23ec250()*-1.02877);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6a50() {
   return (neuron0x23ec520()*-1.01916);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f70d0() {
   return (neuron0x23ec9a0()*0.693424);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7110() {
   return (neuron0x23ece20()*-0.344334);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7150() {
   return (neuron0x23ed2a0()*0.768079);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7190() {
   return (neuron0x23ed720()*-0.120502);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f71d0() {
   return (neuron0x23edba0()*-0.479655);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7210() {
   return (neuron0x23ee020()*-0.425899);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7250() {
   return (neuron0x23ee4a0()*0.432809);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f75d0() {
   return (neuron0x23e7490()*0.343397);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7610() {
   return (neuron0x23e7840()*-0.666029);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7650() {
   return (neuron0x23e7cc0()*1.171);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7690() {
   return (neuron0x23e8140()*-1.30321);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f76d0() {
   return (neuron0x23e8650()*1.93675);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7710() {
   return (neuron0x23e8ad0()*1.53663);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7750() {
   return (neuron0x23e8f50()*-0.026231);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7790() {
   return (neuron0x23e9560()*2.19373);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f77d0() {
   return (neuron0x23e9950()*0.567003);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7810() {
   return (neuron0x23e9dd0()*0.641782);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7850() {
   return (neuron0x23ea250()*-1.45704);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7890() {
   return (neuron0x23ea6d0()*-0.453974);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f78d0() {
   return (neuron0x23eabe0()*-0.509858);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7910() {
   return (neuron0x23e9350()*2.0084);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7950() {
   return (neuron0x23eb500()*2.34942);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7990() {
   return (neuron0x23eb980()*0.596598);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7420() {
   return (neuron0x23ec250()*-1.59912);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7460() {
   return (neuron0x23ec520()*-1.12083);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7ae0() {
   return (neuron0x23ec9a0()*1.57963);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7b20() {
   return (neuron0x23ece20()*0.419698);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7b60() {
   return (neuron0x23ed2a0()*0.903465);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7ba0() {
   return (neuron0x23ed720()*-0.133691);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7be0() {
   return (neuron0x23edba0()*-0.519565);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7c20() {
   return (neuron0x23ee020()*-0.610223);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7c60() {
   return (neuron0x23ee4a0()*-0.0830747);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7fe0() {
   return (neuron0x23e7490()*0.0334396);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8020() {
   return (neuron0x23e7840()*0.198074);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8060() {
   return (neuron0x23e7cc0()*-0.429077);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f80a0() {
   return (neuron0x23e8140()*0.656221);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f80e0() {
   return (neuron0x23e8650()*-0.225369);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8120() {
   return (neuron0x23e8ad0()*-0.374044);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8160() {
   return (neuron0x23e8f50()*0.408829);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f81a0() {
   return (neuron0x23e9560()*-0.403375);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f81e0() {
   return (neuron0x23e9950()*0.192832);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8220() {
   return (neuron0x23e9dd0()*-0.103316);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8260() {
   return (neuron0x23ea250()*0.176132);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f82a0() {
   return (neuron0x23ea6d0()*0.300587);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f82e0() {
   return (neuron0x23eabe0()*0.398967);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8320() {
   return (neuron0x23e9350()*-0.383893);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8360() {
   return (neuron0x23eb500()*-0.382959);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f83a0() {
   return (neuron0x23eb980()*-0.509386);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7e30() {
   return (neuron0x23ec250()*0.559759);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7e70() {
   return (neuron0x23ec520()*0.254411);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f84f0() {
   return (neuron0x23ec9a0()*-0.267147);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8530() {
   return (neuron0x23ece20()*-0.29886);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8570() {
   return (neuron0x23ed2a0()*-0.198677);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f85b0() {
   return (neuron0x23ed720()*-0.171151);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f85f0() {
   return (neuron0x23edba0()*0.0178717);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8630() {
   return (neuron0x23ee020()*0.609762);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8670() {
   return (neuron0x23ee4a0()*0.0934771);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f89f0() {
   return (neuron0x23e7490()*-0.786951);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8a30() {
   return (neuron0x23e7840()*0.989058);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8a70() {
   return (neuron0x23e7cc0()*-0.942253);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8ab0() {
   return (neuron0x23e8140()*1.40504);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8af0() {
   return (neuron0x23e8650()*-1.259);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8b30() {
   return (neuron0x23e8ad0()*-1.80874);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8b70() {
   return (neuron0x23e8f50()*0.238954);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8bb0() {
   return (neuron0x23e9560()*-1.20717);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8bf0() {
   return (neuron0x23e9950()*-0.959615);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8c30() {
   return (neuron0x23e9dd0()*-0.425167);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8c70() {
   return (neuron0x23ea250()*1.29769);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8cb0() {
   return (neuron0x23ea6d0()*1.58213);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8cf0() {
   return (neuron0x23eabe0()*0.0252587);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8d30() {
   return (neuron0x23e9350()*-1.16193);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8d70() {
   return (neuron0x23eb500()*-1.59133);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8db0() {
   return (neuron0x23eb980()*-1.03569);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8840() {
   return (neuron0x23ec250()*2.30027);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8880() {
   return (neuron0x23ec520()*0.958056);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8f00() {
   return (neuron0x23ec9a0()*-1.15269);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8f40() {
   return (neuron0x23ece20()*0.0855455);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8f80() {
   return (neuron0x23ed2a0()*-1.55727);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f8fc0() {
   return (neuron0x23ed720()*0.216774);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9000() {
   return (neuron0x23edba0()*1.11958);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9040() {
   return (neuron0x23ee020()*0.445067);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9080() {
   return (neuron0x23ee4a0()*-0.716823);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9400() {
   return (neuron0x23e7490()*-0.975479);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9440() {
   return (neuron0x23e7840()*1.06171);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9480() {
   return (neuron0x23e7cc0()*-1.07383);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f94c0() {
   return (neuron0x23e8140()*0.929927);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9500() {
   return (neuron0x23e8650()*-1.307);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9540() {
   return (neuron0x23e8ad0()*-1.19333);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9580() {
   return (neuron0x23e8f50()*-0.20362);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f95c0() {
   return (neuron0x23e9560()*-0.742141);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9600() {
   return (neuron0x23e9950()*-0.127068);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9640() {
   return (neuron0x23e9dd0()*-0.00412677);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9680() {
   return (neuron0x23ea250()*0.590357);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f96c0() {
   return (neuron0x23ea6d0()*0.719881);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9700() {
   return (neuron0x23eabe0()*-0.085803);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9740() {
   return (neuron0x23e9350()*-1.52066);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9780() {
   return (neuron0x23eb500()*-1.11995);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f97c0() {
   return (neuron0x23eb980()*-0.0319269);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9250() {
   return (neuron0x23ec250()*0.894188);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9290() {
   return (neuron0x23ec520()*1.47277);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9910() {
   return (neuron0x23ec9a0()*-0.891932);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9950() {
   return (neuron0x23ece20()*0.447507);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9990() {
   return (neuron0x23ed2a0()*-1.83682);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f99d0() {
   return (neuron0x23ed720()*-0.0795749);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9a10() {
   return (neuron0x23edba0()*1.09782);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9a50() {
   return (neuron0x23ee020()*-0.105243);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9a90() {
   return (neuron0x23ee4a0()*-0.648354);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9e10() {
   return (neuron0x23e7490()*0.257717);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7620() {
   return (neuron0x23e7840()*0.0332444);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7660() {
   return (neuron0x23e7cc0()*0.0478923);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7a60() {
   return (neuron0x23e8140()*0.0883411);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7aa0() {
   return (neuron0x23e8650()*0.225823);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7ee0() {
   return (neuron0x23e8ad0()*-0.606699);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7f20() {
   return (neuron0x23e8f50()*-0.0592736);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8360() {
   return (neuron0x23e9560()*-0.281315);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e83a0() {
   return (neuron0x23e9950()*-0.480266);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8870() {
   return (neuron0x23e9dd0()*-0.0429517);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e88b0() {
   return (neuron0x23ea250()*0.263761);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8cf0() {
   return (neuron0x23ea6d0()*0.571802);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e8d30() {
   return (neuron0x23eabe0()*-0.132292);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9170() {
   return (neuron0x23e9350()*-0.0862362);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e91b0() {
   return (neuron0x23eb500()*-0.157958);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e96f0() {
   return (neuron0x23eb980()*0.319048);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9730() {
   return (neuron0x23ec250()*0.220753);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9b70() {
   return (neuron0x23ec520()*-0.120484);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9bb0() {
   return (neuron0x23ec9a0()*0.139046);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e9ff0() {
   return (neuron0x23ece20()*0.110968);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea030() {
   return (neuron0x23ed2a0()*-0.669778);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea470() {
   return (neuron0x23ed720()*-0.0962727);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea4b0() {
   return (neuron0x23edba0()*0.434118);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea8f0() {
   return (neuron0x23ee020()*-0.0824565);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ea930() {
   return (neuron0x23ee4a0()*-0.362586);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f4280() {
   return (neuron0x23e7490()*-0.0242978);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f42c0() {
   return (neuron0x23e7840()*-0.280063);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ebba0() {
   return (neuron0x23e7cc0()*0.732676);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ebbe0() {
   return (neuron0x23e8140()*0.12333);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9c60() {
   return (neuron0x23e8650()*-0.438663);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f9ca0() {
   return (neuron0x23e8ad0()*-0.242238);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e6f00() {
   return (neuron0x23e8f50()*-0.313351);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e6f40() {
   return (neuron0x23e9560()*-0.731389);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec740() {
   return (neuron0x23e9950()*-0.605824);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ec780() {
   return (neuron0x23e9dd0()*-0.53676);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecbc0() {
   return (neuron0x23ea250()*0.0213886);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ecc00() {
   return (neuron0x23ea6d0()*0.0679252);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed040() {
   return (neuron0x23eabe0()*0.536856);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed080() {
   return (neuron0x23e9350()*0.0159134);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed4c0() {
   return (neuron0x23eb500()*-0.395875);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed500() {
   return (neuron0x23eb980()*-0.0182813);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed940() {
   return (neuron0x23ec250()*-0.565949);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ed980() {
   return (neuron0x23ec520()*0.029888);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eddc0() {
   return (neuron0x23ec9a0()*-0.454539);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ede00() {
   return (neuron0x23ece20()*-0.459102);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee240() {
   return (neuron0x23ed2a0()*1.24447);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee280() {
   return (neuron0x23ed720()*0.353384);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee6c0() {
   return (neuron0x23edba0()*0.142876);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ee700() {
   return (neuron0x23ee020()*-0.385421);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eae00() {
   return (neuron0x23ee4a0()*0.142951);
}

double nnFunc_25_25hi_1500ep__::synapse0x23eae40() {
   return (neuron0x23e7490()*-0.381283);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd080() {
   return (neuron0x23e7840()*0.056377);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd0c0() {
   return (neuron0x23e7cc0()*-0.625594);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd100() {
   return (neuron0x23e8140()*0.00467561);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd140() {
   return (neuron0x23e8650()*-0.331239);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd180() {
   return (neuron0x23e8ad0()*-0.966741);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd1c0() {
   return (neuron0x23e8f50()*-0.273054);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd200() {
   return (neuron0x23e9560()*-1.11265);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd240() {
   return (neuron0x23e9950()*-0.615629);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd280() {
   return (neuron0x23e9dd0()*-0.494415);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd2c0() {
   return (neuron0x23ea250()*0.111237);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd300() {
   return (neuron0x23ea6d0()*-0.538985);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd340() {
   return (neuron0x23eabe0()*-0.418059);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd380() {
   return (neuron0x23e9350()*-0.960075);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd3c0() {
   return (neuron0x23eb500()*-0.966876);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd400() {
   return (neuron0x23eb980()*-0.83462);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fced0() {
   return (neuron0x23ec250()*0.481993);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fcf10() {
   return (neuron0x23ec520()*0.27171);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd550() {
   return (neuron0x23ec9a0()*-0.106358);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd590() {
   return (neuron0x23ece20()*-0.817434);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd5d0() {
   return (neuron0x23ed2a0()*-0.294678);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd610() {
   return (neuron0x23ed720()*0.359495);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd650() {
   return (neuron0x23edba0()*-0.869245);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd690() {
   return (neuron0x23ee020()*-0.203507);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd6d0() {
   return (neuron0x23ee4a0()*-0.589795);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fda50() {
   return (neuron0x23e7490()*0.243422);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fda90() {
   return (neuron0x23e7840()*-0.305764);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdad0() {
   return (neuron0x23e7cc0()*1.44923);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdb10() {
   return (neuron0x23e8140()*-0.926993);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdb50() {
   return (neuron0x23e8650()*1.20767);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdb90() {
   return (neuron0x23e8ad0()*1.33446);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdbd0() {
   return (neuron0x23e8f50()*-0.0758385);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdc10() {
   return (neuron0x23e9560()*1.23962);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdc50() {
   return (neuron0x23e9950()*0.00866881);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdc90() {
   return (neuron0x23e9dd0()*-0.193235);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdcd0() {
   return (neuron0x23ea250()*-0.414839);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdd10() {
   return (neuron0x23ea6d0()*-0.845655);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdd50() {
   return (neuron0x23eabe0()*0.990617);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdd90() {
   return (neuron0x23e9350()*0.53985);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fddd0() {
   return (neuron0x23eb500()*2.10173);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fde10() {
   return (neuron0x23eb980()*0.216059);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd8a0() {
   return (neuron0x23ec250()*-1.67527);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fd8e0() {
   return (neuron0x23ec520()*-1.10189);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdf60() {
   return (neuron0x23ec9a0()*0.837745);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdfa0() {
   return (neuron0x23ece20()*-0.149102);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fdfe0() {
   return (neuron0x23ed2a0()*3.10107);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe020() {
   return (neuron0x23ed720()*0.613636);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe060() {
   return (neuron0x23edba0()*-0.104249);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe0a0() {
   return (neuron0x23ee020()*-0.0447975);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe0e0() {
   return (neuron0x23ee4a0()*-0.0477982);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe460() {
   return (neuron0x23e7490()*-0.764541);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe4a0() {
   return (neuron0x23e7840()*0.653514);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe4e0() {
   return (neuron0x23e7cc0()*-0.0965182);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe520() {
   return (neuron0x23e8140()*1.00477);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe560() {
   return (neuron0x23e8650()*-0.248856);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe5a0() {
   return (neuron0x23e8ad0()*-1.0357);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe5e0() {
   return (neuron0x23e8f50()*0.49975);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe620() {
   return (neuron0x23e9560()*-1.28845);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe660() {
   return (neuron0x23e9950()*-0.837194);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe6a0() {
   return (neuron0x23e9dd0()*0.0925862);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe6e0() {
   return (neuron0x23ea250()*0.253591);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe720() {
   return (neuron0x23ea6d0()*0.30277);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe760() {
   return (neuron0x23eabe0()*-0.24943);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe7a0() {
   return (neuron0x23e9350()*-0.798163);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe7e0() {
   return (neuron0x23eb500()*-1.24983);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe820() {
   return (neuron0x23eb980()*-0.768328);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe2b0() {
   return (neuron0x23ec250()*0.485582);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe2f0() {
   return (neuron0x23ec520()*1.03215);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe970() {
   return (neuron0x23ec9a0()*0.156997);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe9b0() {
   return (neuron0x23ece20()*0.10316);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fe9f0() {
   return (neuron0x23ed2a0()*0.401382);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fea30() {
   return (neuron0x23ed720()*-0.275327);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fea70() {
   return (neuron0x23edba0()*-0.0800858);
}

double nnFunc_25_25hi_1500ep__::synapse0x23feab0() {
   return (neuron0x23ee020()*-0.200388);
}

double nnFunc_25_25hi_1500ep__::synapse0x23feaf0() {
   return (neuron0x23ee4a0()*0.148656);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fee70() {
   return (neuron0x23e7490()*1.20039);
}

double nnFunc_25_25hi_1500ep__::synapse0x23feeb0() {
   return (neuron0x23e7840()*-1.43348);
}

double nnFunc_25_25hi_1500ep__::synapse0x23feef0() {
   return (neuron0x23e7cc0()*1.6617);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fef30() {
   return (neuron0x23e8140()*-1.05878);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fef70() {
   return (neuron0x23e8650()*1.19802);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fefb0() {
   return (neuron0x23e8ad0()*1.90427);
}

double nnFunc_25_25hi_1500ep__::synapse0x23feff0() {
   return (neuron0x23e8f50()*-0.23527);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff030() {
   return (neuron0x23e9560()*2.27032);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff070() {
   return (neuron0x23e9950()*2.20362);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff0b0() {
   return (neuron0x23e9dd0()*0.210122);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff0f0() {
   return (neuron0x23ea250()*-0.841878);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff130() {
   return (neuron0x23ea6d0()*-0.707451);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff170() {
   return (neuron0x23eabe0()*-0.93205);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff1b0() {
   return (neuron0x23e9350()*2.36116);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff1f0() {
   return (neuron0x23eb500()*2.19891);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff230() {
   return (neuron0x23eb980()*0.897049);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fecc0() {
   return (neuron0x23ec250()*-1.9634);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fed00() {
   return (neuron0x23ec520()*-0.961495);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff380() {
   return (neuron0x23ec9a0()*1.68939);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff3c0() {
   return (neuron0x23ece20()*-0.12132);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff400() {
   return (neuron0x23ed2a0()*0.451106);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff440() {
   return (neuron0x23ed720()*-0.143433);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff480() {
   return (neuron0x23edba0()*-0.421753);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff4c0() {
   return (neuron0x23ee020()*-0.628132);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff500() {
   return (neuron0x23ee4a0()*-0.0785814);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff880() {
   return (neuron0x23e7490()*0.845611);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff8c0() {
   return (neuron0x23e7840()*-0.58653);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff900() {
   return (neuron0x23e7cc0()*0.650433);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff940() {
   return (neuron0x23e8140()*-0.459045);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff980() {
   return (neuron0x23e8650()*0.884793);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff9c0() {
   return (neuron0x23e8ad0()*0.811278);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffa00() {
   return (neuron0x23e8f50()*0.336263);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffa40() {
   return (neuron0x23e9560()*0.981531);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffa80() {
   return (neuron0x23e9950()*1.09201);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffac0() {
   return (neuron0x23e9dd0()*0.047026);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffb00() {
   return (neuron0x23ea250()*-0.747329);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffb40() {
   return (neuron0x23ea6d0()*-0.753547);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffb80() {
   return (neuron0x23eabe0()*0.547555);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffbc0() {
   return (neuron0x23e9350()*0.913926);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffc00() {
   return (neuron0x23eb500()*0.857198);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffc40() {
   return (neuron0x23eb980()*0.253482);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff6d0() {
   return (neuron0x23ec250()*-0.571445);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ff710() {
   return (neuron0x23ec520()*-1.06676);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffd90() {
   return (neuron0x23ec9a0()*0.642807);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffdd0() {
   return (neuron0x23ece20()*-0.0106405);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffe10() {
   return (neuron0x23ed2a0()*0.410061);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffe50() {
   return (neuron0x23ed720()*-0.451712);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffe90() {
   return (neuron0x23edba0()*0.215603);
}

double nnFunc_25_25hi_1500ep__::synapse0x23ffed0() {
   return (neuron0x23ee020()*0.479739);
}

double nnFunc_25_25hi_1500ep__::synapse0x23fff10() {
   return (neuron0x23ee4a0()*0.518101);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400290() {
   return (neuron0x23e7490()*0.120084);
}

double nnFunc_25_25hi_1500ep__::synapse0x24002d0() {
   return (neuron0x23e7840()*-0.137715);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400310() {
   return (neuron0x23e7cc0()*0.864263);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400350() {
   return (neuron0x23e8140()*-0.236259);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400390() {
   return (neuron0x23e8650()*0.262823);
}

double nnFunc_25_25hi_1500ep__::synapse0x24003d0() {
   return (neuron0x23e8ad0()*0.382098);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400410() {
   return (neuron0x23e8f50()*0.421104);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400450() {
   return (neuron0x23e9560()*0.0823424);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400490() {
   return (neuron0x23e9950()*0.148822);
}

double nnFunc_25_25hi_1500ep__::synapse0x24004d0() {
   return (neuron0x23e9dd0()*0.177762);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400510() {
   return (neuron0x23ea250()*0.117716);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400550() {
   return (neuron0x23ea6d0()*-0.320923);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400590() {
   return (neuron0x23eabe0()*-1.05635);
}

double nnFunc_25_25hi_1500ep__::synapse0x24005d0() {
   return (neuron0x23e9350()*-0.131838);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400610() {
   return (neuron0x23eb500()*1.00147);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400650() {
   return (neuron0x23eb980()*-0.194082);
}

double nnFunc_25_25hi_1500ep__::synapse0x24000e0() {
   return (neuron0x23ec250()*0.0323572);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400120() {
   return (neuron0x23ec520()*0.397866);
}

double nnFunc_25_25hi_1500ep__::synapse0x24007a0() {
   return (neuron0x23ec9a0()*0.75893);
}

double nnFunc_25_25hi_1500ep__::synapse0x24007e0() {
   return (neuron0x23ece20()*0.561013);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400820() {
   return (neuron0x23ed2a0()*1.13089);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400860() {
   return (neuron0x23ed720()*-0.116501);
}

double nnFunc_25_25hi_1500ep__::synapse0x24008a0() {
   return (neuron0x23edba0()*-0.277664);
}

double nnFunc_25_25hi_1500ep__::synapse0x24008e0() {
   return (neuron0x23ee020()*0.188249);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400920() {
   return (neuron0x23ee4a0()*0.043884);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400ca0() {
   return (neuron0x23e7490()*0.619847);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400ce0() {
   return (neuron0x23e7840()*-2.4905);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400d20() {
   return (neuron0x23e7cc0()*2.39303);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400d60() {
   return (neuron0x23e8140()*-1.54106);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400da0() {
   return (neuron0x23e8650()*2.63566);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400de0() {
   return (neuron0x23e8ad0()*2.98441);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400e20() {
   return (neuron0x23e8f50()*0.359466);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400e60() {
   return (neuron0x23e9560()*3.17181);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400ea0() {
   return (neuron0x23e9950()*1.02847);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400ee0() {
   return (neuron0x23e9dd0()*1.84005);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400f20() {
   return (neuron0x23ea250()*-1.98538);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400f60() {
   return (neuron0x23ea6d0()*-0.929885);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400fa0() {
   return (neuron0x23eabe0()*0.891005);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400fe0() {
   return (neuron0x23e9350()*2.01604);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401020() {
   return (neuron0x23eb500()*2.88411);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401060() {
   return (neuron0x23eb980()*1.204);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400af0() {
   return (neuron0x23ec250()*-1.66492);
}

double nnFunc_25_25hi_1500ep__::synapse0x2400b30() {
   return (neuron0x23ec520()*-1.54795);
}

double nnFunc_25_25hi_1500ep__::synapse0x24011b0() {
   return (neuron0x23ec9a0()*1.98754);
}

double nnFunc_25_25hi_1500ep__::synapse0x24011f0() {
   return (neuron0x23ece20()*-0.427479);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401230() {
   return (neuron0x23ed2a0()*7.58122);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401270() {
   return (neuron0x23ed720()*0.100373);
}

double nnFunc_25_25hi_1500ep__::synapse0x24012b0() {
   return (neuron0x23edba0()*-0.884622);
}

double nnFunc_25_25hi_1500ep__::synapse0x24012f0() {
   return (neuron0x23ee020()*-0.226954);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401330() {
   return (neuron0x23ee4a0()*0.360578);
}

double nnFunc_25_25hi_1500ep__::synapse0x24016b0() {
   return (neuron0x23e7490()*-1.10193);
}

double nnFunc_25_25hi_1500ep__::synapse0x24016f0() {
   return (neuron0x23e7840()*0.770158);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401730() {
   return (neuron0x23e7cc0()*-0.758925);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401770() {
   return (neuron0x23e8140()*1.64209);
}

double nnFunc_25_25hi_1500ep__::synapse0x24017b0() {
   return (neuron0x23e8650()*-2.02846);
}

double nnFunc_25_25hi_1500ep__::synapse0x24017f0() {
   return (neuron0x23e8ad0()*-2.09926);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401830() {
   return (neuron0x23e8f50()*0.463163);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401870() {
   return (neuron0x23e9560()*-1.58414);
}

double nnFunc_25_25hi_1500ep__::synapse0x24018b0() {
   return (neuron0x23e9950()*-1.09925);
}

double nnFunc_25_25hi_1500ep__::synapse0x24018f0() {
   return (neuron0x23e9dd0()*-0.424519);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401930() {
   return (neuron0x23ea250()*1.27794);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401970() {
   return (neuron0x23ea6d0()*0.839119);
}

double nnFunc_25_25hi_1500ep__::synapse0x24019b0() {
   return (neuron0x23eabe0()*0.0329865);
}

double nnFunc_25_25hi_1500ep__::synapse0x24019f0() {
   return (neuron0x23e9350()*-1.95628);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401a30() {
   return (neuron0x23eb500()*-2.23672);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401a70() {
   return (neuron0x23eb980()*-0.582005);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401500() {
   return (neuron0x23ec250()*2.08013);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401540() {
   return (neuron0x23ec520()*1.21032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401bc0() {
   return (neuron0x23ec9a0()*-1.02549);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401c00() {
   return (neuron0x23ece20()*0.511673);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401c40() {
   return (neuron0x23ed2a0()*-2.10287);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401c80() {
   return (neuron0x23ed720()*-0.150633);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401cc0() {
   return (neuron0x23edba0()*1.14417);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401d00() {
   return (neuron0x23ee020()*0.42855);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401d40() {
   return (neuron0x23ee4a0()*-0.290302);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401fa0() {
   return (neuron0x23f03b0()*2.85645);
}

double nnFunc_25_25hi_1500ep__::synapse0x2401fe0() {
   return (neuron0x23eb170()*-5.38556);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402020() {
   return (neuron0x23f0ee0()*-3.48474);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402060() {
   return (neuron0x23f1a00()*1.50837);
}

double nnFunc_25_25hi_1500ep__::synapse0x24020a0() {
   return (neuron0x23f2410()*5.69915);
}

double nnFunc_25_25hi_1500ep__::synapse0x24020e0() {
   return (neuron0x23f2e20()*5.7551);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402120() {
   return (neuron0x23f0a50()*7.98345);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402160() {
   return (neuron0x23f4a50()*-3.63363);
}

double nnFunc_25_25hi_1500ep__::synapse0x24021a0() {
   return (neuron0x23f5460()*-4.56253);
}

double nnFunc_25_25hi_1500ep__::synapse0x24021e0() {
   return (neuron0x23f5e70()*-2.8551);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402220() {
   return (neuron0x23f6880()*3.07353);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402260() {
   return (neuron0x23f7290()*2.49084);
}

double nnFunc_25_25hi_1500ep__::synapse0x24022a0() {
   return (neuron0x23f7ca0()*-1.73732);
}

double nnFunc_25_25hi_1500ep__::synapse0x24022e0() {
   return (neuron0x23f86b0()*-1.8072);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402320() {
   return (neuron0x23f90c0()*0.10967);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402360() {
   return (neuron0x23f9ad0()*0.228755);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e7360() {
   return (neuron0x23f40f0()*-2.94516);
}

double nnFunc_25_25hi_1500ep__::synapse0x23e73a0() {
   return (neuron0x23fcd40()*-2.77026);
}

double nnFunc_25_25hi_1500ep__::synapse0x24024b0() {
   return (neuron0x23fd710()*-4.21287);
}

double nnFunc_25_25hi_1500ep__::synapse0x24024f0() {
   return (neuron0x23fe120()*-4.78589);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402530() {
   return (neuron0x23feb30()*8.44803);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402570() {
   return (neuron0x23ff540()*2.43437);
}

double nnFunc_25_25hi_1500ep__::synapse0x24025b0() {
   return (neuron0x23fff50()*-2.90321);
}

double nnFunc_25_25hi_1500ep__::synapse0x24025f0() {
   return (neuron0x2400960()*7.7066);
}

double nnFunc_25_25hi_1500ep__::synapse0x2402630() {
   return (neuron0x2401370()*-2.07952);
}

