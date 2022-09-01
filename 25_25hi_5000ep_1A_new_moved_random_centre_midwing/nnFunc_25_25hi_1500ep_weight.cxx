#include "25_25hi_5000ep_1A_new_moved_random_centre_midwing/nnFunc_25_25hi_1500ep_weight.h"
#include <cmath>

double nnFunc_25_25hi_1500ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2044be0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x2044be0();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2029190() {
   return input0;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20294d0() {
   return input1;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2029810() {
   return input2;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2029b50() {
   return input3;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2029e90() {
   return input4;
}

double nnFunc_25_25hi_1500ep_weight::input0x202a300() {
   double input = -5.2168;
   input += synapse0x1f36630();
   input += synapse0x2018600();
   input += synapse0x202a5b0();
   input += synapse0x202a5f0();
   input += synapse0x202a630();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202a300() {
   double input = input0x202a300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202a670() {
   double input = 0.671471;
   input += synapse0x202a9b0();
   input += synapse0x202a9f0();
   input += synapse0x202aa30();
   input += synapse0x202aa70();
   input += synapse0x202aab0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202a670() {
   double input = input0x202a670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202aaf0() {
   double input = 0.716443;
   input += synapse0x202ae30();
   input += synapse0x202ae70();
   input += synapse0x202aeb0();
   input += synapse0x202aef0();
   input += synapse0x202af30();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202aaf0() {
   double input = input0x202aaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202af70() {
   double input = 0.156598;
   input += synapse0x202b2b0();
   input += synapse0x202b2f0();
   input += synapse0x1f28820();
   input += synapse0x1f28860();
   input += synapse0x202b440();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202af70() {
   double input = input0x202af70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202b480() {
   double input = 0.446099;
   input += synapse0x202b7c0();
   input += synapse0x202b800();
   input += synapse0x202b840();
   input += synapse0x202b880();
   input += synapse0x202b8c0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202b480() {
   double input = input0x202b480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202b900() {
   double input = -0.949703;
   input += synapse0x202bc40();
   input += synapse0x202bc80();
   input += synapse0x202bcc0();
   input += synapse0x202bd00();
   input += synapse0x202bd40();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202b900() {
   double input = input0x202b900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202bd80() {
   double input = -0.97832;
   input += synapse0x202c0c0();
   input += synapse0x202c100();
   input += synapse0x202c140();
   input += synapse0x202b330();
   input += synapse0x202b370();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202bd80() {
   double input = input0x202bd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202c390() {
   double input = -0.730924;
   input += synapse0x202c640();
   input += synapse0x202c680();
   input += synapse0x202c6c0();
   input += synapse0x202c700();
   input += synapse0x202c740();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202c390() {
   double input = input0x202c390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202c780() {
   double input = -0.193129;
   input += synapse0x202cac0();
   input += synapse0x202cb00();
   input += synapse0x202cb40();
   input += synapse0x202cb80();
   input += synapse0x202cbc0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202c780() {
   double input = input0x202c780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202cc00() {
   double input = 3.41228;
   input += synapse0x202cf40();
   input += synapse0x202cf80();
   input += synapse0x202cfc0();
   input += synapse0x202d000();
   input += synapse0x202d040();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202cc00() {
   double input = input0x202cc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202d080() {
   double input = 7.12129;
   input += synapse0x202d3c0();
   input += synapse0x202d400();
   input += synapse0x202d440();
   input += synapse0x202d480();
   input += synapse0x202d4c0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202d080() {
   double input = input0x202d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202d500() {
   double input = -0.827728;
   input += synapse0x1f28670();
   input += synapse0x1f286b0();
   input += synapse0x202d950();
   input += synapse0x202d990();
   input += synapse0x202d9d0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202d500() {
   double input = input0x202d500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202da10() {
   double input = 2.86793;
   input += synapse0x202dd50();
   input += synapse0x202dd90();
   input += synapse0x202ddd0();
   input += synapse0x202de10();
   input += synapse0x202de50();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202da10() {
   double input = input0x202da10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202c180() {
   double input = -0.295419;
   input += synapse0x1f28e40();
   input += synapse0x202c310();
   input += synapse0x202c350();
   input += synapse0x202e2a0();
   input += synapse0x202e2e0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202c180() {
   double input = input0x202c180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202e320() {
   double input = 0.69131;
   input += synapse0x202e660();
   input += synapse0x202e6a0();
   input += synapse0x202e6e0();
   input += synapse0x202e720();
   input += synapse0x202e760();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202e320() {
   double input = input0x202e320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202e7a0() {
   double input = -0.489912;
   input += synapse0x202eae0();
   input += synapse0x20293b0();
   input += synapse0x20293f0();
   input += synapse0x20296f0();
   input += synapse0x2029730();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202e7a0() {
   double input = input0x202e7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202f070() {
   double input = 1.12763;
   input += synapse0x202f200();
   input += synapse0x202f240();
   input += synapse0x202f280();
   input += synapse0x202f2c0();
   input += synapse0x202f300();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202f070() {
   double input = input0x202f070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202f340() {
   double input = -1.36695;
   input += synapse0x202f680();
   input += synapse0x202f6c0();
   input += synapse0x202f700();
   input += synapse0x202f740();
   input += synapse0x202f780();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202f340() {
   double input = input0x202f340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202f7c0() {
   double input = 1.25418;
   input += synapse0x202fb00();
   input += synapse0x202fb40();
   input += synapse0x202fb80();
   input += synapse0x202fbc0();
   input += synapse0x202fc00();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202f7c0() {
   double input = input0x202f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202fc40() {
   double input = -0.431067;
   input += synapse0x202ff80();
   input += synapse0x202ffc0();
   input += synapse0x2030000();
   input += synapse0x2030040();
   input += synapse0x2030080();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202fc40() {
   double input = input0x202fc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20300c0() {
   double input = -5.4634;
   input += synapse0x2030400();
   input += synapse0x2030440();
   input += synapse0x2030480();
   input += synapse0x20304c0();
   input += synapse0x2030500();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20300c0() {
   double input = input0x20300c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2030540() {
   double input = 0.000331985;
   input += synapse0x2030880();
   input += synapse0x20308c0();
   input += synapse0x2030900();
   input += synapse0x2030940();
   input += synapse0x2030980();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2030540() {
   double input = input0x2030540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20309c0() {
   double input = 0.614334;
   input += synapse0x2030d00();
   input += synapse0x2030d40();
   input += synapse0x2030d80();
   input += synapse0x2030dc0();
   input += synapse0x2030e00();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20309c0() {
   double input = input0x20309c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2030e40() {
   double input = -0.592803;
   input += synapse0x2031180();
   input += synapse0x20311c0();
   input += synapse0x2031200();
   input += synapse0x2031240();
   input += synapse0x2031280();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2030e40() {
   double input = input0x2030e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20312c0() {
   double input = 0.162294;
   input += synapse0x2031600();
   input += synapse0x2031640();
   input += synapse0x2031680();
   input += synapse0x20316c0();
   input += synapse0x2031700();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20312c0() {
   double input = input0x20312c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20331d0() {
   double input = 0.413695;
   input += synapse0x202b220();
   input += synapse0x202b260();
   input += synapse0x202b730();
   input += synapse0x202b770();
   input += synapse0x202bbb0();
   input += synapse0x202bbf0();
   input += synapse0x202c030();
   input += synapse0x202c070();
   input += synapse0x202c5b0();
   input += synapse0x202c5f0();
   input += synapse0x202ca30();
   input += synapse0x202ca70();
   input += synapse0x202ceb0();
   input += synapse0x202cef0();
   input += synapse0x202d330();
   input += synapse0x202d370();
   input += synapse0x202d7b0();
   input += synapse0x202d7f0();
   input += synapse0x202dcc0();
   input += synapse0x202dd00();
   input += synapse0x202e5d0();
   input += synapse0x202e610();
   input += synapse0x202ea50();
   input += synapse0x202ea90();
   input += synapse0x202a0b0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20331d0() {
   double input = input0x20331d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x202dfa0() {
   double input = -0.306852;
   input += synapse0x202e130();
   input += synapse0x202e170();
   input += synapse0x202e1b0();
   input += synapse0x202e1f0();
   input += synapse0x202e230();
   input += synapse0x202a0f0();
   input += synapse0x2030370();
   input += synapse0x20303b0();
   input += synapse0x20307f0();
   input += synapse0x2030830();
   input += synapse0x2030c70();
   input += synapse0x2030cb0();
   input += synapse0x20310f0();
   input += synapse0x2031130();
   input += synapse0x2031570();
   input += synapse0x20315b0();
   input += synapse0x202a520();
   input += synapse0x202a560();
   input += synapse0x202f5f0();
   input += synapse0x202f630();
   input += synapse0x1f36700();
   input += synapse0x1f36740();
   input += synapse0x2033c80();
   input += synapse0x2033cc0();
   input += synapse0x2033d00();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x202dfa0() {
   double input = input0x202dfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2033d40() {
   double input = -0.46214;
   input += synapse0x202d840();
   input += synapse0x202d880();
   input += synapse0x202d8c0();
   input += synapse0x202d900();
   input += synapse0x2034290();
   input += synapse0x20342d0();
   input += synapse0x2034310();
   input += synapse0x2034350();
   input += synapse0x2034390();
   input += synapse0x20343d0();
   input += synapse0x2034410();
   input += synapse0x2034450();
   input += synapse0x2034490();
   input += synapse0x20344d0();
   input += synapse0x2034510();
   input += synapse0x2034550();
   input += synapse0x2033ed0();
   input += synapse0x2033f10();
   input += synapse0x20346a0();
   input += synapse0x20346e0();
   input += synapse0x2034720();
   input += synapse0x2034760();
   input += synapse0x20347a0();
   input += synapse0x20347e0();
   input += synapse0x2034820();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2033d40() {
   double input = input0x2033d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2034860() {
   double input = 0.429318;
   input += synapse0x2034ba0();
   input += synapse0x2034be0();
   input += synapse0x2034c20();
   input += synapse0x2034c60();
   input += synapse0x2034ca0();
   input += synapse0x2034ce0();
   input += synapse0x2034d20();
   input += synapse0x2034d60();
   input += synapse0x2034da0();
   input += synapse0x2034de0();
   input += synapse0x2034e20();
   input += synapse0x2034e60();
   input += synapse0x2034ea0();
   input += synapse0x2034ee0();
   input += synapse0x2034f20();
   input += synapse0x2034f60();
   input += synapse0x20349f0();
   input += synapse0x2034a30();
   input += synapse0x20350b0();
   input += synapse0x20350f0();
   input += synapse0x2035130();
   input += synapse0x2035170();
   input += synapse0x20351b0();
   input += synapse0x20351f0();
   input += synapse0x2035230();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2034860() {
   double input = input0x2034860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2035270() {
   double input = 0.114573;
   input += synapse0x20355b0();
   input += synapse0x20355f0();
   input += synapse0x2035630();
   input += synapse0x2035670();
   input += synapse0x20356b0();
   input += synapse0x20356f0();
   input += synapse0x2035730();
   input += synapse0x2035770();
   input += synapse0x20357b0();
   input += synapse0x20357f0();
   input += synapse0x2035830();
   input += synapse0x2035870();
   input += synapse0x20358b0();
   input += synapse0x20358f0();
   input += synapse0x2035930();
   input += synapse0x2035970();
   input += synapse0x2035400();
   input += synapse0x2035440();
   input += synapse0x2035ac0();
   input += synapse0x2035b00();
   input += synapse0x2035b40();
   input += synapse0x2035b80();
   input += synapse0x2035bc0();
   input += synapse0x2035c00();
   input += synapse0x2035c40();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2035270() {
   double input = input0x2035270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2035c80() {
   double input = -0.231382;
   input += synapse0x2035fc0();
   input += synapse0x2036000();
   input += synapse0x2036040();
   input += synapse0x2036080();
   input += synapse0x20360c0();
   input += synapse0x2036100();
   input += synapse0x2036140();
   input += synapse0x2033360();
   input += synapse0x20333a0();
   input += synapse0x20333e0();
   input += synapse0x2033420();
   input += synapse0x2033460();
   input += synapse0x20334a0();
   input += synapse0x20334e0();
   input += synapse0x2033520();
   input += synapse0x2033560();
   input += synapse0x2035e10();
   input += synapse0x2035e50();
   input += synapse0x20336b0();
   input += synapse0x20336f0();
   input += synapse0x2033730();
   input += synapse0x2033770();
   input += synapse0x20337b0();
   input += synapse0x20337f0();
   input += synapse0x2033830();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2035c80() {
   double input = input0x2035c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2033870() {
   double input = -0.0457684;
   input += synapse0x2033b20();
   input += synapse0x2037220();
   input += synapse0x2037260();
   input += synapse0x20372a0();
   input += synapse0x20372e0();
   input += synapse0x2037320();
   input += synapse0x2037360();
   input += synapse0x20373a0();
   input += synapse0x20373e0();
   input += synapse0x2037420();
   input += synapse0x2037460();
   input += synapse0x20374a0();
   input += synapse0x20374e0();
   input += synapse0x2037520();
   input += synapse0x2037560();
   input += synapse0x20375a0();
   input += synapse0x2033a00();
   input += synapse0x2033a40();
   input += synapse0x20376f0();
   input += synapse0x2037730();
   input += synapse0x2037770();
   input += synapse0x20377b0();
   input += synapse0x20377f0();
   input += synapse0x2037830();
   input += synapse0x2037870();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2033870() {
   double input = input0x2033870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20378b0() {
   double input = -0.525232;
   input += synapse0x2037bf0();
   input += synapse0x2037c30();
   input += synapse0x2037c70();
   input += synapse0x2037cb0();
   input += synapse0x2037cf0();
   input += synapse0x2037d30();
   input += synapse0x2037d70();
   input += synapse0x2037db0();
   input += synapse0x2037df0();
   input += synapse0x2037e30();
   input += synapse0x2037e70();
   input += synapse0x2037eb0();
   input += synapse0x2037ef0();
   input += synapse0x2037f30();
   input += synapse0x2037f70();
   input += synapse0x2037fb0();
   input += synapse0x2037a40();
   input += synapse0x2037a80();
   input += synapse0x2038100();
   input += synapse0x2038140();
   input += synapse0x2038180();
   input += synapse0x20381c0();
   input += synapse0x2038200();
   input += synapse0x2038240();
   input += synapse0x2038280();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20378b0() {
   double input = input0x20378b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20382c0() {
   double input = 0.194252;
   input += synapse0x2038600();
   input += synapse0x2038640();
   input += synapse0x2038680();
   input += synapse0x20386c0();
   input += synapse0x2038700();
   input += synapse0x2038740();
   input += synapse0x2038780();
   input += synapse0x20387c0();
   input += synapse0x2038800();
   input += synapse0x2038840();
   input += synapse0x2038880();
   input += synapse0x20388c0();
   input += synapse0x2038900();
   input += synapse0x2038940();
   input += synapse0x2038980();
   input += synapse0x20389c0();
   input += synapse0x2038450();
   input += synapse0x2038490();
   input += synapse0x2038b10();
   input += synapse0x2038b50();
   input += synapse0x2038b90();
   input += synapse0x2038bd0();
   input += synapse0x2038c10();
   input += synapse0x2038c50();
   input += synapse0x2038c90();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20382c0() {
   double input = input0x20382c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2038cd0() {
   double input = 0.208095;
   input += synapse0x2039010();
   input += synapse0x2039050();
   input += synapse0x2039090();
   input += synapse0x20390d0();
   input += synapse0x2039110();
   input += synapse0x2039150();
   input += synapse0x2039190();
   input += synapse0x20391d0();
   input += synapse0x2039210();
   input += synapse0x2039250();
   input += synapse0x2039290();
   input += synapse0x20392d0();
   input += synapse0x2039310();
   input += synapse0x2039350();
   input += synapse0x2039390();
   input += synapse0x20393d0();
   input += synapse0x2038e60();
   input += synapse0x2038ea0();
   input += synapse0x2039520();
   input += synapse0x2039560();
   input += synapse0x20395a0();
   input += synapse0x20395e0();
   input += synapse0x2039620();
   input += synapse0x2039660();
   input += synapse0x20396a0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2038cd0() {
   double input = input0x2038cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20396e0() {
   double input = -0.214046;
   input += synapse0x2039a20();
   input += synapse0x2039a60();
   input += synapse0x2039aa0();
   input += synapse0x2039ae0();
   input += synapse0x2039b20();
   input += synapse0x2039b60();
   input += synapse0x2039ba0();
   input += synapse0x2039be0();
   input += synapse0x2039c20();
   input += synapse0x2039c60();
   input += synapse0x2039ca0();
   input += synapse0x2039ce0();
   input += synapse0x2039d20();
   input += synapse0x2039d60();
   input += synapse0x2039da0();
   input += synapse0x2039de0();
   input += synapse0x2039870();
   input += synapse0x20398b0();
   input += synapse0x2039f30();
   input += synapse0x2039f70();
   input += synapse0x2039fb0();
   input += synapse0x2039ff0();
   input += synapse0x203a030();
   input += synapse0x203a070();
   input += synapse0x203a0b0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20396e0() {
   double input = input0x20396e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x203a0f0() {
   double input = 0.423043;
   input += synapse0x203a430();
   input += synapse0x203a470();
   input += synapse0x203a4b0();
   input += synapse0x203a4f0();
   input += synapse0x203a530();
   input += synapse0x203a570();
   input += synapse0x203a5b0();
   input += synapse0x203a5f0();
   input += synapse0x203a630();
   input += synapse0x203a670();
   input += synapse0x203a6b0();
   input += synapse0x203a6f0();
   input += synapse0x203a730();
   input += synapse0x203a770();
   input += synapse0x203a7b0();
   input += synapse0x203a7f0();
   input += synapse0x203a280();
   input += synapse0x203a2c0();
   input += synapse0x203a940();
   input += synapse0x203a980();
   input += synapse0x203a9c0();
   input += synapse0x203aa00();
   input += synapse0x203aa40();
   input += synapse0x203aa80();
   input += synapse0x203aac0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x203a0f0() {
   double input = input0x203a0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x203ab00() {
   double input = 0.0810789;
   input += synapse0x203ae40();
   input += synapse0x203ae80();
   input += synapse0x203aec0();
   input += synapse0x203af00();
   input += synapse0x203af40();
   input += synapse0x203af80();
   input += synapse0x203afc0();
   input += synapse0x203b000();
   input += synapse0x203b040();
   input += synapse0x203b080();
   input += synapse0x203b0c0();
   input += synapse0x203b100();
   input += synapse0x203b140();
   input += synapse0x203b180();
   input += synapse0x203b1c0();
   input += synapse0x203b200();
   input += synapse0x203ac90();
   input += synapse0x203acd0();
   input += synapse0x203b350();
   input += synapse0x203b390();
   input += synapse0x203b3d0();
   input += synapse0x203b410();
   input += synapse0x203b450();
   input += synapse0x203b490();
   input += synapse0x203b4d0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x203ab00() {
   double input = input0x203ab00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x203b510() {
   double input = -0.0371588;
   input += synapse0x203b850();
   input += synapse0x203b890();
   input += synapse0x203b8d0();
   input += synapse0x203b910();
   input += synapse0x203b950();
   input += synapse0x203b990();
   input += synapse0x203b9d0();
   input += synapse0x203ba10();
   input += synapse0x203ba50();
   input += synapse0x203ba90();
   input += synapse0x203bad0();
   input += synapse0x203bb10();
   input += synapse0x203bb50();
   input += synapse0x203bb90();
   input += synapse0x203bbd0();
   input += synapse0x203bc10();
   input += synapse0x203b6a0();
   input += synapse0x203b6e0();
   input += synapse0x203bd60();
   input += synapse0x203bda0();
   input += synapse0x203bde0();
   input += synapse0x203be20();
   input += synapse0x203be60();
   input += synapse0x203bea0();
   input += synapse0x203bee0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x203b510() {
   double input = input0x203b510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x203bf20() {
   double input = 0.324484;
   input += synapse0x203c260();
   input += synapse0x203c2a0();
   input += synapse0x203c2e0();
   input += synapse0x203c320();
   input += synapse0x203c360();
   input += synapse0x203c3a0();
   input += synapse0x203c3e0();
   input += synapse0x203c420();
   input += synapse0x203c460();
   input += synapse0x203c4a0();
   input += synapse0x203c4e0();
   input += synapse0x203c520();
   input += synapse0x203c560();
   input += synapse0x203c5a0();
   input += synapse0x203c5e0();
   input += synapse0x203c620();
   input += synapse0x203c0b0();
   input += synapse0x203c0f0();
   input += synapse0x203c770();
   input += synapse0x203c7b0();
   input += synapse0x203c7f0();
   input += synapse0x203c830();
   input += synapse0x203c870();
   input += synapse0x203c8b0();
   input += synapse0x203c8f0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x203bf20() {
   double input = input0x203bf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x203c930() {
   double input = -0.428925;
   input += synapse0x203cc70();
   input += synapse0x202a490();
   input += synapse0x202a4d0();
   input += synapse0x202a890();
   input += synapse0x202a8d0();
   input += synapse0x202ad10();
   input += synapse0x202ad50();
   input += synapse0x202b190();
   input += synapse0x202b1d0();
   input += synapse0x202b6a0();
   input += synapse0x202b6e0();
   input += synapse0x202bb20();
   input += synapse0x202bb60();
   input += synapse0x202bfa0();
   input += synapse0x202bfe0();
   input += synapse0x202c520();
   input += synapse0x202c560();
   input += synapse0x202c9a0();
   input += synapse0x202c9e0();
   input += synapse0x202ce20();
   input += synapse0x202ce60();
   input += synapse0x202d2a0();
   input += synapse0x202d2e0();
   input += synapse0x202d720();
   input += synapse0x202d760();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x203c930() {
   double input = input0x203c930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2036f50() {
   double input = -0.325723;
   input += synapse0x20370e0();
   input += synapse0x2037120();
   input += synapse0x202e9c0();
   input += synapse0x202ea00();
   input += synapse0x203cac0();
   input += synapse0x203cb00();
   input += synapse0x2029d70();
   input += synapse0x2029db0();
   input += synapse0x202f560();
   input += synapse0x202f5a0();
   input += synapse0x202f9e0();
   input += synapse0x202fa20();
   input += synapse0x202fe60();
   input += synapse0x202fea0();
   input += synapse0x20302e0();
   input += synapse0x2030320();
   input += synapse0x2030760();
   input += synapse0x20307a0();
   input += synapse0x2030be0();
   input += synapse0x2030c20();
   input += synapse0x2031060();
   input += synapse0x20310a0();
   input += synapse0x20314e0();
   input += synapse0x2031520();
   input += synapse0x202dc30();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2036f50() {
   double input = input0x2036f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x203fba0() {
   double input = -0.0761217;
   input += synapse0x202dc70();
   input += synapse0x203fee0();
   input += synapse0x203ff20();
   input += synapse0x203ff60();
   input += synapse0x203ffa0();
   input += synapse0x203ffe0();
   input += synapse0x2040020();
   input += synapse0x2040060();
   input += synapse0x20400a0();
   input += synapse0x20400e0();
   input += synapse0x2040120();
   input += synapse0x2040160();
   input += synapse0x20401a0();
   input += synapse0x20401e0();
   input += synapse0x2040220();
   input += synapse0x2040260();
   input += synapse0x203fd30();
   input += synapse0x203fd70();
   input += synapse0x20403b0();
   input += synapse0x20403f0();
   input += synapse0x2040430();
   input += synapse0x2040470();
   input += synapse0x20404b0();
   input += synapse0x20404f0();
   input += synapse0x2040530();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x203fba0() {
   double input = input0x203fba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2040570() {
   double input = -0.324069;
   input += synapse0x20408b0();
   input += synapse0x20408f0();
   input += synapse0x2040930();
   input += synapse0x2040970();
   input += synapse0x20409b0();
   input += synapse0x20409f0();
   input += synapse0x2040a30();
   input += synapse0x2040a70();
   input += synapse0x2040ab0();
   input += synapse0x2040af0();
   input += synapse0x2040b30();
   input += synapse0x2040b70();
   input += synapse0x2040bb0();
   input += synapse0x2040bf0();
   input += synapse0x2040c30();
   input += synapse0x2040c70();
   input += synapse0x2040700();
   input += synapse0x2040740();
   input += synapse0x2040dc0();
   input += synapse0x2040e00();
   input += synapse0x2040e40();
   input += synapse0x2040e80();
   input += synapse0x2040ec0();
   input += synapse0x2040f00();
   input += synapse0x2040f40();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2040570() {
   double input = input0x2040570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2040f80() {
   double input = -0.143613;
   input += synapse0x20412c0();
   input += synapse0x2041300();
   input += synapse0x2041340();
   input += synapse0x2041380();
   input += synapse0x20413c0();
   input += synapse0x2041400();
   input += synapse0x2041440();
   input += synapse0x2041480();
   input += synapse0x20414c0();
   input += synapse0x2041500();
   input += synapse0x2041540();
   input += synapse0x2041580();
   input += synapse0x20415c0();
   input += synapse0x2041600();
   input += synapse0x2041640();
   input += synapse0x2041680();
   input += synapse0x2041110();
   input += synapse0x2041150();
   input += synapse0x20417d0();
   input += synapse0x2041810();
   input += synapse0x2041850();
   input += synapse0x2041890();
   input += synapse0x20418d0();
   input += synapse0x2041910();
   input += synapse0x2041950();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2040f80() {
   double input = input0x2040f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2041990() {
   double input = -0.104694;
   input += synapse0x2041cd0();
   input += synapse0x2041d10();
   input += synapse0x2041d50();
   input += synapse0x2041d90();
   input += synapse0x2041dd0();
   input += synapse0x2041e10();
   input += synapse0x2041e50();
   input += synapse0x2041e90();
   input += synapse0x2041ed0();
   input += synapse0x2041f10();
   input += synapse0x2041f50();
   input += synapse0x2041f90();
   input += synapse0x2041fd0();
   input += synapse0x2042010();
   input += synapse0x2042050();
   input += synapse0x2042090();
   input += synapse0x2041b20();
   input += synapse0x2041b60();
   input += synapse0x20421e0();
   input += synapse0x2042220();
   input += synapse0x2042260();
   input += synapse0x20422a0();
   input += synapse0x20422e0();
   input += synapse0x2042320();
   input += synapse0x2042360();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2041990() {
   double input = input0x2041990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20423a0() {
   double input = 0.338399;
   input += synapse0x20426e0();
   input += synapse0x2042720();
   input += synapse0x2042760();
   input += synapse0x20427a0();
   input += synapse0x20427e0();
   input += synapse0x2042820();
   input += synapse0x2042860();
   input += synapse0x20428a0();
   input += synapse0x20428e0();
   input += synapse0x2042920();
   input += synapse0x2042960();
   input += synapse0x20429a0();
   input += synapse0x20429e0();
   input += synapse0x2042a20();
   input += synapse0x2042a60();
   input += synapse0x2042aa0();
   input += synapse0x2042530();
   input += synapse0x2042570();
   input += synapse0x2042bf0();
   input += synapse0x2042c30();
   input += synapse0x2042c70();
   input += synapse0x2042cb0();
   input += synapse0x2042cf0();
   input += synapse0x2042d30();
   input += synapse0x2042d70();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20423a0() {
   double input = input0x20423a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2042db0() {
   double input = 0.433573;
   input += synapse0x20430f0();
   input += synapse0x2043130();
   input += synapse0x2043170();
   input += synapse0x20431b0();
   input += synapse0x20431f0();
   input += synapse0x2043230();
   input += synapse0x2043270();
   input += synapse0x20432b0();
   input += synapse0x20432f0();
   input += synapse0x2043330();
   input += synapse0x2043370();
   input += synapse0x20433b0();
   input += synapse0x20433f0();
   input += synapse0x2043430();
   input += synapse0x2043470();
   input += synapse0x20434b0();
   input += synapse0x2042f40();
   input += synapse0x2042f80();
   input += synapse0x2043600();
   input += synapse0x2043640();
   input += synapse0x2043680();
   input += synapse0x20436c0();
   input += synapse0x2043700();
   input += synapse0x2043740();
   input += synapse0x2043780();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2042db0() {
   double input = input0x2042db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20437c0() {
   double input = -0.0692579;
   input += synapse0x2043b00();
   input += synapse0x2043b40();
   input += synapse0x2043b80();
   input += synapse0x2043bc0();
   input += synapse0x2043c00();
   input += synapse0x2043c40();
   input += synapse0x2043c80();
   input += synapse0x2043cc0();
   input += synapse0x2043d00();
   input += synapse0x2043d40();
   input += synapse0x2043d80();
   input += synapse0x2043dc0();
   input += synapse0x2043e00();
   input += synapse0x2043e40();
   input += synapse0x2043e80();
   input += synapse0x2043ec0();
   input += synapse0x2043950();
   input += synapse0x2043990();
   input += synapse0x2044010();
   input += synapse0x2044050();
   input += synapse0x2044090();
   input += synapse0x20440d0();
   input += synapse0x2044110();
   input += synapse0x2044150();
   input += synapse0x2044190();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20437c0() {
   double input = input0x20437c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x20441d0() {
   double input = -0.270416;
   input += synapse0x2044510();
   input += synapse0x2044550();
   input += synapse0x2044590();
   input += synapse0x20445d0();
   input += synapse0x2044610();
   input += synapse0x2044650();
   input += synapse0x2044690();
   input += synapse0x20446d0();
   input += synapse0x2044710();
   input += synapse0x2044750();
   input += synapse0x2044790();
   input += synapse0x20447d0();
   input += synapse0x2044810();
   input += synapse0x2044850();
   input += synapse0x2044890();
   input += synapse0x20448d0();
   input += synapse0x2044360();
   input += synapse0x20443a0();
   input += synapse0x2044a20();
   input += synapse0x2044a60();
   input += synapse0x2044aa0();
   input += synapse0x2044ae0();
   input += synapse0x2044b20();
   input += synapse0x2044b60();
   input += synapse0x2044ba0();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x20441d0() {
   double input = input0x20441d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep_weight::input0x2044be0() {
   double input = -0.605095;
   input += synapse0x2044e00();
   input += synapse0x2044e40();
   input += synapse0x2044e80();
   input += synapse0x2044ec0();
   input += synapse0x2044f00();
   input += synapse0x2044f40();
   input += synapse0x2044f80();
   input += synapse0x2044fc0();
   input += synapse0x2045000();
   input += synapse0x2045040();
   input += synapse0x2045080();
   input += synapse0x20450c0();
   input += synapse0x2045100();
   input += synapse0x2045140();
   input += synapse0x2045180();
   input += synapse0x20451c0();
   input += synapse0x202a1d0();
   input += synapse0x202a210();
   input += synapse0x2045310();
   input += synapse0x2045350();
   input += synapse0x2045390();
   input += synapse0x20453d0();
   input += synapse0x2045410();
   input += synapse0x2045450();
   input += synapse0x2045490();
   return input;
}

double nnFunc_25_25hi_1500ep_weight::neuron0x2044be0() {
   double input = input0x2044be0();
   return (input * 2.95571)+134.779;
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f36630() {
   return (neuron0x2029190()*-1.0898);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2018600() {
   return (neuron0x20294d0()*-0.0184015);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a5b0() {
   return (neuron0x2029810()*0.0769203);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a5f0() {
   return (neuron0x2029b50()*-0.678436);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a630() {
   return (neuron0x2029e90()*-2.66377);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a9b0() {
   return (neuron0x2029190()*-0.190808);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a9f0() {
   return (neuron0x20294d0()*0.308424);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202aa30() {
   return (neuron0x2029810()*-0.205748);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202aa70() {
   return (neuron0x2029b50()*0.358527);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202aab0() {
   return (neuron0x2029e90()*0.372734);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ae30() {
   return (neuron0x2029190()*0.459236);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ae70() {
   return (neuron0x20294d0()*-0.0768434);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202aeb0() {
   return (neuron0x2029810()*-0.104142);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202aef0() {
   return (neuron0x2029b50()*2.16656);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202af30() {
   return (neuron0x2029e90()*-0.724026);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b2b0() {
   return (neuron0x2029190()*-0.269908);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b2f0() {
   return (neuron0x20294d0()*0.0122073);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f28820() {
   return (neuron0x2029810()*-0.180747);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f28860() {
   return (neuron0x2029b50()*-0.0779387);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b440() {
   return (neuron0x2029e90()*-0.197865);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b7c0() {
   return (neuron0x2029190()*0.485909);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b800() {
   return (neuron0x20294d0()*-0.652175);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b840() {
   return (neuron0x2029810()*-1.17435);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b880() {
   return (neuron0x2029b50()*-0.832844);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b8c0() {
   return (neuron0x2029e90()*0.230846);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bc40() {
   return (neuron0x2029190()*-1.06585);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bc80() {
   return (neuron0x20294d0()*-0.0923807);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bcc0() {
   return (neuron0x2029810()*0.122016);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bd00() {
   return (neuron0x2029b50()*0.253638);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bd40() {
   return (neuron0x2029e90()*-1.83536);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c0c0() {
   return (neuron0x2029190()*-0.322497);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c100() {
   return (neuron0x20294d0()*-0.0224646);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c140() {
   return (neuron0x2029810()*-0.0585755);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b330() {
   return (neuron0x2029b50()*-1.13243);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b370() {
   return (neuron0x2029e90()*-1.18093);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c640() {
   return (neuron0x2029190()*1.09488);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c680() {
   return (neuron0x20294d0()*-0.368793);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c6c0() {
   return (neuron0x2029810()*-0.438081);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c700() {
   return (neuron0x2029b50()*2.65192);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c740() {
   return (neuron0x2029e90()*-0.759312);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cac0() {
   return (neuron0x2029190()*-1.02892);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cb00() {
   return (neuron0x20294d0()*0.42251);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cb40() {
   return (neuron0x2029810()*0.494575);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cb80() {
   return (neuron0x2029b50()*-0.163058);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cbc0() {
   return (neuron0x2029e90()*0.218505);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cf40() {
   return (neuron0x2029190()*-0.158382);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cf80() {
   return (neuron0x20294d0()*0.0441783);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cfc0() {
   return (neuron0x2029810()*0.0292041);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d000() {
   return (neuron0x2029b50()*3.65701);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d040() {
   return (neuron0x2029e90()*-1.76564);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d3c0() {
   return (neuron0x2029190()*2.00094);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d400() {
   return (neuron0x20294d0()*0.0757773);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d440() {
   return (neuron0x2029810()*-0.195737);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d480() {
   return (neuron0x2029b50()*0.146977);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d4c0() {
   return (neuron0x2029e90()*5.51795);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f28670() {
   return (neuron0x2029190()*1.31887);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f286b0() {
   return (neuron0x20294d0()*-0.269389);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d950() {
   return (neuron0x2029810()*-0.981459);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d990() {
   return (neuron0x2029b50()*-1.90351);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d9d0() {
   return (neuron0x2029e90()*-0.68288);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202dd50() {
   return (neuron0x2029190()*0.0220038);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202dd90() {
   return (neuron0x20294d0()*-0.00891386);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ddd0() {
   return (neuron0x2029810()*0.0125837);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202de10() {
   return (neuron0x2029b50()*-3.70537);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202de50() {
   return (neuron0x2029e90()*-0.883052);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f28e40() {
   return (neuron0x2029190()*0.0821053);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c310() {
   return (neuron0x20294d0()*0.279645);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c350() {
   return (neuron0x2029810()*-0.0564139);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e2a0() {
   return (neuron0x2029b50()*1.84845);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e2e0() {
   return (neuron0x2029e90()*0.348359);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e660() {
   return (neuron0x2029190()*0.661334);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e6a0() {
   return (neuron0x20294d0()*0.128949);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e6e0() {
   return (neuron0x2029810()*-0.0615562);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e720() {
   return (neuron0x2029b50()*-1.29905);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e760() {
   return (neuron0x2029e90()*0.963055);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202eae0() {
   return (neuron0x2029190()*1.53145);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20293b0() {
   return (neuron0x20294d0()*-0.233327);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20293f0() {
   return (neuron0x2029810()*-1.12414);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20296f0() {
   return (neuron0x2029b50()*-0.560429);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2029730() {
   return (neuron0x2029e90()*0.106487);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f200() {
   return (neuron0x2029190()*-1.42508);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f240() {
   return (neuron0x20294d0()*0.322698);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f280() {
   return (neuron0x2029810()*0.587722);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f2c0() {
   return (neuron0x2029b50()*-0.168306);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f300() {
   return (neuron0x2029e90()*0.170279);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f680() {
   return (neuron0x2029190()*-0.577253);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f6c0() {
   return (neuron0x20294d0()*-0.122874);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f700() {
   return (neuron0x2029810()*0.105845);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f740() {
   return (neuron0x2029b50()*-0.925573);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f780() {
   return (neuron0x2029e90()*-0.92495);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fb00() {
   return (neuron0x2029190()*-0.722778);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fb40() {
   return (neuron0x20294d0()*0.121493);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fb80() {
   return (neuron0x2029810()*0.238642);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fbc0() {
   return (neuron0x2029b50()*-0.491573);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fc00() {
   return (neuron0x2029e90()*0.842152);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ff80() {
   return (neuron0x2029190()*0.22002);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ffc0() {
   return (neuron0x20294d0()*0.0118576);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030000() {
   return (neuron0x2029810()*0.0697031);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030040() {
   return (neuron0x2029b50()*0.213103);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030080() {
   return (neuron0x2029e90()*-0.2802);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030400() {
   return (neuron0x2029190()*-1.25829);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030440() {
   return (neuron0x20294d0()*-0.0251288);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030480() {
   return (neuron0x2029810()*0.140984);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20304c0() {
   return (neuron0x2029b50()*0.232263);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030500() {
   return (neuron0x2029e90()*-3.97435);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030880() {
   return (neuron0x2029190()*0.397103);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20308c0() {
   return (neuron0x20294d0()*0.355976);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030900() {
   return (neuron0x2029810()*-0.243327);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030940() {
   return (neuron0x2029b50()*-0.30711);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030980() {
   return (neuron0x2029e90()*-0.153169);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030d00() {
   return (neuron0x2029190()*-1.19226);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030d40() {
   return (neuron0x20294d0()*0.0445197);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030d80() {
   return (neuron0x2029810()*-0.0482263);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030dc0() {
   return (neuron0x2029b50()*0.062165);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030e00() {
   return (neuron0x2029e90()*-0.204031);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031180() {
   return (neuron0x2029190()*0.971524);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20311c0() {
   return (neuron0x20294d0()*-0.0440831);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031200() {
   return (neuron0x2029810()*-0.0756537);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031240() {
   return (neuron0x2029b50()*0.407487);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031280() {
   return (neuron0x2029e90()*-0.884789);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031600() {
   return (neuron0x2029190()*-0.0141056);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031640() {
   return (neuron0x20294d0()*0.167725);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031680() {
   return (neuron0x2029810()*0.146625);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20316c0() {
   return (neuron0x2029b50()*-0.894549);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031700() {
   return (neuron0x2029e90()*-0.357696);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b220() {
   return (neuron0x202a300()*0.791027);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b260() {
   return (neuron0x202a670()*0.0883849);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b730() {
   return (neuron0x202aaf0()*0.998863);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b770() {
   return (neuron0x202af70()*0.224046);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bbb0() {
   return (neuron0x202b480()*0.261096);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bbf0() {
   return (neuron0x202b900()*0.487364);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c030() {
   return (neuron0x202bd80()*0.421714);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c070() {
   return (neuron0x202c390()*0.354694);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c5b0() {
   return (neuron0x202c780()*0.810396);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c5f0() {
   return (neuron0x202cc00()*-1.21514);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ca30() {
   return (neuron0x202d080()*1.03229);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ca70() {
   return (neuron0x202d500()*0.777282);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ceb0() {
   return (neuron0x202da10()*-0.962451);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202cef0() {
   return (neuron0x202c180()*-0.664907);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d330() {
   return (neuron0x202e320()*0.794734);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d370() {
   return (neuron0x202e7a0()*0.0720143);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d7b0() {
   return (neuron0x202f070()*0.0381718);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d7f0() {
   return (neuron0x202f340()*-1.17977);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202dcc0() {
   return (neuron0x202f7c0()*0.510039);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202dd00() {
   return (neuron0x202fc40()*-0.51763);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e5d0() {
   return (neuron0x20300c0()*1.12905);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e610() {
   return (neuron0x2030540()*0.264675);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ea50() {
   return (neuron0x20309c0()*-0.264258);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ea90() {
   return (neuron0x2030e40()*-0.69851);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a0b0() {
   return (neuron0x20312c0()*-0.25311);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e130() {
   return (neuron0x202a300()*-0.861154);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e170() {
   return (neuron0x202a670()*0.390488);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e1b0() {
   return (neuron0x202aaf0()*-0.525814);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e1f0() {
   return (neuron0x202af70()*-0.115941);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e230() {
   return (neuron0x202b480()*0.178199);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a0f0() {
   return (neuron0x202b900()*-0.27934);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030370() {
   return (neuron0x202bd80()*-0.504748);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20303b0() {
   return (neuron0x202c390()*-0.305769);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20307f0() {
   return (neuron0x202c780()*0.296307);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030830() {
   return (neuron0x202cc00()*0.643756);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030c70() {
   return (neuron0x202d080()*-0.213112);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030cb0() {
   return (neuron0x202d500()*-0.67457);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20310f0() {
   return (neuron0x202da10()*1.24169);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031130() {
   return (neuron0x202c180()*0.306713);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031570() {
   return (neuron0x202e320()*-0.475203);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20315b0() {
   return (neuron0x202e7a0()*-0.193067);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a520() {
   return (neuron0x202f070()*-0.252878);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a560() {
   return (neuron0x202f340()*0.119095);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f5f0() {
   return (neuron0x202f7c0()*-0.410059);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f630() {
   return (neuron0x202fc40()*-0.150505);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f36700() {
   return (neuron0x20300c0()*-1.33925);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x1f36740() {
   return (neuron0x2030540()*-0.241543);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033c80() {
   return (neuron0x20309c0()*0.177315);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033cc0() {
   return (neuron0x2030e40()*0.618762);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033d00() {
   return (neuron0x20312c0()*0.0145515);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d840() {
   return (neuron0x202a300()*1.25083);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d880() {
   return (neuron0x202a670()*-0.366458);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d8c0() {
   return (neuron0x202aaf0()*-0.00730329);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d900() {
   return (neuron0x202af70()*0.30289);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034290() {
   return (neuron0x202b480()*-0.321285);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20342d0() {
   return (neuron0x202b900()*0.672889);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034310() {
   return (neuron0x202bd80()*0.705811);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034350() {
   return (neuron0x202c390()*-0.0887154);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034390() {
   return (neuron0x202c780()*0.523654);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20343d0() {
   return (neuron0x202cc00()*-1.40994);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034410() {
   return (neuron0x202d080()*0.372807);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034450() {
   return (neuron0x202d500()*0.310297);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034490() {
   return (neuron0x202da10()*-1.07906);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20344d0() {
   return (neuron0x202c180()*-0.286273);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034510() {
   return (neuron0x202e320()*0.174975);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034550() {
   return (neuron0x202e7a0()*-0.400275);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033ed0() {
   return (neuron0x202f070()*-0.0155474);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033f10() {
   return (neuron0x202f340()*0.027576);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20346a0() {
   return (neuron0x202f7c0()*0.334535);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20346e0() {
   return (neuron0x202fc40()*-0.459003);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034720() {
   return (neuron0x20300c0()*1.01645);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034760() {
   return (neuron0x2030540()*0.0420594);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20347a0() {
   return (neuron0x20309c0()*-0.0406882);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20347e0() {
   return (neuron0x2030e40()*0.450204);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034820() {
   return (neuron0x20312c0()*0.174061);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034ba0() {
   return (neuron0x202a300()*1.33932);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034be0() {
   return (neuron0x202a670()*0.335995);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034c20() {
   return (neuron0x202aaf0()*0.858791);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034c60() {
   return (neuron0x202af70()*0.293898);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034ca0() {
   return (neuron0x202b480()*0.400242);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034ce0() {
   return (neuron0x202b900()*0.258879);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034d20() {
   return (neuron0x202bd80()*1.00749);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034d60() {
   return (neuron0x202c390()*0.664088);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034da0() {
   return (neuron0x202c780()*-0.101552);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034de0() {
   return (neuron0x202cc00()*-1.14624);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034e20() {
   return (neuron0x202d080()*0.71348);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034e60() {
   return (neuron0x202d500()*0.62999);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034ea0() {
   return (neuron0x202da10()*-1.46281);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034ee0() {
   return (neuron0x202c180()*-0.796551);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034f20() {
   return (neuron0x202e320()*0.623475);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034f60() {
   return (neuron0x202e7a0()*-0.0441974);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20349f0() {
   return (neuron0x202f070()*0.113523);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2034a30() {
   return (neuron0x202f340()*-0.88506);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20350b0() {
   return (neuron0x202f7c0()*0.566808);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20350f0() {
   return (neuron0x202fc40()*0.089911);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035130() {
   return (neuron0x20300c0()*1.0964);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035170() {
   return (neuron0x2030540()*0.0092365);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20351b0() {
   return (neuron0x20309c0()*0.277365);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20351f0() {
   return (neuron0x2030e40()*-0.289858);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035230() {
   return (neuron0x20312c0()*-0.699743);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20355b0() {
   return (neuron0x202a300()*-0.210362);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20355f0() {
   return (neuron0x202a670()*-0.385901);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035630() {
   return (neuron0x202aaf0()*0.308847);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035670() {
   return (neuron0x202af70()*0.408591);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20356b0() {
   return (neuron0x202b480()*0.409285);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20356f0() {
   return (neuron0x202b900()*-0.219527);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035730() {
   return (neuron0x202bd80()*0.293226);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035770() {
   return (neuron0x202c390()*0.212763);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20357b0() {
   return (neuron0x202c780()*0.00312211);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20357f0() {
   return (neuron0x202cc00()*0.579248);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035830() {
   return (neuron0x202d080()*-0.139737);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035870() {
   return (neuron0x202d500()*-0.31773);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20358b0() {
   return (neuron0x202da10()*0.593801);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20358f0() {
   return (neuron0x202c180()*-0.238595);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035930() {
   return (neuron0x202e320()*0.274874);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035970() {
   return (neuron0x202e7a0()*-0.273734);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035400() {
   return (neuron0x202f070()*-0.0982068);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035440() {
   return (neuron0x202f340()*0.367809);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035ac0() {
   return (neuron0x202f7c0()*-0.276684);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035b00() {
   return (neuron0x202fc40()*-0.284784);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035b40() {
   return (neuron0x20300c0()*-0.67218);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035b80() {
   return (neuron0x2030540()*-0.576599);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035bc0() {
   return (neuron0x20309c0()*-0.439259);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035c00() {
   return (neuron0x2030e40()*-0.374225);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035c40() {
   return (neuron0x20312c0()*0.213306);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035fc0() {
   return (neuron0x202a300()*0.811827);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2036000() {
   return (neuron0x202a670()*0.209722);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2036040() {
   return (neuron0x202aaf0()*0.0395016);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2036080() {
   return (neuron0x202af70()*-0.348502);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20360c0() {
   return (neuron0x202b480()*-0.16378);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2036100() {
   return (neuron0x202b900()*0.544425);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2036140() {
   return (neuron0x202bd80()*0.407789);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033360() {
   return (neuron0x202c390()*0.386075);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20333a0() {
   return (neuron0x202c780()*0.435813);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20333e0() {
   return (neuron0x202cc00()*-0.0336299);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033420() {
   return (neuron0x202d080()*-0.14038);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033460() {
   return (neuron0x202d500()*-0.25693);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20334a0() {
   return (neuron0x202da10()*-1.08525);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20334e0() {
   return (neuron0x202c180()*0.320698);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033520() {
   return (neuron0x202e320()*-0.0246645);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033560() {
   return (neuron0x202e7a0()*0.14399);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035e10() {
   return (neuron0x202f070()*0.165563);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2035e50() {
   return (neuron0x202f340()*-0.572504);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20336b0() {
   return (neuron0x202f7c0()*-0.000374568);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20336f0() {
   return (neuron0x202fc40()*-0.418363);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033730() {
   return (neuron0x20300c0()*1.20451);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033770() {
   return (neuron0x2030540()*-0.256925);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20337b0() {
   return (neuron0x20309c0()*-0.209292);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20337f0() {
   return (neuron0x2030e40()*0.267289);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033830() {
   return (neuron0x20312c0()*-0.43463);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033b20() {
   return (neuron0x202a300()*-0.427962);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037220() {
   return (neuron0x202a670()*-0.0184063);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037260() {
   return (neuron0x202aaf0()*-0.633239);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20372a0() {
   return (neuron0x202af70()*-0.243951);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20372e0() {
   return (neuron0x202b480()*-0.246658);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037320() {
   return (neuron0x202b900()*-0.132523);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037360() {
   return (neuron0x202bd80()*-0.376703);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20373a0() {
   return (neuron0x202c390()*-0.838909);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20373e0() {
   return (neuron0x202c780()*0.0481495);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037420() {
   return (neuron0x202cc00()*0.691273);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037460() {
   return (neuron0x202d080()*-1.20794);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20374a0() {
   return (neuron0x202d500()*0.0746496);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20374e0() {
   return (neuron0x202da10()*0.846484);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037520() {
   return (neuron0x202c180()*-0.451062);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037560() {
   return (neuron0x202e320()*-0.539048);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20375a0() {
   return (neuron0x202e7a0()*0.13702);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033a00() {
   return (neuron0x202f070()*-0.417148);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2033a40() {
   return (neuron0x202f340()*0.0510357);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20376f0() {
   return (neuron0x202f7c0()*-0.313097);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037730() {
   return (neuron0x202fc40()*0.102634);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037770() {
   return (neuron0x20300c0()*-0.986476);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20377b0() {
   return (neuron0x2030540()*0.206604);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20377f0() {
   return (neuron0x20309c0()*0.122583);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037830() {
   return (neuron0x2030e40()*0.318244);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037870() {
   return (neuron0x20312c0()*0.112937);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037bf0() {
   return (neuron0x202a300()*-0.332855);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037c30() {
   return (neuron0x202a670()*-0.412074);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037c70() {
   return (neuron0x202aaf0()*-0.564313);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037cb0() {
   return (neuron0x202af70()*0.208343);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037cf0() {
   return (neuron0x202b480()*-0.513682);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037d30() {
   return (neuron0x202b900()*0.109032);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037d70() {
   return (neuron0x202bd80()*0.0126512);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037db0() {
   return (neuron0x202c390()*0.0370635);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037df0() {
   return (neuron0x202c780()*-0.349618);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037e30() {
   return (neuron0x202cc00()*0.927626);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037e70() {
   return (neuron0x202d080()*-1.14184);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037eb0() {
   return (neuron0x202d500()*0.169681);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037ef0() {
   return (neuron0x202da10()*0.815624);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037f30() {
   return (neuron0x202c180()*-0.353424);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037f70() {
   return (neuron0x202e320()*-0.179052);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037fb0() {
   return (neuron0x202e7a0()*0.251388);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037a40() {
   return (neuron0x202f070()*-0.0765815);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037a80() {
   return (neuron0x202f340()*-0.341035);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038100() {
   return (neuron0x202f7c0()*-0.363334);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038140() {
   return (neuron0x202fc40()*0.384419);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038180() {
   return (neuron0x20300c0()*-0.839477);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20381c0() {
   return (neuron0x2030540()*-0.0682083);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038200() {
   return (neuron0x20309c0()*0.206366);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038240() {
   return (neuron0x2030e40()*-0.63821);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038280() {
   return (neuron0x20312c0()*0.0861572);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038600() {
   return (neuron0x202a300()*0.363389);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038640() {
   return (neuron0x202a670()*0.350781);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038680() {
   return (neuron0x202aaf0()*-0.23199);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20386c0() {
   return (neuron0x202af70()*0.0710071);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038700() {
   return (neuron0x202b480()*0.496744);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038740() {
   return (neuron0x202b900()*0.249159);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038780() {
   return (neuron0x202bd80()*0.647674);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20387c0() {
   return (neuron0x202c390()*0.340254);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038800() {
   return (neuron0x202c780()*-0.264846);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038840() {
   return (neuron0x202cc00()*-0.914604);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038880() {
   return (neuron0x202d080()*-0.0512274);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20388c0() {
   return (neuron0x202d500()*0.298858);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038900() {
   return (neuron0x202da10()*-1.0135);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038940() {
   return (neuron0x202c180()*-0.319838);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038980() {
   return (neuron0x202e320()*0.636681);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20389c0() {
   return (neuron0x202e7a0()*-0.284997);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038450() {
   return (neuron0x202f070()*0.182444);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038490() {
   return (neuron0x202f340()*-0.462287);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038b10() {
   return (neuron0x202f7c0()*0.349832);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038b50() {
   return (neuron0x202fc40()*-0.100898);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038b90() {
   return (neuron0x20300c0()*0.520827);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038bd0() {
   return (neuron0x2030540()*0.093877);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038c10() {
   return (neuron0x20309c0()*0.286735);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038c50() {
   return (neuron0x2030e40()*0.20423);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038c90() {
   return (neuron0x20312c0()*0.295223);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039010() {
   return (neuron0x202a300()*-0.308539);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039050() {
   return (neuron0x202a670()*-0.0993076);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039090() {
   return (neuron0x202aaf0()*-0.0618143);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20390d0() {
   return (neuron0x202af70()*-0.0305699);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039110() {
   return (neuron0x202b480()*0.293382);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039150() {
   return (neuron0x202b900()*-0.129003);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039190() {
   return (neuron0x202bd80()*-0.376965);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20391d0() {
   return (neuron0x202c390()*-0.591329);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039210() {
   return (neuron0x202c780()*-0.325851);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039250() {
   return (neuron0x202cc00()*-0.080152);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039290() {
   return (neuron0x202d080()*-0.292558);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20392d0() {
   return (neuron0x202d500()*0.0124249);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039310() {
   return (neuron0x202da10()*0.439452);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039350() {
   return (neuron0x202c180()*-0.307825);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039390() {
   return (neuron0x202e320()*-0.15716);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20393d0() {
   return (neuron0x202e7a0()*-0.29355);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038e60() {
   return (neuron0x202f070()*-0.223223);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2038ea0() {
   return (neuron0x202f340()*0.0271266);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039520() {
   return (neuron0x202f7c0()*0.0665484);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039560() {
   return (neuron0x202fc40()*-0.0786525);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20395a0() {
   return (neuron0x20300c0()*0.0547976);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20395e0() {
   return (neuron0x2030540()*0.48193);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039620() {
   return (neuron0x20309c0()*0.184407);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039660() {
   return (neuron0x2030e40()*0.596307);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20396a0() {
   return (neuron0x20312c0()*0.446081);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039a20() {
   return (neuron0x202a300()*0.0980951);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039a60() {
   return (neuron0x202a670()*0.0630311);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039aa0() {
   return (neuron0x202aaf0()*0.594134);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039ae0() {
   return (neuron0x202af70()*0.108714);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039b20() {
   return (neuron0x202b480()*0.246936);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039b60() {
   return (neuron0x202b900()*0.122979);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039ba0() {
   return (neuron0x202bd80()*0.520197);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039be0() {
   return (neuron0x202c390()*-0.0393885);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039c20() {
   return (neuron0x202c780()*-0.433424);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039c60() {
   return (neuron0x202cc00()*-0.330626);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039ca0() {
   return (neuron0x202d080()*0.0761541);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039ce0() {
   return (neuron0x202d500()*0.432891);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039d20() {
   return (neuron0x202da10()*-0.54619);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039d60() {
   return (neuron0x202c180()*-0.526843);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039da0() {
   return (neuron0x202e320()*0.643429);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039de0() {
   return (neuron0x202e7a0()*0.321972);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039870() {
   return (neuron0x202f070()*0.0769694);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20398b0() {
   return (neuron0x202f340()*0.0570054);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039f30() {
   return (neuron0x202f7c0()*0.490916);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039f70() {
   return (neuron0x202fc40()*-0.377635);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039fb0() {
   return (neuron0x20300c0()*0.733199);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2039ff0() {
   return (neuron0x2030540()*0.428385);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a030() {
   return (neuron0x20309c0()*-0.270638);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a070() {
   return (neuron0x2030e40()*0.0532236);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a0b0() {
   return (neuron0x20312c0()*0.207955);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a430() {
   return (neuron0x202a300()*-0.689923);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a470() {
   return (neuron0x202a670()*0.102042);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a4b0() {
   return (neuron0x202aaf0()*-0.4825);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a4f0() {
   return (neuron0x202af70()*-0.558605);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a530() {
   return (neuron0x202b480()*0.145818);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a570() {
   return (neuron0x202b900()*-0.473369);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a5b0() {
   return (neuron0x202bd80()*-0.66317);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a5f0() {
   return (neuron0x202c390()*-0.143907);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a630() {
   return (neuron0x202c780()*-0.402673);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a670() {
   return (neuron0x202cc00()*1.574);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a6b0() {
   return (neuron0x202d080()*-1.68625);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a6f0() {
   return (neuron0x202d500()*-0.201273);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a730() {
   return (neuron0x202da10()*0.968443);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a770() {
   return (neuron0x202c180()*-0.0819191);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a7b0() {
   return (neuron0x202e320()*-0.194402);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a7f0() {
   return (neuron0x202e7a0()*-0.431589);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a280() {
   return (neuron0x202f070()*-0.0906423);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a2c0() {
   return (neuron0x202f340()*-0.0317761);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a940() {
   return (neuron0x202f7c0()*0.100419);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a980() {
   return (neuron0x202fc40()*-0.274142);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203a9c0() {
   return (neuron0x20300c0()*-1.19274);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203aa00() {
   return (neuron0x2030540()*-0.182816);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203aa40() {
   return (neuron0x20309c0()*-0.208303);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203aa80() {
   return (neuron0x2030e40()*-0.131308);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203aac0() {
   return (neuron0x20312c0()*-0.443527);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ae40() {
   return (neuron0x202a300()*-0.0024996);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ae80() {
   return (neuron0x202a670()*0.522298);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203aec0() {
   return (neuron0x202aaf0()*0.469709);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203af00() {
   return (neuron0x202af70()*0.0026013);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203af40() {
   return (neuron0x202b480()*0.188811);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203af80() {
   return (neuron0x202b900()*0.305641);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203afc0() {
   return (neuron0x202bd80()*0.0226795);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b000() {
   return (neuron0x202c390()*0.060288);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b040() {
   return (neuron0x202c780()*0.600275);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b080() {
   return (neuron0x202cc00()*-0.543393);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b0c0() {
   return (neuron0x202d080()*0.0929325);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b100() {
   return (neuron0x202d500()*0.481621);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b140() {
   return (neuron0x202da10()*-0.690591);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b180() {
   return (neuron0x202c180()*-0.580977);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b1c0() {
   return (neuron0x202e320()*0.288068);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b200() {
   return (neuron0x202e7a0()*-0.0562233);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ac90() {
   return (neuron0x202f070()*-0.205481);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203acd0() {
   return (neuron0x202f340()*-0.236735);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b350() {
   return (neuron0x202f7c0()*0.471972);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b390() {
   return (neuron0x202fc40()*0.220697);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b3d0() {
   return (neuron0x20300c0()*0.631823);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b410() {
   return (neuron0x2030540()*-0.326947);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b450() {
   return (neuron0x20309c0()*-0.191331);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b490() {
   return (neuron0x2030e40()*-0.650478);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b4d0() {
   return (neuron0x20312c0()*0.225863);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b850() {
   return (neuron0x202a300()*-1.81578);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b890() {
   return (neuron0x202a670()*0.0835164);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b8d0() {
   return (neuron0x202aaf0()*-0.407079);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b910() {
   return (neuron0x202af70()*-0.423447);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b950() {
   return (neuron0x202b480()*0.540183);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b990() {
   return (neuron0x202b900()*-0.837931);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b9d0() {
   return (neuron0x202bd80()*-0.723878);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ba10() {
   return (neuron0x202c390()*-0.229828);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ba50() {
   return (neuron0x202c780()*-0.752314);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ba90() {
   return (neuron0x202cc00()*2.22356);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bad0() {
   return (neuron0x202d080()*-0.499511);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bb10() {
   return (neuron0x202d500()*-0.848512);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bb50() {
   return (neuron0x202da10()*2.21351);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bb90() {
   return (neuron0x202c180()*1.15441);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bbd0() {
   return (neuron0x202e320()*-0.311525);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bc10() {
   return (neuron0x202e7a0()*0.718879);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b6a0() {
   return (neuron0x202f070()*0.0607463);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203b6e0() {
   return (neuron0x202f340()*0.85457);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bd60() {
   return (neuron0x202f7c0()*-0.365189);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bda0() {
   return (neuron0x202fc40()*-0.0482819);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bde0() {
   return (neuron0x20300c0()*-1.7521);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203be20() {
   return (neuron0x2030540()*-0.30952);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203be60() {
   return (neuron0x20309c0()*-0.269476);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bea0() {
   return (neuron0x2030e40()*0.890609);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203bee0() {
   return (neuron0x20312c0()*-0.816492);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c260() {
   return (neuron0x202a300()*0.471611);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c2a0() {
   return (neuron0x202a670()*-0.214984);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c2e0() {
   return (neuron0x202aaf0()*0.162496);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c320() {
   return (neuron0x202af70()*0.176511);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c360() {
   return (neuron0x202b480()*-0.0114432);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c3a0() {
   return (neuron0x202b900()*0.0242199);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c3e0() {
   return (neuron0x202bd80()*-0.141906);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c420() {
   return (neuron0x202c390()*0.0446603);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c460() {
   return (neuron0x202c780()*-0.0167961);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c4a0() {
   return (neuron0x202cc00()*-0.334659);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c4e0() {
   return (neuron0x202d080()*-0.205868);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c520() {
   return (neuron0x202d500()*0.302758);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c560() {
   return (neuron0x202da10()*-0.427404);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c5a0() {
   return (neuron0x202c180()*0.125079);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c5e0() {
   return (neuron0x202e320()*-0.233236);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c620() {
   return (neuron0x202e7a0()*-0.0727581);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c0b0() {
   return (neuron0x202f070()*0.287245);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c0f0() {
   return (neuron0x202f340()*0.120352);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c770() {
   return (neuron0x202f7c0()*0.322617);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c7b0() {
   return (neuron0x202fc40()*0.39086);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c7f0() {
   return (neuron0x20300c0()*0.618585);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c830() {
   return (neuron0x2030540()*-0.387174);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c870() {
   return (neuron0x20309c0()*0.24245);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c8b0() {
   return (neuron0x2030e40()*0.0940197);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203c8f0() {
   return (neuron0x20312c0()*-0.0528985);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203cc70() {
   return (neuron0x202a300()*0.734457);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a490() {
   return (neuron0x202a670()*-0.358944);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a4d0() {
   return (neuron0x202aaf0()*0.443399);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a890() {
   return (neuron0x202af70()*0.180769);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a8d0() {
   return (neuron0x202b480()*-0.365205);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ad10() {
   return (neuron0x202b900()*0.790913);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ad50() {
   return (neuron0x202bd80()*0.500484);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b190() {
   return (neuron0x202c390()*0.908166);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b1d0() {
   return (neuron0x202c780()*0.0904611);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b6a0() {
   return (neuron0x202cc00()*-1.61868);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202b6e0() {
   return (neuron0x202d080()*0.646667);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bb20() {
   return (neuron0x202d500()*0.393493);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bb60() {
   return (neuron0x202da10()*-0.861049);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bfa0() {
   return (neuron0x202c180()*-0.636729);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202bfe0() {
   return (neuron0x202e320()*0.734544);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c520() {
   return (neuron0x202e7a0()*-0.196356);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c560() {
   return (neuron0x202f070()*0.309531);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c9a0() {
   return (neuron0x202f340()*-0.729825);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202c9e0() {
   return (neuron0x202f7c0()*0.437173);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ce20() {
   return (neuron0x202fc40()*-0.393232);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ce60() {
   return (neuron0x20300c0()*1.67371);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d2a0() {
   return (neuron0x2030540()*-0.322353);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d2e0() {
   return (neuron0x20309c0()*0.30575);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d720() {
   return (neuron0x2030e40()*-0.775125);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202d760() {
   return (neuron0x20312c0()*0.662053);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20370e0() {
   return (neuron0x202a300()*-1.58761);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2037120() {
   return (neuron0x202a670()*0.00681684);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202e9c0() {
   return (neuron0x202aaf0()*-0.8296);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202ea00() {
   return (neuron0x202af70()*-0.351211);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203cac0() {
   return (neuron0x202b480()*0.308893);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203cb00() {
   return (neuron0x202b900()*-0.784705);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2029d70() {
   return (neuron0x202bd80()*-0.964311);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2029db0() {
   return (neuron0x202c390()*-0.153477);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f560() {
   return (neuron0x202c780()*-0.16686);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f5a0() {
   return (neuron0x202cc00()*1.75484);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202f9e0() {
   return (neuron0x202d080()*-0.383701);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fa20() {
   return (neuron0x202d500()*-0.11815);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fe60() {
   return (neuron0x202da10()*1.51096);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202fea0() {
   return (neuron0x202c180()*0.31741);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20302e0() {
   return (neuron0x202e320()*-0.604389);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030320() {
   return (neuron0x202e7a0()*0.361844);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030760() {
   return (neuron0x202f070()*-0.247835);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20307a0() {
   return (neuron0x202f340()*0.511466);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030be0() {
   return (neuron0x202f7c0()*0.184093);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2030c20() {
   return (neuron0x202fc40()*0.130965);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031060() {
   return (neuron0x20300c0()*-1.18206);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20310a0() {
   return (neuron0x2030540()*-0.589262);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20314e0() {
   return (neuron0x20309c0()*-0.301328);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2031520() {
   return (neuron0x2030e40()*-0.207308);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202dc30() {
   return (neuron0x20312c0()*0.1974);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202dc70() {
   return (neuron0x202a300()*0.353289);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203fee0() {
   return (neuron0x202a670()*0.425329);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ff20() {
   return (neuron0x202aaf0()*0.717464);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ff60() {
   return (neuron0x202af70()*0.25198);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ffa0() {
   return (neuron0x202b480()*-0.108109);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203ffe0() {
   return (neuron0x202b900()*-0.164551);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040020() {
   return (neuron0x202bd80()*0.715592);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040060() {
   return (neuron0x202c390()*0.060316);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20400a0() {
   return (neuron0x202c780()*0.337119);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20400e0() {
   return (neuron0x202cc00()*-0.61888);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040120() {
   return (neuron0x202d080()*1.56444);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040160() {
   return (neuron0x202d500()*0.712302);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20401a0() {
   return (neuron0x202da10()*-0.939767);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20401e0() {
   return (neuron0x202c180()*-0.260462);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040220() {
   return (neuron0x202e320()*0.567197);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040260() {
   return (neuron0x202e7a0()*-0.449981);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203fd30() {
   return (neuron0x202f070()*0.470263);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x203fd70() {
   return (neuron0x202f340()*-0.516449);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20403b0() {
   return (neuron0x202f7c0()*-0.097281);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20403f0() {
   return (neuron0x202fc40()*-0.29545);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040430() {
   return (neuron0x20300c0()*1.29477);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040470() {
   return (neuron0x2030540()*0.482511);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20404b0() {
   return (neuron0x20309c0()*0.34659);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20404f0() {
   return (neuron0x2030e40()*0.0917427);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040530() {
   return (neuron0x20312c0()*-0.437098);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20408b0() {
   return (neuron0x202a300()*-1.12455);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20408f0() {
   return (neuron0x202a670()*0.185897);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040930() {
   return (neuron0x202aaf0()*-0.0461174);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040970() {
   return (neuron0x202af70()*-0.260244);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20409b0() {
   return (neuron0x202b480()*-0.273916);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20409f0() {
   return (neuron0x202b900()*-0.209956);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040a30() {
   return (neuron0x202bd80()*-0.432899);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040a70() {
   return (neuron0x202c390()*-0.378274);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040ab0() {
   return (neuron0x202c780()*-0.0729452);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040af0() {
   return (neuron0x202cc00()*1.05251);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040b30() {
   return (neuron0x202d080()*-0.351967);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040b70() {
   return (neuron0x202d500()*-0.0145343);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040bb0() {
   return (neuron0x202da10()*0.563473);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040bf0() {
   return (neuron0x202c180()*0.592029);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040c30() {
   return (neuron0x202e320()*-0.762888);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040c70() {
   return (neuron0x202e7a0()*0.207629);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040700() {
   return (neuron0x202f070()*-0.440301);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040740() {
   return (neuron0x202f340()*0.535331);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040dc0() {
   return (neuron0x202f7c0()*-0.0431735);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040e00() {
   return (neuron0x202fc40()*0.570085);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040e40() {
   return (neuron0x20300c0()*-0.637995);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040e80() {
   return (neuron0x2030540()*0.0949994);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040ec0() {
   return (neuron0x20309c0()*-0.311338);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040f00() {
   return (neuron0x2030e40()*0.567817);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2040f40() {
   return (neuron0x20312c0()*0.144621);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20412c0() {
   return (neuron0x202a300()*0.800585);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041300() {
   return (neuron0x202a670()*0.783639);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041340() {
   return (neuron0x202aaf0()*0.104795);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041380() {
   return (neuron0x202af70()*-0.148675);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20413c0() {
   return (neuron0x202b480()*0.625641);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041400() {
   return (neuron0x202b900()*0.629721);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041440() {
   return (neuron0x202bd80()*1.01266);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041480() {
   return (neuron0x202c390()*0.648055);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20414c0() {
   return (neuron0x202c780()*-0.135955);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041500() {
   return (neuron0x202cc00()*-0.873302);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041540() {
   return (neuron0x202d080()*1.82513);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041580() {
   return (neuron0x202d500()*0.160308);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20415c0() {
   return (neuron0x202da10()*-1.70739);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041600() {
   return (neuron0x202c180()*0.0232857);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041640() {
   return (neuron0x202e320()*0.0855442);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041680() {
   return (neuron0x202e7a0()*-0.299069);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041110() {
   return (neuron0x202f070()*0.492582);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041150() {
   return (neuron0x202f340()*-0.684204);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20417d0() {
   return (neuron0x202f7c0()*-0.220724);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041810() {
   return (neuron0x202fc40()*0.42481);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041850() {
   return (neuron0x20300c0()*1.46306);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041890() {
   return (neuron0x2030540()*0.55376);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20418d0() {
   return (neuron0x20309c0()*-0.161701);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041910() {
   return (neuron0x2030e40()*-0.251949);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041950() {
   return (neuron0x20312c0()*0.256911);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041cd0() {
   return (neuron0x202a300()*0.228399);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041d10() {
   return (neuron0x202a670()*0.437295);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041d50() {
   return (neuron0x202aaf0()*0.0619193);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041d90() {
   return (neuron0x202af70()*0.495717);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041dd0() {
   return (neuron0x202b480()*0.368526);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041e10() {
   return (neuron0x202b900()*-0.298616);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041e50() {
   return (neuron0x202bd80()*0.229883);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041e90() {
   return (neuron0x202c390()*-0.404053);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041ed0() {
   return (neuron0x202c780()*0.27073);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041f10() {
   return (neuron0x202cc00()*0.264164);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041f50() {
   return (neuron0x202d080()*-0.379557);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041f90() {
   return (neuron0x202d500()*-0.547292);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041fd0() {
   return (neuron0x202da10()*0.581066);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042010() {
   return (neuron0x202c180()*0.0499652);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042050() {
   return (neuron0x202e320()*0.163251);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042090() {
   return (neuron0x202e7a0()*-0.0724868);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041b20() {
   return (neuron0x202f070()*-0.293588);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2041b60() {
   return (neuron0x202f340()*-0.142137);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20421e0() {
   return (neuron0x202f7c0()*0.152147);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042220() {
   return (neuron0x202fc40()*0.119805);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042260() {
   return (neuron0x20300c0()*-0.213232);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20422a0() {
   return (neuron0x2030540()*-0.225731);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20422e0() {
   return (neuron0x20309c0()*0.169464);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042320() {
   return (neuron0x2030e40()*0.495493);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042360() {
   return (neuron0x20312c0()*-0.267586);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20426e0() {
   return (neuron0x202a300()*0.125314);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042720() {
   return (neuron0x202a670()*0.389098);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042760() {
   return (neuron0x202aaf0()*0.454864);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20427a0() {
   return (neuron0x202af70()*-0.280953);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20427e0() {
   return (neuron0x202b480()*-0.45979);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042820() {
   return (neuron0x202b900()*0.463493);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042860() {
   return (neuron0x202bd80()*-0.295935);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20428a0() {
   return (neuron0x202c390()*-0.0334129);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20428e0() {
   return (neuron0x202c780()*0.079546);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042920() {
   return (neuron0x202cc00()*0.116242);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042960() {
   return (neuron0x202d080()*0.455199);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20429a0() {
   return (neuron0x202d500()*-0.224147);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20429e0() {
   return (neuron0x202da10()*-0.223381);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042a20() {
   return (neuron0x202c180()*-0.506285);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042a60() {
   return (neuron0x202e320()*0.384458);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042aa0() {
   return (neuron0x202e7a0()*-0.00161504);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042530() {
   return (neuron0x202f070()*-0.454078);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042570() {
   return (neuron0x202f340()*-0.112972);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042bf0() {
   return (neuron0x202f7c0()*0.191121);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042c30() {
   return (neuron0x202fc40()*-0.54136);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042c70() {
   return (neuron0x20300c0()*0.160831);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042cb0() {
   return (neuron0x2030540()*-0.43524);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042cf0() {
   return (neuron0x20309c0()*0.400702);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042d30() {
   return (neuron0x2030e40()*-0.28744);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042d70() {
   return (neuron0x20312c0()*-0.386312);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20430f0() {
   return (neuron0x202a300()*1.78797);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043130() {
   return (neuron0x202a670()*-0.340209);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043170() {
   return (neuron0x202aaf0()*0.985863);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20431b0() {
   return (neuron0x202af70()*0.412617);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20431f0() {
   return (neuron0x202b480()*0.133428);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043230() {
   return (neuron0x202b900()*0.284382);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043270() {
   return (neuron0x202bd80()*0.689134);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20432b0() {
   return (neuron0x202c390()*0.684379);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20432f0() {
   return (neuron0x202c780()*-0.0128847);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043330() {
   return (neuron0x202cc00()*-2.16029);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043370() {
   return (neuron0x202d080()*0.185535);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20433b0() {
   return (neuron0x202d500()*0.448134);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20433f0() {
   return (neuron0x202da10()*-2.48204);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043430() {
   return (neuron0x202c180()*-0.679554);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043470() {
   return (neuron0x202e320()*0.59752);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20434b0() {
   return (neuron0x202e7a0()*-0.0416508);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042f40() {
   return (neuron0x202f070()*0.419091);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2042f80() {
   return (neuron0x202f340()*-0.492683);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043600() {
   return (neuron0x202f7c0()*0.327656);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043640() {
   return (neuron0x202fc40()*0.039495);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043680() {
   return (neuron0x20300c0()*2.32326);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20436c0() {
   return (neuron0x2030540()*0.522611);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043700() {
   return (neuron0x20309c0()*0.520195);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043740() {
   return (neuron0x2030e40()*-0.156719);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043780() {
   return (neuron0x20312c0()*-0.0649554);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043b00() {
   return (neuron0x202a300()*-0.362157);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043b40() {
   return (neuron0x202a670()*-0.345136);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043b80() {
   return (neuron0x202aaf0()*-0.352648);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043bc0() {
   return (neuron0x202af70()*-0.243127);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043c00() {
   return (neuron0x202b480()*0.385729);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043c40() {
   return (neuron0x202b900()*-0.047097);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043c80() {
   return (neuron0x202bd80()*-0.0491333);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043cc0() {
   return (neuron0x202c390()*-0.667227);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043d00() {
   return (neuron0x202c780()*-0.306883);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043d40() {
   return (neuron0x202cc00()*0.83824);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043d80() {
   return (neuron0x202d080()*-1.0028);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043dc0() {
   return (neuron0x202d500()*-0.251406);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043e00() {
   return (neuron0x202da10()*1.18722);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043e40() {
   return (neuron0x202c180()*-0.0409276);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043e80() {
   return (neuron0x202e320()*-0.160854);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043ec0() {
   return (neuron0x202e7a0()*0.299584);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043950() {
   return (neuron0x202f070()*-0.43768);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2043990() {
   return (neuron0x202f340()*0.422714);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044010() {
   return (neuron0x202f7c0()*0.237684);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044050() {
   return (neuron0x202fc40()*0.561396);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044090() {
   return (neuron0x20300c0()*-1.53412);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20440d0() {
   return (neuron0x2030540()*0.0546805);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044110() {
   return (neuron0x20309c0()*-0.530145);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044150() {
   return (neuron0x2030e40()*0.690086);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044190() {
   return (neuron0x20312c0()*0.0794932);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044510() {
   return (neuron0x202a300()*-0.17766);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044550() {
   return (neuron0x202a670()*-0.69067);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044590() {
   return (neuron0x202aaf0()*-0.0369255);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20445d0() {
   return (neuron0x202af70()*0.11933);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044610() {
   return (neuron0x202b480()*0.105504);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044650() {
   return (neuron0x202b900()*0.43536);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044690() {
   return (neuron0x202bd80()*0.377362);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20446d0() {
   return (neuron0x202c390()*-0.320674);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044710() {
   return (neuron0x202c780()*-0.253614);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044750() {
   return (neuron0x202cc00()*-0.518428);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044790() {
   return (neuron0x202d080()*0.0156083);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20447d0() {
   return (neuron0x202d500()*-0.231094);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044810() {
   return (neuron0x202da10()*-0.301367);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044850() {
   return (neuron0x202c180()*0.447659);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044890() {
   return (neuron0x202e320()*0.196819);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20448d0() {
   return (neuron0x202e7a0()*0.56163);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044360() {
   return (neuron0x202f070()*-0.0956772);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20443a0() {
   return (neuron0x202f340()*0.547698);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044a20() {
   return (neuron0x202f7c0()*-0.315781);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044a60() {
   return (neuron0x202fc40()*0.104747);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044aa0() {
   return (neuron0x20300c0()*-0.82971);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044ae0() {
   return (neuron0x2030540()*-0.234686);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044b20() {
   return (neuron0x20309c0()*-0.222281);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044b60() {
   return (neuron0x2030e40()*0.0986447);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044ba0() {
   return (neuron0x20312c0()*0.0569084);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044e00() {
   return (neuron0x20331d0()*2.55869);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044e40() {
   return (neuron0x202dfa0()*-2.01231);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044e80() {
   return (neuron0x2033d40()*2.65138);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044ec0() {
   return (neuron0x2034860()*3.34721);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044f00() {
   return (neuron0x2035270()*-1.25369);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044f40() {
   return (neuron0x2035c80()*1.4546);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044f80() {
   return (neuron0x2033870()*-2.41656);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2044fc0() {
   return (neuron0x20378b0()*-1.92722);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045000() {
   return (neuron0x20382c0()*1.63516);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045040() {
   return (neuron0x2038cd0()*-0.345158);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045080() {
   return (neuron0x20396e0()*0.939262);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20450c0() {
   return (neuron0x203a0f0()*-3.19568);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045100() {
   return (neuron0x203ab00()*0.752137);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045140() {
   return (neuron0x203b510()*-4.06457);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045180() {
   return (neuron0x203bf20()*0.683974);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20451c0() {
   return (neuron0x203c930()*2.64977);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a1d0() {
   return (neuron0x2036f50()*-3.77467);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x202a210() {
   return (neuron0x203fba0()*2.2547);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045310() {
   return (neuron0x2040570()*-2.07142);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045350() {
   return (neuron0x2040f80()*3.10091);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045390() {
   return (neuron0x2041990()*-0.644639);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x20453d0() {
   return (neuron0x20423a0()*0.462739);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045410() {
   return (neuron0x2042db0()*4.64063);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045450() {
   return (neuron0x20437c0()*-2.1722);
}

double nnFunc_25_25hi_1500ep_weight::synapse0x2045490() {
   return (neuron0x20441d0()*0.410863);
}

