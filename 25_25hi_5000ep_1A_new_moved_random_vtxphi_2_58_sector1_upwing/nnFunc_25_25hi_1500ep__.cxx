#include "25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_upwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2bcdb60();
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
         return neuron0x2bcdb60();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb2110() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb2450() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb2790() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb2ad0() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb2e10() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x2bb3280() {
   double input = 0.29585;
   input += synapse0x2abf4f0();
   input += synapse0x2ba1580();
   input += synapse0x2bb3530();
   input += synapse0x2bb3570();
   input += synapse0x2bb35b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb3280() {
   double input = input0x2bb3280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb35f0() {
   double input = 2.31524;
   input += synapse0x2bb3930();
   input += synapse0x2bb3970();
   input += synapse0x2bb39b0();
   input += synapse0x2bb39f0();
   input += synapse0x2bb3a30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb35f0() {
   double input = input0x2bb35f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb3a70() {
   double input = 2.34321;
   input += synapse0x2bb3db0();
   input += synapse0x2bb3df0();
   input += synapse0x2bb3e30();
   input += synapse0x2bb3e70();
   input += synapse0x2bb3eb0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb3a70() {
   double input = input0x2bb3a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb3ef0() {
   double input = -7.66183;
   input += synapse0x2bb4230();
   input += synapse0x2bb4270();
   input += synapse0x2ab16e0();
   input += synapse0x2ab1720();
   input += synapse0x2bb43c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb3ef0() {
   double input = input0x2bb3ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb4400() {
   double input = 0.811921;
   input += synapse0x2bb4740();
   input += synapse0x2bb4780();
   input += synapse0x2bb47c0();
   input += synapse0x2bb4800();
   input += synapse0x2bb4840();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb4400() {
   double input = input0x2bb4400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb4880() {
   double input = 2.47724;
   input += synapse0x2bb4bc0();
   input += synapse0x2bb4c00();
   input += synapse0x2bb4c40();
   input += synapse0x2bb4c80();
   input += synapse0x2bb4cc0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb4880() {
   double input = input0x2bb4880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb4d00() {
   double input = 0.0132726;
   input += synapse0x2bb5040();
   input += synapse0x2bb5080();
   input += synapse0x2bb50c0();
   input += synapse0x2bb42b0();
   input += synapse0x2bb42f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb4d00() {
   double input = input0x2bb4d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb5310() {
   double input = 1.7767;
   input += synapse0x2bb55c0();
   input += synapse0x2bb5600();
   input += synapse0x2bb5640();
   input += synapse0x2bb5680();
   input += synapse0x2bb56c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb5310() {
   double input = input0x2bb5310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb5700() {
   double input = 0.653678;
   input += synapse0x2bb5a40();
   input += synapse0x2bb5a80();
   input += synapse0x2bb5ac0();
   input += synapse0x2bb5b00();
   input += synapse0x2bb5b40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb5700() {
   double input = input0x2bb5700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb5b80() {
   double input = -2.81642;
   input += synapse0x2bb5ec0();
   input += synapse0x2bb5f00();
   input += synapse0x2bb5f40();
   input += synapse0x2bb5f80();
   input += synapse0x2bb5fc0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb5b80() {
   double input = input0x2bb5b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb6000() {
   double input = 1.29036;
   input += synapse0x2bb6340();
   input += synapse0x2bb6380();
   input += synapse0x2bb63c0();
   input += synapse0x2bb6400();
   input += synapse0x2bb6440();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb6000() {
   double input = input0x2bb6000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb6480() {
   double input = 0.738947;
   input += synapse0x2ab1530();
   input += synapse0x2ab1570();
   input += synapse0x2bb68d0();
   input += synapse0x2bb6910();
   input += synapse0x2bb6950();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb6480() {
   double input = input0x2bb6480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb6990() {
   double input = 0.602871;
   input += synapse0x2bb6cd0();
   input += synapse0x2bb6d10();
   input += synapse0x2bb6d50();
   input += synapse0x2bb6d90();
   input += synapse0x2bb6dd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb6990() {
   double input = input0x2bb6990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb5100() {
   double input = 0.422901;
   input += synapse0x2ab1d00();
   input += synapse0x2bb5290();
   input += synapse0x2bb52d0();
   input += synapse0x2bb7220();
   input += synapse0x2bb7260();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb5100() {
   double input = input0x2bb5100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb72a0() {
   double input = -0.943695;
   input += synapse0x2bb75e0();
   input += synapse0x2bb7620();
   input += synapse0x2bb7660();
   input += synapse0x2bb76a0();
   input += synapse0x2bb76e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb72a0() {
   double input = input0x2bb72a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb7720() {
   double input = 0.00556707;
   input += synapse0x2bb7a60();
   input += synapse0x2bb2330();
   input += synapse0x2bb2370();
   input += synapse0x2bb2670();
   input += synapse0x2bb26b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb7720() {
   double input = input0x2bb7720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb7ff0() {
   double input = -0.745306;
   input += synapse0x2bb8180();
   input += synapse0x2bb81c0();
   input += synapse0x2bb8200();
   input += synapse0x2bb8240();
   input += synapse0x2bb8280();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb7ff0() {
   double input = input0x2bb7ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb82c0() {
   double input = -4.92234;
   input += synapse0x2bb8600();
   input += synapse0x2bb8640();
   input += synapse0x2bb8680();
   input += synapse0x2bb86c0();
   input += synapse0x2bb8700();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb82c0() {
   double input = input0x2bb82c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb8740() {
   double input = -0.181024;
   input += synapse0x2bb8a80();
   input += synapse0x2bb8ac0();
   input += synapse0x2bb8b00();
   input += synapse0x2bb8b40();
   input += synapse0x2bb8b80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb8740() {
   double input = input0x2bb8740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb8bc0() {
   double input = 2.88019;
   input += synapse0x2bb8f00();
   input += synapse0x2bb8f40();
   input += synapse0x2bb8f80();
   input += synapse0x2bb8fc0();
   input += synapse0x2bb9000();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb8bc0() {
   double input = input0x2bb8bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb9040() {
   double input = -0.963788;
   input += synapse0x2bb9380();
   input += synapse0x2bb93c0();
   input += synapse0x2bb9400();
   input += synapse0x2bb9440();
   input += synapse0x2bb9480();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb9040() {
   double input = input0x2bb9040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb94c0() {
   double input = -1.14758;
   input += synapse0x2bb9800();
   input += synapse0x2bb9840();
   input += synapse0x2bb9880();
   input += synapse0x2bb98c0();
   input += synapse0x2bb9900();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb94c0() {
   double input = input0x2bb94c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb9940() {
   double input = 0.627299;
   input += synapse0x2bb9c80();
   input += synapse0x2bb9cc0();
   input += synapse0x2bb9d00();
   input += synapse0x2bb9d40();
   input += synapse0x2bb9d80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb9940() {
   double input = input0x2bb9940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb9dc0() {
   double input = 1.19893;
   input += synapse0x2bba100();
   input += synapse0x2bba140();
   input += synapse0x2bba180();
   input += synapse0x2bba1c0();
   input += synapse0x2bba200();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb9dc0() {
   double input = input0x2bb9dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bba240() {
   double input = 0.144074;
   input += synapse0x2bba580();
   input += synapse0x2bba5c0();
   input += synapse0x2bba600();
   input += synapse0x2bba640();
   input += synapse0x2bba680();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bba240() {
   double input = input0x2bba240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbc150() {
   double input = 0.133579;
   input += synapse0x2bb41a0();
   input += synapse0x2bb41e0();
   input += synapse0x2bb46b0();
   input += synapse0x2bb46f0();
   input += synapse0x2bb4b30();
   input += synapse0x2bb4b70();
   input += synapse0x2bb4fb0();
   input += synapse0x2bb4ff0();
   input += synapse0x2bb5530();
   input += synapse0x2bb5570();
   input += synapse0x2bb59b0();
   input += synapse0x2bb59f0();
   input += synapse0x2bb5e30();
   input += synapse0x2bb5e70();
   input += synapse0x2bb62b0();
   input += synapse0x2bb62f0();
   input += synapse0x2bb6730();
   input += synapse0x2bb6770();
   input += synapse0x2bb6c40();
   input += synapse0x2bb6c80();
   input += synapse0x2bb7550();
   input += synapse0x2bb7590();
   input += synapse0x2bb79d0();
   input += synapse0x2bb7a10();
   input += synapse0x2bb3030();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbc150() {
   double input = input0x2bbc150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bb6f20() {
   double input = 0.561397;
   input += synapse0x2bb70b0();
   input += synapse0x2bb70f0();
   input += synapse0x2bb7130();
   input += synapse0x2bb7170();
   input += synapse0x2bb71b0();
   input += synapse0x2bb3070();
   input += synapse0x2bb92f0();
   input += synapse0x2bb9330();
   input += synapse0x2bb9770();
   input += synapse0x2bb97b0();
   input += synapse0x2bb9bf0();
   input += synapse0x2bb9c30();
   input += synapse0x2bba070();
   input += synapse0x2bba0b0();
   input += synapse0x2bba4f0();
   input += synapse0x2bba530();
   input += synapse0x2bb34a0();
   input += synapse0x2bb34e0();
   input += synapse0x2bb8570();
   input += synapse0x2bb85b0();
   input += synapse0x2abf5c0();
   input += synapse0x2abf600();
   input += synapse0x2bbcc00();
   input += synapse0x2bbcc40();
   input += synapse0x2bbcc80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bb6f20() {
   double input = input0x2bb6f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbccc0() {
   double input = -0.133638;
   input += synapse0x2bb67c0();
   input += synapse0x2bb6800();
   input += synapse0x2bb6840();
   input += synapse0x2bb6880();
   input += synapse0x2bbd210();
   input += synapse0x2bbd250();
   input += synapse0x2bbd290();
   input += synapse0x2bbd2d0();
   input += synapse0x2bbd310();
   input += synapse0x2bbd350();
   input += synapse0x2bbd390();
   input += synapse0x2bbd3d0();
   input += synapse0x2bbd410();
   input += synapse0x2bbd450();
   input += synapse0x2bbd490();
   input += synapse0x2bbd4d0();
   input += synapse0x2bbce50();
   input += synapse0x2bbce90();
   input += synapse0x2bbd620();
   input += synapse0x2bbd660();
   input += synapse0x2bbd6a0();
   input += synapse0x2bbd6e0();
   input += synapse0x2bbd720();
   input += synapse0x2bbd760();
   input += synapse0x2bbd7a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbccc0() {
   double input = input0x2bbccc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbd7e0() {
   double input = 0.114371;
   input += synapse0x2bbdb20();
   input += synapse0x2bbdb60();
   input += synapse0x2bbdba0();
   input += synapse0x2bbdbe0();
   input += synapse0x2bbdc20();
   input += synapse0x2bbdc60();
   input += synapse0x2bbdca0();
   input += synapse0x2bbdce0();
   input += synapse0x2bbdd20();
   input += synapse0x2bbdd60();
   input += synapse0x2bbdda0();
   input += synapse0x2bbdde0();
   input += synapse0x2bbde20();
   input += synapse0x2bbde60();
   input += synapse0x2bbdea0();
   input += synapse0x2bbdee0();
   input += synapse0x2bbd970();
   input += synapse0x2bbd9b0();
   input += synapse0x2bbe030();
   input += synapse0x2bbe070();
   input += synapse0x2bbe0b0();
   input += synapse0x2bbe0f0();
   input += synapse0x2bbe130();
   input += synapse0x2bbe170();
   input += synapse0x2bbe1b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbd7e0() {
   double input = input0x2bbd7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbe1f0() {
   double input = 0.0772372;
   input += synapse0x2bbe530();
   input += synapse0x2bbe570();
   input += synapse0x2bbe5b0();
   input += synapse0x2bbe5f0();
   input += synapse0x2bbe630();
   input += synapse0x2bbe670();
   input += synapse0x2bbe6b0();
   input += synapse0x2bbe6f0();
   input += synapse0x2bbe730();
   input += synapse0x2bbe770();
   input += synapse0x2bbe7b0();
   input += synapse0x2bbe7f0();
   input += synapse0x2bbe830();
   input += synapse0x2bbe870();
   input += synapse0x2bbe8b0();
   input += synapse0x2bbe8f0();
   input += synapse0x2bbe380();
   input += synapse0x2bbe3c0();
   input += synapse0x2bbea40();
   input += synapse0x2bbea80();
   input += synapse0x2bbeac0();
   input += synapse0x2bbeb00();
   input += synapse0x2bbeb40();
   input += synapse0x2bbeb80();
   input += synapse0x2bbebc0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbe1f0() {
   double input = input0x2bbe1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbec00() {
   double input = 0.234269;
   input += synapse0x2bbef40();
   input += synapse0x2bbef80();
   input += synapse0x2bbefc0();
   input += synapse0x2bbf000();
   input += synapse0x2bbf040();
   input += synapse0x2bbf080();
   input += synapse0x2bbf0c0();
   input += synapse0x2bbc2e0();
   input += synapse0x2bbc320();
   input += synapse0x2bbc360();
   input += synapse0x2bbc3a0();
   input += synapse0x2bbc3e0();
   input += synapse0x2bbc420();
   input += synapse0x2bbc460();
   input += synapse0x2bbc4a0();
   input += synapse0x2bbc4e0();
   input += synapse0x2bbed90();
   input += synapse0x2bbedd0();
   input += synapse0x2bbc630();
   input += synapse0x2bbc670();
   input += synapse0x2bbc6b0();
   input += synapse0x2bbc6f0();
   input += synapse0x2bbc730();
   input += synapse0x2bbc770();
   input += synapse0x2bbc7b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbec00() {
   double input = input0x2bbec00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbc7f0() {
   double input = -0.181208;
   input += synapse0x2bbcaa0();
   input += synapse0x2bc01a0();
   input += synapse0x2bc01e0();
   input += synapse0x2bc0220();
   input += synapse0x2bc0260();
   input += synapse0x2bc02a0();
   input += synapse0x2bc02e0();
   input += synapse0x2bc0320();
   input += synapse0x2bc0360();
   input += synapse0x2bc03a0();
   input += synapse0x2bc03e0();
   input += synapse0x2bc0420();
   input += synapse0x2bc0460();
   input += synapse0x2bc04a0();
   input += synapse0x2bc04e0();
   input += synapse0x2bc0520();
   input += synapse0x2bbc980();
   input += synapse0x2bbc9c0();
   input += synapse0x2bc0670();
   input += synapse0x2bc06b0();
   input += synapse0x2bc06f0();
   input += synapse0x2bc0730();
   input += synapse0x2bc0770();
   input += synapse0x2bc07b0();
   input += synapse0x2bc07f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbc7f0() {
   double input = input0x2bbc7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc0830() {
   double input = 0.00272448;
   input += synapse0x2bc0b70();
   input += synapse0x2bc0bb0();
   input += synapse0x2bc0bf0();
   input += synapse0x2bc0c30();
   input += synapse0x2bc0c70();
   input += synapse0x2bc0cb0();
   input += synapse0x2bc0cf0();
   input += synapse0x2bc0d30();
   input += synapse0x2bc0d70();
   input += synapse0x2bc0db0();
   input += synapse0x2bc0df0();
   input += synapse0x2bc0e30();
   input += synapse0x2bc0e70();
   input += synapse0x2bc0eb0();
   input += synapse0x2bc0ef0();
   input += synapse0x2bc0f30();
   input += synapse0x2bc09c0();
   input += synapse0x2bc0a00();
   input += synapse0x2bc1080();
   input += synapse0x2bc10c0();
   input += synapse0x2bc1100();
   input += synapse0x2bc1140();
   input += synapse0x2bc1180();
   input += synapse0x2bc11c0();
   input += synapse0x2bc1200();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc0830() {
   double input = input0x2bc0830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc1240() {
   double input = 0.330739;
   input += synapse0x2bc1580();
   input += synapse0x2bc15c0();
   input += synapse0x2bc1600();
   input += synapse0x2bc1640();
   input += synapse0x2bc1680();
   input += synapse0x2bc16c0();
   input += synapse0x2bc1700();
   input += synapse0x2bc1740();
   input += synapse0x2bc1780();
   input += synapse0x2bc17c0();
   input += synapse0x2bc1800();
   input += synapse0x2bc1840();
   input += synapse0x2bc1880();
   input += synapse0x2bc18c0();
   input += synapse0x2bc1900();
   input += synapse0x2bc1940();
   input += synapse0x2bc13d0();
   input += synapse0x2bc1410();
   input += synapse0x2bc1a90();
   input += synapse0x2bc1ad0();
   input += synapse0x2bc1b10();
   input += synapse0x2bc1b50();
   input += synapse0x2bc1b90();
   input += synapse0x2bc1bd0();
   input += synapse0x2bc1c10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc1240() {
   double input = input0x2bc1240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc1c50() {
   double input = -0.178759;
   input += synapse0x2bc1f90();
   input += synapse0x2bc1fd0();
   input += synapse0x2bc2010();
   input += synapse0x2bc2050();
   input += synapse0x2bc2090();
   input += synapse0x2bc20d0();
   input += synapse0x2bc2110();
   input += synapse0x2bc2150();
   input += synapse0x2bc2190();
   input += synapse0x2bc21d0();
   input += synapse0x2bc2210();
   input += synapse0x2bc2250();
   input += synapse0x2bc2290();
   input += synapse0x2bc22d0();
   input += synapse0x2bc2310();
   input += synapse0x2bc2350();
   input += synapse0x2bc1de0();
   input += synapse0x2bc1e20();
   input += synapse0x2bc24a0();
   input += synapse0x2bc24e0();
   input += synapse0x2bc2520();
   input += synapse0x2bc2560();
   input += synapse0x2bc25a0();
   input += synapse0x2bc25e0();
   input += synapse0x2bc2620();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc1c50() {
   double input = input0x2bc1c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc2660() {
   double input = -0.350556;
   input += synapse0x2bc29a0();
   input += synapse0x2bc29e0();
   input += synapse0x2bc2a20();
   input += synapse0x2bc2a60();
   input += synapse0x2bc2aa0();
   input += synapse0x2bc2ae0();
   input += synapse0x2bc2b20();
   input += synapse0x2bc2b60();
   input += synapse0x2bc2ba0();
   input += synapse0x2bc2be0();
   input += synapse0x2bc2c20();
   input += synapse0x2bc2c60();
   input += synapse0x2bc2ca0();
   input += synapse0x2bc2ce0();
   input += synapse0x2bc2d20();
   input += synapse0x2bc2d60();
   input += synapse0x2bc27f0();
   input += synapse0x2bc2830();
   input += synapse0x2bc2eb0();
   input += synapse0x2bc2ef0();
   input += synapse0x2bc2f30();
   input += synapse0x2bc2f70();
   input += synapse0x2bc2fb0();
   input += synapse0x2bc2ff0();
   input += synapse0x2bc3030();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc2660() {
   double input = input0x2bc2660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc3070() {
   double input = -0.00880712;
   input += synapse0x2bc33b0();
   input += synapse0x2bc33f0();
   input += synapse0x2bc3430();
   input += synapse0x2bc3470();
   input += synapse0x2bc34b0();
   input += synapse0x2bc34f0();
   input += synapse0x2bc3530();
   input += synapse0x2bc3570();
   input += synapse0x2bc35b0();
   input += synapse0x2bc35f0();
   input += synapse0x2bc3630();
   input += synapse0x2bc3670();
   input += synapse0x2bc36b0();
   input += synapse0x2bc36f0();
   input += synapse0x2bc3730();
   input += synapse0x2bc3770();
   input += synapse0x2bc3200();
   input += synapse0x2bc3240();
   input += synapse0x2bc38c0();
   input += synapse0x2bc3900();
   input += synapse0x2bc3940();
   input += synapse0x2bc3980();
   input += synapse0x2bc39c0();
   input += synapse0x2bc3a00();
   input += synapse0x2bc3a40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc3070() {
   double input = input0x2bc3070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc3a80() {
   double input = -0.392806;
   input += synapse0x2bc3dc0();
   input += synapse0x2bc3e00();
   input += synapse0x2bc3e40();
   input += synapse0x2bc3e80();
   input += synapse0x2bc3ec0();
   input += synapse0x2bc3f00();
   input += synapse0x2bc3f40();
   input += synapse0x2bc3f80();
   input += synapse0x2bc3fc0();
   input += synapse0x2bc4000();
   input += synapse0x2bc4040();
   input += synapse0x2bc4080();
   input += synapse0x2bc40c0();
   input += synapse0x2bc4100();
   input += synapse0x2bc4140();
   input += synapse0x2bc4180();
   input += synapse0x2bc3c10();
   input += synapse0x2bc3c50();
   input += synapse0x2bc42d0();
   input += synapse0x2bc4310();
   input += synapse0x2bc4350();
   input += synapse0x2bc4390();
   input += synapse0x2bc43d0();
   input += synapse0x2bc4410();
   input += synapse0x2bc4450();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc3a80() {
   double input = input0x2bc3a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc4490() {
   double input = 0.121121;
   input += synapse0x2bc47d0();
   input += synapse0x2bc4810();
   input += synapse0x2bc4850();
   input += synapse0x2bc4890();
   input += synapse0x2bc48d0();
   input += synapse0x2bc4910();
   input += synapse0x2bc4950();
   input += synapse0x2bc4990();
   input += synapse0x2bc49d0();
   input += synapse0x2bc4a10();
   input += synapse0x2bc4a50();
   input += synapse0x2bc4a90();
   input += synapse0x2bc4ad0();
   input += synapse0x2bc4b10();
   input += synapse0x2bc4b50();
   input += synapse0x2bc4b90();
   input += synapse0x2bc4620();
   input += synapse0x2bc4660();
   input += synapse0x2bc4ce0();
   input += synapse0x2bc4d20();
   input += synapse0x2bc4d60();
   input += synapse0x2bc4da0();
   input += synapse0x2bc4de0();
   input += synapse0x2bc4e20();
   input += synapse0x2bc4e60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc4490() {
   double input = input0x2bc4490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc4ea0() {
   double input = 0.43861;
   input += synapse0x2bc51e0();
   input += synapse0x2bc5220();
   input += synapse0x2bc5260();
   input += synapse0x2bc52a0();
   input += synapse0x2bc52e0();
   input += synapse0x2bc5320();
   input += synapse0x2bc5360();
   input += synapse0x2bc53a0();
   input += synapse0x2bc53e0();
   input += synapse0x2bc5420();
   input += synapse0x2bc5460();
   input += synapse0x2bc54a0();
   input += synapse0x2bc54e0();
   input += synapse0x2bc5520();
   input += synapse0x2bc5560();
   input += synapse0x2bc55a0();
   input += synapse0x2bc5030();
   input += synapse0x2bc5070();
   input += synapse0x2bc56f0();
   input += synapse0x2bc5730();
   input += synapse0x2bc5770();
   input += synapse0x2bc57b0();
   input += synapse0x2bc57f0();
   input += synapse0x2bc5830();
   input += synapse0x2bc5870();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc4ea0() {
   double input = input0x2bc4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc58b0() {
   double input = 0.617362;
   input += synapse0x2bc5bf0();
   input += synapse0x2bb3410();
   input += synapse0x2bb3450();
   input += synapse0x2bb3810();
   input += synapse0x2bb3850();
   input += synapse0x2bb3c90();
   input += synapse0x2bb3cd0();
   input += synapse0x2bb4110();
   input += synapse0x2bb4150();
   input += synapse0x2bb4620();
   input += synapse0x2bb4660();
   input += synapse0x2bb4aa0();
   input += synapse0x2bb4ae0();
   input += synapse0x2bb4f20();
   input += synapse0x2bb4f60();
   input += synapse0x2bb54a0();
   input += synapse0x2bb54e0();
   input += synapse0x2bb5920();
   input += synapse0x2bb5960();
   input += synapse0x2bb5da0();
   input += synapse0x2bb5de0();
   input += synapse0x2bb6220();
   input += synapse0x2bb6260();
   input += synapse0x2bb66a0();
   input += synapse0x2bb66e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc58b0() {
   double input = input0x2bc58b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bbfed0() {
   double input = -0.310245;
   input += synapse0x2bc0060();
   input += synapse0x2bc00a0();
   input += synapse0x2bb7940();
   input += synapse0x2bb7980();
   input += synapse0x2bc5a40();
   input += synapse0x2bc5a80();
   input += synapse0x2bb2cf0();
   input += synapse0x2bb2d30();
   input += synapse0x2bb84e0();
   input += synapse0x2bb8520();
   input += synapse0x2bb8960();
   input += synapse0x2bb89a0();
   input += synapse0x2bb8de0();
   input += synapse0x2bb8e20();
   input += synapse0x2bb9260();
   input += synapse0x2bb92a0();
   input += synapse0x2bb96e0();
   input += synapse0x2bb9720();
   input += synapse0x2bb9b60();
   input += synapse0x2bb9ba0();
   input += synapse0x2bb9fe0();
   input += synapse0x2bba020();
   input += synapse0x2bba460();
   input += synapse0x2bba4a0();
   input += synapse0x2bb6bb0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bbfed0() {
   double input = input0x2bbfed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc8b20() {
   double input = -0.659822;
   input += synapse0x2bb6bf0();
   input += synapse0x2bc8e60();
   input += synapse0x2bc8ea0();
   input += synapse0x2bc8ee0();
   input += synapse0x2bc8f20();
   input += synapse0x2bc8f60();
   input += synapse0x2bc8fa0();
   input += synapse0x2bc8fe0();
   input += synapse0x2bc9020();
   input += synapse0x2bc9060();
   input += synapse0x2bc90a0();
   input += synapse0x2bc90e0();
   input += synapse0x2bc9120();
   input += synapse0x2bc9160();
   input += synapse0x2bc91a0();
   input += synapse0x2bc91e0();
   input += synapse0x2bc8cb0();
   input += synapse0x2bc8cf0();
   input += synapse0x2bc9330();
   input += synapse0x2bc9370();
   input += synapse0x2bc93b0();
   input += synapse0x2bc93f0();
   input += synapse0x2bc9430();
   input += synapse0x2bc9470();
   input += synapse0x2bc94b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc8b20() {
   double input = input0x2bc8b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc94f0() {
   double input = 0.249501;
   input += synapse0x2bc9830();
   input += synapse0x2bc9870();
   input += synapse0x2bc98b0();
   input += synapse0x2bc98f0();
   input += synapse0x2bc9930();
   input += synapse0x2bc9970();
   input += synapse0x2bc99b0();
   input += synapse0x2bc99f0();
   input += synapse0x2bc9a30();
   input += synapse0x2bc9a70();
   input += synapse0x2bc9ab0();
   input += synapse0x2bc9af0();
   input += synapse0x2bc9b30();
   input += synapse0x2bc9b70();
   input += synapse0x2bc9bb0();
   input += synapse0x2bc9bf0();
   input += synapse0x2bc9680();
   input += synapse0x2bc96c0();
   input += synapse0x2bc9d40();
   input += synapse0x2bc9d80();
   input += synapse0x2bc9dc0();
   input += synapse0x2bc9e00();
   input += synapse0x2bc9e40();
   input += synapse0x2bc9e80();
   input += synapse0x2bc9ec0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc94f0() {
   double input = input0x2bc94f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bc9f00() {
   double input = 0.48668;
   input += synapse0x2bca240();
   input += synapse0x2bca280();
   input += synapse0x2bca2c0();
   input += synapse0x2bca300();
   input += synapse0x2bca340();
   input += synapse0x2bca380();
   input += synapse0x2bca3c0();
   input += synapse0x2bca400();
   input += synapse0x2bca440();
   input += synapse0x2bca480();
   input += synapse0x2bca4c0();
   input += synapse0x2bca500();
   input += synapse0x2bca540();
   input += synapse0x2bca580();
   input += synapse0x2bca5c0();
   input += synapse0x2bca600();
   input += synapse0x2bca090();
   input += synapse0x2bca0d0();
   input += synapse0x2bca750();
   input += synapse0x2bca790();
   input += synapse0x2bca7d0();
   input += synapse0x2bca810();
   input += synapse0x2bca850();
   input += synapse0x2bca890();
   input += synapse0x2bca8d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bc9f00() {
   double input = input0x2bc9f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bca910() {
   double input = 0.398432;
   input += synapse0x2bcac50();
   input += synapse0x2bcac90();
   input += synapse0x2bcacd0();
   input += synapse0x2bcad10();
   input += synapse0x2bcad50();
   input += synapse0x2bcad90();
   input += synapse0x2bcadd0();
   input += synapse0x2bcae10();
   input += synapse0x2bcae50();
   input += synapse0x2bcae90();
   input += synapse0x2bcaed0();
   input += synapse0x2bcaf10();
   input += synapse0x2bcaf50();
   input += synapse0x2bcaf90();
   input += synapse0x2bcafd0();
   input += synapse0x2bcb010();
   input += synapse0x2bcaaa0();
   input += synapse0x2bcaae0();
   input += synapse0x2bcb160();
   input += synapse0x2bcb1a0();
   input += synapse0x2bcb1e0();
   input += synapse0x2bcb220();
   input += synapse0x2bcb260();
   input += synapse0x2bcb2a0();
   input += synapse0x2bcb2e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bca910() {
   double input = input0x2bca910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bcb320() {
   double input = 0.781726;
   input += synapse0x2bcb660();
   input += synapse0x2bcb6a0();
   input += synapse0x2bcb6e0();
   input += synapse0x2bcb720();
   input += synapse0x2bcb760();
   input += synapse0x2bcb7a0();
   input += synapse0x2bcb7e0();
   input += synapse0x2bcb820();
   input += synapse0x2bcb860();
   input += synapse0x2bcb8a0();
   input += synapse0x2bcb8e0();
   input += synapse0x2bcb920();
   input += synapse0x2bcb960();
   input += synapse0x2bcb9a0();
   input += synapse0x2bcb9e0();
   input += synapse0x2bcba20();
   input += synapse0x2bcb4b0();
   input += synapse0x2bcb4f0();
   input += synapse0x2bcbb70();
   input += synapse0x2bcbbb0();
   input += synapse0x2bcbbf0();
   input += synapse0x2bcbc30();
   input += synapse0x2bcbc70();
   input += synapse0x2bcbcb0();
   input += synapse0x2bcbcf0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bcb320() {
   double input = input0x2bcb320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bcbd30() {
   double input = -0.412686;
   input += synapse0x2bcc070();
   input += synapse0x2bcc0b0();
   input += synapse0x2bcc0f0();
   input += synapse0x2bcc130();
   input += synapse0x2bcc170();
   input += synapse0x2bcc1b0();
   input += synapse0x2bcc1f0();
   input += synapse0x2bcc230();
   input += synapse0x2bcc270();
   input += synapse0x2bcc2b0();
   input += synapse0x2bcc2f0();
   input += synapse0x2bcc330();
   input += synapse0x2bcc370();
   input += synapse0x2bcc3b0();
   input += synapse0x2bcc3f0();
   input += synapse0x2bcc430();
   input += synapse0x2bcbec0();
   input += synapse0x2bcbf00();
   input += synapse0x2bcc580();
   input += synapse0x2bcc5c0();
   input += synapse0x2bcc600();
   input += synapse0x2bcc640();
   input += synapse0x2bcc680();
   input += synapse0x2bcc6c0();
   input += synapse0x2bcc700();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bcbd30() {
   double input = input0x2bcbd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bcc740() {
   double input = -0.0873424;
   input += synapse0x2bcca80();
   input += synapse0x2bccac0();
   input += synapse0x2bccb00();
   input += synapse0x2bccb40();
   input += synapse0x2bccb80();
   input += synapse0x2bccbc0();
   input += synapse0x2bccc00();
   input += synapse0x2bccc40();
   input += synapse0x2bccc80();
   input += synapse0x2bcccc0();
   input += synapse0x2bccd00();
   input += synapse0x2bccd40();
   input += synapse0x2bccd80();
   input += synapse0x2bccdc0();
   input += synapse0x2bcce00();
   input += synapse0x2bcce40();
   input += synapse0x2bcc8d0();
   input += synapse0x2bcc910();
   input += synapse0x2bccf90();
   input += synapse0x2bccfd0();
   input += synapse0x2bcd010();
   input += synapse0x2bcd050();
   input += synapse0x2bcd090();
   input += synapse0x2bcd0d0();
   input += synapse0x2bcd110();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bcc740() {
   double input = input0x2bcc740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bcd150() {
   double input = -0.303194;
   input += synapse0x2bcd490();
   input += synapse0x2bcd4d0();
   input += synapse0x2bcd510();
   input += synapse0x2bcd550();
   input += synapse0x2bcd590();
   input += synapse0x2bcd5d0();
   input += synapse0x2bcd610();
   input += synapse0x2bcd650();
   input += synapse0x2bcd690();
   input += synapse0x2bcd6d0();
   input += synapse0x2bcd710();
   input += synapse0x2bcd750();
   input += synapse0x2bcd790();
   input += synapse0x2bcd7d0();
   input += synapse0x2bcd810();
   input += synapse0x2bcd850();
   input += synapse0x2bcd2e0();
   input += synapse0x2bcd320();
   input += synapse0x2bcd9a0();
   input += synapse0x2bcd9e0();
   input += synapse0x2bcda20();
   input += synapse0x2bcda60();
   input += synapse0x2bcdaa0();
   input += synapse0x2bcdae0();
   input += synapse0x2bcdb20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bcd150() {
   double input = input0x2bcd150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2bcdb60() {
   double input = 0.254804;
   input += synapse0x2bcdd80();
   input += synapse0x2bcddc0();
   input += synapse0x2bcde00();
   input += synapse0x2bcde40();
   input += synapse0x2bcde80();
   input += synapse0x2bcdec0();
   input += synapse0x2bcdf00();
   input += synapse0x2bcdf40();
   input += synapse0x2bcdf80();
   input += synapse0x2bcdfc0();
   input += synapse0x2bce000();
   input += synapse0x2bce040();
   input += synapse0x2bce080();
   input += synapse0x2bce0c0();
   input += synapse0x2bce100();
   input += synapse0x2bce140();
   input += synapse0x2bb3150();
   input += synapse0x2bb3190();
   input += synapse0x2bce290();
   input += synapse0x2bce2d0();
   input += synapse0x2bce310();
   input += synapse0x2bce350();
   input += synapse0x2bce390();
   input += synapse0x2bce3d0();
   input += synapse0x2bce410();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2bcdb60() {
   double input = input0x2bcdb60();
   return (input * 4.09296)+130.901;
}

double nnFunc_25_25hi_1500ep__::synapse0x2abf4f0() {
   return (neuron0x2bb2110()*-0.71617);
}

double nnFunc_25_25hi_1500ep__::synapse0x2ba1580() {
   return (neuron0x2bb2450()*-2.57584);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3530() {
   return (neuron0x2bb2790()*0.00171182);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3570() {
   return (neuron0x2bb2ad0()*-0.876983);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb35b0() {
   return (neuron0x2bb2e10()*-1.04251);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3930() {
   return (neuron0x2bb2110()*0.0881798);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3970() {
   return (neuron0x2bb2450()*0.498972);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb39b0() {
   return (neuron0x2bb2790()*0.0117725);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb39f0() {
   return (neuron0x2bb2ad0()*-0.184292);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3a30() {
   return (neuron0x2bb2e10()*-1.68965);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3db0() {
   return (neuron0x2bb2110()*-0.107414);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3df0() {
   return (neuron0x2bb2450()*0.141324);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3e30() {
   return (neuron0x2bb2790()*-0.0207358);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3e70() {
   return (neuron0x2bb2ad0()*-1.95611);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3eb0() {
   return (neuron0x2bb2e10()*1.14521);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4230() {
   return (neuron0x2bb2110()*-0.0621556);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4270() {
   return (neuron0x2bb2450()*0.283032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2ab16e0() {
   return (neuron0x2bb2790()*-0.0203983);
}

double nnFunc_25_25hi_1500ep__::synapse0x2ab1720() {
   return (neuron0x2bb2ad0()*3.68531);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb43c0() {
   return (neuron0x2bb2e10()*-1.92459);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4740() {
   return (neuron0x2bb2110()*-5.22402);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4780() {
   return (neuron0x2bb2450()*0.688036);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb47c0() {
   return (neuron0x2bb2790()*2.6199);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4800() {
   return (neuron0x2bb2ad0()*1.56163);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4840() {
   return (neuron0x2bb2e10()*0.59304);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4bc0() {
   return (neuron0x2bb2110()*-0.380405);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4c00() {
   return (neuron0x2bb2450()*-0.0790425);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4c40() {
   return (neuron0x2bb2790()*-0.0165964);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4c80() {
   return (neuron0x2bb2ad0()*-3.04045);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4cc0() {
   return (neuron0x2bb2e10()*1.49432);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5040() {
   return (neuron0x2bb2110()*0.00142464);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5080() {
   return (neuron0x2bb2450()*-0.732661);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb50c0() {
   return (neuron0x2bb2790()*-0.380258);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb42b0() {
   return (neuron0x2bb2ad0()*-2.65215);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb42f0() {
   return (neuron0x2bb2e10()*-0.584621);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb55c0() {
   return (neuron0x2bb2110()*0.334147);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5600() {
   return (neuron0x2bb2450()*-0.274942);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5640() {
   return (neuron0x2bb2790()*-0.00282436);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5680() {
   return (neuron0x2bb2ad0()*0.00790323);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb56c0() {
   return (neuron0x2bb2e10()*-1.22571);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5a40() {
   return (neuron0x2bb2110()*-0.207814);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5a80() {
   return (neuron0x2bb2450()*0.46791);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5ac0() {
   return (neuron0x2bb2790()*-0.0750917);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5b00() {
   return (neuron0x2bb2ad0()*1.12361);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5b40() {
   return (neuron0x2bb2e10()*0.648081);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5ec0() {
   return (neuron0x2bb2110()*-0.429346);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5f00() {
   return (neuron0x2bb2450()*0.21126);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5f40() {
   return (neuron0x2bb2790()*-0.0193728);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5f80() {
   return (neuron0x2bb2ad0()*-0.822947);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5fc0() {
   return (neuron0x2bb2e10()*0.565774);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6340() {
   return (neuron0x2bb2110()*-0.995455);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6380() {
   return (neuron0x2bb2450()*-0.865345);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb63c0() {
   return (neuron0x2bb2790()*0.0103691);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6400() {
   return (neuron0x2bb2ad0()*-4.05354);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6440() {
   return (neuron0x2bb2e10()*1.05599);
}

double nnFunc_25_25hi_1500ep__::synapse0x2ab1530() {
   return (neuron0x2bb2110()*-2.36924);
}

double nnFunc_25_25hi_1500ep__::synapse0x2ab1570() {
   return (neuron0x2bb2450()*1.18671);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb68d0() {
   return (neuron0x2bb2790()*1.18499);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6910() {
   return (neuron0x2bb2ad0()*2.73428);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6950() {
   return (neuron0x2bb2e10()*1.25686);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6cd0() {
   return (neuron0x2bb2110()*-0.270067);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6d10() {
   return (neuron0x2bb2450()*-0.857894);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6d50() {
   return (neuron0x2bb2790()*-0.140924);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6d90() {
   return (neuron0x2bb2ad0()*-3.34871);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6dd0() {
   return (neuron0x2bb2e10()*0.140777);
}

double nnFunc_25_25hi_1500ep__::synapse0x2ab1d00() {
   return (neuron0x2bb2110()*-6.19185);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5290() {
   return (neuron0x2bb2450()*0.462775);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb52d0() {
   return (neuron0x2bb2790()*2.72027);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7220() {
   return (neuron0x2bb2ad0()*0.979323);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7260() {
   return (neuron0x2bb2e10()*0.935371);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb75e0() {
   return (neuron0x2bb2110()*0.241005);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7620() {
   return (neuron0x2bb2450()*-0.713376);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7660() {
   return (neuron0x2bb2790()*-0.312044);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb76a0() {
   return (neuron0x2bb2ad0()*-1.91141);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb76e0() {
   return (neuron0x2bb2e10()*-0.0466594);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7a60() {
   return (neuron0x2bb2110()*6.17894);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb2330() {
   return (neuron0x2bb2450()*-0.1146);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb2370() {
   return (neuron0x2bb2790()*-2.3811);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb2670() {
   return (neuron0x2bb2ad0()*-1.48032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb26b0() {
   return (neuron0x2bb2e10()*-0.622488);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8180() {
   return (neuron0x2bb2110()*1.38378);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb81c0() {
   return (neuron0x2bb2450()*-0.939826);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8200() {
   return (neuron0x2bb2790()*-0.834723);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8240() {
   return (neuron0x2bb2ad0()*-2.32084);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8280() {
   return (neuron0x2bb2e10()*-0.616829);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8600() {
   return (neuron0x2bb2110()*-0.994848);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8640() {
   return (neuron0x2bb2450()*-1.61372);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8680() {
   return (neuron0x2bb2790()*0.0165872);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb86c0() {
   return (neuron0x2bb2ad0()*-0.452605);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8700() {
   return (neuron0x2bb2e10()*-2.81699);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8a80() {
   return (neuron0x2bb2110()*3.37659);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8ac0() {
   return (neuron0x2bb2450()*-0.243924);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8b00() {
   return (neuron0x2bb2790()*-2.06322);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8b40() {
   return (neuron0x2bb2ad0()*-1.4071);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8b80() {
   return (neuron0x2bb2e10()*0.205988);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8f00() {
   return (neuron0x2bb2110()*-0.582584);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8f40() {
   return (neuron0x2bb2450()*0.272766);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8f80() {
   return (neuron0x2bb2790()*-0.0767206);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8fc0() {
   return (neuron0x2bb2ad0()*-1.6863);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9000() {
   return (neuron0x2bb2e10()*0.538378);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9380() {
   return (neuron0x2bb2110()*-0.142055);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb93c0() {
   return (neuron0x2bb2450()*-0.395523);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9400() {
   return (neuron0x2bb2790()*-0.0651396);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9440() {
   return (neuron0x2bb2ad0()*0.864567);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9480() {
   return (neuron0x2bb2e10()*-0.028542);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9800() {
   return (neuron0x2bb2110()*-0.617784);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9840() {
   return (neuron0x2bb2450()*0.577436);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9880() {
   return (neuron0x2bb2790()*0.605892);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb98c0() {
   return (neuron0x2bb2ad0()*3.47378);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9900() {
   return (neuron0x2bb2e10()*-1.08337);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9c80() {
   return (neuron0x2bb2110()*-1.51792);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9cc0() {
   return (neuron0x2bb2450()*0.805747);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9d00() {
   return (neuron0x2bb2790()*1.09368);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9d40() {
   return (neuron0x2bb2ad0()*1.82815);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9d80() {
   return (neuron0x2bb2e10()*0.840545);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba100() {
   return (neuron0x2bb2110()*-1.12032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba140() {
   return (neuron0x2bb2450()*0.265723);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba180() {
   return (neuron0x2bb2790()*-0.140742);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba1c0() {
   return (neuron0x2bb2ad0()*0.545716);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba200() {
   return (neuron0x2bb2e10()*1.09555);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba580() {
   return (neuron0x2bb2110()*0.396912);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba5c0() {
   return (neuron0x2bb2450()*-0.831446);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba600() {
   return (neuron0x2bb2790()*-0.150169);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba640() {
   return (neuron0x2bb2ad0()*-3.99647);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba680() {
   return (neuron0x2bb2e10()*-0.165557);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb41a0() {
   return (neuron0x2bb3280()*-0.466567);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb41e0() {
   return (neuron0x2bb35f0()*1.58909);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb46b0() {
   return (neuron0x2bb3a70()*1.12692);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb46f0() {
   return (neuron0x2bb3ef0()*-1.01733);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4b30() {
   return (neuron0x2bb4400()*1.47939);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4b70() {
   return (neuron0x2bb4880()*2.0942);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4fb0() {
   return (neuron0x2bb4d00()*0.868612);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4ff0() {
   return (neuron0x2bb5310()*0.378851);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5530() {
   return (neuron0x2bb5700()*-0.428962);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5570() {
   return (neuron0x2bb5b80()*-1.98492);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb59b0() {
   return (neuron0x2bb6000()*1.50316);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb59f0() {
   return (neuron0x2bb6480()*-0.171576);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5e30() {
   return (neuron0x2bb6990()*1.16368);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5e70() {
   return (neuron0x2bb5100()*1.03017);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb62b0() {
   return (neuron0x2bb72a0()*1.03379);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb62f0() {
   return (neuron0x2bb7720()*-0.195946);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6730() {
   return (neuron0x2bb7ff0()*0.721527);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6770() {
   return (neuron0x2bb82c0()*-2.92734);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6c40() {
   return (neuron0x2bb8740()*-0.65183);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6c80() {
   return (neuron0x2bb8bc0()*1.54081);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7550() {
   return (neuron0x2bb9040()*-0.731736);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7590() {
   return (neuron0x2bb94c0()*-0.70897);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb79d0() {
   return (neuron0x2bb9940()*-0.277638);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7a10() {
   return (neuron0x2bb9dc0()*1.27808);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3030() {
   return (neuron0x2bba240()*1.79249);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb70b0() {
   return (neuron0x2bb3280()*-0.0735898);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb70f0() {
   return (neuron0x2bb35f0()*0.714824);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7130() {
   return (neuron0x2bb3a70()*1.01414);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7170() {
   return (neuron0x2bb3ef0()*-0.508835);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb71b0() {
   return (neuron0x2bb4400()*0.952892);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3070() {
   return (neuron0x2bb4880()*1.01802);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb92f0() {
   return (neuron0x2bb4d00()*0.728641);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9330() {
   return (neuron0x2bb5310()*0.464319);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9770() {
   return (neuron0x2bb5700()*0.1089);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb97b0() {
   return (neuron0x2bb5b80()*0.10331);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9bf0() {
   return (neuron0x2bb6000()*0.89929);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9c30() {
   return (neuron0x2bb6480()*0.401133);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba070() {
   return (neuron0x2bb6990()*0.744493);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba0b0() {
   return (neuron0x2bb5100()*0.712183);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba4f0() {
   return (neuron0x2bb72a0()*0.377062);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba530() {
   return (neuron0x2bb7720()*-0.0465203);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb34a0() {
   return (neuron0x2bb7ff0()*0.168719);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb34e0() {
   return (neuron0x2bb82c0()*-0.0307409);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8570() {
   return (neuron0x2bb8740()*-0.528226);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb85b0() {
   return (neuron0x2bb8bc0()*0.574094);
}

double nnFunc_25_25hi_1500ep__::synapse0x2abf5c0() {
   return (neuron0x2bb9040()*0.283177);
}

double nnFunc_25_25hi_1500ep__::synapse0x2abf600() {
   return (neuron0x2bb94c0()*-0.316466);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbcc00() {
   return (neuron0x2bb9940()*0.618956);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbcc40() {
   return (neuron0x2bb9dc0()*0.954746);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbcc80() {
   return (neuron0x2bba240()*0.403078);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb67c0() {
   return (neuron0x2bb3280()*1.02322);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6800() {
   return (neuron0x2bb35f0()*-0.992605);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6840() {
   return (neuron0x2bb3a70()*-0.795922);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6880() {
   return (neuron0x2bb3ef0()*2.12182);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd210() {
   return (neuron0x2bb4400()*-1.5557);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd250() {
   return (neuron0x2bb4880()*-1.42606);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd290() {
   return (neuron0x2bb4d00()*-0.42743);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd2d0() {
   return (neuron0x2bb5310()*-0.323975);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd310() {
   return (neuron0x2bb5700()*-0.0946903);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd350() {
   return (neuron0x2bb5b80()*-0.141214);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd390() {
   return (neuron0x2bb6000()*-0.729794);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd3d0() {
   return (neuron0x2bb6480()*0.619659);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd410() {
   return (neuron0x2bb6990()*-1.24332);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd450() {
   return (neuron0x2bb5100()*-1.6271);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd490() {
   return (neuron0x2bb72a0()*-1.23695);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd4d0() {
   return (neuron0x2bb7720()*-0.319895);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbce50() {
   return (neuron0x2bb7ff0()*-0.774159);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbce90() {
   return (neuron0x2bb82c0()*2.30197);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd620() {
   return (neuron0x2bb8740()*1.30082);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd660() {
   return (neuron0x2bb8bc0()*-2.0368);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd6a0() {
   return (neuron0x2bb9040()*0.614018);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd6e0() {
   return (neuron0x2bb94c0()*1.33748);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd720() {
   return (neuron0x2bb9940()*0.472686);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd760() {
   return (neuron0x2bb9dc0()*-1.24783);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd7a0() {
   return (neuron0x2bba240()*-0.682485);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdb20() {
   return (neuron0x2bb3280()*-0.244593);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdb60() {
   return (neuron0x2bb35f0()*1.14781);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdba0() {
   return (neuron0x2bb3a70()*1.36713);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdbe0() {
   return (neuron0x2bb3ef0()*-1.72695);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdc20() {
   return (neuron0x2bb4400()*1.24609);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdc60() {
   return (neuron0x2bb4880()*1.59553);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdca0() {
   return (neuron0x2bb4d00()*0.995667);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdce0() {
   return (neuron0x2bb5310()*1.16645);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdd20() {
   return (neuron0x2bb5700()*-0.103583);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdd60() {
   return (neuron0x2bb5b80()*-1.18472);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdda0() {
   return (neuron0x2bb6000()*1.75652);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdde0() {
   return (neuron0x2bb6480()*-0.107572);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbde20() {
   return (neuron0x2bb6990()*0.710444);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbde60() {
   return (neuron0x2bb5100()*0.94286);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdea0() {
   return (neuron0x2bb72a0()*0.687111);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbdee0() {
   return (neuron0x2bb7720()*-0.207507);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd970() {
   return (neuron0x2bb7ff0()*0.282985);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbd9b0() {
   return (neuron0x2bb82c0()*-2.37981);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe030() {
   return (neuron0x2bb8740()*-0.595152);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe070() {
   return (neuron0x2bb8bc0()*1.92431);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe0b0() {
   return (neuron0x2bb9040()*-0.965436);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe0f0() {
   return (neuron0x2bb94c0()*-1.33697);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe130() {
   return (neuron0x2bb9940()*-0.54711);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe170() {
   return (neuron0x2bb9dc0()*1.78391);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe1b0() {
   return (neuron0x2bba240()*1.07393);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe530() {
   return (neuron0x2bb3280()*0.36157);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe570() {
   return (neuron0x2bb35f0()*-1.34201);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe5b0() {
   return (neuron0x2bb3a70()*-0.992241);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe5f0() {
   return (neuron0x2bb3ef0()*1.41719);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe630() {
   return (neuron0x2bb4400()*-1.00787);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe670() {
   return (neuron0x2bb4880()*-0.759734);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe6b0() {
   return (neuron0x2bb4d00()*-0.462629);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe6f0() {
   return (neuron0x2bb5310()*-0.552927);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe730() {
   return (neuron0x2bb5700()*0.340234);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe770() {
   return (neuron0x2bb5b80()*1.15993);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe7b0() {
   return (neuron0x2bb6000()*-0.72848);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe7f0() {
   return (neuron0x2bb6480()*0.46354);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe830() {
   return (neuron0x2bb6990()*-0.435644);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe870() {
   return (neuron0x2bb5100()*-1.01959);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe8b0() {
   return (neuron0x2bb72a0()*-0.47247);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe8f0() {
   return (neuron0x2bb7720()*-0.270411);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe380() {
   return (neuron0x2bb7ff0()*-0.353196);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbe3c0() {
   return (neuron0x2bb82c0()*1.99889);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbea40() {
   return (neuron0x2bb8740()*0.641893);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbea80() {
   return (neuron0x2bb8bc0()*-0.995774);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbeac0() {
   return (neuron0x2bb9040()*0.883546);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbeb00() {
   return (neuron0x2bb94c0()*1.19418);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbeb40() {
   return (neuron0x2bb9940()*0.326506);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbeb80() {
   return (neuron0x2bb9dc0()*-0.703655);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbebc0() {
   return (neuron0x2bba240()*-1.42606);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbef40() {
   return (neuron0x2bb3280()*0.69247);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbef80() {
   return (neuron0x2bb35f0()*0.108903);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbefc0() {
   return (neuron0x2bb3a70()*1.22121);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbf000() {
   return (neuron0x2bb3ef0()*-0.257131);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbf040() {
   return (neuron0x2bb4400()*0.721837);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbf080() {
   return (neuron0x2bb4880()*1.35988);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbf0c0() {
   return (neuron0x2bb4d00()*0.851884);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc2e0() {
   return (neuron0x2bb5310()*0.82285);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc320() {
   return (neuron0x2bb5700()*-0.317162);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc360() {
   return (neuron0x2bb5b80()*-0.579949);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc3a0() {
   return (neuron0x2bb6000()*0.439193);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc3e0() {
   return (neuron0x2bb6480()*0.304445);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc420() {
   return (neuron0x2bb6990()*0.15281);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc460() {
   return (neuron0x2bb5100()*0.417227);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc4a0() {
   return (neuron0x2bb72a0()*0.841407);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc4e0() {
   return (neuron0x2bb7720()*-0.106536);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbed90() {
   return (neuron0x2bb7ff0()*0.797327);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbedd0() {
   return (neuron0x2bb82c0()*-1.47733);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc630() {
   return (neuron0x2bb8740()*-0.84367);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc670() {
   return (neuron0x2bb8bc0()*0.211944);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc6b0() {
   return (neuron0x2bb9040()*-0.260507);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc6f0() {
   return (neuron0x2bb94c0()*-0.953836);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc730() {
   return (neuron0x2bb9940()*-0.13452);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc770() {
   return (neuron0x2bb9dc0()*0.646777);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc7b0() {
   return (neuron0x2bba240()*0.332251);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbcaa0() {
   return (neuron0x2bb3280()*0.0192276);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc01a0() {
   return (neuron0x2bb35f0()*-0.0226736);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc01e0() {
   return (neuron0x2bb3a70()*-0.828886);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0220() {
   return (neuron0x2bb3ef0()*0.469605);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0260() {
   return (neuron0x2bb4400()*-0.432308);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc02a0() {
   return (neuron0x2bb4880()*-0.324931);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc02e0() {
   return (neuron0x2bb4d00()*-0.230763);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0320() {
   return (neuron0x2bb5310()*-0.213507);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0360() {
   return (neuron0x2bb5700()*0.317132);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc03a0() {
   return (neuron0x2bb5b80()*0.181687);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc03e0() {
   return (neuron0x2bb6000()*-0.212222);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0420() {
   return (neuron0x2bb6480()*-0.025258);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0460() {
   return (neuron0x2bb6990()*-0.198495);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc04a0() {
   return (neuron0x2bb5100()*-0.315297);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc04e0() {
   return (neuron0x2bb72a0()*-0.589112);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0520() {
   return (neuron0x2bb7720()*-0.17799);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc980() {
   return (neuron0x2bb7ff0()*-0.291744);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bbc9c0() {
   return (neuron0x2bb82c0()*0.36375);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0670() {
   return (neuron0x2bb8740()*0.319358);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc06b0() {
   return (neuron0x2bb8bc0()*-0.732597);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc06f0() {
   return (neuron0x2bb9040()*0.380399);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0730() {
   return (neuron0x2bb94c0()*0.728163);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0770() {
   return (neuron0x2bb9940()*0.132283);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc07b0() {
   return (neuron0x2bb9dc0()*-0.11847);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc07f0() {
   return (neuron0x2bba240()*-0.865929);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0b70() {
   return (neuron0x2bb3280()*0.221174);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0bb0() {
   return (neuron0x2bb35f0()*0.832768);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0bf0() {
   return (neuron0x2bb3a70()*0.661297);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0c30() {
   return (neuron0x2bb3ef0()*-2.23607);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0c70() {
   return (neuron0x2bb4400()*1.0809);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0cb0() {
   return (neuron0x2bb4880()*1.01357);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0cf0() {
   return (neuron0x2bb4d00()*0.34839);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0d30() {
   return (neuron0x2bb5310()*0.496698);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0d70() {
   return (neuron0x2bb5700()*-0.309375);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0db0() {
   return (neuron0x2bb5b80()*-1.24107);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0df0() {
   return (neuron0x2bb6000()*1.08626);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0e30() {
   return (neuron0x2bb6480()*-0.620679);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0e70() {
   return (neuron0x2bb6990()*0.725181);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0eb0() {
   return (neuron0x2bb5100()*0.804324);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0ef0() {
   return (neuron0x2bb72a0()*0.39236);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0f30() {
   return (neuron0x2bb7720()*-0.11716);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc09c0() {
   return (neuron0x2bb7ff0()*0.399463);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0a00() {
   return (neuron0x2bb82c0()*-2.06495);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1080() {
   return (neuron0x2bb8740()*-0.524665);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc10c0() {
   return (neuron0x2bb8bc0()*1.48093);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1100() {
   return (neuron0x2bb9040()*-1.25829);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1140() {
   return (neuron0x2bb94c0()*-0.785845);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1180() {
   return (neuron0x2bb9940()*-0.603426);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc11c0() {
   return (neuron0x2bb9dc0()*0.565154);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1200() {
   return (neuron0x2bba240()*0.625906);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1580() {
   return (neuron0x2bb3280()*0.529075);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc15c0() {
   return (neuron0x2bb35f0()*0.338852);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1600() {
   return (neuron0x2bb3a70()*-1.14077);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1640() {
   return (neuron0x2bb3ef0()*0.0309243);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1680() {
   return (neuron0x2bb4400()*0.310523);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc16c0() {
   return (neuron0x2bb4880()*-1.41661);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1700() {
   return (neuron0x2bb4d00()*-0.508145);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1740() {
   return (neuron0x2bb5310()*-0.0893334);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1780() {
   return (neuron0x2bb5700()*0.215434);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc17c0() {
   return (neuron0x2bb5b80()*0.877041);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1800() {
   return (neuron0x2bb6000()*-0.0703433);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1840() {
   return (neuron0x2bb6480()*0.192151);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1880() {
   return (neuron0x2bb6990()*-1.1204);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc18c0() {
   return (neuron0x2bb5100()*-0.148902);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1900() {
   return (neuron0x2bb72a0()*-0.663834);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1940() {
   return (neuron0x2bb7720()*-0.119853);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc13d0() {
   return (neuron0x2bb7ff0()*-0.700864);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1410() {
   return (neuron0x2bb82c0()*1.831);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1a90() {
   return (neuron0x2bb8740()*0.175087);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1ad0() {
   return (neuron0x2bb8bc0()*-0.47017);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1b10() {
   return (neuron0x2bb9040()*0.647528);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1b50() {
   return (neuron0x2bb94c0()*0.772436);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1b90() {
   return (neuron0x2bb9940()*0.258313);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1bd0() {
   return (neuron0x2bb9dc0()*-0.995253);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1c10() {
   return (neuron0x2bba240()*-0.717032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1f90() {
   return (neuron0x2bb3280()*-0.169001);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1fd0() {
   return (neuron0x2bb35f0()*-0.705719);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2010() {
   return (neuron0x2bb3a70()*-0.272619);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2050() {
   return (neuron0x2bb3ef0()*1.66292);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2090() {
   return (neuron0x2bb4400()*-0.155561);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc20d0() {
   return (neuron0x2bb4880()*0.109274);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2110() {
   return (neuron0x2bb4d00()*-0.220017);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2150() {
   return (neuron0x2bb5310()*-0.162171);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2190() {
   return (neuron0x2bb5700()*-0.140459);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc21d0() {
   return (neuron0x2bb5b80()*0.361044);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2210() {
   return (neuron0x2bb6000()*-0.630229);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2250() {
   return (neuron0x2bb6480()*-0.0744645);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2290() {
   return (neuron0x2bb6990()*-0.318471);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc22d0() {
   return (neuron0x2bb5100()*-0.235115);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2310() {
   return (neuron0x2bb72a0()*-0.206588);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2350() {
   return (neuron0x2bb7720()*0.315165);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1de0() {
   return (neuron0x2bb7ff0()*-0.0142648);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc1e20() {
   return (neuron0x2bb82c0()*1.31752);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc24a0() {
   return (neuron0x2bb8740()*-0.0153979);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc24e0() {
   return (neuron0x2bb8bc0()*-1.11089);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2520() {
   return (neuron0x2bb9040()*0.747501);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2560() {
   return (neuron0x2bb94c0()*0.881754);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc25a0() {
   return (neuron0x2bb9940()*0.196953);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc25e0() {
   return (neuron0x2bb9dc0()*-0.0178164);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2620() {
   return (neuron0x2bba240()*0.0486046);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc29a0() {
   return (neuron0x2bb3280()*-0.994616);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc29e0() {
   return (neuron0x2bb35f0()*1.19338);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2a20() {
   return (neuron0x2bb3a70()*1.13858);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2a60() {
   return (neuron0x2bb3ef0()*-2.43115);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2aa0() {
   return (neuron0x2bb4400()*0.53114);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2ae0() {
   return (neuron0x2bb4880()*1.01694);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2b20() {
   return (neuron0x2bb4d00()*0.561445);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2b60() {
   return (neuron0x2bb5310()*1.13222);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2ba0() {
   return (neuron0x2bb5700()*-0.424129);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2be0() {
   return (neuron0x2bb5b80()*-1.57754);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2c20() {
   return (neuron0x2bb6000()*1.27775);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2c60() {
   return (neuron0x2bb6480()*-0.582958);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2ca0() {
   return (neuron0x2bb6990()*1.24314);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2ce0() {
   return (neuron0x2bb5100()*1.01441);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2d20() {
   return (neuron0x2bb72a0()*1.45174);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2d60() {
   return (neuron0x2bb7720()*-0.646818);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc27f0() {
   return (neuron0x2bb7ff0()*0.367539);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2830() {
   return (neuron0x2bb82c0()*-2.3263);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2eb0() {
   return (neuron0x2bb8740()*-0.794855);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2ef0() {
   return (neuron0x2bb8bc0()*1.07492);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2f30() {
   return (neuron0x2bb9040()*-1.80635);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2f70() {
   return (neuron0x2bb94c0()*-1.4369);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2fb0() {
   return (neuron0x2bb9940()*-1.47984);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc2ff0() {
   return (neuron0x2bb9dc0()*1.04066);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3030() {
   return (neuron0x2bba240()*1.06414);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc33b0() {
   return (neuron0x2bb3280()*-0.895258);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc33f0() {
   return (neuron0x2bb35f0()*-0.605105);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3430() {
   return (neuron0x2bb3a70()*0.0116943);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3470() {
   return (neuron0x2bb3ef0()*1.72123);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc34b0() {
   return (neuron0x2bb4400()*-0.0152644);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc34f0() {
   return (neuron0x2bb4880()*-0.812611);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3530() {
   return (neuron0x2bb4d00()*-0.219459);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3570() {
   return (neuron0x2bb5310()*-0.662759);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc35b0() {
   return (neuron0x2bb5700()*-0.0436961);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc35f0() {
   return (neuron0x2bb5b80()*-0.295264);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3630() {
   return (neuron0x2bb6000()*-2.1699);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3670() {
   return (neuron0x2bb6480()*0.634347);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc36b0() {
   return (neuron0x2bb6990()*0.275144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc36f0() {
   return (neuron0x2bb5100()*-0.713204);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3730() {
   return (neuron0x2bb72a0()*0.30687);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3770() {
   return (neuron0x2bb7720()*-0.765992);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3200() {
   return (neuron0x2bb7ff0()*-0.614732);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3240() {
   return (neuron0x2bb82c0()*1.52917);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc38c0() {
   return (neuron0x2bb8740()*0.018856);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3900() {
   return (neuron0x2bb8bc0()*-0.723909);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3940() {
   return (neuron0x2bb9040()*1.41658);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3980() {
   return (neuron0x2bb94c0()*0.625343);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc39c0() {
   return (neuron0x2bb9940()*0.56359);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3a00() {
   return (neuron0x2bb9dc0()*0.249527);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3a40() {
   return (neuron0x2bba240()*-0.158986);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3dc0() {
   return (neuron0x2bb3280()*-0.361584);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3e00() {
   return (neuron0x2bb35f0()*-0.304014);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3e40() {
   return (neuron0x2bb3a70()*0.226954);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3e80() {
   return (neuron0x2bb3ef0()*0.239221);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3ec0() {
   return (neuron0x2bb4400()*0.193218);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3f00() {
   return (neuron0x2bb4880()*0.31948);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3f40() {
   return (neuron0x2bb4d00()*0.177128);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3f80() {
   return (neuron0x2bb5310()*0.118144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3fc0() {
   return (neuron0x2bb5700()*-0.513309);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4000() {
   return (neuron0x2bb5b80()*0.0675497);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4040() {
   return (neuron0x2bb6000()*0.527134);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4080() {
   return (neuron0x2bb6480()*-0.442218);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc40c0() {
   return (neuron0x2bb6990()*-0.00352861);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4100() {
   return (neuron0x2bb5100()*-0.026135);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4140() {
   return (neuron0x2bb72a0()*0.435286);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4180() {
   return (neuron0x2bb7720()*-0.348697);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3c10() {
   return (neuron0x2bb7ff0()*0.336433);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc3c50() {
   return (neuron0x2bb82c0()*0.0283022);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc42d0() {
   return (neuron0x2bb8740()*-0.0394218);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4310() {
   return (neuron0x2bb8bc0()*0.725813);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4350() {
   return (neuron0x2bb9040()*-0.422793);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4390() {
   return (neuron0x2bb94c0()*-0.275089);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc43d0() {
   return (neuron0x2bb9940()*-0.111416);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4410() {
   return (neuron0x2bb9dc0()*-0.297544);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4450() {
   return (neuron0x2bba240()*-0.217647);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc47d0() {
   return (neuron0x2bb3280()*0.185055);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4810() {
   return (neuron0x2bb35f0()*-0.416019);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4850() {
   return (neuron0x2bb3a70()*-0.665521);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4890() {
   return (neuron0x2bb3ef0()*-0.257753);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc48d0() {
   return (neuron0x2bb4400()*0.126369);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4910() {
   return (neuron0x2bb4880()*-0.505501);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4950() {
   return (neuron0x2bb4d00()*-0.469702);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4990() {
   return (neuron0x2bb5310()*-0.243082);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc49d0() {
   return (neuron0x2bb5700()*-0.515811);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4a10() {
   return (neuron0x2bb5b80()*0.375868);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4a50() {
   return (neuron0x2bb6000()*0.606934);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4a90() {
   return (neuron0x2bb6480()*0.320945);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4ad0() {
   return (neuron0x2bb6990()*0.0839631);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4b10() {
   return (neuron0x2bb5100()*0.354597);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4b50() {
   return (neuron0x2bb72a0()*-0.527435);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4b90() {
   return (neuron0x2bb7720()*0.0947891);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4620() {
   return (neuron0x2bb7ff0()*-0.476844);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4660() {
   return (neuron0x2bb82c0()*-0.179632);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4ce0() {
   return (neuron0x2bb8740()*0.0170192);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4d20() {
   return (neuron0x2bb8bc0()*0.172089);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4d60() {
   return (neuron0x2bb9040()*-0.696884);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4da0() {
   return (neuron0x2bb94c0()*-0.388435);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4de0() {
   return (neuron0x2bb9940()*-0.175428);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4e20() {
   return (neuron0x2bb9dc0()*-0.0302392);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc4e60() {
   return (neuron0x2bba240()*-0.128118);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc51e0() {
   return (neuron0x2bb3280()*2.05988);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5220() {
   return (neuron0x2bb35f0()*-1.42082);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5260() {
   return (neuron0x2bb3a70()*-2.75147);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc52a0() {
   return (neuron0x2bb3ef0()*4.13636);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc52e0() {
   return (neuron0x2bb4400()*-1.92036);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5320() {
   return (neuron0x2bb4880()*-2.77363);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5360() {
   return (neuron0x2bb4d00()*-1.65081);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc53a0() {
   return (neuron0x2bb5310()*-1.41151);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc53e0() {
   return (neuron0x2bb5700()*1.20715);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5420() {
   return (neuron0x2bb5b80()*1.86859);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5460() {
   return (neuron0x2bb6000()*-1.9905);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc54a0() {
   return (neuron0x2bb6480()*0.780687);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc54e0() {
   return (neuron0x2bb6990()*-2.34025);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5520() {
   return (neuron0x2bb5100()*-1.75776);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5560() {
   return (neuron0x2bb72a0()*-1.63983);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc55a0() {
   return (neuron0x2bb7720()*0.171869);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5030() {
   return (neuron0x2bb7ff0()*-1.1072);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5070() {
   return (neuron0x2bb82c0()*3.47484);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc56f0() {
   return (neuron0x2bb8740()*0.861037);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5730() {
   return (neuron0x2bb8bc0()*-1.75022);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5770() {
   return (neuron0x2bb9040()*1.49607);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc57b0() {
   return (neuron0x2bb94c0()*2.19492);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc57f0() {
   return (neuron0x2bb9940()*1.8177);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5830() {
   return (neuron0x2bb9dc0()*-1.27701);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5870() {
   return (neuron0x2bba240()*-2.16764);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5bf0() {
   return (neuron0x2bb3280()*1.01406);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3410() {
   return (neuron0x2bb35f0()*-0.379147);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3450() {
   return (neuron0x2bb3a70()*-1.11856);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3810() {
   return (neuron0x2bb3ef0()*1.76093);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3850() {
   return (neuron0x2bb4400()*-0.799886);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3c90() {
   return (neuron0x2bb4880()*-0.813551);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3cd0() {
   return (neuron0x2bb4d00()*-0.667103);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4110() {
   return (neuron0x2bb5310()*-0.829139);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4150() {
   return (neuron0x2bb5700()*1.00071);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4620() {
   return (neuron0x2bb5b80()*0.90791);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4660() {
   return (neuron0x2bb6000()*-0.757889);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4aa0() {
   return (neuron0x2bb6480()*0.850433);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4ae0() {
   return (neuron0x2bb6990()*-1.27563);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4f20() {
   return (neuron0x2bb5100()*-0.632845);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb4f60() {
   return (neuron0x2bb72a0()*-0.750794);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb54a0() {
   return (neuron0x2bb7720()*0.0278663);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb54e0() {
   return (neuron0x2bb7ff0()*-0.181767);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5920() {
   return (neuron0x2bb82c0()*1.89729);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5960() {
   return (neuron0x2bb8740()*0.21805);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5da0() {
   return (neuron0x2bb8bc0()*-0.861647);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb5de0() {
   return (neuron0x2bb9040()*1.03214);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6220() {
   return (neuron0x2bb94c0()*1.10539);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6260() {
   return (neuron0x2bb9940()*0.648072);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb66a0() {
   return (neuron0x2bb9dc0()*-0.691245);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb66e0() {
   return (neuron0x2bba240()*-1.17542);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc0060() {
   return (neuron0x2bb3280()*0.63553);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc00a0() {
   return (neuron0x2bb35f0()*-1.49332);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7940() {
   return (neuron0x2bb3a70()*-1.96666);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb7980() {
   return (neuron0x2bb3ef0()*3.19211);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5a40() {
   return (neuron0x2bb4400()*-1.43193);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc5a80() {
   return (neuron0x2bb4880()*-1.6088);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb2cf0() {
   return (neuron0x2bb4d00()*-0.680579);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb2d30() {
   return (neuron0x2bb5310()*-0.550006);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb84e0() {
   return (neuron0x2bb5700()*0.255242);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8520() {
   return (neuron0x2bb5b80()*1.02119);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8960() {
   return (neuron0x2bb6000()*-1.62186);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb89a0() {
   return (neuron0x2bb6480()*0.574211);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8de0() {
   return (neuron0x2bb6990()*-0.731034);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb8e20() {
   return (neuron0x2bb5100()*-1.34157);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9260() {
   return (neuron0x2bb72a0()*-1.4848);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb92a0() {
   return (neuron0x2bb7720()*0.212381);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb96e0() {
   return (neuron0x2bb7ff0()*-1.10305);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9720() {
   return (neuron0x2bb82c0()*2.73704);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9b60() {
   return (neuron0x2bb8740()*1.56222);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9ba0() {
   return (neuron0x2bb8bc0()*-2.10008);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb9fe0() {
   return (neuron0x2bb9040()*1.99493);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba020() {
   return (neuron0x2bb94c0()*1.73576);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba460() {
   return (neuron0x2bb9940()*1.11833);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bba4a0() {
   return (neuron0x2bb9dc0()*-0.949562);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6bb0() {
   return (neuron0x2bba240()*-1.12404);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb6bf0() {
   return (neuron0x2bb3280()*-1.04977);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8e60() {
   return (neuron0x2bb35f0()*1.05326);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8ea0() {
   return (neuron0x2bb3a70()*1.5046);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8ee0() {
   return (neuron0x2bb3ef0()*-2.75679);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8f20() {
   return (neuron0x2bb4400()*0.753854);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8f60() {
   return (neuron0x2bb4880()*1.78877);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8fa0() {
   return (neuron0x2bb4d00()*1.33305);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8fe0() {
   return (neuron0x2bb5310()*1.13639);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9020() {
   return (neuron0x2bb5700()*-1.29237);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9060() {
   return (neuron0x2bb5b80()*-1.90784);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc90a0() {
   return (neuron0x2bb6000()*1.58868);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc90e0() {
   return (neuron0x2bb6480()*-0.71831);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9120() {
   return (neuron0x2bb6990()*1.47572);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9160() {
   return (neuron0x2bb5100()*1.19791);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc91a0() {
   return (neuron0x2bb72a0()*1.09168);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc91e0() {
   return (neuron0x2bb7720()*-0.0969428);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8cb0() {
   return (neuron0x2bb7ff0()*0.541275);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc8cf0() {
   return (neuron0x2bb82c0()*-2.61638);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9330() {
   return (neuron0x2bb8740()*-0.791011);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9370() {
   return (neuron0x2bb8bc0()*1.40389);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc93b0() {
   return (neuron0x2bb9040()*-1.11846);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc93f0() {
   return (neuron0x2bb94c0()*-2.26033);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9430() {
   return (neuron0x2bb9940()*-1.22112);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9470() {
   return (neuron0x2bb9dc0()*1.20642);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc94b0() {
   return (neuron0x2bba240()*1.96978);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9830() {
   return (neuron0x2bb3280()*-0.153917);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9870() {
   return (neuron0x2bb35f0()*-0.0390972);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc98b0() {
   return (neuron0x2bb3a70()*0.689309);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc98f0() {
   return (neuron0x2bb3ef0()*0.311747);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9930() {
   return (neuron0x2bb4400()*0.504591);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9970() {
   return (neuron0x2bb4880()*0.747666);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc99b0() {
   return (neuron0x2bb4d00()*0.30598);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc99f0() {
   return (neuron0x2bb5310()*-0.0685371);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9a30() {
   return (neuron0x2bb5700()*-0.241208);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9a70() {
   return (neuron0x2bb5b80()*-0.373665);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9ab0() {
   return (neuron0x2bb6000()*0.602429);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9af0() {
   return (neuron0x2bb6480()*0.0814438);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9b30() {
   return (neuron0x2bb6990()*0.193175);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9b70() {
   return (neuron0x2bb5100()*0.0626723);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9bb0() {
   return (neuron0x2bb72a0()*0.570059);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9bf0() {
   return (neuron0x2bb7720()*-0.603817);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9680() {
   return (neuron0x2bb7ff0()*0.192806);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc96c0() {
   return (neuron0x2bb82c0()*-0.480952);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9d40() {
   return (neuron0x2bb8740()*0.0415091);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9d80() {
   return (neuron0x2bb8bc0()*-0.0184636);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9dc0() {
   return (neuron0x2bb9040()*-0.369521);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9e00() {
   return (neuron0x2bb94c0()*-0.154);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9e40() {
   return (neuron0x2bb9940()*-0.291042);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9e80() {
   return (neuron0x2bb9dc0()*0.636176);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bc9ec0() {
   return (neuron0x2bba240()*0.110113);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca240() {
   return (neuron0x2bb3280()*-1.21377);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca280() {
   return (neuron0x2bb35f0()*-0.408023);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca2c0() {
   return (neuron0x2bb3a70()*0.154442);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca300() {
   return (neuron0x2bb3ef0()*1.08918);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca340() {
   return (neuron0x2bb4400()*-0.666976);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca380() {
   return (neuron0x2bb4880()*0.332102);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca3c0() {
   return (neuron0x2bb4d00()*0.374894);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca400() {
   return (neuron0x2bb5310()*-0.0232637);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca440() {
   return (neuron0x2bb5700()*0.361728);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca480() {
   return (neuron0x2bb5b80()*0.703958);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca4c0() {
   return (neuron0x2bb6000()*0.405684);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca500() {
   return (neuron0x2bb6480()*0.383363);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca540() {
   return (neuron0x2bb6990()*0.254477);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca580() {
   return (neuron0x2bb5100()*-0.343202);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca5c0() {
   return (neuron0x2bb72a0()*0.333051);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca600() {
   return (neuron0x2bb7720()*-0.0396311);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca090() {
   return (neuron0x2bb7ff0()*-0.264546);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca0d0() {
   return (neuron0x2bb82c0()*0.960733);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca750() {
   return (neuron0x2bb8740()*-0.0355612);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca790() {
   return (neuron0x2bb8bc0()*-0.267476);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca7d0() {
   return (neuron0x2bb9040()*0.715594);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca810() {
   return (neuron0x2bb94c0()*-0.00251234);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca850() {
   return (neuron0x2bb9940()*0.661601);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca890() {
   return (neuron0x2bb9dc0()*-0.449621);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bca8d0() {
   return (neuron0x2bba240()*-0.0322092);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcac50() {
   return (neuron0x2bb3280()*0.833579);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcac90() {
   return (neuron0x2bb35f0()*-0.437647);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcacd0() {
   return (neuron0x2bb3a70()*-1.17631);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcad10() {
   return (neuron0x2bb3ef0()*1.41144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcad50() {
   return (neuron0x2bb4400()*-0.819639);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcad90() {
   return (neuron0x2bb4880()*-1.67264);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcadd0() {
   return (neuron0x2bb4d00()*-0.443823);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcae10() {
   return (neuron0x2bb5310()*-0.785009);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcae50() {
   return (neuron0x2bb5700()*0.386144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcae90() {
   return (neuron0x2bb5b80()*1.41282);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcaed0() {
   return (neuron0x2bb6000()*-0.657019);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcaf10() {
   return (neuron0x2bb6480()*0.555905);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcaf50() {
   return (neuron0x2bb6990()*-1.34634);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcaf90() {
   return (neuron0x2bb5100()*-0.357683);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcafd0() {
   return (neuron0x2bb72a0()*-0.739675);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb010() {
   return (neuron0x2bb7720()*0.384385);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcaaa0() {
   return (neuron0x2bb7ff0()*-0.756246);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcaae0() {
   return (neuron0x2bb82c0()*1.42401);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb160() {
   return (neuron0x2bb8740()*0.705216);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb1a0() {
   return (neuron0x2bb8bc0()*-0.709386);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb1e0() {
   return (neuron0x2bb9040()*1.08292);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb220() {
   return (neuron0x2bb94c0()*1.75449);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb260() {
   return (neuron0x2bb9940()*1.60385);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb2a0() {
   return (neuron0x2bb9dc0()*-1.05328);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb2e0() {
   return (neuron0x2bba240()*-0.87368);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb660() {
   return (neuron0x2bb3280()*-0.169492);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb6a0() {
   return (neuron0x2bb35f0()*1.25227);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb6e0() {
   return (neuron0x2bb3a70()*1.02261);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb720() {
   return (neuron0x2bb3ef0()*-1.67603);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb760() {
   return (neuron0x2bb4400()*2.22298);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb7a0() {
   return (neuron0x2bb4880()*1.18067);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb7e0() {
   return (neuron0x2bb4d00()*0.744461);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb820() {
   return (neuron0x2bb5310()*0.547078);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb860() {
   return (neuron0x2bb5700()*0.286897);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb8a0() {
   return (neuron0x2bb5b80()*-0.0546506);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb8e0() {
   return (neuron0x2bb6000()*1.1018);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb920() {
   return (neuron0x2bb6480()*-0.203474);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb960() {
   return (neuron0x2bb6990()*0.643167);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb9a0() {
   return (neuron0x2bb5100()*1.86718);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb9e0() {
   return (neuron0x2bb72a0()*0.824367);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcba20() {
   return (neuron0x2bb7720()*0.282085);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb4b0() {
   return (neuron0x2bb7ff0()*0.594641);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcb4f0() {
   return (neuron0x2bb82c0()*-1.52078);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbb70() {
   return (neuron0x2bb8740()*-1.0207);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbbb0() {
   return (neuron0x2bb8bc0()*2.4583);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbbf0() {
   return (neuron0x2bb9040()*-0.343387);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbc30() {
   return (neuron0x2bb94c0()*-1.17493);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbc70() {
   return (neuron0x2bb9940()*-1.03768);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbcb0() {
   return (neuron0x2bb9dc0()*1.7022);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbcf0() {
   return (neuron0x2bba240()*0.926424);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc070() {
   return (neuron0x2bb3280()*-0.6138);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc0b0() {
   return (neuron0x2bb35f0()*-0.555233);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc0f0() {
   return (neuron0x2bb3a70()*-0.457367);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc130() {
   return (neuron0x2bb3ef0()*0.706391);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc170() {
   return (neuron0x2bb4400()*-0.635715);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc1b0() {
   return (neuron0x2bb4880()*-0.835162);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc1f0() {
   return (neuron0x2bb4d00()*-0.599054);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc230() {
   return (neuron0x2bb5310()*-0.612976);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc270() {
   return (neuron0x2bb5700()*-0.742963);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc2b0() {
   return (neuron0x2bb5b80()*-0.6735);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc2f0() {
   return (neuron0x2bb6000()*-0.471151);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc330() {
   return (neuron0x2bb6480()*-0.319633);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc370() {
   return (neuron0x2bb6990()*-0.23134);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc3b0() {
   return (neuron0x2bb5100()*-1.01165);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc3f0() {
   return (neuron0x2bb72a0()*-0.212205);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc430() {
   return (neuron0x2bb7720()*-0.826802);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbec0() {
   return (neuron0x2bb7ff0()*-0.663466);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcbf00() {
   return (neuron0x2bb82c0()*0.544766);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc580() {
   return (neuron0x2bb8740()*0.356768);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc5c0() {
   return (neuron0x2bb8bc0()*-1.49565);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc600() {
   return (neuron0x2bb9040()*-0.158067);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc640() {
   return (neuron0x2bb94c0()*1.13519);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc680() {
   return (neuron0x2bb9940()*-0.0970315);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc6c0() {
   return (neuron0x2bb9dc0()*-0.549314);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc700() {
   return (neuron0x2bba240()*-0.255964);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcca80() {
   return (neuron0x2bb3280()*-1.05564);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccac0() {
   return (neuron0x2bb35f0()*1.1144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccb00() {
   return (neuron0x2bb3a70()*0.605735);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccb40() {
   return (neuron0x2bb3ef0()*-1.57841);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccb80() {
   return (neuron0x2bb4400()*0.186394);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccbc0() {
   return (neuron0x2bb4880()*0.597981);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccc00() {
   return (neuron0x2bb4d00()*0.318144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccc40() {
   return (neuron0x2bb5310()*0.260179);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccc80() {
   return (neuron0x2bb5700()*0.0321657);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcccc0() {
   return (neuron0x2bb5b80()*-0.283557);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccd00() {
   return (neuron0x2bb6000()*1.28655);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccd40() {
   return (neuron0x2bb6480()*-0.508539);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccd80() {
   return (neuron0x2bb6990()*0.208696);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccdc0() {
   return (neuron0x2bb5100()*0.505046);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcce00() {
   return (neuron0x2bb72a0()*0.0854256);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcce40() {
   return (neuron0x2bb7720()*0.115139);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc8d0() {
   return (neuron0x2bb7ff0()*0.637969);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcc910() {
   return (neuron0x2bb82c0()*-0.829556);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccf90() {
   return (neuron0x2bb8740()*-0.419045);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bccfd0() {
   return (neuron0x2bb8bc0()*1.60047);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd010() {
   return (neuron0x2bb9040()*-1.00835);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd050() {
   return (neuron0x2bb94c0()*-0.795563);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd090() {
   return (neuron0x2bb9940()*-0.544332);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd0d0() {
   return (neuron0x2bb9dc0()*0.372938);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd110() {
   return (neuron0x2bba240()*0.670335);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd490() {
   return (neuron0x2bb3280()*0.747153);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd4d0() {
   return (neuron0x2bb35f0()*2.96555);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd510() {
   return (neuron0x2bb3a70()*3.01519);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd550() {
   return (neuron0x2bb3ef0()*-5.98877);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd590() {
   return (neuron0x2bb4400()*1.35422);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd5d0() {
   return (neuron0x2bb4880()*3.30628);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd610() {
   return (neuron0x2bb4d00()*1.38313);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd650() {
   return (neuron0x2bb5310()*2.21218);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd690() {
   return (neuron0x2bb5700()*-0.555873);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd6d0() {
   return (neuron0x2bb5b80()*-2.77608);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd710() {
   return (neuron0x2bb6000()*2.17148);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd750() {
   return (neuron0x2bb6480()*-0.376304);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd790() {
   return (neuron0x2bb6990()*2.12987);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd7d0() {
   return (neuron0x2bb5100()*1.6375);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd810() {
   return (neuron0x2bb72a0()*1.43275);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd850() {
   return (neuron0x2bb7720()*-1.24124);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd2e0() {
   return (neuron0x2bb7ff0()*0.616132);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd320() {
   return (neuron0x2bb82c0()*-2.23273);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd9a0() {
   return (neuron0x2bb8740()*-0.906444);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcd9e0() {
   return (neuron0x2bb8bc0()*2.17608);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcda20() {
   return (neuron0x2bb9040()*-1.70996);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcda60() {
   return (neuron0x2bb94c0()*-1.18757);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdaa0() {
   return (neuron0x2bb9940()*-0.828181);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdae0() {
   return (neuron0x2bb9dc0()*1.61889);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdb20() {
   return (neuron0x2bba240()*1.97659);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdd80() {
   return (neuron0x2bbc150()*2.76325);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcddc0() {
   return (neuron0x2bb6f20()*2.78491);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcde00() {
   return (neuron0x2bbccc0()*3.3944);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcde40() {
   return (neuron0x2bbd7e0()*0.864648);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcde80() {
   return (neuron0x2bbe1f0()*0.442464);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdec0() {
   return (neuron0x2bbec00()*1.65482);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdf00() {
   return (neuron0x2bbc7f0()*-0.599929);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdf40() {
   return (neuron0x2bc0830()*-2.54747);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdf80() {
   return (neuron0x2bc1240()*-5.94108);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bcdfc0() {
   return (neuron0x2bc1c50()*2.29132);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce000() {
   return (neuron0x2bc2660()*1.59051);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce040() {
   return (neuron0x2bc3070()*6.19883);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce080() {
   return (neuron0x2bc3a80()*-0.357972);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce0c0() {
   return (neuron0x2bc4490()*-3.82398);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce100() {
   return (neuron0x2bc4ea0()*-7.05068);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce140() {
   return (neuron0x2bc58b0()*-2.9047);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3150() {
   return (neuron0x2bbfed0()*2.83556);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bb3190() {
   return (neuron0x2bc8b20()*3.75507);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce290() {
   return (neuron0x2bc94f0()*2.22354);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce2d0() {
   return (neuron0x2bc9f00()*2.82119);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce310() {
   return (neuron0x2bca910()*-2.36654);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce350() {
   return (neuron0x2bcb320()*-5.10034);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce390() {
   return (neuron0x2bcbd30()*3.5529);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce3d0() {
   return (neuron0x2bcc740()*-2.56361);
}

double nnFunc_25_25hi_1500ep__::synapse0x2bce410() {
   return (neuron0x2bcd150()*7.49184);
}

