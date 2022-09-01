#include "25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_downwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2932480();
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
         return neuron0x2932480();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x2916a30() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x2916d70() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x29170b0() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x29173f0() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x2917730() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x2917ba0() {
   double input = 1.49672;
   input += synapse0x2823b90();
   input += synapse0x2905ea0();
   input += synapse0x2917e50();
   input += synapse0x2917e90();
   input += synapse0x2917ed0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2917ba0() {
   double input = input0x2917ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2917f10() {
   double input = -1.11182;
   input += synapse0x2918250();
   input += synapse0x2918290();
   input += synapse0x29182d0();
   input += synapse0x2918310();
   input += synapse0x2918350();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2917f10() {
   double input = input0x2917f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2918390() {
   double input = -6.20012;
   input += synapse0x29186d0();
   input += synapse0x2918710();
   input += synapse0x2918750();
   input += synapse0x2918790();
   input += synapse0x29187d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2918390() {
   double input = input0x2918390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2918810() {
   double input = 0.842205;
   input += synapse0x2918b50();
   input += synapse0x2918b90();
   input += synapse0x2815d80();
   input += synapse0x2815dc0();
   input += synapse0x2918ce0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2918810() {
   double input = input0x2918810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2918d20() {
   double input = -0.339176;
   input += synapse0x2919060();
   input += synapse0x29190a0();
   input += synapse0x29190e0();
   input += synapse0x2919120();
   input += synapse0x2919160();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2918d20() {
   double input = input0x2918d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x29191a0() {
   double input = -13.5046;
   input += synapse0x29194e0();
   input += synapse0x2919520();
   input += synapse0x2919560();
   input += synapse0x29195a0();
   input += synapse0x29195e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x29191a0() {
   double input = input0x29191a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2919620() {
   double input = -1.01843;
   input += synapse0x2919960();
   input += synapse0x29199a0();
   input += synapse0x29199e0();
   input += synapse0x2918bd0();
   input += synapse0x2918c10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2919620() {
   double input = input0x2919620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2919c30() {
   double input = -3.99631;
   input += synapse0x2919ee0();
   input += synapse0x2919f20();
   input += synapse0x2919f60();
   input += synapse0x2919fa0();
   input += synapse0x2919fe0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2919c30() {
   double input = input0x2919c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291a020() {
   double input = 2.54848;
   input += synapse0x291a360();
   input += synapse0x291a3a0();
   input += synapse0x291a3e0();
   input += synapse0x291a420();
   input += synapse0x291a460();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291a020() {
   double input = input0x291a020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291a4a0() {
   double input = 4.86961;
   input += synapse0x291a7e0();
   input += synapse0x291a820();
   input += synapse0x291a860();
   input += synapse0x291a8a0();
   input += synapse0x291a8e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291a4a0() {
   double input = input0x291a4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291a920() {
   double input = -5.25379;
   input += synapse0x291ac60();
   input += synapse0x291aca0();
   input += synapse0x291ace0();
   input += synapse0x291ad20();
   input += synapse0x291ad60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291a920() {
   double input = input0x291a920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291ada0() {
   double input = -0.307598;
   input += synapse0x2815bd0();
   input += synapse0x2815c10();
   input += synapse0x291b1f0();
   input += synapse0x291b230();
   input += synapse0x291b270();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291ada0() {
   double input = input0x291ada0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291b2b0() {
   double input = 1.73758;
   input += synapse0x291b5f0();
   input += synapse0x291b630();
   input += synapse0x291b670();
   input += synapse0x291b6b0();
   input += synapse0x291b6f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291b2b0() {
   double input = input0x291b2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2919a20() {
   double input = 1.1226;
   input += synapse0x28163a0();
   input += synapse0x2919bb0();
   input += synapse0x2919bf0();
   input += synapse0x291bb40();
   input += synapse0x291bb80();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2919a20() {
   double input = input0x2919a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291bbc0() {
   double input = -10.1873;
   input += synapse0x291bf00();
   input += synapse0x291bf40();
   input += synapse0x291bf80();
   input += synapse0x291bfc0();
   input += synapse0x291c000();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291bbc0() {
   double input = input0x291bbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291c040() {
   double input = 0.689071;
   input += synapse0x291c380();
   input += synapse0x2916c50();
   input += synapse0x2916c90();
   input += synapse0x2916f90();
   input += synapse0x2916fd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291c040() {
   double input = input0x291c040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291c910() {
   double input = 0.113404;
   input += synapse0x291caa0();
   input += synapse0x291cae0();
   input += synapse0x291cb20();
   input += synapse0x291cb60();
   input += synapse0x291cba0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291c910() {
   double input = input0x291c910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291cbe0() {
   double input = -1.19504;
   input += synapse0x291cf20();
   input += synapse0x291cf60();
   input += synapse0x291cfa0();
   input += synapse0x291cfe0();
   input += synapse0x291d020();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291cbe0() {
   double input = input0x291cbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291d060() {
   double input = 3.07595;
   input += synapse0x291d3a0();
   input += synapse0x291d3e0();
   input += synapse0x291d420();
   input += synapse0x291d460();
   input += synapse0x291d4a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291d060() {
   double input = input0x291d060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291d4e0() {
   double input = -16.4766;
   input += synapse0x291d820();
   input += synapse0x291d860();
   input += synapse0x291d8a0();
   input += synapse0x291d8e0();
   input += synapse0x291d920();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291d4e0() {
   double input = input0x291d4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291d960() {
   double input = 0.854353;
   input += synapse0x291dca0();
   input += synapse0x291dce0();
   input += synapse0x291dd20();
   input += synapse0x291dd60();
   input += synapse0x291dda0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291d960() {
   double input = input0x291d960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291dde0() {
   double input = 6.37126;
   input += synapse0x291e120();
   input += synapse0x291e160();
   input += synapse0x291e1a0();
   input += synapse0x291e1e0();
   input += synapse0x291e220();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291dde0() {
   double input = input0x291dde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291e260() {
   double input = 11.1375;
   input += synapse0x291e5a0();
   input += synapse0x291e5e0();
   input += synapse0x291e620();
   input += synapse0x291e660();
   input += synapse0x291e6a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291e260() {
   double input = input0x291e260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291e6e0() {
   double input = -0.508733;
   input += synapse0x291ea20();
   input += synapse0x291ea60();
   input += synapse0x291eaa0();
   input += synapse0x291eae0();
   input += synapse0x291eb20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291e6e0() {
   double input = input0x291e6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291eb60() {
   double input = 13.8099;
   input += synapse0x291eea0();
   input += synapse0x291eee0();
   input += synapse0x291ef20();
   input += synapse0x291ef60();
   input += synapse0x291efa0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291eb60() {
   double input = input0x291eb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2920a70() {
   double input = -0.220417;
   input += synapse0x2918ac0();
   input += synapse0x2918b00();
   input += synapse0x2918fd0();
   input += synapse0x2919010();
   input += synapse0x2919450();
   input += synapse0x2919490();
   input += synapse0x29198d0();
   input += synapse0x2919910();
   input += synapse0x2919e50();
   input += synapse0x2919e90();
   input += synapse0x291a2d0();
   input += synapse0x291a310();
   input += synapse0x291a750();
   input += synapse0x291a790();
   input += synapse0x291abd0();
   input += synapse0x291ac10();
   input += synapse0x291b050();
   input += synapse0x291b090();
   input += synapse0x291b560();
   input += synapse0x291b5a0();
   input += synapse0x291be70();
   input += synapse0x291beb0();
   input += synapse0x291c2f0();
   input += synapse0x291c330();
   input += synapse0x2917950();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2920a70() {
   double input = input0x2920a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x291b840() {
   double input = -1.15632;
   input += synapse0x291b9d0();
   input += synapse0x291ba10();
   input += synapse0x291ba50();
   input += synapse0x291ba90();
   input += synapse0x291bad0();
   input += synapse0x2917990();
   input += synapse0x291dc10();
   input += synapse0x291dc50();
   input += synapse0x291e090();
   input += synapse0x291e0d0();
   input += synapse0x291e510();
   input += synapse0x291e550();
   input += synapse0x291e990();
   input += synapse0x291e9d0();
   input += synapse0x291ee10();
   input += synapse0x291ee50();
   input += synapse0x2917dc0();
   input += synapse0x2917e00();
   input += synapse0x291ce90();
   input += synapse0x291ced0();
   input += synapse0x2823c60();
   input += synapse0x2823ca0();
   input += synapse0x2921520();
   input += synapse0x2921560();
   input += synapse0x29215a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x291b840() {
   double input = input0x291b840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x29215e0() {
   double input = -0.769404;
   input += synapse0x291b0e0();
   input += synapse0x291b120();
   input += synapse0x291b160();
   input += synapse0x291b1a0();
   input += synapse0x2921b30();
   input += synapse0x2921b70();
   input += synapse0x2921bb0();
   input += synapse0x2921bf0();
   input += synapse0x2921c30();
   input += synapse0x2921c70();
   input += synapse0x2921cb0();
   input += synapse0x2921cf0();
   input += synapse0x2921d30();
   input += synapse0x2921d70();
   input += synapse0x2921db0();
   input += synapse0x2921df0();
   input += synapse0x2921770();
   input += synapse0x29217b0();
   input += synapse0x2921f40();
   input += synapse0x2921f80();
   input += synapse0x2921fc0();
   input += synapse0x2922000();
   input += synapse0x2922040();
   input += synapse0x2922080();
   input += synapse0x29220c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x29215e0() {
   double input = input0x29215e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2922100() {
   double input = -0.586083;
   input += synapse0x2922440();
   input += synapse0x2922480();
   input += synapse0x29224c0();
   input += synapse0x2922500();
   input += synapse0x2922540();
   input += synapse0x2922580();
   input += synapse0x29225c0();
   input += synapse0x2922600();
   input += synapse0x2922640();
   input += synapse0x2922680();
   input += synapse0x29226c0();
   input += synapse0x2922700();
   input += synapse0x2922740();
   input += synapse0x2922780();
   input += synapse0x29227c0();
   input += synapse0x2922800();
   input += synapse0x2922290();
   input += synapse0x29222d0();
   input += synapse0x2922950();
   input += synapse0x2922990();
   input += synapse0x29229d0();
   input += synapse0x2922a10();
   input += synapse0x2922a50();
   input += synapse0x2922a90();
   input += synapse0x2922ad0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2922100() {
   double input = input0x2922100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2922b10() {
   double input = -0.747261;
   input += synapse0x2922e50();
   input += synapse0x2922e90();
   input += synapse0x2922ed0();
   input += synapse0x2922f10();
   input += synapse0x2922f50();
   input += synapse0x2922f90();
   input += synapse0x2922fd0();
   input += synapse0x2923010();
   input += synapse0x2923050();
   input += synapse0x2923090();
   input += synapse0x29230d0();
   input += synapse0x2923110();
   input += synapse0x2923150();
   input += synapse0x2923190();
   input += synapse0x29231d0();
   input += synapse0x2923210();
   input += synapse0x2922ca0();
   input += synapse0x2922ce0();
   input += synapse0x2923360();
   input += synapse0x29233a0();
   input += synapse0x29233e0();
   input += synapse0x2923420();
   input += synapse0x2923460();
   input += synapse0x29234a0();
   input += synapse0x29234e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2922b10() {
   double input = input0x2922b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2923520() {
   double input = 0.010276;
   input += synapse0x2923860();
   input += synapse0x29238a0();
   input += synapse0x29238e0();
   input += synapse0x2923920();
   input += synapse0x2923960();
   input += synapse0x29239a0();
   input += synapse0x29239e0();
   input += synapse0x2920c00();
   input += synapse0x2920c40();
   input += synapse0x2920c80();
   input += synapse0x2920cc0();
   input += synapse0x2920d00();
   input += synapse0x2920d40();
   input += synapse0x2920d80();
   input += synapse0x2920dc0();
   input += synapse0x2920e00();
   input += synapse0x29236b0();
   input += synapse0x29236f0();
   input += synapse0x2920f50();
   input += synapse0x2920f90();
   input += synapse0x2920fd0();
   input += synapse0x2921010();
   input += synapse0x2921050();
   input += synapse0x2921090();
   input += synapse0x29210d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2923520() {
   double input = input0x2923520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2921110() {
   double input = -0.195873;
   input += synapse0x29213c0();
   input += synapse0x2924ac0();
   input += synapse0x2924b00();
   input += synapse0x2924b40();
   input += synapse0x2924b80();
   input += synapse0x2924bc0();
   input += synapse0x2924c00();
   input += synapse0x2924c40();
   input += synapse0x2924c80();
   input += synapse0x2924cc0();
   input += synapse0x2924d00();
   input += synapse0x2924d40();
   input += synapse0x2924d80();
   input += synapse0x2924dc0();
   input += synapse0x2924e00();
   input += synapse0x2924e40();
   input += synapse0x29212a0();
   input += synapse0x29212e0();
   input += synapse0x2924f90();
   input += synapse0x2924fd0();
   input += synapse0x2925010();
   input += synapse0x2925050();
   input += synapse0x2925090();
   input += synapse0x29250d0();
   input += synapse0x2925110();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2921110() {
   double input = input0x2921110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2925150() {
   double input = -1.63487;
   input += synapse0x2925490();
   input += synapse0x29254d0();
   input += synapse0x2925510();
   input += synapse0x2925550();
   input += synapse0x2925590();
   input += synapse0x29255d0();
   input += synapse0x2925610();
   input += synapse0x2925650();
   input += synapse0x2925690();
   input += synapse0x29256d0();
   input += synapse0x2925710();
   input += synapse0x2925750();
   input += synapse0x2925790();
   input += synapse0x29257d0();
   input += synapse0x2925810();
   input += synapse0x2925850();
   input += synapse0x29252e0();
   input += synapse0x2925320();
   input += synapse0x29259a0();
   input += synapse0x29259e0();
   input += synapse0x2925a20();
   input += synapse0x2925a60();
   input += synapse0x2925aa0();
   input += synapse0x2925ae0();
   input += synapse0x2925b20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2925150() {
   double input = input0x2925150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2925b60() {
   double input = 1.21267;
   input += synapse0x2925ea0();
   input += synapse0x2925ee0();
   input += synapse0x2925f20();
   input += synapse0x2925f60();
   input += synapse0x2925fa0();
   input += synapse0x2925fe0();
   input += synapse0x2926020();
   input += synapse0x2926060();
   input += synapse0x29260a0();
   input += synapse0x29260e0();
   input += synapse0x2926120();
   input += synapse0x2926160();
   input += synapse0x29261a0();
   input += synapse0x29261e0();
   input += synapse0x2926220();
   input += synapse0x2926260();
   input += synapse0x2925cf0();
   input += synapse0x2925d30();
   input += synapse0x29263b0();
   input += synapse0x29263f0();
   input += synapse0x2926430();
   input += synapse0x2926470();
   input += synapse0x29264b0();
   input += synapse0x29264f0();
   input += synapse0x2926530();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2925b60() {
   double input = input0x2925b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2926570() {
   double input = -0.99393;
   input += synapse0x29268b0();
   input += synapse0x29268f0();
   input += synapse0x2926930();
   input += synapse0x2926970();
   input += synapse0x29269b0();
   input += synapse0x29269f0();
   input += synapse0x2926a30();
   input += synapse0x2926a70();
   input += synapse0x2926ab0();
   input += synapse0x2926af0();
   input += synapse0x2926b30();
   input += synapse0x2926b70();
   input += synapse0x2926bb0();
   input += synapse0x2926bf0();
   input += synapse0x2926c30();
   input += synapse0x2926c70();
   input += synapse0x2926700();
   input += synapse0x2926740();
   input += synapse0x2926dc0();
   input += synapse0x2926e00();
   input += synapse0x2926e40();
   input += synapse0x2926e80();
   input += synapse0x2926ec0();
   input += synapse0x2926f00();
   input += synapse0x2926f40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2926570() {
   double input = input0x2926570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2926f80() {
   double input = 0.0323855;
   input += synapse0x29272c0();
   input += synapse0x2927300();
   input += synapse0x2927340();
   input += synapse0x2927380();
   input += synapse0x29273c0();
   input += synapse0x2927400();
   input += synapse0x2927440();
   input += synapse0x2927480();
   input += synapse0x29274c0();
   input += synapse0x2927500();
   input += synapse0x2927540();
   input += synapse0x2927580();
   input += synapse0x29275c0();
   input += synapse0x2927600();
   input += synapse0x2927640();
   input += synapse0x2927680();
   input += synapse0x2927110();
   input += synapse0x2927150();
   input += synapse0x29277d0();
   input += synapse0x2927810();
   input += synapse0x2927850();
   input += synapse0x2927890();
   input += synapse0x29278d0();
   input += synapse0x2927910();
   input += synapse0x2927950();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2926f80() {
   double input = input0x2926f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2927990() {
   double input = -0.574159;
   input += synapse0x2927cd0();
   input += synapse0x2927d10();
   input += synapse0x2927d50();
   input += synapse0x2927d90();
   input += synapse0x2927dd0();
   input += synapse0x2927e10();
   input += synapse0x2927e50();
   input += synapse0x2927e90();
   input += synapse0x2927ed0();
   input += synapse0x2927f10();
   input += synapse0x2927f50();
   input += synapse0x2927f90();
   input += synapse0x2927fd0();
   input += synapse0x2928010();
   input += synapse0x2928050();
   input += synapse0x2928090();
   input += synapse0x2927b20();
   input += synapse0x2927b60();
   input += synapse0x29281e0();
   input += synapse0x2928220();
   input += synapse0x2928260();
   input += synapse0x29282a0();
   input += synapse0x29282e0();
   input += synapse0x2928320();
   input += synapse0x2928360();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2927990() {
   double input = input0x2927990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x29283a0() {
   double input = 2.08498;
   input += synapse0x29286e0();
   input += synapse0x2928720();
   input += synapse0x2928760();
   input += synapse0x29287a0();
   input += synapse0x29287e0();
   input += synapse0x2928820();
   input += synapse0x2928860();
   input += synapse0x29288a0();
   input += synapse0x29288e0();
   input += synapse0x2928920();
   input += synapse0x2928960();
   input += synapse0x29289a0();
   input += synapse0x29289e0();
   input += synapse0x2928a20();
   input += synapse0x2928a60();
   input += synapse0x2928aa0();
   input += synapse0x2928530();
   input += synapse0x2928570();
   input += synapse0x2928bf0();
   input += synapse0x2928c30();
   input += synapse0x2928c70();
   input += synapse0x2928cb0();
   input += synapse0x2928cf0();
   input += synapse0x2928d30();
   input += synapse0x2928d70();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x29283a0() {
   double input = input0x29283a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2928db0() {
   double input = -0.63077;
   input += synapse0x29290f0();
   input += synapse0x2929130();
   input += synapse0x2929170();
   input += synapse0x29291b0();
   input += synapse0x29291f0();
   input += synapse0x2929230();
   input += synapse0x2929270();
   input += synapse0x29292b0();
   input += synapse0x29292f0();
   input += synapse0x2929330();
   input += synapse0x2929370();
   input += synapse0x29293b0();
   input += synapse0x29293f0();
   input += synapse0x2929430();
   input += synapse0x2929470();
   input += synapse0x29294b0();
   input += synapse0x2928f40();
   input += synapse0x2928f80();
   input += synapse0x2929600();
   input += synapse0x2929640();
   input += synapse0x2929680();
   input += synapse0x29296c0();
   input += synapse0x2929700();
   input += synapse0x2929740();
   input += synapse0x2929780();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2928db0() {
   double input = input0x2928db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x29297c0() {
   double input = -0.860532;
   input += synapse0x2929b00();
   input += synapse0x2929b40();
   input += synapse0x2929b80();
   input += synapse0x2929bc0();
   input += synapse0x2929c00();
   input += synapse0x2929c40();
   input += synapse0x2929c80();
   input += synapse0x2929cc0();
   input += synapse0x2929d00();
   input += synapse0x2929d40();
   input += synapse0x2929d80();
   input += synapse0x2929dc0();
   input += synapse0x2929e00();
   input += synapse0x2929e40();
   input += synapse0x2929e80();
   input += synapse0x2929ec0();
   input += synapse0x2929950();
   input += synapse0x2929990();
   input += synapse0x292a010();
   input += synapse0x292a050();
   input += synapse0x292a090();
   input += synapse0x292a0d0();
   input += synapse0x292a110();
   input += synapse0x292a150();
   input += synapse0x292a190();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x29297c0() {
   double input = input0x29297c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x292a1d0() {
   double input = 0.662998;
   input += synapse0x292a510();
   input += synapse0x2917d30();
   input += synapse0x2917d70();
   input += synapse0x2918130();
   input += synapse0x2918170();
   input += synapse0x29185b0();
   input += synapse0x29185f0();
   input += synapse0x2918a30();
   input += synapse0x2918a70();
   input += synapse0x2918f40();
   input += synapse0x2918f80();
   input += synapse0x29193c0();
   input += synapse0x2919400();
   input += synapse0x2919840();
   input += synapse0x2919880();
   input += synapse0x2919dc0();
   input += synapse0x2919e00();
   input += synapse0x291a240();
   input += synapse0x291a280();
   input += synapse0x291a6c0();
   input += synapse0x291a700();
   input += synapse0x291ab40();
   input += synapse0x291ab80();
   input += synapse0x291afc0();
   input += synapse0x291b000();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x292a1d0() {
   double input = input0x292a1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x29247f0() {
   double input = -0.490635;
   input += synapse0x2924980();
   input += synapse0x29249c0();
   input += synapse0x291c260();
   input += synapse0x291c2a0();
   input += synapse0x292a360();
   input += synapse0x292a3a0();
   input += synapse0x2917610();
   input += synapse0x2917650();
   input += synapse0x291ce00();
   input += synapse0x291ce40();
   input += synapse0x291d280();
   input += synapse0x291d2c0();
   input += synapse0x291d700();
   input += synapse0x291d740();
   input += synapse0x291db80();
   input += synapse0x291dbc0();
   input += synapse0x291e000();
   input += synapse0x291e040();
   input += synapse0x291e480();
   input += synapse0x291e4c0();
   input += synapse0x291e900();
   input += synapse0x291e940();
   input += synapse0x291ed80();
   input += synapse0x291edc0();
   input += synapse0x291b4d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x29247f0() {
   double input = input0x29247f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x292d440() {
   double input = 1.06036;
   input += synapse0x291b510();
   input += synapse0x292d780();
   input += synapse0x292d7c0();
   input += synapse0x292d800();
   input += synapse0x292d840();
   input += synapse0x292d880();
   input += synapse0x292d8c0();
   input += synapse0x292d900();
   input += synapse0x292d940();
   input += synapse0x292d980();
   input += synapse0x292d9c0();
   input += synapse0x292da00();
   input += synapse0x292da40();
   input += synapse0x292da80();
   input += synapse0x292dac0();
   input += synapse0x292db00();
   input += synapse0x292d5d0();
   input += synapse0x292d610();
   input += synapse0x292dc50();
   input += synapse0x292dc90();
   input += synapse0x292dcd0();
   input += synapse0x292dd10();
   input += synapse0x292dd50();
   input += synapse0x292dd90();
   input += synapse0x292ddd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x292d440() {
   double input = input0x292d440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x292de10() {
   double input = 0.652306;
   input += synapse0x292e150();
   input += synapse0x292e190();
   input += synapse0x292e1d0();
   input += synapse0x292e210();
   input += synapse0x292e250();
   input += synapse0x292e290();
   input += synapse0x292e2d0();
   input += synapse0x292e310();
   input += synapse0x292e350();
   input += synapse0x292e390();
   input += synapse0x292e3d0();
   input += synapse0x292e410();
   input += synapse0x292e450();
   input += synapse0x292e490();
   input += synapse0x292e4d0();
   input += synapse0x292e510();
   input += synapse0x292dfa0();
   input += synapse0x292dfe0();
   input += synapse0x292e660();
   input += synapse0x292e6a0();
   input += synapse0x292e6e0();
   input += synapse0x292e720();
   input += synapse0x292e760();
   input += synapse0x292e7a0();
   input += synapse0x292e7e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x292de10() {
   double input = input0x292de10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x292e820() {
   double input = -0.64121;
   input += synapse0x292eb60();
   input += synapse0x292eba0();
   input += synapse0x292ebe0();
   input += synapse0x292ec20();
   input += synapse0x292ec60();
   input += synapse0x292eca0();
   input += synapse0x292ece0();
   input += synapse0x292ed20();
   input += synapse0x292ed60();
   input += synapse0x292eda0();
   input += synapse0x292ede0();
   input += synapse0x292ee20();
   input += synapse0x292ee60();
   input += synapse0x292eea0();
   input += synapse0x292eee0();
   input += synapse0x292ef20();
   input += synapse0x292e9b0();
   input += synapse0x292e9f0();
   input += synapse0x292f070();
   input += synapse0x292f0b0();
   input += synapse0x292f0f0();
   input += synapse0x292f130();
   input += synapse0x292f170();
   input += synapse0x292f1b0();
   input += synapse0x292f1f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x292e820() {
   double input = input0x292e820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x292f230() {
   double input = 0.51684;
   input += synapse0x292f570();
   input += synapse0x292f5b0();
   input += synapse0x292f5f0();
   input += synapse0x292f630();
   input += synapse0x292f670();
   input += synapse0x292f6b0();
   input += synapse0x292f6f0();
   input += synapse0x292f730();
   input += synapse0x292f770();
   input += synapse0x292f7b0();
   input += synapse0x292f7f0();
   input += synapse0x292f830();
   input += synapse0x292f870();
   input += synapse0x292f8b0();
   input += synapse0x292f8f0();
   input += synapse0x292f930();
   input += synapse0x292f3c0();
   input += synapse0x292f400();
   input += synapse0x292fa80();
   input += synapse0x292fac0();
   input += synapse0x292fb00();
   input += synapse0x292fb40();
   input += synapse0x292fb80();
   input += synapse0x292fbc0();
   input += synapse0x292fc00();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x292f230() {
   double input = input0x292f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x292fc40() {
   double input = -0.727059;
   input += synapse0x292ff80();
   input += synapse0x292ffc0();
   input += synapse0x2930000();
   input += synapse0x2930040();
   input += synapse0x2930080();
   input += synapse0x29300c0();
   input += synapse0x2930100();
   input += synapse0x2930140();
   input += synapse0x2930180();
   input += synapse0x29301c0();
   input += synapse0x2930200();
   input += synapse0x2930240();
   input += synapse0x2930280();
   input += synapse0x29302c0();
   input += synapse0x2930300();
   input += synapse0x2930340();
   input += synapse0x292fdd0();
   input += synapse0x292fe10();
   input += synapse0x2930490();
   input += synapse0x29304d0();
   input += synapse0x2930510();
   input += synapse0x2930550();
   input += synapse0x2930590();
   input += synapse0x29305d0();
   input += synapse0x2930610();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x292fc40() {
   double input = input0x292fc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2930650() {
   double input = 0.196026;
   input += synapse0x2930990();
   input += synapse0x29309d0();
   input += synapse0x2930a10();
   input += synapse0x2930a50();
   input += synapse0x2930a90();
   input += synapse0x2930ad0();
   input += synapse0x2930b10();
   input += synapse0x2930b50();
   input += synapse0x2930b90();
   input += synapse0x2930bd0();
   input += synapse0x2930c10();
   input += synapse0x2930c50();
   input += synapse0x2930c90();
   input += synapse0x2930cd0();
   input += synapse0x2930d10();
   input += synapse0x2930d50();
   input += synapse0x29307e0();
   input += synapse0x2930820();
   input += synapse0x2930ea0();
   input += synapse0x2930ee0();
   input += synapse0x2930f20();
   input += synapse0x2930f60();
   input += synapse0x2930fa0();
   input += synapse0x2930fe0();
   input += synapse0x2931020();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2930650() {
   double input = input0x2930650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2931060() {
   double input = 0.737391;
   input += synapse0x29313a0();
   input += synapse0x29313e0();
   input += synapse0x2931420();
   input += synapse0x2931460();
   input += synapse0x29314a0();
   input += synapse0x29314e0();
   input += synapse0x2931520();
   input += synapse0x2931560();
   input += synapse0x29315a0();
   input += synapse0x29315e0();
   input += synapse0x2931620();
   input += synapse0x2931660();
   input += synapse0x29316a0();
   input += synapse0x29316e0();
   input += synapse0x2931720();
   input += synapse0x2931760();
   input += synapse0x29311f0();
   input += synapse0x2931230();
   input += synapse0x29318b0();
   input += synapse0x29318f0();
   input += synapse0x2931930();
   input += synapse0x2931970();
   input += synapse0x29319b0();
   input += synapse0x29319f0();
   input += synapse0x2931a30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2931060() {
   double input = input0x2931060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2931a70() {
   double input = -0.155713;
   input += synapse0x2931db0();
   input += synapse0x2931df0();
   input += synapse0x2931e30();
   input += synapse0x2931e70();
   input += synapse0x2931eb0();
   input += synapse0x2931ef0();
   input += synapse0x2931f30();
   input += synapse0x2931f70();
   input += synapse0x2931fb0();
   input += synapse0x2931ff0();
   input += synapse0x2932030();
   input += synapse0x2932070();
   input += synapse0x29320b0();
   input += synapse0x29320f0();
   input += synapse0x2932130();
   input += synapse0x2932170();
   input += synapse0x2931c00();
   input += synapse0x2931c40();
   input += synapse0x29322c0();
   input += synapse0x2932300();
   input += synapse0x2932340();
   input += synapse0x2932380();
   input += synapse0x29323c0();
   input += synapse0x2932400();
   input += synapse0x2932440();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2931a70() {
   double input = input0x2931a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2932480() {
   double input = 0.515675;
   input += synapse0x29326a0();
   input += synapse0x29326e0();
   input += synapse0x2932720();
   input += synapse0x2932760();
   input += synapse0x29327a0();
   input += synapse0x29327e0();
   input += synapse0x2932820();
   input += synapse0x2932860();
   input += synapse0x29328a0();
   input += synapse0x29328e0();
   input += synapse0x2932920();
   input += synapse0x2932960();
   input += synapse0x29329a0();
   input += synapse0x29329e0();
   input += synapse0x2932a20();
   input += synapse0x2932a60();
   input += synapse0x2917a70();
   input += synapse0x2917ab0();
   input += synapse0x2932bb0();
   input += synapse0x2932bf0();
   input += synapse0x2932c30();
   input += synapse0x2932c70();
   input += synapse0x2932cb0();
   input += synapse0x2932cf0();
   input += synapse0x2932d30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2932480() {
   double input = input0x2932480();
   return (input * 35.2946)+156.535;
}

double nnFunc_25_25hi_3000ep__::synapse0x2823b90() {
   return (neuron0x2916a30()*-4.41363);
}

double nnFunc_25_25hi_3000ep__::synapse0x2905ea0() {
   return (neuron0x2916d70()*1.00193);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917e50() {
   return (neuron0x29170b0()*0.581818);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917e90() {
   return (neuron0x29173f0()*-2.47529);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917ed0() {
   return (neuron0x2917730()*1.67557);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918250() {
   return (neuron0x2916a30()*0.632933);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918290() {
   return (neuron0x2916d70()*-0.608467);
}

double nnFunc_25_25hi_3000ep__::synapse0x29182d0() {
   return (neuron0x29170b0()*0.174995);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918310() {
   return (neuron0x29173f0()*1.64189);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918350() {
   return (neuron0x2917730()*-1.28984);
}

double nnFunc_25_25hi_3000ep__::synapse0x29186d0() {
   return (neuron0x2916a30()*-6.6956);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918710() {
   return (neuron0x2916d70()*-0.0110506);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918750() {
   return (neuron0x29170b0()*-3.33859);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918790() {
   return (neuron0x29173f0()*5.83337);
}

double nnFunc_25_25hi_3000ep__::synapse0x29187d0() {
   return (neuron0x2917730()*-1.77674);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918b50() {
   return (neuron0x2916a30()*3.07308);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918b90() {
   return (neuron0x2916d70()*-0.198787);
}

double nnFunc_25_25hi_3000ep__::synapse0x2815d80() {
   return (neuron0x29170b0()*0.44748);
}

double nnFunc_25_25hi_3000ep__::synapse0x2815dc0() {
   return (neuron0x29173f0()*1.61276);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918ce0() {
   return (neuron0x2917730()*0.722351);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919060() {
   return (neuron0x2916a30()*4.67932);
}

double nnFunc_25_25hi_3000ep__::synapse0x29190a0() {
   return (neuron0x2916d70()*-1.0759);
}

double nnFunc_25_25hi_3000ep__::synapse0x29190e0() {
   return (neuron0x29170b0()*-1.71146);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919120() {
   return (neuron0x29173f0()*-0.102609);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919160() {
   return (neuron0x2917730()*-1.03037);
}

double nnFunc_25_25hi_3000ep__::synapse0x29194e0() {
   return (neuron0x2916a30()*-2.22703);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919520() {
   return (neuron0x2916d70()*0.0494671);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919560() {
   return (neuron0x29170b0()*-0.562177);
}

double nnFunc_25_25hi_3000ep__::synapse0x29195a0() {
   return (neuron0x29173f0()*-11.2178);
}

double nnFunc_25_25hi_3000ep__::synapse0x29195e0() {
   return (neuron0x2917730()*-8.75837);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919960() {
   return (neuron0x2916a30()*2.01487);
}

double nnFunc_25_25hi_3000ep__::synapse0x29199a0() {
   return (neuron0x2916d70()*-0.894114);
}

double nnFunc_25_25hi_3000ep__::synapse0x29199e0() {
   return (neuron0x29170b0()*0.0684905);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918bd0() {
   return (neuron0x29173f0()*8.23133);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918c10() {
   return (neuron0x2917730()*-0.733887);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919ee0() {
   return (neuron0x2916a30()*0.309671);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919f20() {
   return (neuron0x2916d70()*-0.0444087);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919f60() {
   return (neuron0x29170b0()*0.318627);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919fa0() {
   return (neuron0x29173f0()*-5.24142);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919fe0() {
   return (neuron0x2917730()*-2.78125);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a360() {
   return (neuron0x2916a30()*7.15688);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a3a0() {
   return (neuron0x2916d70()*0.0638259);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a3e0() {
   return (neuron0x29170b0()*4.57502);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a420() {
   return (neuron0x29173f0()*-5.50447);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a460() {
   return (neuron0x2917730()*0.20647);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a7e0() {
   return (neuron0x2916a30()*-0.601874);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a820() {
   return (neuron0x2916d70()*0.0459174);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a860() {
   return (neuron0x29170b0()*0.253015);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a8a0() {
   return (neuron0x29173f0()*7.04436);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a8e0() {
   return (neuron0x2917730()*4.02173);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ac60() {
   return (neuron0x2916a30()*0.380385);
}

double nnFunc_25_25hi_3000ep__::synapse0x291aca0() {
   return (neuron0x2916d70()*-0.0292698);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ace0() {
   return (neuron0x29170b0()*-0.170167);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ad20() {
   return (neuron0x29173f0()*-6.10256);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ad60() {
   return (neuron0x2917730()*-2.9657);
}

double nnFunc_25_25hi_3000ep__::synapse0x2815bd0() {
   return (neuron0x2916a30()*0.157162);
}

double nnFunc_25_25hi_3000ep__::synapse0x2815c10() {
   return (neuron0x2916d70()*-0.0634897);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b1f0() {
   return (neuron0x29170b0()*-1.20728);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b230() {
   return (neuron0x29173f0()*1.08894);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b270() {
   return (neuron0x2917730()*0.482289);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b5f0() {
   return (neuron0x2916a30()*0.200763);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b630() {
   return (neuron0x2916d70()*0.00253527);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b670() {
   return (neuron0x29170b0()*-0.0205708);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b6b0() {
   return (neuron0x29173f0()*0.895225);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b6f0() {
   return (neuron0x2917730()*-0.501223);
}

double nnFunc_25_25hi_3000ep__::synapse0x28163a0() {
   return (neuron0x2916a30()*-1.26712);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919bb0() {
   return (neuron0x2916d70()*0.996052);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919bf0() {
   return (neuron0x29170b0()*0.407513);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bb40() {
   return (neuron0x29173f0()*-1.91818);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bb80() {
   return (neuron0x2917730()*0.718669);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bf00() {
   return (neuron0x2916a30()*-0.21848);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bf40() {
   return (neuron0x2916d70()*0.00518286);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bf80() {
   return (neuron0x29170b0()*-0.257669);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bfc0() {
   return (neuron0x29173f0()*-11.8173);
}

double nnFunc_25_25hi_3000ep__::synapse0x291c000() {
   return (neuron0x2917730()*-8.63045);
}

double nnFunc_25_25hi_3000ep__::synapse0x291c380() {
   return (neuron0x2916a30()*-0.690924);
}

double nnFunc_25_25hi_3000ep__::synapse0x2916c50() {
   return (neuron0x2916d70()*0.63256);
}

double nnFunc_25_25hi_3000ep__::synapse0x2916c90() {
   return (neuron0x29170b0()*-0.1878);
}

double nnFunc_25_25hi_3000ep__::synapse0x2916f90() {
   return (neuron0x29173f0()*-2.3845);
}

double nnFunc_25_25hi_3000ep__::synapse0x2916fd0() {
   return (neuron0x2917730()*0.685116);
}

double nnFunc_25_25hi_3000ep__::synapse0x291caa0() {
   return (neuron0x2916a30()*0.0771451);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cae0() {
   return (neuron0x2916d70()*0.277406);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cb20() {
   return (neuron0x29170b0()*1.38047);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cb60() {
   return (neuron0x29173f0()*-2.95232);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cba0() {
   return (neuron0x2917730()*0.641528);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cf20() {
   return (neuron0x2916a30()*1.71478);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cf60() {
   return (neuron0x2916d70()*0.0267086);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cfa0() {
   return (neuron0x29170b0()*-0.0132663);
}

double nnFunc_25_25hi_3000ep__::synapse0x291cfe0() {
   return (neuron0x29173f0()*-5.08802);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d020() {
   return (neuron0x2917730()*-0.362874);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d3a0() {
   return (neuron0x2916a30()*0.635441);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d3e0() {
   return (neuron0x2916d70()*1.46175);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d420() {
   return (neuron0x29170b0()*0.787811);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d460() {
   return (neuron0x29173f0()*-5.54303);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d4a0() {
   return (neuron0x2917730()*2.66004);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d820() {
   return (neuron0x2916a30()*-0.114334);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d860() {
   return (neuron0x2916d70()*-0.0327466);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d8a0() {
   return (neuron0x29170b0()*0.299338);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d8e0() {
   return (neuron0x29173f0()*-18.6934);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d920() {
   return (neuron0x2917730()*-8.81252);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dca0() {
   return (neuron0x2916a30()*-2.57382);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dce0() {
   return (neuron0x2916d70()*1.02861);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dd20() {
   return (neuron0x29170b0()*1.77587);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dd60() {
   return (neuron0x29173f0()*-6.92803);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dda0() {
   return (neuron0x2917730()*1.09541);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e120() {
   return (neuron0x2916a30()*0.176426);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e160() {
   return (neuron0x2916d70()*-0.0157091);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e1a0() {
   return (neuron0x29170b0()*-0.046373);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e1e0() {
   return (neuron0x29173f0()*4.65091);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e220() {
   return (neuron0x2917730()*1.61478);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e5a0() {
   return (neuron0x2916a30()*9.84724);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e5e0() {
   return (neuron0x2916d70()*-0.0692265);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e620() {
   return (neuron0x29170b0()*4.27344);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e660() {
   return (neuron0x29173f0()*-10.1177);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e6a0() {
   return (neuron0x2917730()*4.98143);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ea20() {
   return (neuron0x2916a30()*1.08225);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ea60() {
   return (neuron0x2916d70()*-0.0530983);
}

double nnFunc_25_25hi_3000ep__::synapse0x291eaa0() {
   return (neuron0x29170b0()*-0.417385);
}

double nnFunc_25_25hi_3000ep__::synapse0x291eae0() {
   return (neuron0x29173f0()*0.352719);
}

double nnFunc_25_25hi_3000ep__::synapse0x291eb20() {
   return (neuron0x2917730()*-0.911437);
}

double nnFunc_25_25hi_3000ep__::synapse0x291eea0() {
   return (neuron0x2916a30()*0.23992);
}

double nnFunc_25_25hi_3000ep__::synapse0x291eee0() {
   return (neuron0x2916d70()*-0.00385888);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ef20() {
   return (neuron0x29170b0()*0.546193);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ef60() {
   return (neuron0x29173f0()*13.3198);
}

double nnFunc_25_25hi_3000ep__::synapse0x291efa0() {
   return (neuron0x2917730()*4.02044);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918ac0() {
   return (neuron0x2917ba0()*0.0785652);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918b00() {
   return (neuron0x2917f10()*0.387976);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918fd0() {
   return (neuron0x2918390()*-0.308198);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919010() {
   return (neuron0x2918810()*-0.134462);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919450() {
   return (neuron0x2918d20()*-0.137035);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919490() {
   return (neuron0x29191a0()*-0.828365);
}

double nnFunc_25_25hi_3000ep__::synapse0x29198d0() {
   return (neuron0x2919620()*-1.11235);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919910() {
   return (neuron0x2919c30()*0.0551995);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919e50() {
   return (neuron0x291a020()*0.891433);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919e90() {
   return (neuron0x291a4a0()*0.461083);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a2d0() {
   return (neuron0x291a920()*0.0268899);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a310() {
   return (neuron0x291ada0()*0.0514369);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a750() {
   return (neuron0x291b2b0()*-0.822913);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a790() {
   return (neuron0x2919a20()*0.0225972);
}

double nnFunc_25_25hi_3000ep__::synapse0x291abd0() {
   return (neuron0x291bbc0()*0.619334);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ac10() {
   return (neuron0x291c040()*0.164754);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b050() {
   return (neuron0x291c910()*0.246265);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b090() {
   return (neuron0x291cbe0()*0.735053);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b560() {
   return (neuron0x291d060()*0.498626);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b5a0() {
   return (neuron0x291d4e0()*0.000785483);
}

double nnFunc_25_25hi_3000ep__::synapse0x291be70() {
   return (neuron0x291d960()*1.12031);
}

double nnFunc_25_25hi_3000ep__::synapse0x291beb0() {
   return (neuron0x291dde0()*-0.0330594);
}

double nnFunc_25_25hi_3000ep__::synapse0x291c2f0() {
   return (neuron0x291e260()*0.136597);
}

double nnFunc_25_25hi_3000ep__::synapse0x291c330() {
   return (neuron0x291e6e0()*0.50033);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917950() {
   return (neuron0x291eb60()*1.03898);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b9d0() {
   return (neuron0x2917ba0()*-1.77538);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ba10() {
   return (neuron0x2917f10()*-0.914701);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ba50() {
   return (neuron0x2918390()*-0.135523);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ba90() {
   return (neuron0x2918810()*-0.834391);
}

double nnFunc_25_25hi_3000ep__::synapse0x291bad0() {
   return (neuron0x2918d20()*0.220932);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917990() {
   return (neuron0x29191a0()*2.23423);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dc10() {
   return (neuron0x2919620()*1.39101);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dc50() {
   return (neuron0x2919c30()*-0.0828579);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e090() {
   return (neuron0x291a020()*-1.17549);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e0d0() {
   return (neuron0x291a4a0()*-1.43281);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e510() {
   return (neuron0x291a920()*-2.11115);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e550() {
   return (neuron0x291ada0()*-0.808718);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e990() {
   return (neuron0x291b2b0()*-0.147128);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e9d0() {
   return (neuron0x2919a20()*0.0570249);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ee10() {
   return (neuron0x291bbc0()*-1.20804);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ee50() {
   return (neuron0x291c040()*0.0339669);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917dc0() {
   return (neuron0x291c910()*-0.819268);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917e00() {
   return (neuron0x291cbe0()*-1.22624);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ce90() {
   return (neuron0x291d060()*-1.88697);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ced0() {
   return (neuron0x291d4e0()*0.164811);
}

double nnFunc_25_25hi_3000ep__::synapse0x2823c60() {
   return (neuron0x291d960()*-1.27733);
}

double nnFunc_25_25hi_3000ep__::synapse0x2823ca0() {
   return (neuron0x291dde0()*-0.186143);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921520() {
   return (neuron0x291e260()*-2.90164);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921560() {
   return (neuron0x291e6e0()*-0.805207);
}

double nnFunc_25_25hi_3000ep__::synapse0x29215a0() {
   return (neuron0x291eb60()*-1.11978);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b0e0() {
   return (neuron0x2917ba0()*-0.0907521);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b120() {
   return (neuron0x2917f10()*-0.238789);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b160() {
   return (neuron0x2918390()*1.7774);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b1a0() {
   return (neuron0x2918810()*-0.689769);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921b30() {
   return (neuron0x2918d20()*0.0410781);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921b70() {
   return (neuron0x29191a0()*4.59262);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921bb0() {
   return (neuron0x2919620()*1.18378);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921bf0() {
   return (neuron0x2919c30()*-0.984589);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921c30() {
   return (neuron0x291a020()*-2.24449);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921c70() {
   return (neuron0x291a4a0()*-2.40823);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921cb0() {
   return (neuron0x291a920()*-0.482516);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921cf0() {
   return (neuron0x291ada0()*0.314772);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921d30() {
   return (neuron0x291b2b0()*0.00554292);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921d70() {
   return (neuron0x2919a20()*-0.489188);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921db0() {
   return (neuron0x291bbc0()*0.585784);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921df0() {
   return (neuron0x291c040()*0.322594);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921770() {
   return (neuron0x291c910()*-0.0046003);
}

double nnFunc_25_25hi_3000ep__::synapse0x29217b0() {
   return (neuron0x291cbe0()*0.826243);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921f40() {
   return (neuron0x291d060()*-0.954652);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921f80() {
   return (neuron0x291d4e0()*6.97138);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921fc0() {
   return (neuron0x291d960()*-1.3924);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922000() {
   return (neuron0x291dde0()*-0.297049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922040() {
   return (neuron0x291e260()*-3.54993);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922080() {
   return (neuron0x291e6e0()*-0.0928678);
}

double nnFunc_25_25hi_3000ep__::synapse0x29220c0() {
   return (neuron0x291eb60()*-3.25482);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922440() {
   return (neuron0x2917ba0()*-1.94645);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922480() {
   return (neuron0x2917f10()*-0.0685989);
}

double nnFunc_25_25hi_3000ep__::synapse0x29224c0() {
   return (neuron0x2918390()*-0.192096);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922500() {
   return (neuron0x2918810()*0.132045);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922540() {
   return (neuron0x2918d20()*0.150627);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922580() {
   return (neuron0x29191a0()*2.08916);
}

double nnFunc_25_25hi_3000ep__::synapse0x29225c0() {
   return (neuron0x2919620()*1.02481);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922600() {
   return (neuron0x2919c30()*0.329424);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922640() {
   return (neuron0x291a020()*-1.50008);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922680() {
   return (neuron0x291a4a0()*-1.16631);
}

double nnFunc_25_25hi_3000ep__::synapse0x29226c0() {
   return (neuron0x291a920()*-1.81415);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922700() {
   return (neuron0x291ada0()*-0.392018);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922740() {
   return (neuron0x291b2b0()*0.0714909);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922780() {
   return (neuron0x2919a20()*-0.0768572);
}

double nnFunc_25_25hi_3000ep__::synapse0x29227c0() {
   return (neuron0x291bbc0()*-2.0397);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922800() {
   return (neuron0x291c040()*0.4191);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922290() {
   return (neuron0x291c910()*-0.886441);
}

double nnFunc_25_25hi_3000ep__::synapse0x29222d0() {
   return (neuron0x291cbe0()*-0.629107);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922950() {
   return (neuron0x291d060()*-2.02661);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922990() {
   return (neuron0x291d4e0()*0.578129);
}

double nnFunc_25_25hi_3000ep__::synapse0x29229d0() {
   return (neuron0x291d960()*-1.68212);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922a10() {
   return (neuron0x291dde0()*0.54628);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922a50() {
   return (neuron0x291e260()*-3.07863);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922a90() {
   return (neuron0x291e6e0()*-1.15396);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922ad0() {
   return (neuron0x291eb60()*-0.893339);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922e50() {
   return (neuron0x2917ba0()*0.553329);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922e90() {
   return (neuron0x2917f10()*0.356121);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922ed0() {
   return (neuron0x2918390()*-0.0750712);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922f10() {
   return (neuron0x2918810()*-0.588619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922f50() {
   return (neuron0x2918d20()*-0.61033);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922f90() {
   return (neuron0x29191a0()*-0.667575);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922fd0() {
   return (neuron0x2919620()*0.0668731);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923010() {
   return (neuron0x2919c30()*0.407315);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923050() {
   return (neuron0x291a020()*0.135412);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923090() {
   return (neuron0x291a4a0()*0.867762);
}

double nnFunc_25_25hi_3000ep__::synapse0x29230d0() {
   return (neuron0x291a920()*2.38888);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923110() {
   return (neuron0x291ada0()*0.384399);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923150() {
   return (neuron0x291b2b0()*-1.83877);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923190() {
   return (neuron0x2919a20()*-0.815571);
}

double nnFunc_25_25hi_3000ep__::synapse0x29231d0() {
   return (neuron0x291bbc0()*2.91702);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923210() {
   return (neuron0x291c040()*-1.61795);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922ca0() {
   return (neuron0x291c910()*-1.06528);
}

double nnFunc_25_25hi_3000ep__::synapse0x2922ce0() {
   return (neuron0x291cbe0()*-0.0362252);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923360() {
   return (neuron0x291d060()*-0.145886);
}

double nnFunc_25_25hi_3000ep__::synapse0x29233a0() {
   return (neuron0x291d4e0()*-1.59079);
}

double nnFunc_25_25hi_3000ep__::synapse0x29233e0() {
   return (neuron0x291d960()*-0.287003);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923420() {
   return (neuron0x291dde0()*-3.62159);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923460() {
   return (neuron0x291e260()*-0.0696382);
}

double nnFunc_25_25hi_3000ep__::synapse0x29234a0() {
   return (neuron0x291e6e0()*0.589778);
}

double nnFunc_25_25hi_3000ep__::synapse0x29234e0() {
   return (neuron0x291eb60()*-0.211782);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923860() {
   return (neuron0x2917ba0()*0.616599);
}

double nnFunc_25_25hi_3000ep__::synapse0x29238a0() {
   return (neuron0x2917f10()*0.379095);
}

double nnFunc_25_25hi_3000ep__::synapse0x29238e0() {
   return (neuron0x2918390()*0.0726478);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923920() {
   return (neuron0x2918810()*0.951559);
}

double nnFunc_25_25hi_3000ep__::synapse0x2923960() {
   return (neuron0x2918d20()*-0.535607);
}

double nnFunc_25_25hi_3000ep__::synapse0x29239a0() {
   return (neuron0x29191a0()*-2.4539);
}

double nnFunc_25_25hi_3000ep__::synapse0x29239e0() {
   return (neuron0x2919620()*-1.53133);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920c00() {
   return (neuron0x2919c30()*-0.348179);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920c40() {
   return (neuron0x291a020()*1.6745);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920c80() {
   return (neuron0x291a4a0()*1.22114);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920cc0() {
   return (neuron0x291a920()*0.964266);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920d00() {
   return (neuron0x291ada0()*0.53691);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920d40() {
   return (neuron0x291b2b0()*-0.425688);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920d80() {
   return (neuron0x2919a20()*-0.11913);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920dc0() {
   return (neuron0x291bbc0()*2.98893);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920e00() {
   return (neuron0x291c040()*-0.231243);
}

double nnFunc_25_25hi_3000ep__::synapse0x29236b0() {
   return (neuron0x291c910()*-0.0995234);
}

double nnFunc_25_25hi_3000ep__::synapse0x29236f0() {
   return (neuron0x291cbe0()*0.751463);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920f50() {
   return (neuron0x291d060()*1.42884);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920f90() {
   return (neuron0x291d4e0()*-1.02002);
}

double nnFunc_25_25hi_3000ep__::synapse0x2920fd0() {
   return (neuron0x291d960()*1.5533);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921010() {
   return (neuron0x291dde0()*-0.407183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921050() {
   return (neuron0x291e260()*1.71865);
}

double nnFunc_25_25hi_3000ep__::synapse0x2921090() {
   return (neuron0x291e6e0()*0.615115);
}

double nnFunc_25_25hi_3000ep__::synapse0x29210d0() {
   return (neuron0x291eb60()*0.304787);
}

double nnFunc_25_25hi_3000ep__::synapse0x29213c0() {
   return (neuron0x2917ba0()*-0.124451);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924ac0() {
   return (neuron0x2917f10()*-0.288046);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924b00() {
   return (neuron0x2918390()*0.285153);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924b40() {
   return (neuron0x2918810()*0.157703);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924b80() {
   return (neuron0x2918d20()*0.00419206);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924bc0() {
   return (neuron0x29191a0()*0.936644);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924c00() {
   return (neuron0x2919620()*-0.818169);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924c40() {
   return (neuron0x2919c30()*-1.06463);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924c80() {
   return (neuron0x291a020()*-0.57288);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924cc0() {
   return (neuron0x291a4a0()*-0.0408385);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924d00() {
   return (neuron0x291a920()*-0.203745);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924d40() {
   return (neuron0x291ada0()*0.536365);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924d80() {
   return (neuron0x291b2b0()*0.3425);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924dc0() {
   return (neuron0x2919a20()*0.552573);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924e00() {
   return (neuron0x291bbc0()*-1.08088);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924e40() {
   return (neuron0x291c040()*0.269033);
}

double nnFunc_25_25hi_3000ep__::synapse0x29212a0() {
   return (neuron0x291c910()*-0.288109);
}

double nnFunc_25_25hi_3000ep__::synapse0x29212e0() {
   return (neuron0x291cbe0()*0.315423);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924f90() {
   return (neuron0x291d060()*-0.119866);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924fd0() {
   return (neuron0x291d4e0()*0.939358);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925010() {
   return (neuron0x291d960()*0.0692017);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925050() {
   return (neuron0x291dde0()*1.08697);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925090() {
   return (neuron0x291e260()*0.139693);
}

double nnFunc_25_25hi_3000ep__::synapse0x29250d0() {
   return (neuron0x291e6e0()*0.537341);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925110() {
   return (neuron0x291eb60()*1.38105);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925490() {
   return (neuron0x2917ba0()*-1.38864);
}

double nnFunc_25_25hi_3000ep__::synapse0x29254d0() {
   return (neuron0x2917f10()*-0.383659);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925510() {
   return (neuron0x2918390()*12.2185);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925550() {
   return (neuron0x2918810()*-0.490615);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925590() {
   return (neuron0x2918d20()*0.0102548);
}

double nnFunc_25_25hi_3000ep__::synapse0x29255d0() {
   return (neuron0x29191a0()*8.90129);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925610() {
   return (neuron0x2919620()*1.01823);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925650() {
   return (neuron0x2919c30()*4.14714);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925690() {
   return (neuron0x291a020()*-7.76159);
}

double nnFunc_25_25hi_3000ep__::synapse0x29256d0() {
   return (neuron0x291a4a0()*-5.73737);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925710() {
   return (neuron0x291a920()*2.30007);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925750() {
   return (neuron0x291ada0()*0.438606);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925790() {
   return (neuron0x291b2b0()*0.497909);
}

double nnFunc_25_25hi_3000ep__::synapse0x29257d0() {
   return (neuron0x2919a20()*-1.37927);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925810() {
   return (neuron0x291bbc0()*6.32021);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925850() {
   return (neuron0x291c040()*-0.996706);
}

double nnFunc_25_25hi_3000ep__::synapse0x29252e0() {
   return (neuron0x291c910()*-1.36102);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925320() {
   return (neuron0x291cbe0()*1.72118);
}

double nnFunc_25_25hi_3000ep__::synapse0x29259a0() {
   return (neuron0x291d060()*-2.83339);
}

double nnFunc_25_25hi_3000ep__::synapse0x29259e0() {
   return (neuron0x291d4e0()*22.1805);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925a20() {
   return (neuron0x291d960()*-2.29793);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925a60() {
   return (neuron0x291dde0()*-2.32573);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925aa0() {
   return (neuron0x291e260()*-12.0387);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925ae0() {
   return (neuron0x291e6e0()*-0.846185);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925b20() {
   return (neuron0x291eb60()*-14.9351);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925ea0() {
   return (neuron0x2917ba0()*0.368945);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925ee0() {
   return (neuron0x2917f10()*0.00276532);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925f20() {
   return (neuron0x2918390()*0.264667);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925f60() {
   return (neuron0x2918810()*-0.529971);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925fa0() {
   return (neuron0x2918d20()*-0.0816991);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925fe0() {
   return (neuron0x29191a0()*-2.12632);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926020() {
   return (neuron0x2919620()*0.00754175);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926060() {
   return (neuron0x2919c30()*-1.00153);
}

double nnFunc_25_25hi_3000ep__::synapse0x29260a0() {
   return (neuron0x291a020()*-0.458904);
}

double nnFunc_25_25hi_3000ep__::synapse0x29260e0() {
   return (neuron0x291a4a0()*-2.96715);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926120() {
   return (neuron0x291a920()*-1.01545);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926160() {
   return (neuron0x291ada0()*0.104989);
}

double nnFunc_25_25hi_3000ep__::synapse0x29261a0() {
   return (neuron0x291b2b0()*-0.0539961);
}

double nnFunc_25_25hi_3000ep__::synapse0x29261e0() {
   return (neuron0x2919a20()*0.796631);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926220() {
   return (neuron0x291bbc0()*-0.189049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926260() {
   return (neuron0x291c040()*1.02798);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925cf0() {
   return (neuron0x291c910()*0.472526);
}

double nnFunc_25_25hi_3000ep__::synapse0x2925d30() {
   return (neuron0x291cbe0()*0.282214);
}

double nnFunc_25_25hi_3000ep__::synapse0x29263b0() {
   return (neuron0x291d060()*0.903202);
}

double nnFunc_25_25hi_3000ep__::synapse0x29263f0() {
   return (neuron0x291d4e0()*2.87145);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926430() {
   return (neuron0x291d960()*0.440734);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926470() {
   return (neuron0x291dde0()*1.09552);
}

double nnFunc_25_25hi_3000ep__::synapse0x29264b0() {
   return (neuron0x291e260()*0.0209895);
}

double nnFunc_25_25hi_3000ep__::synapse0x29264f0() {
   return (neuron0x291e6e0()*-0.444966);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926530() {
   return (neuron0x291eb60()*-0.90291);
}

double nnFunc_25_25hi_3000ep__::synapse0x29268b0() {
   return (neuron0x2917ba0()*0.779366);
}

double nnFunc_25_25hi_3000ep__::synapse0x29268f0() {
   return (neuron0x2917f10()*-0.47086);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926930() {
   return (neuron0x2918390()*0.0477453);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926970() {
   return (neuron0x2918810()*-1.07351);
}

double nnFunc_25_25hi_3000ep__::synapse0x29269b0() {
   return (neuron0x2918d20()*0.393042);
}

double nnFunc_25_25hi_3000ep__::synapse0x29269f0() {
   return (neuron0x29191a0()*0.309423);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926a30() {
   return (neuron0x2919620()*0.986396);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926a70() {
   return (neuron0x2919c30()*-0.683359);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926ab0() {
   return (neuron0x291a020()*-0.52677);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926af0() {
   return (neuron0x291a4a0()*-0.963091);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926b30() {
   return (neuron0x291a920()*0.65756);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926b70() {
   return (neuron0x291ada0()*0.0301064);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926bb0() {
   return (neuron0x291b2b0()*-0.167236);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926bf0() {
   return (neuron0x2919a20()*0.0644637);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926c30() {
   return (neuron0x291bbc0()*-0.982979);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926c70() {
   return (neuron0x291c040()*-0.282331);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926700() {
   return (neuron0x291c910()*-0.178104);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926740() {
   return (neuron0x291cbe0()*-1.26123);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926dc0() {
   return (neuron0x291d060()*-0.877766);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926e00() {
   return (neuron0x291d4e0()*0.52506);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926e40() {
   return (neuron0x291d960()*-1.37709);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926e80() {
   return (neuron0x291dde0()*-0.566655);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926ec0() {
   return (neuron0x291e260()*-1.61898);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926f00() {
   return (neuron0x291e6e0()*-0.0483555);
}

double nnFunc_25_25hi_3000ep__::synapse0x2926f40() {
   return (neuron0x291eb60()*-0.712419);
}

double nnFunc_25_25hi_3000ep__::synapse0x29272c0() {
   return (neuron0x2917ba0()*1.85018);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927300() {
   return (neuron0x2917f10()*0.601363);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927340() {
   return (neuron0x2918390()*-0.642964);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927380() {
   return (neuron0x2918810()*0.527479);
}

double nnFunc_25_25hi_3000ep__::synapse0x29273c0() {
   return (neuron0x2918d20()*-0.387192);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927400() {
   return (neuron0x29191a0()*-1.50903);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927440() {
   return (neuron0x2919620()*1.09461);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927480() {
   return (neuron0x2919c30()*1.57673);
}

double nnFunc_25_25hi_3000ep__::synapse0x29274c0() {
   return (neuron0x291a020()*1.80743);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927500() {
   return (neuron0x291a4a0()*0.411615);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927540() {
   return (neuron0x291a920()*-0.13183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927580() {
   return (neuron0x291ada0()*-0.727252);
}

double nnFunc_25_25hi_3000ep__::synapse0x29275c0() {
   return (neuron0x291b2b0()*-0.742377);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927600() {
   return (neuron0x2919a20()*-0.0337154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927640() {
   return (neuron0x291bbc0()*2.83047);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927680() {
   return (neuron0x291c040()*-0.493526);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927110() {
   return (neuron0x291c910()*0.473689);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927150() {
   return (neuron0x291cbe0()*-0.238287);
}

double nnFunc_25_25hi_3000ep__::synapse0x29277d0() {
   return (neuron0x291d060()*0.00574328);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927810() {
   return (neuron0x291d4e0()*-1.30099);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927850() {
   return (neuron0x291d960()*0.591864);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927890() {
   return (neuron0x291dde0()*0.0403254);
}

double nnFunc_25_25hi_3000ep__::synapse0x29278d0() {
   return (neuron0x291e260()*-0.0411318);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927910() {
   return (neuron0x291e6e0()*0.228174);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927950() {
   return (neuron0x291eb60()*2.07016);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927cd0() {
   return (neuron0x2917ba0()*-1.09419);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927d10() {
   return (neuron0x2917f10()*-0.921397);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927d50() {
   return (neuron0x2918390()*-0.344405);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927d90() {
   return (neuron0x2918810()*-0.315263);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927dd0() {
   return (neuron0x2918d20()*0.450117);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927e10() {
   return (neuron0x29191a0()*1.14788);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927e50() {
   return (neuron0x2919620()*0.752899);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927e90() {
   return (neuron0x2919c30()*-0.407848);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927ed0() {
   return (neuron0x291a020()*-0.711329);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927f10() {
   return (neuron0x291a4a0()*-1.09755);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927f50() {
   return (neuron0x291a920()*-0.567939);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927f90() {
   return (neuron0x291ada0()*-0.308381);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927fd0() {
   return (neuron0x291b2b0()*0.573886);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928010() {
   return (neuron0x2919a20()*0.018852);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928050() {
   return (neuron0x291bbc0()*-1.20716);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928090() {
   return (neuron0x291c040()*0.376219);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927b20() {
   return (neuron0x291c910()*-0.276334);
}

double nnFunc_25_25hi_3000ep__::synapse0x2927b60() {
   return (neuron0x291cbe0()*-0.274986);
}

double nnFunc_25_25hi_3000ep__::synapse0x29281e0() {
   return (neuron0x291d060()*-1.68328);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928220() {
   return (neuron0x291d4e0()*0.258095);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928260() {
   return (neuron0x291d960()*-1.52271);
}

double nnFunc_25_25hi_3000ep__::synapse0x29282a0() {
   return (neuron0x291dde0()*-0.0707432);
}

double nnFunc_25_25hi_3000ep__::synapse0x29282e0() {
   return (neuron0x291e260()*-1.14271);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928320() {
   return (neuron0x291e6e0()*-0.184972);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928360() {
   return (neuron0x291eb60()*-0.730269);
}

double nnFunc_25_25hi_3000ep__::synapse0x29286e0() {
   return (neuron0x2917ba0()*5.61725);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928720() {
   return (neuron0x2917f10()*0.901142);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928760() {
   return (neuron0x2918390()*2.01961);
}

double nnFunc_25_25hi_3000ep__::synapse0x29287a0() {
   return (neuron0x2918810()*-0.9532);
}

double nnFunc_25_25hi_3000ep__::synapse0x29287e0() {
   return (neuron0x2918d20()*0.156174);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928820() {
   return (neuron0x29191a0()*-2.28594);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928860() {
   return (neuron0x2919620()*0.634864);
}

double nnFunc_25_25hi_3000ep__::synapse0x29288a0() {
   return (neuron0x2919c30()*-1.18315);
}

double nnFunc_25_25hi_3000ep__::synapse0x29288e0() {
   return (neuron0x291a020()*-1.02554);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928920() {
   return (neuron0x291a4a0()*-0.220349);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928960() {
   return (neuron0x291a920()*2.38073);
}

double nnFunc_25_25hi_3000ep__::synapse0x29289a0() {
   return (neuron0x291ada0()*-0.284149);
}

double nnFunc_25_25hi_3000ep__::synapse0x29289e0() {
   return (neuron0x291b2b0()*0.309183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928a20() {
   return (neuron0x2919a20()*1.39427);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928a60() {
   return (neuron0x291bbc0()*0.897676);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928aa0() {
   return (neuron0x291c040()*0.957097);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928530() {
   return (neuron0x291c910()*1.81183);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928570() {
   return (neuron0x291cbe0()*0.305628);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928bf0() {
   return (neuron0x291d060()*1.78619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928c30() {
   return (neuron0x291d4e0()*-7.12118);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928c70() {
   return (neuron0x291d960()*1.51979);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928cb0() {
   return (neuron0x291dde0()*-0.404813);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928cf0() {
   return (neuron0x291e260()*-3.16369);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928d30() {
   return (neuron0x291e6e0()*-0.0532239);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928d70() {
   return (neuron0x291eb60()*1.05263);
}

double nnFunc_25_25hi_3000ep__::synapse0x29290f0() {
   return (neuron0x2917ba0()*1.54787);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929130() {
   return (neuron0x2917f10()*1.08941);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929170() {
   return (neuron0x2918390()*0.625076);
}

double nnFunc_25_25hi_3000ep__::synapse0x29291b0() {
   return (neuron0x2918810()*-1.60299);
}

double nnFunc_25_25hi_3000ep__::synapse0x29291f0() {
   return (neuron0x2918d20()*-1.21503);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929230() {
   return (neuron0x29191a0()*-2.88574);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929270() {
   return (neuron0x2919620()*-2.17028);
}

double nnFunc_25_25hi_3000ep__::synapse0x29292b0() {
   return (neuron0x2919c30()*-1.3989);
}

double nnFunc_25_25hi_3000ep__::synapse0x29292f0() {
   return (neuron0x291a020()*-0.436254);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929330() {
   return (neuron0x291a4a0()*0.476911);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929370() {
   return (neuron0x291a920()*-1.27348);
}

double nnFunc_25_25hi_3000ep__::synapse0x29293b0() {
   return (neuron0x291ada0()*0.339069);
}

double nnFunc_25_25hi_3000ep__::synapse0x29293f0() {
   return (neuron0x291b2b0()*-0.978676);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929430() {
   return (neuron0x2919a20()*-1.37789);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929470() {
   return (neuron0x291bbc0()*5.56898);
}

double nnFunc_25_25hi_3000ep__::synapse0x29294b0() {
   return (neuron0x291c040()*-1.93308);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928f40() {
   return (neuron0x291c910()*-1.26296);
}

double nnFunc_25_25hi_3000ep__::synapse0x2928f80() {
   return (neuron0x291cbe0()*-1.96745);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929600() {
   return (neuron0x291d060()*1.35695);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929640() {
   return (neuron0x291d4e0()*-2.98087);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929680() {
   return (neuron0x291d960()*0.727851);
}

double nnFunc_25_25hi_3000ep__::synapse0x29296c0() {
   return (neuron0x291dde0()*-3.43459);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929700() {
   return (neuron0x291e260()*0.0113783);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929740() {
   return (neuron0x291e6e0()*1.0656);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929780() {
   return (neuron0x291eb60()*1.33693);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929b00() {
   return (neuron0x2917ba0()*-1.59258);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929b40() {
   return (neuron0x2917f10()*-0.661134);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929b80() {
   return (neuron0x2918390()*-0.0501713);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929bc0() {
   return (neuron0x2918810()*-0.280562);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929c00() {
   return (neuron0x2918d20()*0.444298);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929c40() {
   return (neuron0x29191a0()*0.957666);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929c80() {
   return (neuron0x2919620()*0.527033);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929cc0() {
   return (neuron0x2919c30()*-0.0859145);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929d00() {
   return (neuron0x291a020()*-0.967472);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929d40() {
   return (neuron0x291a4a0()*-0.322572);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929d80() {
   return (neuron0x291a920()*-0.345154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929dc0() {
   return (neuron0x291ada0()*-0.24546);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929e00() {
   return (neuron0x291b2b0()*0.249325);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929e40() {
   return (neuron0x2919a20()*0.103313);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929e80() {
   return (neuron0x291bbc0()*-1.49141);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929ec0() {
   return (neuron0x291c040()*0.0145271);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929950() {
   return (neuron0x291c910()*-0.672217);
}

double nnFunc_25_25hi_3000ep__::synapse0x2929990() {
   return (neuron0x291cbe0()*-0.861881);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a010() {
   return (neuron0x291d060()*-0.708976);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a050() {
   return (neuron0x291d4e0()*0.440984);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a090() {
   return (neuron0x291d960()*-1.06632);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a0d0() {
   return (neuron0x291dde0()*0.0543728);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a110() {
   return (neuron0x291e260()*-1.4126);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a150() {
   return (neuron0x291e6e0()*-0.41262);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a190() {
   return (neuron0x291eb60()*-0.33105);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a510() {
   return (neuron0x2917ba0()*-0.968085);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917d30() {
   return (neuron0x2917f10()*-0.535662);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917d70() {
   return (neuron0x2918390()*0.0674206);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918130() {
   return (neuron0x2918810()*0.127682);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918170() {
   return (neuron0x2918d20()*0.0852977);
}

double nnFunc_25_25hi_3000ep__::synapse0x29185b0() {
   return (neuron0x29191a0()*-2.2633);
}

double nnFunc_25_25hi_3000ep__::synapse0x29185f0() {
   return (neuron0x2919620()*-0.504817);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918a30() {
   return (neuron0x2919c30()*-1.11596);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918a70() {
   return (neuron0x291a020()*-0.199067);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918f40() {
   return (neuron0x291a4a0()*0.869769);
}

double nnFunc_25_25hi_3000ep__::synapse0x2918f80() {
   return (neuron0x291a920()*-0.479662);
}

double nnFunc_25_25hi_3000ep__::synapse0x29193c0() {
   return (neuron0x291ada0()*0.301122);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919400() {
   return (neuron0x291b2b0()*-0.473637);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919840() {
   return (neuron0x2919a20()*0.881898);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919880() {
   return (neuron0x291bbc0()*-0.628711);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919dc0() {
   return (neuron0x291c040()*0.46888);
}

double nnFunc_25_25hi_3000ep__::synapse0x2919e00() {
   return (neuron0x291c910()*0.680189);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a240() {
   return (neuron0x291cbe0()*0.573994);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a280() {
   return (neuron0x291d060()*0.458866);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a6c0() {
   return (neuron0x291d4e0()*-0.126681);
}

double nnFunc_25_25hi_3000ep__::synapse0x291a700() {
   return (neuron0x291d960()*0.226149);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ab40() {
   return (neuron0x291dde0()*2.90525);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ab80() {
   return (neuron0x291e260()*0.167424);
}

double nnFunc_25_25hi_3000ep__::synapse0x291afc0() {
   return (neuron0x291e6e0()*-0.201714);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b000() {
   return (neuron0x291eb60()*1.13314);
}

double nnFunc_25_25hi_3000ep__::synapse0x2924980() {
   return (neuron0x2917ba0()*-1.50102);
}

double nnFunc_25_25hi_3000ep__::synapse0x29249c0() {
   return (neuron0x2917f10()*-0.00435569);
}

double nnFunc_25_25hi_3000ep__::synapse0x291c260() {
   return (neuron0x2918390()*-0.354971);
}

double nnFunc_25_25hi_3000ep__::synapse0x291c2a0() {
   return (neuron0x2918810()*0.459754);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a360() {
   return (neuron0x2918d20()*0.573346);
}

double nnFunc_25_25hi_3000ep__::synapse0x292a3a0() {
   return (neuron0x29191a0()*0.171898);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917610() {
   return (neuron0x2919620()*-0.194327);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917650() {
   return (neuron0x2919c30()*0.0451502);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ce00() {
   return (neuron0x291a020()*-0.409088);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ce40() {
   return (neuron0x291a4a0()*-0.181301);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d280() {
   return (neuron0x291a920()*-0.069903);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d2c0() {
   return (neuron0x291ada0()*0.264227);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d700() {
   return (neuron0x291b2b0()*0.539246);
}

double nnFunc_25_25hi_3000ep__::synapse0x291d740() {
   return (neuron0x2919a20()*-0.0582241);
}

double nnFunc_25_25hi_3000ep__::synapse0x291db80() {
   return (neuron0x291bbc0()*-0.93501);
}

double nnFunc_25_25hi_3000ep__::synapse0x291dbc0() {
   return (neuron0x291c040()*0.136085);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e000() {
   return (neuron0x291c910()*-0.65214);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e040() {
   return (neuron0x291cbe0()*0.449787);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e480() {
   return (neuron0x291d060()*-0.581008);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e4c0() {
   return (neuron0x291d4e0()*-0.0413238);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e900() {
   return (neuron0x291d960()*-0.574413);
}

double nnFunc_25_25hi_3000ep__::synapse0x291e940() {
   return (neuron0x291dde0()*-0.236333);
}

double nnFunc_25_25hi_3000ep__::synapse0x291ed80() {
   return (neuron0x291e260()*-0.637738);
}

double nnFunc_25_25hi_3000ep__::synapse0x291edc0() {
   return (neuron0x291e6e0()*-0.0331191);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b4d0() {
   return (neuron0x291eb60()*-0.694952);
}

double nnFunc_25_25hi_3000ep__::synapse0x291b510() {
   return (neuron0x2917ba0()*0.380009);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d780() {
   return (neuron0x2917f10()*-0.0578808);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d7c0() {
   return (neuron0x2918390()*-6.73364);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d800() {
   return (neuron0x2918810()*0.601512);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d840() {
   return (neuron0x2918d20()*-0.184499);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d880() {
   return (neuron0x29191a0()*-7.14499);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d8c0() {
   return (neuron0x2919620()*-1.50542);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d900() {
   return (neuron0x2919c30()*-4.25551);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d940() {
   return (neuron0x291a020()*7.06339);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d980() {
   return (neuron0x291a4a0()*2.50075);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d9c0() {
   return (neuron0x291a920()*-4.44001);
}

double nnFunc_25_25hi_3000ep__::synapse0x292da00() {
   return (neuron0x291ada0()*1.44462);
}

double nnFunc_25_25hi_3000ep__::synapse0x292da40() {
   return (neuron0x291b2b0()*-0.384404);
}

double nnFunc_25_25hi_3000ep__::synapse0x292da80() {
   return (neuron0x2919a20()*1.3147);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dac0() {
   return (neuron0x291bbc0()*-10.4888);
}

double nnFunc_25_25hi_3000ep__::synapse0x292db00() {
   return (neuron0x291c040()*0.513701);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d5d0() {
   return (neuron0x291c910()*0.741471);
}

double nnFunc_25_25hi_3000ep__::synapse0x292d610() {
   return (neuron0x291cbe0()*-2.79422);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dc50() {
   return (neuron0x291d060()*2.38234);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dc90() {
   return (neuron0x291d4e0()*-6.75322);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dcd0() {
   return (neuron0x291d960()*2.52236);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dd10() {
   return (neuron0x291dde0()*4.65314);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dd50() {
   return (neuron0x291e260()*5.19225);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dd90() {
   return (neuron0x291e6e0()*-0.0701578);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ddd0() {
   return (neuron0x291eb60()*3.65535);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e150() {
   return (neuron0x2917ba0()*1.60675);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e190() {
   return (neuron0x2917f10()*0.38164);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e1d0() {
   return (neuron0x2918390()*0.188042);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e210() {
   return (neuron0x2918810()*0.507466);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e250() {
   return (neuron0x2918d20()*-0.272027);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e290() {
   return (neuron0x29191a0()*-0.172274);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e2d0() {
   return (neuron0x2919620()*-0.262628);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e310() {
   return (neuron0x2919c30()*-0.20934);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e350() {
   return (neuron0x291a020()*0.248163);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e390() {
   return (neuron0x291a4a0()*0.393926);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e3d0() {
   return (neuron0x291a920()*0.244861);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e410() {
   return (neuron0x291ada0()*0.0500697);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e450() {
   return (neuron0x291b2b0()*-0.388134);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e490() {
   return (neuron0x2919a20()*0.507578);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e4d0() {
   return (neuron0x291bbc0()*0.477008);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e510() {
   return (neuron0x291c040()*-0.294521);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dfa0() {
   return (neuron0x291c910()*0.0787602);
}

double nnFunc_25_25hi_3000ep__::synapse0x292dfe0() {
   return (neuron0x291cbe0()*0.433574);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e660() {
   return (neuron0x291d060()*0.0737065);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e6a0() {
   return (neuron0x291d4e0()*-0.118449);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e6e0() {
   return (neuron0x291d960()*0.41812);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e720() {
   return (neuron0x291dde0()*-0.195974);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e760() {
   return (neuron0x291e260()*-0.189709);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e7a0() {
   return (neuron0x291e6e0()*-0.201212);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e7e0() {
   return (neuron0x291eb60()*0.391193);
}

double nnFunc_25_25hi_3000ep__::synapse0x292eb60() {
   return (neuron0x2917ba0()*0.0615952);
}

double nnFunc_25_25hi_3000ep__::synapse0x292eba0() {
   return (neuron0x2917f10()*-0.450167);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ebe0() {
   return (neuron0x2918390()*0.123306);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ec20() {
   return (neuron0x2918810()*-0.225001);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ec60() {
   return (neuron0x2918d20()*0.0593734);
}

double nnFunc_25_25hi_3000ep__::synapse0x292eca0() {
   return (neuron0x29191a0()*0.0711525);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ece0() {
   return (neuron0x2919620()*1.43823);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ed20() {
   return (neuron0x2919c30()*-0.610324);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ed60() {
   return (neuron0x291a020()*-0.694629);
}

double nnFunc_25_25hi_3000ep__::synapse0x292eda0() {
   return (neuron0x291a4a0()*-0.880003);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ede0() {
   return (neuron0x291a920()*0.223802);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ee20() {
   return (neuron0x291ada0()*-0.441737);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ee60() {
   return (neuron0x291b2b0()*-0.141804);
}

double nnFunc_25_25hi_3000ep__::synapse0x292eea0() {
   return (neuron0x2919a20()*-0.204401);
}

double nnFunc_25_25hi_3000ep__::synapse0x292eee0() {
   return (neuron0x291bbc0()*-0.982806);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ef20() {
   return (neuron0x291c040()*0.231786);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e9b0() {
   return (neuron0x291c910()*-0.620989);
}

double nnFunc_25_25hi_3000ep__::synapse0x292e9f0() {
   return (neuron0x291cbe0()*-0.529877);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f070() {
   return (neuron0x291d060()*-0.932604);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f0b0() {
   return (neuron0x291d4e0()*-0.525784);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f0f0() {
   return (neuron0x291d960()*-0.773988);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f130() {
   return (neuron0x291dde0()*-0.107348);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f170() {
   return (neuron0x291e260()*-0.287898);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f1b0() {
   return (neuron0x291e6e0()*0.0166479);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f1f0() {
   return (neuron0x291eb60()*-0.768435);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f570() {
   return (neuron0x2917ba0()*0.110742);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f5b0() {
   return (neuron0x2917f10()*1.03655);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f5f0() {
   return (neuron0x2918390()*0.170582);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f630() {
   return (neuron0x2918810()*0.503084);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f670() {
   return (neuron0x2918d20()*-0.869773);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f6b0() {
   return (neuron0x29191a0()*0.210072);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f6f0() {
   return (neuron0x2919620()*-0.520139);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f730() {
   return (neuron0x2919c30()*1.30895);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f770() {
   return (neuron0x291a020()*1.04036);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f7b0() {
   return (neuron0x291a4a0()*1.40137);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f7f0() {
   return (neuron0x291a920()*0.356792);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f830() {
   return (neuron0x291ada0()*-0.0361517);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f870() {
   return (neuron0x291b2b0()*-0.0720088);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f8b0() {
   return (neuron0x2919a20()*0.411315);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f8f0() {
   return (neuron0x291bbc0()*1.53755);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f930() {
   return (neuron0x291c040()*-0.185726);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f3c0() {
   return (neuron0x291c910()*0.0115275);
}

double nnFunc_25_25hi_3000ep__::synapse0x292f400() {
   return (neuron0x291cbe0()*1.01099);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fa80() {
   return (neuron0x291d060()*1.52602);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fac0() {
   return (neuron0x291d4e0()*1.07764);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fb00() {
   return (neuron0x291d960()*1.48135);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fb40() {
   return (neuron0x291dde0()*-0.238155);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fb80() {
   return (neuron0x291e260()*0.7775);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fbc0() {
   return (neuron0x291e6e0()*0.107098);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fc00() {
   return (neuron0x291eb60()*0.765778);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ff80() {
   return (neuron0x2917ba0()*-1.89225);
}

double nnFunc_25_25hi_3000ep__::synapse0x292ffc0() {
   return (neuron0x2917f10()*-0.322487);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930000() {
   return (neuron0x2918390()*-0.10977);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930040() {
   return (neuron0x2918810()*-0.401916);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930080() {
   return (neuron0x2918d20()*-0.0661206);
}

double nnFunc_25_25hi_3000ep__::synapse0x29300c0() {
   return (neuron0x29191a0()*0.903391);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930100() {
   return (neuron0x2919620()*0.167873);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930140() {
   return (neuron0x2919c30()*-0.279047);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930180() {
   return (neuron0x291a020()*-0.23843);
}

double nnFunc_25_25hi_3000ep__::synapse0x29301c0() {
   return (neuron0x291a4a0()*-0.160005);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930200() {
   return (neuron0x291a920()*-0.522386);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930240() {
   return (neuron0x291ada0()*0.216795);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930280() {
   return (neuron0x291b2b0()*-0.387987);
}

double nnFunc_25_25hi_3000ep__::synapse0x29302c0() {
   return (neuron0x2919a20()*0.112393);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930300() {
   return (neuron0x291bbc0()*-1.13913);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930340() {
   return (neuron0x291c040()*-0.710827);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fdd0() {
   return (neuron0x291c910()*-0.774298);
}

double nnFunc_25_25hi_3000ep__::synapse0x292fe10() {
   return (neuron0x291cbe0()*-0.0209287);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930490() {
   return (neuron0x291d060()*-0.771323);
}

double nnFunc_25_25hi_3000ep__::synapse0x29304d0() {
   return (neuron0x291d4e0()*0.140602);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930510() {
   return (neuron0x291d960()*-0.293799);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930550() {
   return (neuron0x291dde0()*0.0360116);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930590() {
   return (neuron0x291e260()*-0.96244);
}

double nnFunc_25_25hi_3000ep__::synapse0x29305d0() {
   return (neuron0x291e6e0()*-0.567577);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930610() {
   return (neuron0x291eb60()*-0.415199);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930990() {
   return (neuron0x2917ba0()*2.05459);
}

double nnFunc_25_25hi_3000ep__::synapse0x29309d0() {
   return (neuron0x2917f10()*-0.00514998);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930a10() {
   return (neuron0x2918390()*0.561776);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930a50() {
   return (neuron0x2918810()*0.627324);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930a90() {
   return (neuron0x2918d20()*0.204139);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930ad0() {
   return (neuron0x29191a0()*-0.79897);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930b10() {
   return (neuron0x2919620()*-0.608836);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930b50() {
   return (neuron0x2919c30()*0.209597);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930b90() {
   return (neuron0x291a020()*0.39795);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930bd0() {
   return (neuron0x291a4a0()*0.750115);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930c10() {
   return (neuron0x291a920()*0.535347);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930c50() {
   return (neuron0x291ada0()*-0.268275);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930c90() {
   return (neuron0x291b2b0()*-0.517226);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930cd0() {
   return (neuron0x2919a20()*0.137046);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930d10() {
   return (neuron0x291bbc0()*0.669827);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930d50() {
   return (neuron0x291c040()*0.158353);
}

double nnFunc_25_25hi_3000ep__::synapse0x29307e0() {
   return (neuron0x291c910()*-0.294143);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930820() {
   return (neuron0x291cbe0()*-0.158948);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930ea0() {
   return (neuron0x291d060()*0.868253);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930ee0() {
   return (neuron0x291d4e0()*-0.28083);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930f20() {
   return (neuron0x291d960()*0.762098);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930f60() {
   return (neuron0x291dde0()*-0.318939);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930fa0() {
   return (neuron0x291e260()*0.364224);
}

double nnFunc_25_25hi_3000ep__::synapse0x2930fe0() {
   return (neuron0x291e6e0()*0.325819);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931020() {
   return (neuron0x291eb60()*0.357333);
}

double nnFunc_25_25hi_3000ep__::synapse0x29313a0() {
   return (neuron0x2917ba0()*0.116616);
}

double nnFunc_25_25hi_3000ep__::synapse0x29313e0() {
   return (neuron0x2917f10()*0.15198);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931420() {
   return (neuron0x2918390()*-0.982974);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931460() {
   return (neuron0x2918810()*0.152568);
}

double nnFunc_25_25hi_3000ep__::synapse0x29314a0() {
   return (neuron0x2918d20()*-0.298424);
}

double nnFunc_25_25hi_3000ep__::synapse0x29314e0() {
   return (neuron0x29191a0()*-4.02904);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931520() {
   return (neuron0x2919620()*-1.18031);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931560() {
   return (neuron0x2919c30()*0.0942012);
}

double nnFunc_25_25hi_3000ep__::synapse0x29315a0() {
   return (neuron0x291a020()*2.05992);
}

double nnFunc_25_25hi_3000ep__::synapse0x29315e0() {
   return (neuron0x291a4a0()*1.30218);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931620() {
   return (neuron0x291a920()*-0.19869);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931660() {
   return (neuron0x291ada0()*0.479065);
}

double nnFunc_25_25hi_3000ep__::synapse0x29316a0() {
   return (neuron0x291b2b0()*-1.04601);
}

double nnFunc_25_25hi_3000ep__::synapse0x29316e0() {
   return (neuron0x2919a20()*0.19732);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931720() {
   return (neuron0x291bbc0()*-3.08037);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931760() {
   return (neuron0x291c040()*0.383723);
}

double nnFunc_25_25hi_3000ep__::synapse0x29311f0() {
   return (neuron0x291c910()*0.551329);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931230() {
   return (neuron0x291cbe0()*-0.802434);
}

double nnFunc_25_25hi_3000ep__::synapse0x29318b0() {
   return (neuron0x291d060()*2.20218);
}

double nnFunc_25_25hi_3000ep__::synapse0x29318f0() {
   return (neuron0x291d4e0()*-3.15401);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931930() {
   return (neuron0x291d960()*1.16875);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931970() {
   return (neuron0x291dde0()*0.100761);
}

double nnFunc_25_25hi_3000ep__::synapse0x29319b0() {
   return (neuron0x291e260()*1.40282);
}

double nnFunc_25_25hi_3000ep__::synapse0x29319f0() {
   return (neuron0x291e6e0()*0.605497);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931a30() {
   return (neuron0x291eb60()*1.17061);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931db0() {
   return (neuron0x2917ba0()*-2.4548);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931df0() {
   return (neuron0x2917f10()*-0.924015);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931e30() {
   return (neuron0x2918390()*-3.54319);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931e70() {
   return (neuron0x2918810()*0.690733);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931eb0() {
   return (neuron0x2918d20()*0.165434);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931ef0() {
   return (neuron0x29191a0()*4.99849);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931f30() {
   return (neuron0x2919620()*-0.91073);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931f70() {
   return (neuron0x2919c30()*-0.0302947);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931fb0() {
   return (neuron0x291a020()*-0.00903336);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931ff0() {
   return (neuron0x291a4a0()*-1.9739);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932030() {
   return (neuron0x291a920()*-1.50252);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932070() {
   return (neuron0x291ada0()*-0.364141);
}

double nnFunc_25_25hi_3000ep__::synapse0x29320b0() {
   return (neuron0x291b2b0()*1.80555);
}

double nnFunc_25_25hi_3000ep__::synapse0x29320f0() {
   return (neuron0x2919a20()*0.592923);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932130() {
   return (neuron0x291bbc0()*-15.9982);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932170() {
   return (neuron0x291c040()*0.806855);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931c00() {
   return (neuron0x291c910()*-0.11581);
}

double nnFunc_25_25hi_3000ep__::synapse0x2931c40() {
   return (neuron0x291cbe0()*0.906751);
}

double nnFunc_25_25hi_3000ep__::synapse0x29322c0() {
   return (neuron0x291d060()*-1.94885);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932300() {
   return (neuron0x291d4e0()*1.37302);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932340() {
   return (neuron0x291d960()*-0.793876);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932380() {
   return (neuron0x291dde0()*3.35461);
}

double nnFunc_25_25hi_3000ep__::synapse0x29323c0() {
   return (neuron0x291e260()*-4.61173);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932400() {
   return (neuron0x291e6e0()*-0.575172);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932440() {
   return (neuron0x291eb60()*-1.52229);
}

double nnFunc_25_25hi_3000ep__::synapse0x29326a0() {
   return (neuron0x2920a70()*-0.996149);
}

double nnFunc_25_25hi_3000ep__::synapse0x29326e0() {
   return (neuron0x291b840()*2.76007);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932720() {
   return (neuron0x29215e0()*3.54513);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932760() {
   return (neuron0x2922100()*4.13078);
}

double nnFunc_25_25hi_3000ep__::synapse0x29327a0() {
   return (neuron0x2922b10()*-4.35034);
}

double nnFunc_25_25hi_3000ep__::synapse0x29327e0() {
   return (neuron0x2923520()*-2.19474);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932820() {
   return (neuron0x2921110()*-2.4585);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932860() {
   return (neuron0x2925150()*6.79783);
}

double nnFunc_25_25hi_3000ep__::synapse0x29328a0() {
   return (neuron0x2925b60()*2.85628);
}

double nnFunc_25_25hi_3000ep__::synapse0x29328e0() {
   return (neuron0x2926570()*-2.39131);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932920() {
   return (neuron0x2926f80()*-3.79627);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932960() {
   return (neuron0x2927990()*1.44741);
}

double nnFunc_25_25hi_3000ep__::synapse0x29329a0() {
   return (neuron0x29283a0()*-5.60856);
}

double nnFunc_25_25hi_3000ep__::synapse0x29329e0() {
   return (neuron0x2928db0()*-3.93484);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932a20() {
   return (neuron0x29297c0()*1.58324);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932a60() {
   return (neuron0x292a1d0()*1.94399);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917a70() {
   return (neuron0x29247f0()*0.984852);
}

double nnFunc_25_25hi_3000ep__::synapse0x2917ab0() {
   return (neuron0x292d440()*6.32317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932bb0() {
   return (neuron0x292de10()*-0.862411);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932bf0() {
   return (neuron0x292e820()*-0.774586);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932c30() {
   return (neuron0x292f230()*2.20459);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932c70() {
   return (neuron0x292fc40()*1.41955);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932cb0() {
   return (neuron0x2930650()*-1.30818);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932cf0() {
   return (neuron0x2931060()*3.03521);
}

double nnFunc_25_25hi_3000ep__::synapse0x2932d30() {
   return (neuron0x2931a70()*9.63081);
}

