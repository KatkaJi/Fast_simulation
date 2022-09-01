#include "25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_downwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1db30f0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1db30f0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x1d976a0() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d979e0() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d97d20() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d98060() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d983a0() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x1d98810() {
   double input = -0.742081;
   input += synapse0x1ca47f0();
   input += synapse0x1d86b10();
   input += synapse0x1d98ac0();
   input += synapse0x1d98b00();
   input += synapse0x1d98b40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d98810() {
   double input = input0x1d98810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d98b80() {
   double input = -0.352886;
   input += synapse0x1d98ec0();
   input += synapse0x1d98f00();
   input += synapse0x1d98f40();
   input += synapse0x1d98f80();
   input += synapse0x1d98fc0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d98b80() {
   double input = input0x1d98b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d99000() {
   double input = 17.184;
   input += synapse0x1d99340();
   input += synapse0x1d99380();
   input += synapse0x1d993c0();
   input += synapse0x1d99400();
   input += synapse0x1d99440();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d99000() {
   double input = input0x1d99000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d99480() {
   double input = -0.152334;
   input += synapse0x1d997c0();
   input += synapse0x1d99800();
   input += synapse0x1c969e0();
   input += synapse0x1c96a20();
   input += synapse0x1d99950();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d99480() {
   double input = input0x1d99480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d99990() {
   double input = -1.21852;
   input += synapse0x1d99cd0();
   input += synapse0x1d99d10();
   input += synapse0x1d99d50();
   input += synapse0x1d99d90();
   input += synapse0x1d99dd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d99990() {
   double input = input0x1d99990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d99e10() {
   double input = -1.04113;
   input += synapse0x1d9a150();
   input += synapse0x1d9a190();
   input += synapse0x1d9a1d0();
   input += synapse0x1d9a210();
   input += synapse0x1d9a250();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d99e10() {
   double input = input0x1d99e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9a290() {
   double input = -0.123654;
   input += synapse0x1d9a5d0();
   input += synapse0x1d9a610();
   input += synapse0x1d9a650();
   input += synapse0x1d99840();
   input += synapse0x1d99880();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9a290() {
   double input = input0x1d9a290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9a8a0() {
   double input = 1.06531;
   input += synapse0x1d9ab50();
   input += synapse0x1d9ab90();
   input += synapse0x1d9abd0();
   input += synapse0x1d9ac10();
   input += synapse0x1d9ac50();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9a8a0() {
   double input = input0x1d9a8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9ac90() {
   double input = -3.88558;
   input += synapse0x1d9afd0();
   input += synapse0x1d9b010();
   input += synapse0x1d9b050();
   input += synapse0x1d9b090();
   input += synapse0x1d9b0d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9ac90() {
   double input = input0x1d9ac90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9b110() {
   double input = 0.190718;
   input += synapse0x1d9b450();
   input += synapse0x1d9b490();
   input += synapse0x1d9b4d0();
   input += synapse0x1d9b510();
   input += synapse0x1d9b550();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9b110() {
   double input = input0x1d9b110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9b590() {
   double input = -1.12088;
   input += synapse0x1d9b8d0();
   input += synapse0x1d9b910();
   input += synapse0x1d9b950();
   input += synapse0x1d9b990();
   input += synapse0x1d9b9d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9b590() {
   double input = input0x1d9b590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9ba10() {
   double input = -0.45895;
   input += synapse0x1c96830();
   input += synapse0x1c96870();
   input += synapse0x1d9be60();
   input += synapse0x1d9bea0();
   input += synapse0x1d9bee0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9ba10() {
   double input = input0x1d9ba10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9bf20() {
   double input = -0.736514;
   input += synapse0x1d9c260();
   input += synapse0x1d9c2a0();
   input += synapse0x1d9c2e0();
   input += synapse0x1d9c320();
   input += synapse0x1d9c360();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9bf20() {
   double input = input0x1d9bf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9a690() {
   double input = -1.1192;
   input += synapse0x1c97000();
   input += synapse0x1d9a820();
   input += synapse0x1d9a860();
   input += synapse0x1d9c7b0();
   input += synapse0x1d9c7f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9a690() {
   double input = input0x1d9a690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9c830() {
   double input = 6.61038;
   input += synapse0x1d9cb70();
   input += synapse0x1d9cbb0();
   input += synapse0x1d9cbf0();
   input += synapse0x1d9cc30();
   input += synapse0x1d9cc70();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9c830() {
   double input = input0x1d9c830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9ccb0() {
   double input = 5.73589;
   input += synapse0x1d9cff0();
   input += synapse0x1d978c0();
   input += synapse0x1d97900();
   input += synapse0x1d97c00();
   input += synapse0x1d97c40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9ccb0() {
   double input = input0x1d9ccb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9d580() {
   double input = -0.302199;
   input += synapse0x1d9d710();
   input += synapse0x1d9d750();
   input += synapse0x1d9d790();
   input += synapse0x1d9d7d0();
   input += synapse0x1d9d810();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9d580() {
   double input = input0x1d9d580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9d850() {
   double input = 13.7136;
   input += synapse0x1d9db90();
   input += synapse0x1d9dbd0();
   input += synapse0x1d9dc10();
   input += synapse0x1d9dc50();
   input += synapse0x1d9dc90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9d850() {
   double input = input0x1d9d850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9dcd0() {
   double input = 6.48727;
   input += synapse0x1d9e010();
   input += synapse0x1d9e050();
   input += synapse0x1d9e090();
   input += synapse0x1d9e0d0();
   input += synapse0x1d9e110();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9dcd0() {
   double input = input0x1d9dcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9e150() {
   double input = -0.580592;
   input += synapse0x1d9e490();
   input += synapse0x1d9e4d0();
   input += synapse0x1d9e510();
   input += synapse0x1d9e550();
   input += synapse0x1d9e590();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9e150() {
   double input = input0x1d9e150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9e5d0() {
   double input = 0.0214172;
   input += synapse0x1d9e910();
   input += synapse0x1d9e950();
   input += synapse0x1d9e990();
   input += synapse0x1d9e9d0();
   input += synapse0x1d9ea10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9e5d0() {
   double input = input0x1d9e5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9ea50() {
   double input = -0.0775711;
   input += synapse0x1d9ed90();
   input += synapse0x1d9edd0();
   input += synapse0x1d9ee10();
   input += synapse0x1d9ee50();
   input += synapse0x1d9ee90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9ea50() {
   double input = input0x1d9ea50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9eed0() {
   double input = -0.312028;
   input += synapse0x1d9f210();
   input += synapse0x1d9f250();
   input += synapse0x1d9f290();
   input += synapse0x1d9f2d0();
   input += synapse0x1d9f310();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9eed0() {
   double input = input0x1d9eed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9f350() {
   double input = 14.43;
   input += synapse0x1d9f690();
   input += synapse0x1d9f6d0();
   input += synapse0x1d9f710();
   input += synapse0x1d9f750();
   input += synapse0x1d9f790();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9f350() {
   double input = input0x1d9f350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9f7d0() {
   double input = -0.0403442;
   input += synapse0x1d9fb10();
   input += synapse0x1d9fb50();
   input += synapse0x1d9fb90();
   input += synapse0x1d9fbd0();
   input += synapse0x1d9fc10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9f7d0() {
   double input = input0x1d9f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da16e0() {
   double input = -0.596342;
   input += synapse0x1d99730();
   input += synapse0x1d99770();
   input += synapse0x1d99c40();
   input += synapse0x1d99c80();
   input += synapse0x1d9a0c0();
   input += synapse0x1d9a100();
   input += synapse0x1d9a540();
   input += synapse0x1d9a580();
   input += synapse0x1d9aac0();
   input += synapse0x1d9ab00();
   input += synapse0x1d9af40();
   input += synapse0x1d9af80();
   input += synapse0x1d9b3c0();
   input += synapse0x1d9b400();
   input += synapse0x1d9b840();
   input += synapse0x1d9b880();
   input += synapse0x1d9bcc0();
   input += synapse0x1d9bd00();
   input += synapse0x1d9c1d0();
   input += synapse0x1d9c210();
   input += synapse0x1d9cae0();
   input += synapse0x1d9cb20();
   input += synapse0x1d9cf60();
   input += synapse0x1d9cfa0();
   input += synapse0x1d985c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da16e0() {
   double input = input0x1da16e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1d9c4b0() {
   double input = -0.0560577;
   input += synapse0x1d9c640();
   input += synapse0x1d9c680();
   input += synapse0x1d9c6c0();
   input += synapse0x1d9c700();
   input += synapse0x1d9c740();
   input += synapse0x1d98600();
   input += synapse0x1d9e880();
   input += synapse0x1d9e8c0();
   input += synapse0x1d9ed00();
   input += synapse0x1d9ed40();
   input += synapse0x1d9f180();
   input += synapse0x1d9f1c0();
   input += synapse0x1d9f600();
   input += synapse0x1d9f640();
   input += synapse0x1d9fa80();
   input += synapse0x1d9fac0();
   input += synapse0x1d98a30();
   input += synapse0x1d98a70();
   input += synapse0x1d9db00();
   input += synapse0x1d9db40();
   input += synapse0x1ca48c0();
   input += synapse0x1ca4900();
   input += synapse0x1da2190();
   input += synapse0x1da21d0();
   input += synapse0x1da2210();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1d9c4b0() {
   double input = input0x1d9c4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da2250() {
   double input = -0.216897;
   input += synapse0x1d9bd50();
   input += synapse0x1d9bd90();
   input += synapse0x1d9bdd0();
   input += synapse0x1d9be10();
   input += synapse0x1da27a0();
   input += synapse0x1da27e0();
   input += synapse0x1da2820();
   input += synapse0x1da2860();
   input += synapse0x1da28a0();
   input += synapse0x1da28e0();
   input += synapse0x1da2920();
   input += synapse0x1da2960();
   input += synapse0x1da29a0();
   input += synapse0x1da29e0();
   input += synapse0x1da2a20();
   input += synapse0x1da2a60();
   input += synapse0x1da23e0();
   input += synapse0x1da2420();
   input += synapse0x1da2bb0();
   input += synapse0x1da2bf0();
   input += synapse0x1da2c30();
   input += synapse0x1da2c70();
   input += synapse0x1da2cb0();
   input += synapse0x1da2cf0();
   input += synapse0x1da2d30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da2250() {
   double input = input0x1da2250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da2d70() {
   double input = -0.452471;
   input += synapse0x1da30b0();
   input += synapse0x1da30f0();
   input += synapse0x1da3130();
   input += synapse0x1da3170();
   input += synapse0x1da31b0();
   input += synapse0x1da31f0();
   input += synapse0x1da3230();
   input += synapse0x1da3270();
   input += synapse0x1da32b0();
   input += synapse0x1da32f0();
   input += synapse0x1da3330();
   input += synapse0x1da3370();
   input += synapse0x1da33b0();
   input += synapse0x1da33f0();
   input += synapse0x1da3430();
   input += synapse0x1da3470();
   input += synapse0x1da2f00();
   input += synapse0x1da2f40();
   input += synapse0x1da35c0();
   input += synapse0x1da3600();
   input += synapse0x1da3640();
   input += synapse0x1da3680();
   input += synapse0x1da36c0();
   input += synapse0x1da3700();
   input += synapse0x1da3740();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da2d70() {
   double input = input0x1da2d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da3780() {
   double input = -0.048003;
   input += synapse0x1da3ac0();
   input += synapse0x1da3b00();
   input += synapse0x1da3b40();
   input += synapse0x1da3b80();
   input += synapse0x1da3bc0();
   input += synapse0x1da3c00();
   input += synapse0x1da3c40();
   input += synapse0x1da3c80();
   input += synapse0x1da3cc0();
   input += synapse0x1da3d00();
   input += synapse0x1da3d40();
   input += synapse0x1da3d80();
   input += synapse0x1da3dc0();
   input += synapse0x1da3e00();
   input += synapse0x1da3e40();
   input += synapse0x1da3e80();
   input += synapse0x1da3910();
   input += synapse0x1da3950();
   input += synapse0x1da3fd0();
   input += synapse0x1da4010();
   input += synapse0x1da4050();
   input += synapse0x1da4090();
   input += synapse0x1da40d0();
   input += synapse0x1da4110();
   input += synapse0x1da4150();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da3780() {
   double input = input0x1da3780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da4190() {
   double input = -0.296627;
   input += synapse0x1da44d0();
   input += synapse0x1da4510();
   input += synapse0x1da4550();
   input += synapse0x1da4590();
   input += synapse0x1da45d0();
   input += synapse0x1da4610();
   input += synapse0x1da4650();
   input += synapse0x1da1870();
   input += synapse0x1da18b0();
   input += synapse0x1da18f0();
   input += synapse0x1da1930();
   input += synapse0x1da1970();
   input += synapse0x1da19b0();
   input += synapse0x1da19f0();
   input += synapse0x1da1a30();
   input += synapse0x1da1a70();
   input += synapse0x1da4320();
   input += synapse0x1da4360();
   input += synapse0x1da1bc0();
   input += synapse0x1da1c00();
   input += synapse0x1da1c40();
   input += synapse0x1da1c80();
   input += synapse0x1da1cc0();
   input += synapse0x1da1d00();
   input += synapse0x1da1d40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da4190() {
   double input = input0x1da4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da1d80() {
   double input = 0.925392;
   input += synapse0x1da2030();
   input += synapse0x1da5730();
   input += synapse0x1da5770();
   input += synapse0x1da57b0();
   input += synapse0x1da57f0();
   input += synapse0x1da5830();
   input += synapse0x1da5870();
   input += synapse0x1da58b0();
   input += synapse0x1da58f0();
   input += synapse0x1da5930();
   input += synapse0x1da5970();
   input += synapse0x1da59b0();
   input += synapse0x1da59f0();
   input += synapse0x1da5a30();
   input += synapse0x1da5a70();
   input += synapse0x1da5ab0();
   input += synapse0x1da1f10();
   input += synapse0x1da1f50();
   input += synapse0x1da5c00();
   input += synapse0x1da5c40();
   input += synapse0x1da5c80();
   input += synapse0x1da5cc0();
   input += synapse0x1da5d00();
   input += synapse0x1da5d40();
   input += synapse0x1da5d80();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da1d80() {
   double input = input0x1da1d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da5dc0() {
   double input = 0.508294;
   input += synapse0x1da6100();
   input += synapse0x1da6140();
   input += synapse0x1da6180();
   input += synapse0x1da61c0();
   input += synapse0x1da6200();
   input += synapse0x1da6240();
   input += synapse0x1da6280();
   input += synapse0x1da62c0();
   input += synapse0x1da6300();
   input += synapse0x1da6340();
   input += synapse0x1da6380();
   input += synapse0x1da63c0();
   input += synapse0x1da6400();
   input += synapse0x1da6440();
   input += synapse0x1da6480();
   input += synapse0x1da64c0();
   input += synapse0x1da5f50();
   input += synapse0x1da5f90();
   input += synapse0x1da6610();
   input += synapse0x1da6650();
   input += synapse0x1da6690();
   input += synapse0x1da66d0();
   input += synapse0x1da6710();
   input += synapse0x1da6750();
   input += synapse0x1da6790();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da5dc0() {
   double input = input0x1da5dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da67d0() {
   double input = -0.531116;
   input += synapse0x1da6b10();
   input += synapse0x1da6b50();
   input += synapse0x1da6b90();
   input += synapse0x1da6bd0();
   input += synapse0x1da6c10();
   input += synapse0x1da6c50();
   input += synapse0x1da6c90();
   input += synapse0x1da6cd0();
   input += synapse0x1da6d10();
   input += synapse0x1da6d50();
   input += synapse0x1da6d90();
   input += synapse0x1da6dd0();
   input += synapse0x1da6e10();
   input += synapse0x1da6e50();
   input += synapse0x1da6e90();
   input += synapse0x1da6ed0();
   input += synapse0x1da6960();
   input += synapse0x1da69a0();
   input += synapse0x1da7020();
   input += synapse0x1da7060();
   input += synapse0x1da70a0();
   input += synapse0x1da70e0();
   input += synapse0x1da7120();
   input += synapse0x1da7160();
   input += synapse0x1da71a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da67d0() {
   double input = input0x1da67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da71e0() {
   double input = -0.227305;
   input += synapse0x1da7520();
   input += synapse0x1da7560();
   input += synapse0x1da75a0();
   input += synapse0x1da75e0();
   input += synapse0x1da7620();
   input += synapse0x1da7660();
   input += synapse0x1da76a0();
   input += synapse0x1da76e0();
   input += synapse0x1da7720();
   input += synapse0x1da7760();
   input += synapse0x1da77a0();
   input += synapse0x1da77e0();
   input += synapse0x1da7820();
   input += synapse0x1da7860();
   input += synapse0x1da78a0();
   input += synapse0x1da78e0();
   input += synapse0x1da7370();
   input += synapse0x1da73b0();
   input += synapse0x1da7a30();
   input += synapse0x1da7a70();
   input += synapse0x1da7ab0();
   input += synapse0x1da7af0();
   input += synapse0x1da7b30();
   input += synapse0x1da7b70();
   input += synapse0x1da7bb0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da71e0() {
   double input = input0x1da71e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da7bf0() {
   double input = 0.243206;
   input += synapse0x1da7f30();
   input += synapse0x1da7f70();
   input += synapse0x1da7fb0();
   input += synapse0x1da7ff0();
   input += synapse0x1da8030();
   input += synapse0x1da8070();
   input += synapse0x1da80b0();
   input += synapse0x1da80f0();
   input += synapse0x1da8130();
   input += synapse0x1da8170();
   input += synapse0x1da81b0();
   input += synapse0x1da81f0();
   input += synapse0x1da8230();
   input += synapse0x1da8270();
   input += synapse0x1da82b0();
   input += synapse0x1da82f0();
   input += synapse0x1da7d80();
   input += synapse0x1da7dc0();
   input += synapse0x1da8440();
   input += synapse0x1da8480();
   input += synapse0x1da84c0();
   input += synapse0x1da8500();
   input += synapse0x1da8540();
   input += synapse0x1da8580();
   input += synapse0x1da85c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da7bf0() {
   double input = input0x1da7bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da8600() {
   double input = 0.358625;
   input += synapse0x1da8940();
   input += synapse0x1da8980();
   input += synapse0x1da89c0();
   input += synapse0x1da8a00();
   input += synapse0x1da8a40();
   input += synapse0x1da8a80();
   input += synapse0x1da8ac0();
   input += synapse0x1da8b00();
   input += synapse0x1da8b40();
   input += synapse0x1da8b80();
   input += synapse0x1da8bc0();
   input += synapse0x1da8c00();
   input += synapse0x1da8c40();
   input += synapse0x1da8c80();
   input += synapse0x1da8cc0();
   input += synapse0x1da8d00();
   input += synapse0x1da8790();
   input += synapse0x1da87d0();
   input += synapse0x1da8e50();
   input += synapse0x1da8e90();
   input += synapse0x1da8ed0();
   input += synapse0x1da8f10();
   input += synapse0x1da8f50();
   input += synapse0x1da8f90();
   input += synapse0x1da8fd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da8600() {
   double input = input0x1da8600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da9010() {
   double input = -0.280014;
   input += synapse0x1da9350();
   input += synapse0x1da9390();
   input += synapse0x1da93d0();
   input += synapse0x1da9410();
   input += synapse0x1da9450();
   input += synapse0x1da9490();
   input += synapse0x1da94d0();
   input += synapse0x1da9510();
   input += synapse0x1da9550();
   input += synapse0x1da9590();
   input += synapse0x1da95d0();
   input += synapse0x1da9610();
   input += synapse0x1da9650();
   input += synapse0x1da9690();
   input += synapse0x1da96d0();
   input += synapse0x1da9710();
   input += synapse0x1da91a0();
   input += synapse0x1da91e0();
   input += synapse0x1da9860();
   input += synapse0x1da98a0();
   input += synapse0x1da98e0();
   input += synapse0x1da9920();
   input += synapse0x1da9960();
   input += synapse0x1da99a0();
   input += synapse0x1da99e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da9010() {
   double input = input0x1da9010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da9a20() {
   double input = -0.584576;
   input += synapse0x1da9d60();
   input += synapse0x1da9da0();
   input += synapse0x1da9de0();
   input += synapse0x1da9e20();
   input += synapse0x1da9e60();
   input += synapse0x1da9ea0();
   input += synapse0x1da9ee0();
   input += synapse0x1da9f20();
   input += synapse0x1da9f60();
   input += synapse0x1da9fa0();
   input += synapse0x1da9fe0();
   input += synapse0x1daa020();
   input += synapse0x1daa060();
   input += synapse0x1daa0a0();
   input += synapse0x1daa0e0();
   input += synapse0x1daa120();
   input += synapse0x1da9bb0();
   input += synapse0x1da9bf0();
   input += synapse0x1daa270();
   input += synapse0x1daa2b0();
   input += synapse0x1daa2f0();
   input += synapse0x1daa330();
   input += synapse0x1daa370();
   input += synapse0x1daa3b0();
   input += synapse0x1daa3f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da9a20() {
   double input = input0x1da9a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1daa430() {
   double input = -0.544977;
   input += synapse0x1daa770();
   input += synapse0x1daa7b0();
   input += synapse0x1daa7f0();
   input += synapse0x1daa830();
   input += synapse0x1daa870();
   input += synapse0x1daa8b0();
   input += synapse0x1daa8f0();
   input += synapse0x1daa930();
   input += synapse0x1daa970();
   input += synapse0x1daa9b0();
   input += synapse0x1daa9f0();
   input += synapse0x1daaa30();
   input += synapse0x1daaa70();
   input += synapse0x1daaab0();
   input += synapse0x1daaaf0();
   input += synapse0x1daab30();
   input += synapse0x1daa5c0();
   input += synapse0x1daa600();
   input += synapse0x1daac80();
   input += synapse0x1daacc0();
   input += synapse0x1daad00();
   input += synapse0x1daad40();
   input += synapse0x1daad80();
   input += synapse0x1daadc0();
   input += synapse0x1daae00();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1daa430() {
   double input = input0x1daa430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1daae40() {
   double input = -0.206315;
   input += synapse0x1dab180();
   input += synapse0x1d989a0();
   input += synapse0x1d989e0();
   input += synapse0x1d98da0();
   input += synapse0x1d98de0();
   input += synapse0x1d99220();
   input += synapse0x1d99260();
   input += synapse0x1d996a0();
   input += synapse0x1d996e0();
   input += synapse0x1d99bb0();
   input += synapse0x1d99bf0();
   input += synapse0x1d9a030();
   input += synapse0x1d9a070();
   input += synapse0x1d9a4b0();
   input += synapse0x1d9a4f0();
   input += synapse0x1d9aa30();
   input += synapse0x1d9aa70();
   input += synapse0x1d9aeb0();
   input += synapse0x1d9aef0();
   input += synapse0x1d9b330();
   input += synapse0x1d9b370();
   input += synapse0x1d9b7b0();
   input += synapse0x1d9b7f0();
   input += synapse0x1d9bc30();
   input += synapse0x1d9bc70();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1daae40() {
   double input = input0x1daae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1da5460() {
   double input = -0.797153;
   input += synapse0x1da55f0();
   input += synapse0x1da5630();
   input += synapse0x1d9ced0();
   input += synapse0x1d9cf10();
   input += synapse0x1daafd0();
   input += synapse0x1dab010();
   input += synapse0x1d98280();
   input += synapse0x1d982c0();
   input += synapse0x1d9da70();
   input += synapse0x1d9dab0();
   input += synapse0x1d9def0();
   input += synapse0x1d9df30();
   input += synapse0x1d9e370();
   input += synapse0x1d9e3b0();
   input += synapse0x1d9e7f0();
   input += synapse0x1d9e830();
   input += synapse0x1d9ec70();
   input += synapse0x1d9ecb0();
   input += synapse0x1d9f0f0();
   input += synapse0x1d9f130();
   input += synapse0x1d9f570();
   input += synapse0x1d9f5b0();
   input += synapse0x1d9f9f0();
   input += synapse0x1d9fa30();
   input += synapse0x1d9c140();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1da5460() {
   double input = input0x1da5460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1dae0b0() {
   double input = -0.295903;
   input += synapse0x1d9c180();
   input += synapse0x1dae3f0();
   input += synapse0x1dae430();
   input += synapse0x1dae470();
   input += synapse0x1dae4b0();
   input += synapse0x1dae4f0();
   input += synapse0x1dae530();
   input += synapse0x1dae570();
   input += synapse0x1dae5b0();
   input += synapse0x1dae5f0();
   input += synapse0x1dae630();
   input += synapse0x1dae670();
   input += synapse0x1dae6b0();
   input += synapse0x1dae6f0();
   input += synapse0x1dae730();
   input += synapse0x1dae770();
   input += synapse0x1dae240();
   input += synapse0x1dae280();
   input += synapse0x1dae8c0();
   input += synapse0x1dae900();
   input += synapse0x1dae940();
   input += synapse0x1dae980();
   input += synapse0x1dae9c0();
   input += synapse0x1daea00();
   input += synapse0x1daea40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1dae0b0() {
   double input = input0x1dae0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1daea80() {
   double input = -0.381;
   input += synapse0x1daedc0();
   input += synapse0x1daee00();
   input += synapse0x1daee40();
   input += synapse0x1daee80();
   input += synapse0x1daeec0();
   input += synapse0x1daef00();
   input += synapse0x1daef40();
   input += synapse0x1daef80();
   input += synapse0x1daefc0();
   input += synapse0x1daf000();
   input += synapse0x1daf040();
   input += synapse0x1daf080();
   input += synapse0x1daf0c0();
   input += synapse0x1daf100();
   input += synapse0x1daf140();
   input += synapse0x1daf180();
   input += synapse0x1daec10();
   input += synapse0x1daec50();
   input += synapse0x1daf2d0();
   input += synapse0x1daf310();
   input += synapse0x1daf350();
   input += synapse0x1daf390();
   input += synapse0x1daf3d0();
   input += synapse0x1daf410();
   input += synapse0x1daf450();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1daea80() {
   double input = input0x1daea80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1daf490() {
   double input = 0.653528;
   input += synapse0x1daf7d0();
   input += synapse0x1daf810();
   input += synapse0x1daf850();
   input += synapse0x1daf890();
   input += synapse0x1daf8d0();
   input += synapse0x1daf910();
   input += synapse0x1daf950();
   input += synapse0x1daf990();
   input += synapse0x1daf9d0();
   input += synapse0x1dafa10();
   input += synapse0x1dafa50();
   input += synapse0x1dafa90();
   input += synapse0x1dafad0();
   input += synapse0x1dafb10();
   input += synapse0x1dafb50();
   input += synapse0x1dafb90();
   input += synapse0x1daf620();
   input += synapse0x1daf660();
   input += synapse0x1dafce0();
   input += synapse0x1dafd20();
   input += synapse0x1dafd60();
   input += synapse0x1dafda0();
   input += synapse0x1dafde0();
   input += synapse0x1dafe20();
   input += synapse0x1dafe60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1daf490() {
   double input = input0x1daf490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1dafea0() {
   double input = -0.633003;
   input += synapse0x1db01e0();
   input += synapse0x1db0220();
   input += synapse0x1db0260();
   input += synapse0x1db02a0();
   input += synapse0x1db02e0();
   input += synapse0x1db0320();
   input += synapse0x1db0360();
   input += synapse0x1db03a0();
   input += synapse0x1db03e0();
   input += synapse0x1db0420();
   input += synapse0x1db0460();
   input += synapse0x1db04a0();
   input += synapse0x1db04e0();
   input += synapse0x1db0520();
   input += synapse0x1db0560();
   input += synapse0x1db05a0();
   input += synapse0x1db0030();
   input += synapse0x1db0070();
   input += synapse0x1db06f0();
   input += synapse0x1db0730();
   input += synapse0x1db0770();
   input += synapse0x1db07b0();
   input += synapse0x1db07f0();
   input += synapse0x1db0830();
   input += synapse0x1db0870();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1dafea0() {
   double input = input0x1dafea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1db08b0() {
   double input = -0.0136748;
   input += synapse0x1db0bf0();
   input += synapse0x1db0c30();
   input += synapse0x1db0c70();
   input += synapse0x1db0cb0();
   input += synapse0x1db0cf0();
   input += synapse0x1db0d30();
   input += synapse0x1db0d70();
   input += synapse0x1db0db0();
   input += synapse0x1db0df0();
   input += synapse0x1db0e30();
   input += synapse0x1db0e70();
   input += synapse0x1db0eb0();
   input += synapse0x1db0ef0();
   input += synapse0x1db0f30();
   input += synapse0x1db0f70();
   input += synapse0x1db0fb0();
   input += synapse0x1db0a40();
   input += synapse0x1db0a80();
   input += synapse0x1db1100();
   input += synapse0x1db1140();
   input += synapse0x1db1180();
   input += synapse0x1db11c0();
   input += synapse0x1db1200();
   input += synapse0x1db1240();
   input += synapse0x1db1280();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1db08b0() {
   double input = input0x1db08b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1db12c0() {
   double input = 0.555407;
   input += synapse0x1db1600();
   input += synapse0x1db1640();
   input += synapse0x1db1680();
   input += synapse0x1db16c0();
   input += synapse0x1db1700();
   input += synapse0x1db1740();
   input += synapse0x1db1780();
   input += synapse0x1db17c0();
   input += synapse0x1db1800();
   input += synapse0x1db1840();
   input += synapse0x1db1880();
   input += synapse0x1db18c0();
   input += synapse0x1db1900();
   input += synapse0x1db1940();
   input += synapse0x1db1980();
   input += synapse0x1db19c0();
   input += synapse0x1db1450();
   input += synapse0x1db1490();
   input += synapse0x1db1b10();
   input += synapse0x1db1b50();
   input += synapse0x1db1b90();
   input += synapse0x1db1bd0();
   input += synapse0x1db1c10();
   input += synapse0x1db1c50();
   input += synapse0x1db1c90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1db12c0() {
   double input = input0x1db12c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1db1cd0() {
   double input = -0.412561;
   input += synapse0x1db2010();
   input += synapse0x1db2050();
   input += synapse0x1db2090();
   input += synapse0x1db20d0();
   input += synapse0x1db2110();
   input += synapse0x1db2150();
   input += synapse0x1db2190();
   input += synapse0x1db21d0();
   input += synapse0x1db2210();
   input += synapse0x1db2250();
   input += synapse0x1db2290();
   input += synapse0x1db22d0();
   input += synapse0x1db2310();
   input += synapse0x1db2350();
   input += synapse0x1db2390();
   input += synapse0x1db23d0();
   input += synapse0x1db1e60();
   input += synapse0x1db1ea0();
   input += synapse0x1db2520();
   input += synapse0x1db2560();
   input += synapse0x1db25a0();
   input += synapse0x1db25e0();
   input += synapse0x1db2620();
   input += synapse0x1db2660();
   input += synapse0x1db26a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1db1cd0() {
   double input = input0x1db1cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1db26e0() {
   double input = -0.8758;
   input += synapse0x1db2a20();
   input += synapse0x1db2a60();
   input += synapse0x1db2aa0();
   input += synapse0x1db2ae0();
   input += synapse0x1db2b20();
   input += synapse0x1db2b60();
   input += synapse0x1db2ba0();
   input += synapse0x1db2be0();
   input += synapse0x1db2c20();
   input += synapse0x1db2c60();
   input += synapse0x1db2ca0();
   input += synapse0x1db2ce0();
   input += synapse0x1db2d20();
   input += synapse0x1db2d60();
   input += synapse0x1db2da0();
   input += synapse0x1db2de0();
   input += synapse0x1db2870();
   input += synapse0x1db28b0();
   input += synapse0x1db2f30();
   input += synapse0x1db2f70();
   input += synapse0x1db2fb0();
   input += synapse0x1db2ff0();
   input += synapse0x1db3030();
   input += synapse0x1db3070();
   input += synapse0x1db30b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1db26e0() {
   double input = input0x1db26e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1db30f0() {
   double input = 2.4904;
   input += synapse0x1db3310();
   input += synapse0x1db3350();
   input += synapse0x1db3390();
   input += synapse0x1db33d0();
   input += synapse0x1db3410();
   input += synapse0x1db3450();
   input += synapse0x1db3490();
   input += synapse0x1db34d0();
   input += synapse0x1db3510();
   input += synapse0x1db3550();
   input += synapse0x1db3590();
   input += synapse0x1db35d0();
   input += synapse0x1db3610();
   input += synapse0x1db3650();
   input += synapse0x1db3690();
   input += synapse0x1db36d0();
   input += synapse0x1d986e0();
   input += synapse0x1d98720();
   input += synapse0x1db3820();
   input += synapse0x1db3860();
   input += synapse0x1db38a0();
   input += synapse0x1db38e0();
   input += synapse0x1db3920();
   input += synapse0x1db3960();
   input += synapse0x1db39a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1db30f0() {
   double input = input0x1db30f0();
   return (input * 40.4969)+147.382;
}

double nnFunc_25_25hi_3000ep__::synapse0x1ca47f0() {
   return (neuron0x1d976a0()*2.7185);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d86b10() {
   return (neuron0x1d979e0()*-1.48576);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98ac0() {
   return (neuron0x1d97d20()*-1.62734);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98b00() {
   return (neuron0x1d98060()*5.53335);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98b40() {
   return (neuron0x1d983a0()*-0.0652748);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98ec0() {
   return (neuron0x1d976a0()*1.25987);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98f00() {
   return (neuron0x1d979e0()*-0.876168);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98f40() {
   return (neuron0x1d97d20()*-0.312307);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98f80() {
   return (neuron0x1d98060()*-0.295055);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98fc0() {
   return (neuron0x1d983a0()*-0.550989);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99340() {
   return (neuron0x1d976a0()*2.51569);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99380() {
   return (neuron0x1d979e0()*-0.0338398);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d993c0() {
   return (neuron0x1d97d20()*0.601456);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99400() {
   return (neuron0x1d98060()*19.0645);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99440() {
   return (neuron0x1d983a0()*15.2744);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d997c0() {
   return (neuron0x1d976a0()*0.663995);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99800() {
   return (neuron0x1d979e0()*0.0362866);
}

double nnFunc_25_25hi_3000ep__::synapse0x1c969e0() {
   return (neuron0x1d97d20()*0.379529);
}

double nnFunc_25_25hi_3000ep__::synapse0x1c96a20() {
   return (neuron0x1d98060()*-3.75571);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99950() {
   return (neuron0x1d983a0()*-2.32483);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99cd0() {
   return (neuron0x1d976a0()*1.19813);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99d10() {
   return (neuron0x1d979e0()*-0.765736);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99d50() {
   return (neuron0x1d97d20()*-0.786098);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99d90() {
   return (neuron0x1d98060()*-0.372494);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99dd0() {
   return (neuron0x1d983a0()*-0.623167);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a150() {
   return (neuron0x1d976a0()*-0.0147707);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a190() {
   return (neuron0x1d979e0()*0.00297366);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a1d0() {
   return (neuron0x1d97d20()*0.0556045);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a210() {
   return (neuron0x1d98060()*-5.07061);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a250() {
   return (neuron0x1d983a0()*-5.7906);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a5d0() {
   return (neuron0x1d976a0()*0.530074);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a610() {
   return (neuron0x1d979e0()*-0.618585);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a650() {
   return (neuron0x1d97d20()*-0.204826);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99840() {
   return (neuron0x1d98060()*0.450438);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99880() {
   return (neuron0x1d983a0()*-0.339336);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ab50() {
   return (neuron0x1d976a0()*0.0316293);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ab90() {
   return (neuron0x1d979e0()*0.000313664);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9abd0() {
   return (neuron0x1d97d20()*0.00119804);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ac10() {
   return (neuron0x1d98060()*0.0369858);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ac50() {
   return (neuron0x1d983a0()*-0.710058);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9afd0() {
   return (neuron0x1d976a0()*0.646798);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b010() {
   return (neuron0x1d979e0()*0.0159178);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b050() {
   return (neuron0x1d97d20()*0.265384);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b090() {
   return (neuron0x1d98060()*-6.5929);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b0d0() {
   return (neuron0x1d983a0()*-3.20761);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b450() {
   return (neuron0x1d976a0()*2.61582);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b490() {
   return (neuron0x1d979e0()*0.0104049);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b4d0() {
   return (neuron0x1d97d20()*0.624676);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b510() {
   return (neuron0x1d98060()*-0.620582);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b550() {
   return (neuron0x1d983a0()*0.406998);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b8d0() {
   return (neuron0x1d976a0()*0.270882);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b910() {
   return (neuron0x1d979e0()*0.0350907);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b950() {
   return (neuron0x1d97d20()*0.752873);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b990() {
   return (neuron0x1d98060()*-2.47219);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b9d0() {
   return (neuron0x1d983a0()*-2.43586);
}

double nnFunc_25_25hi_3000ep__::synapse0x1c96830() {
   return (neuron0x1d976a0()*-0.661112);
}

double nnFunc_25_25hi_3000ep__::synapse0x1c96870() {
   return (neuron0x1d979e0()*0.304741);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9be60() {
   return (neuron0x1d97d20()*0.514309);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bea0() {
   return (neuron0x1d98060()*-1.42627);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bee0() {
   return (neuron0x1d983a0()*0.0920979);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c260() {
   return (neuron0x1d976a0()*-0.0288659);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c2a0() {
   return (neuron0x1d979e0()*0.0878679);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c2e0() {
   return (neuron0x1d97d20()*-0.232263);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c320() {
   return (neuron0x1d98060()*-10.6273);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c360() {
   return (neuron0x1d983a0()*-0.749958);
}

double nnFunc_25_25hi_3000ep__::synapse0x1c97000() {
   return (neuron0x1d976a0()*0.242829);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a820() {
   return (neuron0x1d979e0()*0.0887649);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a860() {
   return (neuron0x1d97d20()*0.455164);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c7b0() {
   return (neuron0x1d98060()*-4.18323);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c7f0() {
   return (neuron0x1d983a0()*-0.880963);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cb70() {
   return (neuron0x1d976a0()*3.19989);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cbb0() {
   return (neuron0x1d979e0()*-0.00554847);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cbf0() {
   return (neuron0x1d97d20()*1.7255);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cc30() {
   return (neuron0x1d98060()*1.83484);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cc70() {
   return (neuron0x1d983a0()*4.50015);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cff0() {
   return (neuron0x1d976a0()*0.0250128);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d978c0() {
   return (neuron0x1d979e0()*-0.0159143);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d97900() {
   return (neuron0x1d97d20()*0.0306884);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d97c00() {
   return (neuron0x1d98060()*4.80926);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d97c40() {
   return (neuron0x1d983a0()*5.85688);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9d710() {
   return (neuron0x1d976a0()*-0.490944);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9d750() {
   return (neuron0x1d979e0()*-0.318816);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9d790() {
   return (neuron0x1d97d20()*-0.0579913);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9d7d0() {
   return (neuron0x1d98060()*5.62208);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9d810() {
   return (neuron0x1d983a0()*0.140022);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9db90() {
   return (neuron0x1d976a0()*3.04995);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9dbd0() {
   return (neuron0x1d979e0()*-0.0120252);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9dc10() {
   return (neuron0x1d97d20()*1.09481);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9dc50() {
   return (neuron0x1d98060()*9.89931);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9dc90() {
   return (neuron0x1d983a0()*10.7834);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e010() {
   return (neuron0x1d976a0()*-0.555888);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e050() {
   return (neuron0x1d979e0()*0.0352955);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e090() {
   return (neuron0x1d97d20()*0.559765);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e0d0() {
   return (neuron0x1d98060()*10.9219);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e110() {
   return (neuron0x1d983a0()*4.97486);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e490() {
   return (neuron0x1d976a0()*-0.537073);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e4d0() {
   return (neuron0x1d979e0()*0.433169);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e510() {
   return (neuron0x1d97d20()*-0.122928);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e550() {
   return (neuron0x1d98060()*-2.61992);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e590() {
   return (neuron0x1d983a0()*-0.309767);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e910() {
   return (neuron0x1d976a0()*-0.564301);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e950() {
   return (neuron0x1d979e0()*-0.0500223);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e990() {
   return (neuron0x1d97d20()*-0.534394);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e9d0() {
   return (neuron0x1d98060()*-1.26582);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ea10() {
   return (neuron0x1d983a0()*-0.266595);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ed90() {
   return (neuron0x1d976a0()*-0.0203307);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9edd0() {
   return (neuron0x1d979e0()*-0.115199);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ee10() {
   return (neuron0x1d97d20()*0.140167);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ee50() {
   return (neuron0x1d98060()*-1.92166);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ee90() {
   return (neuron0x1d983a0()*-0.513693);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f210() {
   return (neuron0x1d976a0()*0.0685754);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f250() {
   return (neuron0x1d979e0()*0.0255174);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f290() {
   return (neuron0x1d97d20()*0.474619);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f2d0() {
   return (neuron0x1d98060()*-1.43313);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f310() {
   return (neuron0x1d983a0()*-0.109308);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f690() {
   return (neuron0x1d976a0()*4.28402);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f6d0() {
   return (neuron0x1d979e0()*-0.014828);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f710() {
   return (neuron0x1d97d20()*1.77813);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f750() {
   return (neuron0x1d98060()*10.5072);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f790() {
   return (neuron0x1d983a0()*12.1074);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fb10() {
   return (neuron0x1d976a0()*-0.755072);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fb50() {
   return (neuron0x1d979e0()*0.17269);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fb90() {
   return (neuron0x1d97d20()*0.00266766);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fbd0() {
   return (neuron0x1d98060()*-1.0855);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fc10() {
   return (neuron0x1d983a0()*-0.418336);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99730() {
   return (neuron0x1d98810()*0.879465);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99770() {
   return (neuron0x1d98b80()*-0.282186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99c40() {
   return (neuron0x1d99000()*-8.06213);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99c80() {
   return (neuron0x1d99480()*-2.29483);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a0c0() {
   return (neuron0x1d99990()*0.265003);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a100() {
   return (neuron0x1d99e10()*-3.44854);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a540() {
   return (neuron0x1d9a290()*0.224093);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a580() {
   return (neuron0x1d9a8a0()*-0.401795);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9aac0() {
   return (neuron0x1d9ac90()*-5.99822);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ab00() {
   return (neuron0x1d9b110()*-0.31049);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9af40() {
   return (neuron0x1d9b590()*-0.286574);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9af80() {
   return (neuron0x1d9ba10()*-1.69709);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b3c0() {
   return (neuron0x1d9bf20()*-2.98742);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b400() {
   return (neuron0x1d9a690()*0.479006);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b840() {
   return (neuron0x1d9c830()*2.51735);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b880() {
   return (neuron0x1d9ccb0()*7.21772);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bcc0() {
   return (neuron0x1d9d580()*1.4579);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bd00() {
   return (neuron0x1d9d850()*9.04556);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c1d0() {
   return (neuron0x1d9dcd0()*-1.17377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c210() {
   return (neuron0x1d9e150()*0.160355);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cae0() {
   return (neuron0x1d9e5d0()*-0.870803);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cb20() {
   return (neuron0x1d9ea50()*-1.111);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cf60() {
   return (neuron0x1d9eed0()*-0.339559);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cfa0() {
   return (neuron0x1d9f350()*-7.10409);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d985c0() {
   return (neuron0x1d9f7d0()*-0.0156349);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c640() {
   return (neuron0x1d98810()*0.408739);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c680() {
   return (neuron0x1d98b80()*0.162924);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c6c0() {
   return (neuron0x1d99000()*2.39234);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c700() {
   return (neuron0x1d99480()*0.100094);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c740() {
   return (neuron0x1d99990()*-0.425024);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98600() {
   return (neuron0x1d99e10()*0.316838);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e880() {
   return (neuron0x1d9a290()*-0.492059);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e8c0() {
   return (neuron0x1d9a8a0()*1.15252);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ed00() {
   return (neuron0x1d9ac90()*1.39651);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ed40() {
   return (neuron0x1d9b110()*0.474362);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f180() {
   return (neuron0x1d9b590()*0.478136);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f1c0() {
   return (neuron0x1d9ba10()*-0.430689);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f600() {
   return (neuron0x1d9bf20()*-1.14714);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f640() {
   return (neuron0x1d9a690()*-0.367177);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fa80() {
   return (neuron0x1d9c830()*-0.233776);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fac0() {
   return (neuron0x1d9ccb0()*2.32052);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98a30() {
   return (neuron0x1d9d580()*-0.580246);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98a70() {
   return (neuron0x1d9d850()*-0.34817);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9db00() {
   return (neuron0x1d9dcd0()*0.846514);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9db40() {
   return (neuron0x1d9e150()*0.339771);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ca48c0() {
   return (neuron0x1d9e5d0()*-0.39316);
}

double nnFunc_25_25hi_3000ep__::synapse0x1ca4900() {
   return (neuron0x1d9ea50()*-0.303785);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2190() {
   return (neuron0x1d9eed0()*-0.604417);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da21d0() {
   return (neuron0x1d9f350()*-0.371934);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2210() {
   return (neuron0x1d9f7d0()*-0.149235);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bd50() {
   return (neuron0x1d98810()*-0.0930718);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bd90() {
   return (neuron0x1d98b80()*0.340736);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bdd0() {
   return (neuron0x1d99000()*2.86775);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9be10() {
   return (neuron0x1d99480()*-0.579993);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da27a0() {
   return (neuron0x1d99990()*-0.348399);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da27e0() {
   return (neuron0x1d99e10()*-0.398827);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2820() {
   return (neuron0x1d9a290()*-0.1112);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2860() {
   return (neuron0x1d9a8a0()*0.819452);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da28a0() {
   return (neuron0x1d9ac90()*0.532769);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da28e0() {
   return (neuron0x1d9b110()*-0.798895);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2920() {
   return (neuron0x1d9b590()*0.396898);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2960() {
   return (neuron0x1d9ba10()*0.529536);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da29a0() {
   return (neuron0x1d9bf20()*0.867868);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da29e0() {
   return (neuron0x1d9a690()*-0.791502);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2a20() {
   return (neuron0x1d9c830()*0.723913);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2a60() {
   return (neuron0x1d9ccb0()*-1.22446);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da23e0() {
   return (neuron0x1d9d580()*-1.12661);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2420() {
   return (neuron0x1d9d850()*0.022151);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2bb0() {
   return (neuron0x1d9dcd0()*2.48284);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2bf0() {
   return (neuron0x1d9e150()*-0.112142);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2c30() {
   return (neuron0x1d9e5d0()*0.0529628);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2c70() {
   return (neuron0x1d9ea50()*-0.529217);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2cb0() {
   return (neuron0x1d9eed0()*-0.285489);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2cf0() {
   return (neuron0x1d9f350()*3.83159);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2d30() {
   return (neuron0x1d9f7d0()*-0.0135412);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da30b0() {
   return (neuron0x1d98810()*-0.920907);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da30f0() {
   return (neuron0x1d98b80()*0.232959);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3130() {
   return (neuron0x1d99000()*1.07155);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3170() {
   return (neuron0x1d99480()*0.717117);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da31b0() {
   return (neuron0x1d99990()*-0.445343);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da31f0() {
   return (neuron0x1d99e10()*3.86141);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3230() {
   return (neuron0x1d9a290()*0.176896);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3270() {
   return (neuron0x1d9a8a0()*0.206398);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da32b0() {
   return (neuron0x1d9ac90()*3.51118);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da32f0() {
   return (neuron0x1d9b110()*-0.274388);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3330() {
   return (neuron0x1d9b590()*0.360485);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3370() {
   return (neuron0x1d9ba10()*0.901906);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da33b0() {
   return (neuron0x1d9bf20()*2.44832);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da33f0() {
   return (neuron0x1d9a690()*-1.38243);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3430() {
   return (neuron0x1d9c830()*2.35301);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3470() {
   return (neuron0x1d9ccb0()*-2.24795);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2f00() {
   return (neuron0x1d9d580()*-2.03017);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2f40() {
   return (neuron0x1d9d850()*-1.14704);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da35c0() {
   return (neuron0x1d9dcd0()*-0.508342);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3600() {
   return (neuron0x1d9e150()*-0.822169);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3640() {
   return (neuron0x1d9e5d0()*0.734181);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3680() {
   return (neuron0x1d9ea50()*0.0609073);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da36c0() {
   return (neuron0x1d9eed0()*-0.651926);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3700() {
   return (neuron0x1d9f350()*1.6225);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3740() {
   return (neuron0x1d9f7d0()*-0.421507);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3ac0() {
   return (neuron0x1d98810()*-0.829425);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3b00() {
   return (neuron0x1d98b80()*0.205827);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3b40() {
   return (neuron0x1d99000()*0.845547);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3b80() {
   return (neuron0x1d99480()*-0.0461419);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3bc0() {
   return (neuron0x1d99990()*0.0666429);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3c00() {
   return (neuron0x1d99e10()*0.777905);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3c40() {
   return (neuron0x1d9a290()*0.110543);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3c80() {
   return (neuron0x1d9a8a0()*-0.324691);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3cc0() {
   return (neuron0x1d9ac90()*1.05801);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3d00() {
   return (neuron0x1d9b110()*-0.182318);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3d40() {
   return (neuron0x1d9b590()*-0.0872924);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3d80() {
   return (neuron0x1d9ba10()*1.56497);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3dc0() {
   return (neuron0x1d9bf20()*1.98013);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3e00() {
   return (neuron0x1d9a690()*-0.651469);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3e40() {
   return (neuron0x1d9c830()*1.14083);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3e80() {
   return (neuron0x1d9ccb0()*-1.48113);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3910() {
   return (neuron0x1d9d580()*-1.26657);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3950() {
   return (neuron0x1d9d850()*-0.765559);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da3fd0() {
   return (neuron0x1d9dcd0()*0.632244);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4010() {
   return (neuron0x1d9e150()*0.0825793);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4050() {
   return (neuron0x1d9e5d0()*0.459149);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4090() {
   return (neuron0x1d9ea50()*-0.212748);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da40d0() {
   return (neuron0x1d9eed0()*0.0422834);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4110() {
   return (neuron0x1d9f350()*1.3559);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4150() {
   return (neuron0x1d9f7d0()*-0.491298);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da44d0() {
   return (neuron0x1d98810()*0.741579);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4510() {
   return (neuron0x1d98b80()*0.318995);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4550() {
   return (neuron0x1d99000()*-0.258456);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4590() {
   return (neuron0x1d99480()*0.07366);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da45d0() {
   return (neuron0x1d99990()*-0.00559087);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4610() {
   return (neuron0x1d99e10()*-1.46668);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4650() {
   return (neuron0x1d9a290()*-0.0161616);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1870() {
   return (neuron0x1d9a8a0()*0.348437);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da18b0() {
   return (neuron0x1d9ac90()*-1.80986);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da18f0() {
   return (neuron0x1d9b110()*-0.542932);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1930() {
   return (neuron0x1d9b590()*-0.515717);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1970() {
   return (neuron0x1d9ba10()*-1.06514);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da19b0() {
   return (neuron0x1d9bf20()*-0.347709);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da19f0() {
   return (neuron0x1d9a690()*-0.534139);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1a30() {
   return (neuron0x1d9c830()*-1.12508);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1a70() {
   return (neuron0x1d9ccb0()*-0.348714);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4320() {
   return (neuron0x1d9d580()*0.387579);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da4360() {
   return (neuron0x1d9d850()*0.38063);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1bc0() {
   return (neuron0x1d9dcd0()*-0.270176);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1c00() {
   return (neuron0x1d9e150()*-0.122217);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1c40() {
   return (neuron0x1d9e5d0()*-0.26233);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1c80() {
   return (neuron0x1d9ea50()*-0.441588);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1cc0() {
   return (neuron0x1d9eed0()*-0.234305);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1d00() {
   return (neuron0x1d9f350()*-1.65166);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1d40() {
   return (neuron0x1d9f7d0()*0.140772);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da2030() {
   return (neuron0x1d98810()*1.31704);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5730() {
   return (neuron0x1d98b80()*0.11723);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5770() {
   return (neuron0x1d99000()*-9.09236);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da57b0() {
   return (neuron0x1d99480()*2.17077);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da57f0() {
   return (neuron0x1d99990()*0.251933);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5830() {
   return (neuron0x1d99e10()*-2.43359);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5870() {
   return (neuron0x1d9a290()*0.262833);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da58b0() {
   return (neuron0x1d9a8a0()*-0.292863);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da58f0() {
   return (neuron0x1d9ac90()*-1.4993);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5930() {
   return (neuron0x1d9b110()*0.196686);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5970() {
   return (neuron0x1d9b590()*0.306334);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da59b0() {
   return (neuron0x1d9ba10()*-1.55281);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da59f0() {
   return (neuron0x1d9bf20()*-1.81586);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5a30() {
   return (neuron0x1d9a690()*0.633699);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5a70() {
   return (neuron0x1d9c830()*-0.617907);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5ab0() {
   return (neuron0x1d9ccb0()*6.07623);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1f10() {
   return (neuron0x1d9d580()*1.3844);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da1f50() {
   return (neuron0x1d9d850()*2.27089);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5c00() {
   return (neuron0x1d9dcd0()*0.511992);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5c40() {
   return (neuron0x1d9e150()*0.385555);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5c80() {
   return (neuron0x1d9e5d0()*-1.16821);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5cc0() {
   return (neuron0x1d9ea50()*-0.0254543);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5d00() {
   return (neuron0x1d9eed0()*0.630136);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5d40() {
   return (neuron0x1d9f350()*-9.93816);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5d80() {
   return (neuron0x1d9f7d0()*-0.296212);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6100() {
   return (neuron0x1d98810()*-1.26047);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6140() {
   return (neuron0x1d98b80()*0.163613);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6180() {
   return (neuron0x1d99000()*3.23266);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da61c0() {
   return (neuron0x1d99480()*-0.113107);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6200() {
   return (neuron0x1d99990()*-0.00736018);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6240() {
   return (neuron0x1d99e10()*1.51722);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6280() {
   return (neuron0x1d9a290()*-0.144923);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da62c0() {
   return (neuron0x1d9a8a0()*0.56344);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6300() {
   return (neuron0x1d9ac90()*1.84676);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6340() {
   return (neuron0x1d9b110()*0.0456616);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6380() {
   return (neuron0x1d9b590()*0.439595);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da63c0() {
   return (neuron0x1d9ba10()*1.66184);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6400() {
   return (neuron0x1d9bf20()*2.91734);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6440() {
   return (neuron0x1d9a690()*-0.268376);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6480() {
   return (neuron0x1d9c830()*0.618977);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da64c0() {
   return (neuron0x1d9ccb0()*-2.66345);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5f50() {
   return (neuron0x1d9d580()*-1.63179);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5f90() {
   return (neuron0x1d9d850()*-2.61085);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6610() {
   return (neuron0x1d9dcd0()*1.32237);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6650() {
   return (neuron0x1d9e150()*-0.247524);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6690() {
   return (neuron0x1d9e5d0()*0.623475);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da66d0() {
   return (neuron0x1d9ea50()*0.40007);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6710() {
   return (neuron0x1d9eed0()*0.262253);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6750() {
   return (neuron0x1d9f350()*2.23165);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6790() {
   return (neuron0x1d9f7d0()*0.440442);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6b10() {
   return (neuron0x1d98810()*0.514726);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6b50() {
   return (neuron0x1d98b80()*0.496557);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6b90() {
   return (neuron0x1d99000()*-1.49178);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6bd0() {
   return (neuron0x1d99480()*-0.154307);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6c10() {
   return (neuron0x1d99990()*0.546301);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6c50() {
   return (neuron0x1d99e10()*-1.0772);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6c90() {
   return (neuron0x1d9a290()*0.296635);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6cd0() {
   return (neuron0x1d9a8a0()*0.429577);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6d10() {
   return (neuron0x1d9ac90()*-1.82286);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6d50() {
   return (neuron0x1d9b110()*-0.820217);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6d90() {
   return (neuron0x1d9b590()*-0.817038);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6dd0() {
   return (neuron0x1d9ba10()*-1.31141);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6e10() {
   return (neuron0x1d9bf20()*-2.33101);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6e50() {
   return (neuron0x1d9a690()*0.428832);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6e90() {
   return (neuron0x1d9c830()*-1.38654);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6ed0() {
   return (neuron0x1d9ccb0()*1.25555);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da6960() {
   return (neuron0x1d9d580()*0.667284);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da69a0() {
   return (neuron0x1d9d850()*1.1723);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7020() {
   return (neuron0x1d9dcd0()*-1.3077);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7060() {
   return (neuron0x1d9e150()*-0.0554322);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da70a0() {
   return (neuron0x1d9e5d0()*-0.426137);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da70e0() {
   return (neuron0x1d9ea50()*0.489019);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7120() {
   return (neuron0x1d9eed0()*-0.362786);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7160() {
   return (neuron0x1d9f350()*-1.49381);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da71a0() {
   return (neuron0x1d9f7d0()*-0.0795265);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7520() {
   return (neuron0x1d98810()*0.756477);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7560() {
   return (neuron0x1d98b80()*-0.194571);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da75a0() {
   return (neuron0x1d99000()*-1.84995);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da75e0() {
   return (neuron0x1d99480()*-0.55162);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7620() {
   return (neuron0x1d99990()*0.104177);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7660() {
   return (neuron0x1d99e10()*-1.26397);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da76a0() {
   return (neuron0x1d9a290()*-0.2167);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da76e0() {
   return (neuron0x1d9a8a0()*-0.341186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7720() {
   return (neuron0x1d9ac90()*-1.72323);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7760() {
   return (neuron0x1d9b110()*0.0178866);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da77a0() {
   return (neuron0x1d9b590()*-0.17506);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da77e0() {
   return (neuron0x1d9ba10()*-0.800427);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7820() {
   return (neuron0x1d9bf20()*-1.5718);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7860() {
   return (neuron0x1d9a690()*0.853497);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da78a0() {
   return (neuron0x1d9c830()*-1.52782);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da78e0() {
   return (neuron0x1d9ccb0()*1.29568);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7370() {
   return (neuron0x1d9d580()*0.81831);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da73b0() {
   return (neuron0x1d9d850()*0.475018);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7a30() {
   return (neuron0x1d9dcd0()*0.188831);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7a70() {
   return (neuron0x1d9e150()*0.537706);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7ab0() {
   return (neuron0x1d9e5d0()*-0.76945);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7af0() {
   return (neuron0x1d9ea50()*0.290203);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7b30() {
   return (neuron0x1d9eed0()*0.275205);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7b70() {
   return (neuron0x1d9f350()*-1.03479);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7bb0() {
   return (neuron0x1d9f7d0()*0.335069);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7f30() {
   return (neuron0x1d98810()*0.170576);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7f70() {
   return (neuron0x1d98b80()*0.218643);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7fb0() {
   return (neuron0x1d99000()*-0.704842);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7ff0() {
   return (neuron0x1d99480()*-0.366358);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8030() {
   return (neuron0x1d99990()*0.077845);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8070() {
   return (neuron0x1d99e10()*-0.295425);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da80b0() {
   return (neuron0x1d9a290()*-0.530653);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da80f0() {
   return (neuron0x1d9a8a0()*0.520326);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8130() {
   return (neuron0x1d9ac90()*-1.38374);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8170() {
   return (neuron0x1d9b110()*-0.355123);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da81b0() {
   return (neuron0x1d9b590()*-0.512758);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da81f0() {
   return (neuron0x1d9ba10()*-0.43547);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8230() {
   return (neuron0x1d9bf20()*-1.2536);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8270() {
   return (neuron0x1d9a690()*0.336602);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da82b0() {
   return (neuron0x1d9c830()*-0.404166);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da82f0() {
   return (neuron0x1d9ccb0()*1.12698);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7d80() {
   return (neuron0x1d9d580()*0.318018);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da7dc0() {
   return (neuron0x1d9d850()*0.932114);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8440() {
   return (neuron0x1d9dcd0()*-0.113322);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8480() {
   return (neuron0x1d9e150()*-0.294028);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da84c0() {
   return (neuron0x1d9e5d0()*-0.676516);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8500() {
   return (neuron0x1d9ea50()*0.40725);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8540() {
   return (neuron0x1d9eed0()*-0.224989);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8580() {
   return (neuron0x1d9f350()*-1.33769);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da85c0() {
   return (neuron0x1d9f7d0()*0.364053);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8940() {
   return (neuron0x1d98810()*-0.167949);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8980() {
   return (neuron0x1d98b80()*0.370309);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da89c0() {
   return (neuron0x1d99000()*0.867446);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8a00() {
   return (neuron0x1d99480()*0.0720204);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8a40() {
   return (neuron0x1d99990()*-0.616963);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8a80() {
   return (neuron0x1d99e10()*0.658415);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8ac0() {
   return (neuron0x1d9a290()*-0.189846);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8b00() {
   return (neuron0x1d9a8a0()*-0.482563);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8b40() {
   return (neuron0x1d9ac90()*0.742743);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8b80() {
   return (neuron0x1d9b110()*0.168071);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8bc0() {
   return (neuron0x1d9b590()*-0.113815);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8c00() {
   return (neuron0x1d9ba10()*1.19561);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8c40() {
   return (neuron0x1d9bf20()*1.62222);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8c80() {
   return (neuron0x1d9a690()*0.194519);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8cc0() {
   return (neuron0x1d9c830()*1.11749);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8d00() {
   return (neuron0x1d9ccb0()*-0.999823);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8790() {
   return (neuron0x1d9d580()*-0.968169);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da87d0() {
   return (neuron0x1d9d850()*-0.982511);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8e50() {
   return (neuron0x1d9dcd0()*0.60094);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8e90() {
   return (neuron0x1d9e150()*-0.0825593);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8ed0() {
   return (neuron0x1d9e5d0()*0.466235);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8f10() {
   return (neuron0x1d9ea50()*0.313954);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8f50() {
   return (neuron0x1d9eed0()*-0.348156);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8f90() {
   return (neuron0x1d9f350()*0.870307);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da8fd0() {
   return (neuron0x1d9f7d0()*-0.317384);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9350() {
   return (neuron0x1d98810()*-0.535811);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9390() {
   return (neuron0x1d98b80()*0.136008);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da93d0() {
   return (neuron0x1d99000()*0.952984);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9410() {
   return (neuron0x1d99480()*-0.10801);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9450() {
   return (neuron0x1d99990()*-0.236764);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9490() {
   return (neuron0x1d99e10()*0.911779);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da94d0() {
   return (neuron0x1d9a290()*0.543598);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9510() {
   return (neuron0x1d9a8a0()*0.258178);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9550() {
   return (neuron0x1d9ac90()*0.592088);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9590() {
   return (neuron0x1d9b110()*0.35759);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da95d0() {
   return (neuron0x1d9b590()*0.626521);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9610() {
   return (neuron0x1d9ba10()*0.818943);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9650() {
   return (neuron0x1d9bf20()*1.22725);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9690() {
   return (neuron0x1d9a690()*0.118229);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da96d0() {
   return (neuron0x1d9c830()*0.380389);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9710() {
   return (neuron0x1d9ccb0()*-1.22964);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da91a0() {
   return (neuron0x1d9d580()*-1.14284);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da91e0() {
   return (neuron0x1d9d850()*-0.310036);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9860() {
   return (neuron0x1d9dcd0()*0.184558);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da98a0() {
   return (neuron0x1d9e150()*-0.0920317);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da98e0() {
   return (neuron0x1d9e5d0()*0.400898);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9920() {
   return (neuron0x1d9ea50()*0.102761);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9960() {
   return (neuron0x1d9eed0()*-0.394821);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da99a0() {
   return (neuron0x1d9f350()*1.01349);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da99e0() {
   return (neuron0x1d9f7d0()*-0.0736177);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9d60() {
   return (neuron0x1d98810()*-0.131622);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9da0() {
   return (neuron0x1d98b80()*0.439984);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9de0() {
   return (neuron0x1d99000()*-0.14663);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9e20() {
   return (neuron0x1d99480()*-0.823);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9e60() {
   return (neuron0x1d99990()*-0.0888706);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9ea0() {
   return (neuron0x1d99e10()*3.73574);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9ee0() {
   return (neuron0x1d9a290()*0.63122);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9f20() {
   return (neuron0x1d9a8a0()*0.197277);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9f60() {
   return (neuron0x1d9ac90()*2.52582);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9fa0() {
   return (neuron0x1d9b110()*-0.667172);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9fe0() {
   return (neuron0x1d9b590()*-1.33665);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa020() {
   return (neuron0x1d9ba10()*1.48042);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa060() {
   return (neuron0x1d9bf20()*1.93513);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa0a0() {
   return (neuron0x1d9a690()*-0.335009);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa0e0() {
   return (neuron0x1d9c830()*0.354624);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa120() {
   return (neuron0x1d9ccb0()*-11.5526);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9bb0() {
   return (neuron0x1d9d580()*-0.920404);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da9bf0() {
   return (neuron0x1d9d850()*-0.475169);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa270() {
   return (neuron0x1d9dcd0()*-1.17186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa2b0() {
   return (neuron0x1d9e150()*-0.342285);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa2f0() {
   return (neuron0x1d9e5d0()*0.0303994);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa330() {
   return (neuron0x1d9ea50()*0.217242);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa370() {
   return (neuron0x1d9eed0()*-0.623429);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa3b0() {
   return (neuron0x1d9f350()*-1.13484);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa3f0() {
   return (neuron0x1d9f7d0()*0.373425);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa770() {
   return (neuron0x1d98810()*-0.951826);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa7b0() {
   return (neuron0x1d98b80()*0.3054);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa7f0() {
   return (neuron0x1d99000()*1.02125);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa830() {
   return (neuron0x1d99480()*-0.396013);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa870() {
   return (neuron0x1d99990()*0.204719);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa8b0() {
   return (neuron0x1d99e10()*-0.125077);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa8f0() {
   return (neuron0x1d9a290()*0.37535);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa930() {
   return (neuron0x1d9a8a0()*0.0104454);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa970() {
   return (neuron0x1d9ac90()*0.854568);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa9b0() {
   return (neuron0x1d9b110()*0.362347);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa9f0() {
   return (neuron0x1d9b590()*-0.529356);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daaa30() {
   return (neuron0x1d9ba10()*1.2187);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daaa70() {
   return (neuron0x1d9bf20()*0.75349);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daaab0() {
   return (neuron0x1d9a690()*0.108917);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daaaf0() {
   return (neuron0x1d9c830()*0.733835);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daab30() {
   return (neuron0x1d9ccb0()*-0.32836);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa5c0() {
   return (neuron0x1d9d580()*-0.629473);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daa600() {
   return (neuron0x1d9d850()*-0.591749);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daac80() {
   return (neuron0x1d9dcd0()*1.32746);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daacc0() {
   return (neuron0x1d9e150()*0.500686);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daad00() {
   return (neuron0x1d9e5d0()*0.246395);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daad40() {
   return (neuron0x1d9ea50()*-0.0321242);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daad80() {
   return (neuron0x1d9eed0()*-0.69407);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daadc0() {
   return (neuron0x1d9f350()*2.11342);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daae00() {
   return (neuron0x1d9f7d0()*-0.476136);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dab180() {
   return (neuron0x1d98810()*0.902333);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d989a0() {
   return (neuron0x1d98b80()*0.0347039);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d989e0() {
   return (neuron0x1d99000()*-0.201293);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98da0() {
   return (neuron0x1d99480()*-0.147308);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98de0() {
   return (neuron0x1d99990()*-0.000306935);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99220() {
   return (neuron0x1d99e10()*-2.23196);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99260() {
   return (neuron0x1d9a290()*0.263041);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d996a0() {
   return (neuron0x1d9a8a0()*0.0348746);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d996e0() {
   return (neuron0x1d9ac90()*-0.877063);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99bb0() {
   return (neuron0x1d9b110()*-0.0287062);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d99bf0() {
   return (neuron0x1d9b590()*3.13396);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a030() {
   return (neuron0x1d9ba10()*-1.2884);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a070() {
   return (neuron0x1d9bf20()*-0.320192);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a4b0() {
   return (neuron0x1d9a690()*-0.0322571);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9a4f0() {
   return (neuron0x1d9c830()*0.425905);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9aa30() {
   return (neuron0x1d9ccb0()*3.42809);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9aa70() {
   return (neuron0x1d9d580()*0.816882);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9aeb0() {
   return (neuron0x1d9d850()*3.40311);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9aef0() {
   return (neuron0x1d9dcd0()*-1.4901);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b330() {
   return (neuron0x1d9e150()*-0.200701);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b370() {
   return (neuron0x1d9e5d0()*-0.323003);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b7b0() {
   return (neuron0x1d9ea50()*-0.153689);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9b7f0() {
   return (neuron0x1d9eed0()*0.785869);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bc30() {
   return (neuron0x1d9f350()*0.0385853);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9bc70() {
   return (neuron0x1d9f7d0()*-1.04297);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da55f0() {
   return (neuron0x1d98810()*0.776099);
}

double nnFunc_25_25hi_3000ep__::synapse0x1da5630() {
   return (neuron0x1d98b80()*0.0372085);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ced0() {
   return (neuron0x1d99000()*-2.25942);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9cf10() {
   return (neuron0x1d99480()*-0.338176);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daafd0() {
   return (neuron0x1d99990()*0.266073);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dab010() {
   return (neuron0x1d99e10()*-0.24164);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98280() {
   return (neuron0x1d9a290()*-0.0337682);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d982c0() {
   return (neuron0x1d9a8a0()*-0.475802);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9da70() {
   return (neuron0x1d9ac90()*-1.81551);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9dab0() {
   return (neuron0x1d9b110()*0.408196);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9def0() {
   return (neuron0x1d9b590()*-1.18832);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9df30() {
   return (neuron0x1d9ba10()*-0.851988);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e370() {
   return (neuron0x1d9bf20()*-2.07493);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e3b0() {
   return (neuron0x1d9a690()*-0.21686);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e7f0() {
   return (neuron0x1d9c830()*0.0155991);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9e830() {
   return (neuron0x1d9ccb0()*1.66644);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ec70() {
   return (neuron0x1d9d580()*0.711357);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9ecb0() {
   return (neuron0x1d9d850()*1.87408);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f0f0() {
   return (neuron0x1d9dcd0()*-1.28389);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f130() {
   return (neuron0x1d9e150()*0.314674);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f570() {
   return (neuron0x1d9e5d0()*-1.36105);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f5b0() {
   return (neuron0x1d9ea50()*-1.01871);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9f9f0() {
   return (neuron0x1d9eed0()*-0.149894);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9fa30() {
   return (neuron0x1d9f350()*-1.57892);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c140() {
   return (neuron0x1d9f7d0()*-0.053644);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d9c180() {
   return (neuron0x1d98810()*0.726639);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae3f0() {
   return (neuron0x1d98b80()*-0.599144);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae430() {
   return (neuron0x1d99000()*-6.62323);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae470() {
   return (neuron0x1d99480()*-1.08629);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae4b0() {
   return (neuron0x1d99990()*-0.223771);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae4f0() {
   return (neuron0x1d99e10()*-3.37393);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae530() {
   return (neuron0x1d9a290()*-0.0992439);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae570() {
   return (neuron0x1d9a8a0()*-0.787283);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae5b0() {
   return (neuron0x1d9ac90()*-2.74299);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae5f0() {
   return (neuron0x1d9b110()*-1.69619);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae630() {
   return (neuron0x1d9b590()*-0.63384);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae670() {
   return (neuron0x1d9ba10()*-1.9598);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae6b0() {
   return (neuron0x1d9bf20()*-3.14612);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae6f0() {
   return (neuron0x1d9a690()*0.603208);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae730() {
   return (neuron0x1d9c830()*1.58235);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae770() {
   return (neuron0x1d9ccb0()*5.58446);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae240() {
   return (neuron0x1d9d580()*1.09133);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae280() {
   return (neuron0x1d9d850()*8.88875);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae8c0() {
   return (neuron0x1d9dcd0()*-6.36967);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae900() {
   return (neuron0x1d9e150()*0.629035);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae940() {
   return (neuron0x1d9e5d0()*-0.74411);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae980() {
   return (neuron0x1d9ea50()*-0.688029);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dae9c0() {
   return (neuron0x1d9eed0()*-1.13882);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daea00() {
   return (neuron0x1d9f350()*-2.26847);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daea40() {
   return (neuron0x1d9f7d0()*-1.133);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daedc0() {
   return (neuron0x1d98810()*-0.0579869);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daee00() {
   return (neuron0x1d98b80()*-0.382789);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daee40() {
   return (neuron0x1d99000()*-0.232192);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daee80() {
   return (neuron0x1d99480()*-0.0720377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daeec0() {
   return (neuron0x1d99990()*-0.291072);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daef00() {
   return (neuron0x1d99e10()*-0.439992);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daef40() {
   return (neuron0x1d9a290()*-0.160915);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daef80() {
   return (neuron0x1d9a8a0()*0.250355);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daefc0() {
   return (neuron0x1d9ac90()*-0.134229);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf000() {
   return (neuron0x1d9b110()*-0.470905);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf040() {
   return (neuron0x1d9b590()*-0.274638);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf080() {
   return (neuron0x1d9ba10()*0.167694);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf0c0() {
   return (neuron0x1d9bf20()*-0.377996);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf100() {
   return (neuron0x1d9a690()*-0.11532);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf140() {
   return (neuron0x1d9c830()*-0.785151);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf180() {
   return (neuron0x1d9ccb0()*0.158944);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daec10() {
   return (neuron0x1d9d580()*-0.355796);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daec50() {
   return (neuron0x1d9d850()*-0.341912);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf2d0() {
   return (neuron0x1d9dcd0()*0.382032);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf310() {
   return (neuron0x1d9e150()*0.185336);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf350() {
   return (neuron0x1d9e5d0()*-0.0609557);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf390() {
   return (neuron0x1d9ea50()*0.205473);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf3d0() {
   return (neuron0x1d9eed0()*0.280085);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf410() {
   return (neuron0x1d9f350()*-0.546808);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf450() {
   return (neuron0x1d9f7d0()*-0.00544841);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf7d0() {
   return (neuron0x1d98810()*0.87322);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf810() {
   return (neuron0x1d98b80()*0.19691);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf850() {
   return (neuron0x1d99000()*-1.30318);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf890() {
   return (neuron0x1d99480()*0.487716);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf8d0() {
   return (neuron0x1d99990()*0.460519);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf910() {
   return (neuron0x1d99e10()*-0.26726);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf950() {
   return (neuron0x1d9a290()*0.333904);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf990() {
   return (neuron0x1d9a8a0()*-0.177347);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf9d0() {
   return (neuron0x1d9ac90()*-1.05242);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafa10() {
   return (neuron0x1d9b110()*-0.192811);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafa50() {
   return (neuron0x1d9b590()*-0.402939);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafa90() {
   return (neuron0x1d9ba10()*-0.611804);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafad0() {
   return (neuron0x1d9bf20()*-0.826252);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafb10() {
   return (neuron0x1d9a690()*0.63741);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafb50() {
   return (neuron0x1d9c830()*-0.105346);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafb90() {
   return (neuron0x1d9ccb0()*1.34832);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf620() {
   return (neuron0x1d9d580()*1.07373);
}

double nnFunc_25_25hi_3000ep__::synapse0x1daf660() {
   return (neuron0x1d9d850()*0.386464);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafce0() {
   return (neuron0x1d9dcd0()*-0.307315);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafd20() {
   return (neuron0x1d9e150()*0.290998);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafd60() {
   return (neuron0x1d9e5d0()*0.500601);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafda0() {
   return (neuron0x1d9ea50()*0.292584);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafde0() {
   return (neuron0x1d9eed0()*0.871834);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafe20() {
   return (neuron0x1d9f350()*-0.934863);
}

double nnFunc_25_25hi_3000ep__::synapse0x1dafe60() {
   return (neuron0x1d9f7d0()*0.252371);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db01e0() {
   return (neuron0x1d98810()*-0.224735);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0220() {
   return (neuron0x1d98b80()*-0.528635);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0260() {
   return (neuron0x1d99000()*-1.24245);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db02a0() {
   return (neuron0x1d99480()*-0.201936);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db02e0() {
   return (neuron0x1d99990()*-0.048375);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0320() {
   return (neuron0x1d99e10()*1.6364);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0360() {
   return (neuron0x1d9a290()*0.580494);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db03a0() {
   return (neuron0x1d9a8a0()*0.40124);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db03e0() {
   return (neuron0x1d9ac90()*2.86871);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0420() {
   return (neuron0x1d9b110()*0.256268);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0460() {
   return (neuron0x1d9b590()*-0.104169);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db04a0() {
   return (neuron0x1d9ba10()*0.677565);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db04e0() {
   return (neuron0x1d9bf20()*1.18958);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0520() {
   return (neuron0x1d9a690()*-0.802819);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0560() {
   return (neuron0x1d9c830()*0.197283);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db05a0() {
   return (neuron0x1d9ccb0()*-1.92032);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0030() {
   return (neuron0x1d9d580()*-1.62238);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0070() {
   return (neuron0x1d9d850()*-1.40103);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db06f0() {
   return (neuron0x1d9dcd0()*0.629897);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0730() {
   return (neuron0x1d9e150()*-0.203318);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0770() {
   return (neuron0x1d9e5d0()*0.415931);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db07b0() {
   return (neuron0x1d9ea50()*-0.472965);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db07f0() {
   return (neuron0x1d9eed0()*-0.882533);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0830() {
   return (neuron0x1d9f350()*0.280455);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0870() {
   return (neuron0x1d9f7d0()*-0.866669);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0bf0() {
   return (neuron0x1d98810()*0.827632);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0c30() {
   return (neuron0x1d98b80()*0.230319);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0c70() {
   return (neuron0x1d99000()*-0.794218);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0cb0() {
   return (neuron0x1d99480()*0.017331);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0cf0() {
   return (neuron0x1d99990()*0.531252);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0d30() {
   return (neuron0x1d99e10()*-0.28419);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0d70() {
   return (neuron0x1d9a290()*0.0382856);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0db0() {
   return (neuron0x1d9a8a0()*-0.372644);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0df0() {
   return (neuron0x1d9ac90()*-2.36866);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0e30() {
   return (neuron0x1d9b110()*0.586803);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0e70() {
   return (neuron0x1d9b590()*1.43967);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0eb0() {
   return (neuron0x1d9ba10()*-1.09592);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0ef0() {
   return (neuron0x1d9bf20()*-1.36779);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0f30() {
   return (neuron0x1d9a690()*0.4797);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0f70() {
   return (neuron0x1d9c830()*-1.91224);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0fb0() {
   return (neuron0x1d9ccb0()*0.956595);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0a40() {
   return (neuron0x1d9d580()*1.80939);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db0a80() {
   return (neuron0x1d9d850()*1.48798);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1100() {
   return (neuron0x1d9dcd0()*0.671518);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1140() {
   return (neuron0x1d9e150()*0.186707);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1180() {
   return (neuron0x1d9e5d0()*-0.426749);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db11c0() {
   return (neuron0x1d9ea50()*0.063364);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1200() {
   return (neuron0x1d9eed0()*0.698649);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1240() {
   return (neuron0x1d9f350()*-2.06585);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1280() {
   return (neuron0x1d9f7d0()*-0.0665442);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1600() {
   return (neuron0x1d98810()*0.12453);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1640() {
   return (neuron0x1d98b80()*-0.223247);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1680() {
   return (neuron0x1d99000()*-2.10565);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db16c0() {
   return (neuron0x1d99480()*0.90136);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1700() {
   return (neuron0x1d99990()*-0.525039);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1740() {
   return (neuron0x1d99e10()*0.875467);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1780() {
   return (neuron0x1d9a290()*-0.382);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db17c0() {
   return (neuron0x1d9a8a0()*-0.32827);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1800() {
   return (neuron0x1d9ac90()*1.80795);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1840() {
   return (neuron0x1d9b110()*-0.298481);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1880() {
   return (neuron0x1d9b590()*0.919743);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db18c0() {
   return (neuron0x1d9ba10()*0.438512);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1900() {
   return (neuron0x1d9bf20()*0.198438);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1940() {
   return (neuron0x1d9a690()*0.50755);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1980() {
   return (neuron0x1d9c830()*1.17659);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db19c0() {
   return (neuron0x1d9ccb0()*-0.545445);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1450() {
   return (neuron0x1d9d580()*-0.0737801);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1490() {
   return (neuron0x1d9d850()*-0.757493);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1b10() {
   return (neuron0x1d9dcd0()*-0.656424);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1b50() {
   return (neuron0x1d9e150()*0.984996);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1b90() {
   return (neuron0x1d9e5d0()*-0.506895);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1bd0() {
   return (neuron0x1d9ea50()*-0.104643);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1c10() {
   return (neuron0x1d9eed0()*0.653081);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1c50() {
   return (neuron0x1d9f350()*2.04267);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1c90() {
   return (neuron0x1d9f7d0()*0.141519);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2010() {
   return (neuron0x1d98810()*-0.557515);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2050() {
   return (neuron0x1d98b80()*-0.501951);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2090() {
   return (neuron0x1d99000()*10.9744);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db20d0() {
   return (neuron0x1d99480()*-1.76681);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2110() {
   return (neuron0x1d99990()*-0.439467);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2150() {
   return (neuron0x1d99e10()*2.96974);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2190() {
   return (neuron0x1d9a290()*-0.158323);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db21d0() {
   return (neuron0x1d9a8a0()*-1.7801);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2210() {
   return (neuron0x1d9ac90()*3.5172);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2250() {
   return (neuron0x1d9b110()*0.194334);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2290() {
   return (neuron0x1d9b590()*-1.74443);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db22d0() {
   return (neuron0x1d9ba10()*0.823547);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2310() {
   return (neuron0x1d9bf20()*2.58476);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2350() {
   return (neuron0x1d9a690()*-1.12947);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2390() {
   return (neuron0x1d9c830()*0.13473);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db23d0() {
   return (neuron0x1d9ccb0()*-3.87186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1e60() {
   return (neuron0x1d9d580()*-0.805703);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db1ea0() {
   return (neuron0x1d9d850()*-3.95465);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2520() {
   return (neuron0x1d9dcd0()*2.32462);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2560() {
   return (neuron0x1d9e150()*-0.491047);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db25a0() {
   return (neuron0x1d9e5d0()*0.968914);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db25e0() {
   return (neuron0x1d9ea50()*-0.755645);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2620() {
   return (neuron0x1d9eed0()*0.228194);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2660() {
   return (neuron0x1d9f350()*8.85575);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db26a0() {
   return (neuron0x1d9f7d0()*-0.00201806);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2a20() {
   return (neuron0x1d98810()*0.547148);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2a60() {
   return (neuron0x1d98b80()*0.0417926);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2aa0() {
   return (neuron0x1d99000()*-0.564782);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2ae0() {
   return (neuron0x1d99480()*-0.3698);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2b20() {
   return (neuron0x1d99990()*0.266841);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2b60() {
   return (neuron0x1d99e10()*1.13226);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2ba0() {
   return (neuron0x1d9a290()*-0.453934);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2be0() {
   return (neuron0x1d9a8a0()*0.366689);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2c20() {
   return (neuron0x1d9ac90()*0.302475);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2c60() {
   return (neuron0x1d9b110()*0.683927);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2ca0() {
   return (neuron0x1d9b590()*0.739343);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2ce0() {
   return (neuron0x1d9ba10()*-1.11227);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2d20() {
   return (neuron0x1d9bf20()*-1.41952);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2d60() {
   return (neuron0x1d9a690()*-0.0723661);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2da0() {
   return (neuron0x1d9c830()*-1.66475);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2de0() {
   return (neuron0x1d9ccb0()*0.93329);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2870() {
   return (neuron0x1d9d580()*0.33843);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db28b0() {
   return (neuron0x1d9d850()*-0.985051);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2f30() {
   return (neuron0x1d9dcd0()*-0.534639);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2f70() {
   return (neuron0x1d9e150()*-0.186943);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2fb0() {
   return (neuron0x1d9e5d0()*0.0814507);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db2ff0() {
   return (neuron0x1d9ea50()*0.59419);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3030() {
   return (neuron0x1d9eed0()*-0.107095);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3070() {
   return (neuron0x1d9f350()*0.79415);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db30b0() {
   return (neuron0x1d9f7d0()*0.36714);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3310() {
   return (neuron0x1da16e0()*10.652);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3350() {
   return (neuron0x1d9c4b0()*5.7346);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3390() {
   return (neuron0x1da2250()*3.90434);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db33d0() {
   return (neuron0x1da2d70()*-3.45718);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3410() {
   return (neuron0x1da3780()*0.0238332);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3450() {
   return (neuron0x1da4190()*-2.01445);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3490() {
   return (neuron0x1da1d80()*-4.2456);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db34d0() {
   return (neuron0x1da5dc0()*-3.06292);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3510() {
   return (neuron0x1da67d0()*-0.802722);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3550() {
   return (neuron0x1da71e0()*3.41851);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3590() {
   return (neuron0x1da7bf0()*0.280845);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db35d0() {
   return (neuron0x1da8600()*-0.682346);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3610() {
   return (neuron0x1da9010()*-0.294853);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3650() {
   return (neuron0x1da9a20()*-1.8796);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3690() {
   return (neuron0x1daa430()*1.85843);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db36d0() {
   return (neuron0x1daae40()*-4.05022);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d986e0() {
   return (neuron0x1da5460()*4.45242);
}

double nnFunc_25_25hi_3000ep__::synapse0x1d98720() {
   return (neuron0x1dae0b0()*8.57236);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3820() {
   return (neuron0x1daea80()*0.882947);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3860() {
   return (neuron0x1daf490()*1.40544);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db38a0() {
   return (neuron0x1dafea0()*1.59563);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db38e0() {
   return (neuron0x1db08b0()*-2.36605);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3920() {
   return (neuron0x1db12c0()*5.34041);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db3960() {
   return (neuron0x1db1cd0()*-8.29128);
}

double nnFunc_25_25hi_3000ep__::synapse0x1db39a0() {
   return (neuron0x1db26e0()*1.70728);
}

