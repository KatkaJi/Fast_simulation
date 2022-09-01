#include "25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_upwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x233a050();
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
         return neuron0x233a050();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x231e600() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x231e940() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x231ec80() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x231efc0() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x231f300() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x231f770() {
   double input = 1.12222;
   input += synapse0x222b760();
   input += synapse0x230da70();
   input += synapse0x231fa20();
   input += synapse0x231fa60();
   input += synapse0x231faa0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x231f770() {
   double input = input0x231f770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x231fae0() {
   double input = 1.13391;
   input += synapse0x231fe20();
   input += synapse0x231fe60();
   input += synapse0x231fea0();
   input += synapse0x231fee0();
   input += synapse0x231ff20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x231fae0() {
   double input = input0x231fae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x231ff60() {
   double input = -0.622025;
   input += synapse0x23202a0();
   input += synapse0x23202e0();
   input += synapse0x2320320();
   input += synapse0x2320360();
   input += synapse0x23203a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x231ff60() {
   double input = input0x231ff60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23203e0() {
   double input = 0.488712;
   input += synapse0x2320720();
   input += synapse0x2320760();
   input += synapse0x221d950();
   input += synapse0x221d990();
   input += synapse0x23208b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23203e0() {
   double input = input0x23203e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23208f0() {
   double input = -1.08358;
   input += synapse0x2320c30();
   input += synapse0x2320c70();
   input += synapse0x2320cb0();
   input += synapse0x2320cf0();
   input += synapse0x2320d30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23208f0() {
   double input = input0x23208f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2320d70() {
   double input = -1.05396;
   input += synapse0x23210b0();
   input += synapse0x23210f0();
   input += synapse0x2321130();
   input += synapse0x2321170();
   input += synapse0x23211b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2320d70() {
   double input = input0x2320d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23211f0() {
   double input = 1.429;
   input += synapse0x2321530();
   input += synapse0x2321570();
   input += synapse0x23215b0();
   input += synapse0x23207a0();
   input += synapse0x23207e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23211f0() {
   double input = input0x23211f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2321800() {
   double input = 17.7334;
   input += synapse0x2321ab0();
   input += synapse0x2321af0();
   input += synapse0x2321b30();
   input += synapse0x2321b70();
   input += synapse0x2321bb0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2321800() {
   double input = input0x2321800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2321bf0() {
   double input = -1.10462;
   input += synapse0x2321f30();
   input += synapse0x2321f70();
   input += synapse0x2321fb0();
   input += synapse0x2321ff0();
   input += synapse0x2322030();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2321bf0() {
   double input = input0x2321bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2322070() {
   double input = -0.209296;
   input += synapse0x23223b0();
   input += synapse0x23223f0();
   input += synapse0x2322430();
   input += synapse0x2322470();
   input += synapse0x23224b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2322070() {
   double input = input0x2322070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23224f0() {
   double input = -1.1265;
   input += synapse0x2322830();
   input += synapse0x2322870();
   input += synapse0x23228b0();
   input += synapse0x23228f0();
   input += synapse0x2322930();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23224f0() {
   double input = input0x23224f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2322970() {
   double input = 1.03543;
   input += synapse0x221d7a0();
   input += synapse0x221d7e0();
   input += synapse0x2322dc0();
   input += synapse0x2322e00();
   input += synapse0x2322e40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2322970() {
   double input = input0x2322970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2322e80() {
   double input = -0.0654493;
   input += synapse0x23231c0();
   input += synapse0x2323200();
   input += synapse0x2323240();
   input += synapse0x2323280();
   input += synapse0x23232c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2322e80() {
   double input = input0x2322e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23215f0() {
   double input = 0.0830521;
   input += synapse0x221df70();
   input += synapse0x2321780();
   input += synapse0x23217c0();
   input += synapse0x2323710();
   input += synapse0x2323750();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23215f0() {
   double input = input0x23215f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2323790() {
   double input = -1.25148;
   input += synapse0x2323ad0();
   input += synapse0x2323b10();
   input += synapse0x2323b50();
   input += synapse0x2323b90();
   input += synapse0x2323bd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2323790() {
   double input = input0x2323790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2323c10() {
   double input = 1.16014;
   input += synapse0x2323f50();
   input += synapse0x231e820();
   input += synapse0x231e860();
   input += synapse0x231eb60();
   input += synapse0x231eba0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2323c10() {
   double input = input0x2323c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23244e0() {
   double input = 10.9634;
   input += synapse0x2324670();
   input += synapse0x23246b0();
   input += synapse0x23246f0();
   input += synapse0x2324730();
   input += synapse0x2324770();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23244e0() {
   double input = input0x23244e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23247b0() {
   double input = 1.5049;
   input += synapse0x2324af0();
   input += synapse0x2324b30();
   input += synapse0x2324b70();
   input += synapse0x2324bb0();
   input += synapse0x2324bf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23247b0() {
   double input = input0x23247b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2324c30() {
   double input = -0.437992;
   input += synapse0x2324f70();
   input += synapse0x2324fb0();
   input += synapse0x2324ff0();
   input += synapse0x2325030();
   input += synapse0x2325070();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2324c30() {
   double input = input0x2324c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23250b0() {
   double input = 8.16975;
   input += synapse0x23253f0();
   input += synapse0x2325430();
   input += synapse0x2325470();
   input += synapse0x23254b0();
   input += synapse0x23254f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23250b0() {
   double input = input0x23250b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2325530() {
   double input = -2.75476;
   input += synapse0x2325870();
   input += synapse0x23258b0();
   input += synapse0x23258f0();
   input += synapse0x2325930();
   input += synapse0x2325970();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2325530() {
   double input = input0x2325530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23259b0() {
   double input = 3.97621;
   input += synapse0x2325cf0();
   input += synapse0x2325d30();
   input += synapse0x2325d70();
   input += synapse0x2325db0();
   input += synapse0x2325df0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23259b0() {
   double input = input0x23259b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2325e30() {
   double input = 0.449931;
   input += synapse0x2326170();
   input += synapse0x23261b0();
   input += synapse0x23261f0();
   input += synapse0x2326230();
   input += synapse0x2326270();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2325e30() {
   double input = input0x2325e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23262b0() {
   double input = -0.777197;
   input += synapse0x23265f0();
   input += synapse0x2326630();
   input += synapse0x2326670();
   input += synapse0x23266b0();
   input += synapse0x23266f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23262b0() {
   double input = input0x23262b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2326730() {
   double input = 19.7283;
   input += synapse0x2326a70();
   input += synapse0x2326ab0();
   input += synapse0x2326af0();
   input += synapse0x2326b30();
   input += synapse0x2326b70();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2326730() {
   double input = input0x2326730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2328640() {
   double input = 0.674627;
   input += synapse0x2320690();
   input += synapse0x23206d0();
   input += synapse0x2320ba0();
   input += synapse0x2320be0();
   input += synapse0x2321020();
   input += synapse0x2321060();
   input += synapse0x23214a0();
   input += synapse0x23214e0();
   input += synapse0x2321a20();
   input += synapse0x2321a60();
   input += synapse0x2321ea0();
   input += synapse0x2321ee0();
   input += synapse0x2322320();
   input += synapse0x2322360();
   input += synapse0x23227a0();
   input += synapse0x23227e0();
   input += synapse0x2322c20();
   input += synapse0x2322c60();
   input += synapse0x2323130();
   input += synapse0x2323170();
   input += synapse0x2323a40();
   input += synapse0x2323a80();
   input += synapse0x2323ec0();
   input += synapse0x2323f00();
   input += synapse0x231f520();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2328640() {
   double input = input0x2328640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2323410() {
   double input = 0.829838;
   input += synapse0x23235a0();
   input += synapse0x23235e0();
   input += synapse0x2323620();
   input += synapse0x2323660();
   input += synapse0x23236a0();
   input += synapse0x231f560();
   input += synapse0x23257e0();
   input += synapse0x2325820();
   input += synapse0x2325c60();
   input += synapse0x2325ca0();
   input += synapse0x23260e0();
   input += synapse0x2326120();
   input += synapse0x2326560();
   input += synapse0x23265a0();
   input += synapse0x23269e0();
   input += synapse0x2326a20();
   input += synapse0x231f990();
   input += synapse0x231f9d0();
   input += synapse0x2324a60();
   input += synapse0x2324aa0();
   input += synapse0x222b830();
   input += synapse0x222b870();
   input += synapse0x23290f0();
   input += synapse0x2329130();
   input += synapse0x2329170();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2323410() {
   double input = input0x2323410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23291b0() {
   double input = 0.255118;
   input += synapse0x2322cb0();
   input += synapse0x2322cf0();
   input += synapse0x2322d30();
   input += synapse0x2322d70();
   input += synapse0x2329700();
   input += synapse0x2329740();
   input += synapse0x2329780();
   input += synapse0x23297c0();
   input += synapse0x2329800();
   input += synapse0x2329840();
   input += synapse0x2329880();
   input += synapse0x23298c0();
   input += synapse0x2329900();
   input += synapse0x2329940();
   input += synapse0x2329980();
   input += synapse0x23299c0();
   input += synapse0x2329340();
   input += synapse0x2329380();
   input += synapse0x2329b10();
   input += synapse0x2329b50();
   input += synapse0x2329b90();
   input += synapse0x2329bd0();
   input += synapse0x2329c10();
   input += synapse0x2329c50();
   input += synapse0x2329c90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23291b0() {
   double input = input0x23291b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2329cd0() {
   double input = 0.0351738;
   input += synapse0x232a010();
   input += synapse0x232a050();
   input += synapse0x232a090();
   input += synapse0x232a0d0();
   input += synapse0x232a110();
   input += synapse0x232a150();
   input += synapse0x232a190();
   input += synapse0x232a1d0();
   input += synapse0x232a210();
   input += synapse0x232a250();
   input += synapse0x232a290();
   input += synapse0x232a2d0();
   input += synapse0x232a310();
   input += synapse0x232a350();
   input += synapse0x232a390();
   input += synapse0x232a3d0();
   input += synapse0x2329e60();
   input += synapse0x2329ea0();
   input += synapse0x232a520();
   input += synapse0x232a560();
   input += synapse0x232a5a0();
   input += synapse0x232a5e0();
   input += synapse0x232a620();
   input += synapse0x232a660();
   input += synapse0x232a6a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2329cd0() {
   double input = input0x2329cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232a6e0() {
   double input = 0.215165;
   input += synapse0x232aa20();
   input += synapse0x232aa60();
   input += synapse0x232aaa0();
   input += synapse0x232aae0();
   input += synapse0x232ab20();
   input += synapse0x232ab60();
   input += synapse0x232aba0();
   input += synapse0x232abe0();
   input += synapse0x232ac20();
   input += synapse0x232ac60();
   input += synapse0x232aca0();
   input += synapse0x232ace0();
   input += synapse0x232ad20();
   input += synapse0x232ad60();
   input += synapse0x232ada0();
   input += synapse0x232ade0();
   input += synapse0x232a870();
   input += synapse0x232a8b0();
   input += synapse0x232af30();
   input += synapse0x232af70();
   input += synapse0x232afb0();
   input += synapse0x232aff0();
   input += synapse0x232b030();
   input += synapse0x232b070();
   input += synapse0x232b0b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232a6e0() {
   double input = input0x232a6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232b0f0() {
   double input = -0.104964;
   input += synapse0x232b430();
   input += synapse0x232b470();
   input += synapse0x232b4b0();
   input += synapse0x232b4f0();
   input += synapse0x232b530();
   input += synapse0x232b570();
   input += synapse0x232b5b0();
   input += synapse0x23287d0();
   input += synapse0x2328810();
   input += synapse0x2328850();
   input += synapse0x2328890();
   input += synapse0x23288d0();
   input += synapse0x2328910();
   input += synapse0x2328950();
   input += synapse0x2328990();
   input += synapse0x23289d0();
   input += synapse0x232b280();
   input += synapse0x232b2c0();
   input += synapse0x2328b20();
   input += synapse0x2328b60();
   input += synapse0x2328ba0();
   input += synapse0x2328be0();
   input += synapse0x2328c20();
   input += synapse0x2328c60();
   input += synapse0x2328ca0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232b0f0() {
   double input = input0x232b0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2328ce0() {
   double input = 1.13598;
   input += synapse0x2328f90();
   input += synapse0x232c690();
   input += synapse0x232c6d0();
   input += synapse0x232c710();
   input += synapse0x232c750();
   input += synapse0x232c790();
   input += synapse0x232c7d0();
   input += synapse0x232c810();
   input += synapse0x232c850();
   input += synapse0x232c890();
   input += synapse0x232c8d0();
   input += synapse0x232c910();
   input += synapse0x232c950();
   input += synapse0x232c990();
   input += synapse0x232c9d0();
   input += synapse0x232ca10();
   input += synapse0x2328e70();
   input += synapse0x2328eb0();
   input += synapse0x232cb60();
   input += synapse0x232cba0();
   input += synapse0x232cbe0();
   input += synapse0x232cc20();
   input += synapse0x232cc60();
   input += synapse0x232cca0();
   input += synapse0x232cce0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2328ce0() {
   double input = input0x2328ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232cd20() {
   double input = -0.273185;
   input += synapse0x232d060();
   input += synapse0x232d0a0();
   input += synapse0x232d0e0();
   input += synapse0x232d120();
   input += synapse0x232d160();
   input += synapse0x232d1a0();
   input += synapse0x232d1e0();
   input += synapse0x232d220();
   input += synapse0x232d260();
   input += synapse0x232d2a0();
   input += synapse0x232d2e0();
   input += synapse0x232d320();
   input += synapse0x232d360();
   input += synapse0x232d3a0();
   input += synapse0x232d3e0();
   input += synapse0x232d420();
   input += synapse0x232ceb0();
   input += synapse0x232cef0();
   input += synapse0x232d570();
   input += synapse0x232d5b0();
   input += synapse0x232d5f0();
   input += synapse0x232d630();
   input += synapse0x232d670();
   input += synapse0x232d6b0();
   input += synapse0x232d6f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232cd20() {
   double input = input0x232cd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232d730() {
   double input = -0.593126;
   input += synapse0x232da70();
   input += synapse0x232dab0();
   input += synapse0x232daf0();
   input += synapse0x232db30();
   input += synapse0x232db70();
   input += synapse0x232dbb0();
   input += synapse0x232dbf0();
   input += synapse0x232dc30();
   input += synapse0x232dc70();
   input += synapse0x232dcb0();
   input += synapse0x232dcf0();
   input += synapse0x232dd30();
   input += synapse0x232dd70();
   input += synapse0x232ddb0();
   input += synapse0x232ddf0();
   input += synapse0x232de30();
   input += synapse0x232d8c0();
   input += synapse0x232d900();
   input += synapse0x232df80();
   input += synapse0x232dfc0();
   input += synapse0x232e000();
   input += synapse0x232e040();
   input += synapse0x232e080();
   input += synapse0x232e0c0();
   input += synapse0x232e100();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232d730() {
   double input = input0x232d730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232e140() {
   double input = 0.05277;
   input += synapse0x232e480();
   input += synapse0x232e4c0();
   input += synapse0x232e500();
   input += synapse0x232e540();
   input += synapse0x232e580();
   input += synapse0x232e5c0();
   input += synapse0x232e600();
   input += synapse0x232e640();
   input += synapse0x232e680();
   input += synapse0x232e6c0();
   input += synapse0x232e700();
   input += synapse0x232e740();
   input += synapse0x232e780();
   input += synapse0x232e7c0();
   input += synapse0x232e800();
   input += synapse0x232e840();
   input += synapse0x232e2d0();
   input += synapse0x232e310();
   input += synapse0x232e990();
   input += synapse0x232e9d0();
   input += synapse0x232ea10();
   input += synapse0x232ea50();
   input += synapse0x232ea90();
   input += synapse0x232ead0();
   input += synapse0x232eb10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232e140() {
   double input = input0x232e140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232eb50() {
   double input = 0.861893;
   input += synapse0x232ee90();
   input += synapse0x232eed0();
   input += synapse0x232ef10();
   input += synapse0x232ef50();
   input += synapse0x232ef90();
   input += synapse0x232efd0();
   input += synapse0x232f010();
   input += synapse0x232f050();
   input += synapse0x232f090();
   input += synapse0x232f0d0();
   input += synapse0x232f110();
   input += synapse0x232f150();
   input += synapse0x232f190();
   input += synapse0x232f1d0();
   input += synapse0x232f210();
   input += synapse0x232f250();
   input += synapse0x232ece0();
   input += synapse0x232ed20();
   input += synapse0x232f3a0();
   input += synapse0x232f3e0();
   input += synapse0x232f420();
   input += synapse0x232f460();
   input += synapse0x232f4a0();
   input += synapse0x232f4e0();
   input += synapse0x232f520();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232eb50() {
   double input = input0x232eb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232f560() {
   double input = -1.11154;
   input += synapse0x232f8a0();
   input += synapse0x232f8e0();
   input += synapse0x232f920();
   input += synapse0x232f960();
   input += synapse0x232f9a0();
   input += synapse0x232f9e0();
   input += synapse0x232fa20();
   input += synapse0x232fa60();
   input += synapse0x232faa0();
   input += synapse0x232fae0();
   input += synapse0x232fb20();
   input += synapse0x232fb60();
   input += synapse0x232fba0();
   input += synapse0x232fbe0();
   input += synapse0x232fc20();
   input += synapse0x232fc60();
   input += synapse0x232f6f0();
   input += synapse0x232f730();
   input += synapse0x232fdb0();
   input += synapse0x232fdf0();
   input += synapse0x232fe30();
   input += synapse0x232fe70();
   input += synapse0x232feb0();
   input += synapse0x232fef0();
   input += synapse0x232ff30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232f560() {
   double input = input0x232f560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232ff70() {
   double input = -0.9944;
   input += synapse0x23302b0();
   input += synapse0x23302f0();
   input += synapse0x2330330();
   input += synapse0x2330370();
   input += synapse0x23303b0();
   input += synapse0x23303f0();
   input += synapse0x2330430();
   input += synapse0x2330470();
   input += synapse0x23304b0();
   input += synapse0x23304f0();
   input += synapse0x2330530();
   input += synapse0x2330570();
   input += synapse0x23305b0();
   input += synapse0x23305f0();
   input += synapse0x2330630();
   input += synapse0x2330670();
   input += synapse0x2330100();
   input += synapse0x2330140();
   input += synapse0x23307c0();
   input += synapse0x2330800();
   input += synapse0x2330840();
   input += synapse0x2330880();
   input += synapse0x23308c0();
   input += synapse0x2330900();
   input += synapse0x2330940();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232ff70() {
   double input = input0x232ff70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2330980() {
   double input = -0.834128;
   input += synapse0x2330cc0();
   input += synapse0x2330d00();
   input += synapse0x2330d40();
   input += synapse0x2330d80();
   input += synapse0x2330dc0();
   input += synapse0x2330e00();
   input += synapse0x2330e40();
   input += synapse0x2330e80();
   input += synapse0x2330ec0();
   input += synapse0x2330f00();
   input += synapse0x2330f40();
   input += synapse0x2330f80();
   input += synapse0x2330fc0();
   input += synapse0x2331000();
   input += synapse0x2331040();
   input += synapse0x2331080();
   input += synapse0x2330b10();
   input += synapse0x2330b50();
   input += synapse0x23311d0();
   input += synapse0x2331210();
   input += synapse0x2331250();
   input += synapse0x2331290();
   input += synapse0x23312d0();
   input += synapse0x2331310();
   input += synapse0x2331350();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2330980() {
   double input = input0x2330980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2331390() {
   double input = -0.23577;
   input += synapse0x23316d0();
   input += synapse0x2331710();
   input += synapse0x2331750();
   input += synapse0x2331790();
   input += synapse0x23317d0();
   input += synapse0x2331810();
   input += synapse0x2331850();
   input += synapse0x2331890();
   input += synapse0x23318d0();
   input += synapse0x2331910();
   input += synapse0x2331950();
   input += synapse0x2331990();
   input += synapse0x23319d0();
   input += synapse0x2331a10();
   input += synapse0x2331a50();
   input += synapse0x2331a90();
   input += synapse0x2331520();
   input += synapse0x2331560();
   input += synapse0x2331be0();
   input += synapse0x2331c20();
   input += synapse0x2331c60();
   input += synapse0x2331ca0();
   input += synapse0x2331ce0();
   input += synapse0x2331d20();
   input += synapse0x2331d60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2331390() {
   double input = input0x2331390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2331da0() {
   double input = 0.535081;
   input += synapse0x23320e0();
   input += synapse0x231f900();
   input += synapse0x231f940();
   input += synapse0x231fd00();
   input += synapse0x231fd40();
   input += synapse0x2320180();
   input += synapse0x23201c0();
   input += synapse0x2320600();
   input += synapse0x2320640();
   input += synapse0x2320b10();
   input += synapse0x2320b50();
   input += synapse0x2320f90();
   input += synapse0x2320fd0();
   input += synapse0x2321410();
   input += synapse0x2321450();
   input += synapse0x2321990();
   input += synapse0x23219d0();
   input += synapse0x2321e10();
   input += synapse0x2321e50();
   input += synapse0x2322290();
   input += synapse0x23222d0();
   input += synapse0x2322710();
   input += synapse0x2322750();
   input += synapse0x2322b90();
   input += synapse0x2322bd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2331da0() {
   double input = input0x2331da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x232c3c0() {
   double input = 0.448669;
   input += synapse0x232c550();
   input += synapse0x232c590();
   input += synapse0x2323e30();
   input += synapse0x2323e70();
   input += synapse0x2331f30();
   input += synapse0x2331f70();
   input += synapse0x231f1e0();
   input += synapse0x231f220();
   input += synapse0x23249d0();
   input += synapse0x2324a10();
   input += synapse0x2324e50();
   input += synapse0x2324e90();
   input += synapse0x23252d0();
   input += synapse0x2325310();
   input += synapse0x2325750();
   input += synapse0x2325790();
   input += synapse0x2325bd0();
   input += synapse0x2325c10();
   input += synapse0x2326050();
   input += synapse0x2326090();
   input += synapse0x23264d0();
   input += synapse0x2326510();
   input += synapse0x2326950();
   input += synapse0x2326990();
   input += synapse0x23230a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x232c3c0() {
   double input = input0x232c3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2335010() {
   double input = 0.152801;
   input += synapse0x23230e0();
   input += synapse0x2335350();
   input += synapse0x2335390();
   input += synapse0x23353d0();
   input += synapse0x2335410();
   input += synapse0x2335450();
   input += synapse0x2335490();
   input += synapse0x23354d0();
   input += synapse0x2335510();
   input += synapse0x2335550();
   input += synapse0x2335590();
   input += synapse0x23355d0();
   input += synapse0x2335610();
   input += synapse0x2335650();
   input += synapse0x2335690();
   input += synapse0x23356d0();
   input += synapse0x23351a0();
   input += synapse0x23351e0();
   input += synapse0x2335820();
   input += synapse0x2335860();
   input += synapse0x23358a0();
   input += synapse0x23358e0();
   input += synapse0x2335920();
   input += synapse0x2335960();
   input += synapse0x23359a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2335010() {
   double input = input0x2335010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23359e0() {
   double input = -0.687248;
   input += synapse0x2335d20();
   input += synapse0x2335d60();
   input += synapse0x2335da0();
   input += synapse0x2335de0();
   input += synapse0x2335e20();
   input += synapse0x2335e60();
   input += synapse0x2335ea0();
   input += synapse0x2335ee0();
   input += synapse0x2335f20();
   input += synapse0x2335f60();
   input += synapse0x2335fa0();
   input += synapse0x2335fe0();
   input += synapse0x2336020();
   input += synapse0x2336060();
   input += synapse0x23360a0();
   input += synapse0x23360e0();
   input += synapse0x2335b70();
   input += synapse0x2335bb0();
   input += synapse0x2336230();
   input += synapse0x2336270();
   input += synapse0x23362b0();
   input += synapse0x23362f0();
   input += synapse0x2336330();
   input += synapse0x2336370();
   input += synapse0x23363b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23359e0() {
   double input = input0x23359e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x23363f0() {
   double input = 1.40196;
   input += synapse0x2336730();
   input += synapse0x2336770();
   input += synapse0x23367b0();
   input += synapse0x23367f0();
   input += synapse0x2336830();
   input += synapse0x2336870();
   input += synapse0x23368b0();
   input += synapse0x23368f0();
   input += synapse0x2336930();
   input += synapse0x2336970();
   input += synapse0x23369b0();
   input += synapse0x23369f0();
   input += synapse0x2336a30();
   input += synapse0x2336a70();
   input += synapse0x2336ab0();
   input += synapse0x2336af0();
   input += synapse0x2336580();
   input += synapse0x23365c0();
   input += synapse0x2336c40();
   input += synapse0x2336c80();
   input += synapse0x2336cc0();
   input += synapse0x2336d00();
   input += synapse0x2336d40();
   input += synapse0x2336d80();
   input += synapse0x2336dc0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x23363f0() {
   double input = input0x23363f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2336e00() {
   double input = 0.913925;
   input += synapse0x2337140();
   input += synapse0x2337180();
   input += synapse0x23371c0();
   input += synapse0x2337200();
   input += synapse0x2337240();
   input += synapse0x2337280();
   input += synapse0x23372c0();
   input += synapse0x2337300();
   input += synapse0x2337340();
   input += synapse0x2337380();
   input += synapse0x23373c0();
   input += synapse0x2337400();
   input += synapse0x2337440();
   input += synapse0x2337480();
   input += synapse0x23374c0();
   input += synapse0x2337500();
   input += synapse0x2336f90();
   input += synapse0x2336fd0();
   input += synapse0x2337650();
   input += synapse0x2337690();
   input += synapse0x23376d0();
   input += synapse0x2337710();
   input += synapse0x2337750();
   input += synapse0x2337790();
   input += synapse0x23377d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2336e00() {
   double input = input0x2336e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2337810() {
   double input = -0.511067;
   input += synapse0x2337b50();
   input += synapse0x2337b90();
   input += synapse0x2337bd0();
   input += synapse0x2337c10();
   input += synapse0x2337c50();
   input += synapse0x2337c90();
   input += synapse0x2337cd0();
   input += synapse0x2337d10();
   input += synapse0x2337d50();
   input += synapse0x2337d90();
   input += synapse0x2337dd0();
   input += synapse0x2337e10();
   input += synapse0x2337e50();
   input += synapse0x2337e90();
   input += synapse0x2337ed0();
   input += synapse0x2337f10();
   input += synapse0x23379a0();
   input += synapse0x23379e0();
   input += synapse0x2338060();
   input += synapse0x23380a0();
   input += synapse0x23380e0();
   input += synapse0x2338120();
   input += synapse0x2338160();
   input += synapse0x23381a0();
   input += synapse0x23381e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2337810() {
   double input = input0x2337810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2338220() {
   double input = 2.19383;
   input += synapse0x2338560();
   input += synapse0x23385a0();
   input += synapse0x23385e0();
   input += synapse0x2338620();
   input += synapse0x2338660();
   input += synapse0x23386a0();
   input += synapse0x23386e0();
   input += synapse0x2338720();
   input += synapse0x2338760();
   input += synapse0x23387a0();
   input += synapse0x23387e0();
   input += synapse0x2338820();
   input += synapse0x2338860();
   input += synapse0x23388a0();
   input += synapse0x23388e0();
   input += synapse0x2338920();
   input += synapse0x23383b0();
   input += synapse0x23383f0();
   input += synapse0x2338a70();
   input += synapse0x2338ab0();
   input += synapse0x2338af0();
   input += synapse0x2338b30();
   input += synapse0x2338b70();
   input += synapse0x2338bb0();
   input += synapse0x2338bf0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2338220() {
   double input = input0x2338220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2338c30() {
   double input = 0.382932;
   input += synapse0x2338f70();
   input += synapse0x2338fb0();
   input += synapse0x2338ff0();
   input += synapse0x2339030();
   input += synapse0x2339070();
   input += synapse0x23390b0();
   input += synapse0x23390f0();
   input += synapse0x2339130();
   input += synapse0x2339170();
   input += synapse0x23391b0();
   input += synapse0x23391f0();
   input += synapse0x2339230();
   input += synapse0x2339270();
   input += synapse0x23392b0();
   input += synapse0x23392f0();
   input += synapse0x2339330();
   input += synapse0x2338dc0();
   input += synapse0x2338e00();
   input += synapse0x2339480();
   input += synapse0x23394c0();
   input += synapse0x2339500();
   input += synapse0x2339540();
   input += synapse0x2339580();
   input += synapse0x23395c0();
   input += synapse0x2339600();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2338c30() {
   double input = input0x2338c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x2339640() {
   double input = -0.94935;
   input += synapse0x2339980();
   input += synapse0x23399c0();
   input += synapse0x2339a00();
   input += synapse0x2339a40();
   input += synapse0x2339a80();
   input += synapse0x2339ac0();
   input += synapse0x2339b00();
   input += synapse0x2339b40();
   input += synapse0x2339b80();
   input += synapse0x2339bc0();
   input += synapse0x2339c00();
   input += synapse0x2339c40();
   input += synapse0x2339c80();
   input += synapse0x2339cc0();
   input += synapse0x2339d00();
   input += synapse0x2339d40();
   input += synapse0x23397d0();
   input += synapse0x2339810();
   input += synapse0x2339e90();
   input += synapse0x2339ed0();
   input += synapse0x2339f10();
   input += synapse0x2339f50();
   input += synapse0x2339f90();
   input += synapse0x2339fd0();
   input += synapse0x233a010();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x2339640() {
   double input = input0x2339640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x233a050() {
   double input = 0.762428;
   input += synapse0x233a270();
   input += synapse0x233a2b0();
   input += synapse0x233a2f0();
   input += synapse0x233a330();
   input += synapse0x233a370();
   input += synapse0x233a3b0();
   input += synapse0x233a3f0();
   input += synapse0x233a430();
   input += synapse0x233a470();
   input += synapse0x233a4b0();
   input += synapse0x233a4f0();
   input += synapse0x233a530();
   input += synapse0x233a570();
   input += synapse0x233a5b0();
   input += synapse0x233a5f0();
   input += synapse0x233a630();
   input += synapse0x231f640();
   input += synapse0x231f680();
   input += synapse0x233a780();
   input += synapse0x233a7c0();
   input += synapse0x233a800();
   input += synapse0x233a840();
   input += synapse0x233a880();
   input += synapse0x233a8c0();
   input += synapse0x233a900();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x233a050() {
   double input = input0x233a050();
   return (input * 35.2234)+155.598;
}

double nnFunc_25_25hi_3000ep__::synapse0x222b760() {
   return (neuron0x231e600()*-2.49847);
}

double nnFunc_25_25hi_3000ep__::synapse0x230da70() {
   return (neuron0x231e940()*0.872298);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fa20() {
   return (neuron0x231ec80()*0.890975);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fa60() {
   return (neuron0x231efc0()*1.07509);
}

double nnFunc_25_25hi_3000ep__::synapse0x231faa0() {
   return (neuron0x231f300()*0.326269);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fe20() {
   return (neuron0x231e600()*0.116271);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fe60() {
   return (neuron0x231e940()*0.517682);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fea0() {
   return (neuron0x231ec80()*0.866766);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fee0() {
   return (neuron0x231efc0()*4.94192);
}

double nnFunc_25_25hi_3000ep__::synapse0x231ff20() {
   return (neuron0x231f300()*1.22503);
}

double nnFunc_25_25hi_3000ep__::synapse0x23202a0() {
   return (neuron0x231e600()*3.45837);
}

double nnFunc_25_25hi_3000ep__::synapse0x23202e0() {
   return (neuron0x231e940()*-1.32732);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320320() {
   return (neuron0x231ec80()*0.217038);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320360() {
   return (neuron0x231efc0()*-3.86773);
}

double nnFunc_25_25hi_3000ep__::synapse0x23203a0() {
   return (neuron0x231f300()*0.0473049);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320720() {
   return (neuron0x231e600()*-2.35109);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320760() {
   return (neuron0x231e940()*0.248445);
}

double nnFunc_25_25hi_3000ep__::synapse0x221d950() {
   return (neuron0x231ec80()*0.118568);
}

double nnFunc_25_25hi_3000ep__::synapse0x221d990() {
   return (neuron0x231efc0()*2.0968);
}

double nnFunc_25_25hi_3000ep__::synapse0x23208b0() {
   return (neuron0x231f300()*-0.108037);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320c30() {
   return (neuron0x231e600()*-2.55286);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320c70() {
   return (neuron0x231e940()*-0.0874393);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320cb0() {
   return (neuron0x231ec80()*-2.52031);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320cf0() {
   return (neuron0x231efc0()*3.94016);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320d30() {
   return (neuron0x231f300()*-0.979673);
}

double nnFunc_25_25hi_3000ep__::synapse0x23210b0() {
   return (neuron0x231e600()*1.98873);
}

double nnFunc_25_25hi_3000ep__::synapse0x23210f0() {
   return (neuron0x231e940()*-0.63672);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321130() {
   return (neuron0x231ec80()*-0.912573);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321170() {
   return (neuron0x231efc0()*-1.26878);
}

double nnFunc_25_25hi_3000ep__::synapse0x23211b0() {
   return (neuron0x231f300()*-1.29559);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321530() {
   return (neuron0x231e600()*-2.84969);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321570() {
   return (neuron0x231e940()*1.04759);
}

double nnFunc_25_25hi_3000ep__::synapse0x23215b0() {
   return (neuron0x231ec80()*1.59056);
}

double nnFunc_25_25hi_3000ep__::synapse0x23207a0() {
   return (neuron0x231efc0()*0.687225);
}

double nnFunc_25_25hi_3000ep__::synapse0x23207e0() {
   return (neuron0x231f300()*1.35868);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321ab0() {
   return (neuron0x231e600()*2.59389);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321af0() {
   return (neuron0x231e940()*0.0183795);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321b30() {
   return (neuron0x231ec80()*1.71703);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321b70() {
   return (neuron0x231efc0()*-14.5586);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321bb0() {
   return (neuron0x231f300()*8.34441);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321f30() {
   return (neuron0x231e600()*1.82655);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321f70() {
   return (neuron0x231e940()*-0.668387);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321fb0() {
   return (neuron0x231ec80()*-0.678535);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321ff0() {
   return (neuron0x231efc0()*-0.431325);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322030() {
   return (neuron0x231f300()*-0.974907);
}

double nnFunc_25_25hi_3000ep__::synapse0x23223b0() {
   return (neuron0x231e600()*5.15269);
}

double nnFunc_25_25hi_3000ep__::synapse0x23223f0() {
   return (neuron0x231e940()*0.0102722);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322430() {
   return (neuron0x231ec80()*-2.83752);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322470() {
   return (neuron0x231efc0()*-11.1087);
}

double nnFunc_25_25hi_3000ep__::synapse0x23224b0() {
   return (neuron0x231f300()*-0.394416);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322830() {
   return (neuron0x231e600()*-0.532857);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322870() {
   return (neuron0x231e940()*-1.559);
}

double nnFunc_25_25hi_3000ep__::synapse0x23228b0() {
   return (neuron0x231ec80()*-2.11272);
}

double nnFunc_25_25hi_3000ep__::synapse0x23228f0() {
   return (neuron0x231efc0()*-7.69201);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322930() {
   return (neuron0x231f300()*-0.700995);
}

double nnFunc_25_25hi_3000ep__::synapse0x221d7a0() {
   return (neuron0x231e600()*0.00614892);
}

double nnFunc_25_25hi_3000ep__::synapse0x221d7e0() {
   return (neuron0x231e940()*0.000970346);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322dc0() {
   return (neuron0x231ec80()*0.00758149);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322e00() {
   return (neuron0x231efc0()*3.22648);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322e40() {
   return (neuron0x231f300()*-3.79389);
}

double nnFunc_25_25hi_3000ep__::synapse0x23231c0() {
   return (neuron0x231e600()*1.14428);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323200() {
   return (neuron0x231e940()*-0.661949);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323240() {
   return (neuron0x231ec80()*-0.825374);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323280() {
   return (neuron0x231efc0()*-3.54286);
}

double nnFunc_25_25hi_3000ep__::synapse0x23232c0() {
   return (neuron0x231f300()*-0.494908);
}

double nnFunc_25_25hi_3000ep__::synapse0x221df70() {
   return (neuron0x231e600()*1.53351);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321780() {
   return (neuron0x231e940()*0.0185186);
}

double nnFunc_25_25hi_3000ep__::synapse0x23217c0() {
   return (neuron0x231ec80()*-0.477083);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323710() {
   return (neuron0x231efc0()*-2.24954);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323750() {
   return (neuron0x231f300()*-0.209823);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323ad0() {
   return (neuron0x231e600()*2.36186);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323b10() {
   return (neuron0x231e940()*0.101947);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323b50() {
   return (neuron0x231ec80()*1.2997);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323b90() {
   return (neuron0x231efc0()*0.368242);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323bd0() {
   return (neuron0x231f300()*-0.665128);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323f50() {
   return (neuron0x231e600()*-1.10675);
}

double nnFunc_25_25hi_3000ep__::synapse0x231e820() {
   return (neuron0x231e940()*0.840565);
}

double nnFunc_25_25hi_3000ep__::synapse0x231e860() {
   return (neuron0x231ec80()*0.683667);
}

double nnFunc_25_25hi_3000ep__::synapse0x231eb60() {
   return (neuron0x231efc0()*5.466);
}

double nnFunc_25_25hi_3000ep__::synapse0x231eba0() {
   return (neuron0x231f300()*1.02714);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324670() {
   return (neuron0x231e600()*7.38682);
}

double nnFunc_25_25hi_3000ep__::synapse0x23246b0() {
   return (neuron0x231e940()*-0.0659122);
}

double nnFunc_25_25hi_3000ep__::synapse0x23246f0() {
   return (neuron0x231ec80()*3.2284);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324730() {
   return (neuron0x231efc0()*4.35127);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324770() {
   return (neuron0x231f300()*5.34155);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324af0() {
   return (neuron0x231e600()*0.100963);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324b30() {
   return (neuron0x231e940()*0.000504488);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324b70() {
   return (neuron0x231ec80()*0.00643708);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324bb0() {
   return (neuron0x231efc0()*-1.2154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324bf0() {
   return (neuron0x231f300()*-0.523312);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324f70() {
   return (neuron0x231e600()*4.91613);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324fb0() {
   return (neuron0x231e940()*-0.565772);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324ff0() {
   return (neuron0x231ec80()*-2.72649);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325030() {
   return (neuron0x231efc0()*-9.72631);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325070() {
   return (neuron0x231f300()*-0.345531);
}

double nnFunc_25_25hi_3000ep__::synapse0x23253f0() {
   return (neuron0x231e600()*2.36);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325430() {
   return (neuron0x231e940()*0.0309815);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325470() {
   return (neuron0x231ec80()*1.53839);
}

double nnFunc_25_25hi_3000ep__::synapse0x23254b0() {
   return (neuron0x231efc0()*-8.5789);
}

double nnFunc_25_25hi_3000ep__::synapse0x23254f0() {
   return (neuron0x231f300()*6.49458);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325870() {
   return (neuron0x231e600()*0.873756);
}

double nnFunc_25_25hi_3000ep__::synapse0x23258b0() {
   return (neuron0x231e940()*0.275859);
}

double nnFunc_25_25hi_3000ep__::synapse0x23258f0() {
   return (neuron0x231ec80()*-0.337581);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325930() {
   return (neuron0x231efc0()*10.4107);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325970() {
   return (neuron0x231f300()*-0.921858);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325cf0() {
   return (neuron0x231e600()*-0.208118);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325d30() {
   return (neuron0x231e940()*-0.000203209);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325d70() {
   return (neuron0x231ec80()*0.00227732);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325db0() {
   return (neuron0x231efc0()*-2.76722);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325df0() {
   return (neuron0x231f300()*0.63383);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326170() {
   return (neuron0x231e600()*1.53174);
}

double nnFunc_25_25hi_3000ep__::synapse0x23261b0() {
   return (neuron0x231e940()*-0.127608);
}

double nnFunc_25_25hi_3000ep__::synapse0x23261f0() {
   return (neuron0x231ec80()*-0.71823);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326230() {
   return (neuron0x231efc0()*-2.43891);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326270() {
   return (neuron0x231f300()*0.540112);
}

double nnFunc_25_25hi_3000ep__::synapse0x23265f0() {
   return (neuron0x231e600()*1.12528);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326630() {
   return (neuron0x231e940()*-0.289496);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326670() {
   return (neuron0x231ec80()*-0.982881);
}

double nnFunc_25_25hi_3000ep__::synapse0x23266b0() {
   return (neuron0x231efc0()*-0.624033);
}

double nnFunc_25_25hi_3000ep__::synapse0x23266f0() {
   return (neuron0x231f300()*-0.676457);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326a70() {
   return (neuron0x231e600()*0.113638);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326ab0() {
   return (neuron0x231e940()*0.031513);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326af0() {
   return (neuron0x231ec80()*-0.435016);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326b30() {
   return (neuron0x231efc0()*-24.2312);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326b70() {
   return (neuron0x231f300()*12.8701);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320690() {
   return (neuron0x231f770()*0.719315);
}

double nnFunc_25_25hi_3000ep__::synapse0x23206d0() {
   return (neuron0x231fae0()*-0.689228);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320ba0() {
   return (neuron0x231ff60()*-0.923287);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320be0() {
   return (neuron0x23203e0()*0.921462);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321020() {
   return (neuron0x23208f0()*0.328116);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321060() {
   return (neuron0x2320d70()*-0.626499);
}

double nnFunc_25_25hi_3000ep__::synapse0x23214a0() {
   return (neuron0x23211f0()*0.03869);
}

double nnFunc_25_25hi_3000ep__::synapse0x23214e0() {
   return (neuron0x2321800()*-2.77918);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321a20() {
   return (neuron0x2321bf0()*0.406806);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321a60() {
   return (neuron0x2322070()*-0.677723);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321ea0() {
   return (neuron0x23224f0()*1.7064);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321ee0() {
   return (neuron0x2322970()*-1.42685);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322320() {
   return (neuron0x2322e80()*-0.224649);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322360() {
   return (neuron0x23215f0()*0.234291);
}

double nnFunc_25_25hi_3000ep__::synapse0x23227a0() {
   return (neuron0x2323790()*0.449533);
}

double nnFunc_25_25hi_3000ep__::synapse0x23227e0() {
   return (neuron0x2323c10()*-0.482565);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322c20() {
   return (neuron0x23244e0()*-1.64603);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322c60() {
   return (neuron0x23247b0()*2.13888);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323130() {
   return (neuron0x2324c30()*1.78051);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323170() {
   return (neuron0x23250b0()*-2.59336);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323a40() {
   return (neuron0x2325530()*0.147047);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323a80() {
   return (neuron0x23259b0()*-0.321038);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323ec0() {
   return (neuron0x2325e30()*1.92551);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323f00() {
   return (neuron0x23262b0()*0.04891);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f520() {
   return (neuron0x2326730()*-4.02532);
}

double nnFunc_25_25hi_3000ep__::synapse0x23235a0() {
   return (neuron0x231f770()*0.24232);
}

double nnFunc_25_25hi_3000ep__::synapse0x23235e0() {
   return (neuron0x231fae0()*-1.71678);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323620() {
   return (neuron0x231ff60()*1.01764);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323660() {
   return (neuron0x23203e0()*0.630599);
}

double nnFunc_25_25hi_3000ep__::synapse0x23236a0() {
   return (neuron0x23208f0()*-0.404761);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f560() {
   return (neuron0x2320d70()*0.130209);
}

double nnFunc_25_25hi_3000ep__::synapse0x23257e0() {
   return (neuron0x23211f0()*0.081405);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325820() {
   return (neuron0x2321800()*1.85058);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325c60() {
   return (neuron0x2321bf0()*-0.448207);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325ca0() {
   return (neuron0x2322070()*-0.137966);
}

double nnFunc_25_25hi_3000ep__::synapse0x23260e0() {
   return (neuron0x23224f0()*2.32165);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326120() {
   return (neuron0x2322970()*0.142767);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326560() {
   return (neuron0x2322e80()*0.688286);
}

double nnFunc_25_25hi_3000ep__::synapse0x23265a0() {
   return (neuron0x23215f0()*0.724678);
}

double nnFunc_25_25hi_3000ep__::synapse0x23269e0() {
   return (neuron0x2323790()*0.320019);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326a20() {
   return (neuron0x2323c10()*-0.956222);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f990() {
   return (neuron0x23244e0()*-3.04769);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f9d0() {
   return (neuron0x23247b0()*2.46244);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324a60() {
   return (neuron0x2324c30()*3.20519);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324aa0() {
   return (neuron0x23250b0()*6.79108);
}

double nnFunc_25_25hi_3000ep__::synapse0x222b830() {
   return (neuron0x2325530()*-1.88033);
}

double nnFunc_25_25hi_3000ep__::synapse0x222b870() {
   return (neuron0x23259b0()*2.57346);
}

double nnFunc_25_25hi_3000ep__::synapse0x23290f0() {
   return (neuron0x2325e30()*2.13798);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329130() {
   return (neuron0x23262b0()*1.43827);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329170() {
   return (neuron0x2326730()*5.75277);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322cb0() {
   return (neuron0x231f770()*0.992303);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322cf0() {
   return (neuron0x231fae0()*0.0222703);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322d30() {
   return (neuron0x231ff60()*-0.51399);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322d70() {
   return (neuron0x23203e0()*1.06584);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329700() {
   return (neuron0x23208f0()*0.184147);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329740() {
   return (neuron0x2320d70()*-0.272422);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329780() {
   return (neuron0x23211f0()*0.613523);
}

double nnFunc_25_25hi_3000ep__::synapse0x23297c0() {
   return (neuron0x2321800()*1.2928);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329800() {
   return (neuron0x2321bf0()*-0.0309531);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329840() {
   return (neuron0x2322070()*-0.0259834);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329880() {
   return (neuron0x23224f0()*-0.165457);
}

double nnFunc_25_25hi_3000ep__::synapse0x23298c0() {
   return (neuron0x2322970()*-1.23803);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329900() {
   return (neuron0x2322e80()*0.187233);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329940() {
   return (neuron0x23215f0()*-0.46244);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329980() {
   return (neuron0x2323790()*-0.221335);
}

double nnFunc_25_25hi_3000ep__::synapse0x23299c0() {
   return (neuron0x2323c10()*0.0221173);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329340() {
   return (neuron0x23244e0()*-2.24548);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329380() {
   return (neuron0x23247b0()*-0.990866);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329b10() {
   return (neuron0x2324c30()*-0.158657);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329b50() {
   return (neuron0x23250b0()*0.215494);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329b90() {
   return (neuron0x2325530()*-0.726246);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329bd0() {
   return (neuron0x23259b0()*1.38855);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329c10() {
   return (neuron0x2325e30()*0.0260695);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329c50() {
   return (neuron0x23262b0()*0.243149);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329c90() {
   return (neuron0x2326730()*1.05143);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a010() {
   return (neuron0x231f770()*0.726917);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a050() {
   return (neuron0x231fae0()*1.52353);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a090() {
   return (neuron0x231ff60()*0.52213);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a0d0() {
   return (neuron0x23203e0()*-0.244578);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a110() {
   return (neuron0x23208f0()*0.246741);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a150() {
   return (neuron0x2320d70()*0.021128);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a190() {
   return (neuron0x23211f0()*0.286705);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a1d0() {
   return (neuron0x2321800()*-0.786267);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a210() {
   return (neuron0x2321bf0()*0.257435);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a250() {
   return (neuron0x2322070()*0.667765);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a290() {
   return (neuron0x23224f0()*-1.03931);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a2d0() {
   return (neuron0x2322970()*0.375535);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a310() {
   return (neuron0x2322e80()*-0.422208);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a350() {
   return (neuron0x23215f0()*-0.489812);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a390() {
   return (neuron0x2323790()*0.500587);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a3d0() {
   return (neuron0x2323c10()*1.88956);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329e60() {
   return (neuron0x23244e0()*1.04041);
}

double nnFunc_25_25hi_3000ep__::synapse0x2329ea0() {
   return (neuron0x23247b0()*-0.534948);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a520() {
   return (neuron0x2324c30()*-2.41553);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a560() {
   return (neuron0x23250b0()*0.428576);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a5a0() {
   return (neuron0x2325530()*0.357532);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a5e0() {
   return (neuron0x23259b0()*0.272548);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a620() {
   return (neuron0x2325e30()*-1.31725);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a660() {
   return (neuron0x23262b0()*0.0511128);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a6a0() {
   return (neuron0x2326730()*0.515346);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aa20() {
   return (neuron0x231f770()*0.0853716);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aa60() {
   return (neuron0x231fae0()*0.446078);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aaa0() {
   return (neuron0x231ff60()*0.882501);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aae0() {
   return (neuron0x23203e0()*0.324704);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ab20() {
   return (neuron0x23208f0()*0.0838813);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ab60() {
   return (neuron0x2320d70()*-0.543761);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aba0() {
   return (neuron0x23211f0()*0.105741);
}

double nnFunc_25_25hi_3000ep__::synapse0x232abe0() {
   return (neuron0x2321800()*-3.06884);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ac20() {
   return (neuron0x2321bf0()*0.36505);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ac60() {
   return (neuron0x2322070()*0.518914);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aca0() {
   return (neuron0x23224f0()*-0.484252);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ace0() {
   return (neuron0x2322970()*-0.96701);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ad20() {
   return (neuron0x2322e80()*-0.484365);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ad60() {
   return (neuron0x23215f0()*0.11889);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ada0() {
   return (neuron0x2323790()*-0.00757367);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ade0() {
   return (neuron0x2323c10()*0.742146);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a870() {
   return (neuron0x23244e0()*-2.60891);
}

double nnFunc_25_25hi_3000ep__::synapse0x232a8b0() {
   return (neuron0x23247b0()*-0.0944884);
}

double nnFunc_25_25hi_3000ep__::synapse0x232af30() {
   return (neuron0x2324c30()*-0.180856);
}

double nnFunc_25_25hi_3000ep__::synapse0x232af70() {
   return (neuron0x23250b0()*1.2982);
}

double nnFunc_25_25hi_3000ep__::synapse0x232afb0() {
   return (neuron0x2325530()*0.506053);
}

double nnFunc_25_25hi_3000ep__::synapse0x232aff0() {
   return (neuron0x23259b0()*1.43832);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b030() {
   return (neuron0x2325e30()*1.27542);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b070() {
   return (neuron0x23262b0()*0.000166669);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b0b0() {
   return (neuron0x2326730()*3.37851);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b430() {
   return (neuron0x231f770()*0.0617244);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b470() {
   return (neuron0x231fae0()*0.236705);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b4b0() {
   return (neuron0x231ff60()*-0.396845);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b4f0() {
   return (neuron0x23203e0()*0.328881);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b530() {
   return (neuron0x23208f0()*0.522878);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b570() {
   return (neuron0x2320d70()*-0.319048);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b5b0() {
   return (neuron0x23211f0()*0.0715578);
}

double nnFunc_25_25hi_3000ep__::synapse0x23287d0() {
   return (neuron0x2321800()*-0.145114);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328810() {
   return (neuron0x2321bf0()*-0.0179225);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328850() {
   return (neuron0x2322070()*0.0846583);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328890() {
   return (neuron0x23224f0()*-0.221673);
}

double nnFunc_25_25hi_3000ep__::synapse0x23288d0() {
   return (neuron0x2322970()*2.22961);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328910() {
   return (neuron0x2322e80()*0.309124);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328950() {
   return (neuron0x23215f0()*-0.214914);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328990() {
   return (neuron0x2323790()*-0.106534);
}

double nnFunc_25_25hi_3000ep__::synapse0x23289d0() {
   return (neuron0x2323c10()*-0.289415);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b280() {
   return (neuron0x23244e0()*0.143698);
}

double nnFunc_25_25hi_3000ep__::synapse0x232b2c0() {
   return (neuron0x23247b0()*-0.237241);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328b20() {
   return (neuron0x2324c30()*0.238833);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328b60() {
   return (neuron0x23250b0()*-1.07441);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328ba0() {
   return (neuron0x2325530()*1.76557);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328be0() {
   return (neuron0x23259b0()*-2.39564);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328c20() {
   return (neuron0x2325e30()*-0.929616);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328c60() {
   return (neuron0x23262b0()*-0.137832);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328ca0() {
   return (neuron0x2326730()*-2.91727);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328f90() {
   return (neuron0x231f770()*1.49203);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c690() {
   return (neuron0x231fae0()*0.504191);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c6d0() {
   return (neuron0x231ff60()*-0.465225);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c710() {
   return (neuron0x23203e0()*0.829877);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c750() {
   return (neuron0x23208f0()*0.44131);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c790() {
   return (neuron0x2320d70()*0.488431);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c7d0() {
   return (neuron0x23211f0()*0.671648);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c810() {
   return (neuron0x2321800()*0.456378);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c850() {
   return (neuron0x2321bf0()*-0.282987);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c890() {
   return (neuron0x2322070()*-0.342319);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c8d0() {
   return (neuron0x23224f0()*0.174933);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c910() {
   return (neuron0x2322970()*0.721477);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c950() {
   return (neuron0x2322e80()*0.456549);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c990() {
   return (neuron0x23215f0()*0.320328);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c9d0() {
   return (neuron0x2323790()*1.09541);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ca10() {
   return (neuron0x2323c10()*1.13688);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328e70() {
   return (neuron0x23244e0()*0.42171);
}

double nnFunc_25_25hi_3000ep__::synapse0x2328eb0() {
   return (neuron0x23247b0()*0.554022);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cb60() {
   return (neuron0x2324c30()*0.40522);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cba0() {
   return (neuron0x23250b0()*-1.28408);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cbe0() {
   return (neuron0x2325530()*0.470895);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cc20() {
   return (neuron0x23259b0()*0.971167);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cc60() {
   return (neuron0x2325e30()*-0.93722);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cca0() {
   return (neuron0x23262b0()*1.17316);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cce0() {
   return (neuron0x2326730()*2.3667);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d060() {
   return (neuron0x231f770()*0.492728);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d0a0() {
   return (neuron0x231fae0()*2.9579);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d0e0() {
   return (neuron0x231ff60()*1.30842);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d120() {
   return (neuron0x23203e0()*-0.299604);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d160() {
   return (neuron0x23208f0()*0.359629);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d1a0() {
   return (neuron0x2320d70()*-0.215888);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d1e0() {
   return (neuron0x23211f0()*1.08155);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d220() {
   return (neuron0x2321800()*-0.492264);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d260() {
   return (neuron0x2321bf0()*0.264579);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d2a0() {
   return (neuron0x2322070()*0.853999);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d2e0() {
   return (neuron0x23224f0()*-2.51198);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d320() {
   return (neuron0x2322970()*-0.181625);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d360() {
   return (neuron0x2322e80()*-0.322949);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d3a0() {
   return (neuron0x23215f0()*-0.446605);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d3e0() {
   return (neuron0x2323790()*0.111109);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d420() {
   return (neuron0x2323c10()*2.82235);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ceb0() {
   return (neuron0x23244e0()*1.76793);
}

double nnFunc_25_25hi_3000ep__::synapse0x232cef0() {
   return (neuron0x23247b0()*-2.03789);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d570() {
   return (neuron0x2324c30()*-3.03404);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d5b0() {
   return (neuron0x23250b0()*0.738945);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d5f0() {
   return (neuron0x2325530()*1.11703);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d630() {
   return (neuron0x23259b0()*0.474831);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d670() {
   return (neuron0x2325e30()*-0.492068);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d6b0() {
   return (neuron0x23262b0()*-0.892384);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d6f0() {
   return (neuron0x2326730()*0.876292);
}

double nnFunc_25_25hi_3000ep__::synapse0x232da70() {
   return (neuron0x231f770()*-0.773819);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dab0() {
   return (neuron0x231fae0()*-1.72757);
}

double nnFunc_25_25hi_3000ep__::synapse0x232daf0() {
   return (neuron0x231ff60()*-0.775711);
}

double nnFunc_25_25hi_3000ep__::synapse0x232db30() {
   return (neuron0x23203e0()*-0.701827);
}

double nnFunc_25_25hi_3000ep__::synapse0x232db70() {
   return (neuron0x23208f0()*-0.830916);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dbb0() {
   return (neuron0x2320d70()*-0.271863);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dbf0() {
   return (neuron0x23211f0()*-0.531374);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dc30() {
   return (neuron0x2321800()*0.207092);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dc70() {
   return (neuron0x2321bf0()*-0.351276);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dcb0() {
   return (neuron0x2322070()*-0.407905);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dcf0() {
   return (neuron0x23224f0()*1.15195);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dd30() {
   return (neuron0x2322970()*-0.311005);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dd70() {
   return (neuron0x2322e80()*0.374277);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ddb0() {
   return (neuron0x23215f0()*0.279533);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ddf0() {
   return (neuron0x2323790()*0.147434);
}

double nnFunc_25_25hi_3000ep__::synapse0x232de30() {
   return (neuron0x2323c10()*-1.34849);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d8c0() {
   return (neuron0x23244e0()*-0.221255);
}

double nnFunc_25_25hi_3000ep__::synapse0x232d900() {
   return (neuron0x23247b0()*0.814528);
}

double nnFunc_25_25hi_3000ep__::synapse0x232df80() {
   return (neuron0x2324c30()*1.29201);
}

double nnFunc_25_25hi_3000ep__::synapse0x232dfc0() {
   return (neuron0x23250b0()*-1.30085);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e000() {
   return (neuron0x2325530()*-1.06918);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e040() {
   return (neuron0x23259b0()*-0.575416);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e080() {
   return (neuron0x2325e30()*0.496872);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e0c0() {
   return (neuron0x23262b0()*-0.305279);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e100() {
   return (neuron0x2326730()*-0.651273);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e480() {
   return (neuron0x231f770()*0.523544);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e4c0() {
   return (neuron0x231fae0()*0.584555);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e500() {
   return (neuron0x231ff60()*0.660291);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e540() {
   return (neuron0x23203e0()*0.536923);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e580() {
   return (neuron0x23208f0()*-0.0773303);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e5c0() {
   return (neuron0x2320d70()*0.00745776);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e600() {
   return (neuron0x23211f0()*0.0326693);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e640() {
   return (neuron0x2321800()*-1.04314);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e680() {
   return (neuron0x2321bf0()*-0.0961016);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e6c0() {
   return (neuron0x2322070()*0.389942);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e700() {
   return (neuron0x23224f0()*-0.112383);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e740() {
   return (neuron0x2322970()*-0.0841264);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e780() {
   return (neuron0x2322e80()*-0.290608);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e7c0() {
   return (neuron0x23215f0()*0.108468);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e800() {
   return (neuron0x2323790()*0.720778);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e840() {
   return (neuron0x2323c10()*-0.0892131);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e2d0() {
   return (neuron0x23244e0()*0.586502);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e310() {
   return (neuron0x23247b0()*0.442417);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e990() {
   return (neuron0x2324c30()*-0.0509044);
}

double nnFunc_25_25hi_3000ep__::synapse0x232e9d0() {
   return (neuron0x23250b0()*0.545128);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ea10() {
   return (neuron0x2325530()*-1.03109);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ea50() {
   return (neuron0x23259b0()*0.379037);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ea90() {
   return (neuron0x2325e30()*0.335161);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ead0() {
   return (neuron0x23262b0()*0.39457);
}

double nnFunc_25_25hi_3000ep__::synapse0x232eb10() {
   return (neuron0x2326730()*2.24511);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ee90() {
   return (neuron0x231f770()*1.22632);
}

double nnFunc_25_25hi_3000ep__::synapse0x232eed0() {
   return (neuron0x231fae0()*1.07415);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ef10() {
   return (neuron0x231ff60()*0.367705);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ef50() {
   return (neuron0x23203e0()*0.79842);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ef90() {
   return (neuron0x23208f0()*-0.0163163);
}

double nnFunc_25_25hi_3000ep__::synapse0x232efd0() {
   return (neuron0x2320d70()*0.375234);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f010() {
   return (neuron0x23211f0()*0.55705);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f050() {
   return (neuron0x2321800()*0.606942);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f090() {
   return (neuron0x2321bf0()*-0.103013);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f0d0() {
   return (neuron0x2322070()*0.477543);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f110() {
   return (neuron0x23224f0()*-0.0807773);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f150() {
   return (neuron0x2322970()*0.911589);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f190() {
   return (neuron0x2322e80()*0.0816995);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f1d0() {
   return (neuron0x23215f0()*0.073854);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f210() {
   return (neuron0x2323790()*0.875113);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f250() {
   return (neuron0x2323c10()*0.916526);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ece0() {
   return (neuron0x23244e0()*0.964206);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ed20() {
   return (neuron0x23247b0()*0.139697);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f3a0() {
   return (neuron0x2324c30()*0.0664935);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f3e0() {
   return (neuron0x23250b0()*-0.25418);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f420() {
   return (neuron0x2325530()*0.273458);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f460() {
   return (neuron0x23259b0()*0.62216);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f4a0() {
   return (neuron0x2325e30()*-0.383772);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f4e0() {
   return (neuron0x23262b0()*0.709674);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f520() {
   return (neuron0x2326730()*1.18555);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f8a0() {
   return (neuron0x231f770()*-1.0294);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f8e0() {
   return (neuron0x231fae0()*0.54281);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f920() {
   return (neuron0x231ff60()*0.472597);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f960() {
   return (neuron0x23203e0()*-0.82906);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f9a0() {
   return (neuron0x23208f0()*-1.19802);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f9e0() {
   return (neuron0x2320d70()*0.0390474);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fa20() {
   return (neuron0x23211f0()*-0.549585);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fa60() {
   return (neuron0x2321800()*-1.22262);
}

double nnFunc_25_25hi_3000ep__::synapse0x232faa0() {
   return (neuron0x2321bf0()*-0.215769);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fae0() {
   return (neuron0x2322070()*0.952262);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fb20() {
   return (neuron0x23224f0()*-0.997002);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fb60() {
   return (neuron0x2322970()*-0.563817);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fba0() {
   return (neuron0x2322e80()*-0.322241);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fbe0() {
   return (neuron0x23215f0()*0.0279274);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fc20() {
   return (neuron0x2323790()*-0.190199);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fc60() {
   return (neuron0x2323c10()*-0.0141872);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f6f0() {
   return (neuron0x23244e0()*0.537864);
}

double nnFunc_25_25hi_3000ep__::synapse0x232f730() {
   return (neuron0x23247b0()*-1.24084);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fdb0() {
   return (neuron0x2324c30()*-1.85923);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fdf0() {
   return (neuron0x23250b0()*-0.251309);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fe30() {
   return (neuron0x2325530()*0.449465);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fe70() {
   return (neuron0x23259b0()*-0.632187);
}

double nnFunc_25_25hi_3000ep__::synapse0x232feb0() {
   return (neuron0x2325e30()*-0.779484);
}

double nnFunc_25_25hi_3000ep__::synapse0x232fef0() {
   return (neuron0x23262b0()*-0.645323);
}

double nnFunc_25_25hi_3000ep__::synapse0x232ff30() {
   return (neuron0x2326730()*-1.16762);
}

double nnFunc_25_25hi_3000ep__::synapse0x23302b0() {
   return (neuron0x231f770()*-0.44876);
}

double nnFunc_25_25hi_3000ep__::synapse0x23302f0() {
   return (neuron0x231fae0()*-1.30117);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330330() {
   return (neuron0x231ff60()*-0.266062);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330370() {
   return (neuron0x23203e0()*-0.397905);
}

double nnFunc_25_25hi_3000ep__::synapse0x23303b0() {
   return (neuron0x23208f0()*0.157622);
}

double nnFunc_25_25hi_3000ep__::synapse0x23303f0() {
   return (neuron0x2320d70()*-0.186154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330430() {
   return (neuron0x23211f0()*-0.50147);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330470() {
   return (neuron0x2321800()*0.462777);
}

double nnFunc_25_25hi_3000ep__::synapse0x23304b0() {
   return (neuron0x2321bf0()*-0.437062);
}

double nnFunc_25_25hi_3000ep__::synapse0x23304f0() {
   return (neuron0x2322070()*-0.416294);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330530() {
   return (neuron0x23224f0()*1.2587);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330570() {
   return (neuron0x2322970()*-1.25419);
}

double nnFunc_25_25hi_3000ep__::synapse0x23305b0() {
   return (neuron0x2322e80()*-0.587393);
}

double nnFunc_25_25hi_3000ep__::synapse0x23305f0() {
   return (neuron0x23215f0()*0.205219);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330630() {
   return (neuron0x2323790()*-1.1482);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330670() {
   return (neuron0x2323c10()*-0.895409);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330100() {
   return (neuron0x23244e0()*-0.618684);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330140() {
   return (neuron0x23247b0()*0.64044);
}

double nnFunc_25_25hi_3000ep__::synapse0x23307c0() {
   return (neuron0x2324c30()*1.50364);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330800() {
   return (neuron0x23250b0()*0.124262);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330840() {
   return (neuron0x2325530()*-0.707385);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330880() {
   return (neuron0x23259b0()*-0.922448);
}

double nnFunc_25_25hi_3000ep__::synapse0x23308c0() {
   return (neuron0x2325e30()*0.525875);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330900() {
   return (neuron0x23262b0()*-0.230523);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330940() {
   return (neuron0x2326730()*-1.47502);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330cc0() {
   return (neuron0x231f770()*-0.819995);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330d00() {
   return (neuron0x231fae0()*-0.518209);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330d40() {
   return (neuron0x231ff60()*0.470849);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330d80() {
   return (neuron0x23203e0()*-1.30087);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330dc0() {
   return (neuron0x23208f0()*-0.623672);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330e00() {
   return (neuron0x2320d70()*-0.294118);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330e40() {
   return (neuron0x23211f0()*-0.688904);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330e80() {
   return (neuron0x2321800()*-1.10426);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330ec0() {
   return (neuron0x2321bf0()*0.248739);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330f00() {
   return (neuron0x2322070()*0.547669);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330f40() {
   return (neuron0x23224f0()*-0.751433);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330f80() {
   return (neuron0x2322970()*-0.165062);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330fc0() {
   return (neuron0x2322e80()*-0.298306);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331000() {
   return (neuron0x23215f0()*0.302216);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331040() {
   return (neuron0x2323790()*0.397504);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331080() {
   return (neuron0x2323c10()*0.1661);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330b10() {
   return (neuron0x23244e0()*-0.889262);
}

double nnFunc_25_25hi_3000ep__::synapse0x2330b50() {
   return (neuron0x23247b0()*-1.66976);
}

double nnFunc_25_25hi_3000ep__::synapse0x23311d0() {
   return (neuron0x2324c30()*-1.57485);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331210() {
   return (neuron0x23250b0()*-0.387964);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331250() {
   return (neuron0x2325530()*0.357807);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331290() {
   return (neuron0x23259b0()*-1.25005);
}

double nnFunc_25_25hi_3000ep__::synapse0x23312d0() {
   return (neuron0x2325e30()*-0.267509);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331310() {
   return (neuron0x23262b0()*0.277595);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331350() {
   return (neuron0x2326730()*-2.50116);
}

double nnFunc_25_25hi_3000ep__::synapse0x23316d0() {
   return (neuron0x231f770()*-1.03315);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331710() {
   return (neuron0x231fae0()*-1.94325);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331750() {
   return (neuron0x231ff60()*-1.12866);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331790() {
   return (neuron0x23203e0()*0.158452);
}

double nnFunc_25_25hi_3000ep__::synapse0x23317d0() {
   return (neuron0x23208f0()*0.757387);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331810() {
   return (neuron0x2320d70()*-0.497958);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331850() {
   return (neuron0x23211f0()*-0.7502);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331890() {
   return (neuron0x2321800()*0.295136);
}

double nnFunc_25_25hi_3000ep__::synapse0x23318d0() {
   return (neuron0x2321bf0()*0.202697);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331910() {
   return (neuron0x2322070()*-0.513697);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331950() {
   return (neuron0x23224f0()*1.98247);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331990() {
   return (neuron0x2322970()*-0.762701);
}

double nnFunc_25_25hi_3000ep__::synapse0x23319d0() {
   return (neuron0x2322e80()*-0.137263);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331a10() {
   return (neuron0x23215f0()*-0.391825);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331a50() {
   return (neuron0x2323790()*-1.08926);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331a90() {
   return (neuron0x2323c10()*-1.93463);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331520() {
   return (neuron0x23244e0()*-0.774016);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331560() {
   return (neuron0x23247b0()*1.06967);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331be0() {
   return (neuron0x2324c30()*1.91149);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331c20() {
   return (neuron0x23250b0()*0.200924);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331c60() {
   return (neuron0x2325530()*-0.0342577);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331ca0() {
   return (neuron0x23259b0()*-1.16641);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331ce0() {
   return (neuron0x2325e30()*1.34651);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331d20() {
   return (neuron0x23262b0()*-0.334756);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331d60() {
   return (neuron0x2326730()*-2.33461);
}

double nnFunc_25_25hi_3000ep__::synapse0x23320e0() {
   return (neuron0x231f770()*1.08158);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f900() {
   return (neuron0x231fae0()*1.15884);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f940() {
   return (neuron0x231ff60()*-0.324695);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fd00() {
   return (neuron0x23203e0()*0.0848512);
}

double nnFunc_25_25hi_3000ep__::synapse0x231fd40() {
   return (neuron0x23208f0()*0.507562);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320180() {
   return (neuron0x2320d70()*-0.0527677);
}

double nnFunc_25_25hi_3000ep__::synapse0x23201c0() {
   return (neuron0x23211f0()*0.914919);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320600() {
   return (neuron0x2321800()*-0.439879);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320640() {
   return (neuron0x2321bf0()*0.230638);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320b10() {
   return (neuron0x2322070()*0.16498);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320b50() {
   return (neuron0x23224f0()*-0.354842);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320f90() {
   return (neuron0x2322970()*0.57325);
}

double nnFunc_25_25hi_3000ep__::synapse0x2320fd0() {
   return (neuron0x2322e80()*-0.17081);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321410() {
   return (neuron0x23215f0()*-0.228266);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321450() {
   return (neuron0x2323790()*0.52607);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321990() {
   return (neuron0x2323c10()*1.19393);
}

double nnFunc_25_25hi_3000ep__::synapse0x23219d0() {
   return (neuron0x23244e0()*1.15616);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321e10() {
   return (neuron0x23247b0()*-0.402259);
}

double nnFunc_25_25hi_3000ep__::synapse0x2321e50() {
   return (neuron0x2324c30()*-0.539151);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322290() {
   return (neuron0x23250b0()*-0.430673);
}

double nnFunc_25_25hi_3000ep__::synapse0x23222d0() {
   return (neuron0x2325530()*0.485353);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322710() {
   return (neuron0x23259b0()*0.841119);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322750() {
   return (neuron0x2325e30()*-1.05436);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322b90() {
   return (neuron0x23262b0()*0.105681);
}

double nnFunc_25_25hi_3000ep__::synapse0x2322bd0() {
   return (neuron0x2326730()*1.47203);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c550() {
   return (neuron0x231f770()*0.629962);
}

double nnFunc_25_25hi_3000ep__::synapse0x232c590() {
   return (neuron0x231fae0()*2.46611);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323e30() {
   return (neuron0x231ff60()*1.10861);
}

double nnFunc_25_25hi_3000ep__::synapse0x2323e70() {
   return (neuron0x23203e0()*-1.01621);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331f30() {
   return (neuron0x23208f0()*0.0821812);
}

double nnFunc_25_25hi_3000ep__::synapse0x2331f70() {
   return (neuron0x2320d70()*0.788624);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f1e0() {
   return (neuron0x23211f0()*0.905275);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f220() {
   return (neuron0x2321800()*-0.271346);
}

double nnFunc_25_25hi_3000ep__::synapse0x23249d0() {
   return (neuron0x2321bf0()*0.400226);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324a10() {
   return (neuron0x2322070()*1.3113);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324e50() {
   return (neuron0x23224f0()*-2.89267);
}

double nnFunc_25_25hi_3000ep__::synapse0x2324e90() {
   return (neuron0x2322970()*1.05779);
}

double nnFunc_25_25hi_3000ep__::synapse0x23252d0() {
   return (neuron0x2322e80()*-0.161757);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325310() {
   return (neuron0x23215f0()*-0.376317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325750() {
   return (neuron0x2323790()*0.466863);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325790() {
   return (neuron0x2323c10()*2.58153);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325bd0() {
   return (neuron0x23244e0()*2.42659);
}

double nnFunc_25_25hi_3000ep__::synapse0x2325c10() {
   return (neuron0x23247b0()*-1.72964);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326050() {
   return (neuron0x2324c30()*-3.01247);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326090() {
   return (neuron0x23250b0()*0.794807);
}

double nnFunc_25_25hi_3000ep__::synapse0x23264d0() {
   return (neuron0x2325530()*-0.0466181);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326510() {
   return (neuron0x23259b0()*1.25006);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326950() {
   return (neuron0x2325e30()*-2.67234);
}

double nnFunc_25_25hi_3000ep__::synapse0x2326990() {
   return (neuron0x23262b0()*-0.161314);
}

double nnFunc_25_25hi_3000ep__::synapse0x23230a0() {
   return (neuron0x2326730()*1.71706);
}

double nnFunc_25_25hi_3000ep__::synapse0x23230e0() {
   return (neuron0x231f770()*-0.221019);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335350() {
   return (neuron0x231fae0()*-0.367934);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335390() {
   return (neuron0x231ff60()*-1.93059);
}

double nnFunc_25_25hi_3000ep__::synapse0x23353d0() {
   return (neuron0x23203e0()*1.47533);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335410() {
   return (neuron0x23208f0()*4.40236);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335450() {
   return (neuron0x2320d70()*-2.04729);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335490() {
   return (neuron0x23211f0()*1.8827);
}

double nnFunc_25_25hi_3000ep__::synapse0x23354d0() {
   return (neuron0x2321800()*-12.4341);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335510() {
   return (neuron0x2321bf0()*-0.525303);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335550() {
   return (neuron0x2322070()*-0.66832);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335590() {
   return (neuron0x23224f0()*0.827334);
}

double nnFunc_25_25hi_3000ep__::synapse0x23355d0() {
   return (neuron0x2322970()*1.08061);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335610() {
   return (neuron0x2322e80()*-2.06273);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335650() {
   return (neuron0x23215f0()*-0.0344619);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335690() {
   return (neuron0x2323790()*-1.45278);
}

double nnFunc_25_25hi_3000ep__::synapse0x23356d0() {
   return (neuron0x2323c10()*-0.999794);
}

double nnFunc_25_25hi_3000ep__::synapse0x23351a0() {
   return (neuron0x23244e0()*-12.1545);
}

double nnFunc_25_25hi_3000ep__::synapse0x23351e0() {
   return (neuron0x23247b0()*-2.31578);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335820() {
   return (neuron0x2324c30()*1.62111);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335860() {
   return (neuron0x23250b0()*4.20751);
}

double nnFunc_25_25hi_3000ep__::synapse0x23358a0() {
   return (neuron0x2325530()*10.4965);
}

double nnFunc_25_25hi_3000ep__::synapse0x23358e0() {
   return (neuron0x23259b0()*0.606233);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335920() {
   return (neuron0x2325e30()*0.781486);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335960() {
   return (neuron0x23262b0()*1.34782);
}

double nnFunc_25_25hi_3000ep__::synapse0x23359a0() {
   return (neuron0x2326730()*-23.0406);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335d20() {
   return (neuron0x231f770()*-0.136806);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335d60() {
   return (neuron0x231fae0()*-1.14487);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335da0() {
   return (neuron0x231ff60()*-0.575894);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335de0() {
   return (neuron0x23203e0()*0.220499);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335e20() {
   return (neuron0x23208f0()*-0.0564696);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335e60() {
   return (neuron0x2320d70()*-0.414513);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335ea0() {
   return (neuron0x23211f0()*-0.882331);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335ee0() {
   return (neuron0x2321800()*-0.0806067);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335f20() {
   return (neuron0x2321bf0()*0.00947163);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335f60() {
   return (neuron0x2322070()*-0.0318943);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335fa0() {
   return (neuron0x23224f0()*0.548692);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335fe0() {
   return (neuron0x2322970()*-0.346633);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336020() {
   return (neuron0x2322e80()*0.237566);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336060() {
   return (neuron0x23215f0()*0.221709);
}

double nnFunc_25_25hi_3000ep__::synapse0x23360a0() {
   return (neuron0x2323790()*-0.196756);
}

double nnFunc_25_25hi_3000ep__::synapse0x23360e0() {
   return (neuron0x2323c10()*-1.26398);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335b70() {
   return (neuron0x23244e0()*-1.02893);
}

double nnFunc_25_25hi_3000ep__::synapse0x2335bb0() {
   return (neuron0x23247b0()*0.965977);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336230() {
   return (neuron0x2324c30()*1.32846);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336270() {
   return (neuron0x23250b0()*-0.275746);
}

double nnFunc_25_25hi_3000ep__::synapse0x23362b0() {
   return (neuron0x2325530()*-0.795721);
}

double nnFunc_25_25hi_3000ep__::synapse0x23362f0() {
   return (neuron0x23259b0()*-0.427459);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336330() {
   return (neuron0x2325e30()*0.718184);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336370() {
   return (neuron0x23262b0()*-0.277212);
}

double nnFunc_25_25hi_3000ep__::synapse0x23363b0() {
   return (neuron0x2326730()*-0.716726);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336730() {
   return (neuron0x231f770()*0.57443);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336770() {
   return (neuron0x231fae0()*0.668247);
}

double nnFunc_25_25hi_3000ep__::synapse0x23367b0() {
   return (neuron0x231ff60()*0.0589223);
}

double nnFunc_25_25hi_3000ep__::synapse0x23367f0() {
   return (neuron0x23203e0()*1.51797);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336830() {
   return (neuron0x23208f0()*1.23482);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336870() {
   return (neuron0x2320d70()*-0.107988);
}

double nnFunc_25_25hi_3000ep__::synapse0x23368b0() {
   return (neuron0x23211f0()*1.44236);
}

double nnFunc_25_25hi_3000ep__::synapse0x23368f0() {
   return (neuron0x2321800()*0.888038);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336930() {
   return (neuron0x2321bf0()*-0.473362);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336970() {
   return (neuron0x2322070()*-0.733241);
}

double nnFunc_25_25hi_3000ep__::synapse0x23369b0() {
   return (neuron0x23224f0()*0.976223);
}

double nnFunc_25_25hi_3000ep__::synapse0x23369f0() {
   return (neuron0x2322970()*-1.39517);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336a30() {
   return (neuron0x2322e80()*-0.126194);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336a70() {
   return (neuron0x23215f0()*0.220203);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336ab0() {
   return (neuron0x2323790()*-0.573942);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336af0() {
   return (neuron0x2323c10()*0.297615);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336580() {
   return (neuron0x23244e0()*0.492429);
}

double nnFunc_25_25hi_3000ep__::synapse0x23365c0() {
   return (neuron0x23247b0()*0.866429);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336c40() {
   return (neuron0x2324c30()*0.701705);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336c80() {
   return (neuron0x23250b0()*0.752443);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336cc0() {
   return (neuron0x2325530()*0.876796);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336d00() {
   return (neuron0x23259b0()*1.21784);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336d40() {
   return (neuron0x2325e30()*1.29993);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336d80() {
   return (neuron0x23262b0()*-0.113127);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336dc0() {
   return (neuron0x2326730()*-0.962301);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337140() {
   return (neuron0x231f770()*0.207884);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337180() {
   return (neuron0x231fae0()*1.45093);
}

double nnFunc_25_25hi_3000ep__::synapse0x23371c0() {
   return (neuron0x231ff60()*0.0839725);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337200() {
   return (neuron0x23203e0()*0.273157);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337240() {
   return (neuron0x23208f0()*0.132353);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337280() {
   return (neuron0x2320d70()*0.776847);
}

double nnFunc_25_25hi_3000ep__::synapse0x23372c0() {
   return (neuron0x23211f0()*0.629496);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337300() {
   return (neuron0x2321800()*-0.0912154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337340() {
   return (neuron0x2321bf0()*0.267936);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337380() {
   return (neuron0x2322070()*0.150185);
}

double nnFunc_25_25hi_3000ep__::synapse0x23373c0() {
   return (neuron0x23224f0()*-0.548807);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337400() {
   return (neuron0x2322970()*0.648263);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337440() {
   return (neuron0x2322e80()*0.855296);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337480() {
   return (neuron0x23215f0()*0.256599);
}

double nnFunc_25_25hi_3000ep__::synapse0x23374c0() {
   return (neuron0x2323790()*0.799447);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337500() {
   return (neuron0x2323c10()*1.34657);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336f90() {
   return (neuron0x23244e0()*0.820767);
}

double nnFunc_25_25hi_3000ep__::synapse0x2336fd0() {
   return (neuron0x23247b0()*-0.257517);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337650() {
   return (neuron0x2324c30()*-1.23523);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337690() {
   return (neuron0x23250b0()*-0.34048);
}

double nnFunc_25_25hi_3000ep__::synapse0x23376d0() {
   return (neuron0x2325530()*0.327727);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337710() {
   return (neuron0x23259b0()*0.63057);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337750() {
   return (neuron0x2325e30()*-0.396916);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337790() {
   return (neuron0x23262b0()*-0.167823);
}

double nnFunc_25_25hi_3000ep__::synapse0x23377d0() {
   return (neuron0x2326730()*1.44387);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337b50() {
   return (neuron0x231f770()*-0.691778);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337b90() {
   return (neuron0x231fae0()*-0.403739);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337bd0() {
   return (neuron0x231ff60()*1.06379);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337c10() {
   return (neuron0x23203e0()*-0.325817);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337c50() {
   return (neuron0x23208f0()*1.69173);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337c90() {
   return (neuron0x2320d70()*-0.539799);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337cd0() {
   return (neuron0x23211f0()*-0.709131);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337d10() {
   return (neuron0x2321800()*13.4336);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337d50() {
   return (neuron0x2321bf0()*-0.310362);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337d90() {
   return (neuron0x2322070()*-0.376096);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337dd0() {
   return (neuron0x23224f0()*0.817244);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337e10() {
   return (neuron0x2322970()*-9.45476);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337e50() {
   return (neuron0x2322e80()*-0.68631);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337e90() {
   return (neuron0x23215f0()*0.782977);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337ed0() {
   return (neuron0x2323790()*-1.57124);
}

double nnFunc_25_25hi_3000ep__::synapse0x2337f10() {
   return (neuron0x2323c10()*-0.624174);
}

double nnFunc_25_25hi_3000ep__::synapse0x23379a0() {
   return (neuron0x23244e0()*14.1849);
}

double nnFunc_25_25hi_3000ep__::synapse0x23379e0() {
   return (neuron0x23247b0()*4.54512);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338060() {
   return (neuron0x2324c30()*1.25794);
}

double nnFunc_25_25hi_3000ep__::synapse0x23380a0() {
   return (neuron0x23250b0()*-0.64606);
}

double nnFunc_25_25hi_3000ep__::synapse0x23380e0() {
   return (neuron0x2325530()*-11.7937);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338120() {
   return (neuron0x23259b0()*1.18257);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338160() {
   return (neuron0x2325e30()*2.5466);
}

double nnFunc_25_25hi_3000ep__::synapse0x23381a0() {
   return (neuron0x23262b0()*-0.115211);
}

double nnFunc_25_25hi_3000ep__::synapse0x23381e0() {
   return (neuron0x2326730()*25.9003);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338560() {
   return (neuron0x231f770()*1.86233);
}

double nnFunc_25_25hi_3000ep__::synapse0x23385a0() {
   return (neuron0x231fae0()*-1.14725);
}

double nnFunc_25_25hi_3000ep__::synapse0x23385e0() {
   return (neuron0x231ff60()*4.07876);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338620() {
   return (neuron0x23203e0()*2.30375);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338660() {
   return (neuron0x23208f0()*0.83344);
}

double nnFunc_25_25hi_3000ep__::synapse0x23386a0() {
   return (neuron0x2320d70()*-0.855606);
}

double nnFunc_25_25hi_3000ep__::synapse0x23386e0() {
   return (neuron0x23211f0()*0.905527);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338720() {
   return (neuron0x2321800()*1.61832);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338760() {
   return (neuron0x2321bf0()*0.455235);
}

double nnFunc_25_25hi_3000ep__::synapse0x23387a0() {
   return (neuron0x2322070()*-0.412874);
}

double nnFunc_25_25hi_3000ep__::synapse0x23387e0() {
   return (neuron0x23224f0()*4.3154);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338820() {
   return (neuron0x2322970()*-7.09282);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338860() {
   return (neuron0x2322e80()*-0.404795);
}

double nnFunc_25_25hi_3000ep__::synapse0x23388a0() {
   return (neuron0x23215f0()*2.37598);
}

double nnFunc_25_25hi_3000ep__::synapse0x23388e0() {
   return (neuron0x2323790()*-1.43303);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338920() {
   return (neuron0x2323c10()*-2.30127);
}

double nnFunc_25_25hi_3000ep__::synapse0x23383b0() {
   return (neuron0x23244e0()*-0.22638);
}

double nnFunc_25_25hi_3000ep__::synapse0x23383f0() {
   return (neuron0x23247b0()*2.10856);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338a70() {
   return (neuron0x2324c30()*4.23188);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338ab0() {
   return (neuron0x23250b0()*5.62869);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338af0() {
   return (neuron0x2325530()*-0.487841);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338b30() {
   return (neuron0x23259b0()*1.48291);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338b70() {
   return (neuron0x2325e30()*4.16199);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338bb0() {
   return (neuron0x23262b0()*-1.03161);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338bf0() {
   return (neuron0x2326730()*2.45464);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338f70() {
   return (neuron0x231f770()*0.411018);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338fb0() {
   return (neuron0x231fae0()*1.19522);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338ff0() {
   return (neuron0x231ff60()*0.457757);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339030() {
   return (neuron0x23203e0()*0.544733);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339070() {
   return (neuron0x23208f0()*0.379424);
}

double nnFunc_25_25hi_3000ep__::synapse0x23390b0() {
   return (neuron0x2320d70()*0.348538);
}

double nnFunc_25_25hi_3000ep__::synapse0x23390f0() {
   return (neuron0x23211f0()*0.580006);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339130() {
   return (neuron0x2321800()*0.256276);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339170() {
   return (neuron0x2321bf0()*-0.447871);
}

double nnFunc_25_25hi_3000ep__::synapse0x23391b0() {
   return (neuron0x2322070()*0.697647);
}

double nnFunc_25_25hi_3000ep__::synapse0x23391f0() {
   return (neuron0x23224f0()*-0.587955);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339230() {
   return (neuron0x2322970()*0.667048);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339270() {
   return (neuron0x2322e80()*0.662121);
}

double nnFunc_25_25hi_3000ep__::synapse0x23392b0() {
   return (neuron0x23215f0()*0.333727);
}

double nnFunc_25_25hi_3000ep__::synapse0x23392f0() {
   return (neuron0x2323790()*0.991935);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339330() {
   return (neuron0x2323c10()*0.877279);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338dc0() {
   return (neuron0x23244e0()*0.468931);
}

double nnFunc_25_25hi_3000ep__::synapse0x2338e00() {
   return (neuron0x23247b0()*-0.537411);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339480() {
   return (neuron0x2324c30()*-0.874223);
}

double nnFunc_25_25hi_3000ep__::synapse0x23394c0() {
   return (neuron0x23250b0()*-0.265593);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339500() {
   return (neuron0x2325530()*0.253944);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339540() {
   return (neuron0x23259b0()*0.545637);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339580() {
   return (neuron0x2325e30()*-0.942453);
}

double nnFunc_25_25hi_3000ep__::synapse0x23395c0() {
   return (neuron0x23262b0()*-0.00632861);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339600() {
   return (neuron0x2326730()*1.30178);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339980() {
   return (neuron0x231f770()*-0.96622);
}

double nnFunc_25_25hi_3000ep__::synapse0x23399c0() {
   return (neuron0x231fae0()*-0.0982563);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339a00() {
   return (neuron0x231ff60()*0.520184);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339a40() {
   return (neuron0x23203e0()*-0.948166);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339a80() {
   return (neuron0x23208f0()*-0.129679);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339ac0() {
   return (neuron0x2320d70()*0.325828);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339b00() {
   return (neuron0x23211f0()*-0.368158);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339b40() {
   return (neuron0x2321800()*-0.26036);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339b80() {
   return (neuron0x2321bf0()*-0.330185);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339bc0() {
   return (neuron0x2322070()*0.0460569);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339c00() {
   return (neuron0x23224f0()*0.361763);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339c40() {
   return (neuron0x2322970()*-0.48795);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339c80() {
   return (neuron0x2322e80()*-0.470344);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339cc0() {
   return (neuron0x23215f0()*-0.00167326);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339d00() {
   return (neuron0x2323790()*-0.4286);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339d40() {
   return (neuron0x2323c10()*-0.297988);
}

double nnFunc_25_25hi_3000ep__::synapse0x23397d0() {
   return (neuron0x23244e0()*-0.899531);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339810() {
   return (neuron0x23247b0()*-0.675413);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339e90() {
   return (neuron0x2324c30()*0.0213317);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339ed0() {
   return (neuron0x23250b0()*0.510445);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339f10() {
   return (neuron0x2325530()*-0.325101);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339f50() {
   return (neuron0x23259b0()*-0.595408);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339f90() {
   return (neuron0x2325e30()*1.04187);
}

double nnFunc_25_25hi_3000ep__::synapse0x2339fd0() {
   return (neuron0x23262b0()*-0.459391);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a010() {
   return (neuron0x2326730()*-0.277892);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a270() {
   return (neuron0x2328640()*4.64416);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a2b0() {
   return (neuron0x2323410()*-2.07147);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a2f0() {
   return (neuron0x23291b0()*-4.88087);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a330() {
   return (neuron0x2329cd0()*-0.488722);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a370() {
   return (neuron0x232a6e0()*1.74596);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a3b0() {
   return (neuron0x232b0f0()*2.09851);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a3f0() {
   return (neuron0x2328ce0()*-4.79705);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a430() {
   return (neuron0x232cd20()*1.77192);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a470() {
   return (neuron0x232d730()*-2.41587);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a4b0() {
   return (neuron0x232e140()*2.23663);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a4f0() {
   return (neuron0x232eb50()*-2.86455);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a530() {
   return (neuron0x232f560()*1.24419);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a570() {
   return (neuron0x232ff70()*2.72718);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a5b0() {
   return (neuron0x2330980()*1.82759);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a5f0() {
   return (neuron0x2331390()*2.33954);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a630() {
   return (neuron0x2331da0()*-1.24435);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f640() {
   return (neuron0x232c3c0()*-6.96125);
}

double nnFunc_25_25hi_3000ep__::synapse0x231f680() {
   return (neuron0x2335010()*12.237);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a780() {
   return (neuron0x23359e0()*1.38792);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a7c0() {
   return (neuron0x23363f0()*2.50583);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a800() {
   return (neuron0x2336e00()*-3.6717);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a840() {
   return (neuron0x2337810()*8.31568);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a880() {
   return (neuron0x2338220()*11.5881);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a8c0() {
   return (neuron0x2338c30()*-2.61994);
}

double nnFunc_25_25hi_3000ep__::synapse0x233a900() {
   return (neuron0x2339640()*1.05949);
}

