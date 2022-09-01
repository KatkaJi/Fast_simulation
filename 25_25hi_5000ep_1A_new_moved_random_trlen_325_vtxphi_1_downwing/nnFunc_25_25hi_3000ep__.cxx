#include "25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_downwing/nnFunc_25_25hi_3000ep__.h"
#include <cmath>

double nnFunc_25_25hi_3000ep__::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1042540();
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
         return neuron0x1042540();
     default:
         return 0.;
   }
}

double nnFunc_25_25hi_3000ep__::neuron0x1026af0() {
   return input0;
}

double nnFunc_25_25hi_3000ep__::neuron0x1026e30() {
   return input1;
}

double nnFunc_25_25hi_3000ep__::neuron0x1027170() {
   return input2;
}

double nnFunc_25_25hi_3000ep__::neuron0x10274b0() {
   return input3;
}

double nnFunc_25_25hi_3000ep__::neuron0x10277f0() {
   return input4;
}

double nnFunc_25_25hi_3000ep__::input0x1027c60() {
   double input = 1.48867;
   input += synapse0xf33c70();
   input += synapse0x1015f60();
   input += synapse0x1027f10();
   input += synapse0x1027f50();
   input += synapse0x1027f90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1027c60() {
   double input = input0x1027c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1027fd0() {
   double input = -1.89019;
   input += synapse0x1028310();
   input += synapse0x1028350();
   input += synapse0x1028390();
   input += synapse0x10283d0();
   input += synapse0x1028410();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1027fd0() {
   double input = input0x1027fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1028450() {
   double input = 3.16768;
   input += synapse0x1028790();
   input += synapse0x10287d0();
   input += synapse0x1028810();
   input += synapse0x1028850();
   input += synapse0x1028890();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1028450() {
   double input = input0x1028450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10288d0() {
   double input = 1.2014;
   input += synapse0x1028c10();
   input += synapse0x1028c50();
   input += synapse0xf25e60();
   input += synapse0xf25ea0();
   input += synapse0x1028da0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10288d0() {
   double input = input0x10288d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1028de0() {
   double input = -0.0356548;
   input += synapse0x1029120();
   input += synapse0x1029160();
   input += synapse0x10291a0();
   input += synapse0x10291e0();
   input += synapse0x1029220();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1028de0() {
   double input = input0x1028de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1029260() {
   double input = 0.98533;
   input += synapse0x10295a0();
   input += synapse0x10295e0();
   input += synapse0x1029620();
   input += synapse0x1029660();
   input += synapse0x10296a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1029260() {
   double input = input0x1029260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10296e0() {
   double input = 0.900125;
   input += synapse0x1029a20();
   input += synapse0x1029a60();
   input += synapse0x1029aa0();
   input += synapse0x1028c90();
   input += synapse0x1028cd0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10296e0() {
   double input = input0x10296e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1029cf0() {
   double input = 0.760525;
   input += synapse0x1029fa0();
   input += synapse0x1029fe0();
   input += synapse0x102a020();
   input += synapse0x102a060();
   input += synapse0x102a0a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1029cf0() {
   double input = input0x1029cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102a0e0() {
   double input = -2.16708;
   input += synapse0x102a420();
   input += synapse0x102a460();
   input += synapse0x102a4a0();
   input += synapse0x102a4e0();
   input += synapse0x102a520();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102a0e0() {
   double input = input0x102a0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102a560() {
   double input = -0.583962;
   input += synapse0x102a8a0();
   input += synapse0x102a8e0();
   input += synapse0x102a920();
   input += synapse0x102a960();
   input += synapse0x102a9a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102a560() {
   double input = input0x102a560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102a9e0() {
   double input = 2.79457;
   input += synapse0x102ad20();
   input += synapse0x102ad60();
   input += synapse0x102ada0();
   input += synapse0x102ade0();
   input += synapse0x102ae20();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102a9e0() {
   double input = input0x102a9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102ae60() {
   double input = -5.21821;
   input += synapse0xf25cb0();
   input += synapse0xf25cf0();
   input += synapse0x102b2b0();
   input += synapse0x102b2f0();
   input += synapse0x102b330();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102ae60() {
   double input = input0x102ae60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102b370() {
   double input = -30.801;
   input += synapse0x102b6b0();
   input += synapse0x102b6f0();
   input += synapse0x102b730();
   input += synapse0x102b770();
   input += synapse0x102b7b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102b370() {
   double input = input0x102b370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1029ae0() {
   double input = 15.8071;
   input += synapse0xf26480();
   input += synapse0x1029c70();
   input += synapse0x1029cb0();
   input += synapse0x102bc00();
   input += synapse0x102bc40();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1029ae0() {
   double input = input0x1029ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102bc80() {
   double input = -3.07902;
   input += synapse0x102bfc0();
   input += synapse0x102c000();
   input += synapse0x102c040();
   input += synapse0x102c080();
   input += synapse0x102c0c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102bc80() {
   double input = input0x102bc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102c100() {
   double input = -2.58567;
   input += synapse0x102c440();
   input += synapse0x1026d10();
   input += synapse0x1026d50();
   input += synapse0x1027050();
   input += synapse0x1027090();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102c100() {
   double input = input0x102c100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102c9d0() {
   double input = 0.911629;
   input += synapse0x102cb60();
   input += synapse0x102cba0();
   input += synapse0x102cbe0();
   input += synapse0x102cc20();
   input += synapse0x102cc60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102c9d0() {
   double input = input0x102c9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102cca0() {
   double input = 12.987;
   input += synapse0x102cfe0();
   input += synapse0x102d020();
   input += synapse0x102d060();
   input += synapse0x102d0a0();
   input += synapse0x102d0e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102cca0() {
   double input = input0x102cca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102d120() {
   double input = 4.18543;
   input += synapse0x102d460();
   input += synapse0x102d4a0();
   input += synapse0x102d4e0();
   input += synapse0x102d520();
   input += synapse0x102d560();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102d120() {
   double input = input0x102d120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102d5a0() {
   double input = 9.89466;
   input += synapse0x102d8e0();
   input += synapse0x102d920();
   input += synapse0x102d960();
   input += synapse0x102d9a0();
   input += synapse0x102d9e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102d5a0() {
   double input = input0x102d5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102da20() {
   double input = -11.9433;
   input += synapse0x102dd60();
   input += synapse0x102dda0();
   input += synapse0x102dde0();
   input += synapse0x102de20();
   input += synapse0x102de60();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102da20() {
   double input = input0x102da20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102dea0() {
   double input = 0.865588;
   input += synapse0x102e1e0();
   input += synapse0x102e220();
   input += synapse0x102e260();
   input += synapse0x102e2a0();
   input += synapse0x102e2e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102dea0() {
   double input = input0x102dea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102e320() {
   double input = 1.09899;
   input += synapse0x102e660();
   input += synapse0x102e6a0();
   input += synapse0x102e6e0();
   input += synapse0x102e720();
   input += synapse0x102e760();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102e320() {
   double input = input0x102e320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102e7a0() {
   double input = 0.694724;
   input += synapse0x102eae0();
   input += synapse0x102eb20();
   input += synapse0x102eb60();
   input += synapse0x102eba0();
   input += synapse0x102ebe0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102e7a0() {
   double input = input0x102e7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102ec20() {
   double input = 0.13996;
   input += synapse0x102ef60();
   input += synapse0x102efa0();
   input += synapse0x102efe0();
   input += synapse0x102f020();
   input += synapse0x102f060();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102ec20() {
   double input = input0x102ec20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1030b30() {
   double input = 0.509149;
   input += synapse0x1028b80();
   input += synapse0x1028bc0();
   input += synapse0x1029090();
   input += synapse0x10290d0();
   input += synapse0x1029510();
   input += synapse0x1029550();
   input += synapse0x1029990();
   input += synapse0x10299d0();
   input += synapse0x1029f10();
   input += synapse0x1029f50();
   input += synapse0x102a390();
   input += synapse0x102a3d0();
   input += synapse0x102a810();
   input += synapse0x102a850();
   input += synapse0x102ac90();
   input += synapse0x102acd0();
   input += synapse0x102b110();
   input += synapse0x102b150();
   input += synapse0x102b620();
   input += synapse0x102b660();
   input += synapse0x102bf30();
   input += synapse0x102bf70();
   input += synapse0x102c3b0();
   input += synapse0x102c3f0();
   input += synapse0x1027a10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1030b30() {
   double input = input0x1030b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x102b900() {
   double input = 0.938616;
   input += synapse0x102ba90();
   input += synapse0x102bad0();
   input += synapse0x102bb10();
   input += synapse0x102bb50();
   input += synapse0x102bb90();
   input += synapse0x1027a50();
   input += synapse0x102dcd0();
   input += synapse0x102dd10();
   input += synapse0x102e150();
   input += synapse0x102e190();
   input += synapse0x102e5d0();
   input += synapse0x102e610();
   input += synapse0x102ea50();
   input += synapse0x102ea90();
   input += synapse0x102eed0();
   input += synapse0x102ef10();
   input += synapse0x1027e80();
   input += synapse0x1027ec0();
   input += synapse0x102cf50();
   input += synapse0x102cf90();
   input += synapse0xf33d40();
   input += synapse0xf33d80();
   input += synapse0x10315e0();
   input += synapse0x1031620();
   input += synapse0x1031660();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x102b900() {
   double input = input0x102b900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10316a0() {
   double input = 0.49401;
   input += synapse0x102b1a0();
   input += synapse0x102b1e0();
   input += synapse0x102b220();
   input += synapse0x102b260();
   input += synapse0x1031bf0();
   input += synapse0x1031c30();
   input += synapse0x1031c70();
   input += synapse0x1031cb0();
   input += synapse0x1031cf0();
   input += synapse0x1031d30();
   input += synapse0x1031d70();
   input += synapse0x1031db0();
   input += synapse0x1031df0();
   input += synapse0x1031e30();
   input += synapse0x1031e70();
   input += synapse0x1031eb0();
   input += synapse0x1031830();
   input += synapse0x1031870();
   input += synapse0x1032000();
   input += synapse0x1032040();
   input += synapse0x1032080();
   input += synapse0x10320c0();
   input += synapse0x1032100();
   input += synapse0x1032140();
   input += synapse0x1032180();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10316a0() {
   double input = input0x10316a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10321c0() {
   double input = 0.449586;
   input += synapse0x1032500();
   input += synapse0x1032540();
   input += synapse0x1032580();
   input += synapse0x10325c0();
   input += synapse0x1032600();
   input += synapse0x1032640();
   input += synapse0x1032680();
   input += synapse0x10326c0();
   input += synapse0x1032700();
   input += synapse0x1032740();
   input += synapse0x1032780();
   input += synapse0x10327c0();
   input += synapse0x1032800();
   input += synapse0x1032840();
   input += synapse0x1032880();
   input += synapse0x10328c0();
   input += synapse0x1032350();
   input += synapse0x1032390();
   input += synapse0x1032a10();
   input += synapse0x1032a50();
   input += synapse0x1032a90();
   input += synapse0x1032ad0();
   input += synapse0x1032b10();
   input += synapse0x1032b50();
   input += synapse0x1032b90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10321c0() {
   double input = input0x10321c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1032bd0() {
   double input = -0.823049;
   input += synapse0x1032f10();
   input += synapse0x1032f50();
   input += synapse0x1032f90();
   input += synapse0x1032fd0();
   input += synapse0x1033010();
   input += synapse0x1033050();
   input += synapse0x1033090();
   input += synapse0x10330d0();
   input += synapse0x1033110();
   input += synapse0x1033150();
   input += synapse0x1033190();
   input += synapse0x10331d0();
   input += synapse0x1033210();
   input += synapse0x1033250();
   input += synapse0x1033290();
   input += synapse0x10332d0();
   input += synapse0x1032d60();
   input += synapse0x1032da0();
   input += synapse0x1033420();
   input += synapse0x1033460();
   input += synapse0x10334a0();
   input += synapse0x10334e0();
   input += synapse0x1033520();
   input += synapse0x1033560();
   input += synapse0x10335a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1032bd0() {
   double input = input0x1032bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10335e0() {
   double input = -1.08121;
   input += synapse0x1033920();
   input += synapse0x1033960();
   input += synapse0x10339a0();
   input += synapse0x10339e0();
   input += synapse0x1033a20();
   input += synapse0x1033a60();
   input += synapse0x1033aa0();
   input += synapse0x1030cc0();
   input += synapse0x1030d00();
   input += synapse0x1030d40();
   input += synapse0x1030d80();
   input += synapse0x1030dc0();
   input += synapse0x1030e00();
   input += synapse0x1030e40();
   input += synapse0x1030e80();
   input += synapse0x1030ec0();
   input += synapse0x1033770();
   input += synapse0x10337b0();
   input += synapse0x1031010();
   input += synapse0x1031050();
   input += synapse0x1031090();
   input += synapse0x10310d0();
   input += synapse0x1031110();
   input += synapse0x1031150();
   input += synapse0x1031190();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10335e0() {
   double input = input0x10335e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10311d0() {
   double input = 1.78722;
   input += synapse0x1031480();
   input += synapse0x1034b80();
   input += synapse0x1034bc0();
   input += synapse0x1034c00();
   input += synapse0x1034c40();
   input += synapse0x1034c80();
   input += synapse0x1034cc0();
   input += synapse0x1034d00();
   input += synapse0x1034d40();
   input += synapse0x1034d80();
   input += synapse0x1034dc0();
   input += synapse0x1034e00();
   input += synapse0x1034e40();
   input += synapse0x1034e80();
   input += synapse0x1034ec0();
   input += synapse0x1034f00();
   input += synapse0x1031360();
   input += synapse0x10313a0();
   input += synapse0x1035050();
   input += synapse0x1035090();
   input += synapse0x10350d0();
   input += synapse0x1035110();
   input += synapse0x1035150();
   input += synapse0x1035190();
   input += synapse0x10351d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10311d0() {
   double input = input0x10311d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1035210() {
   double input = -1.53654;
   input += synapse0x1035550();
   input += synapse0x1035590();
   input += synapse0x10355d0();
   input += synapse0x1035610();
   input += synapse0x1035650();
   input += synapse0x1035690();
   input += synapse0x10356d0();
   input += synapse0x1035710();
   input += synapse0x1035750();
   input += synapse0x1035790();
   input += synapse0x10357d0();
   input += synapse0x1035810();
   input += synapse0x1035850();
   input += synapse0x1035890();
   input += synapse0x10358d0();
   input += synapse0x1035910();
   input += synapse0x10353a0();
   input += synapse0x10353e0();
   input += synapse0x1035a60();
   input += synapse0x1035aa0();
   input += synapse0x1035ae0();
   input += synapse0x1035b20();
   input += synapse0x1035b60();
   input += synapse0x1035ba0();
   input += synapse0x1035be0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1035210() {
   double input = input0x1035210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1035c20() {
   double input = -0.307282;
   input += synapse0x1035f60();
   input += synapse0x1035fa0();
   input += synapse0x1035fe0();
   input += synapse0x1036020();
   input += synapse0x1036060();
   input += synapse0x10360a0();
   input += synapse0x10360e0();
   input += synapse0x1036120();
   input += synapse0x1036160();
   input += synapse0x10361a0();
   input += synapse0x10361e0();
   input += synapse0x1036220();
   input += synapse0x1036260();
   input += synapse0x10362a0();
   input += synapse0x10362e0();
   input += synapse0x1036320();
   input += synapse0x1035db0();
   input += synapse0x1035df0();
   input += synapse0x1036470();
   input += synapse0x10364b0();
   input += synapse0x10364f0();
   input += synapse0x1036530();
   input += synapse0x1036570();
   input += synapse0x10365b0();
   input += synapse0x10365f0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1035c20() {
   double input = input0x1035c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1036630() {
   double input = -2.01661;
   input += synapse0x1036970();
   input += synapse0x10369b0();
   input += synapse0x10369f0();
   input += synapse0x1036a30();
   input += synapse0x1036a70();
   input += synapse0x1036ab0();
   input += synapse0x1036af0();
   input += synapse0x1036b30();
   input += synapse0x1036b70();
   input += synapse0x1036bb0();
   input += synapse0x1036bf0();
   input += synapse0x1036c30();
   input += synapse0x1036c70();
   input += synapse0x1036cb0();
   input += synapse0x1036cf0();
   input += synapse0x1036d30();
   input += synapse0x10367c0();
   input += synapse0x1036800();
   input += synapse0x1036e80();
   input += synapse0x1036ec0();
   input += synapse0x1036f00();
   input += synapse0x1036f40();
   input += synapse0x1036f80();
   input += synapse0x1036fc0();
   input += synapse0x1037000();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1036630() {
   double input = input0x1036630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1037040() {
   double input = 1.57902;
   input += synapse0x1037380();
   input += synapse0x10373c0();
   input += synapse0x1037400();
   input += synapse0x1037440();
   input += synapse0x1037480();
   input += synapse0x10374c0();
   input += synapse0x1037500();
   input += synapse0x1037540();
   input += synapse0x1037580();
   input += synapse0x10375c0();
   input += synapse0x1037600();
   input += synapse0x1037640();
   input += synapse0x1037680();
   input += synapse0x10376c0();
   input += synapse0x1037700();
   input += synapse0x1037740();
   input += synapse0x10371d0();
   input += synapse0x1037210();
   input += synapse0x1037890();
   input += synapse0x10378d0();
   input += synapse0x1037910();
   input += synapse0x1037950();
   input += synapse0x1037990();
   input += synapse0x10379d0();
   input += synapse0x1037a10();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1037040() {
   double input = input0x1037040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1037a50() {
   double input = 0.506663;
   input += synapse0x1037d90();
   input += synapse0x1037dd0();
   input += synapse0x1037e10();
   input += synapse0x1037e50();
   input += synapse0x1037e90();
   input += synapse0x1037ed0();
   input += synapse0x1037f10();
   input += synapse0x1037f50();
   input += synapse0x1037f90();
   input += synapse0x1037fd0();
   input += synapse0x1038010();
   input += synapse0x1038050();
   input += synapse0x1038090();
   input += synapse0x10380d0();
   input += synapse0x1038110();
   input += synapse0x1038150();
   input += synapse0x1037be0();
   input += synapse0x1037c20();
   input += synapse0x10382a0();
   input += synapse0x10382e0();
   input += synapse0x1038320();
   input += synapse0x1038360();
   input += synapse0x10383a0();
   input += synapse0x10383e0();
   input += synapse0x1038420();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1037a50() {
   double input = input0x1037a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1038460() {
   double input = 0.236412;
   input += synapse0x10387a0();
   input += synapse0x10387e0();
   input += synapse0x1038820();
   input += synapse0x1038860();
   input += synapse0x10388a0();
   input += synapse0x10388e0();
   input += synapse0x1038920();
   input += synapse0x1038960();
   input += synapse0x10389a0();
   input += synapse0x10389e0();
   input += synapse0x1038a20();
   input += synapse0x1038a60();
   input += synapse0x1038aa0();
   input += synapse0x1038ae0();
   input += synapse0x1038b20();
   input += synapse0x1038b60();
   input += synapse0x10385f0();
   input += synapse0x1038630();
   input += synapse0x1038cb0();
   input += synapse0x1038cf0();
   input += synapse0x1038d30();
   input += synapse0x1038d70();
   input += synapse0x1038db0();
   input += synapse0x1038df0();
   input += synapse0x1038e30();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1038460() {
   double input = input0x1038460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1038e70() {
   double input = 0.885156;
   input += synapse0x10391b0();
   input += synapse0x10391f0();
   input += synapse0x1039230();
   input += synapse0x1039270();
   input += synapse0x10392b0();
   input += synapse0x10392f0();
   input += synapse0x1039330();
   input += synapse0x1039370();
   input += synapse0x10393b0();
   input += synapse0x10393f0();
   input += synapse0x1039430();
   input += synapse0x1039470();
   input += synapse0x10394b0();
   input += synapse0x10394f0();
   input += synapse0x1039530();
   input += synapse0x1039570();
   input += synapse0x1039000();
   input += synapse0x1039040();
   input += synapse0x10396c0();
   input += synapse0x1039700();
   input += synapse0x1039740();
   input += synapse0x1039780();
   input += synapse0x10397c0();
   input += synapse0x1039800();
   input += synapse0x1039840();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1038e70() {
   double input = input0x1038e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1039880() {
   double input = 0.994366;
   input += synapse0x1039bc0();
   input += synapse0x1039c00();
   input += synapse0x1039c40();
   input += synapse0x1039c80();
   input += synapse0x1039cc0();
   input += synapse0x1039d00();
   input += synapse0x1039d40();
   input += synapse0x1039d80();
   input += synapse0x1039dc0();
   input += synapse0x1039e00();
   input += synapse0x1039e40();
   input += synapse0x1039e80();
   input += synapse0x1039ec0();
   input += synapse0x1039f00();
   input += synapse0x1039f40();
   input += synapse0x1039f80();
   input += synapse0x1039a10();
   input += synapse0x1039a50();
   input += synapse0x103a0d0();
   input += synapse0x103a110();
   input += synapse0x103a150();
   input += synapse0x103a190();
   input += synapse0x103a1d0();
   input += synapse0x103a210();
   input += synapse0x103a250();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1039880() {
   double input = input0x1039880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x103a290() {
   double input = -0.339562;
   input += synapse0x103a5d0();
   input += synapse0x1027df0();
   input += synapse0x1027e30();
   input += synapse0x10281f0();
   input += synapse0x1028230();
   input += synapse0x1028670();
   input += synapse0x10286b0();
   input += synapse0x1028af0();
   input += synapse0x1028b30();
   input += synapse0x1029000();
   input += synapse0x1029040();
   input += synapse0x1029480();
   input += synapse0x10294c0();
   input += synapse0x1029900();
   input += synapse0x1029940();
   input += synapse0x1029e80();
   input += synapse0x1029ec0();
   input += synapse0x102a300();
   input += synapse0x102a340();
   input += synapse0x102a780();
   input += synapse0x102a7c0();
   input += synapse0x102ac00();
   input += synapse0x102ac40();
   input += synapse0x102b080();
   input += synapse0x102b0c0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x103a290() {
   double input = input0x103a290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x10348b0() {
   double input = -1.61471;
   input += synapse0x1034a40();
   input += synapse0x1034a80();
   input += synapse0x102c320();
   input += synapse0x102c360();
   input += synapse0x103a420();
   input += synapse0x103a460();
   input += synapse0x10276d0();
   input += synapse0x1027710();
   input += synapse0x102cec0();
   input += synapse0x102cf00();
   input += synapse0x102d340();
   input += synapse0x102d380();
   input += synapse0x102d7c0();
   input += synapse0x102d800();
   input += synapse0x102dc40();
   input += synapse0x102dc80();
   input += synapse0x102e0c0();
   input += synapse0x102e100();
   input += synapse0x102e540();
   input += synapse0x102e580();
   input += synapse0x102e9c0();
   input += synapse0x102ea00();
   input += synapse0x102ee40();
   input += synapse0x102ee80();
   input += synapse0x102b590();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x10348b0() {
   double input = input0x10348b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x103d500() {
   double input = -1.42454;
   input += synapse0x102b5d0();
   input += synapse0x103d840();
   input += synapse0x103d880();
   input += synapse0x103d8c0();
   input += synapse0x103d900();
   input += synapse0x103d940();
   input += synapse0x103d980();
   input += synapse0x103d9c0();
   input += synapse0x103da00();
   input += synapse0x103da40();
   input += synapse0x103da80();
   input += synapse0x103dac0();
   input += synapse0x103db00();
   input += synapse0x103db40();
   input += synapse0x103db80();
   input += synapse0x103dbc0();
   input += synapse0x103d690();
   input += synapse0x103d6d0();
   input += synapse0x103dd10();
   input += synapse0x103dd50();
   input += synapse0x103dd90();
   input += synapse0x103ddd0();
   input += synapse0x103de10();
   input += synapse0x103de50();
   input += synapse0x103de90();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x103d500() {
   double input = input0x103d500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x103ded0() {
   double input = -0.235367;
   input += synapse0x103e210();
   input += synapse0x103e250();
   input += synapse0x103e290();
   input += synapse0x103e2d0();
   input += synapse0x103e310();
   input += synapse0x103e350();
   input += synapse0x103e390();
   input += synapse0x103e3d0();
   input += synapse0x103e410();
   input += synapse0x103e450();
   input += synapse0x103e490();
   input += synapse0x103e4d0();
   input += synapse0x103e510();
   input += synapse0x103e550();
   input += synapse0x103e590();
   input += synapse0x103e5d0();
   input += synapse0x103e060();
   input += synapse0x103e0a0();
   input += synapse0x103e720();
   input += synapse0x103e760();
   input += synapse0x103e7a0();
   input += synapse0x103e7e0();
   input += synapse0x103e820();
   input += synapse0x103e860();
   input += synapse0x103e8a0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x103ded0() {
   double input = input0x103ded0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x103e8e0() {
   double input = 0.989806;
   input += synapse0x103ec20();
   input += synapse0x103ec60();
   input += synapse0x103eca0();
   input += synapse0x103ece0();
   input += synapse0x103ed20();
   input += synapse0x103ed60();
   input += synapse0x103eda0();
   input += synapse0x103ede0();
   input += synapse0x103ee20();
   input += synapse0x103ee60();
   input += synapse0x103eea0();
   input += synapse0x103eee0();
   input += synapse0x103ef20();
   input += synapse0x103ef60();
   input += synapse0x103efa0();
   input += synapse0x103efe0();
   input += synapse0x103ea70();
   input += synapse0x103eab0();
   input += synapse0x103f130();
   input += synapse0x103f170();
   input += synapse0x103f1b0();
   input += synapse0x103f1f0();
   input += synapse0x103f230();
   input += synapse0x103f270();
   input += synapse0x103f2b0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x103e8e0() {
   double input = input0x103e8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x103f2f0() {
   double input = 0.85445;
   input += synapse0x103f630();
   input += synapse0x103f670();
   input += synapse0x103f6b0();
   input += synapse0x103f6f0();
   input += synapse0x103f730();
   input += synapse0x103f770();
   input += synapse0x103f7b0();
   input += synapse0x103f7f0();
   input += synapse0x103f830();
   input += synapse0x103f870();
   input += synapse0x103f8b0();
   input += synapse0x103f8f0();
   input += synapse0x103f930();
   input += synapse0x103f970();
   input += synapse0x103f9b0();
   input += synapse0x103f9f0();
   input += synapse0x103f480();
   input += synapse0x103f4c0();
   input += synapse0x103fb40();
   input += synapse0x103fb80();
   input += synapse0x103fbc0();
   input += synapse0x103fc00();
   input += synapse0x103fc40();
   input += synapse0x103fc80();
   input += synapse0x103fcc0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x103f2f0() {
   double input = input0x103f2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x103fd00() {
   double input = 0.708429;
   input += synapse0x1040040();
   input += synapse0x1040080();
   input += synapse0x10400c0();
   input += synapse0x1040100();
   input += synapse0x1040140();
   input += synapse0x1040180();
   input += synapse0x10401c0();
   input += synapse0x1040200();
   input += synapse0x1040240();
   input += synapse0x1040280();
   input += synapse0x10402c0();
   input += synapse0x1040300();
   input += synapse0x1040340();
   input += synapse0x1040380();
   input += synapse0x10403c0();
   input += synapse0x1040400();
   input += synapse0x103fe90();
   input += synapse0x103fed0();
   input += synapse0x1040550();
   input += synapse0x1040590();
   input += synapse0x10405d0();
   input += synapse0x1040610();
   input += synapse0x1040650();
   input += synapse0x1040690();
   input += synapse0x10406d0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x103fd00() {
   double input = input0x103fd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1040710() {
   double input = 0.618862;
   input += synapse0x1040a50();
   input += synapse0x1040a90();
   input += synapse0x1040ad0();
   input += synapse0x1040b10();
   input += synapse0x1040b50();
   input += synapse0x1040b90();
   input += synapse0x1040bd0();
   input += synapse0x1040c10();
   input += synapse0x1040c50();
   input += synapse0x1040c90();
   input += synapse0x1040cd0();
   input += synapse0x1040d10();
   input += synapse0x1040d50();
   input += synapse0x1040d90();
   input += synapse0x1040dd0();
   input += synapse0x1040e10();
   input += synapse0x10408a0();
   input += synapse0x10408e0();
   input += synapse0x1040f60();
   input += synapse0x1040fa0();
   input += synapse0x1040fe0();
   input += synapse0x1041020();
   input += synapse0x1041060();
   input += synapse0x10410a0();
   input += synapse0x10410e0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1040710() {
   double input = input0x1040710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1041120() {
   double input = -0.268471;
   input += synapse0x1041460();
   input += synapse0x10414a0();
   input += synapse0x10414e0();
   input += synapse0x1041520();
   input += synapse0x1041560();
   input += synapse0x10415a0();
   input += synapse0x10415e0();
   input += synapse0x1041620();
   input += synapse0x1041660();
   input += synapse0x10416a0();
   input += synapse0x10416e0();
   input += synapse0x1041720();
   input += synapse0x1041760();
   input += synapse0x10417a0();
   input += synapse0x10417e0();
   input += synapse0x1041820();
   input += synapse0x10412b0();
   input += synapse0x10412f0();
   input += synapse0x1041970();
   input += synapse0x10419b0();
   input += synapse0x10419f0();
   input += synapse0x1041a30();
   input += synapse0x1041a70();
   input += synapse0x1041ab0();
   input += synapse0x1041af0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1041120() {
   double input = input0x1041120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1041b30() {
   double input = -0.0244821;
   input += synapse0x1041e70();
   input += synapse0x1041eb0();
   input += synapse0x1041ef0();
   input += synapse0x1041f30();
   input += synapse0x1041f70();
   input += synapse0x1041fb0();
   input += synapse0x1041ff0();
   input += synapse0x1042030();
   input += synapse0x1042070();
   input += synapse0x10420b0();
   input += synapse0x10420f0();
   input += synapse0x1042130();
   input += synapse0x1042170();
   input += synapse0x10421b0();
   input += synapse0x10421f0();
   input += synapse0x1042230();
   input += synapse0x1041cc0();
   input += synapse0x1041d00();
   input += synapse0x1042380();
   input += synapse0x10423c0();
   input += synapse0x1042400();
   input += synapse0x1042440();
   input += synapse0x1042480();
   input += synapse0x10424c0();
   input += synapse0x1042500();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1041b30() {
   double input = input0x1041b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_25_25hi_3000ep__::input0x1042540() {
   double input = -0.31686;
   input += synapse0x1042760();
   input += synapse0x10427a0();
   input += synapse0x10427e0();
   input += synapse0x1042820();
   input += synapse0x1042860();
   input += synapse0x10428a0();
   input += synapse0x10428e0();
   input += synapse0x1042920();
   input += synapse0x1042960();
   input += synapse0x10429a0();
   input += synapse0x10429e0();
   input += synapse0x1042a20();
   input += synapse0x1042a60();
   input += synapse0x1042aa0();
   input += synapse0x1042ae0();
   input += synapse0x1042b20();
   input += synapse0x1027b30();
   input += synapse0x1027b70();
   input += synapse0x1042c70();
   input += synapse0x1042cb0();
   input += synapse0x1042cf0();
   input += synapse0x1042d30();
   input += synapse0x1042d70();
   input += synapse0x1042db0();
   input += synapse0x1042df0();
   return input;
}

double nnFunc_25_25hi_3000ep__::neuron0x1042540() {
   double input = input0x1042540();
   return (input * 43.5728)+176.774;
}

double nnFunc_25_25hi_3000ep__::synapse0xf33c70() {
   return (neuron0x1026af0()*-6.35192);
}

double nnFunc_25_25hi_3000ep__::synapse0x1015f60() {
   return (neuron0x1026e30()*1.70901);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027f10() {
   return (neuron0x1027170()*3.19284);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027f50() {
   return (neuron0x10274b0()*-8.06734);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027f90() {
   return (neuron0x10277f0()*1.61329);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028310() {
   return (neuron0x1026af0()*2.17975);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028350() {
   return (neuron0x1026e30()*-0.0966071);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028390() {
   return (neuron0x1027170()*-0.549823);
}

double nnFunc_25_25hi_3000ep__::synapse0x10283d0() {
   return (neuron0x10274b0()*0.26546);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028410() {
   return (neuron0x10277f0()*-1.19714);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028790() {
   return (neuron0x1026af0()*0.561781);
}

double nnFunc_25_25hi_3000ep__::synapse0x10287d0() {
   return (neuron0x1026e30()*-0.0101013);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028810() {
   return (neuron0x1027170()*1.34568);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028850() {
   return (neuron0x10274b0()*9.57875);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028890() {
   return (neuron0x10277f0()*3.88081);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028c10() {
   return (neuron0x1026af0()*-1.07355);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028c50() {
   return (neuron0x1026e30()*1.24254);
}

double nnFunc_25_25hi_3000ep__::synapse0xf25e60() {
   return (neuron0x1027170()*1.29535);
}

double nnFunc_25_25hi_3000ep__::synapse0xf25ea0() {
   return (neuron0x10274b0()*-0.85768);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028da0() {
   return (neuron0x10277f0()*1.06454);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029120() {
   return (neuron0x1026af0()*2.31586);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029160() {
   return (neuron0x1026e30()*0.620343);
}

double nnFunc_25_25hi_3000ep__::synapse0x10291a0() {
   return (neuron0x1027170()*0.429451);
}

double nnFunc_25_25hi_3000ep__::synapse0x10291e0() {
   return (neuron0x10274b0()*2.61495);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029220() {
   return (neuron0x10277f0()*0.813792);
}

double nnFunc_25_25hi_3000ep__::synapse0x10295a0() {
   return (neuron0x1026af0()*0.00896037);
}

double nnFunc_25_25hi_3000ep__::synapse0x10295e0() {
   return (neuron0x1026e30()*1.16718);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029620() {
   return (neuron0x1027170()*2.05714);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029660() {
   return (neuron0x10274b0()*-8.77393);
}

double nnFunc_25_25hi_3000ep__::synapse0x10296a0() {
   return (neuron0x10277f0()*1.54421);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029a20() {
   return (neuron0x1026af0()*0.774613);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029a60() {
   return (neuron0x1026e30()*1.00561);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029aa0() {
   return (neuron0x1027170()*1.6104);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028c90() {
   return (neuron0x10274b0()*-10.0717);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028cd0() {
   return (neuron0x10277f0()*0.905757);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029fa0() {
   return (neuron0x1026af0()*-2.25259);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029fe0() {
   return (neuron0x1026e30()*0.440291);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a020() {
   return (neuron0x1027170()*1.72698);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a060() {
   return (neuron0x10274b0()*-7.9571);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a0a0() {
   return (neuron0x10277f0()*0.804198);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a420() {
   return (neuron0x1026af0()*-1.43871);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a460() {
   return (neuron0x1026e30()*0.17108);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a4a0() {
   return (neuron0x1027170()*-1.13266);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a4e0() {
   return (neuron0x10274b0()*11.3978);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a520() {
   return (neuron0x10277f0()*-1.72174);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a8a0() {
   return (neuron0x1026af0()*0.963778);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a8e0() {
   return (neuron0x1026e30()*-0.263512);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a920() {
   return (neuron0x1027170()*0.0580566);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a960() {
   return (neuron0x10274b0()*3.36812);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a9a0() {
   return (neuron0x10277f0()*-0.821133);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ad20() {
   return (neuron0x1026af0()*-12.5841);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ad60() {
   return (neuron0x1026e30()*1.94383);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ada0() {
   return (neuron0x1027170()*5.78205);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ade0() {
   return (neuron0x10274b0()*1.61775);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ae20() {
   return (neuron0x10277f0()*2.35174);
}

double nnFunc_25_25hi_3000ep__::synapse0xf25cb0() {
   return (neuron0x1026af0()*-7.98063);
}

double nnFunc_25_25hi_3000ep__::synapse0xf25cf0() {
   return (neuron0x1026e30()*-0.124632);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b2b0() {
   return (neuron0x1027170()*-3.66179);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b2f0() {
   return (neuron0x10274b0()*10.6535);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b330() {
   return (neuron0x10277f0()*-3.06205);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b6b0() {
   return (neuron0x1026af0()*-4.28639);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b6f0() {
   return (neuron0x1026e30()*0.0245065);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b730() {
   return (neuron0x1027170()*-1.58472);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b770() {
   return (neuron0x10274b0()*-29.8168);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b7b0() {
   return (neuron0x10277f0()*-21.4424);
}

double nnFunc_25_25hi_3000ep__::synapse0xf26480() {
   return (neuron0x1026af0()*3.90794);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029c70() {
   return (neuron0x1026e30()*0.00775481);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029cb0() {
   return (neuron0x1027170()*2.16361);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bc00() {
   return (neuron0x10274b0()*12.6871);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bc40() {
   return (neuron0x10277f0()*12.7202);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bfc0() {
   return (neuron0x1026af0()*-0.0293857);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c000() {
   return (neuron0x1026e30()*-0.000717305);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c040() {
   return (neuron0x1027170()*0.017278);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c080() {
   return (neuron0x10274b0()*-3.25249);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c0c0() {
   return (neuron0x10277f0()*-2.14406);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c440() {
   return (neuron0x1026af0()*1.42938);
}

double nnFunc_25_25hi_3000ep__::synapse0x1026d10() {
   return (neuron0x1026e30()*1.84013);
}

double nnFunc_25_25hi_3000ep__::synapse0x1026d50() {
   return (neuron0x1027170()*-0.27818);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027050() {
   return (neuron0x10274b0()*1.93676);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027090() {
   return (neuron0x10277f0()*-2.08644);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cb60() {
   return (neuron0x1026af0()*1.65471);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cba0() {
   return (neuron0x1026e30()*0.000564091);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cbe0() {
   return (neuron0x1027170()*0.515708);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cc20() {
   return (neuron0x10274b0()*-2.46461);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cc60() {
   return (neuron0x10277f0()*0.362008);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cfe0() {
   return (neuron0x1026af0()*0.0623551);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d020() {
   return (neuron0x1026e30()*-0.00237979);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d060() {
   return (neuron0x1027170()*-0.184039);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d0a0() {
   return (neuron0x10274b0()*16.8628);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d0e0() {
   return (neuron0x10277f0()*10.5924);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d460() {
   return (neuron0x1026af0()*-0.0779195);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d4a0() {
   return (neuron0x1026e30()*-0.00401277);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d4e0() {
   return (neuron0x1027170()*-0.408939);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d520() {
   return (neuron0x10274b0()*6.33059);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d560() {
   return (neuron0x10277f0()*4.7921);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d8e0() {
   return (neuron0x1026af0()*0.119012);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d920() {
   return (neuron0x1026e30()*0.00344345);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d960() {
   return (neuron0x1027170()*0.0953251);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d9a0() {
   return (neuron0x10274b0()*14.4446);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d9e0() {
   return (neuron0x10277f0()*6.9868);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dd60() {
   return (neuron0x1026af0()*-3.28727);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dda0() {
   return (neuron0x1026e30()*-0.00650361);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dde0() {
   return (neuron0x1027170()*-2.02016);
}

double nnFunc_25_25hi_3000ep__::synapse0x102de20() {
   return (neuron0x10274b0()*-8.72784);
}

double nnFunc_25_25hi_3000ep__::synapse0x102de60() {
   return (neuron0x10277f0()*-5.70433);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e1e0() {
   return (neuron0x1026af0()*1.60274);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e220() {
   return (neuron0x1026e30()*0.0259247);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e260() {
   return (neuron0x1027170()*0.143644);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e2a0() {
   return (neuron0x10274b0()*-0.027849);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e2e0() {
   return (neuron0x10277f0()*1.66817);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e660() {
   return (neuron0x1026af0()*-3.14768);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e6a0() {
   return (neuron0x1026e30()*0.115949);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e6e0() {
   return (neuron0x1027170()*-0.537198);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e720() {
   return (neuron0x10274b0()*9.21041);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e760() {
   return (neuron0x10277f0()*1.02618);
}

double nnFunc_25_25hi_3000ep__::synapse0x102eae0() {
   return (neuron0x1026af0()*-2.14553);
}

double nnFunc_25_25hi_3000ep__::synapse0x102eb20() {
   return (neuron0x1026e30()*0.325877);
}

double nnFunc_25_25hi_3000ep__::synapse0x102eb60() {
   return (neuron0x1027170()*1.04504);
}

double nnFunc_25_25hi_3000ep__::synapse0x102eba0() {
   return (neuron0x10274b0()*-11.9892);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ebe0() {
   return (neuron0x10277f0()*0.7201);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ef60() {
   return (neuron0x1026af0()*-1.45272);
}

double nnFunc_25_25hi_3000ep__::synapse0x102efa0() {
   return (neuron0x1026e30()*0.283503);
}

double nnFunc_25_25hi_3000ep__::synapse0x102efe0() {
   return (neuron0x1027170()*0.76889);
}

double nnFunc_25_25hi_3000ep__::synapse0x102f020() {
   return (neuron0x10274b0()*-2.83518);
}

double nnFunc_25_25hi_3000ep__::synapse0x102f060() {
   return (neuron0x10277f0()*0.317972);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028b80() {
   return (neuron0x1027c60()*0.935396);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028bc0() {
   return (neuron0x1027fd0()*0.567577);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029090() {
   return (neuron0x1028450()*-0.463515);
}

double nnFunc_25_25hi_3000ep__::synapse0x10290d0() {
   return (neuron0x10288d0()*0.390023);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029510() {
   return (neuron0x1028de0()*0.0791471);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029550() {
   return (neuron0x1029260()*1.36785);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029990() {
   return (neuron0x10296e0()*1.18338);
}

double nnFunc_25_25hi_3000ep__::synapse0x10299d0() {
   return (neuron0x1029cf0()*0.89422);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029f10() {
   return (neuron0x102a0e0()*0.350107);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029f50() {
   return (neuron0x102a560()*-0.169523);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a390() {
   return (neuron0x102a9e0()*0.295633);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a3d0() {
   return (neuron0x102ae60()*-0.71971);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a810() {
   return (neuron0x102b370()*-0.498264);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a850() {
   return (neuron0x1029ae0()*-1.75293);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ac90() {
   return (neuron0x102bc80()*1.13407);
}

double nnFunc_25_25hi_3000ep__::synapse0x102acd0() {
   return (neuron0x102c100()*0.086294);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b110() {
   return (neuron0x102c9d0()*-0.545234);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b150() {
   return (neuron0x102cca0()*0.461018);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b620() {
   return (neuron0x102d120()*0.202855);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b660() {
   return (neuron0x102d5a0()*0.357018);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bf30() {
   return (neuron0x102da20()*0.511172);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bf70() {
   return (neuron0x102dea0()*-0.107724);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c3b0() {
   return (neuron0x102e320()*0.979906);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c3f0() {
   return (neuron0x102e7a0()*0.996672);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027a10() {
   return (neuron0x102ec20()*0.946467);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ba90() {
   return (neuron0x1027c60()*1.43767);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bad0() {
   return (neuron0x1027fd0()*-1.77397);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bb10() {
   return (neuron0x1028450()*1.17262);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bb50() {
   return (neuron0x10288d0()*1.41803);
}

double nnFunc_25_25hi_3000ep__::synapse0x102bb90() {
   return (neuron0x1028de0()*0.695009);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027a50() {
   return (neuron0x1029260()*-1.1114);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dcd0() {
   return (neuron0x10296e0()*1.14904);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dd10() {
   return (neuron0x1029cf0()*0.522057);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e150() {
   return (neuron0x102a0e0()*1.31859);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e190() {
   return (neuron0x102a560()*0.52014);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e5d0() {
   return (neuron0x102a9e0()*-0.449509);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e610() {
   return (neuron0x102ae60()*0.361621);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ea50() {
   return (neuron0x102b370()*3.03199);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ea90() {
   return (neuron0x1029ae0()*1.62815);
}

double nnFunc_25_25hi_3000ep__::synapse0x102eed0() {
   return (neuron0x102bc80()*-0.0678467);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ef10() {
   return (neuron0x102c100()*-1.04008);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027e80() {
   return (neuron0x102c9d0()*0.868157);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027ec0() {
   return (neuron0x102cca0()*1.64352);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cf50() {
   return (neuron0x102d120()*1.74525);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cf90() {
   return (neuron0x102d5a0()*-1.70742);
}

double nnFunc_25_25hi_3000ep__::synapse0xf33d40() {
   return (neuron0x102da20()*0.0170737);
}

double nnFunc_25_25hi_3000ep__::synapse0xf33d80() {
   return (neuron0x102dea0()*-0.679883);
}

double nnFunc_25_25hi_3000ep__::synapse0x10315e0() {
   return (neuron0x102e320()*0.34637);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031620() {
   return (neuron0x102e7a0()*0.615347);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031660() {
   return (neuron0x102ec20()*0.767735);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b1a0() {
   return (neuron0x1027c60()*1.13966);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b1e0() {
   return (neuron0x1027fd0()*-0.354924);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b220() {
   return (neuron0x1028450()*1.39268);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b260() {
   return (neuron0x10288d0()*0.483573);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031bf0() {
   return (neuron0x1028de0()*0.727188);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031c30() {
   return (neuron0x1029260()*-0.00604674);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031c70() {
   return (neuron0x10296e0()*0.675462);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031cb0() {
   return (neuron0x1029cf0()*0.397597);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031cf0() {
   return (neuron0x102a0e0()*1.14369);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031d30() {
   return (neuron0x102a560()*0.193034);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031d70() {
   return (neuron0x102a9e0()*-0.0465138);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031db0() {
   return (neuron0x102ae60()*1.18714);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031df0() {
   return (neuron0x102b370()*0.671228);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031e30() {
   return (neuron0x1029ae0()*0.415121);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031e70() {
   return (neuron0x102bc80()*-0.189938);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031eb0() {
   return (neuron0x102c100()*0.510661);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031830() {
   return (neuron0x102c9d0()*0.265693);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031870() {
   return (neuron0x102cca0()*-0.0632807);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032000() {
   return (neuron0x102d120()*-0.119133);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032040() {
   return (neuron0x102d5a0()*0.402878);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032080() {
   return (neuron0x102da20()*1.09478);
}

double nnFunc_25_25hi_3000ep__::synapse0x10320c0() {
   return (neuron0x102dea0()*-0.203479);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032100() {
   return (neuron0x102e320()*1.28183);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032140() {
   return (neuron0x102e7a0()*0.601932);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032180() {
   return (neuron0x102ec20()*1.76269);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032500() {
   return (neuron0x1027c60()*-0.831733);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032540() {
   return (neuron0x1027fd0()*2.41964);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032580() {
   return (neuron0x1028450()*-1.90956);
}

double nnFunc_25_25hi_3000ep__::synapse0x10325c0() {
   return (neuron0x10288d0()*0.393313);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032600() {
   return (neuron0x1028de0()*-1.48887);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032640() {
   return (neuron0x1029260()*3.00242);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032680() {
   return (neuron0x10296e0()*-0.0807524);
}

double nnFunc_25_25hi_3000ep__::synapse0x10326c0() {
   return (neuron0x1029cf0()*1.39971);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032700() {
   return (neuron0x102a0e0()*-2.3684);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032740() {
   return (neuron0x102a560()*-0.24189);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032780() {
   return (neuron0x102a9e0()*2.42947);
}

double nnFunc_25_25hi_3000ep__::synapse0x10327c0() {
   return (neuron0x102ae60()*-1.58971);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032800() {
   return (neuron0x102b370()*-1.21512);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032840() {
   return (neuron0x1029ae0()*-3.23592);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032880() {
   return (neuron0x102bc80()*2.17103);
}

double nnFunc_25_25hi_3000ep__::synapse0x10328c0() {
   return (neuron0x102c100()*1.7342);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032350() {
   return (neuron0x102c9d0()*0.0204344);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032390() {
   return (neuron0x102cca0()*-0.941762);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032a10() {
   return (neuron0x102d120()*-1.34298);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032a50() {
   return (neuron0x102d5a0()*2.4801);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032a90() {
   return (neuron0x102da20()*-0.888737);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032ad0() {
   return (neuron0x102dea0()*-0.115914);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032b10() {
   return (neuron0x102e320()*-0.0367396);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032b50() {
   return (neuron0x102e7a0()*2.08613);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032b90() {
   return (neuron0x102ec20()*-0.995576);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032f10() {
   return (neuron0x1027c60()*-0.300717);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032f50() {
   return (neuron0x1027fd0()*-1.46324);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032f90() {
   return (neuron0x1028450()*-3.66449);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032fd0() {
   return (neuron0x10288d0()*0.0353525);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033010() {
   return (neuron0x1028de0()*-0.386145);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033050() {
   return (neuron0x1029260()*-0.267133);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033090() {
   return (neuron0x10296e0()*-0.905393);
}

double nnFunc_25_25hi_3000ep__::synapse0x10330d0() {
   return (neuron0x1029cf0()*-0.506674);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033110() {
   return (neuron0x102a0e0()*-0.51674);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033150() {
   return (neuron0x102a560()*0.0193241);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033190() {
   return (neuron0x102a9e0()*-0.689146);
}

double nnFunc_25_25hi_3000ep__::synapse0x10331d0() {
   return (neuron0x102ae60()*-0.335377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033210() {
   return (neuron0x102b370()*2.04836);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033250() {
   return (neuron0x1029ae0()*0.229912);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033290() {
   return (neuron0x102bc80()*-0.781019);
}

double nnFunc_25_25hi_3000ep__::synapse0x10332d0() {
   return (neuron0x102c100()*-1.0571);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032d60() {
   return (neuron0x102c9d0()*0.357925);
}

double nnFunc_25_25hi_3000ep__::synapse0x1032da0() {
   return (neuron0x102cca0()*-5.74763);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033420() {
   return (neuron0x102d120()*0.306571);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033460() {
   return (neuron0x102d5a0()*-1.20524);
}

double nnFunc_25_25hi_3000ep__::synapse0x10334a0() {
   return (neuron0x102da20()*1.03551);
}

double nnFunc_25_25hi_3000ep__::synapse0x10334e0() {
   return (neuron0x102dea0()*-0.258186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033520() {
   return (neuron0x102e320()*0.726265);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033560() {
   return (neuron0x102e7a0()*0.0698395);
}

double nnFunc_25_25hi_3000ep__::synapse0x10335a0() {
   return (neuron0x102ec20()*-0.407534);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033920() {
   return (neuron0x1027c60()*-0.612142);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033960() {
   return (neuron0x1027fd0()*-0.400946);
}

double nnFunc_25_25hi_3000ep__::synapse0x10339a0() {
   return (neuron0x1028450()*1.82697);
}

double nnFunc_25_25hi_3000ep__::synapse0x10339e0() {
   return (neuron0x10288d0()*-1.93996);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033a20() {
   return (neuron0x1028de0()*0.872565);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033a60() {
   return (neuron0x1029260()*-1.72914);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033aa0() {
   return (neuron0x10296e0()*-0.896836);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030cc0() {
   return (neuron0x1029cf0()*-1.59235);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030d00() {
   return (neuron0x102a0e0()*1.23013);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030d40() {
   return (neuron0x102a560()*0.406195);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030d80() {
   return (neuron0x102a9e0()*-2.40674);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030dc0() {
   return (neuron0x102ae60()*2.61229);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030e00() {
   return (neuron0x102b370()*12.3462);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030e40() {
   return (neuron0x1029ae0()*0.910519);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030e80() {
   return (neuron0x102bc80()*-5.57125);
}

double nnFunc_25_25hi_3000ep__::synapse0x1030ec0() {
   return (neuron0x102c100()*-0.334308);
}

double nnFunc_25_25hi_3000ep__::synapse0x1033770() {
   return (neuron0x102c9d0()*-3.11184);
}

double nnFunc_25_25hi_3000ep__::synapse0x10337b0() {
   return (neuron0x102cca0()*0.172423);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031010() {
   return (neuron0x102d120()*-0.779198);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031050() {
   return (neuron0x102d5a0()*4.61156);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031090() {
   return (neuron0x102da20()*3.19535);
}

double nnFunc_25_25hi_3000ep__::synapse0x10310d0() {
   return (neuron0x102dea0()*-1.03752);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031110() {
   return (neuron0x102e320()*-2.12439);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031150() {
   return (neuron0x102e7a0()*-1.79545);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031190() {
   return (neuron0x102ec20()*-0.408869);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031480() {
   return (neuron0x1027c60()*1.08003);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034b80() {
   return (neuron0x1027fd0()*1.95192);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034bc0() {
   return (neuron0x1028450()*-0.704602);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034c00() {
   return (neuron0x10288d0()*1.17014);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034c40() {
   return (neuron0x1028de0()*-0.988797);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034c80() {
   return (neuron0x1029260()*3.84016);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034cc0() {
   return (neuron0x10296e0()*2.26647);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034d00() {
   return (neuron0x1029cf0()*2.98204);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034d40() {
   return (neuron0x102a0e0()*-1.86647);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034d80() {
   return (neuron0x102a560()*-0.715702);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034dc0() {
   return (neuron0x102a9e0()*2.86626);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034e00() {
   return (neuron0x102ae60()*-0.413825);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034e40() {
   return (neuron0x102b370()*-10.4197);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034e80() {
   return (neuron0x1029ae0()*-5.88685);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034ec0() {
   return (neuron0x102bc80()*3.01129);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034f00() {
   return (neuron0x102c100()*1.51258);
}

double nnFunc_25_25hi_3000ep__::synapse0x1031360() {
   return (neuron0x102c9d0()*-1.88887);
}

double nnFunc_25_25hi_3000ep__::synapse0x10313a0() {
   return (neuron0x102cca0()*-3.11102);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035050() {
   return (neuron0x102d120()*-5.74558);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035090() {
   return (neuron0x102d5a0()*2.25965);
}

double nnFunc_25_25hi_3000ep__::synapse0x10350d0() {
   return (neuron0x102da20()*-3.87892);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035110() {
   return (neuron0x102dea0()*-0.804441);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035150() {
   return (neuron0x102e320()*4.14892);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035190() {
   return (neuron0x102e7a0()*3.16777);
}

double nnFunc_25_25hi_3000ep__::synapse0x10351d0() {
   return (neuron0x102ec20()*0.640052);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035550() {
   return (neuron0x1027c60()*-0.344555);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035590() {
   return (neuron0x1027fd0()*-1.2752);
}

double nnFunc_25_25hi_3000ep__::synapse0x10355d0() {
   return (neuron0x1028450()*0.945705);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035610() {
   return (neuron0x10288d0()*-1.32389);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035650() {
   return (neuron0x1028de0()*0.546973);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035690() {
   return (neuron0x1029260()*-3.16333);
}

double nnFunc_25_25hi_3000ep__::synapse0x10356d0() {
   return (neuron0x10296e0()*-0.288879);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035710() {
   return (neuron0x1029cf0()*-1.75652);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035750() {
   return (neuron0x102a0e0()*1.41138);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035790() {
   return (neuron0x102a560()*-0.976893);
}

double nnFunc_25_25hi_3000ep__::synapse0x10357d0() {
   return (neuron0x102a9e0()*-2.43704);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035810() {
   return (neuron0x102ae60()*0.734297);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035850() {
   return (neuron0x102b370()*0.690461);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035890() {
   return (neuron0x1029ae0()*0.193592);
}

double nnFunc_25_25hi_3000ep__::synapse0x10358d0() {
   return (neuron0x102bc80()*-1.46855);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035910() {
   return (neuron0x102c100()*-1.18892);
}

double nnFunc_25_25hi_3000ep__::synapse0x10353a0() {
   return (neuron0x102c9d0()*-0.313367);
}

double nnFunc_25_25hi_3000ep__::synapse0x10353e0() {
   return (neuron0x102cca0()*-0.216706);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035a60() {
   return (neuron0x102d120()*0.34198);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035aa0() {
   return (neuron0x102d5a0()*-1.91908);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035ae0() {
   return (neuron0x102da20()*-0.115269);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035b20() {
   return (neuron0x102dea0()*0.0389539);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035b60() {
   return (neuron0x102e320()*-0.653446);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035ba0() {
   return (neuron0x102e7a0()*-1.74941);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035be0() {
   return (neuron0x102ec20()*0.347388);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035f60() {
   return (neuron0x1027c60()*-0.713022);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035fa0() {
   return (neuron0x1027fd0()*0.143017);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035fe0() {
   return (neuron0x1028450()*-0.818134);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036020() {
   return (neuron0x10288d0()*-0.171188);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036060() {
   return (neuron0x1028de0()*-0.616225);
}

double nnFunc_25_25hi_3000ep__::synapse0x10360a0() {
   return (neuron0x1029260()*0.681766);
}

double nnFunc_25_25hi_3000ep__::synapse0x10360e0() {
   return (neuron0x10296e0()*-0.304076);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036120() {
   return (neuron0x1029cf0()*0.637262);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036160() {
   return (neuron0x102a0e0()*-0.489276);
}

double nnFunc_25_25hi_3000ep__::synapse0x10361a0() {
   return (neuron0x102a560()*-0.460044);
}

double nnFunc_25_25hi_3000ep__::synapse0x10361e0() {
   return (neuron0x102a9e0()*0.543506);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036220() {
   return (neuron0x102ae60()*-2.29414);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036260() {
   return (neuron0x102b370()*-1.74862);
}

double nnFunc_25_25hi_3000ep__::synapse0x10362a0() {
   return (neuron0x1029ae0()*2.87368);
}

double nnFunc_25_25hi_3000ep__::synapse0x10362e0() {
   return (neuron0x102bc80()*4.64377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036320() {
   return (neuron0x102c100()*0.0185508);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035db0() {
   return (neuron0x102c9d0()*-0.131003);
}

double nnFunc_25_25hi_3000ep__::synapse0x1035df0() {
   return (neuron0x102cca0()*3.18534);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036470() {
   return (neuron0x102d120()*-1.46754);
}

double nnFunc_25_25hi_3000ep__::synapse0x10364b0() {
   return (neuron0x102d5a0()*0.023158);
}

double nnFunc_25_25hi_3000ep__::synapse0x10364f0() {
   return (neuron0x102da20()*0.929209);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036530() {
   return (neuron0x102dea0()*-0.60191);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036570() {
   return (neuron0x102e320()*0.906273);
}

double nnFunc_25_25hi_3000ep__::synapse0x10365b0() {
   return (neuron0x102e7a0()*0.330777);
}

double nnFunc_25_25hi_3000ep__::synapse0x10365f0() {
   return (neuron0x102ec20()*-0.971231);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036970() {
   return (neuron0x1027c60()*-1.20282);
}

double nnFunc_25_25hi_3000ep__::synapse0x10369b0() {
   return (neuron0x1027fd0()*-0.794785);
}

double nnFunc_25_25hi_3000ep__::synapse0x10369f0() {
   return (neuron0x1028450()*-1.22174);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036a30() {
   return (neuron0x10288d0()*-1.89592);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036a70() {
   return (neuron0x1028de0()*0.510141);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036ab0() {
   return (neuron0x1029260()*-2.67857);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036af0() {
   return (neuron0x10296e0()*-2.29813);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036b30() {
   return (neuron0x1029cf0()*-3.13012);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036b70() {
   return (neuron0x102a0e0()*1.56615);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036bb0() {
   return (neuron0x102a560()*0.560231);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036bf0() {
   return (neuron0x102a9e0()*-2.45937);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036c30() {
   return (neuron0x102ae60()*4.62237);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036c70() {
   return (neuron0x102b370()*13.0654);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036cb0() {
   return (neuron0x1029ae0()*-1.26689);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036cf0() {
   return (neuron0x102bc80()*3.58377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036d30() {
   return (neuron0x102c100()*-0.15234);
}

double nnFunc_25_25hi_3000ep__::synapse0x10367c0() {
   return (neuron0x102c9d0()*0.71298);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036800() {
   return (neuron0x102cca0()*-4.25291);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036e80() {
   return (neuron0x102d120()*-1.48002);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036ec0() {
   return (neuron0x102d5a0()*-0.417925);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036f00() {
   return (neuron0x102da20()*6.26925);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036f40() {
   return (neuron0x102dea0()*2.5123);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036f80() {
   return (neuron0x102e320()*4.66803);
}

double nnFunc_25_25hi_3000ep__::synapse0x1036fc0() {
   return (neuron0x102e7a0()*-2.62378);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037000() {
   return (neuron0x102ec20()*-0.796065);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037380() {
   return (neuron0x1027c60()*1.75666);
}

double nnFunc_25_25hi_3000ep__::synapse0x10373c0() {
   return (neuron0x1027fd0()*1.40997);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037400() {
   return (neuron0x1028450()*-1.27254);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037440() {
   return (neuron0x10288d0()*0.347882);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037480() {
   return (neuron0x1028de0()*0.120447);
}

double nnFunc_25_25hi_3000ep__::synapse0x10374c0() {
   return (neuron0x1029260()*1.68905);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037500() {
   return (neuron0x10296e0()*1.65074);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037540() {
   return (neuron0x1029cf0()*1.8441);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037580() {
   return (neuron0x102a0e0()*-0.131549);
}

double nnFunc_25_25hi_3000ep__::synapse0x10375c0() {
   return (neuron0x102a560()*-0.581547);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037600() {
   return (neuron0x102a9e0()*0.984504);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037640() {
   return (neuron0x102ae60()*-1.94282);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037680() {
   return (neuron0x102b370()*-8.0299);
}

double nnFunc_25_25hi_3000ep__::synapse0x10376c0() {
   return (neuron0x1029ae0()*-1.34131);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037700() {
   return (neuron0x102bc80()*0.284764);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037740() {
   return (neuron0x102c100()*0.187887);
}

double nnFunc_25_25hi_3000ep__::synapse0x10371d0() {
   return (neuron0x102c9d0()*1.61524);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037210() {
   return (neuron0x102cca0()*-8.20824);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037890() {
   return (neuron0x102d120()*4.98968);
}

double nnFunc_25_25hi_3000ep__::synapse0x10378d0() {
   return (neuron0x102d5a0()*11.6586);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037910() {
   return (neuron0x102da20()*-0.266516);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037950() {
   return (neuron0x102dea0()*0.792458);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037990() {
   return (neuron0x102e320()*0.16336);
}

double nnFunc_25_25hi_3000ep__::synapse0x10379d0() {
   return (neuron0x102e7a0()*1.6323);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037a10() {
   return (neuron0x102ec20()*1.25602);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037d90() {
   return (neuron0x1027c60()*0.727461);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037dd0() {
   return (neuron0x1027fd0()*-0.584102);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037e10() {
   return (neuron0x1028450()*0.236831);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037e50() {
   return (neuron0x10288d0()*1.5908);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037e90() {
   return (neuron0x1028de0()*-0.199929);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037ed0() {
   return (neuron0x1029260()*0.152294);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037f10() {
   return (neuron0x10296e0()*0.481411);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037f50() {
   return (neuron0x1029cf0()*1.25289);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037f90() {
   return (neuron0x102a0e0()*0.0953665);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037fd0() {
   return (neuron0x102a560()*0.202101);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038010() {
   return (neuron0x102a9e0()*1.17347);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038050() {
   return (neuron0x102ae60()*-1.25268);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038090() {
   return (neuron0x102b370()*1.43324);
}

double nnFunc_25_25hi_3000ep__::synapse0x10380d0() {
   return (neuron0x1029ae0()*0.99964);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038110() {
   return (neuron0x102bc80()*0.961583);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038150() {
   return (neuron0x102c100()*-0.00628301);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037be0() {
   return (neuron0x102c9d0()*-0.608573);
}

double nnFunc_25_25hi_3000ep__::synapse0x1037c20() {
   return (neuron0x102cca0()*1.40116);
}

double nnFunc_25_25hi_3000ep__::synapse0x10382a0() {
   return (neuron0x102d120()*1.10026);
}

double nnFunc_25_25hi_3000ep__::synapse0x10382e0() {
   return (neuron0x102d5a0()*-0.572471);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038320() {
   return (neuron0x102da20()*1.10027);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038360() {
   return (neuron0x102dea0()*-0.364702);
}

double nnFunc_25_25hi_3000ep__::synapse0x10383a0() {
   return (neuron0x102e320()*0.90658);
}

double nnFunc_25_25hi_3000ep__::synapse0x10383e0() {
   return (neuron0x102e7a0()*0.567802);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038420() {
   return (neuron0x102ec20()*0.0815836);
}

double nnFunc_25_25hi_3000ep__::synapse0x10387a0() {
   return (neuron0x1027c60()*-0.573835);
}

double nnFunc_25_25hi_3000ep__::synapse0x10387e0() {
   return (neuron0x1027fd0()*0.990159);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038820() {
   return (neuron0x1028450()*-1.25168);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038860() {
   return (neuron0x10288d0()*0.477919);
}

double nnFunc_25_25hi_3000ep__::synapse0x10388a0() {
   return (neuron0x1028de0()*-0.690032);
}

double nnFunc_25_25hi_3000ep__::synapse0x10388e0() {
   return (neuron0x1029260()*0.728844);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038920() {
   return (neuron0x10296e0()*0.157844);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038960() {
   return (neuron0x1029cf0()*-0.170478);
}

double nnFunc_25_25hi_3000ep__::synapse0x10389a0() {
   return (neuron0x102a0e0()*-0.609419);
}

double nnFunc_25_25hi_3000ep__::synapse0x10389e0() {
   return (neuron0x102a560()*0.393006);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038a20() {
   return (neuron0x102a9e0()*0.390968);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038a60() {
   return (neuron0x102ae60()*-1.19343);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038aa0() {
   return (neuron0x102b370()*-0.985802);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038ae0() {
   return (neuron0x1029ae0()*-0.911456);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038b20() {
   return (neuron0x102bc80()*0.884993);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038b60() {
   return (neuron0x102c100()*0.099441);
}

double nnFunc_25_25hi_3000ep__::synapse0x10385f0() {
   return (neuron0x102c9d0()*-0.323883);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038630() {
   return (neuron0x102cca0()*-0.523522);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038cb0() {
   return (neuron0x102d120()*-1.14234);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038cf0() {
   return (neuron0x102d5a0()*-0.0219405);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038d30() {
   return (neuron0x102da20()*1.21031);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038d70() {
   return (neuron0x102dea0()*1.14831);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038db0() {
   return (neuron0x102e320()*-0.230624);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038df0() {
   return (neuron0x102e7a0()*-0.0579254);
}

double nnFunc_25_25hi_3000ep__::synapse0x1038e30() {
   return (neuron0x102ec20()*-0.782905);
}

double nnFunc_25_25hi_3000ep__::synapse0x10391b0() {
   return (neuron0x1027c60()*1.1821);
}

double nnFunc_25_25hi_3000ep__::synapse0x10391f0() {
   return (neuron0x1027fd0()*-2.55631);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039230() {
   return (neuron0x1028450()*1.88688);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039270() {
   return (neuron0x10288d0()*0.706551);
}

double nnFunc_25_25hi_3000ep__::synapse0x10392b0() {
   return (neuron0x1028de0()*1.77508);
}

double nnFunc_25_25hi_3000ep__::synapse0x10392f0() {
   return (neuron0x1029260()*-2.00429);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039330() {
   return (neuron0x10296e0()*2.51556);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039370() {
   return (neuron0x1029cf0()*-0.300974);
}

double nnFunc_25_25hi_3000ep__::synapse0x10393b0() {
   return (neuron0x102a0e0()*2.16074);
}

double nnFunc_25_25hi_3000ep__::synapse0x10393f0() {
   return (neuron0x102a560()*0.0225689);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039430() {
   return (neuron0x102a9e0()*-0.84845);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039470() {
   return (neuron0x102ae60()*0.816116);
}

double nnFunc_25_25hi_3000ep__::synapse0x10394b0() {
   return (neuron0x102b370()*3.68166);
}

double nnFunc_25_25hi_3000ep__::synapse0x10394f0() {
   return (neuron0x1029ae0()*3.06772);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039530() {
   return (neuron0x102bc80()*-3.28725);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039570() {
   return (neuron0x102c100()*-2.98683);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039000() {
   return (neuron0x102c9d0()*-0.440887);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039040() {
   return (neuron0x102cca0()*2.11958);
}

double nnFunc_25_25hi_3000ep__::synapse0x10396c0() {
   return (neuron0x102d120()*1.62655);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039700() {
   return (neuron0x102d5a0()*-3.39209);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039740() {
   return (neuron0x102da20()*-0.908302);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039780() {
   return (neuron0x102dea0()*0.348905);
}

double nnFunc_25_25hi_3000ep__::synapse0x10397c0() {
   return (neuron0x102e320()*-1.82442);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039800() {
   return (neuron0x102e7a0()*-0.239675);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039840() {
   return (neuron0x102ec20()*1.78862);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039bc0() {
   return (neuron0x1027c60()*-0.882471);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039c00() {
   return (neuron0x1027fd0()*1.95402);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039c40() {
   return (neuron0x1028450()*-2.73588);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039c80() {
   return (neuron0x10288d0()*-0.112565);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039cc0() {
   return (neuron0x1028de0()*-2.14376);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039d00() {
   return (neuron0x1029260()*3.90672);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039d40() {
   return (neuron0x10296e0()*2.32258);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039d80() {
   return (neuron0x1029cf0()*2.06041);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039dc0() {
   return (neuron0x102a0e0()*-3.15658);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039e00() {
   return (neuron0x102a560()*-0.744351);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039e40() {
   return (neuron0x102a9e0()*2.87083);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039e80() {
   return (neuron0x102ae60()*-1.76144);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039ec0() {
   return (neuron0x102b370()*-2.3186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039f00() {
   return (neuron0x1029ae0()*-2.08664);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039f40() {
   return (neuron0x102bc80()*2.20652);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039f80() {
   return (neuron0x102c100()*1.213);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039a10() {
   return (neuron0x102c9d0()*0.401588);
}

double nnFunc_25_25hi_3000ep__::synapse0x1039a50() {
   return (neuron0x102cca0()*-0.0567711);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a0d0() {
   return (neuron0x102d120()*-0.592862);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a110() {
   return (neuron0x102d5a0()*0.982619);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a150() {
   return (neuron0x102da20()*-1.04946);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a190() {
   return (neuron0x102dea0()*1.089);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a1d0() {
   return (neuron0x102e320()*-0.957369);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a210() {
   return (neuron0x102e7a0()*1.96587);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a250() {
   return (neuron0x102ec20()*-0.972771);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a5d0() {
   return (neuron0x1027c60()*-0.309011);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027df0() {
   return (neuron0x1027fd0()*-0.499002);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027e30() {
   return (neuron0x1028450()*0.299389);
}

double nnFunc_25_25hi_3000ep__::synapse0x10281f0() {
   return (neuron0x10288d0()*-0.0535042);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028230() {
   return (neuron0x1028de0()*-0.381583);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028670() {
   return (neuron0x1029260()*-1.5447);
}

double nnFunc_25_25hi_3000ep__::synapse0x10286b0() {
   return (neuron0x10296e0()*-0.912483);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028af0() {
   return (neuron0x1029cf0()*-0.689623);
}

double nnFunc_25_25hi_3000ep__::synapse0x1028b30() {
   return (neuron0x102a0e0()*-0.023124);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029000() {
   return (neuron0x102a560()*-0.511642);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029040() {
   return (neuron0x102a9e0()*-0.774742);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029480() {
   return (neuron0x102ae60()*0.25393);
}

double nnFunc_25_25hi_3000ep__::synapse0x10294c0() {
   return (neuron0x102b370()*1.09948);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029900() {
   return (neuron0x1029ae0()*0.781286);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029940() {
   return (neuron0x102bc80()*-0.439853);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029e80() {
   return (neuron0x102c100()*-0.0133079);
}

double nnFunc_25_25hi_3000ep__::synapse0x1029ec0() {
   return (neuron0x102c9d0()*-0.393328);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a300() {
   return (neuron0x102cca0()*-0.5359);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a340() {
   return (neuron0x102d120()*-0.00822689);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a780() {
   return (neuron0x102d5a0()*-0.819949);
}

double nnFunc_25_25hi_3000ep__::synapse0x102a7c0() {
   return (neuron0x102da20()*-0.189029);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ac00() {
   return (neuron0x102dea0()*-0.106493);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ac40() {
   return (neuron0x102e320()*-0.445137);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b080() {
   return (neuron0x102e7a0()*-1.29699);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b0c0() {
   return (neuron0x102ec20()*-0.536492);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034a40() {
   return (neuron0x1027c60()*-1.44186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1034a80() {
   return (neuron0x1027fd0()*-2.51148);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c320() {
   return (neuron0x1028450()*4.84513);
}

double nnFunc_25_25hi_3000ep__::synapse0x102c360() {
   return (neuron0x10288d0()*-0.584634);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a420() {
   return (neuron0x1028de0()*1.91124);
}

double nnFunc_25_25hi_3000ep__::synapse0x103a460() {
   return (neuron0x1029260()*-5.17894);
}

double nnFunc_25_25hi_3000ep__::synapse0x10276d0() {
   return (neuron0x10296e0()*-4.07272);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027710() {
   return (neuron0x1029cf0()*-3.99576);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cec0() {
   return (neuron0x102a0e0()*3.30317);
}

double nnFunc_25_25hi_3000ep__::synapse0x102cf00() {
   return (neuron0x102a560()*1.47296);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d340() {
   return (neuron0x102a9e0()*-4.59585);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d380() {
   return (neuron0x102ae60()*1.88994);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d7c0() {
   return (neuron0x102b370()*20.8279);
}

double nnFunc_25_25hi_3000ep__::synapse0x102d800() {
   return (neuron0x1029ae0()*3.27562);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dc40() {
   return (neuron0x102bc80()*-5.09747);
}

double nnFunc_25_25hi_3000ep__::synapse0x102dc80() {
   return (neuron0x102c100()*-0.207199);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e0c0() {
   return (neuron0x102c9d0()*-2.88349);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e100() {
   return (neuron0x102cca0()*6.11428);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e540() {
   return (neuron0x102d120()*-1.10628);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e580() {
   return (neuron0x102d5a0()*2.45605);
}

double nnFunc_25_25hi_3000ep__::synapse0x102e9c0() {
   return (neuron0x102da20()*7.7988);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ea00() {
   return (neuron0x102dea0()*-2.39174);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ee40() {
   return (neuron0x102e320()*-2.12045);
}

double nnFunc_25_25hi_3000ep__::synapse0x102ee80() {
   return (neuron0x102e7a0()*-3.70928);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b590() {
   return (neuron0x102ec20()*-0.498153);
}

double nnFunc_25_25hi_3000ep__::synapse0x102b5d0() {
   return (neuron0x1027c60()*-0.181326);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d840() {
   return (neuron0x1027fd0()*-2.77051);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d880() {
   return (neuron0x1028450()*2.27016);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d8c0() {
   return (neuron0x10288d0()*0.600549);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d900() {
   return (neuron0x1028de0()*1.55636);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d940() {
   return (neuron0x1029260()*-3.76831);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d980() {
   return (neuron0x10296e0()*-4.06113);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d9c0() {
   return (neuron0x1029cf0()*-2.40124);
}

double nnFunc_25_25hi_3000ep__::synapse0x103da00() {
   return (neuron0x102a0e0()*3.26172);
}

double nnFunc_25_25hi_3000ep__::synapse0x103da40() {
   return (neuron0x102a560()*1.29106);
}

double nnFunc_25_25hi_3000ep__::synapse0x103da80() {
   return (neuron0x102a9e0()*-2.92014);
}

double nnFunc_25_25hi_3000ep__::synapse0x103dac0() {
   return (neuron0x102ae60()*1.6916);
}

double nnFunc_25_25hi_3000ep__::synapse0x103db00() {
   return (neuron0x102b370()*3.58846);
}

double nnFunc_25_25hi_3000ep__::synapse0x103db40() {
   return (neuron0x1029ae0()*1.42701);
}

double nnFunc_25_25hi_3000ep__::synapse0x103db80() {
   return (neuron0x102bc80()*-2.94948);
}

double nnFunc_25_25hi_3000ep__::synapse0x103dbc0() {
   return (neuron0x102c100()*-0.355913);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d690() {
   return (neuron0x102c9d0()*-1.00158);
}

double nnFunc_25_25hi_3000ep__::synapse0x103d6d0() {
   return (neuron0x102cca0()*-0.390154);
}

double nnFunc_25_25hi_3000ep__::synapse0x103dd10() {
   return (neuron0x102d120()*0.743565);
}

double nnFunc_25_25hi_3000ep__::synapse0x103dd50() {
   return (neuron0x102d5a0()*-0.471076);
}

double nnFunc_25_25hi_3000ep__::synapse0x103dd90() {
   return (neuron0x102da20()*1.65678);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ddd0() {
   return (neuron0x102dea0()*-1.50865);
}

double nnFunc_25_25hi_3000ep__::synapse0x103de10() {
   return (neuron0x102e320()*0.939388);
}

double nnFunc_25_25hi_3000ep__::synapse0x103de50() {
   return (neuron0x102e7a0()*-2.12364);
}

double nnFunc_25_25hi_3000ep__::synapse0x103de90() {
   return (neuron0x102ec20()*1.46262);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e210() {
   return (neuron0x1027c60()*-0.431557);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e250() {
   return (neuron0x1027fd0()*-0.480139);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e290() {
   return (neuron0x1028450()*0.6521);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e2d0() {
   return (neuron0x10288d0()*-1.28748);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e310() {
   return (neuron0x1028de0()*0.626561);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e350() {
   return (neuron0x1029260()*-0.64465);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e390() {
   return (neuron0x10296e0()*-0.865178);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e3d0() {
   return (neuron0x1029cf0()*-0.598016);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e410() {
   return (neuron0x102a0e0()*0.642442);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e450() {
   return (neuron0x102a560()*0.0348367);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e490() {
   return (neuron0x102a9e0()*-1.56378);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e4d0() {
   return (neuron0x102ae60()*-0.1704);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e510() {
   return (neuron0x102b370()*-0.117742);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e550() {
   return (neuron0x1029ae0()*0.281694);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e590() {
   return (neuron0x102bc80()*-0.372829);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e5d0() {
   return (neuron0x102c100()*0.279037);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e060() {
   return (neuron0x102c9d0()*-0.690562);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e0a0() {
   return (neuron0x102cca0()*-0.566961);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e720() {
   return (neuron0x102d120()*0.0917316);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e760() {
   return (neuron0x102d5a0()*-0.427939);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e7a0() {
   return (neuron0x102da20()*0.787556);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e7e0() {
   return (neuron0x102dea0()*-0.228007);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e820() {
   return (neuron0x102e320()*0.220438);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e860() {
   return (neuron0x102e7a0()*-0.507496);
}

double nnFunc_25_25hi_3000ep__::synapse0x103e8a0() {
   return (neuron0x102ec20()*0.0791036);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ec20() {
   return (neuron0x1027c60()*1.25594);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ec60() {
   return (neuron0x1027fd0()*-1.05902);
}

double nnFunc_25_25hi_3000ep__::synapse0x103eca0() {
   return (neuron0x1028450()*0.704414);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ece0() {
   return (neuron0x10288d0()*1.37011);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ed20() {
   return (neuron0x1028de0()*0.867962);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ed60() {
   return (neuron0x1029260()*0.124888);
}

double nnFunc_25_25hi_3000ep__::synapse0x103eda0() {
   return (neuron0x10296e0()*0.0516155);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ede0() {
   return (neuron0x1029cf0()*1.32912);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ee20() {
   return (neuron0x102a0e0()*1.13748);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ee60() {
   return (neuron0x102a560()*0.47487);
}

double nnFunc_25_25hi_3000ep__::synapse0x103eea0() {
   return (neuron0x102a9e0()*0.375443);
}

double nnFunc_25_25hi_3000ep__::synapse0x103eee0() {
   return (neuron0x102ae60()*0.716346);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ef20() {
   return (neuron0x102b370()*1.77717);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ef60() {
   return (neuron0x1029ae0()*0.979877);
}

double nnFunc_25_25hi_3000ep__::synapse0x103efa0() {
   return (neuron0x102bc80()*0.223087);
}

double nnFunc_25_25hi_3000ep__::synapse0x103efe0() {
   return (neuron0x102c100()*-0.172624);
}

double nnFunc_25_25hi_3000ep__::synapse0x103ea70() {
   return (neuron0x102c9d0()*-0.287013);
}

double nnFunc_25_25hi_3000ep__::synapse0x103eab0() {
   return (neuron0x102cca0()*0.678485);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f130() {
   return (neuron0x102d120()*1.22676);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f170() {
   return (neuron0x102d5a0()*-0.0744011);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f1b0() {
   return (neuron0x102da20()*0.875186);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f1f0() {
   return (neuron0x102dea0()*0.0742902);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f230() {
   return (neuron0x102e320()*0.0562151);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f270() {
   return (neuron0x102e7a0()*1.15202);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f2b0() {
   return (neuron0x102ec20()*1.04702);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f630() {
   return (neuron0x1027c60()*0.0678154);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f670() {
   return (neuron0x1027fd0()*2.32568);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f6b0() {
   return (neuron0x1028450()*-1.9505);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f6f0() {
   return (neuron0x10288d0()*0.607617);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f730() {
   return (neuron0x1028de0()*-1.4397);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f770() {
   return (neuron0x1029260()*3.22254);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f7b0() {
   return (neuron0x10296e0()*1.27207);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f7f0() {
   return (neuron0x1029cf0()*1.74548);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f830() {
   return (neuron0x102a0e0()*-2.41903);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f870() {
   return (neuron0x102a560()*-0.103945);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f8b0() {
   return (neuron0x102a9e0()*2.74538);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f8f0() {
   return (neuron0x102ae60()*-0.615889);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f930() {
   return (neuron0x102b370()*-3.06797);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f970() {
   return (neuron0x1029ae0()*-2.65773);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f9b0() {
   return (neuron0x102bc80()*2.20038);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f9f0() {
   return (neuron0x102c100()*1.48483);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f480() {
   return (neuron0x102c9d0()*0.416829);
}

double nnFunc_25_25hi_3000ep__::synapse0x103f4c0() {
   return (neuron0x102cca0()*-1.26107);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fb40() {
   return (neuron0x102d120()*-0.596794);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fb80() {
   return (neuron0x102d5a0()*1.41999);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fbc0() {
   return (neuron0x102da20()*-0.939443);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fc00() {
   return (neuron0x102dea0()*1.15858);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fc40() {
   return (neuron0x102e320()*0.874818);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fc80() {
   return (neuron0x102e7a0()*2.0524);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fcc0() {
   return (neuron0x102ec20()*-0.83024);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040040() {
   return (neuron0x1027c60()*0.833746);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040080() {
   return (neuron0x1027fd0()*0.681424);
}

double nnFunc_25_25hi_3000ep__::synapse0x10400c0() {
   return (neuron0x1028450()*-0.0524651);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040100() {
   return (neuron0x10288d0()*1.00955);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040140() {
   return (neuron0x1028de0()*0.00472938);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040180() {
   return (neuron0x1029260()*0.763825);
}

double nnFunc_25_25hi_3000ep__::synapse0x10401c0() {
   return (neuron0x10296e0()*0.174351);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040200() {
   return (neuron0x1029cf0()*0.45729);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040240() {
   return (neuron0x102a0e0()*0.0962979);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040280() {
   return (neuron0x102a560()*0.062885);
}

double nnFunc_25_25hi_3000ep__::synapse0x10402c0() {
   return (neuron0x102a9e0()*1.77086);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040300() {
   return (neuron0x102ae60()*-0.302724);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040340() {
   return (neuron0x102b370()*0.941642);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040380() {
   return (neuron0x1029ae0()*0.313141);
}

double nnFunc_25_25hi_3000ep__::synapse0x10403c0() {
   return (neuron0x102bc80()*1.33114);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040400() {
   return (neuron0x102c100()*-0.147766);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fe90() {
   return (neuron0x102c9d0()*0.574571);
}

double nnFunc_25_25hi_3000ep__::synapse0x103fed0() {
   return (neuron0x102cca0()*-0.104908);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040550() {
   return (neuron0x102d120()*-0.290651);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040590() {
   return (neuron0x102d5a0()*0.285203);
}

double nnFunc_25_25hi_3000ep__::synapse0x10405d0() {
   return (neuron0x102da20()*0.68595);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040610() {
   return (neuron0x102dea0()*-0.298358);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040650() {
   return (neuron0x102e320()*-0.0587275);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040690() {
   return (neuron0x102e7a0()*0.494425);
}

double nnFunc_25_25hi_3000ep__::synapse0x10406d0() {
   return (neuron0x102ec20()*0.420377);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040a50() {
   return (neuron0x1027c60()*0.156461);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040a90() {
   return (neuron0x1027fd0()*1.58987);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040ad0() {
   return (neuron0x1028450()*-1.88285);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040b10() {
   return (neuron0x10288d0()*0.199675);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040b50() {
   return (neuron0x1028de0()*-2.14084);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040b90() {
   return (neuron0x1029260()*3.84747);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040bd0() {
   return (neuron0x10296e0()*3.04387);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040c10() {
   return (neuron0x1029cf0()*1.82475);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040c50() {
   return (neuron0x102a0e0()*-3.11783);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040c90() {
   return (neuron0x102a560()*-1.35076);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040cd0() {
   return (neuron0x102a9e0()*2.70743);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040d10() {
   return (neuron0x102ae60()*-1.70239);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040d50() {
   return (neuron0x102b370()*-2.63114);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040d90() {
   return (neuron0x1029ae0()*-2.11286);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040dd0() {
   return (neuron0x102bc80()*2.8433);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040e10() {
   return (neuron0x102c100()*0.451549);
}

double nnFunc_25_25hi_3000ep__::synapse0x10408a0() {
   return (neuron0x102c9d0()*0.851074);
}

double nnFunc_25_25hi_3000ep__::synapse0x10408e0() {
   return (neuron0x102cca0()*-0.741039);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040f60() {
   return (neuron0x102d120()*-1.37944);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040fa0() {
   return (neuron0x102d5a0()*0.611476);
}

double nnFunc_25_25hi_3000ep__::synapse0x1040fe0() {
   return (neuron0x102da20()*-1.4892);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041020() {
   return (neuron0x102dea0()*0.718331);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041060() {
   return (neuron0x102e320()*-0.721839);
}

double nnFunc_25_25hi_3000ep__::synapse0x10410a0() {
   return (neuron0x102e7a0()*2.2282);
}

double nnFunc_25_25hi_3000ep__::synapse0x10410e0() {
   return (neuron0x102ec20()*-0.452369);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041460() {
   return (neuron0x1027c60()*0.348416);
}

double nnFunc_25_25hi_3000ep__::synapse0x10414a0() {
   return (neuron0x1027fd0()*-0.0554429);
}

double nnFunc_25_25hi_3000ep__::synapse0x10414e0() {
   return (neuron0x1028450()*-0.438068);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041520() {
   return (neuron0x10288d0()*0.197948);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041560() {
   return (neuron0x1028de0()*0.0542246);
}

double nnFunc_25_25hi_3000ep__::synapse0x10415a0() {
   return (neuron0x1029260()*0.18986);
}

double nnFunc_25_25hi_3000ep__::synapse0x10415e0() {
   return (neuron0x10296e0()*0.492029);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041620() {
   return (neuron0x1029cf0()*-0.0926146);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041660() {
   return (neuron0x102a0e0()*-0.241931);
}

double nnFunc_25_25hi_3000ep__::synapse0x10416a0() {
   return (neuron0x102a560()*-0.085983);
}

double nnFunc_25_25hi_3000ep__::synapse0x10416e0() {
   return (neuron0x102a9e0()*-0.101664);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041720() {
   return (neuron0x102ae60()*-0.0239438);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041760() {
   return (neuron0x102b370()*-0.293781);
}

double nnFunc_25_25hi_3000ep__::synapse0x10417a0() {
   return (neuron0x1029ae0()*0.801399);
}

double nnFunc_25_25hi_3000ep__::synapse0x10417e0() {
   return (neuron0x102bc80()*-0.519171);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041820() {
   return (neuron0x102c100()*0.0295944);
}

double nnFunc_25_25hi_3000ep__::synapse0x10412b0() {
   return (neuron0x102c9d0()*0.194614);
}

double nnFunc_25_25hi_3000ep__::synapse0x10412f0() {
   return (neuron0x102cca0()*-0.253477);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041970() {
   return (neuron0x102d120()*0.294213);
}

double nnFunc_25_25hi_3000ep__::synapse0x10419b0() {
   return (neuron0x102d5a0()*-0.301295);
}

double nnFunc_25_25hi_3000ep__::synapse0x10419f0() {
   return (neuron0x102da20()*-0.270347);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041a30() {
   return (neuron0x102dea0()*0.28063);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041a70() {
   return (neuron0x102e320()*0.400019);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041ab0() {
   return (neuron0x102e7a0()*0.347918);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041af0() {
   return (neuron0x102ec20()*0.360931);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041e70() {
   return (neuron0x1027c60()*0.709186);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041eb0() {
   return (neuron0x1027fd0()*-0.916712);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041ef0() {
   return (neuron0x1028450()*2.78481);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041f30() {
   return (neuron0x10288d0()*-0.848139);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041f70() {
   return (neuron0x1028de0()*1.43275);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041fb0() {
   return (neuron0x1029260()*-2.92438);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041ff0() {
   return (neuron0x10296e0()*-0.414355);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042030() {
   return (neuron0x1029cf0()*-2.13362);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042070() {
   return (neuron0x102a0e0()*1.71327);
}

double nnFunc_25_25hi_3000ep__::synapse0x10420b0() {
   return (neuron0x102a560()*0.222025);
}

double nnFunc_25_25hi_3000ep__::synapse0x10420f0() {
   return (neuron0x102a9e0()*-2.10672);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042130() {
   return (neuron0x102ae60()*-0.281978);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042170() {
   return (neuron0x102b370()*6.49072);
}

double nnFunc_25_25hi_3000ep__::synapse0x10421b0() {
   return (neuron0x1029ae0()*4.2323);
}

double nnFunc_25_25hi_3000ep__::synapse0x10421f0() {
   return (neuron0x102bc80()*-8.2081);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042230() {
   return (neuron0x102c100()*-0.426644);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041cc0() {
   return (neuron0x102c9d0()*-0.396349);
}

double nnFunc_25_25hi_3000ep__::synapse0x1041d00() {
   return (neuron0x102cca0()*1.08608);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042380() {
   return (neuron0x102d120()*-0.752972);
}

double nnFunc_25_25hi_3000ep__::synapse0x10423c0() {
   return (neuron0x102d5a0()*0.499289);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042400() {
   return (neuron0x102da20()*2.12742);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042440() {
   return (neuron0x102dea0()*0.903246);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042480() {
   return (neuron0x102e320()*-3.54502);
}

double nnFunc_25_25hi_3000ep__::synapse0x10424c0() {
   return (neuron0x102e7a0()*-1.31857);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042500() {
   return (neuron0x102ec20()*1.38819);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042760() {
   return (neuron0x1030b30()*-2.19627);
}

double nnFunc_25_25hi_3000ep__::synapse0x10427a0() {
   return (neuron0x102b900()*7.47617);
}

double nnFunc_25_25hi_3000ep__::synapse0x10427e0() {
   return (neuron0x10316a0()*-4.66371);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042820() {
   return (neuron0x10321c0()*-1.09189);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042860() {
   return (neuron0x1032bd0()*9.25797);
}

double nnFunc_25_25hi_3000ep__::synapse0x10428a0() {
   return (neuron0x10335e0()*-8.72456);
}

double nnFunc_25_25hi_3000ep__::synapse0x10428e0() {
   return (neuron0x10311d0()*-7.179);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042920() {
   return (neuron0x1035210()*-3.67622);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042960() {
   return (neuron0x1035c20()*-3.57217);
}

double nnFunc_25_25hi_3000ep__::synapse0x10429a0() {
   return (neuron0x1036630()*-2.87561);
}

double nnFunc_25_25hi_3000ep__::synapse0x10429e0() {
   return (neuron0x1037040()*-12.126);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042a20() {
   return (neuron0x1037a50()*6.39638);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042a60() {
   return (neuron0x1038460()*1.47475);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042aa0() {
   return (neuron0x1038e70()*11.1941);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042ae0() {
   return (neuron0x1039880()*-1.49126);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042b20() {
   return (neuron0x103a290()*2.21982);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027b30() {
   return (neuron0x10348b0()*9.69992);
}

double nnFunc_25_25hi_3000ep__::synapse0x1027b70() {
   return (neuron0x103d500()*5.06495);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042c70() {
   return (neuron0x103ded0()*-1.70479);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042cb0() {
   return (neuron0x103e8e0()*4.24608);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042cf0() {
   return (neuron0x103f2f0()*-3.21756);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042d30() {
   return (neuron0x103fd00()*8.66248);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042d70() {
   return (neuron0x1040710()*-3.80191);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042db0() {
   return (neuron0x1041120()*1.20736);
}

double nnFunc_25_25hi_3000ep__::synapse0x1042df0() {
   return (neuron0x1041b30()*-8.26477);
}

