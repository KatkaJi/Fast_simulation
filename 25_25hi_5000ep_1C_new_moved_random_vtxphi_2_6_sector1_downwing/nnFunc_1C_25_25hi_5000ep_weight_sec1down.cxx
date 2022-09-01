#include "25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_downwing/nnFunc_1C_25_25hi_5000ep_weight_sec1down.h"
#include <cmath>

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x202c850();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x202c850();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2010e00() {
   return input0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2011140() {
   return input1;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2011480() {
   return input2;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20117c0() {
   return input3;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2011b00() {
   return input4;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2011f70() {
   double input = 0.311468;
   input += synapse0x1f1e1e0();
   input += synapse0x2000270();
   input += synapse0x2012220();
   input += synapse0x2012260();
   input += synapse0x20122a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2011f70() {
   double input = input0x2011f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20122e0() {
   double input = 0.685485;
   input += synapse0x2012620();
   input += synapse0x2012660();
   input += synapse0x20126a0();
   input += synapse0x20126e0();
   input += synapse0x2012720();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20122e0() {
   double input = input0x20122e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2012760() {
   double input = 7.18692;
   input += synapse0x2012aa0();
   input += synapse0x2012ae0();
   input += synapse0x2012b20();
   input += synapse0x2012b60();
   input += synapse0x2012ba0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2012760() {
   double input = input0x2012760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2012be0() {
   double input = -4.09565;
   input += synapse0x2012f20();
   input += synapse0x2012f60();
   input += synapse0x1f103d0();
   input += synapse0x1f10410();
   input += synapse0x20130b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2012be0() {
   double input = input0x2012be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20130f0() {
   double input = 4.43127;
   input += synapse0x2013430();
   input += synapse0x2013470();
   input += synapse0x20134b0();
   input += synapse0x20134f0();
   input += synapse0x2013530();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20130f0() {
   double input = input0x20130f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2013570() {
   double input = 2.26402;
   input += synapse0x20138b0();
   input += synapse0x20138f0();
   input += synapse0x2013930();
   input += synapse0x2013970();
   input += synapse0x20139b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2013570() {
   double input = input0x2013570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20139f0() {
   double input = 20.3836;
   input += synapse0x2013d30();
   input += synapse0x2013d70();
   input += synapse0x2013db0();
   input += synapse0x2012fa0();
   input += synapse0x2012fe0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20139f0() {
   double input = input0x20139f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2014000() {
   double input = -0.241962;
   input += synapse0x20142b0();
   input += synapse0x20142f0();
   input += synapse0x2014330();
   input += synapse0x2014370();
   input += synapse0x20143b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2014000() {
   double input = input0x2014000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20143f0() {
   double input = -2.4633;
   input += synapse0x2014730();
   input += synapse0x2014770();
   input += synapse0x20147b0();
   input += synapse0x20147f0();
   input += synapse0x2014830();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20143f0() {
   double input = input0x20143f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2014870() {
   double input = -0.203469;
   input += synapse0x2014bb0();
   input += synapse0x2014bf0();
   input += synapse0x2014c30();
   input += synapse0x2014c70();
   input += synapse0x2014cb0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2014870() {
   double input = input0x2014870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2014cf0() {
   double input = -21.8224;
   input += synapse0x2015030();
   input += synapse0x2015070();
   input += synapse0x20150b0();
   input += synapse0x20150f0();
   input += synapse0x2015130();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2014cf0() {
   double input = input0x2014cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2015170() {
   double input = 0.32002;
   input += synapse0x1f10220();
   input += synapse0x1f10260();
   input += synapse0x20155c0();
   input += synapse0x2015600();
   input += synapse0x2015640();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2015170() {
   double input = input0x2015170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2015680() {
   double input = 1.9496;
   input += synapse0x20159c0();
   input += synapse0x2015a00();
   input += synapse0x2015a40();
   input += synapse0x2015a80();
   input += synapse0x2015ac0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2015680() {
   double input = input0x2015680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2013df0() {
   double input = 0.129;
   input += synapse0x1f109f0();
   input += synapse0x2013f80();
   input += synapse0x2013fc0();
   input += synapse0x2015f10();
   input += synapse0x2015f50();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2013df0() {
   double input = input0x2013df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2015f90() {
   double input = 1.6551;
   input += synapse0x20162d0();
   input += synapse0x2016310();
   input += synapse0x2016350();
   input += synapse0x2016390();
   input += synapse0x20163d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2015f90() {
   double input = input0x2015f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2016410() {
   double input = 0.403197;
   input += synapse0x2016750();
   input += synapse0x2011020();
   input += synapse0x2011060();
   input += synapse0x2011360();
   input += synapse0x20113a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2016410() {
   double input = input0x2016410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2016ce0() {
   double input = -0.310777;
   input += synapse0x2016e70();
   input += synapse0x2016eb0();
   input += synapse0x2016ef0();
   input += synapse0x2016f30();
   input += synapse0x2016f70();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2016ce0() {
   double input = input0x2016ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2016fb0() {
   double input = 14.4642;
   input += synapse0x20172f0();
   input += synapse0x2017330();
   input += synapse0x2017370();
   input += synapse0x20173b0();
   input += synapse0x20173f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2016fb0() {
   double input = input0x2016fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2017430() {
   double input = -0.704058;
   input += synapse0x2017770();
   input += synapse0x20177b0();
   input += synapse0x20177f0();
   input += synapse0x2017830();
   input += synapse0x2017870();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2017430() {
   double input = input0x2017430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20178b0() {
   double input = 0.196312;
   input += synapse0x2017bf0();
   input += synapse0x2017c30();
   input += synapse0x2017c70();
   input += synapse0x2017cb0();
   input += synapse0x2017cf0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20178b0() {
   double input = input0x20178b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2017d30() {
   double input = 1.13736;
   input += synapse0x2018070();
   input += synapse0x20180b0();
   input += synapse0x20180f0();
   input += synapse0x2018130();
   input += synapse0x2018170();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2017d30() {
   double input = input0x2017d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20181b0() {
   double input = -2.63235;
   input += synapse0x20184f0();
   input += synapse0x2018530();
   input += synapse0x2018570();
   input += synapse0x20185b0();
   input += synapse0x20185f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20181b0() {
   double input = input0x20181b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2018630() {
   double input = -0.0481555;
   input += synapse0x2018970();
   input += synapse0x20189b0();
   input += synapse0x20189f0();
   input += synapse0x2018a30();
   input += synapse0x2018a70();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2018630() {
   double input = input0x2018630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2018ab0() {
   double input = -0.8677;
   input += synapse0x2018df0();
   input += synapse0x2018e30();
   input += synapse0x2018e70();
   input += synapse0x2018eb0();
   input += synapse0x2018ef0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2018ab0() {
   double input = input0x2018ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2018f30() {
   double input = 0.371932;
   input += synapse0x2019270();
   input += synapse0x20192b0();
   input += synapse0x20192f0();
   input += synapse0x2019330();
   input += synapse0x2019370();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2018f30() {
   double input = input0x2018f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201ae40() {
   double input = -0.230241;
   input += synapse0x2012e90();
   input += synapse0x2012ed0();
   input += synapse0x20133a0();
   input += synapse0x20133e0();
   input += synapse0x2013820();
   input += synapse0x2013860();
   input += synapse0x2013ca0();
   input += synapse0x2013ce0();
   input += synapse0x2014220();
   input += synapse0x2014260();
   input += synapse0x20146a0();
   input += synapse0x20146e0();
   input += synapse0x2014b20();
   input += synapse0x2014b60();
   input += synapse0x2014fa0();
   input += synapse0x2014fe0();
   input += synapse0x2015420();
   input += synapse0x2015460();
   input += synapse0x2015930();
   input += synapse0x2015970();
   input += synapse0x2016240();
   input += synapse0x2016280();
   input += synapse0x20166c0();
   input += synapse0x2016700();
   input += synapse0x2011d20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201ae40() {
   double input = input0x201ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2015c10() {
   double input = 0.425587;
   input += synapse0x2015da0();
   input += synapse0x2015de0();
   input += synapse0x2015e20();
   input += synapse0x2015e60();
   input += synapse0x2015ea0();
   input += synapse0x2011d60();
   input += synapse0x2017fe0();
   input += synapse0x2018020();
   input += synapse0x2018460();
   input += synapse0x20184a0();
   input += synapse0x20188e0();
   input += synapse0x2018920();
   input += synapse0x2018d60();
   input += synapse0x2018da0();
   input += synapse0x20191e0();
   input += synapse0x2019220();
   input += synapse0x2012190();
   input += synapse0x20121d0();
   input += synapse0x2017260();
   input += synapse0x20172a0();
   input += synapse0x1f1e2b0();
   input += synapse0x1f1e2f0();
   input += synapse0x201b8f0();
   input += synapse0x201b930();
   input += synapse0x201b970();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2015c10() {
   double input = input0x2015c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201b9b0() {
   double input = 0.0927786;
   input += synapse0x20154b0();
   input += synapse0x20154f0();
   input += synapse0x2015530();
   input += synapse0x2015570();
   input += synapse0x201bf00();
   input += synapse0x201bf40();
   input += synapse0x201bf80();
   input += synapse0x201bfc0();
   input += synapse0x201c000();
   input += synapse0x201c040();
   input += synapse0x201c080();
   input += synapse0x201c0c0();
   input += synapse0x201c100();
   input += synapse0x201c140();
   input += synapse0x201c180();
   input += synapse0x201c1c0();
   input += synapse0x201bb40();
   input += synapse0x201bb80();
   input += synapse0x201c310();
   input += synapse0x201c350();
   input += synapse0x201c390();
   input += synapse0x201c3d0();
   input += synapse0x201c410();
   input += synapse0x201c450();
   input += synapse0x201c490();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201b9b0() {
   double input = input0x201b9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201c4d0() {
   double input = -0.0211301;
   input += synapse0x201c810();
   input += synapse0x201c850();
   input += synapse0x201c890();
   input += synapse0x201c8d0();
   input += synapse0x201c910();
   input += synapse0x201c950();
   input += synapse0x201c990();
   input += synapse0x201c9d0();
   input += synapse0x201ca10();
   input += synapse0x201ca50();
   input += synapse0x201ca90();
   input += synapse0x201cad0();
   input += synapse0x201cb10();
   input += synapse0x201cb50();
   input += synapse0x201cb90();
   input += synapse0x201cbd0();
   input += synapse0x201c660();
   input += synapse0x201c6a0();
   input += synapse0x201cd20();
   input += synapse0x201cd60();
   input += synapse0x201cda0();
   input += synapse0x201cde0();
   input += synapse0x201ce20();
   input += synapse0x201ce60();
   input += synapse0x201cea0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201c4d0() {
   double input = input0x201c4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201cee0() {
   double input = -0.688195;
   input += synapse0x201d220();
   input += synapse0x201d260();
   input += synapse0x201d2a0();
   input += synapse0x201d2e0();
   input += synapse0x201d320();
   input += synapse0x201d360();
   input += synapse0x201d3a0();
   input += synapse0x201d3e0();
   input += synapse0x201d420();
   input += synapse0x201d460();
   input += synapse0x201d4a0();
   input += synapse0x201d4e0();
   input += synapse0x201d520();
   input += synapse0x201d560();
   input += synapse0x201d5a0();
   input += synapse0x201d5e0();
   input += synapse0x201d070();
   input += synapse0x201d0b0();
   input += synapse0x201d730();
   input += synapse0x201d770();
   input += synapse0x201d7b0();
   input += synapse0x201d7f0();
   input += synapse0x201d830();
   input += synapse0x201d870();
   input += synapse0x201d8b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201cee0() {
   double input = input0x201cee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201d8f0() {
   double input = -0.0239517;
   input += synapse0x201dc30();
   input += synapse0x201dc70();
   input += synapse0x201dcb0();
   input += synapse0x201dcf0();
   input += synapse0x201dd30();
   input += synapse0x201dd70();
   input += synapse0x201ddb0();
   input += synapse0x201afd0();
   input += synapse0x201b010();
   input += synapse0x201b050();
   input += synapse0x201b090();
   input += synapse0x201b0d0();
   input += synapse0x201b110();
   input += synapse0x201b150();
   input += synapse0x201b190();
   input += synapse0x201b1d0();
   input += synapse0x201da80();
   input += synapse0x201dac0();
   input += synapse0x201b320();
   input += synapse0x201b360();
   input += synapse0x201b3a0();
   input += synapse0x201b3e0();
   input += synapse0x201b420();
   input += synapse0x201b460();
   input += synapse0x201b4a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201d8f0() {
   double input = input0x201d8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201b4e0() {
   double input = -1.52311;
   input += synapse0x201b790();
   input += synapse0x201ee90();
   input += synapse0x201eed0();
   input += synapse0x201ef10();
   input += synapse0x201ef50();
   input += synapse0x201ef90();
   input += synapse0x201efd0();
   input += synapse0x201f010();
   input += synapse0x201f050();
   input += synapse0x201f090();
   input += synapse0x201f0d0();
   input += synapse0x201f110();
   input += synapse0x201f150();
   input += synapse0x201f190();
   input += synapse0x201f1d0();
   input += synapse0x201f210();
   input += synapse0x201b670();
   input += synapse0x201b6b0();
   input += synapse0x201f360();
   input += synapse0x201f3a0();
   input += synapse0x201f3e0();
   input += synapse0x201f420();
   input += synapse0x201f460();
   input += synapse0x201f4a0();
   input += synapse0x201f4e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201b4e0() {
   double input = input0x201b4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201f520() {
   double input = 1.21697;
   input += synapse0x201f860();
   input += synapse0x201f8a0();
   input += synapse0x201f8e0();
   input += synapse0x201f920();
   input += synapse0x201f960();
   input += synapse0x201f9a0();
   input += synapse0x201f9e0();
   input += synapse0x201fa20();
   input += synapse0x201fa60();
   input += synapse0x201faa0();
   input += synapse0x201fae0();
   input += synapse0x201fb20();
   input += synapse0x201fb60();
   input += synapse0x201fba0();
   input += synapse0x201fbe0();
   input += synapse0x201fc20();
   input += synapse0x201f6b0();
   input += synapse0x201f6f0();
   input += synapse0x201fd70();
   input += synapse0x201fdb0();
   input += synapse0x201fdf0();
   input += synapse0x201fe30();
   input += synapse0x201fe70();
   input += synapse0x201feb0();
   input += synapse0x201fef0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201f520() {
   double input = input0x201f520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201ff30() {
   double input = -0.624691;
   input += synapse0x2020270();
   input += synapse0x20202b0();
   input += synapse0x20202f0();
   input += synapse0x2020330();
   input += synapse0x2020370();
   input += synapse0x20203b0();
   input += synapse0x20203f0();
   input += synapse0x2020430();
   input += synapse0x2020470();
   input += synapse0x20204b0();
   input += synapse0x20204f0();
   input += synapse0x2020530();
   input += synapse0x2020570();
   input += synapse0x20205b0();
   input += synapse0x20205f0();
   input += synapse0x2020630();
   input += synapse0x20200c0();
   input += synapse0x2020100();
   input += synapse0x2020780();
   input += synapse0x20207c0();
   input += synapse0x2020800();
   input += synapse0x2020840();
   input += synapse0x2020880();
   input += synapse0x20208c0();
   input += synapse0x2020900();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201ff30() {
   double input = input0x201ff30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2020940() {
   double input = -1.25482;
   input += synapse0x2020c80();
   input += synapse0x2020cc0();
   input += synapse0x2020d00();
   input += synapse0x2020d40();
   input += synapse0x2020d80();
   input += synapse0x2020dc0();
   input += synapse0x2020e00();
   input += synapse0x2020e40();
   input += synapse0x2020e80();
   input += synapse0x2020ec0();
   input += synapse0x2020f00();
   input += synapse0x2020f40();
   input += synapse0x2020f80();
   input += synapse0x2020fc0();
   input += synapse0x2021000();
   input += synapse0x2021040();
   input += synapse0x2020ad0();
   input += synapse0x2020b10();
   input += synapse0x2021190();
   input += synapse0x20211d0();
   input += synapse0x2021210();
   input += synapse0x2021250();
   input += synapse0x2021290();
   input += synapse0x20212d0();
   input += synapse0x2021310();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2020940() {
   double input = input0x2020940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2021350() {
   double input = 0.490304;
   input += synapse0x2021690();
   input += synapse0x20216d0();
   input += synapse0x2021710();
   input += synapse0x2021750();
   input += synapse0x2021790();
   input += synapse0x20217d0();
   input += synapse0x2021810();
   input += synapse0x2021850();
   input += synapse0x2021890();
   input += synapse0x20218d0();
   input += synapse0x2021910();
   input += synapse0x2021950();
   input += synapse0x2021990();
   input += synapse0x20219d0();
   input += synapse0x2021a10();
   input += synapse0x2021a50();
   input += synapse0x20214e0();
   input += synapse0x2021520();
   input += synapse0x2021ba0();
   input += synapse0x2021be0();
   input += synapse0x2021c20();
   input += synapse0x2021c60();
   input += synapse0x2021ca0();
   input += synapse0x2021ce0();
   input += synapse0x2021d20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2021350() {
   double input = input0x2021350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2021d60() {
   double input = -0.430624;
   input += synapse0x20220a0();
   input += synapse0x20220e0();
   input += synapse0x2022120();
   input += synapse0x2022160();
   input += synapse0x20221a0();
   input += synapse0x20221e0();
   input += synapse0x2022220();
   input += synapse0x2022260();
   input += synapse0x20222a0();
   input += synapse0x20222e0();
   input += synapse0x2022320();
   input += synapse0x2022360();
   input += synapse0x20223a0();
   input += synapse0x20223e0();
   input += synapse0x2022420();
   input += synapse0x2022460();
   input += synapse0x2021ef0();
   input += synapse0x2021f30();
   input += synapse0x20225b0();
   input += synapse0x20225f0();
   input += synapse0x2022630();
   input += synapse0x2022670();
   input += synapse0x20226b0();
   input += synapse0x20226f0();
   input += synapse0x2022730();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2021d60() {
   double input = input0x2021d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2022770() {
   double input = -0.237169;
   input += synapse0x2022ab0();
   input += synapse0x2022af0();
   input += synapse0x2022b30();
   input += synapse0x2022b70();
   input += synapse0x2022bb0();
   input += synapse0x2022bf0();
   input += synapse0x2022c30();
   input += synapse0x2022c70();
   input += synapse0x2022cb0();
   input += synapse0x2022cf0();
   input += synapse0x2022d30();
   input += synapse0x2022d70();
   input += synapse0x2022db0();
   input += synapse0x2022df0();
   input += synapse0x2022e30();
   input += synapse0x2022e70();
   input += synapse0x2022900();
   input += synapse0x2022940();
   input += synapse0x2022fc0();
   input += synapse0x2023000();
   input += synapse0x2023040();
   input += synapse0x2023080();
   input += synapse0x20230c0();
   input += synapse0x2023100();
   input += synapse0x2023140();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2022770() {
   double input = input0x2022770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2023180() {
   double input = -0.427261;
   input += synapse0x20234c0();
   input += synapse0x2023500();
   input += synapse0x2023540();
   input += synapse0x2023580();
   input += synapse0x20235c0();
   input += synapse0x2023600();
   input += synapse0x2023640();
   input += synapse0x2023680();
   input += synapse0x20236c0();
   input += synapse0x2023700();
   input += synapse0x2023740();
   input += synapse0x2023780();
   input += synapse0x20237c0();
   input += synapse0x2023800();
   input += synapse0x2023840();
   input += synapse0x2023880();
   input += synapse0x2023310();
   input += synapse0x2023350();
   input += synapse0x20239d0();
   input += synapse0x2023a10();
   input += synapse0x2023a50();
   input += synapse0x2023a90();
   input += synapse0x2023ad0();
   input += synapse0x2023b10();
   input += synapse0x2023b50();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2023180() {
   double input = input0x2023180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2023b90() {
   double input = -1.59598;
   input += synapse0x2023ed0();
   input += synapse0x2023f10();
   input += synapse0x2023f50();
   input += synapse0x2023f90();
   input += synapse0x2023fd0();
   input += synapse0x2024010();
   input += synapse0x2024050();
   input += synapse0x2024090();
   input += synapse0x20240d0();
   input += synapse0x2024110();
   input += synapse0x2024150();
   input += synapse0x2024190();
   input += synapse0x20241d0();
   input += synapse0x2024210();
   input += synapse0x2024250();
   input += synapse0x2024290();
   input += synapse0x2023d20();
   input += synapse0x2023d60();
   input += synapse0x20243e0();
   input += synapse0x2024420();
   input += synapse0x2024460();
   input += synapse0x20244a0();
   input += synapse0x20244e0();
   input += synapse0x2024520();
   input += synapse0x2024560();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2023b90() {
   double input = input0x2023b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20245a0() {
   double input = 1.7078;
   input += synapse0x20248e0();
   input += synapse0x2012100();
   input += synapse0x2012140();
   input += synapse0x2012500();
   input += synapse0x2012540();
   input += synapse0x2012980();
   input += synapse0x20129c0();
   input += synapse0x2012e00();
   input += synapse0x2012e40();
   input += synapse0x2013310();
   input += synapse0x2013350();
   input += synapse0x2013790();
   input += synapse0x20137d0();
   input += synapse0x2013c10();
   input += synapse0x2013c50();
   input += synapse0x2014190();
   input += synapse0x20141d0();
   input += synapse0x2014610();
   input += synapse0x2014650();
   input += synapse0x2014a90();
   input += synapse0x2014ad0();
   input += synapse0x2014f10();
   input += synapse0x2014f50();
   input += synapse0x2015390();
   input += synapse0x20153d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20245a0() {
   double input = input0x20245a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x201ebc0() {
   double input = -1.3402;
   input += synapse0x201ed50();
   input += synapse0x201ed90();
   input += synapse0x2016630();
   input += synapse0x2016670();
   input += synapse0x2024730();
   input += synapse0x2024770();
   input += synapse0x20119e0();
   input += synapse0x2011a20();
   input += synapse0x20171d0();
   input += synapse0x2017210();
   input += synapse0x2017650();
   input += synapse0x2017690();
   input += synapse0x2017ad0();
   input += synapse0x2017b10();
   input += synapse0x2017f50();
   input += synapse0x2017f90();
   input += synapse0x20183d0();
   input += synapse0x2018410();
   input += synapse0x2018850();
   input += synapse0x2018890();
   input += synapse0x2018cd0();
   input += synapse0x2018d10();
   input += synapse0x2019150();
   input += synapse0x2019190();
   input += synapse0x20158a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x201ebc0() {
   double input = input0x201ebc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2027810() {
   double input = -0.284388;
   input += synapse0x20158e0();
   input += synapse0x2027b50();
   input += synapse0x2027b90();
   input += synapse0x2027bd0();
   input += synapse0x2027c10();
   input += synapse0x2027c50();
   input += synapse0x2027c90();
   input += synapse0x2027cd0();
   input += synapse0x2027d10();
   input += synapse0x2027d50();
   input += synapse0x2027d90();
   input += synapse0x2027dd0();
   input += synapse0x2027e10();
   input += synapse0x2027e50();
   input += synapse0x2027e90();
   input += synapse0x2027ed0();
   input += synapse0x20279a0();
   input += synapse0x20279e0();
   input += synapse0x2028020();
   input += synapse0x2028060();
   input += synapse0x20280a0();
   input += synapse0x20280e0();
   input += synapse0x2028120();
   input += synapse0x2028160();
   input += synapse0x20281a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2027810() {
   double input = input0x2027810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x20281e0() {
   double input = 0.985293;
   input += synapse0x2028520();
   input += synapse0x2028560();
   input += synapse0x20285a0();
   input += synapse0x20285e0();
   input += synapse0x2028620();
   input += synapse0x2028660();
   input += synapse0x20286a0();
   input += synapse0x20286e0();
   input += synapse0x2028720();
   input += synapse0x2028760();
   input += synapse0x20287a0();
   input += synapse0x20287e0();
   input += synapse0x2028820();
   input += synapse0x2028860();
   input += synapse0x20288a0();
   input += synapse0x20288e0();
   input += synapse0x2028370();
   input += synapse0x20283b0();
   input += synapse0x2028a30();
   input += synapse0x2028a70();
   input += synapse0x2028ab0();
   input += synapse0x2028af0();
   input += synapse0x2028b30();
   input += synapse0x2028b70();
   input += synapse0x2028bb0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x20281e0() {
   double input = input0x20281e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2028bf0() {
   double input = 1.20321;
   input += synapse0x2028f30();
   input += synapse0x2028f70();
   input += synapse0x2028fb0();
   input += synapse0x2028ff0();
   input += synapse0x2029030();
   input += synapse0x2029070();
   input += synapse0x20290b0();
   input += synapse0x20290f0();
   input += synapse0x2029130();
   input += synapse0x2029170();
   input += synapse0x20291b0();
   input += synapse0x20291f0();
   input += synapse0x2029230();
   input += synapse0x2029270();
   input += synapse0x20292b0();
   input += synapse0x20292f0();
   input += synapse0x2028d80();
   input += synapse0x2028dc0();
   input += synapse0x2029440();
   input += synapse0x2029480();
   input += synapse0x20294c0();
   input += synapse0x2029500();
   input += synapse0x2029540();
   input += synapse0x2029580();
   input += synapse0x20295c0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2028bf0() {
   double input = input0x2028bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x2029600() {
   double input = -0.603185;
   input += synapse0x2029940();
   input += synapse0x2029980();
   input += synapse0x20299c0();
   input += synapse0x2029a00();
   input += synapse0x2029a40();
   input += synapse0x2029a80();
   input += synapse0x2029ac0();
   input += synapse0x2029b00();
   input += synapse0x2029b40();
   input += synapse0x2029b80();
   input += synapse0x2029bc0();
   input += synapse0x2029c00();
   input += synapse0x2029c40();
   input += synapse0x2029c80();
   input += synapse0x2029cc0();
   input += synapse0x2029d00();
   input += synapse0x2029790();
   input += synapse0x20297d0();
   input += synapse0x2029e50();
   input += synapse0x2029e90();
   input += synapse0x2029ed0();
   input += synapse0x2029f10();
   input += synapse0x2029f50();
   input += synapse0x2029f90();
   input += synapse0x2029fd0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x2029600() {
   double input = input0x2029600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x202a010() {
   double input = -0.35284;
   input += synapse0x202a350();
   input += synapse0x202a390();
   input += synapse0x202a3d0();
   input += synapse0x202a410();
   input += synapse0x202a450();
   input += synapse0x202a490();
   input += synapse0x202a4d0();
   input += synapse0x202a510();
   input += synapse0x202a550();
   input += synapse0x202a590();
   input += synapse0x202a5d0();
   input += synapse0x202a610();
   input += synapse0x202a650();
   input += synapse0x202a690();
   input += synapse0x202a6d0();
   input += synapse0x202a710();
   input += synapse0x202a1a0();
   input += synapse0x202a1e0();
   input += synapse0x202a860();
   input += synapse0x202a8a0();
   input += synapse0x202a8e0();
   input += synapse0x202a920();
   input += synapse0x202a960();
   input += synapse0x202a9a0();
   input += synapse0x202a9e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x202a010() {
   double input = input0x202a010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x202aa20() {
   double input = 1.04935;
   input += synapse0x202ad60();
   input += synapse0x202ada0();
   input += synapse0x202ade0();
   input += synapse0x202ae20();
   input += synapse0x202ae60();
   input += synapse0x202aea0();
   input += synapse0x202aee0();
   input += synapse0x202af20();
   input += synapse0x202af60();
   input += synapse0x202afa0();
   input += synapse0x202afe0();
   input += synapse0x202b020();
   input += synapse0x202b060();
   input += synapse0x202b0a0();
   input += synapse0x202b0e0();
   input += synapse0x202b120();
   input += synapse0x202abb0();
   input += synapse0x202abf0();
   input += synapse0x202b270();
   input += synapse0x202b2b0();
   input += synapse0x202b2f0();
   input += synapse0x202b330();
   input += synapse0x202b370();
   input += synapse0x202b3b0();
   input += synapse0x202b3f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x202aa20() {
   double input = input0x202aa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x202b430() {
   double input = -0.260365;
   input += synapse0x202b770();
   input += synapse0x202b7b0();
   input += synapse0x202b7f0();
   input += synapse0x202b830();
   input += synapse0x202b870();
   input += synapse0x202b8b0();
   input += synapse0x202b8f0();
   input += synapse0x202b930();
   input += synapse0x202b970();
   input += synapse0x202b9b0();
   input += synapse0x202b9f0();
   input += synapse0x202ba30();
   input += synapse0x202ba70();
   input += synapse0x202bab0();
   input += synapse0x202baf0();
   input += synapse0x202bb30();
   input += synapse0x202b5c0();
   input += synapse0x202b600();
   input += synapse0x202bc80();
   input += synapse0x202bcc0();
   input += synapse0x202bd00();
   input += synapse0x202bd40();
   input += synapse0x202bd80();
   input += synapse0x202bdc0();
   input += synapse0x202be00();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x202b430() {
   double input = input0x202b430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x202be40() {
   double input = 0.448295;
   input += synapse0x202c180();
   input += synapse0x202c1c0();
   input += synapse0x202c200();
   input += synapse0x202c240();
   input += synapse0x202c280();
   input += synapse0x202c2c0();
   input += synapse0x202c300();
   input += synapse0x202c340();
   input += synapse0x202c380();
   input += synapse0x202c3c0();
   input += synapse0x202c400();
   input += synapse0x202c440();
   input += synapse0x202c480();
   input += synapse0x202c4c0();
   input += synapse0x202c500();
   input += synapse0x202c540();
   input += synapse0x202bfd0();
   input += synapse0x202c010();
   input += synapse0x202c690();
   input += synapse0x202c6d0();
   input += synapse0x202c710();
   input += synapse0x202c750();
   input += synapse0x202c790();
   input += synapse0x202c7d0();
   input += synapse0x202c810();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x202be40() {
   double input = input0x202be40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::input0x202c850() {
   double input = -3.92952;
   input += synapse0x202ca70();
   input += synapse0x202cab0();
   input += synapse0x202caf0();
   input += synapse0x202cb30();
   input += synapse0x202cb70();
   input += synapse0x202cbb0();
   input += synapse0x202cbf0();
   input += synapse0x202cc30();
   input += synapse0x202cc70();
   input += synapse0x202ccb0();
   input += synapse0x202ccf0();
   input += synapse0x202cd30();
   input += synapse0x202cd70();
   input += synapse0x202cdb0();
   input += synapse0x202cdf0();
   input += synapse0x202ce30();
   input += synapse0x2011e40();
   input += synapse0x2011e80();
   input += synapse0x202cf80();
   input += synapse0x202cfc0();
   input += synapse0x202d000();
   input += synapse0x202d040();
   input += synapse0x202d080();
   input += synapse0x202d0c0();
   input += synapse0x202d100();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::neuron0x202c850() {
   double input = input0x202c850();
   return (input * 3.71596)+119.127;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f1e1e0() {
   return (neuron0x2010e00()*-9.28366);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2000270() {
   return (neuron0x2011140()*-0.487408);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012220() {
   return (neuron0x2011480()*3.49992);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012260() {
   return (neuron0x20117c0()*-0.889725);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20122a0() {
   return (neuron0x2011b00()*-0.0955554);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012620() {
   return (neuron0x2010e00()*-0.648326);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012660() {
   return (neuron0x2011140()*0.546894);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20126a0() {
   return (neuron0x2011480()*0.0124447);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20126e0() {
   return (neuron0x20117c0()*3.16564);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012720() {
   return (neuron0x2011b00()*-0.361972);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012aa0() {
   return (neuron0x2010e00()*0.288299);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012ae0() {
   return (neuron0x2011140()*-0.307039);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012b20() {
   return (neuron0x2011480()*0.000490633);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012b60() {
   return (neuron0x20117c0()*2.74666);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012ba0() {
   return (neuron0x2011b00()*3.49373);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012f20() {
   return (neuron0x2010e00()*1.05519);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012f60() {
   return (neuron0x2011140()*-1.35763);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f103d0() {
   return (neuron0x2011480()*0.817521);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f10410() {
   return (neuron0x20117c0()*0.911829);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20130b0() {
   return (neuron0x2011b00()*-3.34907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013430() {
   return (neuron0x2010e00()*0.829541);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013470() {
   return (neuron0x2011140()*-1.69459);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20134b0() {
   return (neuron0x2011480()*-0.0722645);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20134f0() {
   return (neuron0x20117c0()*1.48299);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013530() {
   return (neuron0x2011b00()*8.21235);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20138b0() {
   return (neuron0x2010e00()*1.12736);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20138f0() {
   return (neuron0x2011140()*0.191412);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013930() {
   return (neuron0x2011480()*-0.0482186);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013970() {
   return (neuron0x20117c0()*-4.55797);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20139b0() {
   return (neuron0x2011b00()*-1.18589);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013d30() {
   return (neuron0x2010e00()*0.580739);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013d70() {
   return (neuron0x2011140()*-1.14918);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013db0() {
   return (neuron0x2011480()*-0.0266414);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012fa0() {
   return (neuron0x20117c0()*8.21333);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012fe0() {
   return (neuron0x2011b00()*8.8495);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20142b0() {
   return (neuron0x2010e00()*7.70044);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20142f0() {
   return (neuron0x2011140()*-0.144143);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014330() {
   return (neuron0x2011480()*-3.92778);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014370() {
   return (neuron0x20117c0()*0.913806);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20143b0() {
   return (neuron0x2011b00()*0.612504);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014730() {
   return (neuron0x2010e00()*0.461325);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014770() {
   return (neuron0x2011140()*-0.535745);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20147b0() {
   return (neuron0x2011480()*0.142973);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20147f0() {
   return (neuron0x20117c0()*0.505523);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014830() {
   return (neuron0x2011b00()*-1.91363);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014bb0() {
   return (neuron0x2010e00()*0.0085155);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014bf0() {
   return (neuron0x2011140()*-0.339748);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014c30() {
   return (neuron0x2011480()*-0.156933);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014c70() {
   return (neuron0x20117c0()*2.15509);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014cb0() {
   return (neuron0x2011b00()*-0.298606);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015030() {
   return (neuron0x2010e00()*-0.0360518);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015070() {
   return (neuron0x2011140()*0.0482661);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20150b0() {
   return (neuron0x2011480()*-0.00192297);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20150f0() {
   return (neuron0x20117c0()*-9.05894);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015130() {
   return (neuron0x2011b00()*-2.62003);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f10220() {
   return (neuron0x2010e00()*-1.33116);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f10260() {
   return (neuron0x2011140()*0.833331);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20155c0() {
   return (neuron0x2011480()*0.838017);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015600() {
   return (neuron0x20117c0()*-2.05235);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015640() {
   return (neuron0x2011b00()*0.078979);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20159c0() {
   return (neuron0x2010e00()*0.169272);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015a00() {
   return (neuron0x2011140()*-0.00915597);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015a40() {
   return (neuron0x2011480()*-0.000709154);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015a80() {
   return (neuron0x20117c0()*0.414907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015ac0() {
   return (neuron0x2011b00()*0.100957);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f109f0() {
   return (neuron0x2010e00()*0.0158962);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013f80() {
   return (neuron0x2011140()*-0.363405);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013fc0() {
   return (neuron0x2011480()*-0.248618);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015f10() {
   return (neuron0x20117c0()*3.66101);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015f50() {
   return (neuron0x2011b00()*0.722401);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20162d0() {
   return (neuron0x2010e00()*-0.122075);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016310() {
   return (neuron0x2011140()*-0.642418);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016350() {
   return (neuron0x2011480()*-0.236288);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016390() {
   return (neuron0x20117c0()*3.79463);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20163d0() {
   return (neuron0x2011b00()*0.52146);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016750() {
   return (neuron0x2010e00()*1.226);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011020() {
   return (neuron0x2011140()*-0.564367);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011060() {
   return (neuron0x2011480()*-1.42614);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011360() {
   return (neuron0x20117c0()*2.97287);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20113a0() {
   return (neuron0x2011b00()*0.56809);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016e70() {
   return (neuron0x2010e00()*1.29212);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016eb0() {
   return (neuron0x2011140()*-0.481999);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016ef0() {
   return (neuron0x2011480()*-0.933125);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016f30() {
   return (neuron0x20117c0()*2.46171);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016f70() {
   return (neuron0x2011b00()*-0.502077);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20172f0() {
   return (neuron0x2010e00()*-0.596631);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017330() {
   return (neuron0x2011140()*0.445322);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017370() {
   return (neuron0x2011480()*0.0226421);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20173b0() {
   return (neuron0x20117c0()*10.5615);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20173f0() {
   return (neuron0x2011b00()*9.29045);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017770() {
   return (neuron0x2010e00()*1.58321);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20177b0() {
   return (neuron0x2011140()*-0.842731);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20177f0() {
   return (neuron0x2011480()*-0.938829);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017830() {
   return (neuron0x20117c0()*2.20502);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017870() {
   return (neuron0x2011b00()*-1.17456);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017bf0() {
   return (neuron0x2010e00()*-0.284241);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017c30() {
   return (neuron0x2011140()*-0.00777693);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017c70() {
   return (neuron0x2011480()*0.0907645);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017cb0() {
   return (neuron0x20117c0()*2.70872);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017cf0() {
   return (neuron0x2011b00()*0.133764);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018070() {
   return (neuron0x2010e00()*-0.240346);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20180b0() {
   return (neuron0x2011140()*-0.0745171);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20180f0() {
   return (neuron0x2011480()*0.0785981);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018130() {
   return (neuron0x20117c0()*2.30463);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018170() {
   return (neuron0x2011b00()*-0.325982);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20184f0() {
   return (neuron0x2010e00()*-0.539218);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018530() {
   return (neuron0x2011140()*0.271437);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018570() {
   return (neuron0x2011480()*0.0132281);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20185b0() {
   return (neuron0x20117c0()*1.30705);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20185f0() {
   return (neuron0x2011b00()*1.13508);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018970() {
   return (neuron0x2010e00()*-5.44589);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20189b0() {
   return (neuron0x2011140()*0.460941);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20189f0() {
   return (neuron0x2011480()*2.27621);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018a30() {
   return (neuron0x20117c0()*-1.27084);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018a70() {
   return (neuron0x2011b00()*0.0886525);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018df0() {
   return (neuron0x2010e00()*-0.9412);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018e30() {
   return (neuron0x2011140()*1.32473);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018e70() {
   return (neuron0x2011480()*0.059623);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018eb0() {
   return (neuron0x20117c0()*1.88633);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018ef0() {
   return (neuron0x2011b00()*-0.932935);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2019270() {
   return (neuron0x2010e00()*-0.0159751);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20192b0() {
   return (neuron0x2011140()*1.02828);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20192f0() {
   return (neuron0x2011480()*-0.136929);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2019330() {
   return (neuron0x20117c0()*-3.916);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2019370() {
   return (neuron0x2011b00()*0.353824);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012e90() {
   return (neuron0x2011f70()*-0.00829122);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012ed0() {
   return (neuron0x20122e0()*-0.449573);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20133a0() {
   return (neuron0x2012760()*2.14256);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20133e0() {
   return (neuron0x2012be0()*-0.985097);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013820() {
   return (neuron0x20130f0()*-6.70101);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013860() {
   return (neuron0x2013570()*0.773357);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013ca0() {
   return (neuron0x20139f0()*0.866314);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013ce0() {
   return (neuron0x2014000()*-0.015874);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014220() {
   return (neuron0x20143f0()*-0.300948);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014260() {
   return (neuron0x2014870()*0.0536847);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20146a0() {
   return (neuron0x2014cf0()*-6.29094);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20146e0() {
   return (neuron0x2015170()*0.0656213);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014b20() {
   return (neuron0x2015680()*1.73809);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014b60() {
   return (neuron0x2013df0()*1.32364);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014fa0() {
   return (neuron0x2015f90()*1.55785);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014fe0() {
   return (neuron0x2016410()*0.55308);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015420() {
   return (neuron0x2016ce0()*0.610907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015460() {
   return (neuron0x2016fb0()*3.76934);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015930() {
   return (neuron0x2017430()*0.518355);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015970() {
   return (neuron0x20178b0()*1.34499);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016240() {
   return (neuron0x2017d30()*0.270418);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016280() {
   return (neuron0x20181b0()*-2.46325);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20166c0() {
   return (neuron0x2018630()*-0.439009);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016700() {
   return (neuron0x2018ab0()*0.177676);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011d20() {
   return (neuron0x2018f30()*-1.49001);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015da0() {
   return (neuron0x2011f70()*0.910847);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015de0() {
   return (neuron0x20122e0()*-1.08663);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015e20() {
   return (neuron0x2012760()*1.39183);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015e60() {
   return (neuron0x2012be0()*1.78755);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015ea0() {
   return (neuron0x20130f0()*1.44039);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011d60() {
   return (neuron0x2013570()*-0.442317);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017fe0() {
   return (neuron0x20139f0()*-1.18224);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018020() {
   return (neuron0x2014000()*0.518115);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018460() {
   return (neuron0x20143f0()*0.97164);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20184a0() {
   return (neuron0x2014870()*-0.668925);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20188e0() {
   return (neuron0x2014cf0()*1.35166);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018920() {
   return (neuron0x2015170()*0.637606);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018d60() {
   return (neuron0x2015680()*-0.810258);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018da0() {
   return (neuron0x2013df0()*-2.05758);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20191e0() {
   return (neuron0x2015f90()*-0.984513);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2019220() {
   return (neuron0x2016410()*-0.716775);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012190() {
   return (neuron0x2016ce0()*-0.943134);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20121d0() {
   return (neuron0x2016fb0()*-1.63274);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017260() {
   return (neuron0x2017430()*-1.1611);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20172a0() {
   return (neuron0x20178b0()*-0.469946);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f1e2b0() {
   return (neuron0x2017d30()*0.112114);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x1f1e2f0() {
   return (neuron0x20181b0()*1.16329);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b8f0() {
   return (neuron0x2018630()*1.18486);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b930() {
   return (neuron0x2018ab0()*-0.364151);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b970() {
   return (neuron0x2018f30()*1.83236);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20154b0() {
   return (neuron0x2011f70()*-0.0762691);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20154f0() {
   return (neuron0x20122e0()*-0.363222);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015530() {
   return (neuron0x2012760()*0.000118995);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015570() {
   return (neuron0x2012be0()*0.092846);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201bf00() {
   return (neuron0x20130f0()*-0.143369);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201bf40() {
   return (neuron0x2013570()*-0.0875821);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201bf80() {
   return (neuron0x20139f0()*0.163793);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201bfc0() {
   return (neuron0x2014000()*0.460873);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c000() {
   return (neuron0x20143f0()*-0.188381);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c040() {
   return (neuron0x2014870()*-0.479427);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c080() {
   return (neuron0x2014cf0()*-0.195003);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c0c0() {
   return (neuron0x2015170()*0.134176);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c100() {
   return (neuron0x2015680()*-0.62854);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c140() {
   return (neuron0x2013df0()*-0.0617842);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c180() {
   return (neuron0x2015f90()*-0.455901);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c1c0() {
   return (neuron0x2016410()*-0.384409);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201bb40() {
   return (neuron0x2016ce0()*-0.350945);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201bb80() {
   return (neuron0x2016fb0()*-0.174433);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c310() {
   return (neuron0x2017430()*-0.0353899);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c350() {
   return (neuron0x20178b0()*-0.00857649);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c390() {
   return (neuron0x2017d30()*-0.225629);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c3d0() {
   return (neuron0x20181b0()*0.00504088);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c410() {
   return (neuron0x2018630()*0.444866);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c450() {
   return (neuron0x2018ab0()*0.338217);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c490() {
   return (neuron0x2018f30()*0.071202);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c810() {
   return (neuron0x2011f70()*0.635563);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c850() {
   return (neuron0x20122e0()*-0.41512);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c890() {
   return (neuron0x2012760()*1.11349);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c8d0() {
   return (neuron0x2012be0()*2.24584);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c910() {
   return (neuron0x20130f0()*0.812761);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c950() {
   return (neuron0x2013570()*-0.720507);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c990() {
   return (neuron0x20139f0()*-1.23467);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c9d0() {
   return (neuron0x2014000()*1.18246);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ca10() {
   return (neuron0x20143f0()*1.45079);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ca50() {
   return (neuron0x2014870()*-0.685491);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ca90() {
   return (neuron0x2014cf0()*0.996531);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cad0() {
   return (neuron0x2015170()*1.30612);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cb10() {
   return (neuron0x2015680()*0.016867);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cb50() {
   return (neuron0x2013df0()*-1.18979);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cb90() {
   return (neuron0x2015f90()*-0.960102);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cbd0() {
   return (neuron0x2016410()*-0.324981);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c660() {
   return (neuron0x2016ce0()*-0.990393);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201c6a0() {
   return (neuron0x2016fb0()*-1.55369);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cd20() {
   return (neuron0x2017430()*-0.66465);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cd60() {
   return (neuron0x20178b0()*-0.264844);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cda0() {
   return (neuron0x2017d30()*-0.454714);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cde0() {
   return (neuron0x20181b0()*1.45064);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ce20() {
   return (neuron0x2018630()*1.32396);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ce60() {
   return (neuron0x2018ab0()*-0.0189553);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201cea0() {
   return (neuron0x2018f30()*1.77085);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d220() {
   return (neuron0x2011f70()*-0.553728);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d260() {
   return (neuron0x20122e0()*-0.26634);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d2a0() {
   return (neuron0x2012760()*-0.537146);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d2e0() {
   return (neuron0x2012be0()*-0.718042);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d320() {
   return (neuron0x20130f0()*-0.760052);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d360() {
   return (neuron0x2013570()*-0.133982);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d3a0() {
   return (neuron0x20139f0()*0.790583);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d3e0() {
   return (neuron0x2014000()*0.22281);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d420() {
   return (neuron0x20143f0()*-0.568277);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d460() {
   return (neuron0x2014870()*-0.237638);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d4a0() {
   return (neuron0x2014cf0()*-0.580852);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d4e0() {
   return (neuron0x2015170()*-0.827077);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d520() {
   return (neuron0x2015680()*-0.119251);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d560() {
   return (neuron0x2013df0()*0.339965);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d5a0() {
   return (neuron0x2015f90()*0.825693);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d5e0() {
   return (neuron0x2016410()*0.358746);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d070() {
   return (neuron0x2016ce0()*-0.0698188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d0b0() {
   return (neuron0x2016fb0()*0.915461);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d730() {
   return (neuron0x2017430()*0.673695);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d770() {
   return (neuron0x20178b0()*0.500949);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d7b0() {
   return (neuron0x2017d30()*0.642143);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d7f0() {
   return (neuron0x20181b0()*-0.463772);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d830() {
   return (neuron0x2018630()*-0.692416);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d870() {
   return (neuron0x2018ab0()*-0.37306);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201d8b0() {
   return (neuron0x2018f30()*-0.666518);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dc30() {
   return (neuron0x2011f70()*-0.297549);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dc70() {
   return (neuron0x20122e0()*0.407936);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dcb0() {
   return (neuron0x2012760()*-0.281907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dcf0() {
   return (neuron0x2012be0()*0.158803);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dd30() {
   return (neuron0x20130f0()*-0.247941);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dd70() {
   return (neuron0x2013570()*-0.124955);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ddb0() {
   return (neuron0x20139f0()*-0.0802147);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201afd0() {
   return (neuron0x2014000()*0.192926);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b010() {
   return (neuron0x20143f0()*0.48689);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b050() {
   return (neuron0x2014870()*0.215662);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b090() {
   return (neuron0x2014cf0()*-0.60578);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b0d0() {
   return (neuron0x2015170()*-0.47151);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b110() {
   return (neuron0x2015680()*0.146368);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b150() {
   return (neuron0x2013df0()*0.230589);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b190() {
   return (neuron0x2015f90()*0.48525);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b1d0() {
   return (neuron0x2016410()*-0.0634099);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201da80() {
   return (neuron0x2016ce0()*-0.424694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201dac0() {
   return (neuron0x2016fb0()*0.253571);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b320() {
   return (neuron0x2017430()*0.0999997);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b360() {
   return (neuron0x20178b0()*-0.342896);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b3a0() {
   return (neuron0x2017d30()*0.123937);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b3e0() {
   return (neuron0x20181b0()*-0.0118915);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b420() {
   return (neuron0x2018630()*-0.707544);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b460() {
   return (neuron0x2018ab0()*-0.452822);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b4a0() {
   return (neuron0x2018f30()*-0.836904);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b790() {
   return (neuron0x2011f70()*-1.70158);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ee90() {
   return (neuron0x20122e0()*2.80599);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201eed0() {
   return (neuron0x2012760()*2.58785);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ef10() {
   return (neuron0x2012be0()*-2.03652);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ef50() {
   return (neuron0x20130f0()*-3.48069);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ef90() {
   return (neuron0x2013570()*-0.224271);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201efd0() {
   return (neuron0x20139f0()*18.5478);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f010() {
   return (neuron0x2014000()*-0.589575);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f050() {
   return (neuron0x20143f0()*-0.330046);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f090() {
   return (neuron0x2014870()*0.553335);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f0d0() {
   return (neuron0x2014cf0()*-17.8757);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f110() {
   return (neuron0x2015170()*-2.22019);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f150() {
   return (neuron0x2015680()*2.63556);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f190() {
   return (neuron0x2013df0()*2.38284);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f1d0() {
   return (neuron0x2015f90()*1.662);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f210() {
   return (neuron0x2016410()*1.27296);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b670() {
   return (neuron0x2016ce0()*1.24701);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201b6b0() {
   return (neuron0x2016fb0()*12.7809);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f360() {
   return (neuron0x2017430()*1.13203);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f3a0() {
   return (neuron0x20178b0()*1.16179);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f3e0() {
   return (neuron0x2017d30()*0.767274);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f420() {
   return (neuron0x20181b0()*-2.82808);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f460() {
   return (neuron0x2018630()*-1.49066);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f4a0() {
   return (neuron0x2018ab0()*1.25845);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f4e0() {
   return (neuron0x2018f30()*-2.57664);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f860() {
   return (neuron0x2011f70()*0.943602);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f8a0() {
   return (neuron0x20122e0()*0.173029);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f8e0() {
   return (neuron0x2012760()*-0.160194);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f920() {
   return (neuron0x2012be0()*-0.626731);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f960() {
   return (neuron0x20130f0()*-0.0448963);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f9a0() {
   return (neuron0x2013570()*1.71622);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f9e0() {
   return (neuron0x20139f0()*1.11709);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fa20() {
   return (neuron0x2014000()*0.566176);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fa60() {
   return (neuron0x20143f0()*0.235254);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201faa0() {
   return (neuron0x2014870()*0.579097);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fae0() {
   return (neuron0x2014cf0()*-1.64691);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fb20() {
   return (neuron0x2015170()*0.454108);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fb60() {
   return (neuron0x2015680()*0.69525);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fba0() {
   return (neuron0x2013df0()*1.7811);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fbe0() {
   return (neuron0x2015f90()*1.9462);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fc20() {
   return (neuron0x2016410()*1.81669);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f6b0() {
   return (neuron0x2016ce0()*1.22991);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201f6f0() {
   return (neuron0x2016fb0()*1.69195);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fd70() {
   return (neuron0x2017430()*0.516955);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fdb0() {
   return (neuron0x20178b0()*1.77826);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fdf0() {
   return (neuron0x2017d30()*0.778425);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fe30() {
   return (neuron0x20181b0()*-1.15652);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fe70() {
   return (neuron0x2018630()*0.69427);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201feb0() {
   return (neuron0x2018ab0()*-0.657794);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201fef0() {
   return (neuron0x2018f30()*-0.0737821);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020270() {
   return (neuron0x2011f70()*-1.26595);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20202b0() {
   return (neuron0x20122e0()*0.831087);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20202f0() {
   return (neuron0x2012760()*-1.84706);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020330() {
   return (neuron0x2012be0()*-1.21594);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020370() {
   return (neuron0x20130f0()*-1.20996);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20203b0() {
   return (neuron0x2013570()*1.00262);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20203f0() {
   return (neuron0x20139f0()*2.88559);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020430() {
   return (neuron0x2014000()*-0.204275);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020470() {
   return (neuron0x20143f0()*-1.00821);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20204b0() {
   return (neuron0x2014870()*0.476463);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20204f0() {
   return (neuron0x2014cf0()*-2.05691);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020530() {
   return (neuron0x2015170()*-1.23001);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020570() {
   return (neuron0x2015680()*1.66824);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20205b0() {
   return (neuron0x2013df0()*1.99396);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20205f0() {
   return (neuron0x2015f90()*2.29502);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020630() {
   return (neuron0x2016410()*1.69789);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20200c0() {
   return (neuron0x2016ce0()*0.61102);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020100() {
   return (neuron0x2016fb0()*3.0096);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020780() {
   return (neuron0x2017430()*0.780396);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20207c0() {
   return (neuron0x20178b0()*1.0544);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020800() {
   return (neuron0x2017d30()*0.177291);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020840() {
   return (neuron0x20181b0()*-1.43716);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020880() {
   return (neuron0x2018630()*-1.80528);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20208c0() {
   return (neuron0x2018ab0()*0.385997);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020900() {
   return (neuron0x2018f30()*-2.82078);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020c80() {
   return (neuron0x2011f70()*-0.552001);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020cc0() {
   return (neuron0x20122e0()*-0.964124);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020d00() {
   return (neuron0x2012760()*-0.256002);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020d40() {
   return (neuron0x2012be0()*1.20316);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020d80() {
   return (neuron0x20130f0()*0.19178);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020dc0() {
   return (neuron0x2013570()*-2.24812);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020e00() {
   return (neuron0x20139f0()*-2.2907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020e40() {
   return (neuron0x2014000()*0.10996);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020e80() {
   return (neuron0x20143f0()*0.894406);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020ec0() {
   return (neuron0x2014870()*-0.111561);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020f00() {
   return (neuron0x2014cf0()*-0.642937);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020f40() {
   return (neuron0x2015170()*-0.225084);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020f80() {
   return (neuron0x2015680()*-0.83196);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020fc0() {
   return (neuron0x2013df0()*-2.13773);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021000() {
   return (neuron0x2015f90()*-1.31435);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021040() {
   return (neuron0x2016410()*-0.819124);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020ad0() {
   return (neuron0x2016ce0()*-0.930726);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2020b10() {
   return (neuron0x2016fb0()*-2.49699);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021190() {
   return (neuron0x2017430()*-1.40672);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20211d0() {
   return (neuron0x20178b0()*-0.576809);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021210() {
   return (neuron0x2017d30()*-0.752093);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021250() {
   return (neuron0x20181b0()*0.404917);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021290() {
   return (neuron0x2018630()*0.498461);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20212d0() {
   return (neuron0x2018ab0()*-0.381444);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021310() {
   return (neuron0x2018f30()*0.332686);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021690() {
   return (neuron0x2011f70()*0.156984);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20216d0() {
   return (neuron0x20122e0()*0.443122);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021710() {
   return (neuron0x2012760()*0.567218);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021750() {
   return (neuron0x2012be0()*0.31024);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021790() {
   return (neuron0x20130f0()*-0.437137);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20217d0() {
   return (neuron0x2013570()*0.0350847);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021810() {
   return (neuron0x20139f0()*0.792092);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021850() {
   return (neuron0x2014000()*-0.0659911);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021890() {
   return (neuron0x20143f0()*-0.0477193);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20218d0() {
   return (neuron0x2014870()*-0.374829);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021910() {
   return (neuron0x2014cf0()*-4.24706);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021950() {
   return (neuron0x2015170()*0.80413);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021990() {
   return (neuron0x2015680()*2.24523);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20219d0() {
   return (neuron0x2013df0()*0.229004);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021a10() {
   return (neuron0x2015f90()*-0.0169851);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021a50() {
   return (neuron0x2016410()*0.360772);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20214e0() {
   return (neuron0x2016ce0()*-0.557246);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021520() {
   return (neuron0x2016fb0()*-0.386939);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021ba0() {
   return (neuron0x2017430()*-0.352813);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021be0() {
   return (neuron0x20178b0()*-0.0617435);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021c20() {
   return (neuron0x2017d30()*-0.0844125);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021c60() {
   return (neuron0x20181b0()*0.260242);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021ca0() {
   return (neuron0x2018630()*1.0405);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021ce0() {
   return (neuron0x2018ab0()*0.874939);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021d20() {
   return (neuron0x2018f30()*-0.0275076);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20220a0() {
   return (neuron0x2011f70()*-0.938247);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20220e0() {
   return (neuron0x20122e0()*0.692176);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022120() {
   return (neuron0x2012760()*-1.6464);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022160() {
   return (neuron0x2012be0()*-2.2519);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20221a0() {
   return (neuron0x20130f0()*-2.08537);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20221e0() {
   return (neuron0x2013570()*1.77771);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022220() {
   return (neuron0x20139f0()*2.26575);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022260() {
   return (neuron0x2014000()*-0.341491);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20222a0() {
   return (neuron0x20143f0()*-2.03099);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20222e0() {
   return (neuron0x2014870()*1.13712);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022320() {
   return (neuron0x2014cf0()*-1.75471);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022360() {
   return (neuron0x2015170()*-1.35276);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20223a0() {
   return (neuron0x2015680()*1.29545);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20223e0() {
   return (neuron0x2013df0()*2.10656);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022420() {
   return (neuron0x2015f90()*1.50007);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022460() {
   return (neuron0x2016410()*1.29381);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021ef0() {
   return (neuron0x2016ce0()*1.29616);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2021f30() {
   return (neuron0x2016fb0()*3.47158);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20225b0() {
   return (neuron0x2017430()*1.38805);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20225f0() {
   return (neuron0x20178b0()*1.41699);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022630() {
   return (neuron0x2017d30()*0.740385);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022670() {
   return (neuron0x20181b0()*-1.37272);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20226b0() {
   return (neuron0x2018630()*-1.67015);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20226f0() {
   return (neuron0x2018ab0()*0.300091);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022730() {
   return (neuron0x2018f30()*-2.58147);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022ab0() {
   return (neuron0x2011f70()*0.585315);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022af0() {
   return (neuron0x20122e0()*0.287699);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022b30() {
   return (neuron0x2012760()*0.754701);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022b70() {
   return (neuron0x2012be0()*-0.113027);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022bb0() {
   return (neuron0x20130f0()*-0.554163);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022bf0() {
   return (neuron0x2013570()*-0.0349275);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022c30() {
   return (neuron0x20139f0()*0.209731);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022c70() {
   return (neuron0x2014000()*0.166212);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022cb0() {
   return (neuron0x20143f0()*-0.519656);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022cf0() {
   return (neuron0x2014870()*-0.0231426);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022d30() {
   return (neuron0x2014cf0()*0.590064);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022d70() {
   return (neuron0x2015170()*-0.120248);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022db0() {
   return (neuron0x2015680()*-3.024);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022df0() {
   return (neuron0x2013df0()*-0.376049);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022e30() {
   return (neuron0x2015f90()*-0.621672);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022e70() {
   return (neuron0x2016410()*0.129292);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022900() {
   return (neuron0x2016ce0()*0.043378);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022940() {
   return (neuron0x2016fb0()*0.0715906);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2022fc0() {
   return (neuron0x2017430()*-0.284063);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023000() {
   return (neuron0x20178b0()*-0.56815);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023040() {
   return (neuron0x2017d30()*-0.382694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023080() {
   return (neuron0x20181b0()*0.30013);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20230c0() {
   return (neuron0x2018630()*0.470183);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023100() {
   return (neuron0x2018ab0()*0.706096);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023140() {
   return (neuron0x2018f30()*-0.0727291);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20234c0() {
   return (neuron0x2011f70()*-0.332753);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023500() {
   return (neuron0x20122e0()*0.704915);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023540() {
   return (neuron0x2012760()*-1.86694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023580() {
   return (neuron0x2012be0()*-0.871403);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20235c0() {
   return (neuron0x20130f0()*-0.992958);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023600() {
   return (neuron0x2013570()*0.340547);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023640() {
   return (neuron0x20139f0()*0.0880116);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023680() {
   return (neuron0x2014000()*0.351418);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20236c0() {
   return (neuron0x20143f0()*-0.133797);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023700() {
   return (neuron0x2014870()*0.644508);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023740() {
   return (neuron0x2014cf0()*-1.58384);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023780() {
   return (neuron0x2015170()*-1.10127);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20237c0() {
   return (neuron0x2015680()*1.26674);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023800() {
   return (neuron0x2013df0()*0.542765);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023840() {
   return (neuron0x2015f90()*0.563672);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023880() {
   return (neuron0x2016410()*0.860843);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023310() {
   return (neuron0x2016ce0()*0.205424);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023350() {
   return (neuron0x2016fb0()*1.65442);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20239d0() {
   return (neuron0x2017430()*0.118916);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023a10() {
   return (neuron0x20178b0()*0.437825);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023a50() {
   return (neuron0x2017d30()*0.537916);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023a90() {
   return (neuron0x20181b0()*-0.92516);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023ad0() {
   return (neuron0x2018630()*-0.23227);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023b10() {
   return (neuron0x2018ab0()*-0.676476);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023b50() {
   return (neuron0x2018f30()*-1.71284);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023ed0() {
   return (neuron0x2011f70()*-0.526345);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023f10() {
   return (neuron0x20122e0()*-1.08657);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023f50() {
   return (neuron0x2012760()*-0.320579);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023f90() {
   return (neuron0x2012be0()*0.0233432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023fd0() {
   return (neuron0x20130f0()*-0.0966008);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024010() {
   return (neuron0x2013570()*-1.48328);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024050() {
   return (neuron0x20139f0()*-2.16525);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024090() {
   return (neuron0x2014000()*-0.259618);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20240d0() {
   return (neuron0x20143f0()*-0.120297);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024110() {
   return (neuron0x2014870()*-0.846148);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024150() {
   return (neuron0x2014cf0()*-0.141074);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024190() {
   return (neuron0x2015170()*-0.986869);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20241d0() {
   return (neuron0x2015680()*-0.863093);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024210() {
   return (neuron0x2013df0()*-1.09657);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024250() {
   return (neuron0x2015f90()*-0.448068);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024290() {
   return (neuron0x2016410()*-1.16694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023d20() {
   return (neuron0x2016ce0()*-0.644692);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2023d60() {
   return (neuron0x2016fb0()*-1.84289);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20243e0() {
   return (neuron0x2017430()*-1.38227);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024420() {
   return (neuron0x20178b0()*-0.276378);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024460() {
   return (neuron0x2017d30()*-1.05064);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20244a0() {
   return (neuron0x20181b0()*-0.449295);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20244e0() {
   return (neuron0x2018630()*-0.24947);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024520() {
   return (neuron0x2018ab0()*0.0465879);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024560() {
   return (neuron0x2018f30()*-0.12044);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20248e0() {
   return (neuron0x2011f70()*1.27588);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012100() {
   return (neuron0x20122e0()*1.92526);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012140() {
   return (neuron0x2012760()*-0.163867);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012500() {
   return (neuron0x2012be0()*-2.12757);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012540() {
   return (neuron0x20130f0()*-0.389727);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012980() {
   return (neuron0x2013570()*2.80362);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20129c0() {
   return (neuron0x20139f0()*3.86436);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012e00() {
   return (neuron0x2014000()*-0.0507117);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2012e40() {
   return (neuron0x20143f0()*-0.728653);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013310() {
   return (neuron0x2014870()*1.15754);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013350() {
   return (neuron0x2014cf0()*-0.419152);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013790() {
   return (neuron0x2015170()*1.02546);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20137d0() {
   return (neuron0x2015680()*1.57435);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013c10() {
   return (neuron0x2013df0()*3.9211);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2013c50() {
   return (neuron0x2015f90()*3.21625);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014190() {
   return (neuron0x2016410()*3.23146);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20141d0() {
   return (neuron0x2016ce0()*1.00786);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014610() {
   return (neuron0x2016fb0()*3.63432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014650() {
   return (neuron0x2017430()*1.47433);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014a90() {
   return (neuron0x20178b0()*2.62365);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014ad0() {
   return (neuron0x2017d30()*1.74011);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014f10() {
   return (neuron0x20181b0()*0.0573457);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2014f50() {
   return (neuron0x2018630()*1.01334);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2015390() {
   return (neuron0x2018ab0()*0.211272);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20153d0() {
   return (neuron0x2018f30()*-0.77939);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ed50() {
   return (neuron0x2011f70()*-1.22246);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x201ed90() {
   return (neuron0x20122e0()*-0.241684);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016630() {
   return (neuron0x2012760()*0.335244);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2016670() {
   return (neuron0x2012be0()*0.366305);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024730() {
   return (neuron0x20130f0()*0.622265);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2024770() {
   return (neuron0x2013570()*-0.872977);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20119e0() {
   return (neuron0x20139f0()*-0.806132);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011a20() {
   return (neuron0x2014000()*0.0399188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20171d0() {
   return (neuron0x20143f0()*0.117571);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017210() {
   return (neuron0x2014870()*-0.750176);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017650() {
   return (neuron0x2014cf0()*0.335647);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017690() {
   return (neuron0x2015170()*-0.793142);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017ad0() {
   return (neuron0x2015680()*-0.472079);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017b10() {
   return (neuron0x2013df0()*-1.60284);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017f50() {
   return (neuron0x2015f90()*-1.60575);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2017f90() {
   return (neuron0x2016410()*-0.973443);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20183d0() {
   return (neuron0x2016ce0()*-0.485952);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018410() {
   return (neuron0x2016fb0()*-1.73998);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018850() {
   return (neuron0x2017430()*-0.145034);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018890() {
   return (neuron0x20178b0()*-1.19696);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018cd0() {
   return (neuron0x2017d30()*-0.211236);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2018d10() {
   return (neuron0x20181b0()*0.2526);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2019150() {
   return (neuron0x2018630()*-1.22218);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2019190() {
   return (neuron0x2018ab0()*-0.0286544);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20158a0() {
   return (neuron0x2018f30()*-0.185662);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20158e0() {
   return (neuron0x2011f70()*-0.644817);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027b50() {
   return (neuron0x20122e0()*0.842462);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027b90() {
   return (neuron0x2012760()*-1.20464);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027bd0() {
   return (neuron0x2012be0()*-1.01738);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027c10() {
   return (neuron0x20130f0()*-0.635211);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027c50() {
   return (neuron0x2013570()*0.96114);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027c90() {
   return (neuron0x20139f0()*0.846818);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027cd0() {
   return (neuron0x2014000()*0.04907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027d10() {
   return (neuron0x20143f0()*-0.610104);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027d50() {
   return (neuron0x2014870()*0.685769);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027d90() {
   return (neuron0x2014cf0()*-1.03313);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027dd0() {
   return (neuron0x2015170()*-0.23384);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027e10() {
   return (neuron0x2015680()*0.302279);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027e50() {
   return (neuron0x2013df0()*1.29127);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027e90() {
   return (neuron0x2015f90()*0.612127);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2027ed0() {
   return (neuron0x2016410()*0.878276);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20279a0() {
   return (neuron0x2016ce0()*0.746788);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20279e0() {
   return (neuron0x2016fb0()*0.369471);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028020() {
   return (neuron0x2017430()*0.327667);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028060() {
   return (neuron0x20178b0()*0.619489);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20280a0() {
   return (neuron0x2017d30()*-0.251188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20280e0() {
   return (neuron0x20181b0()*-0.557329);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028120() {
   return (neuron0x2018630()*-0.961005);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028160() {
   return (neuron0x2018ab0()*0.425291);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20281a0() {
   return (neuron0x2018f30()*-0.921589);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028520() {
   return (neuron0x2011f70()*0.212629);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028560() {
   return (neuron0x20122e0()*-0.267342);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20285a0() {
   return (neuron0x2012760()*2.09104);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20285e0() {
   return (neuron0x2012be0()*0.695832);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028620() {
   return (neuron0x20130f0()*1.2507);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028660() {
   return (neuron0x2013570()*-0.366447);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20286a0() {
   return (neuron0x20139f0()*-0.360649);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20286e0() {
   return (neuron0x2014000()*0.0360189);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028720() {
   return (neuron0x20143f0()*0.828692);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028760() {
   return (neuron0x2014870()*-0.233014);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20287a0() {
   return (neuron0x2014cf0()*1.41927);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20287e0() {
   return (neuron0x2015170()*0.65107);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028820() {
   return (neuron0x2015680()*-2.40023);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028860() {
   return (neuron0x2013df0()*-1.36405);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20288a0() {
   return (neuron0x2015f90()*-0.921095);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20288e0() {
   return (neuron0x2016410()*-0.901192);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028370() {
   return (neuron0x2016ce0()*-0.0807608);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20283b0() {
   return (neuron0x2016fb0()*-1.16024);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028a30() {
   return (neuron0x2017430()*-0.87909);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028a70() {
   return (neuron0x20178b0()*-0.200375);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028ab0() {
   return (neuron0x2017d30()*0.0374435);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028af0() {
   return (neuron0x20181b0()*1.06236);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028b30() {
   return (neuron0x2018630()*0.311084);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028b70() {
   return (neuron0x2018ab0()*0.365574);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028bb0() {
   return (neuron0x2018f30()*1.84339);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028f30() {
   return (neuron0x2011f70()*1.36683);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028f70() {
   return (neuron0x20122e0()*1.614);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028fb0() {
   return (neuron0x2012760()*-7.65742);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028ff0() {
   return (neuron0x2012be0()*-0.333584);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029030() {
   return (neuron0x20130f0()*0.00564407);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029070() {
   return (neuron0x2013570()*0.282679);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20290b0() {
   return (neuron0x20139f0()*-5.91209);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20290f0() {
   return (neuron0x2014000()*0.18953);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029130() {
   return (neuron0x20143f0()*0.533168);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029170() {
   return (neuron0x2014870()*0.22395);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20291b0() {
   return (neuron0x2014cf0()*14.4999);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20291f0() {
   return (neuron0x2015170()*0.996367);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029230() {
   return (neuron0x2015680()*-0.118445);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029270() {
   return (neuron0x2013df0()*0.978987);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20292b0() {
   return (neuron0x2015f90()*0.75989);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20292f0() {
   return (neuron0x2016410()*0.800366);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028d80() {
   return (neuron0x2016ce0()*0.399196);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2028dc0() {
   return (neuron0x2016fb0()*-6.1556);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029440() {
   return (neuron0x2017430()*0.229914);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029480() {
   return (neuron0x20178b0()*1.0474);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20294c0() {
   return (neuron0x2017d30()*0.551919);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029500() {
   return (neuron0x20181b0()*-0.775321);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029540() {
   return (neuron0x2018630()*1.37997);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029580() {
   return (neuron0x2018ab0()*-2.5641);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20295c0() {
   return (neuron0x2018f30()*0.34982);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029940() {
   return (neuron0x2011f70()*-0.0158171);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029980() {
   return (neuron0x20122e0()*0.175824);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20299c0() {
   return (neuron0x2012760()*-0.885671);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029a00() {
   return (neuron0x2012be0()*-0.31535);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029a40() {
   return (neuron0x20130f0()*-0.340471);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029a80() {
   return (neuron0x2013570()*0.0138022);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029ac0() {
   return (neuron0x20139f0()*0.0972417);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029b00() {
   return (neuron0x2014000()*0.148232);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029b40() {
   return (neuron0x20143f0()*-1.12414);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029b80() {
   return (neuron0x2014870()*-0.385792);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029bc0() {
   return (neuron0x2014cf0()*-0.555496);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029c00() {
   return (neuron0x2015170()*-0.44125);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029c40() {
   return (neuron0x2015680()*-0.442049);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029c80() {
   return (neuron0x2013df0()*0.327928);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029cc0() {
   return (neuron0x2015f90()*0.352432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029d00() {
   return (neuron0x2016410()*-0.250305);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029790() {
   return (neuron0x2016ce0()*-0.0942097);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x20297d0() {
   return (neuron0x2016fb0()*0.674634);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029e50() {
   return (neuron0x2017430()*0.0186497);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029e90() {
   return (neuron0x20178b0()*0.203711);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029ed0() {
   return (neuron0x2017d30()*-0.442338);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029f10() {
   return (neuron0x20181b0()*-0.987655);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029f50() {
   return (neuron0x2018630()*-0.220084);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029f90() {
   return (neuron0x2018ab0()*0.154589);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2029fd0() {
   return (neuron0x2018f30()*-0.536169);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a350() {
   return (neuron0x2011f70()*-0.773914);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a390() {
   return (neuron0x20122e0()*-0.315869);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a3d0() {
   return (neuron0x2012760()*-1.5185);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a410() {
   return (neuron0x2012be0()*-1.84765);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a450() {
   return (neuron0x20130f0()*-1.98866);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a490() {
   return (neuron0x2013570()*1.53977);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a4d0() {
   return (neuron0x20139f0()*8.67969);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a510() {
   return (neuron0x2014000()*-0.563242);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a550() {
   return (neuron0x20143f0()*-0.219424);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a590() {
   return (neuron0x2014870()*0.575425);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a5d0() {
   return (neuron0x2014cf0()*-6.99933);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a610() {
   return (neuron0x2015170()*-0.773167);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a650() {
   return (neuron0x2015680()*3.04228);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a690() {
   return (neuron0x2013df0()*2.13074);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a6d0() {
   return (neuron0x2015f90()*2.08151);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a710() {
   return (neuron0x2016410()*1.83619);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a1a0() {
   return (neuron0x2016ce0()*1.32456);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a1e0() {
   return (neuron0x2016fb0()*4.47464);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a860() {
   return (neuron0x2017430()*1.02262);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a8a0() {
   return (neuron0x20178b0()*1.26483);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a8e0() {
   return (neuron0x2017d30()*0.640781);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a920() {
   return (neuron0x20181b0()*-2.0891);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a960() {
   return (neuron0x2018630()*-1.02694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a9a0() {
   return (neuron0x2018ab0()*2.17138);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202a9e0() {
   return (neuron0x2018f30()*-2.01372);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ad60() {
   return (neuron0x2011f70()*0.13271);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ada0() {
   return (neuron0x20122e0()*-0.837057);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ade0() {
   return (neuron0x2012760()*0.935406);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ae20() {
   return (neuron0x2012be0()*1.9121);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ae60() {
   return (neuron0x20130f0()*2.54502);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202aea0() {
   return (neuron0x2013570()*-0.263281);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202aee0() {
   return (neuron0x20139f0()*-1.50212);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202af20() {
   return (neuron0x2014000()*0.320836);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202af60() {
   return (neuron0x20143f0()*1.42249);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202afa0() {
   return (neuron0x2014870()*-0.635574);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202afe0() {
   return (neuron0x2014cf0()*1.77461);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b020() {
   return (neuron0x2015170()*0.567263);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b060() {
   return (neuron0x2015680()*-0.136649);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b0a0() {
   return (neuron0x2013df0()*-1.2723);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b0e0() {
   return (neuron0x2015f90()*-1.21066);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b120() {
   return (neuron0x2016410()*-0.831144);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202abb0() {
   return (neuron0x2016ce0()*-0.465013);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202abf0() {
   return (neuron0x2016fb0()*-0.601703);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b270() {
   return (neuron0x2017430()*-0.705396);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b2b0() {
   return (neuron0x20178b0()*-0.355994);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b2f0() {
   return (neuron0x2017d30()*-0.37588);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b330() {
   return (neuron0x20181b0()*1.07186);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b370() {
   return (neuron0x2018630()*0.171145);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b3b0() {
   return (neuron0x2018ab0()*0.117364);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b3f0() {
   return (neuron0x2018f30()*1.63804);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b770() {
   return (neuron0x2011f70()*0.0317495);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b7b0() {
   return (neuron0x20122e0()*-0.177831);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b7f0() {
   return (neuron0x2012760()*2.18152);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b830() {
   return (neuron0x2012be0()*-0.737668);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b870() {
   return (neuron0x20130f0()*-0.109633);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b8b0() {
   return (neuron0x2013570()*1.04659);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b8f0() {
   return (neuron0x20139f0()*2.13877);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b930() {
   return (neuron0x2014000()*-0.639329);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b970() {
   return (neuron0x20143f0()*-0.132645);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b9b0() {
   return (neuron0x2014870()*0.446671);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b9f0() {
   return (neuron0x2014cf0()*-3.47793);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ba30() {
   return (neuron0x2015170()*-1.08412);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ba70() {
   return (neuron0x2015680()*-1.39632);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bab0() {
   return (neuron0x2013df0()*-0.227902);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202baf0() {
   return (neuron0x2015f90()*-0.362928);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bb30() {
   return (neuron0x2016410()*-0.0199041);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b5c0() {
   return (neuron0x2016ce0()*0.186223);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202b600() {
   return (neuron0x2016fb0()*1.28357);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bc80() {
   return (neuron0x2017430()*-0.0377818);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bcc0() {
   return (neuron0x20178b0()*-0.00236432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bd00() {
   return (neuron0x2017d30()*-0.175607);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bd40() {
   return (neuron0x20181b0()*0.16737);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bd80() {
   return (neuron0x2018630()*-0.678607);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bdc0() {
   return (neuron0x2018ab0()*0.529412);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202be00() {
   return (neuron0x2018f30()*-0.654286);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c180() {
   return (neuron0x2011f70()*-0.0163442);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c1c0() {
   return (neuron0x20122e0()*0.17257);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c200() {
   return (neuron0x2012760()*0.303497);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c240() {
   return (neuron0x2012be0()*-0.860461);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c280() {
   return (neuron0x20130f0()*-0.426634);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c2c0() {
   return (neuron0x2013570()*0.913001);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c300() {
   return (neuron0x20139f0()*2.06243);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c340() {
   return (neuron0x2014000()*0.0590942);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c380() {
   return (neuron0x20143f0()*-0.415747);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c3c0() {
   return (neuron0x2014870()*0.343425);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c400() {
   return (neuron0x2014cf0()*0.644513);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c440() {
   return (neuron0x2015170()*0.411699);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c480() {
   return (neuron0x2015680()*-0.20847);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c4c0() {
   return (neuron0x2013df0()*0.882935);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c500() {
   return (neuron0x2015f90()*0.384095);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c540() {
   return (neuron0x2016410()*0.529476);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202bfd0() {
   return (neuron0x2016ce0()*0.383391);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c010() {
   return (neuron0x2016fb0()*1.54259);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c690() {
   return (neuron0x2017430()*0.875689);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c6d0() {
   return (neuron0x20178b0()*0.219443);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c710() {
   return (neuron0x2017d30()*0.0401641);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c750() {
   return (neuron0x20181b0()*0.157294);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c790() {
   return (neuron0x2018630()*-0.110992);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c7d0() {
   return (neuron0x2018ab0()*0.0982512);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202c810() {
   return (neuron0x2018f30()*0.0484571);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ca70() {
   return (neuron0x201ae40()*7.15107);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cab0() {
   return (neuron0x2015c10()*-3.93643);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202caf0() {
   return (neuron0x201b9b0()*-0.674463);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cb30() {
   return (neuron0x201c4d0()*-2.34954);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cb70() {
   return (neuron0x201cee0()*2.13993);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cbb0() {
   return (neuron0x201d8f0()*1.53551);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cbf0() {
   return (neuron0x201b4e0()*9.43077);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cc30() {
   return (neuron0x201f520()*6.99307);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cc70() {
   return (neuron0x201ff30()*3.2663);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ccb0() {
   return (neuron0x2020940()*3.09422);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ccf0() {
   return (neuron0x2021350()*5.77018);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cd30() {
   return (neuron0x2021d60()*1.6225);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cd70() {
   return (neuron0x2022770()*-4.4868);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cdb0() {
   return (neuron0x2023180()*5.06895);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cdf0() {
   return (neuron0x2023b90()*2.68966);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202ce30() {
   return (neuron0x20245a0()*8.31082);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011e40() {
   return (neuron0x201ebc0()*-7.51916);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x2011e80() {
   return (neuron0x2027810()*0.465876);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cf80() {
   return (neuron0x20281e0()*-5.75787);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202cfc0() {
   return (neuron0x2028bf0()*12.5728);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202d000() {
   return (neuron0x2029600()*-1.57645);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202d040() {
   return (neuron0x202a010()*5.33045);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202d080() {
   return (neuron0x202aa20()*-6.16803);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202d0c0() {
   return (neuron0x202b430()*-6.28421);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1down::synapse0x202d100() {
   return (neuron0x202be40()*-6.32742);
}

