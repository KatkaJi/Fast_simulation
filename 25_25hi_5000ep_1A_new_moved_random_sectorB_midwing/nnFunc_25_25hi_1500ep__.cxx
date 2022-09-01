#include "25_25hi_5000ep_1A_new_moved_random_sectorB_midwing/nnFunc_25_25hi_1500ep__.h"
#include <cmath>

double nnFunc_25_25hi_1500ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1295690();
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
         return neuron0x1295690();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_1500ep__::neuron0x1279c40() {
   return input0;
}

double nnFunc_25_25hi_1500ep__::neuron0x1279f80() {
   return input1;
}

double nnFunc_25_25hi_1500ep__::neuron0x127a2c0() {
   return input2;
}

double nnFunc_25_25hi_1500ep__::neuron0x127a600() {
   return input3;
}

double nnFunc_25_25hi_1500ep__::neuron0x127a940() {
   return input4;
}

double nnFunc_25_25hi_1500ep__::input0x127adb0() {
   double input = -9.02727;
   input += synapse0x1202380();
   input += synapse0x12690b0();
   input += synapse0x127b060();
   input += synapse0x127b0a0();
   input += synapse0x127b0e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127adb0() {
   double input = input0x127adb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127b120() {
   double input = -16.7755;
   input += synapse0x127b460();
   input += synapse0x127b4a0();
   input += synapse0x127b4e0();
   input += synapse0x127b520();
   input += synapse0x127b560();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127b120() {
   double input = input0x127b120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127b5a0() {
   double input = 2.73348;
   input += synapse0x127b8e0();
   input += synapse0x127b920();
   input += synapse0x127b960();
   input += synapse0x127b9a0();
   input += synapse0x127b9e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127b5a0() {
   double input = input0x127b5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127ba20() {
   double input = 5.8401;
   input += synapse0x127bd60();
   input += synapse0x127bda0();
   input += synapse0x117e5a0();
   input += synapse0x117e5e0();
   input += synapse0x127bef0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127ba20() {
   double input = input0x127ba20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127bf30() {
   double input = -2.03195;
   input += synapse0x127c270();
   input += synapse0x127c2b0();
   input += synapse0x127c2f0();
   input += synapse0x127c330();
   input += synapse0x127c370();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127bf30() {
   double input = input0x127bf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127c3b0() {
   double input = -0.106419;
   input += synapse0x127c6f0();
   input += synapse0x127c730();
   input += synapse0x127c770();
   input += synapse0x127c7b0();
   input += synapse0x127c7f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127c3b0() {
   double input = input0x127c3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127c830() {
   double input = 1.38698;
   input += synapse0x127cb70();
   input += synapse0x127cbb0();
   input += synapse0x127cbf0();
   input += synapse0x127bde0();
   input += synapse0x127be20();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127c830() {
   double input = input0x127c830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127ce40() {
   double input = 5.67785;
   input += synapse0x127d0f0();
   input += synapse0x127d130();
   input += synapse0x127d170();
   input += synapse0x127d1b0();
   input += synapse0x127d1f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127ce40() {
   double input = input0x127ce40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127d230() {
   double input = 6.23648;
   input += synapse0x127d570();
   input += synapse0x127d5b0();
   input += synapse0x127d5f0();
   input += synapse0x127d630();
   input += synapse0x127d670();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127d230() {
   double input = input0x127d230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127d6b0() {
   double input = -24.0612;
   input += synapse0x127d9f0();
   input += synapse0x127da30();
   input += synapse0x127da70();
   input += synapse0x127dab0();
   input += synapse0x127daf0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127d6b0() {
   double input = input0x127d6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127db30() {
   double input = -0.277834;
   input += synapse0x127de70();
   input += synapse0x127deb0();
   input += synapse0x127def0();
   input += synapse0x127df30();
   input += synapse0x127df70();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127db30() {
   double input = input0x127db30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127dfb0() {
   double input = 0.175067;
   input += synapse0x117e3f0();
   input += synapse0x117e430();
   input += synapse0x127e400();
   input += synapse0x127e440();
   input += synapse0x127e480();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127dfb0() {
   double input = input0x127dfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127e4c0() {
   double input = 10.5728;
   input += synapse0x127e800();
   input += synapse0x127e840();
   input += synapse0x127e880();
   input += synapse0x127e8c0();
   input += synapse0x127e900();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127e4c0() {
   double input = input0x127e4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127cc30() {
   double input = -2.50801;
   input += synapse0x117ebc0();
   input += synapse0x127cdc0();
   input += synapse0x127ce00();
   input += synapse0x127ed50();
   input += synapse0x127ed90();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127cc30() {
   double input = input0x127cc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127edd0() {
   double input = -0.771178;
   input += synapse0x127f110();
   input += synapse0x127f150();
   input += synapse0x127f190();
   input += synapse0x127f1d0();
   input += synapse0x127f210();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127edd0() {
   double input = input0x127edd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127f250() {
   double input = -1.32812;
   input += synapse0x127f590();
   input += synapse0x1279e60();
   input += synapse0x1279ea0();
   input += synapse0x127a1a0();
   input += synapse0x127a1e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127f250() {
   double input = input0x127f250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127fb20() {
   double input = 1.74078;
   input += synapse0x127fcb0();
   input += synapse0x127fcf0();
   input += synapse0x127fd30();
   input += synapse0x127fd70();
   input += synapse0x127fdb0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127fb20() {
   double input = input0x127fb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127fdf0() {
   double input = -0.928885;
   input += synapse0x1280130();
   input += synapse0x1280170();
   input += synapse0x12801b0();
   input += synapse0x12801f0();
   input += synapse0x1280230();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127fdf0() {
   double input = input0x127fdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1280270() {
   double input = -0.395125;
   input += synapse0x12805b0();
   input += synapse0x12805f0();
   input += synapse0x1280630();
   input += synapse0x1280670();
   input += synapse0x12806b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1280270() {
   double input = input0x1280270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12806f0() {
   double input = 0.912133;
   input += synapse0x1280a30();
   input += synapse0x1280a70();
   input += synapse0x1280ab0();
   input += synapse0x1280af0();
   input += synapse0x1280b30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12806f0() {
   double input = input0x12806f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1280b70() {
   double input = -0.674913;
   input += synapse0x1280eb0();
   input += synapse0x1280ef0();
   input += synapse0x1280f30();
   input += synapse0x1280f70();
   input += synapse0x1280fb0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1280b70() {
   double input = input0x1280b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1280ff0() {
   double input = 1.30067;
   input += synapse0x1281330();
   input += synapse0x1281370();
   input += synapse0x12813b0();
   input += synapse0x12813f0();
   input += synapse0x1281430();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1280ff0() {
   double input = input0x1280ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1281470() {
   double input = -1.18992;
   input += synapse0x12817b0();
   input += synapse0x12817f0();
   input += synapse0x1281830();
   input += synapse0x1281870();
   input += synapse0x12818b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1281470() {
   double input = input0x1281470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12818f0() {
   double input = 1.68363;
   input += synapse0x1281c30();
   input += synapse0x1281c70();
   input += synapse0x1281cb0();
   input += synapse0x1281cf0();
   input += synapse0x1281d30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12818f0() {
   double input = input0x12818f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1281d70() {
   double input = -0.519007;
   input += synapse0x12820b0();
   input += synapse0x12820f0();
   input += synapse0x1282130();
   input += synapse0x1282170();
   input += synapse0x12821b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1281d70() {
   double input = input0x1281d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1283c80() {
   double input = -0.248039;
   input += synapse0x127bcd0();
   input += synapse0x127bd10();
   input += synapse0x127c1e0();
   input += synapse0x127c220();
   input += synapse0x127c660();
   input += synapse0x127c6a0();
   input += synapse0x127cae0();
   input += synapse0x127cb20();
   input += synapse0x127d060();
   input += synapse0x127d0a0();
   input += synapse0x127d4e0();
   input += synapse0x127d520();
   input += synapse0x127d960();
   input += synapse0x127d9a0();
   input += synapse0x127dde0();
   input += synapse0x127de20();
   input += synapse0x127e260();
   input += synapse0x127e2a0();
   input += synapse0x127e770();
   input += synapse0x127e7b0();
   input += synapse0x127f080();
   input += synapse0x127f0c0();
   input += synapse0x127f500();
   input += synapse0x127f540();
   input += synapse0x127ab60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1283c80() {
   double input = input0x1283c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x127ea50() {
   double input = 0.623816;
   input += synapse0x127ebe0();
   input += synapse0x127ec20();
   input += synapse0x127ec60();
   input += synapse0x127eca0();
   input += synapse0x127ece0();
   input += synapse0x127aba0();
   input += synapse0x1280e20();
   input += synapse0x1280e60();
   input += synapse0x12812a0();
   input += synapse0x12812e0();
   input += synapse0x1281720();
   input += synapse0x1281760();
   input += synapse0x1281ba0();
   input += synapse0x1281be0();
   input += synapse0x1282020();
   input += synapse0x1282060();
   input += synapse0x127afd0();
   input += synapse0x127b010();
   input += synapse0x12800a0();
   input += synapse0x12800e0();
   input += synapse0x1202450();
   input += synapse0x1202490();
   input += synapse0x1284730();
   input += synapse0x1284770();
   input += synapse0x12847b0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x127ea50() {
   double input = input0x127ea50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x12847f0() {
   double input = 0.738538;
   input += synapse0x127e2f0();
   input += synapse0x127e330();
   input += synapse0x127e370();
   input += synapse0x127e3b0();
   input += synapse0x1284d40();
   input += synapse0x1284d80();
   input += synapse0x1284dc0();
   input += synapse0x1284e00();
   input += synapse0x1284e40();
   input += synapse0x1284e80();
   input += synapse0x1284ec0();
   input += synapse0x1284f00();
   input += synapse0x1284f40();
   input += synapse0x1284f80();
   input += synapse0x1284fc0();
   input += synapse0x1285000();
   input += synapse0x1284980();
   input += synapse0x12849c0();
   input += synapse0x1285150();
   input += synapse0x1285190();
   input += synapse0x12851d0();
   input += synapse0x1285210();
   input += synapse0x1285250();
   input += synapse0x1285290();
   input += synapse0x12852d0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x12847f0() {
   double input = input0x12847f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1285310() {
   double input = 0.862912;
   input += synapse0x1285650();
   input += synapse0x1285690();
   input += synapse0x12856d0();
   input += synapse0x1285710();
   input += synapse0x1285750();
   input += synapse0x1285790();
   input += synapse0x12857d0();
   input += synapse0x1285810();
   input += synapse0x1285850();
   input += synapse0x1285890();
   input += synapse0x12858d0();
   input += synapse0x1285910();
   input += synapse0x1285950();
   input += synapse0x1285990();
   input += synapse0x12859d0();
   input += synapse0x1285a10();
   input += synapse0x12854a0();
   input += synapse0x12854e0();
   input += synapse0x1285b60();
   input += synapse0x1285ba0();
   input += synapse0x1285be0();
   input += synapse0x1285c20();
   input += synapse0x1285c60();
   input += synapse0x1285ca0();
   input += synapse0x1285ce0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1285310() {
   double input = input0x1285310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1285d20() {
   double input = -0.129371;
   input += synapse0x1286060();
   input += synapse0x12860a0();
   input += synapse0x12860e0();
   input += synapse0x1286120();
   input += synapse0x1286160();
   input += synapse0x12861a0();
   input += synapse0x12861e0();
   input += synapse0x1286220();
   input += synapse0x1286260();
   input += synapse0x12862a0();
   input += synapse0x12862e0();
   input += synapse0x1286320();
   input += synapse0x1286360();
   input += synapse0x12863a0();
   input += synapse0x12863e0();
   input += synapse0x1286420();
   input += synapse0x1285eb0();
   input += synapse0x1285ef0();
   input += synapse0x1286570();
   input += synapse0x12865b0();
   input += synapse0x12865f0();
   input += synapse0x1286630();
   input += synapse0x1286670();
   input += synapse0x12866b0();
   input += synapse0x12866f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1285d20() {
   double input = input0x1285d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1286730() {
   double input = 0.708969;
   input += synapse0x1286a70();
   input += synapse0x1286ab0();
   input += synapse0x1286af0();
   input += synapse0x1286b30();
   input += synapse0x1286b70();
   input += synapse0x1286bb0();
   input += synapse0x1286bf0();
   input += synapse0x1283e10();
   input += synapse0x1283e50();
   input += synapse0x1283e90();
   input += synapse0x1283ed0();
   input += synapse0x1283f10();
   input += synapse0x1283f50();
   input += synapse0x1283f90();
   input += synapse0x1283fd0();
   input += synapse0x1284010();
   input += synapse0x12868c0();
   input += synapse0x1286900();
   input += synapse0x1284160();
   input += synapse0x12841a0();
   input += synapse0x12841e0();
   input += synapse0x1284220();
   input += synapse0x1284260();
   input += synapse0x12842a0();
   input += synapse0x12842e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1286730() {
   double input = input0x1286730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1284320() {
   double input = -0.906729;
   input += synapse0x12845d0();
   input += synapse0x1287cd0();
   input += synapse0x1287d10();
   input += synapse0x1287d50();
   input += synapse0x1287d90();
   input += synapse0x1287dd0();
   input += synapse0x1287e10();
   input += synapse0x1287e50();
   input += synapse0x1287e90();
   input += synapse0x1287ed0();
   input += synapse0x1287f10();
   input += synapse0x1287f50();
   input += synapse0x1287f90();
   input += synapse0x1287fd0();
   input += synapse0x1288010();
   input += synapse0x1288050();
   input += synapse0x12844b0();
   input += synapse0x12844f0();
   input += synapse0x12881a0();
   input += synapse0x12881e0();
   input += synapse0x1288220();
   input += synapse0x1288260();
   input += synapse0x12882a0();
   input += synapse0x12882e0();
   input += synapse0x1288320();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1284320() {
   double input = input0x1284320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1288360() {
   double input = 0.634109;
   input += synapse0x12886a0();
   input += synapse0x12886e0();
   input += synapse0x1288720();
   input += synapse0x1288760();
   input += synapse0x12887a0();
   input += synapse0x12887e0();
   input += synapse0x1288820();
   input += synapse0x1288860();
   input += synapse0x12888a0();
   input += synapse0x12888e0();
   input += synapse0x1288920();
   input += synapse0x1288960();
   input += synapse0x12889a0();
   input += synapse0x12889e0();
   input += synapse0x1288a20();
   input += synapse0x1288a60();
   input += synapse0x12884f0();
   input += synapse0x1288530();
   input += synapse0x1288bb0();
   input += synapse0x1288bf0();
   input += synapse0x1288c30();
   input += synapse0x1288c70();
   input += synapse0x1288cb0();
   input += synapse0x1288cf0();
   input += synapse0x1288d30();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1288360() {
   double input = input0x1288360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1288d70() {
   double input = -0.0280571;
   input += synapse0x12890b0();
   input += synapse0x12890f0();
   input += synapse0x1289130();
   input += synapse0x1289170();
   input += synapse0x12891b0();
   input += synapse0x12891f0();
   input += synapse0x1289230();
   input += synapse0x1289270();
   input += synapse0x12892b0();
   input += synapse0x12892f0();
   input += synapse0x1289330();
   input += synapse0x1289370();
   input += synapse0x12893b0();
   input += synapse0x12893f0();
   input += synapse0x1289430();
   input += synapse0x1289470();
   input += synapse0x1288f00();
   input += synapse0x1288f40();
   input += synapse0x12895c0();
   input += synapse0x1289600();
   input += synapse0x1289640();
   input += synapse0x1289680();
   input += synapse0x12896c0();
   input += synapse0x1289700();
   input += synapse0x1289740();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1288d70() {
   double input = input0x1288d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1289780() {
   double input = -0.55248;
   input += synapse0x1289ac0();
   input += synapse0x1289b00();
   input += synapse0x1289b40();
   input += synapse0x1289b80();
   input += synapse0x1289bc0();
   input += synapse0x1289c00();
   input += synapse0x1289c40();
   input += synapse0x1289c80();
   input += synapse0x1289cc0();
   input += synapse0x1289d00();
   input += synapse0x1289d40();
   input += synapse0x1289d80();
   input += synapse0x1289dc0();
   input += synapse0x1289e00();
   input += synapse0x1289e40();
   input += synapse0x1289e80();
   input += synapse0x1289910();
   input += synapse0x1289950();
   input += synapse0x1289fd0();
   input += synapse0x128a010();
   input += synapse0x128a050();
   input += synapse0x128a090();
   input += synapse0x128a0d0();
   input += synapse0x128a110();
   input += synapse0x128a150();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1289780() {
   double input = input0x1289780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x128a190() {
   double input = 0.487127;
   input += synapse0x128a4d0();
   input += synapse0x128a510();
   input += synapse0x128a550();
   input += synapse0x128a590();
   input += synapse0x128a5d0();
   input += synapse0x128a610();
   input += synapse0x128a650();
   input += synapse0x128a690();
   input += synapse0x128a6d0();
   input += synapse0x128a710();
   input += synapse0x128a750();
   input += synapse0x128a790();
   input += synapse0x128a7d0();
   input += synapse0x128a810();
   input += synapse0x128a850();
   input += synapse0x128a890();
   input += synapse0x128a320();
   input += synapse0x128a360();
   input += synapse0x128a9e0();
   input += synapse0x128aa20();
   input += synapse0x128aa60();
   input += synapse0x128aaa0();
   input += synapse0x128aae0();
   input += synapse0x128ab20();
   input += synapse0x128ab60();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x128a190() {
   double input = input0x128a190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x128aba0() {
   double input = -0.119543;
   input += synapse0x128aee0();
   input += synapse0x128af20();
   input += synapse0x128af60();
   input += synapse0x128afa0();
   input += synapse0x128afe0();
   input += synapse0x128b020();
   input += synapse0x128b060();
   input += synapse0x128b0a0();
   input += synapse0x128b0e0();
   input += synapse0x128b120();
   input += synapse0x128b160();
   input += synapse0x128b1a0();
   input += synapse0x128b1e0();
   input += synapse0x128b220();
   input += synapse0x128b260();
   input += synapse0x128b2a0();
   input += synapse0x128ad30();
   input += synapse0x128ad70();
   input += synapse0x128b3f0();
   input += synapse0x128b430();
   input += synapse0x128b470();
   input += synapse0x128b4b0();
   input += synapse0x128b4f0();
   input += synapse0x128b530();
   input += synapse0x128b570();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x128aba0() {
   double input = input0x128aba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x128b5b0() {
   double input = -0.89228;
   input += synapse0x128b8f0();
   input += synapse0x128b930();
   input += synapse0x128b970();
   input += synapse0x128b9b0();
   input += synapse0x128b9f0();
   input += synapse0x128ba30();
   input += synapse0x128ba70();
   input += synapse0x128bab0();
   input += synapse0x128baf0();
   input += synapse0x128bb30();
   input += synapse0x128bb70();
   input += synapse0x128bbb0();
   input += synapse0x128bbf0();
   input += synapse0x128bc30();
   input += synapse0x128bc70();
   input += synapse0x128bcb0();
   input += synapse0x128b740();
   input += synapse0x128b780();
   input += synapse0x128be00();
   input += synapse0x128be40();
   input += synapse0x128be80();
   input += synapse0x128bec0();
   input += synapse0x128bf00();
   input += synapse0x128bf40();
   input += synapse0x128bf80();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x128b5b0() {
   double input = input0x128b5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x128bfc0() {
   double input = -1.16659;
   input += synapse0x128c300();
   input += synapse0x128c340();
   input += synapse0x128c380();
   input += synapse0x128c3c0();
   input += synapse0x128c400();
   input += synapse0x128c440();
   input += synapse0x128c480();
   input += synapse0x128c4c0();
   input += synapse0x128c500();
   input += synapse0x128c540();
   input += synapse0x128c580();
   input += synapse0x128c5c0();
   input += synapse0x128c600();
   input += synapse0x128c640();
   input += synapse0x128c680();
   input += synapse0x128c6c0();
   input += synapse0x128c150();
   input += synapse0x128c190();
   input += synapse0x128c810();
   input += synapse0x128c850();
   input += synapse0x128c890();
   input += synapse0x128c8d0();
   input += synapse0x128c910();
   input += synapse0x128c950();
   input += synapse0x128c990();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x128bfc0() {
   double input = input0x128bfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x128c9d0() {
   double input = 0.155187;
   input += synapse0x128cd10();
   input += synapse0x128cd50();
   input += synapse0x128cd90();
   input += synapse0x128cdd0();
   input += synapse0x128ce10();
   input += synapse0x128ce50();
   input += synapse0x128ce90();
   input += synapse0x128ced0();
   input += synapse0x128cf10();
   input += synapse0x128cf50();
   input += synapse0x128cf90();
   input += synapse0x128cfd0();
   input += synapse0x128d010();
   input += synapse0x128d050();
   input += synapse0x128d090();
   input += synapse0x128d0d0();
   input += synapse0x128cb60();
   input += synapse0x128cba0();
   input += synapse0x128d220();
   input += synapse0x128d260();
   input += synapse0x128d2a0();
   input += synapse0x128d2e0();
   input += synapse0x128d320();
   input += synapse0x128d360();
   input += synapse0x128d3a0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x128c9d0() {
   double input = input0x128c9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x128d3e0() {
   double input = 1.01382;
   input += synapse0x128d720();
   input += synapse0x127af40();
   input += synapse0x127af80();
   input += synapse0x127b340();
   input += synapse0x127b380();
   input += synapse0x127b7c0();
   input += synapse0x127b800();
   input += synapse0x127bc40();
   input += synapse0x127bc80();
   input += synapse0x127c150();
   input += synapse0x127c190();
   input += synapse0x127c5d0();
   input += synapse0x127c610();
   input += synapse0x127ca50();
   input += synapse0x127ca90();
   input += synapse0x127cfd0();
   input += synapse0x127d010();
   input += synapse0x127d450();
   input += synapse0x127d490();
   input += synapse0x127d8d0();
   input += synapse0x127d910();
   input += synapse0x127dd50();
   input += synapse0x127dd90();
   input += synapse0x127e1d0();
   input += synapse0x127e210();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x128d3e0() {
   double input = input0x128d3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1287a00() {
   double input = 0.0844626;
   input += synapse0x1287b90();
   input += synapse0x1287bd0();
   input += synapse0x127f470();
   input += synapse0x127f4b0();
   input += synapse0x128d570();
   input += synapse0x128d5b0();
   input += synapse0x127a820();
   input += synapse0x127a860();
   input += synapse0x1280010();
   input += synapse0x1280050();
   input += synapse0x1280490();
   input += synapse0x12804d0();
   input += synapse0x1280910();
   input += synapse0x1280950();
   input += synapse0x1280d90();
   input += synapse0x1280dd0();
   input += synapse0x1281210();
   input += synapse0x1281250();
   input += synapse0x1281690();
   input += synapse0x12816d0();
   input += synapse0x1281b10();
   input += synapse0x1281b50();
   input += synapse0x1281f90();
   input += synapse0x1281fd0();
   input += synapse0x127e6e0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1287a00() {
   double input = input0x1287a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1290650() {
   double input = 0.465861;
   input += synapse0x127e720();
   input += synapse0x1290990();
   input += synapse0x12909d0();
   input += synapse0x1290a10();
   input += synapse0x1290a50();
   input += synapse0x1290a90();
   input += synapse0x1290ad0();
   input += synapse0x1290b10();
   input += synapse0x1290b50();
   input += synapse0x1290b90();
   input += synapse0x1290bd0();
   input += synapse0x1290c10();
   input += synapse0x1290c50();
   input += synapse0x1290c90();
   input += synapse0x1290cd0();
   input += synapse0x1290d10();
   input += synapse0x12907e0();
   input += synapse0x1290820();
   input += synapse0x1290e60();
   input += synapse0x1290ea0();
   input += synapse0x1290ee0();
   input += synapse0x1290f20();
   input += synapse0x1290f60();
   input += synapse0x1290fa0();
   input += synapse0x1290fe0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1290650() {
   double input = input0x1290650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1291020() {
   double input = 0.386574;
   input += synapse0x1291360();
   input += synapse0x12913a0();
   input += synapse0x12913e0();
   input += synapse0x1291420();
   input += synapse0x1291460();
   input += synapse0x12914a0();
   input += synapse0x12914e0();
   input += synapse0x1291520();
   input += synapse0x1291560();
   input += synapse0x12915a0();
   input += synapse0x12915e0();
   input += synapse0x1291620();
   input += synapse0x1291660();
   input += synapse0x12916a0();
   input += synapse0x12916e0();
   input += synapse0x1291720();
   input += synapse0x12911b0();
   input += synapse0x12911f0();
   input += synapse0x1291870();
   input += synapse0x12918b0();
   input += synapse0x12918f0();
   input += synapse0x1291930();
   input += synapse0x1291970();
   input += synapse0x12919b0();
   input += synapse0x12919f0();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1291020() {
   double input = input0x1291020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1291a30() {
   double input = -0.0168568;
   input += synapse0x1291d70();
   input += synapse0x1291db0();
   input += synapse0x1291df0();
   input += synapse0x1291e30();
   input += synapse0x1291e70();
   input += synapse0x1291eb0();
   input += synapse0x1291ef0();
   input += synapse0x1291f30();
   input += synapse0x1291f70();
   input += synapse0x1291fb0();
   input += synapse0x1291ff0();
   input += synapse0x1292030();
   input += synapse0x1292070();
   input += synapse0x12920b0();
   input += synapse0x12920f0();
   input += synapse0x1292130();
   input += synapse0x1291bc0();
   input += synapse0x1291c00();
   input += synapse0x1292280();
   input += synapse0x12922c0();
   input += synapse0x1292300();
   input += synapse0x1292340();
   input += synapse0x1292380();
   input += synapse0x12923c0();
   input += synapse0x1292400();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1291a30() {
   double input = input0x1291a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1292440() {
   double input = -0.242064;
   input += synapse0x1292780();
   input += synapse0x12927c0();
   input += synapse0x1292800();
   input += synapse0x1292840();
   input += synapse0x1292880();
   input += synapse0x12928c0();
   input += synapse0x1292900();
   input += synapse0x1292940();
   input += synapse0x1292980();
   input += synapse0x12929c0();
   input += synapse0x1292a00();
   input += synapse0x1292a40();
   input += synapse0x1292a80();
   input += synapse0x1292ac0();
   input += synapse0x1292b00();
   input += synapse0x1292b40();
   input += synapse0x12925d0();
   input += synapse0x1292610();
   input += synapse0x1292c90();
   input += synapse0x1292cd0();
   input += synapse0x1292d10();
   input += synapse0x1292d50();
   input += synapse0x1292d90();
   input += synapse0x1292dd0();
   input += synapse0x1292e10();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1292440() {
   double input = input0x1292440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1292e50() {
   double input = -0.357884;
   input += synapse0x1293190();
   input += synapse0x12931d0();
   input += synapse0x1293210();
   input += synapse0x1293250();
   input += synapse0x1293290();
   input += synapse0x12932d0();
   input += synapse0x1293310();
   input += synapse0x1293350();
   input += synapse0x1293390();
   input += synapse0x12933d0();
   input += synapse0x1293410();
   input += synapse0x1293450();
   input += synapse0x1293490();
   input += synapse0x12934d0();
   input += synapse0x1293510();
   input += synapse0x1293550();
   input += synapse0x1292fe0();
   input += synapse0x1293020();
   input += synapse0x12936a0();
   input += synapse0x12936e0();
   input += synapse0x1293720();
   input += synapse0x1293760();
   input += synapse0x12937a0();
   input += synapse0x12937e0();
   input += synapse0x1293820();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1292e50() {
   double input = input0x1292e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1293860() {
   double input = -0.601836;
   input += synapse0x1293ba0();
   input += synapse0x1293be0();
   input += synapse0x1293c20();
   input += synapse0x1293c60();
   input += synapse0x1293ca0();
   input += synapse0x1293ce0();
   input += synapse0x1293d20();
   input += synapse0x1293d60();
   input += synapse0x1293da0();
   input += synapse0x1293de0();
   input += synapse0x1293e20();
   input += synapse0x1293e60();
   input += synapse0x1293ea0();
   input += synapse0x1293ee0();
   input += synapse0x1293f20();
   input += synapse0x1293f60();
   input += synapse0x12939f0();
   input += synapse0x1293a30();
   input += synapse0x12940b0();
   input += synapse0x12940f0();
   input += synapse0x1294130();
   input += synapse0x1294170();
   input += synapse0x12941b0();
   input += synapse0x12941f0();
   input += synapse0x1294230();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1293860() {
   double input = input0x1293860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1294270() {
   double input = -0.273408;
   input += synapse0x12945b0();
   input += synapse0x12945f0();
   input += synapse0x1294630();
   input += synapse0x1294670();
   input += synapse0x12946b0();
   input += synapse0x12946f0();
   input += synapse0x1294730();
   input += synapse0x1294770();
   input += synapse0x12947b0();
   input += synapse0x12947f0();
   input += synapse0x1294830();
   input += synapse0x1294870();
   input += synapse0x12948b0();
   input += synapse0x12948f0();
   input += synapse0x1294930();
   input += synapse0x1294970();
   input += synapse0x1294400();
   input += synapse0x1294440();
   input += synapse0x1294ac0();
   input += synapse0x1294b00();
   input += synapse0x1294b40();
   input += synapse0x1294b80();
   input += synapse0x1294bc0();
   input += synapse0x1294c00();
   input += synapse0x1294c40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1294270() {
   double input = input0x1294270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1294c80() {
   double input = 2.38079;
   input += synapse0x1294fc0();
   input += synapse0x1295000();
   input += synapse0x1295040();
   input += synapse0x1295080();
   input += synapse0x12950c0();
   input += synapse0x1295100();
   input += synapse0x1295140();
   input += synapse0x1295180();
   input += synapse0x12951c0();
   input += synapse0x1295200();
   input += synapse0x1295240();
   input += synapse0x1295280();
   input += synapse0x12952c0();
   input += synapse0x1295300();
   input += synapse0x1295340();
   input += synapse0x1295380();
   input += synapse0x1294e10();
   input += synapse0x1294e50();
   input += synapse0x12954d0();
   input += synapse0x1295510();
   input += synapse0x1295550();
   input += synapse0x1295590();
   input += synapse0x12955d0();
   input += synapse0x1295610();
   input += synapse0x1295650();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1294c80() {
   double input = input0x1294c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_1500ep__::input0x1295690() {
   double input = 2.73305;
   input += synapse0x12958b0();
   input += synapse0x12958f0();
   input += synapse0x1295930();
   input += synapse0x1295970();
   input += synapse0x12959b0();
   input += synapse0x12959f0();
   input += synapse0x1295a30();
   input += synapse0x1295a70();
   input += synapse0x1295ab0();
   input += synapse0x1295af0();
   input += synapse0x1295b30();
   input += synapse0x1295b70();
   input += synapse0x1295bb0();
   input += synapse0x1295bf0();
   input += synapse0x1295c30();
   input += synapse0x1295c70();
   input += synapse0x127ac80();
   input += synapse0x127acc0();
   input += synapse0x1295dc0();
   input += synapse0x1295e00();
   input += synapse0x1295e40();
   input += synapse0x1295e80();
   input += synapse0x1295ec0();
   input += synapse0x1295f00();
   input += synapse0x1295f40();
   return input;
}

double nnFunc_25_25hi_1500ep__::neuron0x1295690() {
   double input = input0x1295690();
   return (input * 4.7098)+148.177;
}

double nnFunc_25_25hi_1500ep__::synapse0x1202380() {
   return (neuron0x1279c40()*-0.00510089);
}

double nnFunc_25_25hi_1500ep__::synapse0x12690b0() {
   return (neuron0x1279f80()*-0.140541);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b060() {
   return (neuron0x127a2c0()*-0.0526492);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b0a0() {
   return (neuron0x127a600()*-9.12847);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b0e0() {
   return (neuron0x127a940()*4.67904);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b460() {
   return (neuron0x1279c40()*-0.0477707);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b4a0() {
   return (neuron0x1279f80()*-0.764643);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b4e0() {
   return (neuron0x127a2c0()*-0.259168);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b520() {
   return (neuron0x127a600()*-18.0124);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b560() {
   return (neuron0x127a940()*8.5589);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b8e0() {
   return (neuron0x1279c40()*-0.737423);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b920() {
   return (neuron0x1279f80()*0.478563);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b960() {
   return (neuron0x127a2c0()*0.297037);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b9a0() {
   return (neuron0x127a600()*0.735917);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b9e0() {
   return (neuron0x127a940()*1.37292);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bd60() {
   return (neuron0x1279c40()*0.0596649);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bda0() {
   return (neuron0x1279f80()*0.313833);
}

double nnFunc_25_25hi_1500ep__::synapse0x117e5a0() {
   return (neuron0x127a2c0()*0.455158);
}

double nnFunc_25_25hi_1500ep__::synapse0x117e5e0() {
   return (neuron0x127a600()*8.77605);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bef0() {
   return (neuron0x127a940()*-3.59834);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c270() {
   return (neuron0x1279c40()*0.119779);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c2b0() {
   return (neuron0x1279f80()*-0.59934);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c2f0() {
   return (neuron0x127a2c0()*0.858213);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c330() {
   return (neuron0x127a600()*-0.132601);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c370() {
   return (neuron0x127a940()*-1.0655);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c6f0() {
   return (neuron0x1279c40()*2.70406);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c730() {
   return (neuron0x1279f80()*-1.65727);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c770() {
   return (neuron0x127a2c0()*-0.828105);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c7b0() {
   return (neuron0x127a600()*2.16467);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c7f0() {
   return (neuron0x127a940()*-0.367388);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cb70() {
   return (neuron0x1279c40()*-1.30655);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cbb0() {
   return (neuron0x1279f80()*-0.0629464);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cbf0() {
   return (neuron0x127a2c0()*0.0545029);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bde0() {
   return (neuron0x127a600()*-0.137584);
}

double nnFunc_25_25hi_1500ep__::synapse0x127be20() {
   return (neuron0x127a940()*0.963083);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d0f0() {
   return (neuron0x1279c40()*-0.0354555);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d130() {
   return (neuron0x1279f80()*-0.474892);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d170() {
   return (neuron0x127a2c0()*-0.18434);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d1b0() {
   return (neuron0x127a600()*7.52408);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d1f0() {
   return (neuron0x127a940()*-0.620352);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d570() {
   return (neuron0x1279c40()*0.0431907);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d5b0() {
   return (neuron0x1279f80()*-0.209152);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d5f0() {
   return (neuron0x127a2c0()*0.532755);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d630() {
   return (neuron0x127a600()*5.97896);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d670() {
   return (neuron0x127a940()*-2.35441);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d9f0() {
   return (neuron0x1279c40()*0.00293073);
}

double nnFunc_25_25hi_1500ep__::synapse0x127da30() {
   return (neuron0x1279f80()*-0.680069);
}

double nnFunc_25_25hi_1500ep__::synapse0x127da70() {
   return (neuron0x127a2c0()*0.0716458);
}

double nnFunc_25_25hi_1500ep__::synapse0x127dab0() {
   return (neuron0x127a600()*-22.7128);
}

double nnFunc_25_25hi_1500ep__::synapse0x127daf0() {
   return (neuron0x127a940()*13.1251);
}

double nnFunc_25_25hi_1500ep__::synapse0x127de70() {
   return (neuron0x1279c40()*1.30516);
}

double nnFunc_25_25hi_1500ep__::synapse0x127deb0() {
   return (neuron0x1279f80()*-0.777085);
}

double nnFunc_25_25hi_1500ep__::synapse0x127def0() {
   return (neuron0x127a2c0()*0.420272);
}

double nnFunc_25_25hi_1500ep__::synapse0x127df30() {
   return (neuron0x127a600()*2.95669);
}

double nnFunc_25_25hi_1500ep__::synapse0x127df70() {
   return (neuron0x127a940()*-1.46589);
}

double nnFunc_25_25hi_1500ep__::synapse0x117e3f0() {
   return (neuron0x1279c40()*0.902524);
}

double nnFunc_25_25hi_1500ep__::synapse0x117e430() {
   return (neuron0x1279f80()*-0.684726);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e400() {
   return (neuron0x127a2c0()*0.389092);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e440() {
   return (neuron0x127a600()*1.77166);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e480() {
   return (neuron0x127a940()*-0.77032);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e800() {
   return (neuron0x1279c40()*-0.0166424);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e840() {
   return (neuron0x1279f80()*-0.635715);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e880() {
   return (neuron0x127a2c0()*0.191121);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e8c0() {
   return (neuron0x127a600()*9.80251);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e900() {
   return (neuron0x127a940()*-5.68344);
}

double nnFunc_25_25hi_1500ep__::synapse0x117ebc0() {
   return (neuron0x1279c40()*0.00388286);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cdc0() {
   return (neuron0x1279f80()*-0.480878);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ce00() {
   return (neuron0x127a2c0()*0.176419);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ed50() {
   return (neuron0x127a600()*-6.61113);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ed90() {
   return (neuron0x127a940()*-0.941406);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f110() {
   return (neuron0x1279c40()*1.59807);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f150() {
   return (neuron0x1279f80()*0.349146);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f190() {
   return (neuron0x127a2c0()*-1.24669);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f1d0() {
   return (neuron0x127a600()*1.5575);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f210() {
   return (neuron0x127a940()*-1.02426);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f590() {
   return (neuron0x1279c40()*1.78617);
}

double nnFunc_25_25hi_1500ep__::synapse0x1279e60() {
   return (neuron0x1279f80()*-0.859542);
}

double nnFunc_25_25hi_1500ep__::synapse0x1279ea0() {
   return (neuron0x127a2c0()*-0.0356908);
}

double nnFunc_25_25hi_1500ep__::synapse0x127a1a0() {
   return (neuron0x127a600()*0.671756);
}

double nnFunc_25_25hi_1500ep__::synapse0x127a1e0() {
   return (neuron0x127a940()*-0.710591);
}

double nnFunc_25_25hi_1500ep__::synapse0x127fcb0() {
   return (neuron0x1279c40()*-1.96129);
}

double nnFunc_25_25hi_1500ep__::synapse0x127fcf0() {
   return (neuron0x1279f80()*0.825168);
}

double nnFunc_25_25hi_1500ep__::synapse0x127fd30() {
   return (neuron0x127a2c0()*2.02413);
}

double nnFunc_25_25hi_1500ep__::synapse0x127fd70() {
   return (neuron0x127a600()*1.5609);
}

double nnFunc_25_25hi_1500ep__::synapse0x127fdb0() {
   return (neuron0x127a940()*1.8012);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280130() {
   return (neuron0x1279c40()*2.0162);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280170() {
   return (neuron0x1279f80()*-0.356363);
}

double nnFunc_25_25hi_1500ep__::synapse0x12801b0() {
   return (neuron0x127a2c0()*-2.21868);
}

double nnFunc_25_25hi_1500ep__::synapse0x12801f0() {
   return (neuron0x127a600()*0.826873);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280230() {
   return (neuron0x127a940()*-0.318416);
}

double nnFunc_25_25hi_1500ep__::synapse0x12805b0() {
   return (neuron0x1279c40()*1.10106);
}

double nnFunc_25_25hi_1500ep__::synapse0x12805f0() {
   return (neuron0x1279f80()*-1.27685);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280630() {
   return (neuron0x127a2c0()*-1.64345);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280670() {
   return (neuron0x127a600()*0.622747);
}

double nnFunc_25_25hi_1500ep__::synapse0x12806b0() {
   return (neuron0x127a940()*-0.394835);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280a30() {
   return (neuron0x1279c40()*-2.02004);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280a70() {
   return (neuron0x1279f80()*0.686265);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280ab0() {
   return (neuron0x127a2c0()*2.8826);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280af0() {
   return (neuron0x127a600()*-0.283846);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280b30() {
   return (neuron0x127a940()*0.753537);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280eb0() {
   return (neuron0x1279c40()*-0.155015);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280ef0() {
   return (neuron0x1279f80()*-0.438858);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280f30() {
   return (neuron0x127a2c0()*-1.13669);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280f70() {
   return (neuron0x127a600()*-1.14729);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280fb0() {
   return (neuron0x127a940()*-0.242961);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281330() {
   return (neuron0x1279c40()*-0.0171038);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281370() {
   return (neuron0x1279f80()*0.204817);
}

double nnFunc_25_25hi_1500ep__::synapse0x12813b0() {
   return (neuron0x127a2c0()*-0.312567);
}

double nnFunc_25_25hi_1500ep__::synapse0x12813f0() {
   return (neuron0x127a600()*3.02864);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281430() {
   return (neuron0x127a940()*3.38425);
}

double nnFunc_25_25hi_1500ep__::synapse0x12817b0() {
   return (neuron0x1279c40()*0.747371);
}

double nnFunc_25_25hi_1500ep__::synapse0x12817f0() {
   return (neuron0x1279f80()*-0.4096);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281830() {
   return (neuron0x127a2c0()*0.222104);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281870() {
   return (neuron0x127a600()*1.31772);
}

double nnFunc_25_25hi_1500ep__::synapse0x12818b0() {
   return (neuron0x127a940()*-1.21657);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281c30() {
   return (neuron0x1279c40()*-1.90545);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281c70() {
   return (neuron0x1279f80()*0.669825);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281cb0() {
   return (neuron0x127a2c0()*-0.187807);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281cf0() {
   return (neuron0x127a600()*-1.30296);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281d30() {
   return (neuron0x127a940()*0.668608);
}

double nnFunc_25_25hi_1500ep__::synapse0x12820b0() {
   return (neuron0x1279c40()*1.64013);
}

double nnFunc_25_25hi_1500ep__::synapse0x12820f0() {
   return (neuron0x1279f80()*-0.251701);
}

double nnFunc_25_25hi_1500ep__::synapse0x1282130() {
   return (neuron0x127a2c0()*-1.98334);
}

double nnFunc_25_25hi_1500ep__::synapse0x1282170() {
   return (neuron0x127a600()*1.10865);
}

double nnFunc_25_25hi_1500ep__::synapse0x12821b0() {
   return (neuron0x127a940()*-0.442874);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bcd0() {
   return (neuron0x127adb0()*1.60222);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bd10() {
   return (neuron0x127b120()*1.26463);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c1e0() {
   return (neuron0x127b5a0()*0.326234);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c220() {
   return (neuron0x127ba20()*-2.41167);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c660() {
   return (neuron0x127bf30()*-0.561728);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c6a0() {
   return (neuron0x127c3b0()*0.149965);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cae0() {
   return (neuron0x127c830()*-0.456231);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cb20() {
   return (neuron0x127ce40()*0.127011);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d060() {
   return (neuron0x127d230()*-0.0681508);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d0a0() {
   return (neuron0x127d6b0()*3.50345);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d4e0() {
   return (neuron0x127db30()*0.46054);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d520() {
   return (neuron0x127dfb0()*-0.182843);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d960() {
   return (neuron0x127e4c0()*-0.201756);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d9a0() {
   return (neuron0x127cc30()*-0.567889);
}

double nnFunc_25_25hi_1500ep__::synapse0x127dde0() {
   return (neuron0x127edd0()*-0.208685);
}

double nnFunc_25_25hi_1500ep__::synapse0x127de20() {
   return (neuron0x127f250()*-0.755051);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e260() {
   return (neuron0x127fb20()*-0.0858261);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e2a0() {
   return (neuron0x127fdf0()*0.473547);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e770() {
   return (neuron0x1280270()*-0.17517);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e7b0() {
   return (neuron0x12806f0()*-0.465226);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f080() {
   return (neuron0x1280b70()*-0.729214);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f0c0() {
   return (neuron0x1280ff0()*-0.822768);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f500() {
   return (neuron0x1281470()*0.175728);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f540() {
   return (neuron0x12818f0()*-0.145594);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ab60() {
   return (neuron0x1281d70()*0.312872);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ebe0() {
   return (neuron0x127adb0()*-0.160797);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ec20() {
   return (neuron0x127b120()*0.935437);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ec60() {
   return (neuron0x127b5a0()*-0.100649);
}

double nnFunc_25_25hi_1500ep__::synapse0x127eca0() {
   return (neuron0x127ba20()*-0.0630286);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ece0() {
   return (neuron0x127bf30()*-0.061238);
}

double nnFunc_25_25hi_1500ep__::synapse0x127aba0() {
   return (neuron0x127c3b0()*-0.0693931);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280e20() {
   return (neuron0x127c830()*0.312446);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280e60() {
   return (neuron0x127ce40()*-0.686216);
}

double nnFunc_25_25hi_1500ep__::synapse0x12812a0() {
   return (neuron0x127d230()*0.355602);
}

double nnFunc_25_25hi_1500ep__::synapse0x12812e0() {
   return (neuron0x127d6b0()*0.805013);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281720() {
   return (neuron0x127db30()*0.147001);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281760() {
   return (neuron0x127dfb0()*-0.252606);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281ba0() {
   return (neuron0x127e4c0()*0.115407);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281be0() {
   return (neuron0x127cc30()*0.423202);
}

double nnFunc_25_25hi_1500ep__::synapse0x1282020() {
   return (neuron0x127edd0()*-0.26228);
}

double nnFunc_25_25hi_1500ep__::synapse0x1282060() {
   return (neuron0x127f250()*-0.23276);
}

double nnFunc_25_25hi_1500ep__::synapse0x127afd0() {
   return (neuron0x127fb20()*0.183151);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b010() {
   return (neuron0x127fdf0()*-0.477116);
}

double nnFunc_25_25hi_1500ep__::synapse0x12800a0() {
   return (neuron0x1280270()*0.413902);
}

double nnFunc_25_25hi_1500ep__::synapse0x12800e0() {
   return (neuron0x12806f0()*0.369169);
}

double nnFunc_25_25hi_1500ep__::synapse0x1202450() {
   return (neuron0x1280b70()*0.495501);
}

double nnFunc_25_25hi_1500ep__::synapse0x1202490() {
   return (neuron0x1280ff0()*0.369302);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284730() {
   return (neuron0x1281470()*0.065149);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284770() {
   return (neuron0x12818f0()*0.039968);
}

double nnFunc_25_25hi_1500ep__::synapse0x12847b0() {
   return (neuron0x1281d70()*-0.370344);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e2f0() {
   return (neuron0x127adb0()*0.923619);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e330() {
   return (neuron0x127b120()*0.217998);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e370() {
   return (neuron0x127b5a0()*0.603621);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e3b0() {
   return (neuron0x127ba20()*-0.111886);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284d40() {
   return (neuron0x127bf30()*0.38621);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284d80() {
   return (neuron0x127c3b0()*0.269945);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284dc0() {
   return (neuron0x127c830()*0.384481);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284e00() {
   return (neuron0x127ce40()*0.600692);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284e40() {
   return (neuron0x127d230()*0.531626);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284e80() {
   return (neuron0x127d6b0()*0.548211);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284ec0() {
   return (neuron0x127db30()*-0.0312876);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284f00() {
   return (neuron0x127dfb0()*0.395135);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284f40() {
   return (neuron0x127e4c0()*-0.0658615);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284f80() {
   return (neuron0x127cc30()*0.912088);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284fc0() {
   return (neuron0x127edd0()*-0.100686);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285000() {
   return (neuron0x127f250()*0.538819);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284980() {
   return (neuron0x127fb20()*0.53137);
}

double nnFunc_25_25hi_1500ep__::synapse0x12849c0() {
   return (neuron0x127fdf0()*-0.176737);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285150() {
   return (neuron0x1280270()*0.202598);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285190() {
   return (neuron0x12806f0()*0.479648);
}

double nnFunc_25_25hi_1500ep__::synapse0x12851d0() {
   return (neuron0x1280b70()*0.283998);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285210() {
   return (neuron0x1280ff0()*0.0646564);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285250() {
   return (neuron0x1281470()*0.0429939);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285290() {
   return (neuron0x12818f0()*0.613827);
}

double nnFunc_25_25hi_1500ep__::synapse0x12852d0() {
   return (neuron0x1281d70()*-0.408578);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285650() {
   return (neuron0x127adb0()*1.58704);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285690() {
   return (neuron0x127b120()*1.30666);
}

double nnFunc_25_25hi_1500ep__::synapse0x12856d0() {
   return (neuron0x127b5a0()*0.254442);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285710() {
   return (neuron0x127ba20()*-0.975186);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285750() {
   return (neuron0x127bf30()*-0.122323);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285790() {
   return (neuron0x127c3b0()*0.407135);
}

double nnFunc_25_25hi_1500ep__::synapse0x12857d0() {
   return (neuron0x127c830()*-0.352866);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285810() {
   return (neuron0x127ce40()*-0.596371);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285850() {
   return (neuron0x127d230()*0.0461782);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285890() {
   return (neuron0x127d6b0()*2.5661);
}

double nnFunc_25_25hi_1500ep__::synapse0x12858d0() {
   return (neuron0x127db30()*-0.336766);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285910() {
   return (neuron0x127dfb0()*0.535716);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285950() {
   return (neuron0x127e4c0()*-1.94123);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285990() {
   return (neuron0x127cc30()*1.8009);
}

double nnFunc_25_25hi_1500ep__::synapse0x12859d0() {
   return (neuron0x127edd0()*0.272563);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285a10() {
   return (neuron0x127f250()*0.487546);
}

double nnFunc_25_25hi_1500ep__::synapse0x12854a0() {
   return (neuron0x127fb20()*0.109835);
}

double nnFunc_25_25hi_1500ep__::synapse0x12854e0() {
   return (neuron0x127fdf0()*-0.201441);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285b60() {
   return (neuron0x1280270()*-0.513238);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285ba0() {
   return (neuron0x12806f0()*0.854479);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285be0() {
   return (neuron0x1280b70()*0.32379);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285c20() {
   return (neuron0x1280ff0()*0.188231);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285c60() {
   return (neuron0x1281470()*0.316627);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285ca0() {
   return (neuron0x12818f0()*0.150338);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285ce0() {
   return (neuron0x1281d70()*-0.0303734);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286060() {
   return (neuron0x127adb0()*-0.139241);
}

double nnFunc_25_25hi_1500ep__::synapse0x12860a0() {
   return (neuron0x127b120()*0.227439);
}

double nnFunc_25_25hi_1500ep__::synapse0x12860e0() {
   return (neuron0x127b5a0()*-0.521106);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286120() {
   return (neuron0x127ba20()*-0.877266);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286160() {
   return (neuron0x127bf30()*0.662851);
}

double nnFunc_25_25hi_1500ep__::synapse0x12861a0() {
   return (neuron0x127c3b0()*-0.266764);
}

double nnFunc_25_25hi_1500ep__::synapse0x12861e0() {
   return (neuron0x127c830()*-1.33343);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286220() {
   return (neuron0x127ce40()*-0.946478);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286260() {
   return (neuron0x127d230()*-0.842955);
}

double nnFunc_25_25hi_1500ep__::synapse0x12862a0() {
   return (neuron0x127d6b0()*-0.184337);
}

double nnFunc_25_25hi_1500ep__::synapse0x12862e0() {
   return (neuron0x127db30()*-0.391939);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286320() {
   return (neuron0x127dfb0()*-0.861235);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286360() {
   return (neuron0x127e4c0()*-0.509622);
}

double nnFunc_25_25hi_1500ep__::synapse0x12863a0() {
   return (neuron0x127cc30()*0.277221);
}

double nnFunc_25_25hi_1500ep__::synapse0x12863e0() {
   return (neuron0x127edd0()*0.652453);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286420() {
   return (neuron0x127f250()*-0.0486384);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285eb0() {
   return (neuron0x127fb20()*-0.666077);
}

double nnFunc_25_25hi_1500ep__::synapse0x1285ef0() {
   return (neuron0x127fdf0()*-0.484042);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286570() {
   return (neuron0x1280270()*0.17935);
}

double nnFunc_25_25hi_1500ep__::synapse0x12865b0() {
   return (neuron0x12806f0()*0.185011);
}

double nnFunc_25_25hi_1500ep__::synapse0x12865f0() {
   return (neuron0x1280b70()*0.204044);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286630() {
   return (neuron0x1280ff0()*-0.791286);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286670() {
   return (neuron0x1281470()*-0.430985);
}

double nnFunc_25_25hi_1500ep__::synapse0x12866b0() {
   return (neuron0x12818f0()*-0.660749);
}

double nnFunc_25_25hi_1500ep__::synapse0x12866f0() {
   return (neuron0x1281d70()*0.0147469);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286a70() {
   return (neuron0x127adb0()*0.221406);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286ab0() {
   return (neuron0x127b120()*-0.686923);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286af0() {
   return (neuron0x127b5a0()*0.462106);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286b30() {
   return (neuron0x127ba20()*1.07931);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286b70() {
   return (neuron0x127bf30()*0.0610978);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286bb0() {
   return (neuron0x127c3b0()*-0.528531);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286bf0() {
   return (neuron0x127c830()*0.0941764);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283e10() {
   return (neuron0x127ce40()*0.529126);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283e50() {
   return (neuron0x127d230()*0.541022);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283e90() {
   return (neuron0x127d6b0()*-1.73902);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283ed0() {
   return (neuron0x127db30()*-0.209186);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283f10() {
   return (neuron0x127dfb0()*0.204916);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283f50() {
   return (neuron0x127e4c0()*-1.13086);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283f90() {
   return (neuron0x127cc30()*1.40201);
}

double nnFunc_25_25hi_1500ep__::synapse0x1283fd0() {
   return (neuron0x127edd0()*0.613428);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284010() {
   return (neuron0x127f250()*0.853373);
}

double nnFunc_25_25hi_1500ep__::synapse0x12868c0() {
   return (neuron0x127fb20()*0.789732);
}

double nnFunc_25_25hi_1500ep__::synapse0x1286900() {
   return (neuron0x127fdf0()*-0.358119);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284160() {
   return (neuron0x1280270()*0.265034);
}

double nnFunc_25_25hi_1500ep__::synapse0x12841a0() {
   return (neuron0x12806f0()*0.706743);
}

double nnFunc_25_25hi_1500ep__::synapse0x12841e0() {
   return (neuron0x1280b70()*-0.423673);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284220() {
   return (neuron0x1280ff0()*0.15145);
}

double nnFunc_25_25hi_1500ep__::synapse0x1284260() {
   return (neuron0x1281470()*0.388838);
}

double nnFunc_25_25hi_1500ep__::synapse0x12842a0() {
   return (neuron0x12818f0()*0.34657);
}

double nnFunc_25_25hi_1500ep__::synapse0x12842e0() {
   return (neuron0x1281d70()*-0.768565);
}

double nnFunc_25_25hi_1500ep__::synapse0x12845d0() {
   return (neuron0x127adb0()*-0.9758);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287cd0() {
   return (neuron0x127b120()*2.18731);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287d10() {
   return (neuron0x127b5a0()*-0.469364);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287d50() {
   return (neuron0x127ba20()*-0.74701);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287d90() {
   return (neuron0x127bf30()*-0.857898);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287dd0() {
   return (neuron0x127c3b0()*0.223888);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287e10() {
   return (neuron0x127c830()*-0.826297);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287e50() {
   return (neuron0x127ce40()*-0.958937);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287e90() {
   return (neuron0x127d230()*-0.716762);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287ed0() {
   return (neuron0x127d6b0()*-1.53339);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287f10() {
   return (neuron0x127db30()*-0.69088);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287f50() {
   return (neuron0x127dfb0()*0.225649);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287f90() {
   return (neuron0x127e4c0()*0.175453);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287fd0() {
   return (neuron0x127cc30()*-0.712116);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288010() {
   return (neuron0x127edd0()*-0.658928);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288050() {
   return (neuron0x127f250()*-0.812949);
}

double nnFunc_25_25hi_1500ep__::synapse0x12844b0() {
   return (neuron0x127fb20()*0.394355);
}

double nnFunc_25_25hi_1500ep__::synapse0x12844f0() {
   return (neuron0x127fdf0()*-0.00370755);
}

double nnFunc_25_25hi_1500ep__::synapse0x12881a0() {
   return (neuron0x1280270()*0.291303);
}

double nnFunc_25_25hi_1500ep__::synapse0x12881e0() {
   return (neuron0x12806f0()*-0.547386);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288220() {
   return (neuron0x1280b70()*-1.19739);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288260() {
   return (neuron0x1280ff0()*-0.340046);
}

double nnFunc_25_25hi_1500ep__::synapse0x12882a0() {
   return (neuron0x1281470()*-0.170071);
}

double nnFunc_25_25hi_1500ep__::synapse0x12882e0() {
   return (neuron0x12818f0()*-0.359244);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288320() {
   return (neuron0x1281d70()*-1.06204);
}

double nnFunc_25_25hi_1500ep__::synapse0x12886a0() {
   return (neuron0x127adb0()*-1.91007);
}

double nnFunc_25_25hi_1500ep__::synapse0x12886e0() {
   return (neuron0x127b120()*-1.1039);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288720() {
   return (neuron0x127b5a0()*1.05262);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288760() {
   return (neuron0x127ba20()*1.01805);
}

double nnFunc_25_25hi_1500ep__::synapse0x12887a0() {
   return (neuron0x127bf30()*-0.454597);
}

double nnFunc_25_25hi_1500ep__::synapse0x12887e0() {
   return (neuron0x127c3b0()*0.334332);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288820() {
   return (neuron0x127c830()*1.23589);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288860() {
   return (neuron0x127ce40()*1.62434);
}

double nnFunc_25_25hi_1500ep__::synapse0x12888a0() {
   return (neuron0x127d230()*0.0927165);
}

double nnFunc_25_25hi_1500ep__::synapse0x12888e0() {
   return (neuron0x127d6b0()*-5.27767);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288920() {
   return (neuron0x127db30()*-0.127587);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288960() {
   return (neuron0x127dfb0()*-0.12359);
}

double nnFunc_25_25hi_1500ep__::synapse0x12889a0() {
   return (neuron0x127e4c0()*0.8734);
}

double nnFunc_25_25hi_1500ep__::synapse0x12889e0() {
   return (neuron0x127cc30()*0.307837);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288a20() {
   return (neuron0x127edd0()*-0.142967);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288a60() {
   return (neuron0x127f250()*-0.434499);
}

double nnFunc_25_25hi_1500ep__::synapse0x12884f0() {
   return (neuron0x127fb20()*1.2045);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288530() {
   return (neuron0x127fdf0()*0.379035);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288bb0() {
   return (neuron0x1280270()*0.819214);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288bf0() {
   return (neuron0x12806f0()*0.453419);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288c30() {
   return (neuron0x1280b70()*-1.18038);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288c70() {
   return (neuron0x1280ff0()*0.108741);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288cb0() {
   return (neuron0x1281470()*-0.257638);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288cf0() {
   return (neuron0x12818f0()*0.746323);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288d30() {
   return (neuron0x1281d70()*0.0493372);
}

double nnFunc_25_25hi_1500ep__::synapse0x12890b0() {
   return (neuron0x127adb0()*1.75499);
}

double nnFunc_25_25hi_1500ep__::synapse0x12890f0() {
   return (neuron0x127b120()*5.01347);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289130() {
   return (neuron0x127b5a0()*-0.136576);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289170() {
   return (neuron0x127ba20()*-0.774649);
}

double nnFunc_25_25hi_1500ep__::synapse0x12891b0() {
   return (neuron0x127bf30()*-0.659173);
}

double nnFunc_25_25hi_1500ep__::synapse0x12891f0() {
   return (neuron0x127c3b0()*-0.0451204);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289230() {
   return (neuron0x127c830()*-0.849132);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289270() {
   return (neuron0x127ce40()*-4.85307);
}

double nnFunc_25_25hi_1500ep__::synapse0x12892b0() {
   return (neuron0x127d230()*-2.35911);
}

double nnFunc_25_25hi_1500ep__::synapse0x12892f0() {
   return (neuron0x127d6b0()*5.60934);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289330() {
   return (neuron0x127db30()*-0.19326);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289370() {
   return (neuron0x127dfb0()*0.378013);
}

double nnFunc_25_25hi_1500ep__::synapse0x12893b0() {
   return (neuron0x127e4c0()*-1.27258);
}

double nnFunc_25_25hi_1500ep__::synapse0x12893f0() {
   return (neuron0x127cc30()*0.817636);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289430() {
   return (neuron0x127edd0()*0.353743);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289470() {
   return (neuron0x127f250()*0.638306);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288f00() {
   return (neuron0x127fb20()*-1.03913);
}

double nnFunc_25_25hi_1500ep__::synapse0x1288f40() {
   return (neuron0x127fdf0()*-0.49679);
}

double nnFunc_25_25hi_1500ep__::synapse0x12895c0() {
   return (neuron0x1280270()*-0.441271);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289600() {
   return (neuron0x12806f0()*-0.704005);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289640() {
   return (neuron0x1280b70()*0.711666);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289680() {
   return (neuron0x1280ff0()*-1.3204);
}

double nnFunc_25_25hi_1500ep__::synapse0x12896c0() {
   return (neuron0x1281470()*0.198331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289700() {
   return (neuron0x12818f0()*-1.14145);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289740() {
   return (neuron0x1281d70()*-0.0366924);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289ac0() {
   return (neuron0x127adb0()*-6.30577);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289b00() {
   return (neuron0x127b120()*-6.48331);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289b40() {
   return (neuron0x127b5a0()*0.905578);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289b80() {
   return (neuron0x127ba20()*5.92306);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289bc0() {
   return (neuron0x127bf30()*1.48627);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289c00() {
   return (neuron0x127c3b0()*-1.66434);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289c40() {
   return (neuron0x127c830()*0.772485);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289c80() {
   return (neuron0x127ce40()*5.45797);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289cc0() {
   return (neuron0x127d230()*2.87423);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289d00() {
   return (neuron0x127d6b0()*-20.2218);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289d40() {
   return (neuron0x127db30()*2.08498);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289d80() {
   return (neuron0x127dfb0()*0.657338);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289dc0() {
   return (neuron0x127e4c0()*4.59774);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289e00() {
   return (neuron0x127cc30()*-4.2152);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289e40() {
   return (neuron0x127edd0()*-0.252029);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289e80() {
   return (neuron0x127f250()*-0.581126);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289910() {
   return (neuron0x127fb20()*0.319806);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289950() {
   return (neuron0x127fdf0()*0.751118);
}

double nnFunc_25_25hi_1500ep__::synapse0x1289fd0() {
   return (neuron0x1280270()*-0.53567);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a010() {
   return (neuron0x12806f0()*-0.942725);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a050() {
   return (neuron0x1280b70()*-0.492713);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a090() {
   return (neuron0x1280ff0()*-0.516635);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a0d0() {
   return (neuron0x1281470()*0.308858);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a110() {
   return (neuron0x12818f0()*0.971846);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a150() {
   return (neuron0x1281d70()*0.253878);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a4d0() {
   return (neuron0x127adb0()*0.313101);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a510() {
   return (neuron0x127b120()*0.489053);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a550() {
   return (neuron0x127b5a0()*0.531499);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a590() {
   return (neuron0x127ba20()*0.600096);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a5d0() {
   return (neuron0x127bf30()*0.418199);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a610() {
   return (neuron0x127c3b0()*0.502435);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a650() {
   return (neuron0x127c830()*0.0912425);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a690() {
   return (neuron0x127ce40()*0.242379);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a6d0() {
   return (neuron0x127d230()*0.244322);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a710() {
   return (neuron0x127d6b0()*0.433969);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a750() {
   return (neuron0x127db30()*-0.203926);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a790() {
   return (neuron0x127dfb0()*0.126074);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a7d0() {
   return (neuron0x127e4c0()*0.365288);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a810() {
   return (neuron0x127cc30()*0.944244);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a850() {
   return (neuron0x127edd0()*0.245948);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a890() {
   return (neuron0x127f250()*-0.142796);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a320() {
   return (neuron0x127fb20()*0.417647);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a360() {
   return (neuron0x127fdf0()*-0.132577);
}

double nnFunc_25_25hi_1500ep__::synapse0x128a9e0() {
   return (neuron0x1280270()*-0.454501);
}

double nnFunc_25_25hi_1500ep__::synapse0x128aa20() {
   return (neuron0x12806f0()*0.376428);
}

double nnFunc_25_25hi_1500ep__::synapse0x128aa60() {
   return (neuron0x1280b70()*-0.0957286);
}

double nnFunc_25_25hi_1500ep__::synapse0x128aaa0() {
   return (neuron0x1280ff0()*0.231702);
}

double nnFunc_25_25hi_1500ep__::synapse0x128aae0() {
   return (neuron0x1281470()*-0.309115);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ab20() {
   return (neuron0x12818f0()*0.442305);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ab60() {
   return (neuron0x1281d70()*0.00392623);
}

double nnFunc_25_25hi_1500ep__::synapse0x128aee0() {
   return (neuron0x127adb0()*0.953025);
}

double nnFunc_25_25hi_1500ep__::synapse0x128af20() {
   return (neuron0x127b120()*-1.95205);
}

double nnFunc_25_25hi_1500ep__::synapse0x128af60() {
   return (neuron0x127b5a0()*0.327724);
}

double nnFunc_25_25hi_1500ep__::synapse0x128afa0() {
   return (neuron0x127ba20()*0.402267);
}

double nnFunc_25_25hi_1500ep__::synapse0x128afe0() {
   return (neuron0x127bf30()*-0.27794);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b020() {
   return (neuron0x127c3b0()*-0.119191);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b060() {
   return (neuron0x127c830()*0.0438967);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b0a0() {
   return (neuron0x127ce40()*-0.603558);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b0e0() {
   return (neuron0x127d230()*1.04511);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b120() {
   return (neuron0x127d6b0()*0.72198);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b160() {
   return (neuron0x127db30()*0.553348);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b1a0() {
   return (neuron0x127dfb0()*-0.399039);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b1e0() {
   return (neuron0x127e4c0()*-0.269972);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b220() {
   return (neuron0x127cc30()*-0.652858);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b260() {
   return (neuron0x127edd0()*0.291003);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b2a0() {
   return (neuron0x127f250()*0.343906);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ad30() {
   return (neuron0x127fb20()*-0.164273);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ad70() {
   return (neuron0x127fdf0()*0.293545);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b3f0() {
   return (neuron0x1280270()*-0.314301);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b430() {
   return (neuron0x12806f0()*0.693504);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b470() {
   return (neuron0x1280b70()*0.351003);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b4b0() {
   return (neuron0x1280ff0()*1.02043);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b4f0() {
   return (neuron0x1281470()*-0.163251);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b530() {
   return (neuron0x12818f0()*-0.0979921);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b570() {
   return (neuron0x1281d70()*-0.0725257);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b8f0() {
   return (neuron0x127adb0()*3.54557);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b930() {
   return (neuron0x127b120()*11.9004);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b970() {
   return (neuron0x127b5a0()*-1.64401);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b9b0() {
   return (neuron0x127ba20()*-5.3779);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b9f0() {
   return (neuron0x127bf30()*0.308512);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ba30() {
   return (neuron0x127c3b0()*-0.142567);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ba70() {
   return (neuron0x127c830()*-1.25994);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bab0() {
   return (neuron0x127ce40()*-4.33137);
}

double nnFunc_25_25hi_1500ep__::synapse0x128baf0() {
   return (neuron0x127d230()*-4.55858);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bb30() {
   return (neuron0x127d6b0()*13.5207);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bb70() {
   return (neuron0x127db30()*-0.827136);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bbb0() {
   return (neuron0x127dfb0()*-1.17171);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bbf0() {
   return (neuron0x127e4c0()*-8.31258);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bc30() {
   return (neuron0x127cc30()*0.682563);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bc70() {
   return (neuron0x127edd0()*0.40074);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bcb0() {
   return (neuron0x127f250()*0.792156);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b740() {
   return (neuron0x127fb20()*-0.707506);
}

double nnFunc_25_25hi_1500ep__::synapse0x128b780() {
   return (neuron0x127fdf0()*-0.0917151);
}

double nnFunc_25_25hi_1500ep__::synapse0x128be00() {
   return (neuron0x1280270()*-0.255504);
}

double nnFunc_25_25hi_1500ep__::synapse0x128be40() {
   return (neuron0x12806f0()*-0.0517133);
}

double nnFunc_25_25hi_1500ep__::synapse0x128be80() {
   return (neuron0x1280b70()*0.81512);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bec0() {
   return (neuron0x1280ff0()*-2.47415);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bf00() {
   return (neuron0x1281470()*0.413761);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bf40() {
   return (neuron0x12818f0()*-1.3003);
}

double nnFunc_25_25hi_1500ep__::synapse0x128bf80() {
   return (neuron0x1281d70()*-0.432308);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c300() {
   return (neuron0x127adb0()*1.16107);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c340() {
   return (neuron0x127b120()*5.56035);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c380() {
   return (neuron0x127b5a0()*-0.974547);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c3c0() {
   return (neuron0x127ba20()*-3.4587);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c400() {
   return (neuron0x127bf30()*-0.631995);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c440() {
   return (neuron0x127c3b0()*-0.327169);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c480() {
   return (neuron0x127c830()*-0.800676);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c4c0() {
   return (neuron0x127ce40()*-2.51657);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c500() {
   return (neuron0x127d230()*-4.98504);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c540() {
   return (neuron0x127d6b0()*-1.86727);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c580() {
   return (neuron0x127db30()*-1.28696);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c5c0() {
   return (neuron0x127dfb0()*-0.962687);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c600() {
   return (neuron0x127e4c0()*-1.50509);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c640() {
   return (neuron0x127cc30()*-0.340931);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c680() {
   return (neuron0x127edd0()*-0.714061);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c6c0() {
   return (neuron0x127f250()*-0.423744);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c150() {
   return (neuron0x127fb20()*-1.55039);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c190() {
   return (neuron0x127fdf0()*-0.189925);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c810() {
   return (neuron0x1280270()*-0.0286637);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c850() {
   return (neuron0x12806f0()*-0.543435);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c890() {
   return (neuron0x1280b70()*-0.598308);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c8d0() {
   return (neuron0x1280ff0()*-1.44943);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c910() {
   return (neuron0x1281470()*-0.28667);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c950() {
   return (neuron0x12818f0()*-0.19769);
}

double nnFunc_25_25hi_1500ep__::synapse0x128c990() {
   return (neuron0x1281d70()*-0.111129);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cd10() {
   return (neuron0x127adb0()*-2.89544);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cd50() {
   return (neuron0x127b120()*-8.54696);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cd90() {
   return (neuron0x127b5a0()*-0.516559);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cdd0() {
   return (neuron0x127ba20()*2.47555);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ce10() {
   return (neuron0x127bf30()*-0.211936);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ce50() {
   return (neuron0x127c3b0()*0.249396);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ce90() {
   return (neuron0x127c830()*0.537681);
}

double nnFunc_25_25hi_1500ep__::synapse0x128ced0() {
   return (neuron0x127ce40()*3.6222);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cf10() {
   return (neuron0x127d230()*0.857012);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cf50() {
   return (neuron0x127d6b0()*-7.65709);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cf90() {
   return (neuron0x127db30()*-0.314845);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cfd0() {
   return (neuron0x127dfb0()*0.433006);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d010() {
   return (neuron0x127e4c0()*3.5976);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d050() {
   return (neuron0x127cc30()*-1.67977);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d090() {
   return (neuron0x127edd0()*-0.126816);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d0d0() {
   return (neuron0x127f250()*-0.622897);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cb60() {
   return (neuron0x127fb20()*0.217526);
}

double nnFunc_25_25hi_1500ep__::synapse0x128cba0() {
   return (neuron0x127fdf0()*0.00350854);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d220() {
   return (neuron0x1280270()*0.0342709);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d260() {
   return (neuron0x12806f0()*-0.171384);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d2a0() {
   return (neuron0x1280b70()*0.253272);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d2e0() {
   return (neuron0x1280ff0()*-0.380022);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d320() {
   return (neuron0x1281470()*-0.721962);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d360() {
   return (neuron0x12818f0()*0.169398);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d3a0() {
   return (neuron0x1281d70()*0.623217);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d720() {
   return (neuron0x127adb0()*-1.1871);
}

double nnFunc_25_25hi_1500ep__::synapse0x127af40() {
   return (neuron0x127b120()*-4.36976);
}

double nnFunc_25_25hi_1500ep__::synapse0x127af80() {
   return (neuron0x127b5a0()*1.34776);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b340() {
   return (neuron0x127ba20()*3.2931);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b380() {
   return (neuron0x127bf30()*-0.922596);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b7c0() {
   return (neuron0x127c3b0()*0.341004);
}

double nnFunc_25_25hi_1500ep__::synapse0x127b800() {
   return (neuron0x127c830()*0.465869);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bc40() {
   return (neuron0x127ce40()*-0.0315971);
}

double nnFunc_25_25hi_1500ep__::synapse0x127bc80() {
   return (neuron0x127d230()*4.13545);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c150() {
   return (neuron0x127d6b0()*-1.60283);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c190() {
   return (neuron0x127db30()*0.429057);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c5d0() {
   return (neuron0x127dfb0()*1.22047);
}

double nnFunc_25_25hi_1500ep__::synapse0x127c610() {
   return (neuron0x127e4c0()*0.429029);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ca50() {
   return (neuron0x127cc30()*0.866222);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ca90() {
   return (neuron0x127edd0()*0.529252);
}

double nnFunc_25_25hi_1500ep__::synapse0x127cfd0() {
   return (neuron0x127f250()*0.0122892);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d010() {
   return (neuron0x127fb20()*1.02394);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d450() {
   return (neuron0x127fdf0()*0.306806);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d490() {
   return (neuron0x1280270()*0.0249507);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d8d0() {
   return (neuron0x12806f0()*0.237686);
}

double nnFunc_25_25hi_1500ep__::synapse0x127d910() {
   return (neuron0x1280b70()*-1.16205);
}

double nnFunc_25_25hi_1500ep__::synapse0x127dd50() {
   return (neuron0x1280ff0()*3.41883);
}

double nnFunc_25_25hi_1500ep__::synapse0x127dd90() {
   return (neuron0x1281470()*0.49988);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e1d0() {
   return (neuron0x12818f0()*0.41546);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e210() {
   return (neuron0x1281d70()*0.0145361);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287b90() {
   return (neuron0x127adb0()*0.905379);
}

double nnFunc_25_25hi_1500ep__::synapse0x1287bd0() {
   return (neuron0x127b120()*-3.54586);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f470() {
   return (neuron0x127b5a0()*0.887826);
}

double nnFunc_25_25hi_1500ep__::synapse0x127f4b0() {
   return (neuron0x127ba20()*0.554877);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d570() {
   return (neuron0x127bf30()*0.69996);
}

double nnFunc_25_25hi_1500ep__::synapse0x128d5b0() {
   return (neuron0x127c3b0()*-0.285046);
}

double nnFunc_25_25hi_1500ep__::synapse0x127a820() {
   return (neuron0x127c830()*0.257238);
}

double nnFunc_25_25hi_1500ep__::synapse0x127a860() {
   return (neuron0x127ce40()*-0.295146);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280010() {
   return (neuron0x127d230()*1.03786);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280050() {
   return (neuron0x127d6b0()*1.25539);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280490() {
   return (neuron0x127db30()*0.49169);
}

double nnFunc_25_25hi_1500ep__::synapse0x12804d0() {
   return (neuron0x127dfb0()*0.0410068);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280910() {
   return (neuron0x127e4c0()*0.972185);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280950() {
   return (neuron0x127cc30()*-1.65923);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280d90() {
   return (neuron0x127edd0()*-0.101337);
}

double nnFunc_25_25hi_1500ep__::synapse0x1280dd0() {
   return (neuron0x127f250()*-0.309765);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281210() {
   return (neuron0x127fb20()*-0.133484);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281250() {
   return (neuron0x127fdf0()*0.259877);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281690() {
   return (neuron0x1280270()*-0.72303);
}

double nnFunc_25_25hi_1500ep__::synapse0x12816d0() {
   return (neuron0x12806f0()*0.100238);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281b10() {
   return (neuron0x1280b70()*0.653325);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281b50() {
   return (neuron0x1280ff0()*0.976491);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281f90() {
   return (neuron0x1281470()*-0.299258);
}

double nnFunc_25_25hi_1500ep__::synapse0x1281fd0() {
   return (neuron0x12818f0()*0.244685);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e6e0() {
   return (neuron0x1281d70()*-0.0811635);
}

double nnFunc_25_25hi_1500ep__::synapse0x127e720() {
   return (neuron0x127adb0()*2.13165);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290990() {
   return (neuron0x127b120()*1.35783);
}

double nnFunc_25_25hi_1500ep__::synapse0x12909d0() {
   return (neuron0x127b5a0()*-0.246065);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290a10() {
   return (neuron0x127ba20()*-1.41797);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290a50() {
   return (neuron0x127bf30()*-0.615628);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290a90() {
   return (neuron0x127c3b0()*0.370484);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290ad0() {
   return (neuron0x127c830()*-0.221499);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290b10() {
   return (neuron0x127ce40()*-0.501716);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290b50() {
   return (neuron0x127d230()*-0.660139);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290b90() {
   return (neuron0x127d6b0()*3.18649);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290bd0() {
   return (neuron0x127db30()*-0.815273);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290c10() {
   return (neuron0x127dfb0()*0.0560098);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290c50() {
   return (neuron0x127e4c0()*-2.39715);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290c90() {
   return (neuron0x127cc30()*1.79314);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290cd0() {
   return (neuron0x127edd0()*0.00285044);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290d10() {
   return (neuron0x127f250()*0.98403);
}

double nnFunc_25_25hi_1500ep__::synapse0x12907e0() {
   return (neuron0x127fb20()*0.0612456);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290820() {
   return (neuron0x127fdf0()*0.0452852);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290e60() {
   return (neuron0x1280270()*-0.108696);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290ea0() {
   return (neuron0x12806f0()*1.06675);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290ee0() {
   return (neuron0x1280b70()*0.52432);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290f20() {
   return (neuron0x1280ff0()*-0.238791);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290f60() {
   return (neuron0x1281470()*-0.208095);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290fa0() {
   return (neuron0x12818f0()*-0.389606);
}

double nnFunc_25_25hi_1500ep__::synapse0x1290fe0() {
   return (neuron0x1281d70()*-0.285646);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291360() {
   return (neuron0x127adb0()*1.64606);
}

double nnFunc_25_25hi_1500ep__::synapse0x12913a0() {
   return (neuron0x127b120()*0.365859);
}

double nnFunc_25_25hi_1500ep__::synapse0x12913e0() {
   return (neuron0x127b5a0()*0.842276);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291420() {
   return (neuron0x127ba20()*-0.525201);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291460() {
   return (neuron0x127bf30()*0.0624866);
}

double nnFunc_25_25hi_1500ep__::synapse0x12914a0() {
   return (neuron0x127c3b0()*-0.480028);
}

double nnFunc_25_25hi_1500ep__::synapse0x12914e0() {
   return (neuron0x127c830()*-0.101829);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291520() {
   return (neuron0x127ce40()*-0.19169);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291560() {
   return (neuron0x127d230()*0.605874);
}

double nnFunc_25_25hi_1500ep__::synapse0x12915a0() {
   return (neuron0x127d6b0()*2.14609);
}

double nnFunc_25_25hi_1500ep__::synapse0x12915e0() {
   return (neuron0x127db30()*0.235583);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291620() {
   return (neuron0x127dfb0()*-0.190206);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291660() {
   return (neuron0x127e4c0()*-0.179748);
}

double nnFunc_25_25hi_1500ep__::synapse0x12916a0() {
   return (neuron0x127cc30()*1.89318);
}

double nnFunc_25_25hi_1500ep__::synapse0x12916e0() {
   return (neuron0x127edd0()*0.0746785);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291720() {
   return (neuron0x127f250()*0.273512);
}

double nnFunc_25_25hi_1500ep__::synapse0x12911b0() {
   return (neuron0x127fb20()*0.639367);
}

double nnFunc_25_25hi_1500ep__::synapse0x12911f0() {
   return (neuron0x127fdf0()*-0.171574);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291870() {
   return (neuron0x1280270()*-0.181613);
}

double nnFunc_25_25hi_1500ep__::synapse0x12918b0() {
   return (neuron0x12806f0()*0.654447);
}

double nnFunc_25_25hi_1500ep__::synapse0x12918f0() {
   return (neuron0x1280b70()*0.806193);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291930() {
   return (neuron0x1280ff0()*0.436513);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291970() {
   return (neuron0x1281470()*-0.0283396);
}

double nnFunc_25_25hi_1500ep__::synapse0x12919b0() {
   return (neuron0x12818f0()*0.00947927);
}

double nnFunc_25_25hi_1500ep__::synapse0x12919f0() {
   return (neuron0x1281d70()*-0.780958);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291d70() {
   return (neuron0x127adb0()*0.228056);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291db0() {
   return (neuron0x127b120()*-0.516044);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291df0() {
   return (neuron0x127b5a0()*1.04101);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291e30() {
   return (neuron0x127ba20()*1.05421);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291e70() {
   return (neuron0x127bf30()*-0.449673);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291eb0() {
   return (neuron0x127c3b0()*0.184552);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291ef0() {
   return (neuron0x127c830()*1.57398);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291f30() {
   return (neuron0x127ce40()*0.712059);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291f70() {
   return (neuron0x127d230()*0.885736);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291fb0() {
   return (neuron0x127d6b0()*-0.400993);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291ff0() {
   return (neuron0x127db30()*0.17108);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292030() {
   return (neuron0x127dfb0()*1.13588);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292070() {
   return (neuron0x127e4c0()*0.921906);
}

double nnFunc_25_25hi_1500ep__::synapse0x12920b0() {
   return (neuron0x127cc30()*-0.356747);
}

double nnFunc_25_25hi_1500ep__::synapse0x12920f0() {
   return (neuron0x127edd0()*0.0477664);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292130() {
   return (neuron0x127f250()*-0.187147);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291bc0() {
   return (neuron0x127fb20()*0.860667);
}

double nnFunc_25_25hi_1500ep__::synapse0x1291c00() {
   return (neuron0x127fdf0()*-0.287535);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292280() {
   return (neuron0x1280270()*-0.133359);
}

double nnFunc_25_25hi_1500ep__::synapse0x12922c0() {
   return (neuron0x12806f0()*0.133016);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292300() {
   return (neuron0x1280b70()*-0.40177);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292340() {
   return (neuron0x1280ff0()*0.95745);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292380() {
   return (neuron0x1281470()*-0.088141);
}

double nnFunc_25_25hi_1500ep__::synapse0x12923c0() {
   return (neuron0x12818f0()*1.77169);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292400() {
   return (neuron0x1281d70()*-0.0874199);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292780() {
   return (neuron0x127adb0()*0.182886);
}

double nnFunc_25_25hi_1500ep__::synapse0x12927c0() {
   return (neuron0x127b120()*0.199627);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292800() {
   return (neuron0x127b5a0()*-0.974079);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292840() {
   return (neuron0x127ba20()*-1.01808);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292880() {
   return (neuron0x127bf30()*-0.424135);
}

double nnFunc_25_25hi_1500ep__::synapse0x12928c0() {
   return (neuron0x127c3b0()*-0.0900321);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292900() {
   return (neuron0x127c830()*-1.14539);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292940() {
   return (neuron0x127ce40()*-0.223189);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292980() {
   return (neuron0x127d230()*-0.253702);
}

double nnFunc_25_25hi_1500ep__::synapse0x12929c0() {
   return (neuron0x127d6b0()*1.20713);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292a00() {
   return (neuron0x127db30()*-0.236428);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292a40() {
   return (neuron0x127dfb0()*-0.137486);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292a80() {
   return (neuron0x127e4c0()*-0.752996);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292ac0() {
   return (neuron0x127cc30()*0.439633);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292b00() {
   return (neuron0x127edd0()*0.355644);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292b40() {
   return (neuron0x127f250()*0.531524);
}

double nnFunc_25_25hi_1500ep__::synapse0x12925d0() {
   return (neuron0x127fb20()*-1.22118);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292610() {
   return (neuron0x127fdf0()*-0.836147);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292c90() {
   return (neuron0x1280270()*-0.156107);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292cd0() {
   return (neuron0x12806f0()*-0.619499);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292d10() {
   return (neuron0x1280b70()*0.35845);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292d50() {
   return (neuron0x1280ff0()*-0.148494);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292d90() {
   return (neuron0x1281470()*-0.147602);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292dd0() {
   return (neuron0x12818f0()*-1.1773);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292e10() {
   return (neuron0x1281d70()*-0.857288);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293190() {
   return (neuron0x127adb0()*0.393472);
}

double nnFunc_25_25hi_1500ep__::synapse0x12931d0() {
   return (neuron0x127b120()*-0.888026);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293210() {
   return (neuron0x127b5a0()*0.635102);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293250() {
   return (neuron0x127ba20()*0.155211);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293290() {
   return (neuron0x127bf30()*-0.0793353);
}

double nnFunc_25_25hi_1500ep__::synapse0x12932d0() {
   return (neuron0x127c3b0()*0.344116);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293310() {
   return (neuron0x127c830()*0.369297);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293350() {
   return (neuron0x127ce40()*0.732985);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293390() {
   return (neuron0x127d230()*0.118777);
}

double nnFunc_25_25hi_1500ep__::synapse0x12933d0() {
   return (neuron0x127d6b0()*0.919298);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293410() {
   return (neuron0x127db30()*-0.310757);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293450() {
   return (neuron0x127dfb0()*-0.050396);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293490() {
   return (neuron0x127e4c0()*-0.220225);
}

double nnFunc_25_25hi_1500ep__::synapse0x12934d0() {
   return (neuron0x127cc30()*-0.528447);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293510() {
   return (neuron0x127edd0()*-0.28842);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293550() {
   return (neuron0x127f250()*-0.284823);
}

double nnFunc_25_25hi_1500ep__::synapse0x1292fe0() {
   return (neuron0x127fb20()*0.591086);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293020() {
   return (neuron0x127fdf0()*-0.022936);
}

double nnFunc_25_25hi_1500ep__::synapse0x12936a0() {
   return (neuron0x1280270()*0.344372);
}

double nnFunc_25_25hi_1500ep__::synapse0x12936e0() {
   return (neuron0x12806f0()*0.225096);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293720() {
   return (neuron0x1280b70()*0.831908);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293760() {
   return (neuron0x1280ff0()*0.546347);
}

double nnFunc_25_25hi_1500ep__::synapse0x12937a0() {
   return (neuron0x1281470()*0.317676);
}

double nnFunc_25_25hi_1500ep__::synapse0x12937e0() {
   return (neuron0x12818f0()*0.20516);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293820() {
   return (neuron0x1281d70()*0.698414);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293ba0() {
   return (neuron0x127adb0()*-1.21611);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293be0() {
   return (neuron0x127b120()*-0.325417);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293c20() {
   return (neuron0x127b5a0()*-0.0489258);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293c60() {
   return (neuron0x127ba20()*-0.359506);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293ca0() {
   return (neuron0x127bf30()*0.143968);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293ce0() {
   return (neuron0x127c3b0()*-0.561062);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293d20() {
   return (neuron0x127c830()*0.0864273);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293d60() {
   return (neuron0x127ce40()*0.31415);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293da0() {
   return (neuron0x127d230()*0.144097);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293de0() {
   return (neuron0x127d6b0()*-2.06494);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293e20() {
   return (neuron0x127db30()*0.613154);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293e60() {
   return (neuron0x127dfb0()*-0.163176);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293ea0() {
   return (neuron0x127e4c0()*1.31547);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293ee0() {
   return (neuron0x127cc30()*-1.35143);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293f20() {
   return (neuron0x127edd0()*-0.12121);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293f60() {
   return (neuron0x127f250()*-0.383695);
}

double nnFunc_25_25hi_1500ep__::synapse0x12939f0() {
   return (neuron0x127fb20()*-0.668617);
}

double nnFunc_25_25hi_1500ep__::synapse0x1293a30() {
   return (neuron0x127fdf0()*0.333639);
}

double nnFunc_25_25hi_1500ep__::synapse0x12940b0() {
   return (neuron0x1280270()*0.335443);
}

double nnFunc_25_25hi_1500ep__::synapse0x12940f0() {
   return (neuron0x12806f0()*-1.07605);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294130() {
   return (neuron0x1280b70()*-0.0136972);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294170() {
   return (neuron0x1280ff0()*-0.469186);
}

double nnFunc_25_25hi_1500ep__::synapse0x12941b0() {
   return (neuron0x1281470()*-0.403751);
}

double nnFunc_25_25hi_1500ep__::synapse0x12941f0() {
   return (neuron0x12818f0()*-0.165257);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294230() {
   return (neuron0x1281d70()*-0.0287567);
}

double nnFunc_25_25hi_1500ep__::synapse0x12945b0() {
   return (neuron0x127adb0()*-2.47186);
}

double nnFunc_25_25hi_1500ep__::synapse0x12945f0() {
   return (neuron0x127b120()*-1.5868);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294630() {
   return (neuron0x127b5a0()*-0.358242);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294670() {
   return (neuron0x127ba20()*1.41257);
}

double nnFunc_25_25hi_1500ep__::synapse0x12946b0() {
   return (neuron0x127bf30()*0.519219);
}

double nnFunc_25_25hi_1500ep__::synapse0x12946f0() {
   return (neuron0x127c3b0()*-0.323478);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294730() {
   return (neuron0x127c830()*0.252985);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294770() {
   return (neuron0x127ce40()*0.0534948);
}

double nnFunc_25_25hi_1500ep__::synapse0x12947b0() {
   return (neuron0x127d230()*1.38034);
}

double nnFunc_25_25hi_1500ep__::synapse0x12947f0() {
   return (neuron0x127d6b0()*-3.54693);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294830() {
   return (neuron0x127db30()*0.573235);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294870() {
   return (neuron0x127dfb0()*0.697272);
}

double nnFunc_25_25hi_1500ep__::synapse0x12948b0() {
   return (neuron0x127e4c0()*2.94232);
}

double nnFunc_25_25hi_1500ep__::synapse0x12948f0() {
   return (neuron0x127cc30()*-2.59579);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294930() {
   return (neuron0x127edd0()*0.0314746);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294970() {
   return (neuron0x127f250()*-0.987394);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294400() {
   return (neuron0x127fb20()*-0.0363313);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294440() {
   return (neuron0x127fdf0()*0.161165);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294ac0() {
   return (neuron0x1280270()*0.0219541);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294b00() {
   return (neuron0x12806f0()*-0.647288);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294b40() {
   return (neuron0x1280b70()*-0.38332);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294b80() {
   return (neuron0x1280ff0()*-0.241393);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294bc0() {
   return (neuron0x1281470()*-0.458836);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294c00() {
   return (neuron0x12818f0()*0.620459);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294c40() {
   return (neuron0x1281d70()*-0.0152388);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294fc0() {
   return (neuron0x127adb0()*-9.33804);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295000() {
   return (neuron0x127b120()*-18.3046);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295040() {
   return (neuron0x127b5a0()*3.01932);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295080() {
   return (neuron0x127ba20()*7.61496);
}

double nnFunc_25_25hi_1500ep__::synapse0x12950c0() {
   return (neuron0x127bf30()*0.297888);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295100() {
   return (neuron0x127c3b0()*-0.590265);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295140() {
   return (neuron0x127c830()*3.24681);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295180() {
   return (neuron0x127ce40()*4.49682);
}

double nnFunc_25_25hi_1500ep__::synapse0x12951c0() {
   return (neuron0x127d230()*10.2688);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295200() {
   return (neuron0x127d6b0()*-26.0742);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295240() {
   return (neuron0x127db30()*1.51893);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295280() {
   return (neuron0x127dfb0()*1.53682);
}

double nnFunc_25_25hi_1500ep__::synapse0x12952c0() {
   return (neuron0x127e4c0()*12.068);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295300() {
   return (neuron0x127cc30()*-0.297172);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295340() {
   return (neuron0x127edd0()*0.324574);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295380() {
   return (neuron0x127f250()*-0.450131);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294e10() {
   return (neuron0x127fb20()*2.14195);
}

double nnFunc_25_25hi_1500ep__::synapse0x1294e50() {
   return (neuron0x127fdf0()*0.806734);
}

double nnFunc_25_25hi_1500ep__::synapse0x12954d0() {
   return (neuron0x1280270()*0.783548);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295510() {
   return (neuron0x12806f0()*1.4318);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295550() {
   return (neuron0x1280b70()*-0.233054);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295590() {
   return (neuron0x1280ff0()*-0.185955);
}

double nnFunc_25_25hi_1500ep__::synapse0x12955d0() {
   return (neuron0x1281470()*0.394171);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295610() {
   return (neuron0x12818f0()*3.37949);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295650() {
   return (neuron0x1281d70()*0.934418);
}

double nnFunc_25_25hi_1500ep__::synapse0x12958b0() {
   return (neuron0x1283c80()*-3.70253);
}

double nnFunc_25_25hi_1500ep__::synapse0x12958f0() {
   return (neuron0x127ea50()*0.215027);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295930() {
   return (neuron0x12847f0()*1.62457);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295970() {
   return (neuron0x1285310()*2.48115);
}

double nnFunc_25_25hi_1500ep__::synapse0x12959b0() {
   return (neuron0x1285d20()*0.767408);
}

double nnFunc_25_25hi_1500ep__::synapse0x12959f0() {
   return (neuron0x1286730()*2.02021);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295a30() {
   return (neuron0x1284320()*5.3898);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295a70() {
   return (neuron0x1288360()*4.44824);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295ab0() {
   return (neuron0x1288d70()*4.19988);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295af0() {
   return (neuron0x1289780()*-6.32236);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295b30() {
   return (neuron0x128a190()*1.28255);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295b70() {
   return (neuron0x128aba0()*-1.73296);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295bb0() {
   return (neuron0x128b5b0()*-5.48266);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295bf0() {
   return (neuron0x128bfc0()*5.69005);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295c30() {
   return (neuron0x128c9d0()*9.45628);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295c70() {
   return (neuron0x128d3e0()*-5.85544);
}

double nnFunc_25_25hi_1500ep__::synapse0x127ac80() {
   return (neuron0x1287a00()*-3.18821);
}

double nnFunc_25_25hi_1500ep__::synapse0x127acc0() {
   return (neuron0x1290650()*3.56734);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295dc0() {
   return (neuron0x1291020()*-1.07343);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295e00() {
   return (neuron0x1291a30()*1.79501);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295e40() {
   return (neuron0x1292440()*-0.735791);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295e80() {
   return (neuron0x1292e50()*-1.4624);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295ec0() {
   return (neuron0x1293860()*-1.48963);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295f00() {
   return (neuron0x1294270()*-2.86123);
}

double nnFunc_25_25hi_1500ep__::synapse0x1295f40() {
   return (neuron0x1294c80()*-6.32078);
}

