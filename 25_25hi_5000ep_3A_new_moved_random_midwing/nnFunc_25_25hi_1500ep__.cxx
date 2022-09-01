#include "25_25hi_5000ep_3A_new_moved_random_midwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1d47fe0();
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
         return neuron0x1d47fe0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2c590() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2c8d0() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2cc10() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2cf50() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2d290() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x1d2d700() {
   double input = -0.241643;
   input += synapse0x1c39980();
   input += synapse0x1d1ba00();
   input += synapse0x1d2d9b0();
   input += synapse0x1d2d9f0();
   input += synapse0x1d2da30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2d700() {
   double input = input0x1d2d700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2da70() {
   double input = -0.402892;
   input += synapse0x1d2ddb0();
   input += synapse0x1d2ddf0();
   input += synapse0x1d2de30();
   input += synapse0x1d2de70();
   input += synapse0x1d2deb0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2da70() {
   double input = input0x1d2da70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2def0() {
   double input = -0.233071;
   input += synapse0x1d2e230();
   input += synapse0x1d2e270();
   input += synapse0x1d2e2b0();
   input += synapse0x1d2e2f0();
   input += synapse0x1d2e330();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2def0() {
   double input = input0x1d2def0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2e370() {
   double input = -0.0880611;
   input += synapse0x1d2e6b0();
   input += synapse0x1d2e6f0();
   input += synapse0x1c2bb70();
   input += synapse0x1c2bbb0();
   input += synapse0x1d2e840();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2e370() {
   double input = input0x1d2e370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2e880() {
   double input = 0.165847;
   input += synapse0x1d2ebc0();
   input += synapse0x1d2ec00();
   input += synapse0x1d2ec40();
   input += synapse0x1d2ec80();
   input += synapse0x1d2ecc0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2e880() {
   double input = input0x1d2e880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2ed00() {
   double input = -0.74935;
   input += synapse0x1d2f040();
   input += synapse0x1d2f080();
   input += synapse0x1d2f0c0();
   input += synapse0x1d2f100();
   input += synapse0x1d2f140();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2ed00() {
   double input = input0x1d2ed00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2f180() {
   double input = -4.5082;
   input += synapse0x1d2f4c0();
   input += synapse0x1d2f500();
   input += synapse0x1d2f540();
   input += synapse0x1d2e730();
   input += synapse0x1d2e770();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2f180() {
   double input = input0x1d2f180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2f790() {
   double input = 0.637834;
   input += synapse0x1d2fa40();
   input += synapse0x1d2fa80();
   input += synapse0x1d2fac0();
   input += synapse0x1d2fb00();
   input += synapse0x1d2fb40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2f790() {
   double input = input0x1d2f790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2fb80() {
   double input = 0.688116;
   input += synapse0x1d2fec0();
   input += synapse0x1d2ff00();
   input += synapse0x1d2ff40();
   input += synapse0x1d2ff80();
   input += synapse0x1d2ffc0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2fb80() {
   double input = input0x1d2fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d30000() {
   double input = -3.70076;
   input += synapse0x1d30340();
   input += synapse0x1d30380();
   input += synapse0x1d303c0();
   input += synapse0x1d30400();
   input += synapse0x1d30440();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d30000() {
   double input = input0x1d30000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d30480() {
   double input = -0.10673;
   input += synapse0x1d307c0();
   input += synapse0x1d30800();
   input += synapse0x1d30840();
   input += synapse0x1d30880();
   input += synapse0x1d308c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d30480() {
   double input = input0x1d30480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d30900() {
   double input = 4.3601;
   input += synapse0x1c2b9c0();
   input += synapse0x1c2ba00();
   input += synapse0x1d30d50();
   input += synapse0x1d30d90();
   input += synapse0x1d30dd0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d30900() {
   double input = input0x1d30900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d30e10() {
   double input = -0.145661;
   input += synapse0x1d31150();
   input += synapse0x1d31190();
   input += synapse0x1d311d0();
   input += synapse0x1d31210();
   input += synapse0x1d31250();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d30e10() {
   double input = input0x1d30e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d2f580() {
   double input = -0.203215;
   input += synapse0x1c2c190();
   input += synapse0x1d2f710();
   input += synapse0x1d2f750();
   input += synapse0x1d316a0();
   input += synapse0x1d316e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d2f580() {
   double input = input0x1d2f580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d31720() {
   double input = -0.683764;
   input += synapse0x1d31a60();
   input += synapse0x1d31aa0();
   input += synapse0x1d31ae0();
   input += synapse0x1d31b20();
   input += synapse0x1d31b60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d31720() {
   double input = input0x1d31720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d31ba0() {
   double input = 0.0389555;
   input += synapse0x1d31ee0();
   input += synapse0x1d2c7b0();
   input += synapse0x1d2c7f0();
   input += synapse0x1d2caf0();
   input += synapse0x1d2cb30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d31ba0() {
   double input = input0x1d31ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d32470() {
   double input = -0.34407;
   input += synapse0x1d32600();
   input += synapse0x1d32640();
   input += synapse0x1d32680();
   input += synapse0x1d326c0();
   input += synapse0x1d32700();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d32470() {
   double input = input0x1d32470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d32740() {
   double input = -0.32982;
   input += synapse0x1d32a80();
   input += synapse0x1d32ac0();
   input += synapse0x1d32b00();
   input += synapse0x1d32b40();
   input += synapse0x1d32b80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d32740() {
   double input = input0x1d32740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d32bc0() {
   double input = 0.206278;
   input += synapse0x1d32f00();
   input += synapse0x1d32f40();
   input += synapse0x1d32f80();
   input += synapse0x1d32fc0();
   input += synapse0x1d33000();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d32bc0() {
   double input = input0x1d32bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d33040() {
   double input = 0.306866;
   input += synapse0x1d33380();
   input += synapse0x1d333c0();
   input += synapse0x1d33400();
   input += synapse0x1d33440();
   input += synapse0x1d33480();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d33040() {
   double input = input0x1d33040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d334c0() {
   double input = 1.00686;
   input += synapse0x1d33800();
   input += synapse0x1d33840();
   input += synapse0x1d33880();
   input += synapse0x1d338c0();
   input += synapse0x1d33900();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d334c0() {
   double input = input0x1d334c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d33940() {
   double input = -1.46723;
   input += synapse0x1d33c80();
   input += synapse0x1d33cc0();
   input += synapse0x1d33d00();
   input += synapse0x1d33d40();
   input += synapse0x1d33d80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d33940() {
   double input = input0x1d33940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d33dc0() {
   double input = -0.109752;
   input += synapse0x1d34100();
   input += synapse0x1d34140();
   input += synapse0x1d34180();
   input += synapse0x1d341c0();
   input += synapse0x1d34200();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d33dc0() {
   double input = input0x1d33dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d34240() {
   double input = -0.277452;
   input += synapse0x1d34580();
   input += synapse0x1d345c0();
   input += synapse0x1d34600();
   input += synapse0x1d34640();
   input += synapse0x1d34680();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d34240() {
   double input = input0x1d34240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d346c0() {
   double input = 0.142071;
   input += synapse0x1d34a00();
   input += synapse0x1d34a40();
   input += synapse0x1d34a80();
   input += synapse0x1d34ac0();
   input += synapse0x1d34b00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d346c0() {
   double input = input0x1d346c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d365d0() {
   double input = 0.107335;
   input += synapse0x1d2e620();
   input += synapse0x1d2e660();
   input += synapse0x1d2eb30();
   input += synapse0x1d2eb70();
   input += synapse0x1d2efb0();
   input += synapse0x1d2eff0();
   input += synapse0x1d2f430();
   input += synapse0x1d2f470();
   input += synapse0x1d2f9b0();
   input += synapse0x1d2f9f0();
   input += synapse0x1d2fe30();
   input += synapse0x1d2fe70();
   input += synapse0x1d302b0();
   input += synapse0x1d302f0();
   input += synapse0x1d30730();
   input += synapse0x1d30770();
   input += synapse0x1d30bb0();
   input += synapse0x1d30bf0();
   input += synapse0x1d310c0();
   input += synapse0x1d31100();
   input += synapse0x1d319d0();
   input += synapse0x1d31a10();
   input += synapse0x1d31e50();
   input += synapse0x1d31e90();
   input += synapse0x1d2d4b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d365d0() {
   double input = input0x1d365d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d313a0() {
   double input = 0.149499;
   input += synapse0x1d31530();
   input += synapse0x1d31570();
   input += synapse0x1d315b0();
   input += synapse0x1d315f0();
   input += synapse0x1d31630();
   input += synapse0x1d2d4f0();
   input += synapse0x1d33770();
   input += synapse0x1d337b0();
   input += synapse0x1d33bf0();
   input += synapse0x1d33c30();
   input += synapse0x1d34070();
   input += synapse0x1d340b0();
   input += synapse0x1d344f0();
   input += synapse0x1d34530();
   input += synapse0x1d34970();
   input += synapse0x1d349b0();
   input += synapse0x1d2d920();
   input += synapse0x1d2d960();
   input += synapse0x1d329f0();
   input += synapse0x1d32a30();
   input += synapse0x1c39a50();
   input += synapse0x1c39a90();
   input += synapse0x1d37080();
   input += synapse0x1d370c0();
   input += synapse0x1d37100();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d313a0() {
   double input = input0x1d313a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d37140() {
   double input = 0.265583;
   input += synapse0x1d30c40();
   input += synapse0x1d30c80();
   input += synapse0x1d30cc0();
   input += synapse0x1d30d00();
   input += synapse0x1d37690();
   input += synapse0x1d376d0();
   input += synapse0x1d37710();
   input += synapse0x1d37750();
   input += synapse0x1d37790();
   input += synapse0x1d377d0();
   input += synapse0x1d37810();
   input += synapse0x1d37850();
   input += synapse0x1d37890();
   input += synapse0x1d378d0();
   input += synapse0x1d37910();
   input += synapse0x1d37950();
   input += synapse0x1d372d0();
   input += synapse0x1d37310();
   input += synapse0x1d37aa0();
   input += synapse0x1d37ae0();
   input += synapse0x1d37b20();
   input += synapse0x1d37b60();
   input += synapse0x1d37ba0();
   input += synapse0x1d37be0();
   input += synapse0x1d37c20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d37140() {
   double input = input0x1d37140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d37c60() {
   double input = -0.0901674;
   input += synapse0x1d37fa0();
   input += synapse0x1d37fe0();
   input += synapse0x1d38020();
   input += synapse0x1d38060();
   input += synapse0x1d380a0();
   input += synapse0x1d380e0();
   input += synapse0x1d38120();
   input += synapse0x1d38160();
   input += synapse0x1d381a0();
   input += synapse0x1d381e0();
   input += synapse0x1d38220();
   input += synapse0x1d38260();
   input += synapse0x1d382a0();
   input += synapse0x1d382e0();
   input += synapse0x1d38320();
   input += synapse0x1d38360();
   input += synapse0x1d37df0();
   input += synapse0x1d37e30();
   input += synapse0x1d384b0();
   input += synapse0x1d384f0();
   input += synapse0x1d38530();
   input += synapse0x1d38570();
   input += synapse0x1d385b0();
   input += synapse0x1d385f0();
   input += synapse0x1d38630();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d37c60() {
   double input = input0x1d37c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d38670() {
   double input = 0.310049;
   input += synapse0x1d389b0();
   input += synapse0x1d389f0();
   input += synapse0x1d38a30();
   input += synapse0x1d38a70();
   input += synapse0x1d38ab0();
   input += synapse0x1d38af0();
   input += synapse0x1d38b30();
   input += synapse0x1d38b70();
   input += synapse0x1d38bb0();
   input += synapse0x1d38bf0();
   input += synapse0x1d38c30();
   input += synapse0x1d38c70();
   input += synapse0x1d38cb0();
   input += synapse0x1d38cf0();
   input += synapse0x1d38d30();
   input += synapse0x1d38d70();
   input += synapse0x1d38800();
   input += synapse0x1d38840();
   input += synapse0x1d38ec0();
   input += synapse0x1d38f00();
   input += synapse0x1d38f40();
   input += synapse0x1d38f80();
   input += synapse0x1d38fc0();
   input += synapse0x1d39000();
   input += synapse0x1d39040();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d38670() {
   double input = input0x1d38670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d39080() {
   double input = 0.246854;
   input += synapse0x1d393c0();
   input += synapse0x1d39400();
   input += synapse0x1d39440();
   input += synapse0x1d39480();
   input += synapse0x1d394c0();
   input += synapse0x1d39500();
   input += synapse0x1d39540();
   input += synapse0x1d36760();
   input += synapse0x1d367a0();
   input += synapse0x1d367e0();
   input += synapse0x1d36820();
   input += synapse0x1d36860();
   input += synapse0x1d368a0();
   input += synapse0x1d368e0();
   input += synapse0x1d36920();
   input += synapse0x1d36960();
   input += synapse0x1d39210();
   input += synapse0x1d39250();
   input += synapse0x1d36ab0();
   input += synapse0x1d36af0();
   input += synapse0x1d36b30();
   input += synapse0x1d36b70();
   input += synapse0x1d36bb0();
   input += synapse0x1d36bf0();
   input += synapse0x1d36c30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d39080() {
   double input = input0x1d39080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d36c70() {
   double input = 0.549959;
   input += synapse0x1d36f20();
   input += synapse0x1d3a620();
   input += synapse0x1d3a660();
   input += synapse0x1d3a6a0();
   input += synapse0x1d3a6e0();
   input += synapse0x1d3a720();
   input += synapse0x1d3a760();
   input += synapse0x1d3a7a0();
   input += synapse0x1d3a7e0();
   input += synapse0x1d3a820();
   input += synapse0x1d3a860();
   input += synapse0x1d3a8a0();
   input += synapse0x1d3a8e0();
   input += synapse0x1d3a920();
   input += synapse0x1d3a960();
   input += synapse0x1d3a9a0();
   input += synapse0x1d36e00();
   input += synapse0x1d36e40();
   input += synapse0x1d3aaf0();
   input += synapse0x1d3ab30();
   input += synapse0x1d3ab70();
   input += synapse0x1d3abb0();
   input += synapse0x1d3abf0();
   input += synapse0x1d3ac30();
   input += synapse0x1d3ac70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d36c70() {
   double input = input0x1d36c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3acb0() {
   double input = 0.24688;
   input += synapse0x1d3aff0();
   input += synapse0x1d3b030();
   input += synapse0x1d3b070();
   input += synapse0x1d3b0b0();
   input += synapse0x1d3b0f0();
   input += synapse0x1d3b130();
   input += synapse0x1d3b170();
   input += synapse0x1d3b1b0();
   input += synapse0x1d3b1f0();
   input += synapse0x1d3b230();
   input += synapse0x1d3b270();
   input += synapse0x1d3b2b0();
   input += synapse0x1d3b2f0();
   input += synapse0x1d3b330();
   input += synapse0x1d3b370();
   input += synapse0x1d3b3b0();
   input += synapse0x1d3ae40();
   input += synapse0x1d3ae80();
   input += synapse0x1d3b500();
   input += synapse0x1d3b540();
   input += synapse0x1d3b580();
   input += synapse0x1d3b5c0();
   input += synapse0x1d3b600();
   input += synapse0x1d3b640();
   input += synapse0x1d3b680();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3acb0() {
   double input = input0x1d3acb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3b6c0() {
   double input = -0.367819;
   input += synapse0x1d3ba00();
   input += synapse0x1d3ba40();
   input += synapse0x1d3ba80();
   input += synapse0x1d3bac0();
   input += synapse0x1d3bb00();
   input += synapse0x1d3bb40();
   input += synapse0x1d3bb80();
   input += synapse0x1d3bbc0();
   input += synapse0x1d3bc00();
   input += synapse0x1d3bc40();
   input += synapse0x1d3bc80();
   input += synapse0x1d3bcc0();
   input += synapse0x1d3bd00();
   input += synapse0x1d3bd40();
   input += synapse0x1d3bd80();
   input += synapse0x1d3bdc0();
   input += synapse0x1d3b850();
   input += synapse0x1d3b890();
   input += synapse0x1d3bf10();
   input += synapse0x1d3bf50();
   input += synapse0x1d3bf90();
   input += synapse0x1d3bfd0();
   input += synapse0x1d3c010();
   input += synapse0x1d3c050();
   input += synapse0x1d3c090();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3b6c0() {
   double input = input0x1d3b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3c0d0() {
   double input = -0.348174;
   input += synapse0x1d3c410();
   input += synapse0x1d3c450();
   input += synapse0x1d3c490();
   input += synapse0x1d3c4d0();
   input += synapse0x1d3c510();
   input += synapse0x1d3c550();
   input += synapse0x1d3c590();
   input += synapse0x1d3c5d0();
   input += synapse0x1d3c610();
   input += synapse0x1d3c650();
   input += synapse0x1d3c690();
   input += synapse0x1d3c6d0();
   input += synapse0x1d3c710();
   input += synapse0x1d3c750();
   input += synapse0x1d3c790();
   input += synapse0x1d3c7d0();
   input += synapse0x1d3c260();
   input += synapse0x1d3c2a0();
   input += synapse0x1d3c920();
   input += synapse0x1d3c960();
   input += synapse0x1d3c9a0();
   input += synapse0x1d3c9e0();
   input += synapse0x1d3ca20();
   input += synapse0x1d3ca60();
   input += synapse0x1d3caa0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3c0d0() {
   double input = input0x1d3c0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3cae0() {
   double input = 0.0308892;
   input += synapse0x1d3ce20();
   input += synapse0x1d3ce60();
   input += synapse0x1d3cea0();
   input += synapse0x1d3cee0();
   input += synapse0x1d3cf20();
   input += synapse0x1d3cf60();
   input += synapse0x1d3cfa0();
   input += synapse0x1d3cfe0();
   input += synapse0x1d3d020();
   input += synapse0x1d3d060();
   input += synapse0x1d3d0a0();
   input += synapse0x1d3d0e0();
   input += synapse0x1d3d120();
   input += synapse0x1d3d160();
   input += synapse0x1d3d1a0();
   input += synapse0x1d3d1e0();
   input += synapse0x1d3cc70();
   input += synapse0x1d3ccb0();
   input += synapse0x1d3d330();
   input += synapse0x1d3d370();
   input += synapse0x1d3d3b0();
   input += synapse0x1d3d3f0();
   input += synapse0x1d3d430();
   input += synapse0x1d3d470();
   input += synapse0x1d3d4b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3cae0() {
   double input = input0x1d3cae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3d4f0() {
   double input = 0.193781;
   input += synapse0x1d3d830();
   input += synapse0x1d3d870();
   input += synapse0x1d3d8b0();
   input += synapse0x1d3d8f0();
   input += synapse0x1d3d930();
   input += synapse0x1d3d970();
   input += synapse0x1d3d9b0();
   input += synapse0x1d3d9f0();
   input += synapse0x1d3da30();
   input += synapse0x1d3da70();
   input += synapse0x1d3dab0();
   input += synapse0x1d3daf0();
   input += synapse0x1d3db30();
   input += synapse0x1d3db70();
   input += synapse0x1d3dbb0();
   input += synapse0x1d3dbf0();
   input += synapse0x1d3d680();
   input += synapse0x1d3d6c0();
   input += synapse0x1d3dd40();
   input += synapse0x1d3dd80();
   input += synapse0x1d3ddc0();
   input += synapse0x1d3de00();
   input += synapse0x1d3de40();
   input += synapse0x1d3de80();
   input += synapse0x1d3dec0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3d4f0() {
   double input = input0x1d3d4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3df00() {
   double input = -0.123515;
   input += synapse0x1d3e240();
   input += synapse0x1d3e280();
   input += synapse0x1d3e2c0();
   input += synapse0x1d3e300();
   input += synapse0x1d3e340();
   input += synapse0x1d3e380();
   input += synapse0x1d3e3c0();
   input += synapse0x1d3e400();
   input += synapse0x1d3e440();
   input += synapse0x1d3e480();
   input += synapse0x1d3e4c0();
   input += synapse0x1d3e500();
   input += synapse0x1d3e540();
   input += synapse0x1d3e580();
   input += synapse0x1d3e5c0();
   input += synapse0x1d3e600();
   input += synapse0x1d3e090();
   input += synapse0x1d3e0d0();
   input += synapse0x1d3e750();
   input += synapse0x1d3e790();
   input += synapse0x1d3e7d0();
   input += synapse0x1d3e810();
   input += synapse0x1d3e850();
   input += synapse0x1d3e890();
   input += synapse0x1d3e8d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3df00() {
   double input = input0x1d3df00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3e910() {
   double input = 0.0386333;
   input += synapse0x1d3ec50();
   input += synapse0x1d3ec90();
   input += synapse0x1d3ecd0();
   input += synapse0x1d3ed10();
   input += synapse0x1d3ed50();
   input += synapse0x1d3ed90();
   input += synapse0x1d3edd0();
   input += synapse0x1d3ee10();
   input += synapse0x1d3ee50();
   input += synapse0x1d3ee90();
   input += synapse0x1d3eed0();
   input += synapse0x1d3ef10();
   input += synapse0x1d3ef50();
   input += synapse0x1d3ef90();
   input += synapse0x1d3efd0();
   input += synapse0x1d3f010();
   input += synapse0x1d3eaa0();
   input += synapse0x1d3eae0();
   input += synapse0x1d3f160();
   input += synapse0x1d3f1a0();
   input += synapse0x1d3f1e0();
   input += synapse0x1d3f220();
   input += synapse0x1d3f260();
   input += synapse0x1d3f2a0();
   input += synapse0x1d3f2e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3e910() {
   double input = input0x1d3e910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3f320() {
   double input = -0.119559;
   input += synapse0x1d3f660();
   input += synapse0x1d3f6a0();
   input += synapse0x1d3f6e0();
   input += synapse0x1d3f720();
   input += synapse0x1d3f760();
   input += synapse0x1d3f7a0();
   input += synapse0x1d3f7e0();
   input += synapse0x1d3f820();
   input += synapse0x1d3f860();
   input += synapse0x1d3f8a0();
   input += synapse0x1d3f8e0();
   input += synapse0x1d3f920();
   input += synapse0x1d3f960();
   input += synapse0x1d3f9a0();
   input += synapse0x1d3f9e0();
   input += synapse0x1d3fa20();
   input += synapse0x1d3f4b0();
   input += synapse0x1d3f4f0();
   input += synapse0x1d3fb70();
   input += synapse0x1d3fbb0();
   input += synapse0x1d3fbf0();
   input += synapse0x1d3fc30();
   input += synapse0x1d3fc70();
   input += synapse0x1d3fcb0();
   input += synapse0x1d3fcf0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3f320() {
   double input = input0x1d3f320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3fd30() {
   double input = -0.169206;
   input += synapse0x1d40070();
   input += synapse0x1d2d890();
   input += synapse0x1d2d8d0();
   input += synapse0x1d2dc90();
   input += synapse0x1d2dcd0();
   input += synapse0x1d2e110();
   input += synapse0x1d2e150();
   input += synapse0x1d2e590();
   input += synapse0x1d2e5d0();
   input += synapse0x1d2eaa0();
   input += synapse0x1d2eae0();
   input += synapse0x1d2ef20();
   input += synapse0x1d2ef60();
   input += synapse0x1d2f3a0();
   input += synapse0x1d2f3e0();
   input += synapse0x1d2f920();
   input += synapse0x1d2f960();
   input += synapse0x1d2fda0();
   input += synapse0x1d2fde0();
   input += synapse0x1d30220();
   input += synapse0x1d30260();
   input += synapse0x1d306a0();
   input += synapse0x1d306e0();
   input += synapse0x1d30b20();
   input += synapse0x1d30b60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3fd30() {
   double input = input0x1d3fd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d3a350() {
   double input = -0.300323;
   input += synapse0x1d3a4e0();
   input += synapse0x1d3a520();
   input += synapse0x1d31dc0();
   input += synapse0x1d31e00();
   input += synapse0x1d3fec0();
   input += synapse0x1d3ff00();
   input += synapse0x1d2d170();
   input += synapse0x1d2d1b0();
   input += synapse0x1d32960();
   input += synapse0x1d329a0();
   input += synapse0x1d32de0();
   input += synapse0x1d32e20();
   input += synapse0x1d33260();
   input += synapse0x1d332a0();
   input += synapse0x1d336e0();
   input += synapse0x1d33720();
   input += synapse0x1d33b60();
   input += synapse0x1d33ba0();
   input += synapse0x1d33fe0();
   input += synapse0x1d34020();
   input += synapse0x1d34460();
   input += synapse0x1d344a0();
   input += synapse0x1d348e0();
   input += synapse0x1d34920();
   input += synapse0x1d31030();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d3a350() {
   double input = input0x1d3a350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d42fa0() {
   double input = -0.118855;
   input += synapse0x1d31070();
   input += synapse0x1d432e0();
   input += synapse0x1d43320();
   input += synapse0x1d43360();
   input += synapse0x1d433a0();
   input += synapse0x1d433e0();
   input += synapse0x1d43420();
   input += synapse0x1d43460();
   input += synapse0x1d434a0();
   input += synapse0x1d434e0();
   input += synapse0x1d43520();
   input += synapse0x1d43560();
   input += synapse0x1d435a0();
   input += synapse0x1d435e0();
   input += synapse0x1d43620();
   input += synapse0x1d43660();
   input += synapse0x1d43130();
   input += synapse0x1d43170();
   input += synapse0x1d437b0();
   input += synapse0x1d437f0();
   input += synapse0x1d43830();
   input += synapse0x1d43870();
   input += synapse0x1d438b0();
   input += synapse0x1d438f0();
   input += synapse0x1d43930();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d42fa0() {
   double input = input0x1d42fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d43970() {
   double input = -0.398172;
   input += synapse0x1d43cb0();
   input += synapse0x1d43cf0();
   input += synapse0x1d43d30();
   input += synapse0x1d43d70();
   input += synapse0x1d43db0();
   input += synapse0x1d43df0();
   input += synapse0x1d43e30();
   input += synapse0x1d43e70();
   input += synapse0x1d43eb0();
   input += synapse0x1d43ef0();
   input += synapse0x1d43f30();
   input += synapse0x1d43f70();
   input += synapse0x1d43fb0();
   input += synapse0x1d43ff0();
   input += synapse0x1d44030();
   input += synapse0x1d44070();
   input += synapse0x1d43b00();
   input += synapse0x1d43b40();
   input += synapse0x1d441c0();
   input += synapse0x1d44200();
   input += synapse0x1d44240();
   input += synapse0x1d44280();
   input += synapse0x1d442c0();
   input += synapse0x1d44300();
   input += synapse0x1d44340();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d43970() {
   double input = input0x1d43970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d44380() {
   double input = -0.103643;
   input += synapse0x1d446c0();
   input += synapse0x1d44700();
   input += synapse0x1d44740();
   input += synapse0x1d44780();
   input += synapse0x1d447c0();
   input += synapse0x1d44800();
   input += synapse0x1d44840();
   input += synapse0x1d44880();
   input += synapse0x1d448c0();
   input += synapse0x1d44900();
   input += synapse0x1d44940();
   input += synapse0x1d44980();
   input += synapse0x1d449c0();
   input += synapse0x1d44a00();
   input += synapse0x1d44a40();
   input += synapse0x1d44a80();
   input += synapse0x1d44510();
   input += synapse0x1d44550();
   input += synapse0x1d44bd0();
   input += synapse0x1d44c10();
   input += synapse0x1d44c50();
   input += synapse0x1d44c90();
   input += synapse0x1d44cd0();
   input += synapse0x1d44d10();
   input += synapse0x1d44d50();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d44380() {
   double input = input0x1d44380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d44d90() {
   double input = 0.206409;
   input += synapse0x1d450d0();
   input += synapse0x1d45110();
   input += synapse0x1d45150();
   input += synapse0x1d45190();
   input += synapse0x1d451d0();
   input += synapse0x1d45210();
   input += synapse0x1d45250();
   input += synapse0x1d45290();
   input += synapse0x1d452d0();
   input += synapse0x1d45310();
   input += synapse0x1d45350();
   input += synapse0x1d45390();
   input += synapse0x1d453d0();
   input += synapse0x1d45410();
   input += synapse0x1d45450();
   input += synapse0x1d45490();
   input += synapse0x1d44f20();
   input += synapse0x1d44f60();
   input += synapse0x1d455e0();
   input += synapse0x1d45620();
   input += synapse0x1d45660();
   input += synapse0x1d456a0();
   input += synapse0x1d456e0();
   input += synapse0x1d45720();
   input += synapse0x1d45760();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d44d90() {
   double input = input0x1d44d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d457a0() {
   double input = -0.54093;
   input += synapse0x1d45ae0();
   input += synapse0x1d45b20();
   input += synapse0x1d45b60();
   input += synapse0x1d45ba0();
   input += synapse0x1d45be0();
   input += synapse0x1d45c20();
   input += synapse0x1d45c60();
   input += synapse0x1d45ca0();
   input += synapse0x1d45ce0();
   input += synapse0x1d45d20();
   input += synapse0x1d45d60();
   input += synapse0x1d45da0();
   input += synapse0x1d45de0();
   input += synapse0x1d45e20();
   input += synapse0x1d45e60();
   input += synapse0x1d45ea0();
   input += synapse0x1d45930();
   input += synapse0x1d45970();
   input += synapse0x1d45ff0();
   input += synapse0x1d46030();
   input += synapse0x1d46070();
   input += synapse0x1d460b0();
   input += synapse0x1d460f0();
   input += synapse0x1d46130();
   input += synapse0x1d46170();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d457a0() {
   double input = input0x1d457a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d461b0() {
   double input = 0.170839;
   input += synapse0x1d464f0();
   input += synapse0x1d46530();
   input += synapse0x1d46570();
   input += synapse0x1d465b0();
   input += synapse0x1d465f0();
   input += synapse0x1d46630();
   input += synapse0x1d46670();
   input += synapse0x1d466b0();
   input += synapse0x1d466f0();
   input += synapse0x1d46730();
   input += synapse0x1d46770();
   input += synapse0x1d467b0();
   input += synapse0x1d467f0();
   input += synapse0x1d46830();
   input += synapse0x1d46870();
   input += synapse0x1d468b0();
   input += synapse0x1d46340();
   input += synapse0x1d46380();
   input += synapse0x1d46a00();
   input += synapse0x1d46a40();
   input += synapse0x1d46a80();
   input += synapse0x1d46ac0();
   input += synapse0x1d46b00();
   input += synapse0x1d46b40();
   input += synapse0x1d46b80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d461b0() {
   double input = input0x1d461b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d46bc0() {
   double input = -0.00585689;
   input += synapse0x1d46f00();
   input += synapse0x1d46f40();
   input += synapse0x1d46f80();
   input += synapse0x1d46fc0();
   input += synapse0x1d47000();
   input += synapse0x1d47040();
   input += synapse0x1d47080();
   input += synapse0x1d470c0();
   input += synapse0x1d47100();
   input += synapse0x1d47140();
   input += synapse0x1d47180();
   input += synapse0x1d471c0();
   input += synapse0x1d47200();
   input += synapse0x1d47240();
   input += synapse0x1d47280();
   input += synapse0x1d472c0();
   input += synapse0x1d46d50();
   input += synapse0x1d46d90();
   input += synapse0x1d47410();
   input += synapse0x1d47450();
   input += synapse0x1d47490();
   input += synapse0x1d474d0();
   input += synapse0x1d47510();
   input += synapse0x1d47550();
   input += synapse0x1d47590();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d46bc0() {
   double input = input0x1d46bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d475d0() {
   double input = 0.128104;
   input += synapse0x1d47910();
   input += synapse0x1d47950();
   input += synapse0x1d47990();
   input += synapse0x1d479d0();
   input += synapse0x1d47a10();
   input += synapse0x1d47a50();
   input += synapse0x1d47a90();
   input += synapse0x1d47ad0();
   input += synapse0x1d47b10();
   input += synapse0x1d47b50();
   input += synapse0x1d47b90();
   input += synapse0x1d47bd0();
   input += synapse0x1d47c10();
   input += synapse0x1d47c50();
   input += synapse0x1d47c90();
   input += synapse0x1d47cd0();
   input += synapse0x1d47760();
   input += synapse0x1d477a0();
   input += synapse0x1d47e20();
   input += synapse0x1d47e60();
   input += synapse0x1d47ea0();
   input += synapse0x1d47ee0();
   input += synapse0x1d47f20();
   input += synapse0x1d47f60();
   input += synapse0x1d47fa0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d475d0() {
   double input = input0x1d475d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1d47fe0() {
   double input = -0.209902;
   input += synapse0x1d48200();
   input += synapse0x1d48240();
   input += synapse0x1d48280();
   input += synapse0x1d482c0();
   input += synapse0x1d48300();
   input += synapse0x1d48340();
   input += synapse0x1d48380();
   input += synapse0x1d483c0();
   input += synapse0x1d48400();
   input += synapse0x1d48440();
   input += synapse0x1d48480();
   input += synapse0x1d484c0();
   input += synapse0x1d48500();
   input += synapse0x1d48540();
   input += synapse0x1d48580();
   input += synapse0x1d485c0();
   input += synapse0x1d2d5d0();
   input += synapse0x1d2d610();
   input += synapse0x1d48710();
   input += synapse0x1d48750();
   input += synapse0x1d48790();
   input += synapse0x1d487d0();
   input += synapse0x1d48810();
   input += synapse0x1d48850();
   input += synapse0x1d48890();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1d47fe0() {
   double input = input0x1d47fe0();
   return (input * 8.36458)+120.208;
}

double nnFunc_25_25hi_1500ep__::synapse0x1c39980() {
   return (neuron0x1d2c590()*0.250655);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d1ba00() {
   return (neuron0x1d2c8d0()*-0.0512155);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d9b0() {
   return (neuron0x1d2cc10()*-0.253651);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d9f0() {
   return (neuron0x1d2cf50()*-1.46638);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2da30() {
   return (neuron0x1d2d290()*0.118917);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ddb0() {
   return (neuron0x1d2c590()*0.626101);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ddf0() {
   return (neuron0x1d2c8d0()*-0.272062);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2de30() {
   return (neuron0x1d2cc10()*0.0463059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2de70() {
   return (neuron0x1d2cf50()*-0.543154);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2deb0() {
   return (neuron0x1d2d290()*0.386482);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e230() {
   return (neuron0x1d2c590()*-0.00624175);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e270() {
   return (neuron0x1d2c8d0()*0.725341);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e2b0() {
   return (neuron0x1d2cc10()*-0.0759807);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e2f0() {
   return (neuron0x1d2cf50()*-0.0621707);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e330() {
   return (neuron0x1d2d290()*-0.0995296);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e6b0() {
   return (neuron0x1d2c590()*0.0905942);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e6f0() {
   return (neuron0x1d2c8d0()*0.0460967);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c2bb70() {
   return (neuron0x1d2cc10()*0.0341656);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c2bbb0() {
   return (neuron0x1d2cf50()*-2.04202);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e840() {
   return (neuron0x1d2d290()*0.497107);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ebc0() {
   return (neuron0x1d2c590()*0.0134084);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ec00() {
   return (neuron0x1d2c8d0()*-0.0536267);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ec40() {
   return (neuron0x1d2cc10()*0.0127623);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ec80() {
   return (neuron0x1d2cf50()*-3.42403);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ecc0() {
   return (neuron0x1d2d290()*-1.06041);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f040() {
   return (neuron0x1d2c590()*0.718873);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f080() {
   return (neuron0x1d2c8d0()*-0.672235);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f0c0() {
   return (neuron0x1d2cc10()*-0.621041);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f100() {
   return (neuron0x1d2cf50()*-0.0357111);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f140() {
   return (neuron0x1d2d290()*-0.64521);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f4c0() {
   return (neuron0x1d2c590()*0.00523555);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f500() {
   return (neuron0x1d2c8d0()*-0.0723475);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f540() {
   return (neuron0x1d2cc10()*-0.0240617);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e730() {
   return (neuron0x1d2cf50()*3.39372);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e770() {
   return (neuron0x1d2d290()*1.15455);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fa40() {
   return (neuron0x1d2c590()*0.481908);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fa80() {
   return (neuron0x1d2c8d0()*0.0428284);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fac0() {
   return (neuron0x1d2cc10()*-0.00341106);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fb00() {
   return (neuron0x1d2cf50()*-0.48479);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fb40() {
   return (neuron0x1d2d290()*1.03275);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fec0() {
   return (neuron0x1d2c590()*-1.00161);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ff00() {
   return (neuron0x1d2c8d0()*1.24543);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ff40() {
   return (neuron0x1d2cc10()*1.16509);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ff80() {
   return (neuron0x1d2cf50()*0.00407644);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ffc0() {
   return (neuron0x1d2d290()*0.412285);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30340() {
   return (neuron0x1d2c590()*-0.0490675);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30380() {
   return (neuron0x1d2c8d0()*-0.0209957);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d303c0() {
   return (neuron0x1d2cc10()*-0.0095025);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30400() {
   return (neuron0x1d2cf50()*-2.87699);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30440() {
   return (neuron0x1d2d290()*1.35068);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d307c0() {
   return (neuron0x1d2c590()*2.21577);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30800() {
   return (neuron0x1d2c8d0()*-1.17473);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30840() {
   return (neuron0x1d2cc10()*-1.42725);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30880() {
   return (neuron0x1d2cf50()*-0.45553);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d308c0() {
   return (neuron0x1d2d290()*-0.78685);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c2b9c0() {
   return (neuron0x1d2c590()*-0.0739203);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c2ba00() {
   return (neuron0x1d2c8d0()*0.165152);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30d50() {
   return (neuron0x1d2cc10()*0.0216587);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30d90() {
   return (neuron0x1d2cf50()*4.28131);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30dd0() {
   return (neuron0x1d2d290()*-0.588183);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31150() {
   return (neuron0x1d2c590()*0.288256);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31190() {
   return (neuron0x1d2c8d0()*-0.597871);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d311d0() {
   return (neuron0x1d2cc10()*-0.291173);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31210() {
   return (neuron0x1d2cf50()*-1.2013);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31250() {
   return (neuron0x1d2d290()*0.00552213);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c2c190() {
   return (neuron0x1d2c590()*-0.207745);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f710() {
   return (neuron0x1d2c8d0()*0.0748721);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f750() {
   return (neuron0x1d2cc10()*-0.14182);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d316a0() {
   return (neuron0x1d2cf50()*0.0813728);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d316e0() {
   return (neuron0x1d2d290()*-0.583647);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31a60() {
   return (neuron0x1d2c590()*0.142008);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31aa0() {
   return (neuron0x1d2c8d0()*0.0412324);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31ae0() {
   return (neuron0x1d2cc10()*0.0608833);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31b20() {
   return (neuron0x1d2cf50()*-0.898078);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31b60() {
   return (neuron0x1d2d290()*-0.588802);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31ee0() {
   return (neuron0x1d2c590()*0.333508);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2c7b0() {
   return (neuron0x1d2c8d0()*-0.235977);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2c7f0() {
   return (neuron0x1d2cc10()*0.047423);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2caf0() {
   return (neuron0x1d2cf50()*0.140216);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2cb30() {
   return (neuron0x1d2d290()*-0.404646);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32600() {
   return (neuron0x1d2c590()*1.54287);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32640() {
   return (neuron0x1d2c8d0()*-0.799955);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32680() {
   return (neuron0x1d2cc10()*-0.54091);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d326c0() {
   return (neuron0x1d2cf50()*-0.748059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32700() {
   return (neuron0x1d2d290()*0.420799);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32a80() {
   return (neuron0x1d2c590()*0.1753);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32ac0() {
   return (neuron0x1d2c8d0()*0.348371);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32b00() {
   return (neuron0x1d2cc10()*-0.117442);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32b40() {
   return (neuron0x1d2cf50()*0.265374);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32b80() {
   return (neuron0x1d2d290()*0.347942);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32f00() {
   return (neuron0x1d2c590()*-0.518836);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32f40() {
   return (neuron0x1d2c8d0()*0.0305072);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32f80() {
   return (neuron0x1d2cc10()*0.104422);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32fc0() {
   return (neuron0x1d2cf50()*-0.873663);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33000() {
   return (neuron0x1d2d290()*-0.172358);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33380() {
   return (neuron0x1d2c590()*-0.99999);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d333c0() {
   return (neuron0x1d2c8d0()*0.374765);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33400() {
   return (neuron0x1d2cc10()*0.9865);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33440() {
   return (neuron0x1d2cf50()*0.722524);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33480() {
   return (neuron0x1d2d290()*0.156384);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33800() {
   return (neuron0x1d2c590()*-0.0821918);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33840() {
   return (neuron0x1d2c8d0()*-0.480653);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33880() {
   return (neuron0x1d2cc10()*0.0578294);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d338c0() {
   return (neuron0x1d2cf50()*-0.217092);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33900() {
   return (neuron0x1d2d290()*-0.764715);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33c80() {
   return (neuron0x1d2c590()*0.78596);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33cc0() {
   return (neuron0x1d2c8d0()*-1.28445);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33d00() {
   return (neuron0x1d2cc10()*-0.671541);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33d40() {
   return (neuron0x1d2cf50()*0.148858);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33d80() {
   return (neuron0x1d2d290()*-0.957859);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34100() {
   return (neuron0x1d2c590()*0.192679);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34140() {
   return (neuron0x1d2c8d0()*-0.285135);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34180() {
   return (neuron0x1d2cc10()*-0.174552);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d341c0() {
   return (neuron0x1d2cf50()*-0.0197398);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34200() {
   return (neuron0x1d2d290()*-0.470698);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34580() {
   return (neuron0x1d2c590()*-1.11787);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d345c0() {
   return (neuron0x1d2c8d0()*-0.02315);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34600() {
   return (neuron0x1d2cc10()*0.0566513);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34640() {
   return (neuron0x1d2cf50()*0.379315);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34680() {
   return (neuron0x1d2d290()*-0.101953);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34a00() {
   return (neuron0x1d2c590()*0.0516903);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34a40() {
   return (neuron0x1d2c8d0()*-0.283542);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34a80() {
   return (neuron0x1d2cc10()*-0.0224583);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34ac0() {
   return (neuron0x1d2cf50()*-0.244554);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34b00() {
   return (neuron0x1d2d290()*0.199758);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e620() {
   return (neuron0x1d2d700()*-0.0874975);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e660() {
   return (neuron0x1d2da70()*-0.114032);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2eb30() {
   return (neuron0x1d2def0()*0.191988);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2eb70() {
   return (neuron0x1d2e370()*-0.0629262);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2efb0() {
   return (neuron0x1d2e880()*0.164151);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2eff0() {
   return (neuron0x1d2ed00()*0.303454);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f430() {
   return (neuron0x1d2f180()*0.319099);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f470() {
   return (neuron0x1d2f790()*-0.0450989);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f9b0() {
   return (neuron0x1d2fb80()*-0.00993474);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f9f0() {
   return (neuron0x1d30000()*0.156939);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fe30() {
   return (neuron0x1d30480()*-0.32425);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fe70() {
   return (neuron0x1d30900()*-0.0188104);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d302b0() {
   return (neuron0x1d30e10()*-0.278092);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d302f0() {
   return (neuron0x1d2f580()*0.20628);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30730() {
   return (neuron0x1d31720()*-0.0884904);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30770() {
   return (neuron0x1d31ba0()*0.19422);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30bb0() {
   return (neuron0x1d32470()*-0.00365091);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30bf0() {
   return (neuron0x1d32740()*-0.0655978);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d310c0() {
   return (neuron0x1d32bc0()*0.303504);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31100() {
   return (neuron0x1d33040()*0.202525);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d319d0() {
   return (neuron0x1d334c0()*-0.481287);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31a10() {
   return (neuron0x1d33940()*-0.224563);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31e50() {
   return (neuron0x1d33dc0()*-0.307995);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31e90() {
   return (neuron0x1d34240()*-0.25748);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d4b0() {
   return (neuron0x1d346c0()*0.347251);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31530() {
   return (neuron0x1d2d700()*0.463542);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31570() {
   return (neuron0x1d2da70()*-0.159873);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d315b0() {
   return (neuron0x1d2def0()*-0.307033);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d315f0() {
   return (neuron0x1d2e370()*-0.70409);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31630() {
   return (neuron0x1d2e880()*0.00018604);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d4f0() {
   return (neuron0x1d2ed00()*-0.0394529);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33770() {
   return (neuron0x1d2f180()*1.23037);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d337b0() {
   return (neuron0x1d2f790()*0.707872);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33bf0() {
   return (neuron0x1d2fb80()*0.19176);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33c30() {
   return (neuron0x1d30000()*0.663892);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34070() {
   return (neuron0x1d30480()*0.320456);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d340b0() {
   return (neuron0x1d30900()*0.0315251);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d344f0() {
   return (neuron0x1d30e10()*0.238042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34530() {
   return (neuron0x1d2f580()*0.153154);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34970() {
   return (neuron0x1d31720()*-0.183438);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d349b0() {
   return (neuron0x1d31ba0()*0.246498);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d920() {
   return (neuron0x1d32470()*0.0261484);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d960() {
   return (neuron0x1d32740()*0.143192);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d329f0() {
   return (neuron0x1d32bc0()*0.0213785);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32a30() {
   return (neuron0x1d33040()*-0.098164);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c39a50() {
   return (neuron0x1d334c0()*-0.017595);
}

double nnFunc_25_25hi_1500ep__::synapse0x1c39a90() {
   return (neuron0x1d33940()*0.100371);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37080() {
   return (neuron0x1d33dc0()*0.196361);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d370c0() {
   return (neuron0x1d34240()*0.346533);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37100() {
   return (neuron0x1d346c0()*0.0898088);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30c40() {
   return (neuron0x1d2d700()*0.201533);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30c80() {
   return (neuron0x1d2da70()*0.283386);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30cc0() {
   return (neuron0x1d2def0()*-0.407577);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30d00() {
   return (neuron0x1d2e370()*0.563084);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37690() {
   return (neuron0x1d2e880()*-0.052648);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d376d0() {
   return (neuron0x1d2ed00()*0.204009);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37710() {
   return (neuron0x1d2f180()*-1.09848);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37750() {
   return (neuron0x1d2f790()*-0.28744);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37790() {
   return (neuron0x1d2fb80()*0.0675933);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d377d0() {
   return (neuron0x1d30000()*-0.0375473);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37810() {
   return (neuron0x1d30480()*0.492711);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37850() {
   return (neuron0x1d30900()*0.671331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37890() {
   return (neuron0x1d30e10()*0.325717);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d378d0() {
   return (neuron0x1d2f580()*-0.271013);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37910() {
   return (neuron0x1d31720()*0.376195);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37950() {
   return (neuron0x1d31ba0()*0.25187);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d372d0() {
   return (neuron0x1d32470()*0.275025);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37310() {
   return (neuron0x1d32740()*-0.407048);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37aa0() {
   return (neuron0x1d32bc0()*-0.585081);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37ae0() {
   return (neuron0x1d33040()*-0.397034);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37b20() {
   return (neuron0x1d334c0()*-0.0810635);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37b60() {
   return (neuron0x1d33940()*-0.0373948);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37ba0() {
   return (neuron0x1d33dc0()*-0.353672);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37be0() {
   return (neuron0x1d34240()*0.339855);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37c20() {
   return (neuron0x1d346c0()*-0.0116594);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37fa0() {
   return (neuron0x1d2d700()*0.0465234);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37fe0() {
   return (neuron0x1d2da70()*-0.184993);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38020() {
   return (neuron0x1d2def0()*0.312536);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38060() {
   return (neuron0x1d2e370()*0.00472712);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d380a0() {
   return (neuron0x1d2e880()*-0.249565);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d380e0() {
   return (neuron0x1d2ed00()*0.319379);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38120() {
   return (neuron0x1d2f180()*1.52299);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38160() {
   return (neuron0x1d2f790()*-0.0128415);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d381a0() {
   return (neuron0x1d2fb80()*-0.326991);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d381e0() {
   return (neuron0x1d30000()*0.604574);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38220() {
   return (neuron0x1d30480()*-0.466148);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38260() {
   return (neuron0x1d30900()*-1.04499);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d382a0() {
   return (neuron0x1d30e10()*-0.337675);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d382e0() {
   return (neuron0x1d2f580()*0.152669);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38320() {
   return (neuron0x1d31720()*-0.287807);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38360() {
   return (neuron0x1d31ba0()*-0.204937);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37df0() {
   return (neuron0x1d32470()*-0.0594635);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d37e30() {
   return (neuron0x1d32740()*0.224433);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d384b0() {
   return (neuron0x1d32bc0()*-0.344695);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d384f0() {
   return (neuron0x1d33040()*-0.0837216);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38530() {
   return (neuron0x1d334c0()*0.554425);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38570() {
   return (neuron0x1d33940()*-0.326857);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d385b0() {
   return (neuron0x1d33dc0()*0.345231);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d385f0() {
   return (neuron0x1d34240()*-0.0739039);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38630() {
   return (neuron0x1d346c0()*0.102231);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d389b0() {
   return (neuron0x1d2d700()*-0.353065);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d389f0() {
   return (neuron0x1d2da70()*0.561959);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38a30() {
   return (neuron0x1d2def0()*-0.045834);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38a70() {
   return (neuron0x1d2e370()*-0.271066);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38ab0() {
   return (neuron0x1d2e880()*-0.573314);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38af0() {
   return (neuron0x1d2ed00()*-0.0563213);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38b30() {
   return (neuron0x1d2f180()*-0.52208);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38b70() {
   return (neuron0x1d2f790()*-0.27582);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38bb0() {
   return (neuron0x1d2fb80()*0.523944);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38bf0() {
   return (neuron0x1d30000()*-1.31077);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38c30() {
   return (neuron0x1d30480()*-0.45111);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38c70() {
   return (neuron0x1d30900()*0.892697);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38cb0() {
   return (neuron0x1d30e10()*0.0610685);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38cf0() {
   return (neuron0x1d2f580()*-0.255114);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38d30() {
   return (neuron0x1d31720()*0.533948);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38d70() {
   return (neuron0x1d31ba0()*0.494077);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38800() {
   return (neuron0x1d32470()*0.316234);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38840() {
   return (neuron0x1d32740()*0.0701222);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38ec0() {
   return (neuron0x1d32bc0()*-0.285239);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38f00() {
   return (neuron0x1d33040()*0.441);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38f40() {
   return (neuron0x1d334c0()*-0.101186);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38f80() {
   return (neuron0x1d33940()*0.714931);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d38fc0() {
   return (neuron0x1d33dc0()*0.216504);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39000() {
   return (neuron0x1d34240()*0.073422);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39040() {
   return (neuron0x1d346c0()*0.313726);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d393c0() {
   return (neuron0x1d2d700()*-0.67754);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39400() {
   return (neuron0x1d2da70()*-0.244321);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39440() {
   return (neuron0x1d2def0()*0.642107);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39480() {
   return (neuron0x1d2e370()*-0.787178);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d394c0() {
   return (neuron0x1d2e880()*1.02437);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39500() {
   return (neuron0x1d2ed00()*0.085664);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39540() {
   return (neuron0x1d2f180()*3.69331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36760() {
   return (neuron0x1d2f790()*-0.0254247);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d367a0() {
   return (neuron0x1d2fb80()*0.0368251);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d367e0() {
   return (neuron0x1d30000()*1.85859);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36820() {
   return (neuron0x1d30480()*0.156395);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36860() {
   return (neuron0x1d30900()*-2.84223);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d368a0() {
   return (neuron0x1d30e10()*-0.834856);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d368e0() {
   return (neuron0x1d2f580()*0.0761442);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36920() {
   return (neuron0x1d31720()*-0.786335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36960() {
   return (neuron0x1d31ba0()*-0.669496);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39210() {
   return (neuron0x1d32470()*-0.748568);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d39250() {
   return (neuron0x1d32740()*0.628059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36ab0() {
   return (neuron0x1d32bc0()*-0.440316);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36af0() {
   return (neuron0x1d33040()*-0.396778);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36b30() {
   return (neuron0x1d334c0()*-2.00296);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36b70() {
   return (neuron0x1d33940()*-1.1792);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36bb0() {
   return (neuron0x1d33dc0()*-0.396608);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36bf0() {
   return (neuron0x1d34240()*0.0420686);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36c30() {
   return (neuron0x1d346c0()*-1.29623);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36f20() {
   return (neuron0x1d2d700()*0.154858);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a620() {
   return (neuron0x1d2da70()*0.252023);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a660() {
   return (neuron0x1d2def0()*-0.0631054);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a6a0() {
   return (neuron0x1d2e370()*-0.672923);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a6e0() {
   return (neuron0x1d2e880()*0.610478);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a720() {
   return (neuron0x1d2ed00()*0.167982);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a760() {
   return (neuron0x1d2f180()*1.94805);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a7a0() {
   return (neuron0x1d2f790()*0.705757);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a7e0() {
   return (neuron0x1d2fb80()*-0.151312);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a820() {
   return (neuron0x1d30000()*0.762674);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a860() {
   return (neuron0x1d30480()*-0.412813);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a8a0() {
   return (neuron0x1d30900()*-0.472893);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a8e0() {
   return (neuron0x1d30e10()*-0.183474);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a920() {
   return (neuron0x1d2f580()*0.54506);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a960() {
   return (neuron0x1d31720()*-0.649334);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a9a0() {
   return (neuron0x1d31ba0()*0.432216);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36e00() {
   return (neuron0x1d32470()*-0.035657);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d36e40() {
   return (neuron0x1d32740()*0.493987);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3aaf0() {
   return (neuron0x1d32bc0()*0.345698);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ab30() {
   return (neuron0x1d33040()*0.0406796);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ab70() {
   return (neuron0x1d334c0()*0.169744);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3abb0() {
   return (neuron0x1d33940()*-0.432064);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3abf0() {
   return (neuron0x1d33dc0()*0.414144);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ac30() {
   return (neuron0x1d34240()*-0.610725);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ac70() {
   return (neuron0x1d346c0()*-0.588598);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3aff0() {
   return (neuron0x1d2d700()*0.0485673);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b030() {
   return (neuron0x1d2da70()*-0.0726242);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b070() {
   return (neuron0x1d2def0()*0.168244);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b0b0() {
   return (neuron0x1d2e370()*-0.0243327);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b0f0() {
   return (neuron0x1d2e880()*0.61453);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b130() {
   return (neuron0x1d2ed00()*-0.252025);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b170() {
   return (neuron0x1d2f180()*0.452191);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b1b0() {
   return (neuron0x1d2f790()*0.147318);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b1f0() {
   return (neuron0x1d2fb80()*0.211504);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b230() {
   return (neuron0x1d30000()*0.48917);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b270() {
   return (neuron0x1d30480()*-0.354947);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b2b0() {
   return (neuron0x1d30900()*-0.0681657);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b2f0() {
   return (neuron0x1d30e10()*-0.159828);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b330() {
   return (neuron0x1d2f580()*0.253612);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b370() {
   return (neuron0x1d31720()*-0.237666);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b3b0() {
   return (neuron0x1d31ba0()*0.532198);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ae40() {
   return (neuron0x1d32470()*-0.417632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ae80() {
   return (neuron0x1d32740()*-0.0569649);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b500() {
   return (neuron0x1d32bc0()*-0.0481283);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b540() {
   return (neuron0x1d33040()*0.0369689);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b580() {
   return (neuron0x1d334c0()*0.176711);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b5c0() {
   return (neuron0x1d33940()*-0.144272);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b600() {
   return (neuron0x1d33dc0()*-0.022999);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b640() {
   return (neuron0x1d34240()*-0.0980858);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b680() {
   return (neuron0x1d346c0()*-0.113523);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ba00() {
   return (neuron0x1d2d700()*-0.187827);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ba40() {
   return (neuron0x1d2da70()*0.261485);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ba80() {
   return (neuron0x1d2def0()*0.277071);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bac0() {
   return (neuron0x1d2e370()*-0.735993);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bb00() {
   return (neuron0x1d2e880()*0.64432);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bb40() {
   return (neuron0x1d2ed00()*0.254703);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bb80() {
   return (neuron0x1d2f180()*1.60069);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bbc0() {
   return (neuron0x1d2f790()*-0.365178);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bc00() {
   return (neuron0x1d2fb80()*-0.040166);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bc40() {
   return (neuron0x1d30000()*1.27438);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bc80() {
   return (neuron0x1d30480()*0.257103);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bcc0() {
   return (neuron0x1d30900()*-1.19964);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bd00() {
   return (neuron0x1d30e10()*-0.0830115);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bd40() {
   return (neuron0x1d2f580()*0.115684);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bd80() {
   return (neuron0x1d31720()*-0.325978);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bdc0() {
   return (neuron0x1d31ba0()*0.106364);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b850() {
   return (neuron0x1d32470()*0.0655956);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3b890() {
   return (neuron0x1d32740()*0.135462);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bf10() {
   return (neuron0x1d32bc0()*-0.304711);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bf50() {
   return (neuron0x1d33040()*-0.0866577);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bf90() {
   return (neuron0x1d334c0()*-0.275975);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3bfd0() {
   return (neuron0x1d33940()*-0.870132);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c010() {
   return (neuron0x1d33dc0()*0.391126);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c050() {
   return (neuron0x1d34240()*-0.142044);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c090() {
   return (neuron0x1d346c0()*-0.841048);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c410() {
   return (neuron0x1d2d700()*0.29977);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c450() {
   return (neuron0x1d2da70()*-0.459007);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c490() {
   return (neuron0x1d2def0()*-0.443777);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c4d0() {
   return (neuron0x1d2e370()*-0.15729);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c510() {
   return (neuron0x1d2e880()*0.0433114);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c550() {
   return (neuron0x1d2ed00()*-0.231153);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c590() {
   return (neuron0x1d2f180()*-0.0863258);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c5d0() {
   return (neuron0x1d2f790()*0.0757335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c610() {
   return (neuron0x1d2fb80()*-0.253066);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c650() {
   return (neuron0x1d30000()*0.0781598);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c690() {
   return (neuron0x1d30480()*0.0191835);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c6d0() {
   return (neuron0x1d30900()*-0.0582522);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c710() {
   return (neuron0x1d30e10()*-0.0903434);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c750() {
   return (neuron0x1d2f580()*-0.0445385);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c790() {
   return (neuron0x1d31720()*-0.313065);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c7d0() {
   return (neuron0x1d31ba0()*0.475547);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c260() {
   return (neuron0x1d32470()*-0.453226);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c2a0() {
   return (neuron0x1d32740()*0.474249);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c920() {
   return (neuron0x1d32bc0()*0.302125);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c960() {
   return (neuron0x1d33040()*-0.0590381);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c9a0() {
   return (neuron0x1d334c0()*-0.545689);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3c9e0() {
   return (neuron0x1d33940()*0.153815);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ca20() {
   return (neuron0x1d33dc0()*-0.447168);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ca60() {
   return (neuron0x1d34240()*0.277632);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3caa0() {
   return (neuron0x1d346c0()*-0.380544);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ce20() {
   return (neuron0x1d2d700()*-0.0580021);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ce60() {
   return (neuron0x1d2da70()*0.320042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cea0() {
   return (neuron0x1d2def0()*-0.530664);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cee0() {
   return (neuron0x1d2e370()*-0.473369);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cf20() {
   return (neuron0x1d2e880()*-0.386043);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cf60() {
   return (neuron0x1d2ed00()*0.287725);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cfa0() {
   return (neuron0x1d2f180()*-0.0477628);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cfe0() {
   return (neuron0x1d2f790()*-0.282363);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d020() {
   return (neuron0x1d2fb80()*-0.263043);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d060() {
   return (neuron0x1d30000()*0.198083);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d0a0() {
   return (neuron0x1d30480()*0.0828512);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d0e0() {
   return (neuron0x1d30900()*-0.0420688);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d120() {
   return (neuron0x1d30e10()*-0.21506);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d160() {
   return (neuron0x1d2f580()*-0.4092);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d1a0() {
   return (neuron0x1d31720()*-0.449069);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d1e0() {
   return (neuron0x1d31ba0()*0.311544);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3cc70() {
   return (neuron0x1d32470()*-0.411457);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ccb0() {
   return (neuron0x1d32740()*0.0144233);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d330() {
   return (neuron0x1d32bc0()*0.138619);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d370() {
   return (neuron0x1d33040()*0.0589135);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d3b0() {
   return (neuron0x1d334c0()*0.130544);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d3f0() {
   return (neuron0x1d33940()*0.0350595);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d430() {
   return (neuron0x1d33dc0()*-0.475051);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d470() {
   return (neuron0x1d34240()*0.176552);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d4b0() {
   return (neuron0x1d346c0()*-0.00405434);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d830() {
   return (neuron0x1d2d700()*-0.469708);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d870() {
   return (neuron0x1d2da70()*-0.198454);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d8b0() {
   return (neuron0x1d2def0()*-0.290672);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d8f0() {
   return (neuron0x1d2e370()*-0.317474);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d930() {
   return (neuron0x1d2e880()*0.291513);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d970() {
   return (neuron0x1d2ed00()*-0.292436);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d9b0() {
   return (neuron0x1d2f180()*0.191455);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d9f0() {
   return (neuron0x1d2f790()*0.388399);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3da30() {
   return (neuron0x1d2fb80()*-0.296497);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3da70() {
   return (neuron0x1d30000()*-0.329068);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3dab0() {
   return (neuron0x1d30480()*-0.486673);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3daf0() {
   return (neuron0x1d30900()*0.089136);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3db30() {
   return (neuron0x1d30e10()*0.376494);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3db70() {
   return (neuron0x1d2f580()*0.0780318);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3dbb0() {
   return (neuron0x1d31720()*-0.235587);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3dbf0() {
   return (neuron0x1d31ba0()*-0.16172);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d680() {
   return (neuron0x1d32470()*-0.332548);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3d6c0() {
   return (neuron0x1d32740()*-0.121239);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3dd40() {
   return (neuron0x1d32bc0()*0.15497);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3dd80() {
   return (neuron0x1d33040()*-0.0406925);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ddc0() {
   return (neuron0x1d334c0()*-0.366217);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3de00() {
   return (neuron0x1d33940()*0.100717);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3de40() {
   return (neuron0x1d33dc0()*-0.0357929);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3de80() {
   return (neuron0x1d34240()*-0.0785287);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3dec0() {
   return (neuron0x1d346c0()*-0.0399335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e240() {
   return (neuron0x1d2d700()*0.0275173);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e280() {
   return (neuron0x1d2da70()*0.395837);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e2c0() {
   return (neuron0x1d2def0()*0.164977);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e300() {
   return (neuron0x1d2e370()*0.641487);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e340() {
   return (neuron0x1d2e880()*-0.374387);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e380() {
   return (neuron0x1d2ed00()*-0.434091);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e3c0() {
   return (neuron0x1d2f180()*-1.47575);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e400() {
   return (neuron0x1d2f790()*-0.40576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e440() {
   return (neuron0x1d2fb80()*-0.109717);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e480() {
   return (neuron0x1d30000()*-0.522592);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e4c0() {
   return (neuron0x1d30480()*-0.286008);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e500() {
   return (neuron0x1d30900()*1.02931);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e540() {
   return (neuron0x1d30e10()*-0.269238);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e580() {
   return (neuron0x1d2f580()*-0.099636);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e5c0() {
   return (neuron0x1d31720()*0.331432);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e600() {
   return (neuron0x1d31ba0()*-0.290857);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e090() {
   return (neuron0x1d32470()*-0.0747686);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e0d0() {
   return (neuron0x1d32740()*-0.316095);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e750() {
   return (neuron0x1d32bc0()*-0.365077);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e790() {
   return (neuron0x1d33040()*-0.229567);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e7d0() {
   return (neuron0x1d334c0()*0.162322);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e810() {
   return (neuron0x1d33940()*0.703529);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e850() {
   return (neuron0x1d33dc0()*-0.434198);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e890() {
   return (neuron0x1d34240()*-0.113431);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3e8d0() {
   return (neuron0x1d346c0()*0.325051);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ec50() {
   return (neuron0x1d2d700()*0.172965);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ec90() {
   return (neuron0x1d2da70()*0.138617);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ecd0() {
   return (neuron0x1d2def0()*0.0295644);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ed10() {
   return (neuron0x1d2e370()*0.54054);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ed50() {
   return (neuron0x1d2e880()*-0.639619);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ed90() {
   return (neuron0x1d2ed00()*0.14504);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3edd0() {
   return (neuron0x1d2f180()*-1.52668);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ee10() {
   return (neuron0x1d2f790()*-0.829491);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ee50() {
   return (neuron0x1d2fb80()*0.176573);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ee90() {
   return (neuron0x1d30000()*-1.0266);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3eed0() {
   return (neuron0x1d30480()*-0.224839);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ef10() {
   return (neuron0x1d30900()*0.274618);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ef50() {
   return (neuron0x1d30e10()*0.0620633);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ef90() {
   return (neuron0x1d2f580()*-0.305725);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3efd0() {
   return (neuron0x1d31720()*0.368341);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f010() {
   return (neuron0x1d31ba0()*-0.29534);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3eaa0() {
   return (neuron0x1d32470()*-0.393042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3eae0() {
   return (neuron0x1d32740()*0.0131584);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f160() {
   return (neuron0x1d32bc0()*-0.325878);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f1a0() {
   return (neuron0x1d33040()*0.232275);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f1e0() {
   return (neuron0x1d334c0()*-0.595665);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f220() {
   return (neuron0x1d33940()*-0.172653);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f260() {
   return (neuron0x1d33dc0()*-0.424339);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f2a0() {
   return (neuron0x1d34240()*0.361623);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f2e0() {
   return (neuron0x1d346c0()*-0.640416);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f660() {
   return (neuron0x1d2d700()*-0.616434);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f6a0() {
   return (neuron0x1d2da70()*-0.291652);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f6e0() {
   return (neuron0x1d2def0()*0.307457);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f720() {
   return (neuron0x1d2e370()*-0.534924);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f760() {
   return (neuron0x1d2e880()*0.53191);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f7a0() {
   return (neuron0x1d2ed00()*-0.465685);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f7e0() {
   return (neuron0x1d2f180()*2.35072);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f820() {
   return (neuron0x1d2f790()*-0.239147);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f860() {
   return (neuron0x1d2fb80()*-0.137301);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f8a0() {
   return (neuron0x1d30000()*1.20309);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f8e0() {
   return (neuron0x1d30480()*-0.0385101);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f920() {
   return (neuron0x1d30900()*-1.83086);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f960() {
   return (neuron0x1d30e10()*-0.70343);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f9a0() {
   return (neuron0x1d2f580()*0.434345);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f9e0() {
   return (neuron0x1d31720()*-0.479929);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fa20() {
   return (neuron0x1d31ba0()*-0.477198);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f4b0() {
   return (neuron0x1d32470()*-0.470306);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3f4f0() {
   return (neuron0x1d32740()*-0.641931);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fb70() {
   return (neuron0x1d32bc0()*0.144117);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fbb0() {
   return (neuron0x1d33040()*-0.396173);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fbf0() {
   return (neuron0x1d334c0()*-0.467418);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fc30() {
   return (neuron0x1d33940()*-0.181635);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fc70() {
   return (neuron0x1d33dc0()*-0.262575);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fcb0() {
   return (neuron0x1d34240()*0.0872703);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fcf0() {
   return (neuron0x1d346c0()*-0.271493);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d40070() {
   return (neuron0x1d2d700()*-0.262879);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d890() {
   return (neuron0x1d2da70()*0.0468004);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d8d0() {
   return (neuron0x1d2def0()*0.152675);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2dc90() {
   return (neuron0x1d2e370()*-0.878178);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2dcd0() {
   return (neuron0x1d2e880()*0.398596);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e110() {
   return (neuron0x1d2ed00()*0.199602);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e150() {
   return (neuron0x1d2f180()*1.70352);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e590() {
   return (neuron0x1d2f790()*-0.32358);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2e5d0() {
   return (neuron0x1d2fb80()*-0.59027);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2eaa0() {
   return (neuron0x1d30000()*1.05458);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2eae0() {
   return (neuron0x1d30480()*0.369968);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ef20() {
   return (neuron0x1d30900()*-0.771839);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2ef60() {
   return (neuron0x1d30e10()*-0.275319);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f3a0() {
   return (neuron0x1d2f580()*-0.133563);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f3e0() {
   return (neuron0x1d31720()*-0.123145);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f920() {
   return (neuron0x1d31ba0()*-0.328835);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2f960() {
   return (neuron0x1d32470()*0.0807761);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fda0() {
   return (neuron0x1d32740()*0.187295);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2fde0() {
   return (neuron0x1d32bc0()*-0.0379577);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30220() {
   return (neuron0x1d33040()*-0.231537);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30260() {
   return (neuron0x1d334c0()*-0.481162);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d306a0() {
   return (neuron0x1d33940()*-0.658259);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d306e0() {
   return (neuron0x1d33dc0()*0.189168);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30b20() {
   return (neuron0x1d34240()*0.168988);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d30b60() {
   return (neuron0x1d346c0()*-0.737603);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a4e0() {
   return (neuron0x1d2d700()*0.0319375);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3a520() {
   return (neuron0x1d2da70()*0.375129);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31dc0() {
   return (neuron0x1d2def0()*-0.188801);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31e00() {
   return (neuron0x1d2e370()*-0.100142);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3fec0() {
   return (neuron0x1d2e880()*0.973237);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d3ff00() {
   return (neuron0x1d2ed00()*0.188186);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d170() {
   return (neuron0x1d2f180()*0.957865);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d1b0() {
   return (neuron0x1d2f790()*0.245082);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32960() {
   return (neuron0x1d2fb80()*-0.0999562);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d329a0() {
   return (neuron0x1d30000()*1.36603);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32de0() {
   return (neuron0x1d30480()*0.498137);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d32e20() {
   return (neuron0x1d30900()*-1.78732);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33260() {
   return (neuron0x1d30e10()*0.260228);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d332a0() {
   return (neuron0x1d2f580()*0.172521);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d336e0() {
   return (neuron0x1d31720()*-0.218344);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33720() {
   return (neuron0x1d31ba0()*0.44619);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33b60() {
   return (neuron0x1d32470()*-0.842099);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33ba0() {
   return (neuron0x1d32740()*0.103594);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d33fe0() {
   return (neuron0x1d32bc0()*0.572276);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34020() {
   return (neuron0x1d33040()*-0.318763);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34460() {
   return (neuron0x1d334c0()*-0.146888);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d344a0() {
   return (neuron0x1d33940()*-0.968651);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d348e0() {
   return (neuron0x1d33dc0()*-0.159225);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d34920() {
   return (neuron0x1d34240()*-0.758997);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31030() {
   return (neuron0x1d346c0()*-0.240996);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d31070() {
   return (neuron0x1d2d700()*-0.238306);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d432e0() {
   return (neuron0x1d2da70()*0.408768);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43320() {
   return (neuron0x1d2def0()*-0.214609);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43360() {
   return (neuron0x1d2e370()*0.779019);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d433a0() {
   return (neuron0x1d2e880()*-0.522626);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d433e0() {
   return (neuron0x1d2ed00()*0.264652);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43420() {
   return (neuron0x1d2f180()*-1.66607);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43460() {
   return (neuron0x1d2f790()*-0.155603);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d434a0() {
   return (neuron0x1d2fb80()*0.149814);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d434e0() {
   return (neuron0x1d30000()*-0.777296);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43520() {
   return (neuron0x1d30480()*-0.24749);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43560() {
   return (neuron0x1d30900()*0.264434);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d435a0() {
   return (neuron0x1d30e10()*-0.222424);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d435e0() {
   return (neuron0x1d2f580()*-0.247656);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43620() {
   return (neuron0x1d31720()*0.612893);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43660() {
   return (neuron0x1d31ba0()*0.348501);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43130() {
   return (neuron0x1d32470()*0.0809801);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43170() {
   return (neuron0x1d32740()*0.163564);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d437b0() {
   return (neuron0x1d32bc0()*-0.128966);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d437f0() {
   return (neuron0x1d33040()*0.362525);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43830() {
   return (neuron0x1d334c0()*-0.3677);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43870() {
   return (neuron0x1d33940()*0.198312);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d438b0() {
   return (neuron0x1d33dc0()*-0.0176796);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d438f0() {
   return (neuron0x1d34240()*-0.209118);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43930() {
   return (neuron0x1d346c0()*0.485939);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43cb0() {
   return (neuron0x1d2d700()*0.229073);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43cf0() {
   return (neuron0x1d2da70()*-0.380334);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43d30() {
   return (neuron0x1d2def0()*0.187144);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43d70() {
   return (neuron0x1d2e370()*-0.400898);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43db0() {
   return (neuron0x1d2e880()*-0.0630662);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43df0() {
   return (neuron0x1d2ed00()*0.202696);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43e30() {
   return (neuron0x1d2f180()*0.987053);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43e70() {
   return (neuron0x1d2f790()*-0.000544115);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43eb0() {
   return (neuron0x1d2fb80()*-0.149772);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43ef0() {
   return (neuron0x1d30000()*-0.185981);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43f30() {
   return (neuron0x1d30480()*0.139113);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43f70() {
   return (neuron0x1d30900()*-0.07107);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43fb0() {
   return (neuron0x1d30e10()*-0.295274);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43ff0() {
   return (neuron0x1d2f580()*-0.133125);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44030() {
   return (neuron0x1d31720()*-0.0133859);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44070() {
   return (neuron0x1d31ba0()*-0.0391363);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43b00() {
   return (neuron0x1d32470()*0.341449);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d43b40() {
   return (neuron0x1d32740()*0.124778);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d441c0() {
   return (neuron0x1d32bc0()*-0.12748);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44200() {
   return (neuron0x1d33040()*0.213641);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44240() {
   return (neuron0x1d334c0()*0.241471);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44280() {
   return (neuron0x1d33940()*0.216598);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d442c0() {
   return (neuron0x1d33dc0()*0.488984);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44300() {
   return (neuron0x1d34240()*0.167624);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44340() {
   return (neuron0x1d346c0()*-0.344472);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d446c0() {
   return (neuron0x1d2d700()*-0.105036);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44700() {
   return (neuron0x1d2da70()*0.261932);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44740() {
   return (neuron0x1d2def0()*0.539017);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44780() {
   return (neuron0x1d2e370()*-0.368821);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d447c0() {
   return (neuron0x1d2e880()*-0.152151);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44800() {
   return (neuron0x1d2ed00()*0.154173);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44840() {
   return (neuron0x1d2f180()*0.740027);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44880() {
   return (neuron0x1d2f790()*0.468147);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d448c0() {
   return (neuron0x1d2fb80()*0.0416365);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44900() {
   return (neuron0x1d30000()*-0.395437);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44940() {
   return (neuron0x1d30480()*-0.163389);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44980() {
   return (neuron0x1d30900()*0.198738);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d449c0() {
   return (neuron0x1d30e10()*0.0252331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44a00() {
   return (neuron0x1d2f580()*-0.159291);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44a40() {
   return (neuron0x1d31720()*-0.34282);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44a80() {
   return (neuron0x1d31ba0()*-0.0327158);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44510() {
   return (neuron0x1d32470()*0.315783);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44550() {
   return (neuron0x1d32740()*-0.283669);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44bd0() {
   return (neuron0x1d32bc0()*0.0587329);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44c10() {
   return (neuron0x1d33040()*0.384977);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44c50() {
   return (neuron0x1d334c0()*0.207018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44c90() {
   return (neuron0x1d33940()*-0.0132776);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44cd0() {
   return (neuron0x1d33dc0()*-0.253099);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44d10() {
   return (neuron0x1d34240()*-0.478958);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44d50() {
   return (neuron0x1d346c0()*0.181747);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d450d0() {
   return (neuron0x1d2d700()*0.155758);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45110() {
   return (neuron0x1d2da70()*-0.365098);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45150() {
   return (neuron0x1d2def0()*-0.352894);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45190() {
   return (neuron0x1d2e370()*-0.109637);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d451d0() {
   return (neuron0x1d2e880()*0.22164);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45210() {
   return (neuron0x1d2ed00()*0.373381);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45250() {
   return (neuron0x1d2f180()*-0.430979);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45290() {
   return (neuron0x1d2f790()*0.0959631);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d452d0() {
   return (neuron0x1d2fb80()*-0.24568);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45310() {
   return (neuron0x1d30000()*-0.401681);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45350() {
   return (neuron0x1d30480()*0.0554426);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45390() {
   return (neuron0x1d30900()*-0.111135);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d453d0() {
   return (neuron0x1d30e10()*-0.171195);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45410() {
   return (neuron0x1d2f580()*0.395665);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45450() {
   return (neuron0x1d31720()*0.246816);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45490() {
   return (neuron0x1d31ba0()*-0.155861);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44f20() {
   return (neuron0x1d32470()*-0.425185);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d44f60() {
   return (neuron0x1d32740()*-0.156002);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d455e0() {
   return (neuron0x1d32bc0()*-0.290244);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45620() {
   return (neuron0x1d33040()*-0.305059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45660() {
   return (neuron0x1d334c0()*-0.376785);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d456a0() {
   return (neuron0x1d33940()*-0.426006);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d456e0() {
   return (neuron0x1d33dc0()*-0.412247);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45720() {
   return (neuron0x1d34240()*-0.366772);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45760() {
   return (neuron0x1d346c0()*0.0877565);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45ae0() {
   return (neuron0x1d2d700()*-0.497895);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45b20() {
   return (neuron0x1d2da70()*0.30283);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45b60() {
   return (neuron0x1d2def0()*0.129028);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45ba0() {
   return (neuron0x1d2e370()*0.504833);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45be0() {
   return (neuron0x1d2e880()*0.00921222);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45c20() {
   return (neuron0x1d2ed00()*-0.03961);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45c60() {
   return (neuron0x1d2f180()*-0.836226);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45ca0() {
   return (neuron0x1d2f790()*-0.118802);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45ce0() {
   return (neuron0x1d2fb80()*-0.0325158);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45d20() {
   return (neuron0x1d30000()*-0.731646);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45d60() {
   return (neuron0x1d30480()*-0.140151);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45da0() {
   return (neuron0x1d30900()*0.421928);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45de0() {
   return (neuron0x1d30e10()*-0.0403945);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45e20() {
   return (neuron0x1d2f580()*-0.197314);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45e60() {
   return (neuron0x1d31720()*-0.37004);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45ea0() {
   return (neuron0x1d31ba0()*-0.106761);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45930() {
   return (neuron0x1d32470()*-0.501142);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45970() {
   return (neuron0x1d32740()*0.101838);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d45ff0() {
   return (neuron0x1d32bc0()*0.0423805);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46030() {
   return (neuron0x1d33040()*-0.0414481);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46070() {
   return (neuron0x1d334c0()*-0.13545);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d460b0() {
   return (neuron0x1d33940()*-0.0936921);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d460f0() {
   return (neuron0x1d33dc0()*-0.299348);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46130() {
   return (neuron0x1d34240()*-0.0504929);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46170() {
   return (neuron0x1d346c0()*-0.220993);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d464f0() {
   return (neuron0x1d2d700()*-0.00870624);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46530() {
   return (neuron0x1d2da70()*-0.214376);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46570() {
   return (neuron0x1d2def0()*0.32164);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d465b0() {
   return (neuron0x1d2e370()*-0.712269);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d465f0() {
   return (neuron0x1d2e880()*-0.0761123);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46630() {
   return (neuron0x1d2ed00()*0.210737);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46670() {
   return (neuron0x1d2f180()*1.97045);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d466b0() {
   return (neuron0x1d2f790()*0.184142);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d466f0() {
   return (neuron0x1d2fb80()*-0.252877);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46730() {
   return (neuron0x1d30000()*0.363194);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46770() {
   return (neuron0x1d30480()*-0.253227);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d467b0() {
   return (neuron0x1d30900()*-1.16874);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d467f0() {
   return (neuron0x1d30e10()*-0.271317);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46830() {
   return (neuron0x1d2f580()*0.290264);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46870() {
   return (neuron0x1d31720()*-0.32398);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d468b0() {
   return (neuron0x1d31ba0()*0.425018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46340() {
   return (neuron0x1d32470()*0.00171625);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46380() {
   return (neuron0x1d32740()*-0.309678);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46a00() {
   return (neuron0x1d32bc0()*-0.09977);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46a40() {
   return (neuron0x1d33040()*0.100701);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46a80() {
   return (neuron0x1d334c0()*-0.104595);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46ac0() {
   return (neuron0x1d33940()*0.323953);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46b00() {
   return (neuron0x1d33dc0()*0.0445919);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46b40() {
   return (neuron0x1d34240()*0.437345);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46b80() {
   return (neuron0x1d346c0()*-0.407932);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46f00() {
   return (neuron0x1d2d700()*-0.269099);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46f40() {
   return (neuron0x1d2da70()*-0.159418);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46f80() {
   return (neuron0x1d2def0()*-0.202591);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46fc0() {
   return (neuron0x1d2e370()*0.103724);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47000() {
   return (neuron0x1d2e880()*-0.28995);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47040() {
   return (neuron0x1d2ed00()*-0.305671);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47080() {
   return (neuron0x1d2f180()*0.508523);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d470c0() {
   return (neuron0x1d2f790()*-0.0677895);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47100() {
   return (neuron0x1d2fb80()*-0.179672);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47140() {
   return (neuron0x1d30000()*0.493275);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47180() {
   return (neuron0x1d30480()*-0.358003);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d471c0() {
   return (neuron0x1d30900()*-0.730018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47200() {
   return (neuron0x1d30e10()*-0.256583);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47240() {
   return (neuron0x1d2f580()*0.347855);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47280() {
   return (neuron0x1d31720()*-0.524499);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d472c0() {
   return (neuron0x1d31ba0()*0.40219);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46d50() {
   return (neuron0x1d32470()*-0.0167213);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d46d90() {
   return (neuron0x1d32740()*-0.170964);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47410() {
   return (neuron0x1d32bc0()*0.255584);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47450() {
   return (neuron0x1d33040()*0.0091018);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47490() {
   return (neuron0x1d334c0()*0.0950339);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d474d0() {
   return (neuron0x1d33940()*0.120645);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47510() {
   return (neuron0x1d33dc0()*-0.0968326);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47550() {
   return (neuron0x1d34240()*0.428084);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47590() {
   return (neuron0x1d346c0()*-0.296288);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47910() {
   return (neuron0x1d2d700()*0.345406);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47950() {
   return (neuron0x1d2da70()*0.113087);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47990() {
   return (neuron0x1d2def0()*0.0493926);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d479d0() {
   return (neuron0x1d2e370()*0.42827);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47a10() {
   return (neuron0x1d2e880()*-0.186044);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47a50() {
   return (neuron0x1d2ed00()*0.348481);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47a90() {
   return (neuron0x1d2f180()*-0.819668);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47ad0() {
   return (neuron0x1d2f790()*0.0835213);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47b10() {
   return (neuron0x1d2fb80()*-0.638902);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47b50() {
   return (neuron0x1d30000()*-0.122744);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47b90() {
   return (neuron0x1d30480()*-0.0429316);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47bd0() {
   return (neuron0x1d30900()*0.468258);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47c10() {
   return (neuron0x1d30e10()*-0.0504947);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47c50() {
   return (neuron0x1d2f580()*-0.393605);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47c90() {
   return (neuron0x1d31720()*0.197863);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47cd0() {
   return (neuron0x1d31ba0()*-0.437629);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47760() {
   return (neuron0x1d32470()*0.18555);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d477a0() {
   return (neuron0x1d32740()*0.367299);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47e20() {
   return (neuron0x1d32bc0()*-0.39312);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47e60() {
   return (neuron0x1d33040()*-0.329242);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47ea0() {
   return (neuron0x1d334c0()*-0.087335);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47ee0() {
   return (neuron0x1d33940()*-0.311913);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47f20() {
   return (neuron0x1d33dc0()*-0.25148);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47f60() {
   return (neuron0x1d34240()*0.472432);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d47fa0() {
   return (neuron0x1d346c0()*0.254736);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48200() {
   return (neuron0x1d365d0()*0.0532105);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48240() {
   return (neuron0x1d313a0()*1.61944);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48280() {
   return (neuron0x1d37140()*-1.8041);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d482c0() {
   return (neuron0x1d37c60()*1.85535);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48300() {
   return (neuron0x1d38670()*-1.73937);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48340() {
   return (neuron0x1d39080()*4.46808);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48380() {
   return (neuron0x1d36c70()*2.85817);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d483c0() {
   return (neuron0x1d3acb0()*1.14394);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48400() {
   return (neuron0x1d3b6c0()*2.43053);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48440() {
   return (neuron0x1d3c0d0()*0.376697);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48480() {
   return (neuron0x1d3cae0()*-0.0471715);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d484c0() {
   return (neuron0x1d3d4f0()*0.37862);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48500() {
   return (neuron0x1d3df00()*-1.8876);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48540() {
   return (neuron0x1d3e910()*-3.13063);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48580() {
   return (neuron0x1d3f320()*2.8518);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d485c0() {
   return (neuron0x1d3fd30()*2.11729);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d5d0() {
   return (neuron0x1d3a350()*2.14089);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d2d610() {
   return (neuron0x1d42fa0()*-2.09656);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48710() {
   return (neuron0x1d43970()*1.37196);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48750() {
   return (neuron0x1d44380()*1.18199);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48790() {
   return (neuron0x1d44d90()*-0.0443061);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d487d0() {
   return (neuron0x1d457a0()*-1.89589);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48810() {
   return (neuron0x1d461b0()*2.31302);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48850() {
   return (neuron0x1d46bc0()*0.958728);
}

double nnFunc_25_25hi_1500ep__::synapse0x1d48890() {
   return (neuron0x1d475d0()*-1.84468);
}

