#include "25_25hi_5000ep_1A_new_moved_random_sectorB_midwing/nnFunc_25_25hi_6000ep_weight_secB.h"
#include <cmath>

double nnFunc_25_25hi_6000ep_weight_secB::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1721fb0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_6000ep_weight_secB::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1721fb0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1706560() {
   return input0;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17068a0() {
   return input1;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1706be0() {
   return input2;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1706f20() {
   return input3;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1707260() {
   return input4;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17076d0() {
   double input = -1.75701;
   input += synapse0x168eca0();
   input += synapse0x16f59d0();
   input += synapse0x1707980();
   input += synapse0x17079c0();
   input += synapse0x1707a00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17076d0() {
   double input = input0x17076d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1707a40() {
   double input = -6.24854;
   input += synapse0x1707d80();
   input += synapse0x1707dc0();
   input += synapse0x1707e00();
   input += synapse0x1707e40();
   input += synapse0x1707e80();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1707a40() {
   double input = input0x1707a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1707ec0() {
   double input = -21.5958;
   input += synapse0x1708200();
   input += synapse0x1708240();
   input += synapse0x1708280();
   input += synapse0x17082c0();
   input += synapse0x1708300();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1707ec0() {
   double input = input0x1707ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1708340() {
   double input = -5.23207;
   input += synapse0x1708680();
   input += synapse0x17086c0();
   input += synapse0x160b9e0();
   input += synapse0x160ba20();
   input += synapse0x1708810();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1708340() {
   double input = input0x1708340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1708850() {
   double input = 2.14611;
   input += synapse0x1708b90();
   input += synapse0x1708bd0();
   input += synapse0x1708c10();
   input += synapse0x1708c50();
   input += synapse0x1708c90();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1708850() {
   double input = input0x1708850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1708cd0() {
   double input = 16.0068;
   input += synapse0x1709010();
   input += synapse0x1709050();
   input += synapse0x1709090();
   input += synapse0x17090d0();
   input += synapse0x1709110();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1708cd0() {
   double input = input0x1708cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1709150() {
   double input = -1.15959;
   input += synapse0x1709490();
   input += synapse0x17094d0();
   input += synapse0x1709510();
   input += synapse0x1708700();
   input += synapse0x1708740();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1709150() {
   double input = input0x1709150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1709760() {
   double input = -3.12926;
   input += synapse0x1709a10();
   input += synapse0x1709a50();
   input += synapse0x1709a90();
   input += synapse0x1709ad0();
   input += synapse0x1709b10();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1709760() {
   double input = input0x1709760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1709b50() {
   double input = 23.8802;
   input += synapse0x1709e90();
   input += synapse0x1709ed0();
   input += synapse0x1709f10();
   input += synapse0x1709f50();
   input += synapse0x1709f90();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1709b50() {
   double input = input0x1709b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1709fd0() {
   double input = 1.53059;
   input += synapse0x170a310();
   input += synapse0x170a350();
   input += synapse0x170a390();
   input += synapse0x170a3d0();
   input += synapse0x170a410();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1709fd0() {
   double input = input0x1709fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170a450() {
   double input = -2.05027;
   input += synapse0x170a790();
   input += synapse0x170a7d0();
   input += synapse0x170a810();
   input += synapse0x170a850();
   input += synapse0x170a890();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170a450() {
   double input = input0x170a450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170a8d0() {
   double input = -0.0383279;
   input += synapse0x160b830();
   input += synapse0x160b870();
   input += synapse0x170ad20();
   input += synapse0x170ad60();
   input += synapse0x170ada0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170a8d0() {
   double input = input0x170a8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170ade0() {
   double input = 23.8642;
   input += synapse0x170b120();
   input += synapse0x170b160();
   input += synapse0x170b1a0();
   input += synapse0x170b1e0();
   input += synapse0x170b220();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170ade0() {
   double input = input0x170ade0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1709550() {
   double input = 0.0724919;
   input += synapse0x160c000();
   input += synapse0x17096e0();
   input += synapse0x1709720();
   input += synapse0x170b670();
   input += synapse0x170b6b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1709550() {
   double input = input0x1709550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170b6f0() {
   double input = 1.88972;
   input += synapse0x170ba30();
   input += synapse0x170ba70();
   input += synapse0x170bab0();
   input += synapse0x170baf0();
   input += synapse0x170bb30();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170b6f0() {
   double input = input0x170b6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170bb70() {
   double input = 0.542618;
   input += synapse0x170beb0();
   input += synapse0x1706780();
   input += synapse0x17067c0();
   input += synapse0x1706ac0();
   input += synapse0x1706b00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170bb70() {
   double input = input0x170bb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170c440() {
   double input = -31.627;
   input += synapse0x170c5d0();
   input += synapse0x170c610();
   input += synapse0x170c650();
   input += synapse0x170c690();
   input += synapse0x170c6d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170c440() {
   double input = input0x170c440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170c710() {
   double input = -6.71097;
   input += synapse0x170ca50();
   input += synapse0x170ca90();
   input += synapse0x170cad0();
   input += synapse0x170cb10();
   input += synapse0x170cb50();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170c710() {
   double input = input0x170c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170cb90() {
   double input = -0.906585;
   input += synapse0x170ced0();
   input += synapse0x170cf10();
   input += synapse0x170cf50();
   input += synapse0x170cf90();
   input += synapse0x170cfd0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170cb90() {
   double input = input0x170cb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170d010() {
   double input = -3.39006;
   input += synapse0x170d350();
   input += synapse0x170d390();
   input += synapse0x170d3d0();
   input += synapse0x170d410();
   input += synapse0x170d450();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170d010() {
   double input = input0x170d010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170d490() {
   double input = 18.4656;
   input += synapse0x170d7d0();
   input += synapse0x170d810();
   input += synapse0x170d850();
   input += synapse0x170d890();
   input += synapse0x170d8d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170d490() {
   double input = input0x170d490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170d910() {
   double input = 1.51419;
   input += synapse0x170dc50();
   input += synapse0x170dc90();
   input += synapse0x170dcd0();
   input += synapse0x170dd10();
   input += synapse0x170dd50();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170d910() {
   double input = input0x170d910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170dd90() {
   double input = 8.22816;
   input += synapse0x170e0d0();
   input += synapse0x170e110();
   input += synapse0x170e150();
   input += synapse0x170e190();
   input += synapse0x170e1d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170dd90() {
   double input = input0x170dd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170e210() {
   double input = 14.4127;
   input += synapse0x170e550();
   input += synapse0x170e590();
   input += synapse0x170e5d0();
   input += synapse0x170e610();
   input += synapse0x170e650();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170e210() {
   double input = input0x170e210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170e690() {
   double input = 1.27938;
   input += synapse0x170e9d0();
   input += synapse0x170ea10();
   input += synapse0x170ea50();
   input += synapse0x170ea90();
   input += synapse0x170ead0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170e690() {
   double input = input0x170e690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17105a0() {
   double input = 0.750777;
   input += synapse0x17085f0();
   input += synapse0x1708630();
   input += synapse0x1708b00();
   input += synapse0x1708b40();
   input += synapse0x1708f80();
   input += synapse0x1708fc0();
   input += synapse0x1709400();
   input += synapse0x1709440();
   input += synapse0x1709980();
   input += synapse0x17099c0();
   input += synapse0x1709e00();
   input += synapse0x1709e40();
   input += synapse0x170a280();
   input += synapse0x170a2c0();
   input += synapse0x170a700();
   input += synapse0x170a740();
   input += synapse0x170ab80();
   input += synapse0x170abc0();
   input += synapse0x170b090();
   input += synapse0x170b0d0();
   input += synapse0x170b9a0();
   input += synapse0x170b9e0();
   input += synapse0x170be20();
   input += synapse0x170be60();
   input += synapse0x1707480();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17105a0() {
   double input = input0x17105a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x170b370() {
   double input = 0.136702;
   input += synapse0x170b500();
   input += synapse0x170b540();
   input += synapse0x170b580();
   input += synapse0x170b5c0();
   input += synapse0x170b600();
   input += synapse0x17074c0();
   input += synapse0x170d740();
   input += synapse0x170d780();
   input += synapse0x170dbc0();
   input += synapse0x170dc00();
   input += synapse0x170e040();
   input += synapse0x170e080();
   input += synapse0x170e4c0();
   input += synapse0x170e500();
   input += synapse0x170e940();
   input += synapse0x170e980();
   input += synapse0x17078f0();
   input += synapse0x1707930();
   input += synapse0x170c9c0();
   input += synapse0x170ca00();
   input += synapse0x168ed70();
   input += synapse0x168edb0();
   input += synapse0x1711050();
   input += synapse0x1711090();
   input += synapse0x17110d0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x170b370() {
   double input = input0x170b370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1711110() {
   double input = 0.507631;
   input += synapse0x170ac10();
   input += synapse0x170ac50();
   input += synapse0x170ac90();
   input += synapse0x170acd0();
   input += synapse0x1711660();
   input += synapse0x17116a0();
   input += synapse0x17116e0();
   input += synapse0x1711720();
   input += synapse0x1711760();
   input += synapse0x17117a0();
   input += synapse0x17117e0();
   input += synapse0x1711820();
   input += synapse0x1711860();
   input += synapse0x17118a0();
   input += synapse0x17118e0();
   input += synapse0x1711920();
   input += synapse0x17112a0();
   input += synapse0x17112e0();
   input += synapse0x1711a70();
   input += synapse0x1711ab0();
   input += synapse0x1711af0();
   input += synapse0x1711b30();
   input += synapse0x1711b70();
   input += synapse0x1711bb0();
   input += synapse0x1711bf0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1711110() {
   double input = input0x1711110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1711c30() {
   double input = -0.518767;
   input += synapse0x1711f70();
   input += synapse0x1711fb0();
   input += synapse0x1711ff0();
   input += synapse0x1712030();
   input += synapse0x1712070();
   input += synapse0x17120b0();
   input += synapse0x17120f0();
   input += synapse0x1712130();
   input += synapse0x1712170();
   input += synapse0x17121b0();
   input += synapse0x17121f0();
   input += synapse0x1712230();
   input += synapse0x1712270();
   input += synapse0x17122b0();
   input += synapse0x17122f0();
   input += synapse0x1712330();
   input += synapse0x1711dc0();
   input += synapse0x1711e00();
   input += synapse0x1712480();
   input += synapse0x17124c0();
   input += synapse0x1712500();
   input += synapse0x1712540();
   input += synapse0x1712580();
   input += synapse0x17125c0();
   input += synapse0x1712600();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1711c30() {
   double input = input0x1711c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1712640() {
   double input = -0.254547;
   input += synapse0x1712980();
   input += synapse0x17129c0();
   input += synapse0x1712a00();
   input += synapse0x1712a40();
   input += synapse0x1712a80();
   input += synapse0x1712ac0();
   input += synapse0x1712b00();
   input += synapse0x1712b40();
   input += synapse0x1712b80();
   input += synapse0x1712bc0();
   input += synapse0x1712c00();
   input += synapse0x1712c40();
   input += synapse0x1712c80();
   input += synapse0x1712cc0();
   input += synapse0x1712d00();
   input += synapse0x1712d40();
   input += synapse0x17127d0();
   input += synapse0x1712810();
   input += synapse0x1712e90();
   input += synapse0x1712ed0();
   input += synapse0x1712f10();
   input += synapse0x1712f50();
   input += synapse0x1712f90();
   input += synapse0x1712fd0();
   input += synapse0x1713010();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1712640() {
   double input = input0x1712640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1713050() {
   double input = -0.814121;
   input += synapse0x1713390();
   input += synapse0x17133d0();
   input += synapse0x1713410();
   input += synapse0x1713450();
   input += synapse0x1713490();
   input += synapse0x17134d0();
   input += synapse0x1713510();
   input += synapse0x1710730();
   input += synapse0x1710770();
   input += synapse0x17107b0();
   input += synapse0x17107f0();
   input += synapse0x1710830();
   input += synapse0x1710870();
   input += synapse0x17108b0();
   input += synapse0x17108f0();
   input += synapse0x1710930();
   input += synapse0x17131e0();
   input += synapse0x1713220();
   input += synapse0x1710a80();
   input += synapse0x1710ac0();
   input += synapse0x1710b00();
   input += synapse0x1710b40();
   input += synapse0x1710b80();
   input += synapse0x1710bc0();
   input += synapse0x1710c00();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1713050() {
   double input = input0x1713050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1710c40() {
   double input = -1.64579;
   input += synapse0x1710ef0();
   input += synapse0x17145f0();
   input += synapse0x1714630();
   input += synapse0x1714670();
   input += synapse0x17146b0();
   input += synapse0x17146f0();
   input += synapse0x1714730();
   input += synapse0x1714770();
   input += synapse0x17147b0();
   input += synapse0x17147f0();
   input += synapse0x1714830();
   input += synapse0x1714870();
   input += synapse0x17148b0();
   input += synapse0x17148f0();
   input += synapse0x1714930();
   input += synapse0x1714970();
   input += synapse0x1710dd0();
   input += synapse0x1710e10();
   input += synapse0x1714ac0();
   input += synapse0x1714b00();
   input += synapse0x1714b40();
   input += synapse0x1714b80();
   input += synapse0x1714bc0();
   input += synapse0x1714c00();
   input += synapse0x1714c40();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1710c40() {
   double input = input0x1710c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1714c80() {
   double input = -0.396743;
   input += synapse0x1714fc0();
   input += synapse0x1715000();
   input += synapse0x1715040();
   input += synapse0x1715080();
   input += synapse0x17150c0();
   input += synapse0x1715100();
   input += synapse0x1715140();
   input += synapse0x1715180();
   input += synapse0x17151c0();
   input += synapse0x1715200();
   input += synapse0x1715240();
   input += synapse0x1715280();
   input += synapse0x17152c0();
   input += synapse0x1715300();
   input += synapse0x1715340();
   input += synapse0x1715380();
   input += synapse0x1714e10();
   input += synapse0x1714e50();
   input += synapse0x17154d0();
   input += synapse0x1715510();
   input += synapse0x1715550();
   input += synapse0x1715590();
   input += synapse0x17155d0();
   input += synapse0x1715610();
   input += synapse0x1715650();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1714c80() {
   double input = input0x1714c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1715690() {
   double input = 0.765214;
   input += synapse0x17159d0();
   input += synapse0x1715a10();
   input += synapse0x1715a50();
   input += synapse0x1715a90();
   input += synapse0x1715ad0();
   input += synapse0x1715b10();
   input += synapse0x1715b50();
   input += synapse0x1715b90();
   input += synapse0x1715bd0();
   input += synapse0x1715c10();
   input += synapse0x1715c50();
   input += synapse0x1715c90();
   input += synapse0x1715cd0();
   input += synapse0x1715d10();
   input += synapse0x1715d50();
   input += synapse0x1715d90();
   input += synapse0x1715820();
   input += synapse0x1715860();
   input += synapse0x1715ee0();
   input += synapse0x1715f20();
   input += synapse0x1715f60();
   input += synapse0x1715fa0();
   input += synapse0x1715fe0();
   input += synapse0x1716020();
   input += synapse0x1716060();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1715690() {
   double input = input0x1715690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17160a0() {
   double input = -0.690889;
   input += synapse0x17163e0();
   input += synapse0x1716420();
   input += synapse0x1716460();
   input += synapse0x17164a0();
   input += synapse0x17164e0();
   input += synapse0x1716520();
   input += synapse0x1716560();
   input += synapse0x17165a0();
   input += synapse0x17165e0();
   input += synapse0x1716620();
   input += synapse0x1716660();
   input += synapse0x17166a0();
   input += synapse0x17166e0();
   input += synapse0x1716720();
   input += synapse0x1716760();
   input += synapse0x17167a0();
   input += synapse0x1716230();
   input += synapse0x1716270();
   input += synapse0x17168f0();
   input += synapse0x1716930();
   input += synapse0x1716970();
   input += synapse0x17169b0();
   input += synapse0x17169f0();
   input += synapse0x1716a30();
   input += synapse0x1716a70();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17160a0() {
   double input = input0x17160a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1716ab0() {
   double input = -0.507712;
   input += synapse0x1716df0();
   input += synapse0x1716e30();
   input += synapse0x1716e70();
   input += synapse0x1716eb0();
   input += synapse0x1716ef0();
   input += synapse0x1716f30();
   input += synapse0x1716f70();
   input += synapse0x1716fb0();
   input += synapse0x1716ff0();
   input += synapse0x1717030();
   input += synapse0x1717070();
   input += synapse0x17170b0();
   input += synapse0x17170f0();
   input += synapse0x1717130();
   input += synapse0x1717170();
   input += synapse0x17171b0();
   input += synapse0x1716c40();
   input += synapse0x1716c80();
   input += synapse0x1717300();
   input += synapse0x1717340();
   input += synapse0x1717380();
   input += synapse0x17173c0();
   input += synapse0x1717400();
   input += synapse0x1717440();
   input += synapse0x1717480();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1716ab0() {
   double input = input0x1716ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17174c0() {
   double input = 0.164276;
   input += synapse0x1717800();
   input += synapse0x1717840();
   input += synapse0x1717880();
   input += synapse0x17178c0();
   input += synapse0x1717900();
   input += synapse0x1717940();
   input += synapse0x1717980();
   input += synapse0x17179c0();
   input += synapse0x1717a00();
   input += synapse0x1717a40();
   input += synapse0x1717a80();
   input += synapse0x1717ac0();
   input += synapse0x1717b00();
   input += synapse0x1717b40();
   input += synapse0x1717b80();
   input += synapse0x1717bc0();
   input += synapse0x1717650();
   input += synapse0x1717690();
   input += synapse0x1717d10();
   input += synapse0x1717d50();
   input += synapse0x1717d90();
   input += synapse0x1717dd0();
   input += synapse0x1717e10();
   input += synapse0x1717e50();
   input += synapse0x1717e90();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17174c0() {
   double input = input0x17174c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1717ed0() {
   double input = -0.993791;
   input += synapse0x1718210();
   input += synapse0x1718250();
   input += synapse0x1718290();
   input += synapse0x17182d0();
   input += synapse0x1718310();
   input += synapse0x1718350();
   input += synapse0x1718390();
   input += synapse0x17183d0();
   input += synapse0x1718410();
   input += synapse0x1718450();
   input += synapse0x1718490();
   input += synapse0x17184d0();
   input += synapse0x1718510();
   input += synapse0x1718550();
   input += synapse0x1718590();
   input += synapse0x17185d0();
   input += synapse0x1718060();
   input += synapse0x17180a0();
   input += synapse0x1718720();
   input += synapse0x1718760();
   input += synapse0x17187a0();
   input += synapse0x17187e0();
   input += synapse0x1718820();
   input += synapse0x1718860();
   input += synapse0x17188a0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1717ed0() {
   double input = input0x1717ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17188e0() {
   double input = -0.0735612;
   input += synapse0x1718c20();
   input += synapse0x1718c60();
   input += synapse0x1718ca0();
   input += synapse0x1718ce0();
   input += synapse0x1718d20();
   input += synapse0x1718d60();
   input += synapse0x1718da0();
   input += synapse0x1718de0();
   input += synapse0x1718e20();
   input += synapse0x1718e60();
   input += synapse0x1718ea0();
   input += synapse0x1718ee0();
   input += synapse0x1718f20();
   input += synapse0x1718f60();
   input += synapse0x1718fa0();
   input += synapse0x1718fe0();
   input += synapse0x1718a70();
   input += synapse0x1718ab0();
   input += synapse0x1719130();
   input += synapse0x1719170();
   input += synapse0x17191b0();
   input += synapse0x17191f0();
   input += synapse0x1719230();
   input += synapse0x1719270();
   input += synapse0x17192b0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17188e0() {
   double input = input0x17188e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17192f0() {
   double input = 1.00399;
   input += synapse0x1719630();
   input += synapse0x1719670();
   input += synapse0x17196b0();
   input += synapse0x17196f0();
   input += synapse0x1719730();
   input += synapse0x1719770();
   input += synapse0x17197b0();
   input += synapse0x17197f0();
   input += synapse0x1719830();
   input += synapse0x1719870();
   input += synapse0x17198b0();
   input += synapse0x17198f0();
   input += synapse0x1719930();
   input += synapse0x1719970();
   input += synapse0x17199b0();
   input += synapse0x17199f0();
   input += synapse0x1719480();
   input += synapse0x17194c0();
   input += synapse0x1719b40();
   input += synapse0x1719b80();
   input += synapse0x1719bc0();
   input += synapse0x1719c00();
   input += synapse0x1719c40();
   input += synapse0x1719c80();
   input += synapse0x1719cc0();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17192f0() {
   double input = input0x17192f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1719d00() {
   double input = -2.40024;
   input += synapse0x171a040();
   input += synapse0x1707860();
   input += synapse0x17078a0();
   input += synapse0x1707c60();
   input += synapse0x1707ca0();
   input += synapse0x17080e0();
   input += synapse0x1708120();
   input += synapse0x1708560();
   input += synapse0x17085a0();
   input += synapse0x1708a70();
   input += synapse0x1708ab0();
   input += synapse0x1708ef0();
   input += synapse0x1708f30();
   input += synapse0x1709370();
   input += synapse0x17093b0();
   input += synapse0x17098f0();
   input += synapse0x1709930();
   input += synapse0x1709d70();
   input += synapse0x1709db0();
   input += synapse0x170a1f0();
   input += synapse0x170a230();
   input += synapse0x170a670();
   input += synapse0x170a6b0();
   input += synapse0x170aaf0();
   input += synapse0x170ab30();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1719d00() {
   double input = input0x1719d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1714320() {
   double input = 0.364448;
   input += synapse0x17144b0();
   input += synapse0x17144f0();
   input += synapse0x170bd90();
   input += synapse0x170bdd0();
   input += synapse0x1719e90();
   input += synapse0x1719ed0();
   input += synapse0x1707140();
   input += synapse0x1707180();
   input += synapse0x170c930();
   input += synapse0x170c970();
   input += synapse0x170cdb0();
   input += synapse0x170cdf0();
   input += synapse0x170d230();
   input += synapse0x170d270();
   input += synapse0x170d6b0();
   input += synapse0x170d6f0();
   input += synapse0x170db30();
   input += synapse0x170db70();
   input += synapse0x170dfb0();
   input += synapse0x170dff0();
   input += synapse0x170e430();
   input += synapse0x170e470();
   input += synapse0x170e8b0();
   input += synapse0x170e8f0();
   input += synapse0x170b000();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1714320() {
   double input = input0x1714320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x171cf70() {
   double input = 1.30515;
   input += synapse0x170b040();
   input += synapse0x171d2b0();
   input += synapse0x171d2f0();
   input += synapse0x171d330();
   input += synapse0x171d370();
   input += synapse0x171d3b0();
   input += synapse0x171d3f0();
   input += synapse0x171d430();
   input += synapse0x171d470();
   input += synapse0x171d4b0();
   input += synapse0x171d4f0();
   input += synapse0x171d530();
   input += synapse0x171d570();
   input += synapse0x171d5b0();
   input += synapse0x171d5f0();
   input += synapse0x171d630();
   input += synapse0x171d100();
   input += synapse0x171d140();
   input += synapse0x171d780();
   input += synapse0x171d7c0();
   input += synapse0x171d800();
   input += synapse0x171d840();
   input += synapse0x171d880();
   input += synapse0x171d8c0();
   input += synapse0x171d900();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x171cf70() {
   double input = input0x171cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x171d940() {
   double input = 0.482071;
   input += synapse0x171dc80();
   input += synapse0x171dcc0();
   input += synapse0x171dd00();
   input += synapse0x171dd40();
   input += synapse0x171dd80();
   input += synapse0x171ddc0();
   input += synapse0x171de00();
   input += synapse0x171de40();
   input += synapse0x171de80();
   input += synapse0x171dec0();
   input += synapse0x171df00();
   input += synapse0x171df40();
   input += synapse0x171df80();
   input += synapse0x171dfc0();
   input += synapse0x171e000();
   input += synapse0x171e040();
   input += synapse0x171dad0();
   input += synapse0x171db10();
   input += synapse0x171e190();
   input += synapse0x171e1d0();
   input += synapse0x171e210();
   input += synapse0x171e250();
   input += synapse0x171e290();
   input += synapse0x171e2d0();
   input += synapse0x171e310();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x171d940() {
   double input = input0x171d940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x171e350() {
   double input = -0.0437946;
   input += synapse0x171e690();
   input += synapse0x171e6d0();
   input += synapse0x171e710();
   input += synapse0x171e750();
   input += synapse0x171e790();
   input += synapse0x171e7d0();
   input += synapse0x171e810();
   input += synapse0x171e850();
   input += synapse0x171e890();
   input += synapse0x171e8d0();
   input += synapse0x171e910();
   input += synapse0x171e950();
   input += synapse0x171e990();
   input += synapse0x171e9d0();
   input += synapse0x171ea10();
   input += synapse0x171ea50();
   input += synapse0x171e4e0();
   input += synapse0x171e520();
   input += synapse0x171eba0();
   input += synapse0x171ebe0();
   input += synapse0x171ec20();
   input += synapse0x171ec60();
   input += synapse0x171eca0();
   input += synapse0x171ece0();
   input += synapse0x171ed20();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x171e350() {
   double input = input0x171e350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x171ed60() {
   double input = -0.448128;
   input += synapse0x171f0a0();
   input += synapse0x171f0e0();
   input += synapse0x171f120();
   input += synapse0x171f160();
   input += synapse0x171f1a0();
   input += synapse0x171f1e0();
   input += synapse0x171f220();
   input += synapse0x171f260();
   input += synapse0x171f2a0();
   input += synapse0x171f2e0();
   input += synapse0x171f320();
   input += synapse0x171f360();
   input += synapse0x171f3a0();
   input += synapse0x171f3e0();
   input += synapse0x171f420();
   input += synapse0x171f460();
   input += synapse0x171eef0();
   input += synapse0x171ef30();
   input += synapse0x171f5b0();
   input += synapse0x171f5f0();
   input += synapse0x171f630();
   input += synapse0x171f670();
   input += synapse0x171f6b0();
   input += synapse0x171f6f0();
   input += synapse0x171f730();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x171ed60() {
   double input = input0x171ed60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x171f770() {
   double input = -0.660833;
   input += synapse0x171fab0();
   input += synapse0x171faf0();
   input += synapse0x171fb30();
   input += synapse0x171fb70();
   input += synapse0x171fbb0();
   input += synapse0x171fbf0();
   input += synapse0x171fc30();
   input += synapse0x171fc70();
   input += synapse0x171fcb0();
   input += synapse0x171fcf0();
   input += synapse0x171fd30();
   input += synapse0x171fd70();
   input += synapse0x171fdb0();
   input += synapse0x171fdf0();
   input += synapse0x171fe30();
   input += synapse0x171fe70();
   input += synapse0x171f900();
   input += synapse0x171f940();
   input += synapse0x171ffc0();
   input += synapse0x1720000();
   input += synapse0x1720040();
   input += synapse0x1720080();
   input += synapse0x17200c0();
   input += synapse0x1720100();
   input += synapse0x1720140();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x171f770() {
   double input = input0x171f770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1720180() {
   double input = 0.662947;
   input += synapse0x17204c0();
   input += synapse0x1720500();
   input += synapse0x1720540();
   input += synapse0x1720580();
   input += synapse0x17205c0();
   input += synapse0x1720600();
   input += synapse0x1720640();
   input += synapse0x1720680();
   input += synapse0x17206c0();
   input += synapse0x1720700();
   input += synapse0x1720740();
   input += synapse0x1720780();
   input += synapse0x17207c0();
   input += synapse0x1720800();
   input += synapse0x1720840();
   input += synapse0x1720880();
   input += synapse0x1720310();
   input += synapse0x1720350();
   input += synapse0x17209d0();
   input += synapse0x1720a10();
   input += synapse0x1720a50();
   input += synapse0x1720a90();
   input += synapse0x1720ad0();
   input += synapse0x1720b10();
   input += synapse0x1720b50();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1720180() {
   double input = input0x1720180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1720b90() {
   double input = -1.47507;
   input += synapse0x1720ed0();
   input += synapse0x1720f10();
   input += synapse0x1720f50();
   input += synapse0x1720f90();
   input += synapse0x1720fd0();
   input += synapse0x1721010();
   input += synapse0x1721050();
   input += synapse0x1721090();
   input += synapse0x17210d0();
   input += synapse0x1721110();
   input += synapse0x1721150();
   input += synapse0x1721190();
   input += synapse0x17211d0();
   input += synapse0x1721210();
   input += synapse0x1721250();
   input += synapse0x1721290();
   input += synapse0x1720d20();
   input += synapse0x1720d60();
   input += synapse0x17213e0();
   input += synapse0x1721420();
   input += synapse0x1721460();
   input += synapse0x17214a0();
   input += synapse0x17214e0();
   input += synapse0x1721520();
   input += synapse0x1721560();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1720b90() {
   double input = input0x1720b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x17215a0() {
   double input = -1.74733;
   input += synapse0x17218e0();
   input += synapse0x1721920();
   input += synapse0x1721960();
   input += synapse0x17219a0();
   input += synapse0x17219e0();
   input += synapse0x1721a20();
   input += synapse0x1721a60();
   input += synapse0x1721aa0();
   input += synapse0x1721ae0();
   input += synapse0x1721b20();
   input += synapse0x1721b60();
   input += synapse0x1721ba0();
   input += synapse0x1721be0();
   input += synapse0x1721c20();
   input += synapse0x1721c60();
   input += synapse0x1721ca0();
   input += synapse0x1721730();
   input += synapse0x1721770();
   input += synapse0x1721df0();
   input += synapse0x1721e30();
   input += synapse0x1721e70();
   input += synapse0x1721eb0();
   input += synapse0x1721ef0();
   input += synapse0x1721f30();
   input += synapse0x1721f70();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x17215a0() {
   double input = input0x17215a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_6000ep_weight_secB::input0x1721fb0() {
   double input = -3.51451;
   input += synapse0x17221d0();
   input += synapse0x1722210();
   input += synapse0x1722250();
   input += synapse0x1722290();
   input += synapse0x17222d0();
   input += synapse0x1722310();
   input += synapse0x1722350();
   input += synapse0x1722390();
   input += synapse0x17223d0();
   input += synapse0x1722410();
   input += synapse0x1722450();
   input += synapse0x1722490();
   input += synapse0x17224d0();
   input += synapse0x1722510();
   input += synapse0x1722550();
   input += synapse0x1722590();
   input += synapse0x17075a0();
   input += synapse0x17075e0();
   input += synapse0x17226e0();
   input += synapse0x1722720();
   input += synapse0x1722760();
   input += synapse0x17227a0();
   input += synapse0x17227e0();
   input += synapse0x1722820();
   input += synapse0x1722860();
   return input;
}

double nnFunc_25_25hi_6000ep_weight_secB::neuron0x1721fb0() {
   double input = input0x1721fb0();
   return (input * 4.7098)+148.177;
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x168eca0() {
   return (neuron0x1706560()*-0.0716498);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x16f59d0() {
   return (neuron0x17068a0()*0.400678);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707980() {
   return (neuron0x1706be0()*-1.53517);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17079c0() {
   return (neuron0x1706f20()*-4.63973);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707a00() {
   return (neuron0x1707260()*-2.7424);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707d80() {
   return (neuron0x1706560()*-0.00782035);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707dc0() {
   return (neuron0x17068a0()*-0.266771);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707e00() {
   return (neuron0x1706be0()*0.10878);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707e40() {
   return (neuron0x1706f20()*-6.97197);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707e80() {
   return (neuron0x1707260()*0.699167);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708200() {
   return (neuron0x1706560()*-0.0018131);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708240() {
   return (neuron0x17068a0()*-0.468419);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708280() {
   return (neuron0x1706be0()*-0.118809);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17082c0() {
   return (neuron0x1706f20()*-24.5333);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708300() {
   return (neuron0x1707260()*8.53996);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708680() {
   return (neuron0x1706560()*-0.0106346);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17086c0() {
   return (neuron0x17068a0()*-0.87773);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x160b9e0() {
   return (neuron0x1706be0()*-0.138605);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x160ba20() {
   return (neuron0x1706f20()*-5.01067);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708810() {
   return (neuron0x1707260()*2.99469);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708b90() {
   return (neuron0x1706560()*-0.959114);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708bd0() {
   return (neuron0x17068a0()*1.4617);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708c10() {
   return (neuron0x1706be0()*1.50804);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708c50() {
   return (neuron0x1706f20()*0.177788);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708c90() {
   return (neuron0x1707260()*0.993943);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709010() {
   return (neuron0x1706560()*0.0108108);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709050() {
   return (neuron0x17068a0()*-0.0384377);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709090() {
   return (neuron0x1706be0()*0.0401451);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17090d0() {
   return (neuron0x1706f20()*10.1546);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709110() {
   return (neuron0x1707260()*-8.04241);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709490() {
   return (neuron0x1706560()*1.25879);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17094d0() {
   return (neuron0x17068a0()*-1.65654);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709510() {
   return (neuron0x1706be0()*-2.09556);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708700() {
   return (neuron0x1706f20()*-0.726967);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708740() {
   return (neuron0x1707260()*-1.54583);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709a10() {
   return (neuron0x1706560()*-0.0878188);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709a50() {
   return (neuron0x17068a0()*-1.63878);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709a90() {
   return (neuron0x1706be0()*-1.24876);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709ad0() {
   return (neuron0x1706f20()*-1.97331);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709b10() {
   return (neuron0x1707260()*-1.01226);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709e90() {
   return (neuron0x1706560()*-0.0190317);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709ed0() {
   return (neuron0x17068a0()*0.343756);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709f10() {
   return (neuron0x1706be0()*-0.632707);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709f50() {
   return (neuron0x1706f20()*16.3952);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709f90() {
   return (neuron0x1707260()*-14.5151);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a310() {
   return (neuron0x1706560()*0.0539405);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a350() {
   return (neuron0x17068a0()*-1.55597);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a390() {
   return (neuron0x1706be0()*0.139054);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a3d0() {
   return (neuron0x1706f20()*3.71175);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a410() {
   return (neuron0x1707260()*0.0754905);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a790() {
   return (neuron0x1706560()*0.0341774);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a7d0() {
   return (neuron0x17068a0()*0.0165054);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a810() {
   return (neuron0x1706be0()*0.969788);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a850() {
   return (neuron0x1706f20()*7.5552);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a890() {
   return (neuron0x1707260()*2.0715);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x160b830() {
   return (neuron0x1706560()*-0.0102713);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x160b870() {
   return (neuron0x17068a0()*-2.10756);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ad20() {
   return (neuron0x1706be0()*-0.964149);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ad60() {
   return (neuron0x1706f20()*-0.968309);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ada0() {
   return (neuron0x1707260()*-0.321146);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b120() {
   return (neuron0x1706560()*0.0677026);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b160() {
   return (neuron0x17068a0()*0.804822);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b1a0() {
   return (neuron0x1706be0()*0.664679);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b1e0() {
   return (neuron0x1706f20()*18.9272);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b220() {
   return (neuron0x1707260()*-17.1534);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x160c000() {
   return (neuron0x1706560()*0.104297);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17096e0() {
   return (neuron0x17068a0()*-0.297518);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709720() {
   return (neuron0x1706be0()*1.4919);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b670() {
   return (neuron0x1706f20()*7.35721);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b6b0() {
   return (neuron0x1707260()*0.830114);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ba30() {
   return (neuron0x1706560()*-1.15742);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ba70() {
   return (neuron0x17068a0()*0.554869);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170bab0() {
   return (neuron0x1706be0()*0.295942);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170baf0() {
   return (neuron0x1706f20()*-1.86344);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170bb30() {
   return (neuron0x1707260()*1.46201);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170beb0() {
   return (neuron0x1706560()*-1.55164);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1706780() {
   return (neuron0x17068a0()*0.66802);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17067c0() {
   return (neuron0x1706be0()*0.115671);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1706ac0() {
   return (neuron0x1706f20()*-6.17452);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1706b00() {
   return (neuron0x1707260()*1.29352);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c5d0() {
   return (neuron0x1706560()*-0.016944);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c610() {
   return (neuron0x17068a0()*-0.482123);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c650() {
   return (neuron0x1706be0()*-0.150417);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c690() {
   return (neuron0x1706f20()*-31.1069);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c6d0() {
   return (neuron0x1707260()*15.8632);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ca50() {
   return (neuron0x1706560()*-0.0341957);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ca90() {
   return (neuron0x17068a0()*-0.0275904);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cad0() {
   return (neuron0x1706be0()*-0.696517);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cb10() {
   return (neuron0x1706f20()*-12.1157);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cb50() {
   return (neuron0x1707260()*3.01771);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ced0() {
   return (neuron0x1706560()*1.74154);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cf10() {
   return (neuron0x17068a0()*-0.691693);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cf50() {
   return (neuron0x1706be0()*-0.191396);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cf90() {
   return (neuron0x1706f20()*0.173711);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cfd0() {
   return (neuron0x1707260()*-1.26476);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d350() {
   return (neuron0x1706560()*0.0568466);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d390() {
   return (neuron0x17068a0()*0.444785);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d3d0() {
   return (neuron0x1706be0()*0.7587);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d410() {
   return (neuron0x1706f20()*-12.6072);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d450() {
   return (neuron0x1707260()*-4.62339);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d7d0() {
   return (neuron0x1706560()*-0.00278775);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d810() {
   return (neuron0x17068a0()*0.107736);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d850() {
   return (neuron0x1706be0()*-0.0656496);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d890() {
   return (neuron0x1706f20()*9.28304);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d8d0() {
   return (neuron0x1707260()*-13.434);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dc50() {
   return (neuron0x1706560()*-1.28409);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dc90() {
   return (neuron0x17068a0()*1.59095);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dcd0() {
   return (neuron0x1706be0()*2.05841);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dd10() {
   return (neuron0x1706f20()*0.121858);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dd50() {
   return (neuron0x1707260()*1.23781);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e0d0() {
   return (neuron0x1706560()*0.0739638);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e110() {
   return (neuron0x17068a0()*-0.599118);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e150() {
   return (neuron0x1706be0()*0.987539);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e190() {
   return (neuron0x1706f20()*13.6956);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e1d0() {
   return (neuron0x1707260()*-0.288163);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e550() {
   return (neuron0x1706560()*0.0287263);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e590() {
   return (neuron0x17068a0()*0.245926);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e5d0() {
   return (neuron0x1706be0()*0.550895);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e610() {
   return (neuron0x1706f20()*10.9648);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e650() {
   return (neuron0x1707260()*-7.03734);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e9d0() {
   return (neuron0x1706560()*-0.0556378);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ea10() {
   return (neuron0x17068a0()*-1.14933);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ea50() {
   return (neuron0x1706be0()*-0.418181);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ea90() {
   return (neuron0x1706f20()*-5.16887);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ead0() {
   return (neuron0x1707260()*0.192518);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17085f0() {
   return (neuron0x17076d0()*-0.138862);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708630() {
   return (neuron0x1707a40()*0.911376);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708b00() {
   return (neuron0x1707ec0()*3.71645);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708b40() {
   return (neuron0x1708340()*0.990312);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708f80() {
   return (neuron0x1708850()*0.72281);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708fc0() {
   return (neuron0x1708cd0()*-1.75302);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709400() {
   return (neuron0x1709150()*0.0575294);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709440() {
   return (neuron0x1709760()*0.46154);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709980() {
   return (neuron0x1709b50()*-1.18018);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17099c0() {
   return (neuron0x1709fd0()*-0.4466);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709e00() {
   return (neuron0x170a450()*-0.76133);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709e40() {
   return (neuron0x170a8d0()*0.712681);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a280() {
   return (neuron0x170ade0()*-3.97151);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a2c0() {
   return (neuron0x1709550()*0.104219);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a700() {
   return (neuron0x170b6f0()*1.25398);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a740() {
   return (neuron0x170bb70()*2.05579);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ab80() {
   return (neuron0x170c440()*6.02069);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170abc0() {
   return (neuron0x170c710()*1.33675);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b090() {
   return (neuron0x170cb90()*-0.314494);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b0d0() {
   return (neuron0x170d010()*2.93475);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b9a0() {
   return (neuron0x170d490()*-1.88277);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b9e0() {
   return (neuron0x170d910()*0.609406);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170be20() {
   return (neuron0x170dd90()*-0.972921);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170be60() {
   return (neuron0x170e210()*-1.60534);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707480() {
   return (neuron0x170e690()*0.919274);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b500() {
   return (neuron0x17076d0()*0.578844);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b540() {
   return (neuron0x1707a40()*-0.352983);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b580() {
   return (neuron0x1707ec0()*2.4562);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b5c0() {
   return (neuron0x1708340()*0.723112);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b600() {
   return (neuron0x1708850()*-0.421686);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17074c0() {
   return (neuron0x1708cd0()*-0.502469);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d740() {
   return (neuron0x1709150()*-0.669721);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d780() {
   return (neuron0x1709760()*-0.611987);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dbc0() {
   return (neuron0x1709b50()*-1.42838);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dc00() {
   return (neuron0x1709fd0()*-0.989828);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e040() {
   return (neuron0x170a450()*0.449881);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e080() {
   return (neuron0x170a8d0()*0.963765);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e4c0() {
   return (neuron0x170ade0()*-1.46334);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e500() {
   return (neuron0x1709550()*0.474715);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e940() {
   return (neuron0x170b6f0()*-0.163629);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e980() {
   return (neuron0x170bb70()*-0.958601);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17078f0() {
   return (neuron0x170c440()*0.688134);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707930() {
   return (neuron0x170c710()*-0.10489);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c9c0() {
   return (neuron0x170cb90()*0.165788);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ca00() {
   return (neuron0x170d010()*3.44586);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x168ed70() {
   return (neuron0x170d490()*-0.929703);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x168edb0() {
   return (neuron0x170d910()*-0.115452);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711050() {
   return (neuron0x170dd90()*-1.10568);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711090() {
   return (neuron0x170e210()*-3.49042);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17110d0() {
   return (neuron0x170e690()*0.0194806);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ac10() {
   return (neuron0x17076d0()*0.177426);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ac50() {
   return (neuron0x1707a40()*0.515162);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ac90() {
   return (neuron0x1707ec0()*0.115467);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170acd0() {
   return (neuron0x1708340()*0.480318);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711660() {
   return (neuron0x1708850()*0.178555);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17116a0() {
   return (neuron0x1708cd0()*-0.78533);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17116e0() {
   return (neuron0x1709150()*0.0408693);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711720() {
   return (neuron0x1709760()*0.27248);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711760() {
   return (neuron0x1709b50()*-1.53304);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17117a0() {
   return (neuron0x1709fd0()*-0.522982);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17117e0() {
   return (neuron0x170a450()*-0.121029);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711820() {
   return (neuron0x170a8d0()*0.416555);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711860() {
   return (neuron0x170ade0()*-0.424504);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17118a0() {
   return (neuron0x1709550()*-0.245593);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17118e0() {
   return (neuron0x170b6f0()*0.921371);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711920() {
   return (neuron0x170bb70()*2.01272);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17112a0() {
   return (neuron0x170c440()*2.13646);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17112e0() {
   return (neuron0x170c710()*0.382699);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711a70() {
   return (neuron0x170cb90()*-0.220404);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711ab0() {
   return (neuron0x170d010()*1.94173);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711af0() {
   return (neuron0x170d490()*-0.229884);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711b30() {
   return (neuron0x170d910()*0.296342);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711b70() {
   return (neuron0x170dd90()*0.415014);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711bb0() {
   return (neuron0x170e210()*-0.181203);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711bf0() {
   return (neuron0x170e690()*0.650407);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711f70() {
   return (neuron0x17076d0()*-2.07031);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711fb0() {
   return (neuron0x1707a40()*-2.1518);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711ff0() {
   return (neuron0x1707ec0()*-8.54427);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712030() {
   return (neuron0x1708340()*-1.24545);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712070() {
   return (neuron0x1708850()*-0.0958954);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17120b0() {
   return (neuron0x1708cd0()*5.52091);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17120f0() {
   return (neuron0x1709150()*-0.0815169);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712130() {
   return (neuron0x1709760()*0.664102);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712170() {
   return (neuron0x1709b50()*5.46317);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17121b0() {
   return (neuron0x1709fd0()*-1.63768);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17121f0() {
   return (neuron0x170a450()*0.986988);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712230() {
   return (neuron0x170a8d0()*-0.200842);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712270() {
   return (neuron0x170ade0()*3.76762);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17122b0() {
   return (neuron0x1709550()*-0.0449654);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17122f0() {
   return (neuron0x170b6f0()*0.136495);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712330() {
   return (neuron0x170bb70()*0.639244);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711dc0() {
   return (neuron0x170c440()*-5.40841);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1711e00() {
   return (neuron0x170c710()*-0.362534);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712480() {
   return (neuron0x170cb90()*-0.632694);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17124c0() {
   return (neuron0x170d010()*2.3437);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712500() {
   return (neuron0x170d490()*5.44562);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712540() {
   return (neuron0x170d910()*0.285845);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712580() {
   return (neuron0x170dd90()*3.58749);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17125c0() {
   return (neuron0x170e210()*-1.9762);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712600() {
   return (neuron0x170e690()*-2.10495);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712980() {
   return (neuron0x17076d0()*-0.436811);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17129c0() {
   return (neuron0x1707a40()*-0.452324);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712a00() {
   return (neuron0x1707ec0()*-8.43796);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712a40() {
   return (neuron0x1708340()*0.114512);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712a80() {
   return (neuron0x1708850()*-0.108843);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712ac0() {
   return (neuron0x1708cd0()*0.963202);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712b00() {
   return (neuron0x1709150()*-0.0120579);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712b40() {
   return (neuron0x1709760()*0.620207);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712b80() {
   return (neuron0x1709b50()*4.31084);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712bc0() {
   return (neuron0x1709fd0()*1.09874);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712c00() {
   return (neuron0x170a450()*1.59925);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712c40() {
   return (neuron0x170a8d0()*0.968968);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712c80() {
   return (neuron0x170ade0()*5.8809);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712cc0() {
   return (neuron0x1709550()*0.520254);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712d00() {
   return (neuron0x170b6f0()*0.323433);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712d40() {
   return (neuron0x170bb70()*0.60133);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17127d0() {
   return (neuron0x170c440()*-9.39221);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712810() {
   return (neuron0x170c710()*-1.27668);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712e90() {
   return (neuron0x170cb90()*0.414828);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712ed0() {
   return (neuron0x170d010()*-2.8753);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712f10() {
   return (neuron0x170d490()*3.1151);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712f50() {
   return (neuron0x170d910()*-0.272702);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712f90() {
   return (neuron0x170dd90()*1.25239);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1712fd0() {
   return (neuron0x170e210()*-0.0321775);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713010() {
   return (neuron0x170e690()*-2.77779);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713390() {
   return (neuron0x17076d0()*7.50079);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17133d0() {
   return (neuron0x1707a40()*2.39923);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713410() {
   return (neuron0x1707ec0()*7.84381);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713450() {
   return (neuron0x1708340()*1.63409);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713490() {
   return (neuron0x1708850()*-1.2709);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17134d0() {
   return (neuron0x1708cd0()*-6.55026);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713510() {
   return (neuron0x1709150()*0.175573);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710730() {
   return (neuron0x1709760()*0.359502);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710770() {
   return (neuron0x1709b50()*-15.9976);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17107b0() {
   return (neuron0x1709fd0()*-0.973413);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17107f0() {
   return (neuron0x170a450()*1.49817);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710830() {
   return (neuron0x170a8d0()*0.900273);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710870() {
   return (neuron0x170ade0()*-10.9023);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17108b0() {
   return (neuron0x1709550()*-2.83923);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17108f0() {
   return (neuron0x170b6f0()*0.174926);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710930() {
   return (neuron0x170bb70()*0.203272);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17131e0() {
   return (neuron0x170c440()*6.68687);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1713220() {
   return (neuron0x170c710()*3.55896);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710a80() {
   return (neuron0x170cb90()*-1.22657);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710ac0() {
   return (neuron0x170d010()*2.71858);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710b00() {
   return (neuron0x170d490()*-7.42482);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710b40() {
   return (neuron0x170d910()*-0.228256);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710b80() {
   return (neuron0x170dd90()*6.12948);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710bc0() {
   return (neuron0x170e210()*-10.2857);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710c00() {
   return (neuron0x170e690()*-0.00129809);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710ef0() {
   return (neuron0x17076d0()*0.489545);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17145f0() {
   return (neuron0x1707a40()*-0.39569);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714630() {
   return (neuron0x1707ec0()*-15.1373);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714670() {
   return (neuron0x1708340()*-0.351239);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17146b0() {
   return (neuron0x1708850()*-1.5555);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17146f0() {
   return (neuron0x1708cd0()*2.6479);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714730() {
   return (neuron0x1709150()*-0.600539);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714770() {
   return (neuron0x1709760()*0.0116912);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17147b0() {
   return (neuron0x1709b50()*4.23515);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17147f0() {
   return (neuron0x1709fd0()*0.337713);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714830() {
   return (neuron0x170a450()*0.549026);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714870() {
   return (neuron0x170a8d0()*-0.284929);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17148b0() {
   return (neuron0x170ade0()*10.5015);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17148f0() {
   return (neuron0x1709550()*-0.584061);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714930() {
   return (neuron0x170b6f0()*-1.97479);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714970() {
   return (neuron0x170bb70()*-0.424345);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710dd0() {
   return (neuron0x170c440()*-9.23234);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1710e10() {
   return (neuron0x170c710()*-5.0379);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714ac0() {
   return (neuron0x170cb90()*0.155084);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714b00() {
   return (neuron0x170d010()*-5.70234);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714b40() {
   return (neuron0x170d490()*3.40251);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714b80() {
   return (neuron0x170d910()*-1.05797);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714bc0() {
   return (neuron0x170dd90()*0.677343);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714c00() {
   return (neuron0x170e210()*0.871635);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714c40() {
   return (neuron0x170e690()*-1.44083);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714fc0() {
   return (neuron0x17076d0()*-0.0316891);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715000() {
   return (neuron0x1707a40()*1.36832);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715040() {
   return (neuron0x1707ec0()*3.0887);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715080() {
   return (neuron0x1708340()*0.224678);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17150c0() {
   return (neuron0x1708850()*-0.510702);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715100() {
   return (neuron0x1708cd0()*0.175501);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715140() {
   return (neuron0x1709150()*-0.55988);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715180() {
   return (neuron0x1709760()*-0.361931);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17151c0() {
   return (neuron0x1709b50()*-1.16875);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715200() {
   return (neuron0x1709fd0()*-1.11856);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715240() {
   return (neuron0x170a450()*-0.511849);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715280() {
   return (neuron0x170a8d0()*0.089736);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17152c0() {
   return (neuron0x170ade0()*-3.23283);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715300() {
   return (neuron0x1709550()*0.288371);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715340() {
   return (neuron0x170b6f0()*-0.273237);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715380() {
   return (neuron0x170bb70()*0.298171);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714e10() {
   return (neuron0x170c440()*2.94079);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1714e50() {
   return (neuron0x170c710()*-0.0509039);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17154d0() {
   return (neuron0x170cb90()*0.0917784);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715510() {
   return (neuron0x170d010()*2.08042);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715550() {
   return (neuron0x170d490()*1.6952);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715590() {
   return (neuron0x170d910()*-0.369895);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17155d0() {
   return (neuron0x170dd90()*-0.551253);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715610() {
   return (neuron0x170e210()*-0.841848);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715650() {
   return (neuron0x170e690()*-0.50398);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17159d0() {
   return (neuron0x17076d0()*0.706062);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715a10() {
   return (neuron0x1707a40()*0.345324);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715a50() {
   return (neuron0x1707ec0()*0.826646);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715a90() {
   return (neuron0x1708340()*0.465492);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715ad0() {
   return (neuron0x1708850()*-0.459584);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715b10() {
   return (neuron0x1708cd0()*-0.276362);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715b50() {
   return (neuron0x1709150()*-0.0715275);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715b90() {
   return (neuron0x1709760()*0.576898);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715bd0() {
   return (neuron0x1709b50()*-0.638045);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715c10() {
   return (neuron0x1709fd0()*0.60502);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715c50() {
   return (neuron0x170a450()*-0.536245);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715c90() {
   return (neuron0x170a8d0()*0.562162);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715cd0() {
   return (neuron0x170ade0()*-0.277319);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715d10() {
   return (neuron0x1709550()*0.189241);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715d50() {
   return (neuron0x170b6f0()*-0.151181);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715d90() {
   return (neuron0x170bb70()*0.308594);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715820() {
   return (neuron0x170c440()*0.51387);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715860() {
   return (neuron0x170c710()*0.550995);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715ee0() {
   return (neuron0x170cb90()*-0.210298);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715f20() {
   return (neuron0x170d010()*0.450509);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715f60() {
   return (neuron0x170d490()*-0.235326);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715fa0() {
   return (neuron0x170d910()*0.622661);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1715fe0() {
   return (neuron0x170dd90()*0.110762);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716020() {
   return (neuron0x170e210()*-0.190719);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716060() {
   return (neuron0x170e690()*0.990666);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17163e0() {
   return (neuron0x17076d0()*-0.124757);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716420() {
   return (neuron0x1707a40()*0.232464);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716460() {
   return (neuron0x1707ec0()*-0.361714);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17164a0() {
   return (neuron0x1708340()*0.207858);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17164e0() {
   return (neuron0x1708850()*-1.0112);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716520() {
   return (neuron0x1708cd0()*-0.499702);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716560() {
   return (neuron0x1709150()*-0.123406);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17165a0() {
   return (neuron0x1709760()*0.47112);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17165e0() {
   return (neuron0x1709b50()*-0.590049);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716620() {
   return (neuron0x1709fd0()*-0.708964);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716660() {
   return (neuron0x170a450()*0.165314);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17166a0() {
   return (neuron0x170a8d0()*0.296318);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17166e0() {
   return (neuron0x170ade0()*-1.38839);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716720() {
   return (neuron0x1709550()*0.0122419);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716760() {
   return (neuron0x170b6f0()*-0.456617);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17167a0() {
   return (neuron0x170bb70()*-0.220511);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716230() {
   return (neuron0x170c440()*0.0260803);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716270() {
   return (neuron0x170c710()*-0.398104);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17168f0() {
   return (neuron0x170cb90()*-0.521336);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716930() {
   return (neuron0x170d010()*-0.934697);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716970() {
   return (neuron0x170d490()*-0.312077);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17169b0() {
   return (neuron0x170d910()*-0.135828);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17169f0() {
   return (neuron0x170dd90()*-0.906461);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716a30() {
   return (neuron0x170e210()*-1.3463);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716a70() {
   return (neuron0x170e690()*-0.776429);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716df0() {
   return (neuron0x17076d0()*-3.19047);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716e30() {
   return (neuron0x1707a40()*-4.87197);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716e70() {
   return (neuron0x1707ec0()*-1.47817);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716eb0() {
   return (neuron0x1708340()*-2.89014);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716ef0() {
   return (neuron0x1708850()*-0.434582);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716f30() {
   return (neuron0x1708cd0()*7.31234);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716f70() {
   return (neuron0x1709150()*-0.331784);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716fb0() {
   return (neuron0x1709760()*-0.552601);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716ff0() {
   return (neuron0x1709b50()*16.8447);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717030() {
   return (neuron0x1709fd0()*0.788395);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717070() {
   return (neuron0x170a450()*-0.702341);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17170b0() {
   return (neuron0x170a8d0()*-0.455495);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17170f0() {
   return (neuron0x170ade0()*1.31904);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717130() {
   return (neuron0x1709550()*-1.0629);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717170() {
   return (neuron0x170b6f0()*-0.592073);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17171b0() {
   return (neuron0x170bb70()*-1.3905);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716c40() {
   return (neuron0x170c440()*-1.74467);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1716c80() {
   return (neuron0x170c710()*-0.347843);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717300() {
   return (neuron0x170cb90()*0.566683);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717340() {
   return (neuron0x170d010()*-3.03966);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717380() {
   return (neuron0x170d490()*9.27539);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17173c0() {
   return (neuron0x170d910()*-0.788944);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717400() {
   return (neuron0x170dd90()*2.35875);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717440() {
   return (neuron0x170e210()*10.4108);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717480() {
   return (neuron0x170e690()*-2.01804);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717800() {
   return (neuron0x17076d0()*-0.102023);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717840() {
   return (neuron0x1707a40()*0.133556);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717880() {
   return (neuron0x1707ec0()*0.247314);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17178c0() {
   return (neuron0x1708340()*-0.451942);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717900() {
   return (neuron0x1708850()*-0.072559);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717940() {
   return (neuron0x1708cd0()*0.019849);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717980() {
   return (neuron0x1709150()*-0.0402477);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17179c0() {
   return (neuron0x1709760()*-0.475831);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717a00() {
   return (neuron0x1709b50()*0.382754);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717a40() {
   return (neuron0x1709fd0()*0.325246);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717a80() {
   return (neuron0x170a450()*-0.04188);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717ac0() {
   return (neuron0x170a8d0()*-0.566875);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717b00() {
   return (neuron0x170ade0()*0.0727075);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717b40() {
   return (neuron0x1709550()*1.18572);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717b80() {
   return (neuron0x170b6f0()*-0.337127);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717bc0() {
   return (neuron0x170bb70()*-1.34481);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717650() {
   return (neuron0x170c440()*-1.50733);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717690() {
   return (neuron0x170c710()*-0.217575);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717d10() {
   return (neuron0x170cb90()*0.0875335);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717d50() {
   return (neuron0x170d010()*-1.1821);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717d90() {
   return (neuron0x170d490()*-0.0481912);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717dd0() {
   return (neuron0x170d910()*-0.217479);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717e10() {
   return (neuron0x170dd90()*-0.750855);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717e50() {
   return (neuron0x170e210()*-0.0332048);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1717e90() {
   return (neuron0x170e690()*0.293951);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718210() {
   return (neuron0x17076d0()*-1.23657);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718250() {
   return (neuron0x1707a40()*-8.10681);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718290() {
   return (neuron0x1707ec0()*-1.98888);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17182d0() {
   return (neuron0x1708340()*-2.12129);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718310() {
   return (neuron0x1708850()*-0.892407);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718350() {
   return (neuron0x1708cd0()*12.4746);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718390() {
   return (neuron0x1709150()*-0.17148);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17183d0() {
   return (neuron0x1709760()*-0.894757);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718410() {
   return (neuron0x1709b50()*5.81222);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718450() {
   return (neuron0x1709fd0()*0.510278);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718490() {
   return (neuron0x170a450()*0.180729);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17184d0() {
   return (neuron0x170a8d0()*-0.366542);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718510() {
   return (neuron0x170ade0()*2.86296);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718550() {
   return (neuron0x1709550()*0.50148);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718590() {
   return (neuron0x170b6f0()*-0.746849);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17185d0() {
   return (neuron0x170bb70()*-0.900961);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718060() {
   return (neuron0x170c440()*-0.0719497);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17180a0() {
   return (neuron0x170c710()*-1.3475);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718720() {
   return (neuron0x170cb90()*-0.0525071);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718760() {
   return (neuron0x170d010()*-0.325794);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17187a0() {
   return (neuron0x170d490()*15.723);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17187e0() {
   return (neuron0x170d910()*-0.468306);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718820() {
   return (neuron0x170dd90()*-1.02881);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718860() {
   return (neuron0x170e210()*9.77797);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17188a0() {
   return (neuron0x170e690()*-0.646986);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718c20() {
   return (neuron0x17076d0()*0.52631);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718c60() {
   return (neuron0x1707a40()*0.334928);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718ca0() {
   return (neuron0x1707ec0()*1.91835);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718ce0() {
   return (neuron0x1708340()*1.93085);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718d20() {
   return (neuron0x1708850()*0.374373);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718d60() {
   return (neuron0x1708cd0()*-7.15898);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718da0() {
   return (neuron0x1709150()*0.279811);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718de0() {
   return (neuron0x1709760()*-0.0139454);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718e20() {
   return (neuron0x1709b50()*-1.12013);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718e60() {
   return (neuron0x1709fd0()*0.541799);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718ea0() {
   return (neuron0x170a450()*0.904848);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718ee0() {
   return (neuron0x170a8d0()*0.28166);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718f20() {
   return (neuron0x170ade0()*-0.787341);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718f60() {
   return (neuron0x1709550()*-0.197744);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718fa0() {
   return (neuron0x170b6f0()*0.0932496);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718fe0() {
   return (neuron0x170bb70()*-1.4149);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718a70() {
   return (neuron0x170c440()*-0.582758);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1718ab0() {
   return (neuron0x170c710()*2.11452);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719130() {
   return (neuron0x170cb90()*-0.268791);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719170() {
   return (neuron0x170d010()*0.69248);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17191b0() {
   return (neuron0x170d490()*-3.65078);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17191f0() {
   return (neuron0x170d910()*-0.329145);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719230() {
   return (neuron0x170dd90()*-0.32419);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719270() {
   return (neuron0x170e210()*-1.50257);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17192b0() {
   return (neuron0x170e690()*0.52164);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719630() {
   return (neuron0x17076d0()*-0.928111);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719670() {
   return (neuron0x1707a40()*-0.285996);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17196b0() {
   return (neuron0x1707ec0()*0.626602);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17196f0() {
   return (neuron0x1708340()*-0.454444);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719730() {
   return (neuron0x1708850()*-0.049336);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719770() {
   return (neuron0x1708cd0()*0.186796);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17197b0() {
   return (neuron0x1709150()*-0.362822);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17197f0() {
   return (neuron0x1709760()*-0.196104);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719830() {
   return (neuron0x1709b50()*0.958009);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719870() {
   return (neuron0x1709fd0()*-0.652121);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17198b0() {
   return (neuron0x170a450()*0.837221);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17198f0() {
   return (neuron0x170a8d0()*0.259027);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719930() {
   return (neuron0x170ade0()*-0.0424979);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719970() {
   return (neuron0x1709550()*-0.197707);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17199b0() {
   return (neuron0x170b6f0()*0.479588);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17199f0() {
   return (neuron0x170bb70()*0.141306);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719480() {
   return (neuron0x170c440()*-1.16633);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17194c0() {
   return (neuron0x170c710()*-0.163761);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719b40() {
   return (neuron0x170cb90()*0.0745865);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719b80() {
   return (neuron0x170d010()*0.415345);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719bc0() {
   return (neuron0x170d490()*-0.359289);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719c00() {
   return (neuron0x170d910()*0.428221);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719c40() {
   return (neuron0x170dd90()*0.567171);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719c80() {
   return (neuron0x170e210()*0.210693);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719cc0() {
   return (neuron0x170e690()*-1.43004);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171a040() {
   return (neuron0x17076d0()*1.35659);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707860() {
   return (neuron0x1707a40()*-4.32275);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17078a0() {
   return (neuron0x1707ec0()*-17.0746);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707c60() {
   return (neuron0x1708340()*-0.459057);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707ca0() {
   return (neuron0x1708850()*-2.17026);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17080e0() {
   return (neuron0x1708cd0()*2.40759);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708120() {
   return (neuron0x1709150()*-0.223765);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708560() {
   return (neuron0x1709760()*-0.767726);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17085a0() {
   return (neuron0x1709b50()*17.0859);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708a70() {
   return (neuron0x1709fd0()*0.20919);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708ab0() {
   return (neuron0x170a450()*9.13065);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708ef0() {
   return (neuron0x170a8d0()*-0.386311);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1708f30() {
   return (neuron0x170ade0()*10.3841);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709370() {
   return (neuron0x1709550()*-0.680642);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17093b0() {
   return (neuron0x170b6f0()*-2.15072);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17098f0() {
   return (neuron0x170bb70()*-3.69588);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709930() {
   return (neuron0x170c440()*-21.3861);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709d70() {
   return (neuron0x170c710()*-8.90031);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1709db0() {
   return (neuron0x170cb90()*-0.175421);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a1f0() {
   return (neuron0x170d010()*-5.45064);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a230() {
   return (neuron0x170d490()*3.63822);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a670() {
   return (neuron0x170d910()*-2.76086);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170a6b0() {
   return (neuron0x170dd90()*1.27123);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170aaf0() {
   return (neuron0x170e210()*2.7669);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170ab30() {
   return (neuron0x170e690()*-4.69496);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17144b0() {
   return (neuron0x17076d0()*2.15175);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17144f0() {
   return (neuron0x1707a40()*4.28094);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170bd90() {
   return (neuron0x1707ec0()*2.51864);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170bdd0() {
   return (neuron0x1708340()*4.18911);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719e90() {
   return (neuron0x1708850()*0.181906);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1719ed0() {
   return (neuron0x1708cd0()*-5.5421);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707140() {
   return (neuron0x1709150()*-0.0649925);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1707180() {
   return (neuron0x1709760()*0.675832);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c930() {
   return (neuron0x1709b50()*-5.18445);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170c970() {
   return (neuron0x1709fd0()*-0.987);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cdb0() {
   return (neuron0x170a450()*0.511152);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170cdf0() {
   return (neuron0x170a8d0()*1.26471);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d230() {
   return (neuron0x170ade0()*-2.28745);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d270() {
   return (neuron0x1709550()*1.00027);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d6b0() {
   return (neuron0x170b6f0()*0.223214);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170d6f0() {
   return (neuron0x170bb70()*0.974087);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170db30() {
   return (neuron0x170c440()*4.37829);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170db70() {
   return (neuron0x170c710()*2.88404);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dfb0() {
   return (neuron0x170cb90()*0.238184);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170dff0() {
   return (neuron0x170d010()*7.44503);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e430() {
   return (neuron0x170d490()*-4.21535);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e470() {
   return (neuron0x170d910()*0.150839);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e8b0() {
   return (neuron0x170dd90()*-4.1715);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170e8f0() {
   return (neuron0x170e210()*-7.24016);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b000() {
   return (neuron0x170e690()*-0.907357);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x170b040() {
   return (neuron0x17076d0()*1.3904);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d2b0() {
   return (neuron0x1707a40()*-1.17372);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d2f0() {
   return (neuron0x1707ec0()*-0.819853);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d330() {
   return (neuron0x1708340()*-0.272996);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d370() {
   return (neuron0x1708850()*1.75192);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d3b0() {
   return (neuron0x1708cd0()*2.79246);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d3f0() {
   return (neuron0x1709150()*-0.29973);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d430() {
   return (neuron0x1709760()*-1.79296);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d470() {
   return (neuron0x1709b50()*0.270205);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d4b0() {
   return (neuron0x1709fd0()*1.3897);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d4f0() {
   return (neuron0x170a450()*-0.354716);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d530() {
   return (neuron0x170a8d0()*-0.440369);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d570() {
   return (neuron0x170ade0()*3.61129);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d5b0() {
   return (neuron0x1709550()*0.0741765);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d5f0() {
   return (neuron0x170b6f0()*1.52221);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d630() {
   return (neuron0x170bb70()*0.964807);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d100() {
   return (neuron0x170c440()*0.867554);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d140() {
   return (neuron0x170c710()*-0.165729);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d780() {
   return (neuron0x170cb90()*-0.099069);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d7c0() {
   return (neuron0x170d010()*1.63397);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d800() {
   return (neuron0x170d490()*3.07058);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d840() {
   return (neuron0x170d910()*1.13244);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d880() {
   return (neuron0x170dd90()*1.87241);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d8c0() {
   return (neuron0x170e210()*3.19791);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171d900() {
   return (neuron0x170e690()*-0.243469);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dc80() {
   return (neuron0x17076d0()*0.0948367);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dcc0() {
   return (neuron0x1707a40()*0.145852);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dd00() {
   return (neuron0x1707ec0()*-1.21487);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dd40() {
   return (neuron0x1708340()*-1.35455);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dd80() {
   return (neuron0x1708850()*0.560851);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ddc0() {
   return (neuron0x1708cd0()*-0.632551);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171de00() {
   return (neuron0x1709150()*0.494766);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171de40() {
   return (neuron0x1709760()*-0.123567);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171de80() {
   return (neuron0x1709b50()*0.703697);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dec0() {
   return (neuron0x1709fd0()*0.142126);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171df00() {
   return (neuron0x170a450()*-0.224955);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171df40() {
   return (neuron0x170a8d0()*0.686312);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171df80() {
   return (neuron0x170ade0()*-0.346943);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dfc0() {
   return (neuron0x1709550()*-0.693505);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e000() {
   return (neuron0x170b6f0()*0.510333);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e040() {
   return (neuron0x170bb70()*0.196173);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171dad0() {
   return (neuron0x170c440()*1.26035);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171db10() {
   return (neuron0x170c710()*-0.778322);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e190() {
   return (neuron0x170cb90()*0.0646496);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e1d0() {
   return (neuron0x170d010()*-0.306745);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e210() {
   return (neuron0x170d490()*1.98367);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e250() {
   return (neuron0x170d910()*0.237235);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e290() {
   return (neuron0x170dd90()*-0.404553);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e2d0() {
   return (neuron0x170e210()*-0.0944798);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e310() {
   return (neuron0x170e690()*0.065028);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e690() {
   return (neuron0x17076d0()*0.615527);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e6d0() {
   return (neuron0x1707a40()*6.02671);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e710() {
   return (neuron0x1707ec0()*0.35809);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e750() {
   return (neuron0x1708340()*1.5999);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e790() {
   return (neuron0x1708850()*-0.829002);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e7d0() {
   return (neuron0x1708cd0()*-9.90829);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e810() {
   return (neuron0x1709150()*0.500428);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e850() {
   return (neuron0x1709760()*0.787954);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e890() {
   return (neuron0x1709b50()*-0.564954);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e8d0() {
   return (neuron0x1709fd0()*-0.568231);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e910() {
   return (neuron0x170a450()*-0.586131);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e950() {
   return (neuron0x170a8d0()*-0.0661542);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e990() {
   return (neuron0x170ade0()*-4.4204);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e9d0() {
   return (neuron0x1709550()*0.563742);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ea10() {
   return (neuron0x170b6f0()*-0.223);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ea50() {
   return (neuron0x170bb70()*0.609712);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e4e0() {
   return (neuron0x170c440()*0.276973);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171e520() {
   return (neuron0x170c710()*-0.626984);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171eba0() {
   return (neuron0x170cb90()*-0.821503);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ebe0() {
   return (neuron0x170d010()*-0.159363);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ec20() {
   return (neuron0x170d490()*-7.54314);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ec60() {
   return (neuron0x170d910()*-0.0882564);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171eca0() {
   return (neuron0x170dd90()*-0.866335);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ece0() {
   return (neuron0x170e210()*-5.55707);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ed20() {
   return (neuron0x170e690()*2.02017);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f0a0() {
   return (neuron0x17076d0()*0.618402);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f0e0() {
   return (neuron0x1707a40()*-2.28342);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f120() {
   return (neuron0x1707ec0()*-10.3162);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f160() {
   return (neuron0x1708340()*-1.76249);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f1a0() {
   return (neuron0x1708850()*-0.146438);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f1e0() {
   return (neuron0x1708cd0()*4.11164);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f220() {
   return (neuron0x1709150()*0.342697);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f260() {
   return (neuron0x1709760()*0.295708);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f2a0() {
   return (neuron0x1709b50()*10.8596);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f2e0() {
   return (neuron0x1709fd0()*0.592427);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f320() {
   return (neuron0x170a450()*1.7046);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f360() {
   return (neuron0x170a8d0()*0.576167);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f3a0() {
   return (neuron0x170ade0()*10.4047);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f3e0() {
   return (neuron0x1709550()*2.40934);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f420() {
   return (neuron0x170b6f0()*-0.391301);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f460() {
   return (neuron0x170bb70()*-2.06993);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171eef0() {
   return (neuron0x170c440()*-15.2032);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ef30() {
   return (neuron0x170c710()*-4.99467);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f5b0() {
   return (neuron0x170cb90()*0.282288);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f5f0() {
   return (neuron0x170d010()*-1.74754);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f630() {
   return (neuron0x170d490()*4.43869);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f670() {
   return (neuron0x170d910()*-0.600058);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f6b0() {
   return (neuron0x170dd90()*3.5841);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f6f0() {
   return (neuron0x170e210()*1.64715);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f730() {
   return (neuron0x170e690()*-0.547803);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fab0() {
   return (neuron0x17076d0()*0.309268);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171faf0() {
   return (neuron0x1707a40()*0.0761418);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fb30() {
   return (neuron0x1707ec0()*-0.529711);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fb70() {
   return (neuron0x1708340()*-0.202535);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fbb0() {
   return (neuron0x1708850()*-0.480142);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fbf0() {
   return (neuron0x1708cd0()*-0.0741595);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fc30() {
   return (neuron0x1709150()*-0.517661);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fc70() {
   return (neuron0x1709760()*0.396242);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fcb0() {
   return (neuron0x1709b50()*-0.594249);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fcf0() {
   return (neuron0x1709fd0()*-0.224082);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fd30() {
   return (neuron0x170a450()*-0.126792);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fd70() {
   return (neuron0x170a8d0()*0.344646);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fdb0() {
   return (neuron0x170ade0()*-0.540395);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fdf0() {
   return (neuron0x1709550()*-0.468657);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fe30() {
   return (neuron0x170b6f0()*-0.248857);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171fe70() {
   return (neuron0x170bb70()*0.116036);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f900() {
   return (neuron0x170c440()*0.325523);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171f940() {
   return (neuron0x170c710()*-0.770074);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x171ffc0() {
   return (neuron0x170cb90()*-0.291669);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720000() {
   return (neuron0x170d010()*-0.516622);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720040() {
   return (neuron0x170d490()*0.255506);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720080() {
   return (neuron0x170d910()*0.154429);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17200c0() {
   return (neuron0x170dd90()*0.033021);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720100() {
   return (neuron0x170e210()*-1.21924);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720140() {
   return (neuron0x170e690()*-0.865865);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17204c0() {
   return (neuron0x17076d0()*-8.49399);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720500() {
   return (neuron0x1707a40()*0.155204);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720540() {
   return (neuron0x1707ec0()*-4.51053);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720580() {
   return (neuron0x1708340()*-2.68025);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17205c0() {
   return (neuron0x1708850()*0.343854);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720600() {
   return (neuron0x1708cd0()*-0.0693497);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720640() {
   return (neuron0x1709150()*0.420441);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720680() {
   return (neuron0x1709760()*-0.300644);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17206c0() {
   return (neuron0x1709b50()*15.8247);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720700() {
   return (neuron0x1709fd0()*-0.960177);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720740() {
   return (neuron0x170a450()*3.24759);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720780() {
   return (neuron0x170a8d0()*-0.442195);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17207c0() {
   return (neuron0x170ade0()*10.8388);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720800() {
   return (neuron0x1709550()*-0.219548);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720840() {
   return (neuron0x170b6f0()*0.408876);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720880() {
   return (neuron0x170bb70()*-0.0218703);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720310() {
   return (neuron0x170c440()*-6.24455);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720350() {
   return (neuron0x170c710()*2.28892);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17209d0() {
   return (neuron0x170cb90()*-0.126385);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720a10() {
   return (neuron0x170d010()*-0.846363);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720a50() {
   return (neuron0x170d490()*6.87776);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720a90() {
   return (neuron0x170d910()*0.336787);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720ad0() {
   return (neuron0x170dd90()*-0.0268828);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720b10() {
   return (neuron0x170e210()*1.06917);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720b50() {
   return (neuron0x170e690()*1.17518);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720ed0() {
   return (neuron0x17076d0()*2.23485);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720f10() {
   return (neuron0x1707a40()*-3.38974);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720f50() {
   return (neuron0x1707ec0()*-25.6947);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720f90() {
   return (neuron0x1708340()*-5.67843);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720fd0() {
   return (neuron0x1708850()*-1.10664);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721010() {
   return (neuron0x1708cd0()*8.39719);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721050() {
   return (neuron0x1709150()*-0.336984);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721090() {
   return (neuron0x1709760()*-0.817032);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17210d0() {
   return (neuron0x1709b50()*22.3931);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721110() {
   return (neuron0x1709fd0()*2.11711);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721150() {
   return (neuron0x170a450()*1.96627);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721190() {
   return (neuron0x170a8d0()*-0.955407);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17211d0() {
   return (neuron0x170ade0()*28.5684);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721210() {
   return (neuron0x1709550()*3.75232);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721250() {
   return (neuron0x170b6f0()*-1.84862);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721290() {
   return (neuron0x170bb70()*-3.36318);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720d20() {
   return (neuron0x170c440()*-42.5801);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1720d60() {
   return (neuron0x170c710()*-12.9101);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17213e0() {
   return (neuron0x170cb90()*0.00178006);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721420() {
   return (neuron0x170d010()*-5.76931);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721460() {
   return (neuron0x170d490()*13.726);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17214a0() {
   return (neuron0x170d910()*-1.55709);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17214e0() {
   return (neuron0x170dd90()*7.78391);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721520() {
   return (neuron0x170e210()*9.45431);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721560() {
   return (neuron0x170e690()*0.776138);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17218e0() {
   return (neuron0x17076d0()*-0.619108);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721920() {
   return (neuron0x1707a40()*-0.186114);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721960() {
   return (neuron0x1707ec0()*-6.28975);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17219a0() {
   return (neuron0x1708340()*-1.44658);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17219e0() {
   return (neuron0x1708850()*-1.48143);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721a20() {
   return (neuron0x1708cd0()*0.158876);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721a60() {
   return (neuron0x1709150()*-0.348687);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721aa0() {
   return (neuron0x1709760()*-1.05803);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721ae0() {
   return (neuron0x1709b50()*-2.91993);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721b20() {
   return (neuron0x1709fd0()*-0.340224);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721b60() {
   return (neuron0x170a450()*-0.283571);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721ba0() {
   return (neuron0x170a8d0()*-0.147848);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721be0() {
   return (neuron0x170ade0()*2.04835);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721c20() {
   return (neuron0x1709550()*-2.68727);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721c60() {
   return (neuron0x170b6f0()*-1.75641);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721ca0() {
   return (neuron0x170bb70()*-0.0886089);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721730() {
   return (neuron0x170c440()*3.35313);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721770() {
   return (neuron0x170c710()*1.03333);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721df0() {
   return (neuron0x170cb90()*-1.00428);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721e30() {
   return (neuron0x170d010()*-0.481808);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721e70() {
   return (neuron0x170d490()*1.61593);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721eb0() {
   return (neuron0x170d910()*-0.554539);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721ef0() {
   return (neuron0x170dd90()*0.738121);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721f30() {
   return (neuron0x170e210()*-0.972289);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1721f70() {
   return (neuron0x170e690()*-1.30013);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17221d0() {
   return (neuron0x17105a0()*5.5322);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722210() {
   return (neuron0x170b370()*-5.04765);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722250() {
   return (neuron0x1711110()*0.133588);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722290() {
   return (neuron0x1711c30()*6.5481);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17222d0() {
   return (neuron0x1712640()*3.28544);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722310() {
   return (neuron0x1713050()*8.26255);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722350() {
   return (neuron0x1710c40()*14.0869);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722390() {
   return (neuron0x1714c80()*4.50849);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17223d0() {
   return (neuron0x1715690()*-4.00463);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722410() {
   return (neuron0x17160a0()*1.39899);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722450() {
   return (neuron0x1716ab0()*-3.28515);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722490() {
   return (neuron0x17174c0()*-0.429046);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17224d0() {
   return (neuron0x1717ed0()*-5.92);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722510() {
   return (neuron0x17188e0()*-13.0414);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722550() {
   return (neuron0x17192f0()*-3.15463);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722590() {
   return (neuron0x1719d00()*-10.3627);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17075a0() {
   return (neuron0x1714320()*8.26998);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17075e0() {
   return (neuron0x171cf70()*-6.82202);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17226e0() {
   return (neuron0x171d940()*3.19541);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722720() {
   return (neuron0x171e350()*6.22922);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722760() {
   return (neuron0x171ed60()*3.05092);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17227a0() {
   return (neuron0x171f770()*0.49683);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x17227e0() {
   return (neuron0x1720180()*6.9368);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722820() {
   return (neuron0x1720b90()*-3.70472);
}

double nnFunc_25_25hi_6000ep_weight_secB::synapse0x1722860() {
   return (neuron0x17215a0()*6.22378);
}

