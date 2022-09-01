#include "25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_downwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x25135e0();
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
         return neuron0x25135e0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x24f7b90() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f7ed0() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f8210() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f8550() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f8890() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x24f8d00() {
   double input = -5.1766;
   input += synapse0x2404fa0();
   input += synapse0x24e7000();
   input += synapse0x24f8fb0();
   input += synapse0x24f8ff0();
   input += synapse0x24f9030();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f8d00() {
   double input = input0x24f8d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24f9070() {
   double input = -0.803136;
   input += synapse0x24f93b0();
   input += synapse0x24f93f0();
   input += synapse0x24f9430();
   input += synapse0x24f9470();
   input += synapse0x24f94b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f9070() {
   double input = input0x24f9070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24f94f0() {
   double input = 2.03977;
   input += synapse0x24f9830();
   input += synapse0x24f9870();
   input += synapse0x24f98b0();
   input += synapse0x24f98f0();
   input += synapse0x24f9930();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f94f0() {
   double input = input0x24f94f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24f9970() {
   double input = 0.0627587;
   input += synapse0x24f9cb0();
   input += synapse0x24f9cf0();
   input += synapse0x23f7190();
   input += synapse0x23f71d0();
   input += synapse0x24f9e40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f9970() {
   double input = input0x24f9970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24f9e80() {
   double input = -3.5033;
   input += synapse0x24fa1c0();
   input += synapse0x24fa200();
   input += synapse0x24fa240();
   input += synapse0x24fa280();
   input += synapse0x24fa2c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24f9e80() {
   double input = input0x24f9e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fa300() {
   double input = 0.438179;
   input += synapse0x24fa640();
   input += synapse0x24fa680();
   input += synapse0x24fa6c0();
   input += synapse0x24fa700();
   input += synapse0x24fa740();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fa300() {
   double input = input0x24fa300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fa780() {
   double input = 0.480534;
   input += synapse0x24faac0();
   input += synapse0x24fab00();
   input += synapse0x24fab40();
   input += synapse0x24f9d30();
   input += synapse0x24f9d70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fa780() {
   double input = input0x24fa780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fad90() {
   double input = 0.654486;
   input += synapse0x24fb040();
   input += synapse0x24fb080();
   input += synapse0x24fb0c0();
   input += synapse0x24fb100();
   input += synapse0x24fb140();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fad90() {
   double input = input0x24fad90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fb180() {
   double input = -0.896228;
   input += synapse0x24fb4c0();
   input += synapse0x24fb500();
   input += synapse0x24fb540();
   input += synapse0x24fb580();
   input += synapse0x24fb5c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fb180() {
   double input = input0x24fb180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fb600() {
   double input = 6.20624;
   input += synapse0x24fb940();
   input += synapse0x24fb980();
   input += synapse0x24fb9c0();
   input += synapse0x24fba00();
   input += synapse0x24fba40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fb600() {
   double input = input0x24fb600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fba80() {
   double input = -1.76599;
   input += synapse0x24fbdc0();
   input += synapse0x24fbe00();
   input += synapse0x24fbe40();
   input += synapse0x24fbe80();
   input += synapse0x24fbec0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fba80() {
   double input = input0x24fba80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fbf00() {
   double input = 0.900865;
   input += synapse0x23f6fe0();
   input += synapse0x23f7020();
   input += synapse0x24fc350();
   input += synapse0x24fc390();
   input += synapse0x24fc3d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fbf00() {
   double input = input0x24fbf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fc410() {
   double input = 12.1344;
   input += synapse0x24fc750();
   input += synapse0x24fc790();
   input += synapse0x24fc7d0();
   input += synapse0x24fc810();
   input += synapse0x24fc850();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fc410() {
   double input = input0x24fc410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fab80() {
   double input = 0.317248;
   input += synapse0x23f77b0();
   input += synapse0x24fad10();
   input += synapse0x24fad50();
   input += synapse0x24fcca0();
   input += synapse0x24fcce0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fab80() {
   double input = input0x24fab80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fcd20() {
   double input = 0.577232;
   input += synapse0x24fd060();
   input += synapse0x24fd0a0();
   input += synapse0x24fd0e0();
   input += synapse0x24fd120();
   input += synapse0x24fd160();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fcd20() {
   double input = input0x24fcd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fd1a0() {
   double input = 1.26919;
   input += synapse0x24fd4e0();
   input += synapse0x24f7db0();
   input += synapse0x24f7df0();
   input += synapse0x24f80f0();
   input += synapse0x24f8130();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fd1a0() {
   double input = input0x24fd1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fda70() {
   double input = 2.89647;
   input += synapse0x24fdc00();
   input += synapse0x24fdc40();
   input += synapse0x24fdc80();
   input += synapse0x24fdcc0();
   input += synapse0x24fdd00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fda70() {
   double input = input0x24fda70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fdd40() {
   double input = 3.27674;
   input += synapse0x24fe080();
   input += synapse0x24fe0c0();
   input += synapse0x24fe100();
   input += synapse0x24fe140();
   input += synapse0x24fe180();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fdd40() {
   double input = input0x24fdd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fe1c0() {
   double input = 1.72179;
   input += synapse0x24fe500();
   input += synapse0x24fe540();
   input += synapse0x24fe580();
   input += synapse0x24fe5c0();
   input += synapse0x24fe600();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fe1c0() {
   double input = input0x24fe1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fe640() {
   double input = 1.37234;
   input += synapse0x24fe980();
   input += synapse0x24fe9c0();
   input += synapse0x24fea00();
   input += synapse0x24fea40();
   input += synapse0x24fea80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fe640() {
   double input = input0x24fe640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24feac0() {
   double input = -3.99588;
   input += synapse0x24fee00();
   input += synapse0x24fee40();
   input += synapse0x24fee80();
   input += synapse0x24feec0();
   input += synapse0x24fef00();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24feac0() {
   double input = input0x24feac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fef40() {
   double input = 2.21666;
   input += synapse0x24ff280();
   input += synapse0x24ff2c0();
   input += synapse0x24ff300();
   input += synapse0x24ff340();
   input += synapse0x24ff380();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fef40() {
   double input = input0x24fef40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24ff3c0() {
   double input = 1.92592;
   input += synapse0x24ff700();
   input += synapse0x24ff740();
   input += synapse0x24ff780();
   input += synapse0x24ff7c0();
   input += synapse0x24ff800();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24ff3c0() {
   double input = input0x24ff3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24ff840() {
   double input = -2.27434;
   input += synapse0x24ffb80();
   input += synapse0x24ffbc0();
   input += synapse0x24ffc00();
   input += synapse0x24ffc40();
   input += synapse0x24ffc80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24ff840() {
   double input = input0x24ff840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24ffcc0() {
   double input = -0.743442;
   input += synapse0x2500000();
   input += synapse0x2500040();
   input += synapse0x2500080();
   input += synapse0x25000c0();
   input += synapse0x2500100();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24ffcc0() {
   double input = input0x24ffcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2501bd0() {
   double input = -1.33809;
   input += synapse0x24f9c20();
   input += synapse0x24f9c60();
   input += synapse0x24fa130();
   input += synapse0x24fa170();
   input += synapse0x24fa5b0();
   input += synapse0x24fa5f0();
   input += synapse0x24faa30();
   input += synapse0x24faa70();
   input += synapse0x24fafb0();
   input += synapse0x24faff0();
   input += synapse0x24fb430();
   input += synapse0x24fb470();
   input += synapse0x24fb8b0();
   input += synapse0x24fb8f0();
   input += synapse0x24fbd30();
   input += synapse0x24fbd70();
   input += synapse0x24fc1b0();
   input += synapse0x24fc1f0();
   input += synapse0x24fc6c0();
   input += synapse0x24fc700();
   input += synapse0x24fcfd0();
   input += synapse0x24fd010();
   input += synapse0x24fd450();
   input += synapse0x24fd490();
   input += synapse0x24f8ab0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2501bd0() {
   double input = input0x2501bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x24fc9a0() {
   double input = 0.782891;
   input += synapse0x24fcb30();
   input += synapse0x24fcb70();
   input += synapse0x24fcbb0();
   input += synapse0x24fcbf0();
   input += synapse0x24fcc30();
   input += synapse0x24f8af0();
   input += synapse0x24fed70();
   input += synapse0x24fedb0();
   input += synapse0x24ff1f0();
   input += synapse0x24ff230();
   input += synapse0x24ff670();
   input += synapse0x24ff6b0();
   input += synapse0x24ffaf0();
   input += synapse0x24ffb30();
   input += synapse0x24fff70();
   input += synapse0x24fffb0();
   input += synapse0x24f8f20();
   input += synapse0x24f8f60();
   input += synapse0x24fdff0();
   input += synapse0x24fe030();
   input += synapse0x2405070();
   input += synapse0x24050b0();
   input += synapse0x2502680();
   input += synapse0x25026c0();
   input += synapse0x2502700();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x24fc9a0() {
   double input = input0x24fc9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2502740() {
   double input = -0.0418447;
   input += synapse0x24fc240();
   input += synapse0x24fc280();
   input += synapse0x24fc2c0();
   input += synapse0x24fc300();
   input += synapse0x2502c90();
   input += synapse0x2502cd0();
   input += synapse0x2502d10();
   input += synapse0x2502d50();
   input += synapse0x2502d90();
   input += synapse0x2502dd0();
   input += synapse0x2502e10();
   input += synapse0x2502e50();
   input += synapse0x2502e90();
   input += synapse0x2502ed0();
   input += synapse0x2502f10();
   input += synapse0x2502f50();
   input += synapse0x25028d0();
   input += synapse0x2502910();
   input += synapse0x25030a0();
   input += synapse0x25030e0();
   input += synapse0x2503120();
   input += synapse0x2503160();
   input += synapse0x25031a0();
   input += synapse0x25031e0();
   input += synapse0x2503220();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2502740() {
   double input = input0x2502740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2503260() {
   double input = -0.425175;
   input += synapse0x25035a0();
   input += synapse0x25035e0();
   input += synapse0x2503620();
   input += synapse0x2503660();
   input += synapse0x25036a0();
   input += synapse0x25036e0();
   input += synapse0x2503720();
   input += synapse0x2503760();
   input += synapse0x25037a0();
   input += synapse0x25037e0();
   input += synapse0x2503820();
   input += synapse0x2503860();
   input += synapse0x25038a0();
   input += synapse0x25038e0();
   input += synapse0x2503920();
   input += synapse0x2503960();
   input += synapse0x25033f0();
   input += synapse0x2503430();
   input += synapse0x2503ab0();
   input += synapse0x2503af0();
   input += synapse0x2503b30();
   input += synapse0x2503b70();
   input += synapse0x2503bb0();
   input += synapse0x2503bf0();
   input += synapse0x2503c30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2503260() {
   double input = input0x2503260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2503c70() {
   double input = 0.263384;
   input += synapse0x2503fb0();
   input += synapse0x2503ff0();
   input += synapse0x2504030();
   input += synapse0x2504070();
   input += synapse0x25040b0();
   input += synapse0x25040f0();
   input += synapse0x2504130();
   input += synapse0x2504170();
   input += synapse0x25041b0();
   input += synapse0x25041f0();
   input += synapse0x2504230();
   input += synapse0x2504270();
   input += synapse0x25042b0();
   input += synapse0x25042f0();
   input += synapse0x2504330();
   input += synapse0x2504370();
   input += synapse0x2503e00();
   input += synapse0x2503e40();
   input += synapse0x25044c0();
   input += synapse0x2504500();
   input += synapse0x2504540();
   input += synapse0x2504580();
   input += synapse0x25045c0();
   input += synapse0x2504600();
   input += synapse0x2504640();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2503c70() {
   double input = input0x2503c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2504680() {
   double input = 1.21336;
   input += synapse0x25049c0();
   input += synapse0x2504a00();
   input += synapse0x2504a40();
   input += synapse0x2504a80();
   input += synapse0x2504ac0();
   input += synapse0x2504b00();
   input += synapse0x2504b40();
   input += synapse0x2501d60();
   input += synapse0x2501da0();
   input += synapse0x2501de0();
   input += synapse0x2501e20();
   input += synapse0x2501e60();
   input += synapse0x2501ea0();
   input += synapse0x2501ee0();
   input += synapse0x2501f20();
   input += synapse0x2501f60();
   input += synapse0x2504810();
   input += synapse0x2504850();
   input += synapse0x25020b0();
   input += synapse0x25020f0();
   input += synapse0x2502130();
   input += synapse0x2502170();
   input += synapse0x25021b0();
   input += synapse0x25021f0();
   input += synapse0x2502230();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2504680() {
   double input = input0x2504680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2502270() {
   double input = 0.0557847;
   input += synapse0x2502520();
   input += synapse0x2505c20();
   input += synapse0x2505c60();
   input += synapse0x2505ca0();
   input += synapse0x2505ce0();
   input += synapse0x2505d20();
   input += synapse0x2505d60();
   input += synapse0x2505da0();
   input += synapse0x2505de0();
   input += synapse0x2505e20();
   input += synapse0x2505e60();
   input += synapse0x2505ea0();
   input += synapse0x2505ee0();
   input += synapse0x2505f20();
   input += synapse0x2505f60();
   input += synapse0x2505fa0();
   input += synapse0x2502400();
   input += synapse0x2502440();
   input += synapse0x25060f0();
   input += synapse0x2506130();
   input += synapse0x2506170();
   input += synapse0x25061b0();
   input += synapse0x25061f0();
   input += synapse0x2506230();
   input += synapse0x2506270();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2502270() {
   double input = input0x2502270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x25062b0() {
   double input = -0.425407;
   input += synapse0x25065f0();
   input += synapse0x2506630();
   input += synapse0x2506670();
   input += synapse0x25066b0();
   input += synapse0x25066f0();
   input += synapse0x2506730();
   input += synapse0x2506770();
   input += synapse0x25067b0();
   input += synapse0x25067f0();
   input += synapse0x2506830();
   input += synapse0x2506870();
   input += synapse0x25068b0();
   input += synapse0x25068f0();
   input += synapse0x2506930();
   input += synapse0x2506970();
   input += synapse0x25069b0();
   input += synapse0x2506440();
   input += synapse0x2506480();
   input += synapse0x2506b00();
   input += synapse0x2506b40();
   input += synapse0x2506b80();
   input += synapse0x2506bc0();
   input += synapse0x2506c00();
   input += synapse0x2506c40();
   input += synapse0x2506c80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x25062b0() {
   double input = input0x25062b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2506cc0() {
   double input = 0.220001;
   input += synapse0x2507000();
   input += synapse0x2507040();
   input += synapse0x2507080();
   input += synapse0x25070c0();
   input += synapse0x2507100();
   input += synapse0x2507140();
   input += synapse0x2507180();
   input += synapse0x25071c0();
   input += synapse0x2507200();
   input += synapse0x2507240();
   input += synapse0x2507280();
   input += synapse0x25072c0();
   input += synapse0x2507300();
   input += synapse0x2507340();
   input += synapse0x2507380();
   input += synapse0x25073c0();
   input += synapse0x2506e50();
   input += synapse0x2506e90();
   input += synapse0x2507510();
   input += synapse0x2507550();
   input += synapse0x2507590();
   input += synapse0x25075d0();
   input += synapse0x2507610();
   input += synapse0x2507650();
   input += synapse0x2507690();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2506cc0() {
   double input = input0x2506cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x25076d0() {
   double input = 1.31776;
   input += synapse0x2507a10();
   input += synapse0x2507a50();
   input += synapse0x2507a90();
   input += synapse0x2507ad0();
   input += synapse0x2507b10();
   input += synapse0x2507b50();
   input += synapse0x2507b90();
   input += synapse0x2507bd0();
   input += synapse0x2507c10();
   input += synapse0x2507c50();
   input += synapse0x2507c90();
   input += synapse0x2507cd0();
   input += synapse0x2507d10();
   input += synapse0x2507d50();
   input += synapse0x2507d90();
   input += synapse0x2507dd0();
   input += synapse0x2507860();
   input += synapse0x25078a0();
   input += synapse0x2507f20();
   input += synapse0x2507f60();
   input += synapse0x2507fa0();
   input += synapse0x2507fe0();
   input += synapse0x2508020();
   input += synapse0x2508060();
   input += synapse0x25080a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x25076d0() {
   double input = input0x25076d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x25080e0() {
   double input = 0.0593904;
   input += synapse0x2508420();
   input += synapse0x2508460();
   input += synapse0x25084a0();
   input += synapse0x25084e0();
   input += synapse0x2508520();
   input += synapse0x2508560();
   input += synapse0x25085a0();
   input += synapse0x25085e0();
   input += synapse0x2508620();
   input += synapse0x2508660();
   input += synapse0x25086a0();
   input += synapse0x25086e0();
   input += synapse0x2508720();
   input += synapse0x2508760();
   input += synapse0x25087a0();
   input += synapse0x25087e0();
   input += synapse0x2508270();
   input += synapse0x25082b0();
   input += synapse0x2508930();
   input += synapse0x2508970();
   input += synapse0x25089b0();
   input += synapse0x25089f0();
   input += synapse0x2508a30();
   input += synapse0x2508a70();
   input += synapse0x2508ab0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x25080e0() {
   double input = input0x25080e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2508af0() {
   double input = -0.138184;
   input += synapse0x2508e30();
   input += synapse0x2508e70();
   input += synapse0x2508eb0();
   input += synapse0x2508ef0();
   input += synapse0x2508f30();
   input += synapse0x2508f70();
   input += synapse0x2508fb0();
   input += synapse0x2508ff0();
   input += synapse0x2509030();
   input += synapse0x2509070();
   input += synapse0x25090b0();
   input += synapse0x25090f0();
   input += synapse0x2509130();
   input += synapse0x2509170();
   input += synapse0x25091b0();
   input += synapse0x25091f0();
   input += synapse0x2508c80();
   input += synapse0x2508cc0();
   input += synapse0x2509340();
   input += synapse0x2509380();
   input += synapse0x25093c0();
   input += synapse0x2509400();
   input += synapse0x2509440();
   input += synapse0x2509480();
   input += synapse0x25094c0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2508af0() {
   double input = input0x2508af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2509500() {
   double input = -1.27916;
   input += synapse0x2509840();
   input += synapse0x2509880();
   input += synapse0x25098c0();
   input += synapse0x2509900();
   input += synapse0x2509940();
   input += synapse0x2509980();
   input += synapse0x25099c0();
   input += synapse0x2509a00();
   input += synapse0x2509a40();
   input += synapse0x2509a80();
   input += synapse0x2509ac0();
   input += synapse0x2509b00();
   input += synapse0x2509b40();
   input += synapse0x2509b80();
   input += synapse0x2509bc0();
   input += synapse0x2509c00();
   input += synapse0x2509690();
   input += synapse0x25096d0();
   input += synapse0x2509d50();
   input += synapse0x2509d90();
   input += synapse0x2509dd0();
   input += synapse0x2509e10();
   input += synapse0x2509e50();
   input += synapse0x2509e90();
   input += synapse0x2509ed0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2509500() {
   double input = input0x2509500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2509f10() {
   double input = -0.313766;
   input += synapse0x250a250();
   input += synapse0x250a290();
   input += synapse0x250a2d0();
   input += synapse0x250a310();
   input += synapse0x250a350();
   input += synapse0x250a390();
   input += synapse0x250a3d0();
   input += synapse0x250a410();
   input += synapse0x250a450();
   input += synapse0x250a490();
   input += synapse0x250a4d0();
   input += synapse0x250a510();
   input += synapse0x250a550();
   input += synapse0x250a590();
   input += synapse0x250a5d0();
   input += synapse0x250a610();
   input += synapse0x250a0a0();
   input += synapse0x250a0e0();
   input += synapse0x250a760();
   input += synapse0x250a7a0();
   input += synapse0x250a7e0();
   input += synapse0x250a820();
   input += synapse0x250a860();
   input += synapse0x250a8a0();
   input += synapse0x250a8e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2509f10() {
   double input = input0x2509f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x250a920() {
   double input = 0.999585;
   input += synapse0x250ac60();
   input += synapse0x250aca0();
   input += synapse0x250ace0();
   input += synapse0x250ad20();
   input += synapse0x250ad60();
   input += synapse0x250ada0();
   input += synapse0x250ade0();
   input += synapse0x250ae20();
   input += synapse0x250ae60();
   input += synapse0x250aea0();
   input += synapse0x250aee0();
   input += synapse0x250af20();
   input += synapse0x250af60();
   input += synapse0x250afa0();
   input += synapse0x250afe0();
   input += synapse0x250b020();
   input += synapse0x250aab0();
   input += synapse0x250aaf0();
   input += synapse0x250b170();
   input += synapse0x250b1b0();
   input += synapse0x250b1f0();
   input += synapse0x250b230();
   input += synapse0x250b270();
   input += synapse0x250b2b0();
   input += synapse0x250b2f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x250a920() {
   double input = input0x250a920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x250b330() {
   double input = 0.159832;
   input += synapse0x250b670();
   input += synapse0x24f8e90();
   input += synapse0x24f8ed0();
   input += synapse0x24f9290();
   input += synapse0x24f92d0();
   input += synapse0x24f9710();
   input += synapse0x24f9750();
   input += synapse0x24f9b90();
   input += synapse0x24f9bd0();
   input += synapse0x24fa0a0();
   input += synapse0x24fa0e0();
   input += synapse0x24fa520();
   input += synapse0x24fa560();
   input += synapse0x24fa9a0();
   input += synapse0x24fa9e0();
   input += synapse0x24faf20();
   input += synapse0x24faf60();
   input += synapse0x24fb3a0();
   input += synapse0x24fb3e0();
   input += synapse0x24fb820();
   input += synapse0x24fb860();
   input += synapse0x24fbca0();
   input += synapse0x24fbce0();
   input += synapse0x24fc120();
   input += synapse0x24fc160();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x250b330() {
   double input = input0x250b330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2505950() {
   double input = 1.44129;
   input += synapse0x2505ae0();
   input += synapse0x2505b20();
   input += synapse0x24fd3c0();
   input += synapse0x24fd400();
   input += synapse0x250b4c0();
   input += synapse0x250b500();
   input += synapse0x24f8770();
   input += synapse0x24f87b0();
   input += synapse0x24fdf60();
   input += synapse0x24fdfa0();
   input += synapse0x24fe3e0();
   input += synapse0x24fe420();
   input += synapse0x24fe860();
   input += synapse0x24fe8a0();
   input += synapse0x24fece0();
   input += synapse0x24fed20();
   input += synapse0x24ff160();
   input += synapse0x24ff1a0();
   input += synapse0x24ff5e0();
   input += synapse0x24ff620();
   input += synapse0x24ffa60();
   input += synapse0x24ffaa0();
   input += synapse0x24ffee0();
   input += synapse0x24fff20();
   input += synapse0x24fc630();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2505950() {
   double input = input0x2505950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x250e5a0() {
   double input = -0.273691;
   input += synapse0x24fc670();
   input += synapse0x250e8e0();
   input += synapse0x250e920();
   input += synapse0x250e960();
   input += synapse0x250e9a0();
   input += synapse0x250e9e0();
   input += synapse0x250ea20();
   input += synapse0x250ea60();
   input += synapse0x250eaa0();
   input += synapse0x250eae0();
   input += synapse0x250eb20();
   input += synapse0x250eb60();
   input += synapse0x250eba0();
   input += synapse0x250ebe0();
   input += synapse0x250ec20();
   input += synapse0x250ec60();
   input += synapse0x250e730();
   input += synapse0x250e770();
   input += synapse0x250edb0();
   input += synapse0x250edf0();
   input += synapse0x250ee30();
   input += synapse0x250ee70();
   input += synapse0x250eeb0();
   input += synapse0x250eef0();
   input += synapse0x250ef30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x250e5a0() {
   double input = input0x250e5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x250ef70() {
   double input = -0.626712;
   input += synapse0x250f2b0();
   input += synapse0x250f2f0();
   input += synapse0x250f330();
   input += synapse0x250f370();
   input += synapse0x250f3b0();
   input += synapse0x250f3f0();
   input += synapse0x250f430();
   input += synapse0x250f470();
   input += synapse0x250f4b0();
   input += synapse0x250f4f0();
   input += synapse0x250f530();
   input += synapse0x250f570();
   input += synapse0x250f5b0();
   input += synapse0x250f5f0();
   input += synapse0x250f630();
   input += synapse0x250f670();
   input += synapse0x250f100();
   input += synapse0x250f140();
   input += synapse0x250f7c0();
   input += synapse0x250f800();
   input += synapse0x250f840();
   input += synapse0x250f880();
   input += synapse0x250f8c0();
   input += synapse0x250f900();
   input += synapse0x250f940();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x250ef70() {
   double input = input0x250ef70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x250f980() {
   double input = 0.429941;
   input += synapse0x250fcc0();
   input += synapse0x250fd00();
   input += synapse0x250fd40();
   input += synapse0x250fd80();
   input += synapse0x250fdc0();
   input += synapse0x250fe00();
   input += synapse0x250fe40();
   input += synapse0x250fe80();
   input += synapse0x250fec0();
   input += synapse0x250ff00();
   input += synapse0x250ff40();
   input += synapse0x250ff80();
   input += synapse0x250ffc0();
   input += synapse0x2510000();
   input += synapse0x2510040();
   input += synapse0x2510080();
   input += synapse0x250fb10();
   input += synapse0x250fb50();
   input += synapse0x25101d0();
   input += synapse0x2510210();
   input += synapse0x2510250();
   input += synapse0x2510290();
   input += synapse0x25102d0();
   input += synapse0x2510310();
   input += synapse0x2510350();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x250f980() {
   double input = input0x250f980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2510390() {
   double input = -0.470271;
   input += synapse0x25106d0();
   input += synapse0x2510710();
   input += synapse0x2510750();
   input += synapse0x2510790();
   input += synapse0x25107d0();
   input += synapse0x2510810();
   input += synapse0x2510850();
   input += synapse0x2510890();
   input += synapse0x25108d0();
   input += synapse0x2510910();
   input += synapse0x2510950();
   input += synapse0x2510990();
   input += synapse0x25109d0();
   input += synapse0x2510a10();
   input += synapse0x2510a50();
   input += synapse0x2510a90();
   input += synapse0x2510520();
   input += synapse0x2510560();
   input += synapse0x2510be0();
   input += synapse0x2510c20();
   input += synapse0x2510c60();
   input += synapse0x2510ca0();
   input += synapse0x2510ce0();
   input += synapse0x2510d20();
   input += synapse0x2510d60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2510390() {
   double input = input0x2510390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2510da0() {
   double input = 0.434447;
   input += synapse0x25110e0();
   input += synapse0x2511120();
   input += synapse0x2511160();
   input += synapse0x25111a0();
   input += synapse0x25111e0();
   input += synapse0x2511220();
   input += synapse0x2511260();
   input += synapse0x25112a0();
   input += synapse0x25112e0();
   input += synapse0x2511320();
   input += synapse0x2511360();
   input += synapse0x25113a0();
   input += synapse0x25113e0();
   input += synapse0x2511420();
   input += synapse0x2511460();
   input += synapse0x25114a0();
   input += synapse0x2510f30();
   input += synapse0x2510f70();
   input += synapse0x25115f0();
   input += synapse0x2511630();
   input += synapse0x2511670();
   input += synapse0x25116b0();
   input += synapse0x25116f0();
   input += synapse0x2511730();
   input += synapse0x2511770();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2510da0() {
   double input = input0x2510da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x25117b0() {
   double input = 0.153427;
   input += synapse0x2511af0();
   input += synapse0x2511b30();
   input += synapse0x2511b70();
   input += synapse0x2511bb0();
   input += synapse0x2511bf0();
   input += synapse0x2511c30();
   input += synapse0x2511c70();
   input += synapse0x2511cb0();
   input += synapse0x2511cf0();
   input += synapse0x2511d30();
   input += synapse0x2511d70();
   input += synapse0x2511db0();
   input += synapse0x2511df0();
   input += synapse0x2511e30();
   input += synapse0x2511e70();
   input += synapse0x2511eb0();
   input += synapse0x2511940();
   input += synapse0x2511980();
   input += synapse0x2512000();
   input += synapse0x2512040();
   input += synapse0x2512080();
   input += synapse0x25120c0();
   input += synapse0x2512100();
   input += synapse0x2512140();
   input += synapse0x2512180();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x25117b0() {
   double input = input0x25117b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x25121c0() {
   double input = -0.898345;
   input += synapse0x2512500();
   input += synapse0x2512540();
   input += synapse0x2512580();
   input += synapse0x25125c0();
   input += synapse0x2512600();
   input += synapse0x2512640();
   input += synapse0x2512680();
   input += synapse0x25126c0();
   input += synapse0x2512700();
   input += synapse0x2512740();
   input += synapse0x2512780();
   input += synapse0x25127c0();
   input += synapse0x2512800();
   input += synapse0x2512840();
   input += synapse0x2512880();
   input += synapse0x25128c0();
   input += synapse0x2512350();
   input += synapse0x2512390();
   input += synapse0x2512a10();
   input += synapse0x2512a50();
   input += synapse0x2512a90();
   input += synapse0x2512ad0();
   input += synapse0x2512b10();
   input += synapse0x2512b50();
   input += synapse0x2512b90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x25121c0() {
   double input = input0x25121c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x2512bd0() {
   double input = -0.133786;
   input += synapse0x2512f10();
   input += synapse0x2512f50();
   input += synapse0x2512f90();
   input += synapse0x2512fd0();
   input += synapse0x2513010();
   input += synapse0x2513050();
   input += synapse0x2513090();
   input += synapse0x25130d0();
   input += synapse0x2513110();
   input += synapse0x2513150();
   input += synapse0x2513190();
   input += synapse0x25131d0();
   input += synapse0x2513210();
   input += synapse0x2513250();
   input += synapse0x2513290();
   input += synapse0x25132d0();
   input += synapse0x2512d60();
   input += synapse0x2512da0();
   input += synapse0x2513420();
   input += synapse0x2513460();
   input += synapse0x25134a0();
   input += synapse0x25134e0();
   input += synapse0x2513520();
   input += synapse0x2513560();
   input += synapse0x25135a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x2512bd0() {
   double input = input0x2512bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x25135e0() {
   double input = 0.836277;
   input += synapse0x2513800();
   input += synapse0x2513840();
   input += synapse0x2513880();
   input += synapse0x25138c0();
   input += synapse0x2513900();
   input += synapse0x2513940();
   input += synapse0x2513980();
   input += synapse0x25139c0();
   input += synapse0x2513a00();
   input += synapse0x2513a40();
   input += synapse0x2513a80();
   input += synapse0x2513ac0();
   input += synapse0x2513b00();
   input += synapse0x2513b40();
   input += synapse0x2513b80();
   input += synapse0x2513bc0();
   input += synapse0x24f8bd0();
   input += synapse0x24f8c10();
   input += synapse0x2513d10();
   input += synapse0x2513d50();
   input += synapse0x2513d90();
   input += synapse0x2513dd0();
   input += synapse0x2513e10();
   input += synapse0x2513e50();
   input += synapse0x2513e90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x25135e0() {
   double input = input0x25135e0();
   return (input * 4.06196)+130.865;
}

double nnFunc_25_25hi_1500ep__::synapse0x2404fa0() {
   return (neuron0x24f7b90()*1.03515);
}

double nnFunc_25_25hi_1500ep__::synapse0x24e7000() {
   return (neuron0x24f7ed0()*-0.599359);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8fb0() {
   return (neuron0x24f8210()*-0.257773);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8ff0() {
   return (neuron0x24f8550()*-0.75336);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9030() {
   return (neuron0x24f8890()*-3.89327);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f93b0() {
   return (neuron0x24f7b90()*1.79775);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f93f0() {
   return (neuron0x24f7ed0()*-0.540941);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9430() {
   return (neuron0x24f8210()*-1.06517);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9470() {
   return (neuron0x24f8550()*1.12895);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f94b0() {
   return (neuron0x24f8890()*-0.0812656);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9830() {
   return (neuron0x24f7b90()*-0.452469);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9870() {
   return (neuron0x24f7ed0()*0.583336);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f98b0() {
   return (neuron0x24f8210()*-0.128819);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f98f0() {
   return (neuron0x24f8550()*3.69627);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9930() {
   return (neuron0x24f8890()*1.62247);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9cb0() {
   return (neuron0x24f7b90()*-0.681166);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9cf0() {
   return (neuron0x24f7ed0()*0.864591);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7190() {
   return (neuron0x24f8210()*-0.166166);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f71d0() {
   return (neuron0x24f8550()*2.90249);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9e40() {
   return (neuron0x24f8890()*-0.95263);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa1c0() {
   return (neuron0x24f7b90()*0.642258);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa200() {
   return (neuron0x24f7ed0()*-0.25325);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa240() {
   return (neuron0x24f8210()*-0.0043472);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa280() {
   return (neuron0x24f8550()*0.523668);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa2c0() {
   return (neuron0x24f8890()*-1.75781);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa640() {
   return (neuron0x24f7b90()*-0.506503);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa680() {
   return (neuron0x24f7ed0()*0.500676);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa6c0() {
   return (neuron0x24f8210()*-0.0332659);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa700() {
   return (neuron0x24f8550()*0.458879);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa740() {
   return (neuron0x24f8890()*-0.971809);
}

double nnFunc_25_25hi_1500ep__::synapse0x24faac0() {
   return (neuron0x24f7b90()*-2.32177);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fab00() {
   return (neuron0x24f7ed0()*0.143832);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fab40() {
   return (neuron0x24f8210()*0.896998);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9d30() {
   return (neuron0x24f8550()*-0.291117);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9d70() {
   return (neuron0x24f8890()*0.166519);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb040() {
   return (neuron0x24f7b90()*-2.58742);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb080() {
   return (neuron0x24f7ed0()*0.0733619);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb0c0() {
   return (neuron0x24f8210()*1.03421);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb100() {
   return (neuron0x24f8550()*-0.967215);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb140() {
   return (neuron0x24f8890()*0.353635);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb4c0() {
   return (neuron0x24f7b90()*-1.42636);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb500() {
   return (neuron0x24f7ed0()*0.978664);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb540() {
   return (neuron0x24f8210()*-0.00606206);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb580() {
   return (neuron0x24f8550()*-0.166756);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb5c0() {
   return (neuron0x24f8890()*-0.145216);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb940() {
   return (neuron0x24f7b90()*0.289676);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb980() {
   return (neuron0x24f7ed0()*-0.322416);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb9c0() {
   return (neuron0x24f8210()*0.0270066);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fba00() {
   return (neuron0x24f8550()*2.95623);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fba40() {
   return (neuron0x24f8890()*3.71829);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbdc0() {
   return (neuron0x24f7b90()*-1.4433);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbe00() {
   return (neuron0x24f7ed0()*-0.202288);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbe40() {
   return (neuron0x24f8210()*0.305557);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbe80() {
   return (neuron0x24f8550()*-3.76778);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbec0() {
   return (neuron0x24f8890()*-0.871305);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f6fe0() {
   return (neuron0x24f7b90()*0.534126);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f7020() {
   return (neuron0x24f7ed0()*-0.641168);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc350() {
   return (neuron0x24f8210()*-0.232868);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc390() {
   return (neuron0x24f8550()*1.74033);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc3d0() {
   return (neuron0x24f8890()*0.0692139);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc750() {
   return (neuron0x24f7b90()*0.143858);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc790() {
   return (neuron0x24f7ed0()*-0.195716);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc7d0() {
   return (neuron0x24f8210()*0.0133974);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc810() {
   return (neuron0x24f8550()*5.54781);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc850() {
   return (neuron0x24f8890()*4.73329);
}

double nnFunc_25_25hi_1500ep__::synapse0x23f77b0() {
   return (neuron0x24f7b90()*-2.58065);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fad10() {
   return (neuron0x24f7ed0()*0.353118);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fad50() {
   return (neuron0x24f8210()*1.14833);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcca0() {
   return (neuron0x24f8550()*-1.16899);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcce0() {
   return (neuron0x24f8890()*0.581778);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd060() {
   return (neuron0x24f7b90()*4.17335);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd0a0() {
   return (neuron0x24f7ed0()*0.363352);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd0e0() {
   return (neuron0x24f8210()*-2.47206);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd120() {
   return (neuron0x24f8550()*0.1283);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd160() {
   return (neuron0x24f8890()*0.135262);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd4e0() {
   return (neuron0x24f7b90()*-0.0778892);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f7db0() {
   return (neuron0x24f7ed0()*-0.686707);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f7df0() {
   return (neuron0x24f8210()*-0.142779);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f80f0() {
   return (neuron0x24f8550()*4.04653);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8130() {
   return (neuron0x24f8890()*0.423902);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdc00() {
   return (neuron0x24f7b90()*0.494098);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdc40() {
   return (neuron0x24f7ed0()*0.0976834);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdc80() {
   return (neuron0x24f8210()*-0.336197);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdcc0() {
   return (neuron0x24f8550()*4.26803);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdd00() {
   return (neuron0x24f8890()*1.48856);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe080() {
   return (neuron0x24f7b90()*0.32359);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe0c0() {
   return (neuron0x24f7ed0()*-0.0406392);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe100() {
   return (neuron0x24f8210()*-0.2377);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe140() {
   return (neuron0x24f8550()*5.20345);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe180() {
   return (neuron0x24f8890()*2.74119);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe500() {
   return (neuron0x24f7b90()*-2.36666);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe540() {
   return (neuron0x24f7ed0()*-0.165055);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe580() {
   return (neuron0x24f8210()*1.11555);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe5c0() {
   return (neuron0x24f8550()*-0.585663);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe600() {
   return (neuron0x24f8890()*1.12325);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe980() {
   return (neuron0x24f7b90()*-2.91655);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe9c0() {
   return (neuron0x24f7ed0()*0.966967);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fea00() {
   return (neuron0x24f8210()*1.47432);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fea40() {
   return (neuron0x24f8550()*-2.50023);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fea80() {
   return (neuron0x24f8890()*1.26671);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fee00() {
   return (neuron0x24f7b90()*0.572044);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fee40() {
   return (neuron0x24f7ed0()*0.162502);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fee80() {
   return (neuron0x24f8210()*-0.420814);
}

double nnFunc_25_25hi_1500ep__::synapse0x24feec0() {
   return (neuron0x24f8550()*-0.119897);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fef00() {
   return (neuron0x24f8890()*-3.03887);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff280() {
   return (neuron0x24f7b90()*0.61818);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff2c0() {
   return (neuron0x24f7ed0()*-0.645614);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff300() {
   return (neuron0x24f8210()*0.116103);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff340() {
   return (neuron0x24f8550()*2.13262);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff380() {
   return (neuron0x24f8890()*1.6707);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff700() {
   return (neuron0x24f7b90()*0.0144638);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff740() {
   return (neuron0x24f7ed0()*-0.143212);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff780() {
   return (neuron0x24f8210()*0.00683341);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff7c0() {
   return (neuron0x24f8550()*0.191754);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff800() {
   return (neuron0x24f8890()*0.1805);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffb80() {
   return (neuron0x24f7b90()*0.401363);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffbc0() {
   return (neuron0x24f7ed0()*-0.398874);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffc00() {
   return (neuron0x24f8210()*0.043475);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffc40() {
   return (neuron0x24f8550()*-2.71486);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffc80() {
   return (neuron0x24f8890()*-3.06465);
}

double nnFunc_25_25hi_1500ep__::synapse0x2500000() {
   return (neuron0x24f7b90()*-1.52241);
}

double nnFunc_25_25hi_1500ep__::synapse0x2500040() {
   return (neuron0x24f7ed0()*0.442405);
}

double nnFunc_25_25hi_1500ep__::synapse0x2500080() {
   return (neuron0x24f8210()*0.748161);
}

double nnFunc_25_25hi_1500ep__::synapse0x25000c0() {
   return (neuron0x24f8550()*-2.05802);
}

double nnFunc_25_25hi_1500ep__::synapse0x2500100() {
   return (neuron0x24f8890()*-0.734092);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9c20() {
   return (neuron0x24f8d00()*0.0877469);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9c60() {
   return (neuron0x24f9070()*-0.607337);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa130() {
   return (neuron0x24f94f0()*-0.890102);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa170() {
   return (neuron0x24f9970()*-1.04789);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa5b0() {
   return (neuron0x24f9e80()*-0.319103);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa5f0() {
   return (neuron0x24fa300()*-0.953658);
}

double nnFunc_25_25hi_1500ep__::synapse0x24faa30() {
   return (neuron0x24fa780()*-0.644185);
}

double nnFunc_25_25hi_1500ep__::synapse0x24faa70() {
   return (neuron0x24fad90()*-0.842482);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fafb0() {
   return (neuron0x24fb180()*-0.189008);
}

double nnFunc_25_25hi_1500ep__::synapse0x24faff0() {
   return (neuron0x24fb600()*-0.13078);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb430() {
   return (neuron0x24fba80()*1.59509);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb470() {
   return (neuron0x24fbf00()*-0.977818);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb8b0() {
   return (neuron0x24fc410()*-0.648105);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb8f0() {
   return (neuron0x24fab80()*-0.0569674);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbd30() {
   return (neuron0x24fcd20()*-0.728252);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbd70() {
   return (neuron0x24fd1a0()*-1.04589);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc1b0() {
   return (neuron0x24fda70()*-2.25723);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc1f0() {
   return (neuron0x24fdd40()*-1.6964);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc6c0() {
   return (neuron0x24fe1c0()*-0.311753);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc700() {
   return (neuron0x24fe640()*-0.501575);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcfd0() {
   return (neuron0x24feac0()*0.359426);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd010() {
   return (neuron0x24fef40()*-1.47836);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd450() {
   return (neuron0x24ff3c0()*-1.19083);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd490() {
   return (neuron0x24ff840()*0.438102);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8ab0() {
   return (neuron0x24ffcc0()*0.843451);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcb30() {
   return (neuron0x24f8d00()*1.46668);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcb70() {
   return (neuron0x24f9070()*1.18335);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcbb0() {
   return (neuron0x24f94f0()*-0.962025);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcbf0() {
   return (neuron0x24f9970()*0.539141);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fcc30() {
   return (neuron0x24f9e80()*0.750367);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8af0() {
   return (neuron0x24fa300()*1.1617);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fed70() {
   return (neuron0x24fa780()*0.430064);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fedb0() {
   return (neuron0x24fad90()*0.450935);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff1f0() {
   return (neuron0x24fb180()*0.613608);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff230() {
   return (neuron0x24fb600()*1.09932);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff670() {
   return (neuron0x24fba80()*1.16888);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff6b0() {
   return (neuron0x24fbf00()*-0.152013);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffaf0() {
   return (neuron0x24fc410()*-0.640072);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffb30() {
   return (neuron0x24fab80()*0.678076);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fff70() {
   return (neuron0x24fcd20()*0.206792);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fffb0() {
   return (neuron0x24fd1a0()*-0.982873);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8f20() {
   return (neuron0x24fda70()*-1.02799);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8f60() {
   return (neuron0x24fdd40()*-1.08977);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdff0() {
   return (neuron0x24fe1c0()*-0.348691);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe030() {
   return (neuron0x24fe640()*0.207495);
}

double nnFunc_25_25hi_1500ep__::synapse0x2405070() {
   return (neuron0x24feac0()*1.09599);
}

double nnFunc_25_25hi_1500ep__::synapse0x24050b0() {
   return (neuron0x24fef40()*-0.548416);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502680() {
   return (neuron0x24ff3c0()*0.657215);
}

double nnFunc_25_25hi_1500ep__::synapse0x25026c0() {
   return (neuron0x24ff840()*1.12445);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502700() {
   return (neuron0x24ffcc0()*1.1231);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc240() {
   return (neuron0x24f8d00()*-1.71173);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc280() {
   return (neuron0x24f9070()*-0.532378);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc2c0() {
   return (neuron0x24f94f0()*0.649034);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc300() {
   return (neuron0x24f9970()*-0.194832);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502c90() {
   return (neuron0x24f9e80()*-1.30074);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502cd0() {
   return (neuron0x24fa300()*-0.0788033);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502d10() {
   return (neuron0x24fa780()*0.357935);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502d50() {
   return (neuron0x24fad90()*-0.191924);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502d90() {
   return (neuron0x24fb180()*-0.213257);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502dd0() {
   return (neuron0x24fb600()*-0.736336);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502e10() {
   return (neuron0x24fba80()*-1.22052);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502e50() {
   return (neuron0x24fbf00()*0.554816);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502e90() {
   return (neuron0x24fc410()*2.02377);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502ed0() {
   return (neuron0x24fab80()*0.0401565);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502f10() {
   return (neuron0x24fcd20()*-0.367387);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502f50() {
   return (neuron0x24fd1a0()*0.902825);
}

double nnFunc_25_25hi_1500ep__::synapse0x25028d0() {
   return (neuron0x24fda70()*1.57155);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502910() {
   return (neuron0x24fdd40()*1.59621);
}

double nnFunc_25_25hi_1500ep__::synapse0x25030a0() {
   return (neuron0x24fe1c0()*0.762657);
}

double nnFunc_25_25hi_1500ep__::synapse0x25030e0() {
   return (neuron0x24fe640()*0.11897);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503120() {
   return (neuron0x24feac0()*-1.4705);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503160() {
   return (neuron0x24fef40()*1.05799);
}

double nnFunc_25_25hi_1500ep__::synapse0x25031a0() {
   return (neuron0x24ff3c0()*0.087506);
}

double nnFunc_25_25hi_1500ep__::synapse0x25031e0() {
   return (neuron0x24ff840()*-1.14584);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503220() {
   return (neuron0x24ffcc0()*-1.29228);
}

double nnFunc_25_25hi_1500ep__::synapse0x25035a0() {
   return (neuron0x24f8d00()*0.825324);
}

double nnFunc_25_25hi_1500ep__::synapse0x25035e0() {
   return (neuron0x24f9070()*0.518575);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503620() {
   return (neuron0x24f94f0()*0.16995);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503660() {
   return (neuron0x24f9970()*0.197756);
}

double nnFunc_25_25hi_1500ep__::synapse0x25036a0() {
   return (neuron0x24f9e80()*0.713236);
}

double nnFunc_25_25hi_1500ep__::synapse0x25036e0() {
   return (neuron0x24fa300()*-0.170267);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503720() {
   return (neuron0x24fa780()*-0.387997);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503760() {
   return (neuron0x24fad90()*-0.252147);
}

double nnFunc_25_25hi_1500ep__::synapse0x25037a0() {
   return (neuron0x24fb180()*-0.190802);
}

double nnFunc_25_25hi_1500ep__::synapse0x25037e0() {
   return (neuron0x24fb600()*-0.142374);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503820() {
   return (neuron0x24fba80()*0.696743);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503860() {
   return (neuron0x24fbf00()*0.0498869);
}

double nnFunc_25_25hi_1500ep__::synapse0x25038a0() {
   return (neuron0x24fc410()*-0.0864766);
}

double nnFunc_25_25hi_1500ep__::synapse0x25038e0() {
   return (neuron0x24fab80()*-0.100358);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503920() {
   return (neuron0x24fcd20()*-0.356378);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503960() {
   return (neuron0x24fd1a0()*-0.207232);
}

double nnFunc_25_25hi_1500ep__::synapse0x25033f0() {
   return (neuron0x24fda70()*-0.701338);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503430() {
   return (neuron0x24fdd40()*-0.0917655);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503ab0() {
   return (neuron0x24fe1c0()*0.347035);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503af0() {
   return (neuron0x24fe640()*-0.380221);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503b30() {
   return (neuron0x24feac0()*0.106397);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503b70() {
   return (neuron0x24fef40()*-0.353622);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503bb0() {
   return (neuron0x24ff3c0()*0.558759);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503bf0() {
   return (neuron0x24ff840()*0.520968);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503c30() {
   return (neuron0x24ffcc0()*0.42845);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503fb0() {
   return (neuron0x24f8d00()*-3.05365);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503ff0() {
   return (neuron0x24f9070()*-0.390156);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504030() {
   return (neuron0x24f94f0()*1.89416);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504070() {
   return (neuron0x24f9970()*-0.33767);
}

double nnFunc_25_25hi_1500ep__::synapse0x25040b0() {
   return (neuron0x24f9e80()*-1.62613);
}

double nnFunc_25_25hi_1500ep__::synapse0x25040f0() {
   return (neuron0x24fa300()*-0.597743);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504130() {
   return (neuron0x24fa780()*-0.495908);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504170() {
   return (neuron0x24fad90()*-0.278958);
}

double nnFunc_25_25hi_1500ep__::synapse0x25041b0() {
   return (neuron0x24fb180()*-0.456265);
}

double nnFunc_25_25hi_1500ep__::synapse0x25041f0() {
   return (neuron0x24fb600()*-2.03558);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504230() {
   return (neuron0x24fba80()*-1.93737);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504270() {
   return (neuron0x24fbf00()*1.63982);
}

double nnFunc_25_25hi_1500ep__::synapse0x25042b0() {
   return (neuron0x24fc410()*2.35057);
}

double nnFunc_25_25hi_1500ep__::synapse0x25042f0() {
   return (neuron0x24fab80()*-0.252201);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504330() {
   return (neuron0x24fcd20()*-0.143167);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504370() {
   return (neuron0x24fd1a0()*2.72171);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503e00() {
   return (neuron0x24fda70()*3.88923);
}

double nnFunc_25_25hi_1500ep__::synapse0x2503e40() {
   return (neuron0x24fdd40()*2.77169);
}

double nnFunc_25_25hi_1500ep__::synapse0x25044c0() {
   return (neuron0x24fe1c0()*1.18819);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504500() {
   return (neuron0x24fe640()*0.0184947);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504540() {
   return (neuron0x24feac0()*-1.82152);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504580() {
   return (neuron0x24fef40()*2.82624);
}

double nnFunc_25_25hi_1500ep__::synapse0x25045c0() {
   return (neuron0x24ff3c0()*-1.55911);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504600() {
   return (neuron0x24ff840()*-0.284399);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504640() {
   return (neuron0x24ffcc0()*-1.71303);
}

double nnFunc_25_25hi_1500ep__::synapse0x25049c0() {
   return (neuron0x24f8d00()*-3.26779);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504a00() {
   return (neuron0x24f9070()*-1.36194);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504a40() {
   return (neuron0x24f94f0()*1.88575);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504a80() {
   return (neuron0x24f9970()*-0.78933);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504ac0() {
   return (neuron0x24f9e80()*-1.47855);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504b00() {
   return (neuron0x24fa300()*-0.378059);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504b40() {
   return (neuron0x24fa780()*-0.565301);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501d60() {
   return (neuron0x24fad90()*0.110353);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501da0() {
   return (neuron0x24fb180()*-0.0257975);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501de0() {
   return (neuron0x24fb600()*-0.284487);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501e20() {
   return (neuron0x24fba80()*-1.11519);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501e60() {
   return (neuron0x24fbf00()*1.88736);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501ea0() {
   return (neuron0x24fc410()*3.88308);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501ee0() {
   return (neuron0x24fab80()*0.121527);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501f20() {
   return (neuron0x24fcd20()*-0.372194);
}

double nnFunc_25_25hi_1500ep__::synapse0x2501f60() {
   return (neuron0x24fd1a0()*2.63624);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504810() {
   return (neuron0x24fda70()*3.66768);
}

double nnFunc_25_25hi_1500ep__::synapse0x2504850() {
   return (neuron0x24fdd40()*2.73073);
}

double nnFunc_25_25hi_1500ep__::synapse0x25020b0() {
   return (neuron0x24fe1c0()*2.13009);
}

double nnFunc_25_25hi_1500ep__::synapse0x25020f0() {
   return (neuron0x24fe640()*-0.0349277);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502130() {
   return (neuron0x24feac0()*-1.86111);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502170() {
   return (neuron0x24fef40()*2.85196);
}

double nnFunc_25_25hi_1500ep__::synapse0x25021b0() {
   return (neuron0x24ff3c0()*-1.46101);
}

double nnFunc_25_25hi_1500ep__::synapse0x25021f0() {
   return (neuron0x24ff840()*-0.169126);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502230() {
   return (neuron0x24ffcc0()*-0.673732);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502520() {
   return (neuron0x24f8d00()*1.42766);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505c20() {
   return (neuron0x24f9070()*0.359904);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505c60() {
   return (neuron0x24f94f0()*-1.16383);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505ca0() {
   return (neuron0x24f9970()*0.328214);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505ce0() {
   return (neuron0x24f9e80()*0.410409);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505d20() {
   return (neuron0x24fa300()*0.469227);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505d60() {
   return (neuron0x24fa780()*0.575056);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505da0() {
   return (neuron0x24fad90()*0.505911);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505de0() {
   return (neuron0x24fb180()*0.656887);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505e20() {
   return (neuron0x24fb600()*0.512349);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505e60() {
   return (neuron0x24fba80()*1.32311);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505ea0() {
   return (neuron0x24fbf00()*-1.46234);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505ee0() {
   return (neuron0x24fc410()*-0.747112);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505f20() {
   return (neuron0x24fab80()*-0.0912422);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505f60() {
   return (neuron0x24fcd20()*-0.278865);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505fa0() {
   return (neuron0x24fd1a0()*-1.29134);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502400() {
   return (neuron0x24fda70()*-2.32656);
}

double nnFunc_25_25hi_1500ep__::synapse0x2502440() {
   return (neuron0x24fdd40()*-1.71848);
}

double nnFunc_25_25hi_1500ep__::synapse0x25060f0() {
   return (neuron0x24fe1c0()*-0.130394);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506130() {
   return (neuron0x24fe640()*-0.172843);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506170() {
   return (neuron0x24feac0()*0.269314);
}

double nnFunc_25_25hi_1500ep__::synapse0x25061b0() {
   return (neuron0x24fef40()*-1.88792);
}

double nnFunc_25_25hi_1500ep__::synapse0x25061f0() {
   return (neuron0x24ff3c0()*0.635594);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506230() {
   return (neuron0x24ff840()*-0.119084);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506270() {
   return (neuron0x24ffcc0()*0.581859);
}

double nnFunc_25_25hi_1500ep__::synapse0x25065f0() {
   return (neuron0x24f8d00()*0.40062);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506630() {
   return (neuron0x24f9070()*0.0936589);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506670() {
   return (neuron0x24f94f0()*-0.298067);
}

double nnFunc_25_25hi_1500ep__::synapse0x25066b0() {
   return (neuron0x24f9970()*0.175693);
}

double nnFunc_25_25hi_1500ep__::synapse0x25066f0() {
   return (neuron0x24f9e80()*0.18948);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506730() {
   return (neuron0x24fa300()*-0.0288261);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506770() {
   return (neuron0x24fa780()*-0.865817);
}

double nnFunc_25_25hi_1500ep__::synapse0x25067b0() {
   return (neuron0x24fad90()*-0.726407);
}

double nnFunc_25_25hi_1500ep__::synapse0x25067f0() {
   return (neuron0x24fb180()*0.491687);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506830() {
   return (neuron0x24fb600()*-1.00177);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506870() {
   return (neuron0x24fba80()*2.17656);
}

double nnFunc_25_25hi_1500ep__::synapse0x25068b0() {
   return (neuron0x24fbf00()*-0.713785);
}

double nnFunc_25_25hi_1500ep__::synapse0x25068f0() {
   return (neuron0x24fc410()*-3.06577);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506930() {
   return (neuron0x24fab80()*0.273271);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506970() {
   return (neuron0x24fcd20()*-0.551905);
}

double nnFunc_25_25hi_1500ep__::synapse0x25069b0() {
   return (neuron0x24fd1a0()*-1.1662);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506440() {
   return (neuron0x24fda70()*-2.14006);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506480() {
   return (neuron0x24fdd40()*-1.86559);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506b00() {
   return (neuron0x24fe1c0()*-0.260656);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506b40() {
   return (neuron0x24fe640()*-0.115732);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506b80() {
   return (neuron0x24feac0()*1.18329);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506bc0() {
   return (neuron0x24fef40()*-1.39011);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506c00() {
   return (neuron0x24ff3c0()*-0.111032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506c40() {
   return (neuron0x24ff840()*2.34913);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506c80() {
   return (neuron0x24ffcc0()*1.9441);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507000() {
   return (neuron0x24f8d00()*0.46833);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507040() {
   return (neuron0x24f9070()*0.00580434);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507080() {
   return (neuron0x24f94f0()*0.012425);
}

double nnFunc_25_25hi_1500ep__::synapse0x25070c0() {
   return (neuron0x24f9970()*0.301868);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507100() {
   return (neuron0x24f9e80()*0.665925);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507140() {
   return (neuron0x24fa300()*0.666976);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507180() {
   return (neuron0x24fa780()*-0.125255);
}

double nnFunc_25_25hi_1500ep__::synapse0x25071c0() {
   return (neuron0x24fad90()*-0.518619);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507200() {
   return (neuron0x24fb180()*0.161144);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507240() {
   return (neuron0x24fb600()*1.3508);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507280() {
   return (neuron0x24fba80()*0.108156);
}

double nnFunc_25_25hi_1500ep__::synapse0x25072c0() {
   return (neuron0x24fbf00()*-0.721588);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507300() {
   return (neuron0x24fc410()*0.00432407);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507340() {
   return (neuron0x24fab80()*-0.0750783);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507380() {
   return (neuron0x24fcd20()*-0.154969);
}

double nnFunc_25_25hi_1500ep__::synapse0x25073c0() {
   return (neuron0x24fd1a0()*-0.163431);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506e50() {
   return (neuron0x24fda70()*-0.735384);
}

double nnFunc_25_25hi_1500ep__::synapse0x2506e90() {
   return (neuron0x24fdd40()*-0.904703);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507510() {
   return (neuron0x24fe1c0()*-0.652286);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507550() {
   return (neuron0x24fe640()*0.223767);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507590() {
   return (neuron0x24feac0()*-0.211293);
}

double nnFunc_25_25hi_1500ep__::synapse0x25075d0() {
   return (neuron0x24fef40()*-0.795742);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507610() {
   return (neuron0x24ff3c0()*0.144336);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507650() {
   return (neuron0x24ff840()*-0.607062);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507690() {
   return (neuron0x24ffcc0()*-0.180386);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507a10() {
   return (neuron0x24f8d00()*-1.03115);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507a50() {
   return (neuron0x24f9070()*0.165737);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507a90() {
   return (neuron0x24f94f0()*0.520929);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507ad0() {
   return (neuron0x24f9970()*-0.0718388);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507b10() {
   return (neuron0x24f9e80()*-0.332874);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507b50() {
   return (neuron0x24fa300()*0.0370917);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507b90() {
   return (neuron0x24fa780()*0.69683);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507bd0() {
   return (neuron0x24fad90()*0.363832);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507c10() {
   return (neuron0x24fb180()*0.0280917);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507c50() {
   return (neuron0x24fb600()*0.509177);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507c90() {
   return (neuron0x24fba80()*-0.0626625);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507cd0() {
   return (neuron0x24fbf00()*0.519569);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507d10() {
   return (neuron0x24fc410()*2.10326);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507d50() {
   return (neuron0x24fab80()*0.640499);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507d90() {
   return (neuron0x24fcd20()*-0.273396);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507dd0() {
   return (neuron0x24fd1a0()*1.31659);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507860() {
   return (neuron0x24fda70()*1.78896);
}

double nnFunc_25_25hi_1500ep__::synapse0x25078a0() {
   return (neuron0x24fdd40()*0.880757);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507f20() {
   return (neuron0x24fe1c0()*0.780683);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507f60() {
   return (neuron0x24fe640()*0.984378);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507fa0() {
   return (neuron0x24feac0()*-0.311141);
}

double nnFunc_25_25hi_1500ep__::synapse0x2507fe0() {
   return (neuron0x24fef40()*1.85262);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508020() {
   return (neuron0x24ff3c0()*-0.218423);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508060() {
   return (neuron0x24ff840()*-0.00425598);
}

double nnFunc_25_25hi_1500ep__::synapse0x25080a0() {
   return (neuron0x24ffcc0()*-0.251317);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508420() {
   return (neuron0x24f8d00()*0.185034);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508460() {
   return (neuron0x24f9070()*-0.0249349);
}

double nnFunc_25_25hi_1500ep__::synapse0x25084a0() {
   return (neuron0x24f94f0()*-0.053276);
}

double nnFunc_25_25hi_1500ep__::synapse0x25084e0() {
   return (neuron0x24f9970()*-0.866889);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508520() {
   return (neuron0x24f9e80()*-0.346927);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508560() {
   return (neuron0x24fa300()*-0.108843);
}

double nnFunc_25_25hi_1500ep__::synapse0x25085a0() {
   return (neuron0x24fa780()*-0.325398);
}

double nnFunc_25_25hi_1500ep__::synapse0x25085e0() {
   return (neuron0x24fad90()*-0.271578);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508620() {
   return (neuron0x24fb180()*-0.327333);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508660() {
   return (neuron0x24fb600()*-0.6726);
}

double nnFunc_25_25hi_1500ep__::synapse0x25086a0() {
   return (neuron0x24fba80()*0.505232);
}

double nnFunc_25_25hi_1500ep__::synapse0x25086e0() {
   return (neuron0x24fbf00()*-0.0759112);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508720() {
   return (neuron0x24fc410()*-0.376704);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508760() {
   return (neuron0x24fab80()*0.448906);
}

double nnFunc_25_25hi_1500ep__::synapse0x25087a0() {
   return (neuron0x24fcd20()*0.106031);
}

double nnFunc_25_25hi_1500ep__::synapse0x25087e0() {
   return (neuron0x24fd1a0()*0.0672308);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508270() {
   return (neuron0x24fda70()*-0.297449);
}

double nnFunc_25_25hi_1500ep__::synapse0x25082b0() {
   return (neuron0x24fdd40()*0.143645);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508930() {
   return (neuron0x24fe1c0()*0.436884);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508970() {
   return (neuron0x24fe640()*0.0204976);
}

double nnFunc_25_25hi_1500ep__::synapse0x25089b0() {
   return (neuron0x24feac0()*0.519459);
}

double nnFunc_25_25hi_1500ep__::synapse0x25089f0() {
   return (neuron0x24fef40()*0.375279);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508a30() {
   return (neuron0x24ff3c0()*-0.807442);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508a70() {
   return (neuron0x24ff840()*0.523154);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508ab0() {
   return (neuron0x24ffcc0()*0.389708);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508e30() {
   return (neuron0x24f8d00()*0.439333);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508e70() {
   return (neuron0x24f9070()*0.60106);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508eb0() {
   return (neuron0x24f94f0()*-0.236734);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508ef0() {
   return (neuron0x24f9970()*0.775642);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508f30() {
   return (neuron0x24f9e80()*0.0613548);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508f70() {
   return (neuron0x24fa300()*0.8335);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508fb0() {
   return (neuron0x24fa780()*0.256118);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508ff0() {
   return (neuron0x24fad90()*-0.067259);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509030() {
   return (neuron0x24fb180()*-0.900492);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509070() {
   return (neuron0x24fb600()*3.05491);
}

double nnFunc_25_25hi_1500ep__::synapse0x25090b0() {
   return (neuron0x24fba80()*-1.2277);
}

double nnFunc_25_25hi_1500ep__::synapse0x25090f0() {
   return (neuron0x24fbf00()*-0.355084);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509130() {
   return (neuron0x24fc410()*1.97281);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509170() {
   return (neuron0x24fab80()*-0.185972);
}

double nnFunc_25_25hi_1500ep__::synapse0x25091b0() {
   return (neuron0x24fcd20()*-0.418518);
}

double nnFunc_25_25hi_1500ep__::synapse0x25091f0() {
   return (neuron0x24fd1a0()*0.509736);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508c80() {
   return (neuron0x24fda70()*-0.10349);
}

double nnFunc_25_25hi_1500ep__::synapse0x2508cc0() {
   return (neuron0x24fdd40()*0.102179);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509340() {
   return (neuron0x24fe1c0()*-0.480698);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509380() {
   return (neuron0x24fe640()*-0.0381415);
}

double nnFunc_25_25hi_1500ep__::synapse0x25093c0() {
   return (neuron0x24feac0()*-0.331651);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509400() {
   return (neuron0x24fef40()*-0.0836128);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509440() {
   return (neuron0x24ff3c0()*1.38879);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509480() {
   return (neuron0x24ff840()*-3.08423);
}

double nnFunc_25_25hi_1500ep__::synapse0x25094c0() {
   return (neuron0x24ffcc0()*-1.13625);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509840() {
   return (neuron0x24f8d00()*2.66811);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509880() {
   return (neuron0x24f9070()*1.14785);
}

double nnFunc_25_25hi_1500ep__::synapse0x25098c0() {
   return (neuron0x24f94f0()*-2.31829);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509900() {
   return (neuron0x24f9970()*-0.936301);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509940() {
   return (neuron0x24f9e80()*1.11823);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509980() {
   return (neuron0x24fa300()*1.07648);
}

double nnFunc_25_25hi_1500ep__::synapse0x25099c0() {
   return (neuron0x24fa780()*0.103082);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509a00() {
   return (neuron0x24fad90()*-0.355439);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509a40() {
   return (neuron0x24fb180()*0.307311);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509a80() {
   return (neuron0x24fb600()*4.1695);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509ac0() {
   return (neuron0x24fba80()*0.475786);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509b00() {
   return (neuron0x24fbf00()*-1.54854);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509b40() {
   return (neuron0x24fc410()*-0.888979);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509b80() {
   return (neuron0x24fab80()*-0.82447);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509bc0() {
   return (neuron0x24fcd20()*0.133286);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509c00() {
   return (neuron0x24fd1a0()*-1.80157);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509690() {
   return (neuron0x24fda70()*-3.18219);
}

double nnFunc_25_25hi_1500ep__::synapse0x25096d0() {
   return (neuron0x24fdd40()*-2.00468);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509d50() {
   return (neuron0x24fe1c0()*-1.58972);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509d90() {
   return (neuron0x24fe640()*-0.613813);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509dd0() {
   return (neuron0x24feac0()*1.53414);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509e10() {
   return (neuron0x24fef40()*-2.57384);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509e50() {
   return (neuron0x24ff3c0()*2.69236);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509e90() {
   return (neuron0x24ff840()*-0.566294);
}

double nnFunc_25_25hi_1500ep__::synapse0x2509ed0() {
   return (neuron0x24ffcc0()*-0.326107);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a250() {
   return (neuron0x24f8d00()*2.03382);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a290() {
   return (neuron0x24f9070()*0.79522);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a2d0() {
   return (neuron0x24f94f0()*-1.19539);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a310() {
   return (neuron0x24f9970()*0.0106384);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a350() {
   return (neuron0x24f9e80()*1.06989);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a390() {
   return (neuron0x24fa300()*0.567516);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a3d0() {
   return (neuron0x24fa780()*-0.0220181);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a410() {
   return (neuron0x24fad90()*0.250207);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a450() {
   return (neuron0x24fb180()*-0.128086);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a490() {
   return (neuron0x24fb600()*1.1806);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a4d0() {
   return (neuron0x24fba80()*1.18492);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a510() {
   return (neuron0x24fbf00()*-0.711515);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a550() {
   return (neuron0x24fc410()*-1.14417);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a590() {
   return (neuron0x24fab80()*0.690796);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a5d0() {
   return (neuron0x24fcd20()*-0.10729);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a610() {
   return (neuron0x24fd1a0()*-1.1855);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a0a0() {
   return (neuron0x24fda70()*-1.54634);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a0e0() {
   return (neuron0x24fdd40()*-1.24236);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a760() {
   return (neuron0x24fe1c0()*-1.05004);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a7a0() {
   return (neuron0x24fe640()*0.420422);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a7e0() {
   return (neuron0x24feac0()*1.58558);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a820() {
   return (neuron0x24fef40()*-1.34926);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a860() {
   return (neuron0x24ff3c0()*0.180742);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a8a0() {
   return (neuron0x24ff840()*0.963416);
}

double nnFunc_25_25hi_1500ep__::synapse0x250a8e0() {
   return (neuron0x24ffcc0()*1.44114);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ac60() {
   return (neuron0x24f8d00()*-1.02235);
}

double nnFunc_25_25hi_1500ep__::synapse0x250aca0() {
   return (neuron0x24f9070()*0.196011);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ace0() {
   return (neuron0x24f94f0()*0.908313);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ad20() {
   return (neuron0x24f9970()*-0.0762157);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ad60() {
   return (neuron0x24f9e80()*0.14676);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ada0() {
   return (neuron0x24fa300()*-0.106334);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ade0() {
   return (neuron0x24fa780()*0.0113105);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ae20() {
   return (neuron0x24fad90()*0.570952);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ae60() {
   return (neuron0x24fb180()*0.167922);
}

double nnFunc_25_25hi_1500ep__::synapse0x250aea0() {
   return (neuron0x24fb600()*0.0683716);
}

double nnFunc_25_25hi_1500ep__::synapse0x250aee0() {
   return (neuron0x24fba80()*-0.0515504);
}

double nnFunc_25_25hi_1500ep__::synapse0x250af20() {
   return (neuron0x24fbf00()*0.196818);
}

double nnFunc_25_25hi_1500ep__::synapse0x250af60() {
   return (neuron0x24fc410()*1.23127);
}

double nnFunc_25_25hi_1500ep__::synapse0x250afa0() {
   return (neuron0x24fab80()*0.252133);
}

double nnFunc_25_25hi_1500ep__::synapse0x250afe0() {
   return (neuron0x24fcd20()*-0.24544);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b020() {
   return (neuron0x24fd1a0()*0.56724);
}

double nnFunc_25_25hi_1500ep__::synapse0x250aab0() {
   return (neuron0x24fda70()*1.51691);
}

double nnFunc_25_25hi_1500ep__::synapse0x250aaf0() {
   return (neuron0x24fdd40()*0.487833);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b170() {
   return (neuron0x24fe1c0()*0.653322);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b1b0() {
   return (neuron0x24fe640()*0.153268);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b1f0() {
   return (neuron0x24feac0()*-0.167249);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b230() {
   return (neuron0x24fef40()*1.15105);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b270() {
   return (neuron0x24ff3c0()*0.296482);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b2b0() {
   return (neuron0x24ff840()*0.395007);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b2f0() {
   return (neuron0x24ffcc0()*0.449359);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b670() {
   return (neuron0x24f8d00()*1.37519);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8e90() {
   return (neuron0x24f9070()*1.03776);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8ed0() {
   return (neuron0x24f94f0()*-0.793873);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9290() {
   return (neuron0x24f9970()*-0.0363762);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f92d0() {
   return (neuron0x24f9e80()*1.2692);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9710() {
   return (neuron0x24fa300()*0.28055);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9750() {
   return (neuron0x24fa780()*0.330812);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9b90() {
   return (neuron0x24fad90()*0.691822);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f9bd0() {
   return (neuron0x24fb180()*0.580169);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa0a0() {
   return (neuron0x24fb600()*0.579338);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa0e0() {
   return (neuron0x24fba80()*0.83875);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa520() {
   return (neuron0x24fbf00()*-1.08104);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa560() {
   return (neuron0x24fc410()*-0.747944);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa9a0() {
   return (neuron0x24fab80()*0.491422);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fa9e0() {
   return (neuron0x24fcd20()*-0.153702);
}

double nnFunc_25_25hi_1500ep__::synapse0x24faf20() {
   return (neuron0x24fd1a0()*-0.877849);
}

double nnFunc_25_25hi_1500ep__::synapse0x24faf60() {
   return (neuron0x24fda70()*-1.63218);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb3a0() {
   return (neuron0x24fdd40()*-1.1407);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb3e0() {
   return (neuron0x24fe1c0()*-0.484884);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb820() {
   return (neuron0x24fe640()*-0.0914223);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fb860() {
   return (neuron0x24feac0()*1.35236);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbca0() {
   return (neuron0x24fef40()*-1.21883);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fbce0() {
   return (neuron0x24ff3c0()*0.785709);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc120() {
   return (neuron0x24ff840()*0.108868);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc160() {
   return (neuron0x24ffcc0()*0.251666);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505ae0() {
   return (neuron0x24f8d00()*-1.73552);
}

double nnFunc_25_25hi_1500ep__::synapse0x2505b20() {
   return (neuron0x24f9070()*0.157184);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd3c0() {
   return (neuron0x24f94f0()*1.01061);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fd400() {
   return (neuron0x24f9970()*-0.0454132);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b4c0() {
   return (neuron0x24f9e80()*-0.328887);
}

double nnFunc_25_25hi_1500ep__::synapse0x250b500() {
   return (neuron0x24fa300()*0.240771);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8770() {
   return (neuron0x24fa780()*-0.262426);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f87b0() {
   return (neuron0x24fad90()*0.427436);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdf60() {
   return (neuron0x24fb180()*-0.10508);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fdfa0() {
   return (neuron0x24fb600()*-0.138097);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe3e0() {
   return (neuron0x24fba80()*-0.545481);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe420() {
   return (neuron0x24fbf00()*1.36477);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe860() {
   return (neuron0x24fc410()*2.72805);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fe8a0() {
   return (neuron0x24fab80()*1.06266);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fece0() {
   return (neuron0x24fcd20()*0.448066);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fed20() {
   return (neuron0x24fd1a0()*1.84436);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff160() {
   return (neuron0x24fda70()*2.95161);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff1a0() {
   return (neuron0x24fdd40()*1.25067);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff5e0() {
   return (neuron0x24fe1c0()*0.872176);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ff620() {
   return (neuron0x24fe640()*1.28943);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffa60() {
   return (neuron0x24feac0()*-0.249624);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffaa0() {
   return (neuron0x24fef40()*1.78194);
}

double nnFunc_25_25hi_1500ep__::synapse0x24ffee0() {
   return (neuron0x24ff3c0()*-0.432206);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fff20() {
   return (neuron0x24ff840()*0.114643);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc630() {
   return (neuron0x24ffcc0()*-0.408054);
}

double nnFunc_25_25hi_1500ep__::synapse0x24fc670() {
   return (neuron0x24f8d00()*1.6796);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e8e0() {
   return (neuron0x24f9070()*1.25295);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e920() {
   return (neuron0x24f94f0()*-0.630664);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e960() {
   return (neuron0x24f9970()*0.0541825);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e9a0() {
   return (neuron0x24f9e80()*1.59545);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e9e0() {
   return (neuron0x24fa300()*0.613885);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ea20() {
   return (neuron0x24fa780()*-0.164994);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ea60() {
   return (neuron0x24fad90()*0.74939);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eaa0() {
   return (neuron0x24fb180()*0.0605786);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eae0() {
   return (neuron0x24fb600()*0.543475);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eb20() {
   return (neuron0x24fba80()*1.64118);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eb60() {
   return (neuron0x24fbf00()*-0.938753);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eba0() {
   return (neuron0x24fc410()*-1.71831);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ebe0() {
   return (neuron0x24fab80()*0.192631);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ec20() {
   return (neuron0x24fcd20()*0.202981);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ec60() {
   return (neuron0x24fd1a0()*-1.02883);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e730() {
   return (neuron0x24fda70()*-2.30974);
}

double nnFunc_25_25hi_1500ep__::synapse0x250e770() {
   return (neuron0x24fdd40()*-1.89287);
}

double nnFunc_25_25hi_1500ep__::synapse0x250edb0() {
   return (neuron0x24fe1c0()*-0.410598);
}

double nnFunc_25_25hi_1500ep__::synapse0x250edf0() {
   return (neuron0x24fe640()*0.659316);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ee30() {
   return (neuron0x24feac0()*1.70545);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ee70() {
   return (neuron0x24fef40()*-1.15531);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eeb0() {
   return (neuron0x24ff3c0()*0.184801);
}

double nnFunc_25_25hi_1500ep__::synapse0x250eef0() {
   return (neuron0x24ff840()*0.801905);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ef30() {
   return (neuron0x24ffcc0()*1.23119);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f2b0() {
   return (neuron0x24f8d00()*-0.719703);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f2f0() {
   return (neuron0x24f9070()*-0.708608);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f330() {
   return (neuron0x24f94f0()*0.492437);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f370() {
   return (neuron0x24f9970()*-0.0844164);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f3b0() {
   return (neuron0x24f9e80()*-0.568574);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f3f0() {
   return (neuron0x24fa300()*-0.94098);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f430() {
   return (neuron0x24fa780()*-1.06753);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f470() {
   return (neuron0x24fad90()*-0.262586);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f4b0() {
   return (neuron0x24fb180()*-0.0414981);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f4f0() {
   return (neuron0x24fb600()*-0.716877);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f530() {
   return (neuron0x24fba80()*-0.222004);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f570() {
   return (neuron0x24fbf00()*-0.00342106);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f5b0() {
   return (neuron0x24fc410()*-0.202357);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f5f0() {
   return (neuron0x24fab80()*0.044556);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f630() {
   return (neuron0x24fcd20()*0.0560703);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f670() {
   return (neuron0x24fd1a0()*0.309818);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f100() {
   return (neuron0x24fda70()*0.318085);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f140() {
   return (neuron0x24fdd40()*-0.567909);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f7c0() {
   return (neuron0x24fe1c0()*-0.254655);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f800() {
   return (neuron0x24fe640()*-0.371354);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f840() {
   return (neuron0x24feac0()*-0.274149);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f880() {
   return (neuron0x24fef40()*0.255867);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f8c0() {
   return (neuron0x24ff3c0()*-0.159237);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f900() {
   return (neuron0x24ff840()*0.24932);
}

double nnFunc_25_25hi_1500ep__::synapse0x250f940() {
   return (neuron0x24ffcc0()*0.144076);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fcc0() {
   return (neuron0x24f8d00()*-1.66359);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fd00() {
   return (neuron0x24f9070()*-0.287391);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fd40() {
   return (neuron0x24f94f0()*0.275374);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fd80() {
   return (neuron0x24f9970()*-0.0140759);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fdc0() {
   return (neuron0x24f9e80()*-0.746628);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fe00() {
   return (neuron0x24fa300()*-0.0872814);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fe40() {
   return (neuron0x24fa780()*0.400895);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fe80() {
   return (neuron0x24fad90()*-0.381658);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fec0() {
   return (neuron0x24fb180()*-0.196715);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ff00() {
   return (neuron0x24fb600()*-0.931771);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ff40() {
   return (neuron0x24fba80()*-2.00898);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ff80() {
   return (neuron0x24fbf00()*0.557017);
}

double nnFunc_25_25hi_1500ep__::synapse0x250ffc0() {
   return (neuron0x24fc410()*1.3153);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510000() {
   return (neuron0x24fab80()*-0.670076);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510040() {
   return (neuron0x24fcd20()*-0.430762);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510080() {
   return (neuron0x24fd1a0()*1.57117);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fb10() {
   return (neuron0x24fda70()*2.38063);
}

double nnFunc_25_25hi_1500ep__::synapse0x250fb50() {
   return (neuron0x24fdd40()*1.52769);
}

double nnFunc_25_25hi_1500ep__::synapse0x25101d0() {
   return (neuron0x24fe1c0()*0.75322);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510210() {
   return (neuron0x24fe640()*0.26252);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510250() {
   return (neuron0x24feac0()*-1.79936);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510290() {
   return (neuron0x24fef40()*0.99074);
}

double nnFunc_25_25hi_1500ep__::synapse0x25102d0() {
   return (neuron0x24ff3c0()*-0.210965);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510310() {
   return (neuron0x24ff840()*-0.967387);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510350() {
   return (neuron0x24ffcc0()*-0.684291);
}

double nnFunc_25_25hi_1500ep__::synapse0x25106d0() {
   return (neuron0x24f8d00()*-1.09572);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510710() {
   return (neuron0x24f9070()*-0.163853);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510750() {
   return (neuron0x24f94f0()*0.493796);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510790() {
   return (neuron0x24f9970()*-0.366846);
}

double nnFunc_25_25hi_1500ep__::synapse0x25107d0() {
   return (neuron0x24f9e80()*-0.993397);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510810() {
   return (neuron0x24fa300()*-0.175691);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510850() {
   return (neuron0x24fa780()*-0.967839);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510890() {
   return (neuron0x24fad90()*-0.476705);
}

double nnFunc_25_25hi_1500ep__::synapse0x25108d0() {
   return (neuron0x24fb180()*-0.293647);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510910() {
   return (neuron0x24fb600()*-0.672529);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510950() {
   return (neuron0x24fba80()*-1.14904);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510990() {
   return (neuron0x24fbf00()*1.2794);
}

double nnFunc_25_25hi_1500ep__::synapse0x25109d0() {
   return (neuron0x24fc410()*0.908752);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510a10() {
   return (neuron0x24fab80()*-0.820302);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510a50() {
   return (neuron0x24fcd20()*0.00774291);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510a90() {
   return (neuron0x24fd1a0()*1.5065);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510520() {
   return (neuron0x24fda70()*1.85216);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510560() {
   return (neuron0x24fdd40()*1.30082);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510be0() {
   return (neuron0x24fe1c0()*0.667837);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510c20() {
   return (neuron0x24fe640()*-0.248443);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510c60() {
   return (neuron0x24feac0()*-0.72255);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510ca0() {
   return (neuron0x24fef40()*1.3116);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510ce0() {
   return (neuron0x24ff3c0()*-0.868615);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510d20() {
   return (neuron0x24ff840()*-0.590001);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510d60() {
   return (neuron0x24ffcc0()*-0.336637);
}

double nnFunc_25_25hi_1500ep__::synapse0x25110e0() {
   return (neuron0x24f8d00()*-2.95565);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511120() {
   return (neuron0x24f9070()*0.0736714);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511160() {
   return (neuron0x24f94f0()*0.620991);
}

double nnFunc_25_25hi_1500ep__::synapse0x25111a0() {
   return (neuron0x24f9970()*-2.88022);
}

double nnFunc_25_25hi_1500ep__::synapse0x25111e0() {
   return (neuron0x24f9e80()*-1.09632);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511220() {
   return (neuron0x24fa300()*1.02635);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511260() {
   return (neuron0x24fa780()*-1.05812);
}

double nnFunc_25_25hi_1500ep__::synapse0x25112a0() {
   return (neuron0x24fad90()*-0.588176);
}

double nnFunc_25_25hi_1500ep__::synapse0x25112e0() {
   return (neuron0x24fb180()*0.793933);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511320() {
   return (neuron0x24fb600()*-0.965874);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511360() {
   return (neuron0x24fba80()*-2.36343);
}

double nnFunc_25_25hi_1500ep__::synapse0x25113a0() {
   return (neuron0x24fbf00()*2.24933);
}

double nnFunc_25_25hi_1500ep__::synapse0x25113e0() {
   return (neuron0x24fc410()*9.02521);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511420() {
   return (neuron0x24fab80()*-0.238549);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511460() {
   return (neuron0x24fcd20()*0.189885);
}

double nnFunc_25_25hi_1500ep__::synapse0x25114a0() {
   return (neuron0x24fd1a0()*2.74063);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510f30() {
   return (neuron0x24fda70()*4.0892);
}

double nnFunc_25_25hi_1500ep__::synapse0x2510f70() {
   return (neuron0x24fdd40()*2.87297);
}

double nnFunc_25_25hi_1500ep__::synapse0x25115f0() {
   return (neuron0x24fe1c0()*0.168693);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511630() {
   return (neuron0x24fe640()*-0.159133);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511670() {
   return (neuron0x24feac0()*-1.04865);
}

double nnFunc_25_25hi_1500ep__::synapse0x25116b0() {
   return (neuron0x24fef40()*2.80632);
}

double nnFunc_25_25hi_1500ep__::synapse0x25116f0() {
   return (neuron0x24ff3c0()*-1.92853);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511730() {
   return (neuron0x24ff840()*-0.606942);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511770() {
   return (neuron0x24ffcc0()*-1.49727);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511af0() {
   return (neuron0x24f8d00()*2.24317);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511b30() {
   return (neuron0x24f9070()*0.8626);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511b70() {
   return (neuron0x24f94f0()*-1.2125);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511bb0() {
   return (neuron0x24f9970()*0.255471);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511bf0() {
   return (neuron0x24f9e80()*1.25003);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511c30() {
   return (neuron0x24fa300()*0.240232);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511c70() {
   return (neuron0x24fa780()*0.209867);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511cb0() {
   return (neuron0x24fad90()*0.344189);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511cf0() {
   return (neuron0x24fb180()*-0.25514);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511d30() {
   return (neuron0x24fb600()*1.7529);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511d70() {
   return (neuron0x24fba80()*1.44399);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511db0() {
   return (neuron0x24fbf00()*-0.674212);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511df0() {
   return (neuron0x24fc410()*-1.41678);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511e30() {
   return (neuron0x24fab80()*0.356704);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511e70() {
   return (neuron0x24fcd20()*-0.225381);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511eb0() {
   return (neuron0x24fd1a0()*-1.14944);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511940() {
   return (neuron0x24fda70()*-2.38797);
}

double nnFunc_25_25hi_1500ep__::synapse0x2511980() {
   return (neuron0x24fdd40()*-1.7032);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512000() {
   return (neuron0x24fe1c0()*-1.09841);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512040() {
   return (neuron0x24fe640()*0.204519);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512080() {
   return (neuron0x24feac0()*1.547);
}

double nnFunc_25_25hi_1500ep__::synapse0x25120c0() {
   return (neuron0x24fef40()*-1.61265);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512100() {
   return (neuron0x24ff3c0()*0.359993);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512140() {
   return (neuron0x24ff840()*0.572867);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512180() {
   return (neuron0x24ffcc0()*0.951451);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512500() {
   return (neuron0x24f8d00()*2.07296);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512540() {
   return (neuron0x24f9070()*0.339804);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512580() {
   return (neuron0x24f94f0()*-1.22009);
}

double nnFunc_25_25hi_1500ep__::synapse0x25125c0() {
   return (neuron0x24f9970()*0.851984);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512600() {
   return (neuron0x24f9e80()*0.23977);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512640() {
   return (neuron0x24fa300()*0.606099);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512680() {
   return (neuron0x24fa780()*0.369612);
}

double nnFunc_25_25hi_1500ep__::synapse0x25126c0() {
   return (neuron0x24fad90()*0.199229);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512700() {
   return (neuron0x24fb180()*0.283506);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512740() {
   return (neuron0x24fb600()*1.06775);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512780() {
   return (neuron0x24fba80()*0.650224);
}

double nnFunc_25_25hi_1500ep__::synapse0x25127c0() {
   return (neuron0x24fbf00()*-1.48719);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512800() {
   return (neuron0x24fc410()*-3.46283);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512840() {
   return (neuron0x24fab80()*-0.747132);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512880() {
   return (neuron0x24fcd20()*-0.0481509);
}

double nnFunc_25_25hi_1500ep__::synapse0x25128c0() {
   return (neuron0x24fd1a0()*-1.22907);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512350() {
   return (neuron0x24fda70()*-2.30236);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512390() {
   return (neuron0x24fdd40()*-2.16966);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512a10() {
   return (neuron0x24fe1c0()*-1.30514);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512a50() {
   return (neuron0x24fe640()*-0.624332);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512a90() {
   return (neuron0x24feac0()*1.27796);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512ad0() {
   return (neuron0x24fef40()*-1.56091);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512b10() {
   return (neuron0x24ff3c0()*1.24418);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512b50() {
   return (neuron0x24ff840()*0.188246);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512b90() {
   return (neuron0x24ffcc0()*0.698526);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512f10() {
   return (neuron0x24f8d00()*-0.387341);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512f50() {
   return (neuron0x24f9070()*0.443883);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512f90() {
   return (neuron0x24f94f0()*0.673008);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512fd0() {
   return (neuron0x24f9970()*0.0977726);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513010() {
   return (neuron0x24f9e80()*-0.299916);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513050() {
   return (neuron0x24fa300()*0.484351);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513090() {
   return (neuron0x24fa780()*0.117173);
}

double nnFunc_25_25hi_1500ep__::synapse0x25130d0() {
   return (neuron0x24fad90()*0.411477);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513110() {
   return (neuron0x24fb180()*-0.427636);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513150() {
   return (neuron0x24fb600()*1.52576);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513190() {
   return (neuron0x24fba80()*-1.69722);
}

double nnFunc_25_25hi_1500ep__::synapse0x25131d0() {
   return (neuron0x24fbf00()*0.855977);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513210() {
   return (neuron0x24fc410()*2.36072);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513250() {
   return (neuron0x24fab80()*0.144979);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513290() {
   return (neuron0x24fcd20()*0.569701);
}

double nnFunc_25_25hi_1500ep__::synapse0x25132d0() {
   return (neuron0x24fd1a0()*1.25577);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512d60() {
   return (neuron0x24fda70()*1.06857);
}

double nnFunc_25_25hi_1500ep__::synapse0x2512da0() {
   return (neuron0x24fdd40()*1.11292);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513420() {
   return (neuron0x24fe1c0()*-0.356029);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513460() {
   return (neuron0x24fe640()*0.0896911);
}

double nnFunc_25_25hi_1500ep__::synapse0x25134a0() {
   return (neuron0x24feac0()*-1.21449);
}

double nnFunc_25_25hi_1500ep__::synapse0x25134e0() {
   return (neuron0x24fef40()*0.469029);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513520() {
   return (neuron0x24ff3c0()*0.387973);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513560() {
   return (neuron0x24ff840()*-1.76663);
}

double nnFunc_25_25hi_1500ep__::synapse0x25135a0() {
   return (neuron0x24ffcc0()*-1.19342);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513800() {
   return (neuron0x2501bd0()*3.58557);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513840() {
   return (neuron0x24fc9a0()*-0.182768);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513880() {
   return (neuron0x2502740()*-0.925201);
}

double nnFunc_25_25hi_1500ep__::synapse0x25138c0() {
   return (neuron0x2503260()*-0.29727);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513900() {
   return (neuron0x2503c70()*8.38015);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513940() {
   return (neuron0x2504680()*6.55351);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513980() {
   return (neuron0x2502270()*-7.4362);
}

double nnFunc_25_25hi_1500ep__::synapse0x25139c0() {
   return (neuron0x25062b0()*3.9964);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513a00() {
   return (neuron0x2506cc0()*-3.86793);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513a40() {
   return (neuron0x25076d0()*4.06456);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513a80() {
   return (neuron0x25080e0()*2.69441);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513ac0() {
   return (neuron0x2508af0()*-7.87927);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513b00() {
   return (neuron0x2509500()*-10.2634);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513b40() {
   return (neuron0x2509f10()*-1.4725);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513b80() {
   return (neuron0x250a920()*4.36839);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513bc0() {
   return (neuron0x250b330()*-3.949);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8bd0() {
   return (neuron0x2505950()*7.59615);
}

double nnFunc_25_25hi_1500ep__::synapse0x24f8c10() {
   return (neuron0x250e5a0()*-0.809175);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513d10() {
   return (neuron0x250ef70()*4.60097);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513d50() {
   return (neuron0x250f980()*0.508687);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513d90() {
   return (neuron0x2510390()*3.71529);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513dd0() {
   return (neuron0x2510da0()*8.8514);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513e10() {
   return (neuron0x25117b0()*-4.74616);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513e50() {
   return (neuron0x25121c0()*-7.10211);
}

double nnFunc_25_25hi_1500ep__::synapse0x2513e90() {
   return (neuron0x2512bd0()*-4.03679);
}

