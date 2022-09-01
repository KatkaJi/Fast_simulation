#include "25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_upwing/nnFunc_3A_25_25hi_5000ep_weight.h"
#include <cmath>

double nnFunc_3A_25_25hi_5000ep_weight::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1824fa0();
     default:
         return 0.;
   }
}

double nnFunc_3A_25_25hi_5000ep_weight::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1824fa0();
     default:
         return 0.;
   }
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1809550() {
   return input0;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1809890() {
   return input1;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1809bd0() {
   return input2;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1809f10() {
   return input3;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180a250() {
   return input4;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180a6c0() {
   double input = -11.2359;
   input += synapse0x17166b0();
   input += synapse0x17f89c0();
   input += synapse0x180a970();
   input += synapse0x180a9b0();
   input += synapse0x180a9f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180a6c0() {
   double input = input0x180a6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180aa30() {
   double input = 2.92523;
   input += synapse0x180ad70();
   input += synapse0x180adb0();
   input += synapse0x180adf0();
   input += synapse0x180ae30();
   input += synapse0x180ae70();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180aa30() {
   double input = input0x180aa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180aeb0() {
   double input = 0.565341;
   input += synapse0x180b1f0();
   input += synapse0x180b230();
   input += synapse0x180b270();
   input += synapse0x180b2b0();
   input += synapse0x180b2f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180aeb0() {
   double input = input0x180aeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180b330() {
   double input = -4.90196;
   input += synapse0x180b670();
   input += synapse0x180b6b0();
   input += synapse0x17088a0();
   input += synapse0x17088e0();
   input += synapse0x180b800();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180b330() {
   double input = input0x180b330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180b840() {
   double input = 0.0327287;
   input += synapse0x180bb80();
   input += synapse0x180bbc0();
   input += synapse0x180bc00();
   input += synapse0x180bc40();
   input += synapse0x180bc80();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180b840() {
   double input = input0x180b840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180bcc0() {
   double input = 4.24268;
   input += synapse0x180c000();
   input += synapse0x180c040();
   input += synapse0x180c080();
   input += synapse0x180c0c0();
   input += synapse0x180c100();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180bcc0() {
   double input = input0x180bcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180c140() {
   double input = -9.64023;
   input += synapse0x180c480();
   input += synapse0x180c4c0();
   input += synapse0x180c500();
   input += synapse0x180b6f0();
   input += synapse0x180b730();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180c140() {
   double input = input0x180c140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180c750() {
   double input = 4.98487;
   input += synapse0x180ca00();
   input += synapse0x180ca40();
   input += synapse0x180ca80();
   input += synapse0x180cac0();
   input += synapse0x180cb00();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180c750() {
   double input = input0x180c750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180cb40() {
   double input = 0.467799;
   input += synapse0x180ce80();
   input += synapse0x180cec0();
   input += synapse0x180cf00();
   input += synapse0x180cf40();
   input += synapse0x180cf80();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180cb40() {
   double input = input0x180cb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180cfc0() {
   double input = -1.19482;
   input += synapse0x180d300();
   input += synapse0x180d340();
   input += synapse0x180d380();
   input += synapse0x180d3c0();
   input += synapse0x180d400();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180cfc0() {
   double input = input0x180cfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180d440() {
   double input = -18.7001;
   input += synapse0x180d780();
   input += synapse0x180d7c0();
   input += synapse0x180d800();
   input += synapse0x180d840();
   input += synapse0x180d880();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180d440() {
   double input = input0x180d440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180d8c0() {
   double input = -1.21968;
   input += synapse0x17086f0();
   input += synapse0x1708730();
   input += synapse0x180dd10();
   input += synapse0x180dd50();
   input += synapse0x180dd90();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180d8c0() {
   double input = input0x180d8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180ddd0() {
   double input = 17.17;
   input += synapse0x180e110();
   input += synapse0x180e150();
   input += synapse0x180e190();
   input += synapse0x180e1d0();
   input += synapse0x180e210();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180ddd0() {
   double input = input0x180ddd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180c540() {
   double input = 1.91128;
   input += synapse0x1708ec0();
   input += synapse0x180c6d0();
   input += synapse0x180c710();
   input += synapse0x180e660();
   input += synapse0x180e6a0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180c540() {
   double input = input0x180c540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180e6e0() {
   double input = -2.11622;
   input += synapse0x180ea20();
   input += synapse0x180ea60();
   input += synapse0x180eaa0();
   input += synapse0x180eae0();
   input += synapse0x180eb20();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180e6e0() {
   double input = input0x180e6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180eb60() {
   double input = 1.14531;
   input += synapse0x180eea0();
   input += synapse0x1809770();
   input += synapse0x18097b0();
   input += synapse0x1809ab0();
   input += synapse0x1809af0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180eb60() {
   double input = input0x180eb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180f430() {
   double input = 1.25763;
   input += synapse0x180f5c0();
   input += synapse0x180f600();
   input += synapse0x180f640();
   input += synapse0x180f680();
   input += synapse0x180f6c0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180f430() {
   double input = input0x180f430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180f700() {
   double input = 1.49243;
   input += synapse0x180fa40();
   input += synapse0x180fa80();
   input += synapse0x180fac0();
   input += synapse0x180fb00();
   input += synapse0x180fb40();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180f700() {
   double input = input0x180f700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180fb80() {
   double input = -0.352368;
   input += synapse0x180fec0();
   input += synapse0x180ff00();
   input += synapse0x180ff40();
   input += synapse0x180ff80();
   input += synapse0x180ffc0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180fb80() {
   double input = input0x180fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1810000() {
   double input = 15.3809;
   input += synapse0x1810340();
   input += synapse0x1810380();
   input += synapse0x18103c0();
   input += synapse0x1810400();
   input += synapse0x1810440();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1810000() {
   double input = input0x1810000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1810480() {
   double input = 2.12868;
   input += synapse0x18107c0();
   input += synapse0x1810800();
   input += synapse0x1810840();
   input += synapse0x1810880();
   input += synapse0x18108c0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1810480() {
   double input = input0x1810480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1810900() {
   double input = -0.198798;
   input += synapse0x1810c40();
   input += synapse0x1810c80();
   input += synapse0x1810cc0();
   input += synapse0x1810d00();
   input += synapse0x1810d40();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1810900() {
   double input = input0x1810900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1810d80() {
   double input = -10.542;
   input += synapse0x18110c0();
   input += synapse0x1811100();
   input += synapse0x1811140();
   input += synapse0x1811180();
   input += synapse0x18111c0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1810d80() {
   double input = input0x1810d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1811200() {
   double input = -0.719068;
   input += synapse0x1811540();
   input += synapse0x1811580();
   input += synapse0x18115c0();
   input += synapse0x1811600();
   input += synapse0x1811640();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1811200() {
   double input = input0x1811200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1811680() {
   double input = 0.796651;
   input += synapse0x18119c0();
   input += synapse0x1811a00();
   input += synapse0x1811a40();
   input += synapse0x1811a80();
   input += synapse0x1811ac0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1811680() {
   double input = input0x1811680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1813590() {
   double input = -0.114089;
   input += synapse0x180b5e0();
   input += synapse0x180b620();
   input += synapse0x180baf0();
   input += synapse0x180bb30();
   input += synapse0x180bf70();
   input += synapse0x180bfb0();
   input += synapse0x180c3f0();
   input += synapse0x180c430();
   input += synapse0x180c970();
   input += synapse0x180c9b0();
   input += synapse0x180cdf0();
   input += synapse0x180ce30();
   input += synapse0x180d270();
   input += synapse0x180d2b0();
   input += synapse0x180d6f0();
   input += synapse0x180d730();
   input += synapse0x180db70();
   input += synapse0x180dbb0();
   input += synapse0x180e080();
   input += synapse0x180e0c0();
   input += synapse0x180e990();
   input += synapse0x180e9d0();
   input += synapse0x180ee10();
   input += synapse0x180ee50();
   input += synapse0x180a470();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1813590() {
   double input = input0x1813590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x180e360() {
   double input = -0.205;
   input += synapse0x180e4f0();
   input += synapse0x180e530();
   input += synapse0x180e570();
   input += synapse0x180e5b0();
   input += synapse0x180e5f0();
   input += synapse0x180a4b0();
   input += synapse0x1810730();
   input += synapse0x1810770();
   input += synapse0x1810bb0();
   input += synapse0x1810bf0();
   input += synapse0x1811030();
   input += synapse0x1811070();
   input += synapse0x18114b0();
   input += synapse0x18114f0();
   input += synapse0x1811930();
   input += synapse0x1811970();
   input += synapse0x180a8e0();
   input += synapse0x180a920();
   input += synapse0x180f9b0();
   input += synapse0x180f9f0();
   input += synapse0x1716780();
   input += synapse0x17167c0();
   input += synapse0x1814040();
   input += synapse0x1814080();
   input += synapse0x18140c0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x180e360() {
   double input = input0x180e360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1814100() {
   double input = 0.211348;
   input += synapse0x180dc00();
   input += synapse0x180dc40();
   input += synapse0x180dc80();
   input += synapse0x180dcc0();
   input += synapse0x1814650();
   input += synapse0x1814690();
   input += synapse0x18146d0();
   input += synapse0x1814710();
   input += synapse0x1814750();
   input += synapse0x1814790();
   input += synapse0x18147d0();
   input += synapse0x1814810();
   input += synapse0x1814850();
   input += synapse0x1814890();
   input += synapse0x18148d0();
   input += synapse0x1814910();
   input += synapse0x1814290();
   input += synapse0x18142d0();
   input += synapse0x1814a60();
   input += synapse0x1814aa0();
   input += synapse0x1814ae0();
   input += synapse0x1814b20();
   input += synapse0x1814b60();
   input += synapse0x1814ba0();
   input += synapse0x1814be0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1814100() {
   double input = input0x1814100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1814c20() {
   double input = 0.828763;
   input += synapse0x1814f60();
   input += synapse0x1814fa0();
   input += synapse0x1814fe0();
   input += synapse0x1815020();
   input += synapse0x1815060();
   input += synapse0x18150a0();
   input += synapse0x18150e0();
   input += synapse0x1815120();
   input += synapse0x1815160();
   input += synapse0x18151a0();
   input += synapse0x18151e0();
   input += synapse0x1815220();
   input += synapse0x1815260();
   input += synapse0x18152a0();
   input += synapse0x18152e0();
   input += synapse0x1815320();
   input += synapse0x1814db0();
   input += synapse0x1814df0();
   input += synapse0x1815470();
   input += synapse0x18154b0();
   input += synapse0x18154f0();
   input += synapse0x1815530();
   input += synapse0x1815570();
   input += synapse0x18155b0();
   input += synapse0x18155f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1814c20() {
   double input = input0x1814c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1815630() {
   double input = -0.580946;
   input += synapse0x1815970();
   input += synapse0x18159b0();
   input += synapse0x18159f0();
   input += synapse0x1815a30();
   input += synapse0x1815a70();
   input += synapse0x1815ab0();
   input += synapse0x1815af0();
   input += synapse0x1815b30();
   input += synapse0x1815b70();
   input += synapse0x1815bb0();
   input += synapse0x1815bf0();
   input += synapse0x1815c30();
   input += synapse0x1815c70();
   input += synapse0x1815cb0();
   input += synapse0x1815cf0();
   input += synapse0x1815d30();
   input += synapse0x18157c0();
   input += synapse0x1815800();
   input += synapse0x1815e80();
   input += synapse0x1815ec0();
   input += synapse0x1815f00();
   input += synapse0x1815f40();
   input += synapse0x1815f80();
   input += synapse0x1815fc0();
   input += synapse0x1816000();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1815630() {
   double input = input0x1815630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1816040() {
   double input = 0.0466395;
   input += synapse0x1816380();
   input += synapse0x18163c0();
   input += synapse0x1816400();
   input += synapse0x1816440();
   input += synapse0x1816480();
   input += synapse0x18164c0();
   input += synapse0x1816500();
   input += synapse0x1813720();
   input += synapse0x1813760();
   input += synapse0x18137a0();
   input += synapse0x18137e0();
   input += synapse0x1813820();
   input += synapse0x1813860();
   input += synapse0x18138a0();
   input += synapse0x18138e0();
   input += synapse0x1813920();
   input += synapse0x18161d0();
   input += synapse0x1816210();
   input += synapse0x1813a70();
   input += synapse0x1813ab0();
   input += synapse0x1813af0();
   input += synapse0x1813b30();
   input += synapse0x1813b70();
   input += synapse0x1813bb0();
   input += synapse0x1813bf0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1816040() {
   double input = input0x1816040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1813c30() {
   double input = -0.577869;
   input += synapse0x1813ee0();
   input += synapse0x18175e0();
   input += synapse0x1817620();
   input += synapse0x1817660();
   input += synapse0x18176a0();
   input += synapse0x18176e0();
   input += synapse0x1817720();
   input += synapse0x1817760();
   input += synapse0x18177a0();
   input += synapse0x18177e0();
   input += synapse0x1817820();
   input += synapse0x1817860();
   input += synapse0x18178a0();
   input += synapse0x18178e0();
   input += synapse0x1817920();
   input += synapse0x1817960();
   input += synapse0x1813dc0();
   input += synapse0x1813e00();
   input += synapse0x1817ab0();
   input += synapse0x1817af0();
   input += synapse0x1817b30();
   input += synapse0x1817b70();
   input += synapse0x1817bb0();
   input += synapse0x1817bf0();
   input += synapse0x1817c30();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1813c30() {
   double input = input0x1813c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1817c70() {
   double input = -0.0944535;
   input += synapse0x1817fb0();
   input += synapse0x1817ff0();
   input += synapse0x1818030();
   input += synapse0x1818070();
   input += synapse0x18180b0();
   input += synapse0x18180f0();
   input += synapse0x1818130();
   input += synapse0x1818170();
   input += synapse0x18181b0();
   input += synapse0x18181f0();
   input += synapse0x1818230();
   input += synapse0x1818270();
   input += synapse0x18182b0();
   input += synapse0x18182f0();
   input += synapse0x1818330();
   input += synapse0x1818370();
   input += synapse0x1817e00();
   input += synapse0x1817e40();
   input += synapse0x18184c0();
   input += synapse0x1818500();
   input += synapse0x1818540();
   input += synapse0x1818580();
   input += synapse0x18185c0();
   input += synapse0x1818600();
   input += synapse0x1818640();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1817c70() {
   double input = input0x1817c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1818680() {
   double input = 0.829192;
   input += synapse0x18189c0();
   input += synapse0x1818a00();
   input += synapse0x1818a40();
   input += synapse0x1818a80();
   input += synapse0x1818ac0();
   input += synapse0x1818b00();
   input += synapse0x1818b40();
   input += synapse0x1818b80();
   input += synapse0x1818bc0();
   input += synapse0x1818c00();
   input += synapse0x1818c40();
   input += synapse0x1818c80();
   input += synapse0x1818cc0();
   input += synapse0x1818d00();
   input += synapse0x1818d40();
   input += synapse0x1818d80();
   input += synapse0x1818810();
   input += synapse0x1818850();
   input += synapse0x1818ed0();
   input += synapse0x1818f10();
   input += synapse0x1818f50();
   input += synapse0x1818f90();
   input += synapse0x1818fd0();
   input += synapse0x1819010();
   input += synapse0x1819050();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1818680() {
   double input = input0x1818680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1819090() {
   double input = 0.222714;
   input += synapse0x18193d0();
   input += synapse0x1819410();
   input += synapse0x1819450();
   input += synapse0x1819490();
   input += synapse0x18194d0();
   input += synapse0x1819510();
   input += synapse0x1819550();
   input += synapse0x1819590();
   input += synapse0x18195d0();
   input += synapse0x1819610();
   input += synapse0x1819650();
   input += synapse0x1819690();
   input += synapse0x18196d0();
   input += synapse0x1819710();
   input += synapse0x1819750();
   input += synapse0x1819790();
   input += synapse0x1819220();
   input += synapse0x1819260();
   input += synapse0x18198e0();
   input += synapse0x1819920();
   input += synapse0x1819960();
   input += synapse0x18199a0();
   input += synapse0x18199e0();
   input += synapse0x1819a20();
   input += synapse0x1819a60();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1819090() {
   double input = input0x1819090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1819aa0() {
   double input = -0.43269;
   input += synapse0x1819de0();
   input += synapse0x1819e20();
   input += synapse0x1819e60();
   input += synapse0x1819ea0();
   input += synapse0x1819ee0();
   input += synapse0x1819f20();
   input += synapse0x1819f60();
   input += synapse0x1819fa0();
   input += synapse0x1819fe0();
   input += synapse0x181a020();
   input += synapse0x181a060();
   input += synapse0x181a0a0();
   input += synapse0x181a0e0();
   input += synapse0x181a120();
   input += synapse0x181a160();
   input += synapse0x181a1a0();
   input += synapse0x1819c30();
   input += synapse0x1819c70();
   input += synapse0x181a2f0();
   input += synapse0x181a330();
   input += synapse0x181a370();
   input += synapse0x181a3b0();
   input += synapse0x181a3f0();
   input += synapse0x181a430();
   input += synapse0x181a470();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1819aa0() {
   double input = input0x1819aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x181a4b0() {
   double input = -0.559085;
   input += synapse0x181a7f0();
   input += synapse0x181a830();
   input += synapse0x181a870();
   input += synapse0x181a8b0();
   input += synapse0x181a8f0();
   input += synapse0x181a930();
   input += synapse0x181a970();
   input += synapse0x181a9b0();
   input += synapse0x181a9f0();
   input += synapse0x181aa30();
   input += synapse0x181aa70();
   input += synapse0x181aab0();
   input += synapse0x181aaf0();
   input += synapse0x181ab30();
   input += synapse0x181ab70();
   input += synapse0x181abb0();
   input += synapse0x181a640();
   input += synapse0x181a680();
   input += synapse0x181ad00();
   input += synapse0x181ad40();
   input += synapse0x181ad80();
   input += synapse0x181adc0();
   input += synapse0x181ae00();
   input += synapse0x181ae40();
   input += synapse0x181ae80();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x181a4b0() {
   double input = input0x181a4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x181aec0() {
   double input = -0.410403;
   input += synapse0x181b200();
   input += synapse0x181b240();
   input += synapse0x181b280();
   input += synapse0x181b2c0();
   input += synapse0x181b300();
   input += synapse0x181b340();
   input += synapse0x181b380();
   input += synapse0x181b3c0();
   input += synapse0x181b400();
   input += synapse0x181b440();
   input += synapse0x181b480();
   input += synapse0x181b4c0();
   input += synapse0x181b500();
   input += synapse0x181b540();
   input += synapse0x181b580();
   input += synapse0x181b5c0();
   input += synapse0x181b050();
   input += synapse0x181b090();
   input += synapse0x181b710();
   input += synapse0x181b750();
   input += synapse0x181b790();
   input += synapse0x181b7d0();
   input += synapse0x181b810();
   input += synapse0x181b850();
   input += synapse0x181b890();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x181aec0() {
   double input = input0x181aec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x181b8d0() {
   double input = -0.104332;
   input += synapse0x181bc10();
   input += synapse0x181bc50();
   input += synapse0x181bc90();
   input += synapse0x181bcd0();
   input += synapse0x181bd10();
   input += synapse0x181bd50();
   input += synapse0x181bd90();
   input += synapse0x181bdd0();
   input += synapse0x181be10();
   input += synapse0x181be50();
   input += synapse0x181be90();
   input += synapse0x181bed0();
   input += synapse0x181bf10();
   input += synapse0x181bf50();
   input += synapse0x181bf90();
   input += synapse0x181bfd0();
   input += synapse0x181ba60();
   input += synapse0x181baa0();
   input += synapse0x181c120();
   input += synapse0x181c160();
   input += synapse0x181c1a0();
   input += synapse0x181c1e0();
   input += synapse0x181c220();
   input += synapse0x181c260();
   input += synapse0x181c2a0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x181b8d0() {
   double input = input0x181b8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x181c2e0() {
   double input = -0.290772;
   input += synapse0x181c620();
   input += synapse0x181c660();
   input += synapse0x181c6a0();
   input += synapse0x181c6e0();
   input += synapse0x181c720();
   input += synapse0x181c760();
   input += synapse0x181c7a0();
   input += synapse0x181c7e0();
   input += synapse0x181c820();
   input += synapse0x181c860();
   input += synapse0x181c8a0();
   input += synapse0x181c8e0();
   input += synapse0x181c920();
   input += synapse0x181c960();
   input += synapse0x181c9a0();
   input += synapse0x181c9e0();
   input += synapse0x181c470();
   input += synapse0x181c4b0();
   input += synapse0x181cb30();
   input += synapse0x181cb70();
   input += synapse0x181cbb0();
   input += synapse0x181cbf0();
   input += synapse0x181cc30();
   input += synapse0x181cc70();
   input += synapse0x181ccb0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x181c2e0() {
   double input = input0x181c2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x181ccf0() {
   double input = 0.815474;
   input += synapse0x181d030();
   input += synapse0x180a850();
   input += synapse0x180a890();
   input += synapse0x180ac50();
   input += synapse0x180ac90();
   input += synapse0x180b0d0();
   input += synapse0x180b110();
   input += synapse0x180b550();
   input += synapse0x180b590();
   input += synapse0x180ba60();
   input += synapse0x180baa0();
   input += synapse0x180bee0();
   input += synapse0x180bf20();
   input += synapse0x180c360();
   input += synapse0x180c3a0();
   input += synapse0x180c8e0();
   input += synapse0x180c920();
   input += synapse0x180cd60();
   input += synapse0x180cda0();
   input += synapse0x180d1e0();
   input += synapse0x180d220();
   input += synapse0x180d660();
   input += synapse0x180d6a0();
   input += synapse0x180dae0();
   input += synapse0x180db20();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x181ccf0() {
   double input = input0x181ccf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1817310() {
   double input = -0.184054;
   input += synapse0x18174a0();
   input += synapse0x18174e0();
   input += synapse0x180ed80();
   input += synapse0x180edc0();
   input += synapse0x181ce80();
   input += synapse0x181cec0();
   input += synapse0x180a130();
   input += synapse0x180a170();
   input += synapse0x180f920();
   input += synapse0x180f960();
   input += synapse0x180fda0();
   input += synapse0x180fde0();
   input += synapse0x1810220();
   input += synapse0x1810260();
   input += synapse0x18106a0();
   input += synapse0x18106e0();
   input += synapse0x1810b20();
   input += synapse0x1810b60();
   input += synapse0x1810fa0();
   input += synapse0x1810fe0();
   input += synapse0x1811420();
   input += synapse0x1811460();
   input += synapse0x18118a0();
   input += synapse0x18118e0();
   input += synapse0x180dff0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1817310() {
   double input = input0x1817310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x181ff60() {
   double input = -0.47452;
   input += synapse0x180e030();
   input += synapse0x18202a0();
   input += synapse0x18202e0();
   input += synapse0x1820320();
   input += synapse0x1820360();
   input += synapse0x18203a0();
   input += synapse0x18203e0();
   input += synapse0x1820420();
   input += synapse0x1820460();
   input += synapse0x18204a0();
   input += synapse0x18204e0();
   input += synapse0x1820520();
   input += synapse0x1820560();
   input += synapse0x18205a0();
   input += synapse0x18205e0();
   input += synapse0x1820620();
   input += synapse0x18200f0();
   input += synapse0x1820130();
   input += synapse0x1820770();
   input += synapse0x18207b0();
   input += synapse0x18207f0();
   input += synapse0x1820830();
   input += synapse0x1820870();
   input += synapse0x18208b0();
   input += synapse0x18208f0();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x181ff60() {
   double input = input0x181ff60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1820930() {
   double input = 0.768186;
   input += synapse0x1820c70();
   input += synapse0x1820cb0();
   input += synapse0x1820cf0();
   input += synapse0x1820d30();
   input += synapse0x1820d70();
   input += synapse0x1820db0();
   input += synapse0x1820df0();
   input += synapse0x1820e30();
   input += synapse0x1820e70();
   input += synapse0x1820eb0();
   input += synapse0x1820ef0();
   input += synapse0x1820f30();
   input += synapse0x1820f70();
   input += synapse0x1820fb0();
   input += synapse0x1820ff0();
   input += synapse0x1821030();
   input += synapse0x1820ac0();
   input += synapse0x1820b00();
   input += synapse0x1821180();
   input += synapse0x18211c0();
   input += synapse0x1821200();
   input += synapse0x1821240();
   input += synapse0x1821280();
   input += synapse0x18212c0();
   input += synapse0x1821300();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1820930() {
   double input = input0x1820930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1821340() {
   double input = 0.595618;
   input += synapse0x1821680();
   input += synapse0x18216c0();
   input += synapse0x1821700();
   input += synapse0x1821740();
   input += synapse0x1821780();
   input += synapse0x18217c0();
   input += synapse0x1821800();
   input += synapse0x1821840();
   input += synapse0x1821880();
   input += synapse0x18218c0();
   input += synapse0x1821900();
   input += synapse0x1821940();
   input += synapse0x1821980();
   input += synapse0x18219c0();
   input += synapse0x1821a00();
   input += synapse0x1821a40();
   input += synapse0x18214d0();
   input += synapse0x1821510();
   input += synapse0x1821b90();
   input += synapse0x1821bd0();
   input += synapse0x1821c10();
   input += synapse0x1821c50();
   input += synapse0x1821c90();
   input += synapse0x1821cd0();
   input += synapse0x1821d10();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1821340() {
   double input = input0x1821340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1821d50() {
   double input = -0.270966;
   input += synapse0x1822090();
   input += synapse0x18220d0();
   input += synapse0x1822110();
   input += synapse0x1822150();
   input += synapse0x1822190();
   input += synapse0x18221d0();
   input += synapse0x1822210();
   input += synapse0x1822250();
   input += synapse0x1822290();
   input += synapse0x18222d0();
   input += synapse0x1822310();
   input += synapse0x1822350();
   input += synapse0x1822390();
   input += synapse0x18223d0();
   input += synapse0x1822410();
   input += synapse0x1822450();
   input += synapse0x1821ee0();
   input += synapse0x1821f20();
   input += synapse0x18225a0();
   input += synapse0x18225e0();
   input += synapse0x1822620();
   input += synapse0x1822660();
   input += synapse0x18226a0();
   input += synapse0x18226e0();
   input += synapse0x1822720();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1821d50() {
   double input = input0x1821d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1822760() {
   double input = 0.257069;
   input += synapse0x1822aa0();
   input += synapse0x1822ae0();
   input += synapse0x1822b20();
   input += synapse0x1822b60();
   input += synapse0x1822ba0();
   input += synapse0x1822be0();
   input += synapse0x1822c20();
   input += synapse0x1822c60();
   input += synapse0x1822ca0();
   input += synapse0x1822ce0();
   input += synapse0x1822d20();
   input += synapse0x1822d60();
   input += synapse0x1822da0();
   input += synapse0x1822de0();
   input += synapse0x1822e20();
   input += synapse0x1822e60();
   input += synapse0x18228f0();
   input += synapse0x1822930();
   input += synapse0x1822fb0();
   input += synapse0x1822ff0();
   input += synapse0x1823030();
   input += synapse0x1823070();
   input += synapse0x18230b0();
   input += synapse0x18230f0();
   input += synapse0x1823130();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1822760() {
   double input = input0x1822760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1823170() {
   double input = 0.328623;
   input += synapse0x18234b0();
   input += synapse0x18234f0();
   input += synapse0x1823530();
   input += synapse0x1823570();
   input += synapse0x18235b0();
   input += synapse0x18235f0();
   input += synapse0x1823630();
   input += synapse0x1823670();
   input += synapse0x18236b0();
   input += synapse0x18236f0();
   input += synapse0x1823730();
   input += synapse0x1823770();
   input += synapse0x18237b0();
   input += synapse0x18237f0();
   input += synapse0x1823830();
   input += synapse0x1823870();
   input += synapse0x1823300();
   input += synapse0x1823340();
   input += synapse0x18239c0();
   input += synapse0x1823a00();
   input += synapse0x1823a40();
   input += synapse0x1823a80();
   input += synapse0x1823ac0();
   input += synapse0x1823b00();
   input += synapse0x1823b40();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1823170() {
   double input = input0x1823170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1823b80() {
   double input = -0.1486;
   input += synapse0x1823ec0();
   input += synapse0x1823f00();
   input += synapse0x1823f40();
   input += synapse0x1823f80();
   input += synapse0x1823fc0();
   input += synapse0x1824000();
   input += synapse0x1824040();
   input += synapse0x1824080();
   input += synapse0x18240c0();
   input += synapse0x1824100();
   input += synapse0x1824140();
   input += synapse0x1824180();
   input += synapse0x18241c0();
   input += synapse0x1824200();
   input += synapse0x1824240();
   input += synapse0x1824280();
   input += synapse0x1823d10();
   input += synapse0x1823d50();
   input += synapse0x18243d0();
   input += synapse0x1824410();
   input += synapse0x1824450();
   input += synapse0x1824490();
   input += synapse0x18244d0();
   input += synapse0x1824510();
   input += synapse0x1824550();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1823b80() {
   double input = input0x1823b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1824590() {
   double input = 0.340666;
   input += synapse0x18248d0();
   input += synapse0x1824910();
   input += synapse0x1824950();
   input += synapse0x1824990();
   input += synapse0x18249d0();
   input += synapse0x1824a10();
   input += synapse0x1824a50();
   input += synapse0x1824a90();
   input += synapse0x1824ad0();
   input += synapse0x1824b10();
   input += synapse0x1824b50();
   input += synapse0x1824b90();
   input += synapse0x1824bd0();
   input += synapse0x1824c10();
   input += synapse0x1824c50();
   input += synapse0x1824c90();
   input += synapse0x1824720();
   input += synapse0x1824760();
   input += synapse0x1824de0();
   input += synapse0x1824e20();
   input += synapse0x1824e60();
   input += synapse0x1824ea0();
   input += synapse0x1824ee0();
   input += synapse0x1824f20();
   input += synapse0x1824f60();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1824590() {
   double input = input0x1824590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_3A_25_25hi_5000ep_weight::input0x1824fa0() {
   double input = 1.41893;
   input += synapse0x18251c0();
   input += synapse0x1825200();
   input += synapse0x1825240();
   input += synapse0x1825280();
   input += synapse0x18252c0();
   input += synapse0x1825300();
   input += synapse0x1825340();
   input += synapse0x1825380();
   input += synapse0x18253c0();
   input += synapse0x1825400();
   input += synapse0x1825440();
   input += synapse0x1825480();
   input += synapse0x18254c0();
   input += synapse0x1825500();
   input += synapse0x1825540();
   input += synapse0x1825580();
   input += synapse0x180a590();
   input += synapse0x180a5d0();
   input += synapse0x18256d0();
   input += synapse0x1825710();
   input += synapse0x1825750();
   input += synapse0x1825790();
   input += synapse0x18257d0();
   input += synapse0x1825810();
   input += synapse0x1825850();
   return input;
}

double nnFunc_3A_25_25hi_5000ep_weight::neuron0x1824fa0() {
   double input = input0x1824fa0();
   return (input * 40.6119)+147.237;
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x17166b0() {
   return (neuron0x1809550()*-5.2307);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x17f89c0() {
   return (neuron0x1809890()*-0.0873172);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a970() {
   return (neuron0x1809bd0()*-2.36768);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a9b0() {
   return (neuron0x1809f10()*3.2252);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a9f0() {
   return (neuron0x180a250()*-8.39662);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ad70() {
   return (neuron0x1809550()*0.0170668);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180adb0() {
   return (neuron0x1809890()*-0.0185861);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180adf0() {
   return (neuron0x1809bd0()*0.0180166);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ae30() {
   return (neuron0x1809f10()*-2.49101);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ae70() {
   return (neuron0x180a250()*1.37496);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b1f0() {
   return (neuron0x1809550()*-0.131666);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b230() {
   return (neuron0x1809890()*0.0945291);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b270() {
   return (neuron0x1809bd0()*-0.0124613);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b2b0() {
   return (neuron0x1809f10()*-0.618978);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b2f0() {
   return (neuron0x180a250()*0.697359);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b670() {
   return (neuron0x1809550()*0.102611);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b6b0() {
   return (neuron0x1809890()*0.0608881);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x17088a0() {
   return (neuron0x1809bd0()*-0.163618);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x17088e0() {
   return (neuron0x1809f10()*5.41555);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b800() {
   return (neuron0x180a250()*-0.163787);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bb80() {
   return (neuron0x1809550()*0.115045);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bbc0() {
   return (neuron0x1809890()*0.183449);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bc00() {
   return (neuron0x1809bd0()*-0.0030545);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bc40() {
   return (neuron0x1809f10()*-0.0115221);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bc80() {
   return (neuron0x180a250()*0.598035);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c000() {
   return (neuron0x1809550()*-1.10689);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c040() {
   return (neuron0x1809890()*-0.231174);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c080() {
   return (neuron0x1809bd0()*-0.117728);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c0c0() {
   return (neuron0x1809f10()*-6.9183);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c100() {
   return (neuron0x180a250()*2.92563);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c480() {
   return (neuron0x1809550()*-0.160448);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c4c0() {
   return (neuron0x1809890()*-0.168983);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c500() {
   return (neuron0x1809bd0()*0.00271252);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b6f0() {
   return (neuron0x1809f10()*8.54114);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b730() {
   return (neuron0x180a250()*-10.4159);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ca00() {
   return (neuron0x1809550()*-0.211457);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ca40() {
   return (neuron0x1809890()*0.0130796);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ca80() {
   return (neuron0x1809bd0()*0.552624);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cac0() {
   return (neuron0x1809f10()*-11.8641);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cb00() {
   return (neuron0x180a250()*5.75166);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ce80() {
   return (neuron0x1809550()*-3.05469);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cec0() {
   return (neuron0x1809890()*1.64018);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cf00() {
   return (neuron0x1809bd0()*1.49274);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cf40() {
   return (neuron0x1809f10()*0.0793585);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cf80() {
   return (neuron0x180a250()*0.972951);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d300() {
   return (neuron0x1809550()*2.29304);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d340() {
   return (neuron0x1809890()*-1.24799);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d380() {
   return (neuron0x1809bd0()*-0.879468);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d3c0() {
   return (neuron0x1809f10()*-0.430113);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d400() {
   return (neuron0x180a250()*-0.408777);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d780() {
   return (neuron0x1809550()*-0.283255);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d7c0() {
   return (neuron0x1809890()*-0.264831);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d800() {
   return (neuron0x1809bd0()*0.000361507);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d840() {
   return (neuron0x1809f10()*15.0549);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d880() {
   return (neuron0x180a250()*-15.7999);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x17086f0() {
   return (neuron0x1809550()*4.22525);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1708730() {
   return (neuron0x1809890()*-2.28456);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dd10() {
   return (neuron0x1809bd0()*-1.64009);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dd50() {
   return (neuron0x1809f10()*2.41323);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dd90() {
   return (neuron0x180a250()*-1.05489);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e110() {
   return (neuron0x1809550()*3.00227);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e150() {
   return (neuron0x1809890()*0.0225537);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e190() {
   return (neuron0x1809bd0()*1.64642);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e1d0() {
   return (neuron0x1809f10()*-15.1842);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e210() {
   return (neuron0x180a250()*10.5342);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1708ec0() {
   return (neuron0x1809550()*-6.51152);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c6d0() {
   return (neuron0x1809890()*3.08567);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c710() {
   return (neuron0x1809bd0()*2.39257);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e660() {
   return (neuron0x1809f10()*-4.53046);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e6a0() {
   return (neuron0x180a250()*1.88324);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ea20() {
   return (neuron0x1809550()*7.10212);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ea60() {
   return (neuron0x1809890()*-4.17052);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180eaa0() {
   return (neuron0x1809bd0()*-3.12138);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180eae0() {
   return (neuron0x1809f10()*2.72167);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180eb20() {
   return (neuron0x180a250()*-1.38262);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180eea0() {
   return (neuron0x1809550()*-3.12943);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1809770() {
   return (neuron0x1809890()*1.47488);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18097b0() {
   return (neuron0x1809bd0()*1.51692);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1809ab0() {
   return (neuron0x1809f10()*0.569945);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1809af0() {
   return (neuron0x180a250()*0.252428);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f5c0() {
   return (neuron0x1809550()*-3.05934);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f600() {
   return (neuron0x1809890()*1.90226);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f640() {
   return (neuron0x1809bd0()*1.12308);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f680() {
   return (neuron0x1809f10()*-0.835296);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f6c0() {
   return (neuron0x180a250()*0.386461);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fa40() {
   return (neuron0x1809550()*0.791136);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fa80() {
   return (neuron0x1809890()*0.00819831);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fac0() {
   return (neuron0x1809bd0()*0.113105);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fb00() {
   return (neuron0x1809f10()*-1.50291);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fb40() {
   return (neuron0x180a250()*1.5787);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fec0() {
   return (neuron0x1809550()*1.5053);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ff00() {
   return (neuron0x1809890()*-0.420528);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ff40() {
   return (neuron0x1809bd0()*-1.522);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ff80() {
   return (neuron0x1809f10()*-5.6116);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ffc0() {
   return (neuron0x180a250()*-0.0722243);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810340() {
   return (neuron0x1809550()*1.77224);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810380() {
   return (neuron0x1809890()*-0.0311156);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18103c0() {
   return (neuron0x1809bd0()*0.272397);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810400() {
   return (neuron0x1809f10()*-17.8625);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810440() {
   return (neuron0x180a250()*14.261);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18107c0() {
   return (neuron0x1809550()*-0.122653);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810800() {
   return (neuron0x1809890()*-0.0284909);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810840() {
   return (neuron0x1809bd0()*0.290208);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810880() {
   return (neuron0x1809f10()*-9.06311);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18108c0() {
   return (neuron0x180a250()*6.66993);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810c40() {
   return (neuron0x1809550()*1.24691);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810c80() {
   return (neuron0x1809890()*-0.551944);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810cc0() {
   return (neuron0x1809bd0()*-0.928514);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810d00() {
   return (neuron0x1809f10()*-5.13533);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810d40() {
   return (neuron0x180a250()*-0.531433);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18110c0() {
   return (neuron0x1809550()*-0.24924);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811100() {
   return (neuron0x1809890()*0.0391562);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811140() {
   return (neuron0x1809bd0()*0.263593);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811180() {
   return (neuron0x1809f10()*13.907);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18111c0() {
   return (neuron0x180a250()*-10.1493);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811540() {
   return (neuron0x1809550()*0.0224748);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811580() {
   return (neuron0x1809890()*0.00225151);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18115c0() {
   return (neuron0x1809bd0()*0.0881311);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811600() {
   return (neuron0x1809f10()*1.47222);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811640() {
   return (neuron0x180a250()*-0.497519);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18119c0() {
   return (neuron0x1809550()*-2.01541);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811a00() {
   return (neuron0x1809890()*0.957422);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811a40() {
   return (neuron0x1809bd0()*0.920171);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811a80() {
   return (neuron0x1809f10()*0.829696);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811ac0() {
   return (neuron0x180a250()*0.441516);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b5e0() {
   return (neuron0x180a6c0()*-5.46722);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b620() {
   return (neuron0x180aa30()*-0.957944);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180baf0() {
   return (neuron0x180aeb0()*-0.125373);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bb30() {
   return (neuron0x180b330()*0.860061);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bf70() {
   return (neuron0x180b840()*-0.670025);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bfb0() {
   return (neuron0x180bcc0()*1.54645);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c3f0() {
   return (neuron0x180c140()*8.5667);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c430() {
   return (neuron0x180c750()*-4.6833);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c970() {
   return (neuron0x180cb40()*0.133044);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c9b0() {
   return (neuron0x180cfc0()*-0.662041);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cdf0() {
   return (neuron0x180d440()*11.3608);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ce30() {
   return (neuron0x180d8c0()*-1.34776);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d270() {
   return (neuron0x180ddd0()*9.2643);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d2b0() {
   return (neuron0x180c540()*-1.57615);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d6f0() {
   return (neuron0x180e6e0()*-0.425244);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d730() {
   return (neuron0x180eb60()*0.928145);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180db70() {
   return (neuron0x180f430()*-0.0954874);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dbb0() {
   return (neuron0x180f700()*1.60431);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e080() {
   return (neuron0x180fb80()*0.37867);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e0c0() {
   return (neuron0x1810000()*6.06905);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e990() {
   return (neuron0x1810480()*0.244);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e9d0() {
   return (neuron0x1810900()*-1.10222);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ee10() {
   return (neuron0x1810d80()*-1.55702);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ee50() {
   return (neuron0x1811200()*-0.512743);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a470() {
   return (neuron0x1811680()*0.722153);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e4f0() {
   return (neuron0x180a6c0()*1.93334);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e530() {
   return (neuron0x180aa30()*-0.131042);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e570() {
   return (neuron0x180aeb0()*0.50242);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e5b0() {
   return (neuron0x180b330()*-1.24937);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e5f0() {
   return (neuron0x180b840()*-0.0742801);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a4b0() {
   return (neuron0x180bcc0()*0.429723);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810730() {
   return (neuron0x180c140()*-1.37647);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810770() {
   return (neuron0x180c750()*1.35198);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810bb0() {
   return (neuron0x180cb40()*-0.131847);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810bf0() {
   return (neuron0x180cfc0()*0.865552);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811030() {
   return (neuron0x180d440()*-5.23633);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811070() {
   return (neuron0x180d8c0()*0.544721);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18114b0() {
   return (neuron0x180ddd0()*-2.72506);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18114f0() {
   return (neuron0x180c540()*1.47732);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811930() {
   return (neuron0x180e6e0()*0.38179);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811970() {
   return (neuron0x180eb60()*-0.908115);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a8e0() {
   return (neuron0x180f430()*1.2367);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a920() {
   return (neuron0x180f700()*-1.58591);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f9b0() {
   return (neuron0x180fb80()*0.19049);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f9f0() {
   return (neuron0x1810000()*-2.73647);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1716780() {
   return (neuron0x1810480()*0.340399);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x17167c0() {
   return (neuron0x1810900()*0.35909);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814040() {
   return (neuron0x1810d80()*-1.91986);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814080() {
   return (neuron0x1811200()*0.295426);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18140c0() {
   return (neuron0x1811680()*-0.134826);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dc00() {
   return (neuron0x180a6c0()*-0.3289);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dc40() {
   return (neuron0x180aa30()*-0.506237);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dc80() {
   return (neuron0x180aeb0()*-0.663834);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dcc0() {
   return (neuron0x180b330()*0.478915);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814650() {
   return (neuron0x180b840()*-0.0375625);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814690() {
   return (neuron0x180bcc0()*-0.300439);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18146d0() {
   return (neuron0x180c140()*-0.712669);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814710() {
   return (neuron0x180c750()*0.970113);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814750() {
   return (neuron0x180cb40()*-0.865139);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814790() {
   return (neuron0x180cfc0()*0.420772);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18147d0() {
   return (neuron0x180d440()*-1.97988);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814810() {
   return (neuron0x180d8c0()*0.622707);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814850() {
   return (neuron0x180ddd0()*-1.29717);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814890() {
   return (neuron0x180c540()*-0.316758);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18148d0() {
   return (neuron0x180e6e0()*0.760262);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814910() {
   return (neuron0x180eb60()*-0.245349);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814290() {
   return (neuron0x180f430()*0.0966567);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18142d0() {
   return (neuron0x180f700()*-0.994293);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814a60() {
   return (neuron0x180fb80()*0.274051);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814aa0() {
   return (neuron0x1810000()*-0.783366);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814ae0() {
   return (neuron0x1810480()*-0.285325);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814b20() {
   return (neuron0x1810900()*0.201029);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814b60() {
   return (neuron0x1810d80()*-0.922236);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814ba0() {
   return (neuron0x1811200()*-0.58551);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814be0() {
   return (neuron0x1811680()*-0.719692);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814f60() {
   return (neuron0x180a6c0()*-4.00277);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814fa0() {
   return (neuron0x180aa30()*0.610645);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814fe0() {
   return (neuron0x180aeb0()*-0.347923);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815020() {
   return (neuron0x180b330()*6.09632);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815060() {
   return (neuron0x180b840()*-0.160398);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18150a0() {
   return (neuron0x180bcc0()*-0.157225);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18150e0() {
   return (neuron0x180c140()*1.03935);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815120() {
   return (neuron0x180c750()*-1.65929);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815160() {
   return (neuron0x180cb40()*0.370905);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18151a0() {
   return (neuron0x180cfc0()*-0.444206);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18151e0() {
   return (neuron0x180d440()*2.55727);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815220() {
   return (neuron0x180d8c0()*-0.000344542);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815260() {
   return (neuron0x180ddd0()*4.38478);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18152a0() {
   return (neuron0x180c540()*-1.01454);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18152e0() {
   return (neuron0x180e6e0()*-0.000672626);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815320() {
   return (neuron0x180eb60()*0.145452);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814db0() {
   return (neuron0x180f430()*0.367189);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1814df0() {
   return (neuron0x180f700()*-0.446261);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815470() {
   return (neuron0x180fb80()*-0.321408);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18154b0() {
   return (neuron0x1810000()*0.793623);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18154f0() {
   return (neuron0x1810480()*-2.99128);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815530() {
   return (neuron0x1810900()*0.00527932);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815570() {
   return (neuron0x1810d80()*10.8521);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18155b0() {
   return (neuron0x1811200()*-0.522928);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18155f0() {
   return (neuron0x1811680()*0.195812);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815970() {
   return (neuron0x180a6c0()*-0.357553);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18159b0() {
   return (neuron0x180aa30()*-0.380555);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18159f0() {
   return (neuron0x180aeb0()*-0.609151);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815a30() {
   return (neuron0x180b330()*-0.84049);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815a70() {
   return (neuron0x180b840()*-1.00709);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815ab0() {
   return (neuron0x180bcc0()*-0.58976);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815af0() {
   return (neuron0x180c140()*0.333209);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815b30() {
   return (neuron0x180c750()*-0.670574);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815b70() {
   return (neuron0x180cb40()*-0.201565);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815bb0() {
   return (neuron0x180cfc0()*-0.535606);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815bf0() {
   return (neuron0x180d440()*0.842715);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815c30() {
   return (neuron0x180d8c0()*-1.16127);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815c70() {
   return (neuron0x180ddd0()*0.281199);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815cb0() {
   return (neuron0x180c540()*-0.989237);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815cf0() {
   return (neuron0x180e6e0()*-0.245943);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815d30() {
   return (neuron0x180eb60()*-0.405305);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18157c0() {
   return (neuron0x180f430()*-0.403236);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815800() {
   return (neuron0x180f700()*-0.163294);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815e80() {
   return (neuron0x180fb80()*-0.0894104);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815ec0() {
   return (neuron0x1810000()*-0.821033);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815f00() {
   return (neuron0x1810480()*-0.58894);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815f40() {
   return (neuron0x1810900()*-0.317833);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815f80() {
   return (neuron0x1810d80()*0.691556);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1815fc0() {
   return (neuron0x1811200()*-0.393658);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816000() {
   return (neuron0x1811680()*-0.107739);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816380() {
   return (neuron0x180a6c0()*0.0373447);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18163c0() {
   return (neuron0x180aa30()*-3.05398);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816400() {
   return (neuron0x180aeb0()*0.529934);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816440() {
   return (neuron0x180b330()*-0.214373);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816480() {
   return (neuron0x180b840()*-0.300735);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18164c0() {
   return (neuron0x180bcc0()*0.143391);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816500() {
   return (neuron0x180c140()*-0.0702133);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813720() {
   return (neuron0x180c750()*2.06936);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813760() {
   return (neuron0x180cb40()*-0.101028);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18137a0() {
   return (neuron0x180cfc0()*0.132246);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18137e0() {
   return (neuron0x180d440()*-1.94928);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813820() {
   return (neuron0x180d8c0()*0.764799);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813860() {
   return (neuron0x180ddd0()*-2.60537);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18138a0() {
   return (neuron0x180c540()*0.525222);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18138e0() {
   return (neuron0x180e6e0()*0.52941);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813920() {
   return (neuron0x180eb60()*-0.317093);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18161d0() {
   return (neuron0x180f430()*0.958754);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1816210() {
   return (neuron0x180f700()*-0.0933934);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813a70() {
   return (neuron0x180fb80()*0.086251);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813ab0() {
   return (neuron0x1810000()*-1.72175);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813af0() {
   return (neuron0x1810480()*-2.15633);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813b30() {
   return (neuron0x1810900()*0.938978);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813b70() {
   return (neuron0x1810d80()*0.812833);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813bb0() {
   return (neuron0x1811200()*1.011);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813bf0() {
   return (neuron0x1811680()*-0.407912);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813ee0() {
   return (neuron0x180a6c0()*5.05243);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18175e0() {
   return (neuron0x180aa30()*0.99797);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817620() {
   return (neuron0x180aeb0()*0.332866);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817660() {
   return (neuron0x180b330()*2.10677);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18176a0() {
   return (neuron0x180b840()*-0.211294);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18176e0() {
   return (neuron0x180bcc0()*-2.45198);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817720() {
   return (neuron0x180c140()*-0.244845);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817760() {
   return (neuron0x180c750()*4.66627);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18177a0() {
   return (neuron0x180cb40()*-0.337725);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18177e0() {
   return (neuron0x180cfc0()*0.230401);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817820() {
   return (neuron0x180d440()*2.65815);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817860() {
   return (neuron0x180d8c0()*0.359616);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18178a0() {
   return (neuron0x180ddd0()*-7.44767);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18178e0() {
   return (neuron0x180c540()*0.139788);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817920() {
   return (neuron0x180e6e0()*0.21616);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817960() {
   return (neuron0x180eb60()*0.171112);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813dc0() {
   return (neuron0x180f430()*0.126198);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1813e00() {
   return (neuron0x180f700()*0.553207);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817ab0() {
   return (neuron0x180fb80()*0.0301235);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817af0() {
   return (neuron0x1810000()*-3.1864);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817b30() {
   return (neuron0x1810480()*0.0497);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817b70() {
   return (neuron0x1810900()*-0.00185288);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817bb0() {
   return (neuron0x1810d80()*2.51076);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817bf0() {
   return (neuron0x1811200()*-1.38964);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817c30() {
   return (neuron0x1811680()*-0.389661);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817fb0() {
   return (neuron0x180a6c0()*-0.642912);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817ff0() {
   return (neuron0x180aa30()*-0.412309);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818030() {
   return (neuron0x180aeb0()*-1.12887);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818070() {
   return (neuron0x180b330()*-0.673535);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18180b0() {
   return (neuron0x180b840()*0.235599);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18180f0() {
   return (neuron0x180bcc0()*-0.0981443);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818130() {
   return (neuron0x180c140()*4.00224);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818170() {
   return (neuron0x180c750()*-1.64035);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18181b0() {
   return (neuron0x180cb40()*0.580232);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18181f0() {
   return (neuron0x180cfc0()*-0.365313);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818230() {
   return (neuron0x180d440()*3.9616);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818270() {
   return (neuron0x180d8c0()*-0.510203);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18182b0() {
   return (neuron0x180ddd0()*-1.30423);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18182f0() {
   return (neuron0x180c540()*-0.145625);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818330() {
   return (neuron0x180e6e0()*0.125421);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818370() {
   return (neuron0x180eb60()*1.02039);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817e00() {
   return (neuron0x180f430()*-0.907251);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1817e40() {
   return (neuron0x180f700()*0.459053);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18184c0() {
   return (neuron0x180fb80()*-0.00733342);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818500() {
   return (neuron0x1810000()*-1.81805);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818540() {
   return (neuron0x1810480()*0.266868);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818580() {
   return (neuron0x1810900()*-0.90077);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18185c0() {
   return (neuron0x1810d80()*1.60032);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818600() {
   return (neuron0x1811200()*-0.175424);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818640() {
   return (neuron0x1811680()*0.480091);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18189c0() {
   return (neuron0x180a6c0()*-0.00353961);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818a00() {
   return (neuron0x180aa30()*0.0590387);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818a40() {
   return (neuron0x180aeb0()*1.33369);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818a80() {
   return (neuron0x180b330()*1.34328);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818ac0() {
   return (neuron0x180b840()*0.468335);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818b00() {
   return (neuron0x180bcc0()*1.51286);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818b40() {
   return (neuron0x180c140()*0.630789);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818b80() {
   return (neuron0x180c750()*1.14995);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818bc0() {
   return (neuron0x180cb40()*0.527031);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818c00() {
   return (neuron0x180cfc0()*0.72938);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818c40() {
   return (neuron0x180d440()*-1.89679);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818c80() {
   return (neuron0x180d8c0()*2.97373);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818cc0() {
   return (neuron0x180ddd0()*-0.6497);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818d00() {
   return (neuron0x180c540()*1.48895);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818d40() {
   return (neuron0x180e6e0()*1.70695);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818d80() {
   return (neuron0x180eb60()*-0.0498512);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818810() {
   return (neuron0x180f430()*0.501186);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818850() {
   return (neuron0x180f700()*-0.310221);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818ed0() {
   return (neuron0x180fb80()*0.185449);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818f10() {
   return (neuron0x1810000()*0.954328);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818f50() {
   return (neuron0x1810480()*-0.0352818);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818f90() {
   return (neuron0x1810900()*1.22381);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1818fd0() {
   return (neuron0x1810d80()*-0.0487268);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819010() {
   return (neuron0x1811200()*0.470757);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819050() {
   return (neuron0x1811680()*0.265727);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18193d0() {
   return (neuron0x180a6c0()*1.0114);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819410() {
   return (neuron0x180aa30()*-0.135201);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819450() {
   return (neuron0x180aeb0()*0.332339);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819490() {
   return (neuron0x180b330()*-1.52568);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18194d0() {
   return (neuron0x180b840()*-0.646076);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819510() {
   return (neuron0x180bcc0()*-0.397757);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819550() {
   return (neuron0x180c140()*3.57506);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819590() {
   return (neuron0x180c750()*0.135698);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18195d0() {
   return (neuron0x180cb40()*-0.0382592);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819610() {
   return (neuron0x180cfc0()*0.122355);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819650() {
   return (neuron0x180d440()*1.7962);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819690() {
   return (neuron0x180d8c0()*-0.681736);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18196d0() {
   return (neuron0x180ddd0()*-0.561226);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819710() {
   return (neuron0x180c540()*-0.466116);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819750() {
   return (neuron0x180e6e0()*-0.147646);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819790() {
   return (neuron0x180eb60()*0.246312);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819220() {
   return (neuron0x180f430()*-0.147678);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819260() {
   return (neuron0x180f700()*1.14664);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18198e0() {
   return (neuron0x180fb80()*0.287778);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819920() {
   return (neuron0x1810000()*-0.317099);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819960() {
   return (neuron0x1810480()*1.15314);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18199a0() {
   return (neuron0x1810900()*0.240746);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18199e0() {
   return (neuron0x1810d80()*0.0993159);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819a20() {
   return (neuron0x1811200()*0.487065);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819a60() {
   return (neuron0x1811680()*-0.191536);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819de0() {
   return (neuron0x180a6c0()*0.18);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819e20() {
   return (neuron0x180aa30()*0.0919621);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819e60() {
   return (neuron0x180aeb0()*-0.797579);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819ea0() {
   return (neuron0x180b330()*-0.806994);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819ee0() {
   return (neuron0x180b840()*-0.38088);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819f20() {
   return (neuron0x180bcc0()*-1.2199);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819f60() {
   return (neuron0x180c140()*-0.252405);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819fa0() {
   return (neuron0x180c750()*-0.735892);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819fe0() {
   return (neuron0x180cb40()*-0.580066);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a020() {
   return (neuron0x180cfc0()*-0.54507);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a060() {
   return (neuron0x180d440()*0.845194);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a0a0() {
   return (neuron0x180d8c0()*-0.975386);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a0e0() {
   return (neuron0x180ddd0()*0.777084);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a120() {
   return (neuron0x180c540()*-0.900309);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a160() {
   return (neuron0x180e6e0()*-0.37238);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a1a0() {
   return (neuron0x180eb60()*0.397008);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819c30() {
   return (neuron0x180f430()*-0.682886);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1819c70() {
   return (neuron0x180f700()*0.498911);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a2f0() {
   return (neuron0x180fb80()*0.16361);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a330() {
   return (neuron0x1810000()*-0.818449);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a370() {
   return (neuron0x1810480()*0.180964);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a3b0() {
   return (neuron0x1810900()*-0.602487);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a3f0() {
   return (neuron0x1810d80()*0.488934);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a430() {
   return (neuron0x1811200()*-0.805451);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a470() {
   return (neuron0x1811680()*-0.160148);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a7f0() {
   return (neuron0x180a6c0()*-1.69769);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a830() {
   return (neuron0x180aa30()*-1.11418);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a870() {
   return (neuron0x180aeb0()*-0.174707);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a8b0() {
   return (neuron0x180b330()*-1.54853);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a8f0() {
   return (neuron0x180b840()*1.65624);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a930() {
   return (neuron0x180bcc0()*-1.6364);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a970() {
   return (neuron0x180c140()*3.89612);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a9b0() {
   return (neuron0x180c750()*-0.264476);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a9f0() {
   return (neuron0x180cb40()*0.163722);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181aa30() {
   return (neuron0x180cfc0()*-0.590063);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181aa70() {
   return (neuron0x180d440()*4.6699);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181aab0() {
   return (neuron0x180d8c0()*-1.23742);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181aaf0() {
   return (neuron0x180ddd0()*-1.20202);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ab30() {
   return (neuron0x180c540()*-1.32197);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ab70() {
   return (neuron0x180e6e0()*-0.468177);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181abb0() {
   return (neuron0x180eb60()*0.272013);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a640() {
   return (neuron0x180f430()*-1.0927);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181a680() {
   return (neuron0x180f700()*0.267339);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ad00() {
   return (neuron0x180fb80()*0.606812);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ad40() {
   return (neuron0x1810000()*-0.796298);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ad80() {
   return (neuron0x1810480()*0.556668);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181adc0() {
   return (neuron0x1810900()*-0.392562);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ae00() {
   return (neuron0x1810d80()*0.110176);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ae40() {
   return (neuron0x1811200()*-0.302341);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ae80() {
   return (neuron0x1811680()*-0.463231);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b200() {
   return (neuron0x180a6c0()*4.26232);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b240() {
   return (neuron0x180aa30()*-0.280393);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b280() {
   return (neuron0x180aeb0()*-0.4317);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b2c0() {
   return (neuron0x180b330()*0.637251);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b300() {
   return (neuron0x180b840()*0.752044);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b340() {
   return (neuron0x180bcc0()*0.0287011);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b380() {
   return (neuron0x180c140()*-7.50614);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b3c0() {
   return (neuron0x180c750()*2.75078);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b400() {
   return (neuron0x180cb40()*-0.638271);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b440() {
   return (neuron0x180cfc0()*0.656086);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b480() {
   return (neuron0x180d440()*-13.7323);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b4c0() {
   return (neuron0x180d8c0()*1.88488);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b500() {
   return (neuron0x180ddd0()*-4.04958);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b540() {
   return (neuron0x180c540()*1.46758);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b580() {
   return (neuron0x180e6e0()*1.06639);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b5c0() {
   return (neuron0x180eb60()*-1.37545);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b050() {
   return (neuron0x180f430()*0.781206);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b090() {
   return (neuron0x180f700()*-0.976466);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b710() {
   return (neuron0x180fb80()*0.12043);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b750() {
   return (neuron0x1810000()*-2.25082);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b790() {
   return (neuron0x1810480()*0.466034);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b7d0() {
   return (neuron0x1810900()*1.09925);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b810() {
   return (neuron0x1810d80()*2.7272);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b850() {
   return (neuron0x1811200()*-0.211694);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181b890() {
   return (neuron0x1811680()*-0.891081);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bc10() {
   return (neuron0x180a6c0()*0.643901);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bc50() {
   return (neuron0x180aa30()*0.148035);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bc90() {
   return (neuron0x180aeb0()*0.636877);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bcd0() {
   return (neuron0x180b330()*-0.262305);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bd10() {
   return (neuron0x180b840()*0.673556);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bd50() {
   return (neuron0x180bcc0()*0.376696);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bd90() {
   return (neuron0x180c140()*0.909996);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bdd0() {
   return (neuron0x180c750()*-0.199511);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181be10() {
   return (neuron0x180cb40()*0.399351);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181be50() {
   return (neuron0x180cfc0()*-0.0989497);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181be90() {
   return (neuron0x180d440()*1.36804);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bed0() {
   return (neuron0x180d8c0()*-0.466098);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bf10() {
   return (neuron0x180ddd0()*0.256976);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bf50() {
   return (neuron0x180c540()*-0.0970264);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bf90() {
   return (neuron0x180e6e0()*-0.500447);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181bfd0() {
   return (neuron0x180eb60()*0.50907);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ba60() {
   return (neuron0x180f430()*0.397182);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181baa0() {
   return (neuron0x180f700()*-0.038459);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c120() {
   return (neuron0x180fb80()*0.0299852);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c160() {
   return (neuron0x1810000()*0.477819);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c1a0() {
   return (neuron0x1810480()*0.364084);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c1e0() {
   return (neuron0x1810900()*-0.56585);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c220() {
   return (neuron0x1810d80()*0.900236);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c260() {
   return (neuron0x1811200()*0.774997);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c2a0() {
   return (neuron0x1811680()*0.955324);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c620() {
   return (neuron0x180a6c0()*-0.0546925);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c660() {
   return (neuron0x180aa30()*-0.373108);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c6a0() {
   return (neuron0x180aeb0()*-0.204178);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c6e0() {
   return (neuron0x180b330()*0.138852);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c720() {
   return (neuron0x180b840()*0.341526);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c760() {
   return (neuron0x180bcc0()*-0.667512);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c7a0() {
   return (neuron0x180c140()*-0.246322);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c7e0() {
   return (neuron0x180c750()*-0.242569);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c820() {
   return (neuron0x180cb40()*0.207532);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c860() {
   return (neuron0x180cfc0()*0.508294);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c8a0() {
   return (neuron0x180d440()*-0.862299);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c8e0() {
   return (neuron0x180d8c0()*0.426878);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c920() {
   return (neuron0x180ddd0()*-0.183491);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c960() {
   return (neuron0x180c540()*-0.165837);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c9a0() {
   return (neuron0x180e6e0()*0.717012);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c9e0() {
   return (neuron0x180eb60()*-0.567883);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c470() {
   return (neuron0x180f430()*-0.0458278);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181c4b0() {
   return (neuron0x180f700()*-0.205633);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cb30() {
   return (neuron0x180fb80()*-0.0325219);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cb70() {
   return (neuron0x1810000()*-0.223085);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cbb0() {
   return (neuron0x1810480()*-0.55079);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cbf0() {
   return (neuron0x1810900()*-0.281515);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cc30() {
   return (neuron0x1810d80()*-0.23225);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cc70() {
   return (neuron0x1811200()*-0.439005);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ccb0() {
   return (neuron0x1811680()*-0.493487);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181d030() {
   return (neuron0x180a6c0()*-0.167102);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a850() {
   return (neuron0x180aa30()*0.376124);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a890() {
   return (neuron0x180aeb0()*0.397993);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ac50() {
   return (neuron0x180b330()*-0.0463304);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ac90() {
   return (neuron0x180b840()*0.273205);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b0d0() {
   return (neuron0x180bcc0()*1.43217);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b110() {
   return (neuron0x180c140()*-0.383548);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b550() {
   return (neuron0x180c750()*0.189361);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180b590() {
   return (neuron0x180cb40()*0.155998);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ba60() {
   return (neuron0x180cfc0()*0.685381);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180baa0() {
   return (neuron0x180d440()*-3.0346);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bee0() {
   return (neuron0x180d8c0()*1.28272);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180bf20() {
   return (neuron0x180ddd0()*-0.331831);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c360() {
   return (neuron0x180c540()*0.506281);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c3a0() {
   return (neuron0x180e6e0()*0.786737);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c8e0() {
   return (neuron0x180eb60()*0.128766);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180c920() {
   return (neuron0x180f430()*0.444705);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cd60() {
   return (neuron0x180f700()*-0.872943);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180cda0() {
   return (neuron0x180fb80()*0.311015);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d1e0() {
   return (neuron0x1810000()*0.48506);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d220() {
   return (neuron0x1810480()*-0.0821805);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d660() {
   return (neuron0x1810900()*0.155866);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180d6a0() {
   return (neuron0x1810d80()*-0.266128);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dae0() {
   return (neuron0x1811200()*-0.399425);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180db20() {
   return (neuron0x1811680()*-0.428385);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18174a0() {
   return (neuron0x180a6c0()*-0.747615);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18174e0() {
   return (neuron0x180aa30()*-0.974429);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180ed80() {
   return (neuron0x180aeb0()*0.282371);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180edc0() {
   return (neuron0x180b330()*-1.39019);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181ce80() {
   return (neuron0x180b840()*0.600847);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x181cec0() {
   return (neuron0x180bcc0()*-1.58606);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a130() {
   return (neuron0x180c140()*0.394871);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a170() {
   return (neuron0x180c750()*-0.0515933);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f920() {
   return (neuron0x180cb40()*0.724659);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180f960() {
   return (neuron0x180cfc0()*-0.969248);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fda0() {
   return (neuron0x180d440()*0.510706);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180fde0() {
   return (neuron0x180d8c0()*-1.40422);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810220() {
   return (neuron0x180ddd0()*0.866724);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810260() {
   return (neuron0x180c540()*-0.75532);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18106a0() {
   return (neuron0x180e6e0()*-0.457028);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18106e0() {
   return (neuron0x180eb60()*0.911629);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810b20() {
   return (neuron0x180f430()*-0.889253);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810b60() {
   return (neuron0x180f700()*0.479313);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810fa0() {
   return (neuron0x180fb80()*0.466036);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1810fe0() {
   return (neuron0x1810000()*-2.22474);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811420() {
   return (neuron0x1810480()*0.371953);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1811460() {
   return (neuron0x1810900()*-0.384133);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18118a0() {
   return (neuron0x1810d80()*1.92139);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18118e0() {
   return (neuron0x1811200()*0.262626);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180dff0() {
   return (neuron0x1811680()*0.591785);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180e030() {
   return (neuron0x180a6c0()*0.595397);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18202a0() {
   return (neuron0x180aa30()*-1.48521);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18202e0() {
   return (neuron0x180aeb0()*-0.78949);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820320() {
   return (neuron0x180b330()*-0.98137);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820360() {
   return (neuron0x180b840()*-0.383276);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18203a0() {
   return (neuron0x180bcc0()*-0.458474);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18203e0() {
   return (neuron0x180c140()*1.67453);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820420() {
   return (neuron0x180c750()*-0.754966);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820460() {
   return (neuron0x180cb40()*0.0244969);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18204a0() {
   return (neuron0x180cfc0()*0.0198945);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18204e0() {
   return (neuron0x180d440()*1.86367);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820520() {
   return (neuron0x180d8c0()*-1.27341);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820560() {
   return (neuron0x180ddd0()*-0.14319);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18205a0() {
   return (neuron0x180c540()*-0.770398);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18205e0() {
   return (neuron0x180e6e0()*0.00859524);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820620() {
   return (neuron0x180eb60()*-0.102264);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18200f0() {
   return (neuron0x180f430()*-0.0247303);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820130() {
   return (neuron0x180f700()*-0.0301205);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820770() {
   return (neuron0x180fb80()*-0.142657);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18207b0() {
   return (neuron0x1810000()*-0.216052);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18207f0() {
   return (neuron0x1810480()*-0.525153);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820830() {
   return (neuron0x1810900()*-0.713708);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820870() {
   return (neuron0x1810d80()*0.339173);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18208b0() {
   return (neuron0x1811200()*-0.0440233);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18208f0() {
   return (neuron0x1811680()*-0.119325);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820c70() {
   return (neuron0x180a6c0()*5.03902);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820cb0() {
   return (neuron0x180aa30()*3.11005);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820cf0() {
   return (neuron0x180aeb0()*0.249463);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820d30() {
   return (neuron0x180b330()*1.64426);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820d70() {
   return (neuron0x180b840()*1.29656);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820db0() {
   return (neuron0x180bcc0()*-1.47608);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820df0() {
   return (neuron0x180c140()*-6.13366);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820e30() {
   return (neuron0x180c750()*10.5792);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820e70() {
   return (neuron0x180cb40()*0.619437);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820eb0() {
   return (neuron0x180cfc0()*0.32674);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820ef0() {
   return (neuron0x180d440()*-14.9558);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820f30() {
   return (neuron0x180d8c0()*0.905965);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820f70() {
   return (neuron0x180ddd0()*-12.0205);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820fb0() {
   return (neuron0x180c540()*1.0798);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820ff0() {
   return (neuron0x180e6e0()*0.815288);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821030() {
   return (neuron0x180eb60()*0.569117);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820ac0() {
   return (neuron0x180f430()*1.40616);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1820b00() {
   return (neuron0x180f700()*-0.123433);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821180() {
   return (neuron0x180fb80()*-0.345165);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18211c0() {
   return (neuron0x1810000()*-19.5947);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821200() {
   return (neuron0x1810480()*4.44995);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821240() {
   return (neuron0x1810900()*0.949778);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821280() {
   return (neuron0x1810d80()*-7.23364);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18212c0() {
   return (neuron0x1811200()*0.148456);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821300() {
   return (neuron0x1811680()*0.659399);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821680() {
   return (neuron0x180a6c0()*-5.3479);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18216c0() {
   return (neuron0x180aa30()*3.04389);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821700() {
   return (neuron0x180aeb0()*0.092327);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821740() {
   return (neuron0x180b330()*-1.144);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821780() {
   return (neuron0x180b840()*0.186646);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18217c0() {
   return (neuron0x180bcc0()*-1.39734);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821800() {
   return (neuron0x180c140()*7.7706);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821840() {
   return (neuron0x180c750()*0.213881);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821880() {
   return (neuron0x180cb40()*0.750949);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18218c0() {
   return (neuron0x180cfc0()*0.106011);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821900() {
   return (neuron0x180d440()*12.2926);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821940() {
   return (neuron0x180d8c0()*-0.321514);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821980() {
   return (neuron0x180ddd0()*3.83661);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18219c0() {
   return (neuron0x180c540()*-0.685267);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821a00() {
   return (neuron0x180e6e0()*-0.759212);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821a40() {
   return (neuron0x180eb60()*0.429331);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18214d0() {
   return (neuron0x180f430()*0.684102);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821510() {
   return (neuron0x180f700()*1.5672);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821b90() {
   return (neuron0x180fb80()*-0.0956863);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821bd0() {
   return (neuron0x1810000()*1.90333);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821c10() {
   return (neuron0x1810480()*-2.13177);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821c50() {
   return (neuron0x1810900()*-0.488212);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821c90() {
   return (neuron0x1810d80()*-4.62526);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821cd0() {
   return (neuron0x1811200()*0.540864);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821d10() {
   return (neuron0x1811680()*0.354117);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822090() {
   return (neuron0x180a6c0()*1.26211);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18220d0() {
   return (neuron0x180aa30()*-1.57712);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822110() {
   return (neuron0x180aeb0()*0.447587);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822150() {
   return (neuron0x180b330()*1.33202);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822190() {
   return (neuron0x180b840()*-1.19759);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18221d0() {
   return (neuron0x180bcc0()*0.601897);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822210() {
   return (neuron0x180c140()*-0.927173);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822250() {
   return (neuron0x180c750()*-0.867636);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822290() {
   return (neuron0x180cb40()*-0.170192);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18222d0() {
   return (neuron0x180cfc0()*0.82177);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822310() {
   return (neuron0x180d440()*-3.96302);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822350() {
   return (neuron0x180d8c0()*0.321885);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822390() {
   return (neuron0x180ddd0()*-0.536147);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18223d0() {
   return (neuron0x180c540()*0.476207);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822410() {
   return (neuron0x180e6e0()*0.138481);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822450() {
   return (neuron0x180eb60()*-0.6947);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821ee0() {
   return (neuron0x180f430()*0.285196);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1821f20() {
   return (neuron0x180f700()*-0.187267);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18225a0() {
   return (neuron0x180fb80()*-0.295052);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18225e0() {
   return (neuron0x1810000()*-1.83225);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822620() {
   return (neuron0x1810480()*-3.42581);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822660() {
   return (neuron0x1810900()*0.596038);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18226a0() {
   return (neuron0x1810d80()*0.243605);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18226e0() {
   return (neuron0x1811200()*0.845129);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822720() {
   return (neuron0x1811680()*-0.680627);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822aa0() {
   return (neuron0x180a6c0()*-9.19976);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822ae0() {
   return (neuron0x180aa30()*0.875372);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822b20() {
   return (neuron0x180aeb0()*0.924229);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822b60() {
   return (neuron0x180b330()*1.41467);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822ba0() {
   return (neuron0x180b840()*-0.353752);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822be0() {
   return (neuron0x180bcc0()*-0.196256);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822c20() {
   return (neuron0x180c140()*-3.24753);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822c60() {
   return (neuron0x180c750()*-0.834861);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822ca0() {
   return (neuron0x180cb40()*-0.153201);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822ce0() {
   return (neuron0x180cfc0()*0.66085);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822d20() {
   return (neuron0x180d440()*-4.21932);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822d60() {
   return (neuron0x180d8c0()*0.537396);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822da0() {
   return (neuron0x180ddd0()*6.29239);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822de0() {
   return (neuron0x180c540()*0.761708);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822e20() {
   return (neuron0x180e6e0()*0.721633);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822e60() {
   return (neuron0x180eb60()*-0.0984768);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18228f0() {
   return (neuron0x180f430()*0.75167);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822930() {
   return (neuron0x180f700()*-0.803036);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822fb0() {
   return (neuron0x180fb80()*0.150163);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1822ff0() {
   return (neuron0x1810000()*5.18005);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823030() {
   return (neuron0x1810480()*0.229984);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823070() {
   return (neuron0x1810900()*0.657968);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18230b0() {
   return (neuron0x1810d80()*-5.50049);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18230f0() {
   return (neuron0x1811200()*-0.36477);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823130() {
   return (neuron0x1811680()*0.0736442);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18234b0() {
   return (neuron0x180a6c0()*0.858724);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18234f0() {
   return (neuron0x180aa30()*0.243651);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823530() {
   return (neuron0x180aeb0()*0.331024);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823570() {
   return (neuron0x180b330()*0.0585735);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18235b0() {
   return (neuron0x180b840()*0.325173);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18235f0() {
   return (neuron0x180bcc0()*0.212568);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823630() {
   return (neuron0x180c140()*0.544223);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823670() {
   return (neuron0x180c750()*-0.402338);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18236b0() {
   return (neuron0x180cb40()*0.939691);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18236f0() {
   return (neuron0x180cfc0()*-0.317963);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823730() {
   return (neuron0x180d440()*1.46352);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823770() {
   return (neuron0x180d8c0()*-0.145139);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18237b0() {
   return (neuron0x180ddd0()*1.07155);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18237f0() {
   return (neuron0x180c540()*0.315306);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823830() {
   return (neuron0x180e6e0()*-0.185632);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823870() {
   return (neuron0x180eb60()*0.428081);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823300() {
   return (neuron0x180f430()*-0.103518);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823340() {
   return (neuron0x180f700()*0.634245);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18239c0() {
   return (neuron0x180fb80()*0.366239);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823a00() {
   return (neuron0x1810000()*1.26262);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823a40() {
   return (neuron0x1810480()*0.0123896);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823a80() {
   return (neuron0x1810900()*-0.307169);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823ac0() {
   return (neuron0x1810d80()*1.28483);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823b00() {
   return (neuron0x1811200()*0.56217);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823b40() {
   return (neuron0x1811680()*0.611448);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823ec0() {
   return (neuron0x180a6c0()*0.483773);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823f00() {
   return (neuron0x180aa30()*1.41131);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823f40() {
   return (neuron0x180aeb0()*0.126448);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823f80() {
   return (neuron0x180b330()*0.315416);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823fc0() {
   return (neuron0x180b840()*-0.716983);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824000() {
   return (neuron0x180bcc0()*0.0843727);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824040() {
   return (neuron0x180c140()*0.44498);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824080() {
   return (neuron0x180c750()*0.181855);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18240c0() {
   return (neuron0x180cb40()*0.0715488);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824100() {
   return (neuron0x180cfc0()*-0.0816375);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824140() {
   return (neuron0x180d440()*1.14117);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824180() {
   return (neuron0x180d8c0()*0.312149);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18241c0() {
   return (neuron0x180ddd0()*-0.786248);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824200() {
   return (neuron0x180c540()*0.297698);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824240() {
   return (neuron0x180e6e0()*0.190457);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824280() {
   return (neuron0x180eb60()*-0.557067);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823d10() {
   return (neuron0x180f430()*0.148378);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1823d50() {
   return (neuron0x180f700()*0.126205);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18243d0() {
   return (neuron0x180fb80()*0.046944);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824410() {
   return (neuron0x1810000()*-0.285712);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824450() {
   return (neuron0x1810480()*-0.825926);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824490() {
   return (neuron0x1810900()*-0.270246);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18244d0() {
   return (neuron0x1810d80()*-0.399274);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824510() {
   return (neuron0x1811200()*-0.821042);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824550() {
   return (neuron0x1811680()*-0.685912);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18248d0() {
   return (neuron0x180a6c0()*-2.99533);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824910() {
   return (neuron0x180aa30()*0.260776);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824950() {
   return (neuron0x180aeb0()*0.293749);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824990() {
   return (neuron0x180b330()*-0.912294);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18249d0() {
   return (neuron0x180b840()*1.10244);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824a10() {
   return (neuron0x180bcc0()*0.273485);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824a50() {
   return (neuron0x180c140()*2.08431);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824a90() {
   return (neuron0x180c750()*-2.50136);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824ad0() {
   return (neuron0x180cb40()*0.840623);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824b10() {
   return (neuron0x180cfc0()*-0.166677);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824b50() {
   return (neuron0x180d440()*3.0075);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824b90() {
   return (neuron0x180d8c0()*-1.0999);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824bd0() {
   return (neuron0x180ddd0()*3.45193);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824c10() {
   return (neuron0x180c540()*-1.10592);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824c50() {
   return (neuron0x180e6e0()*-1.276);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824c90() {
   return (neuron0x180eb60()*1.28971);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824720() {
   return (neuron0x180f430()*-0.244455);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824760() {
   return (neuron0x180f700()*1.43544);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824de0() {
   return (neuron0x180fb80()*0.653816);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824e20() {
   return (neuron0x1810000()*1.59352);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824e60() {
   return (neuron0x1810480()*-5.45376);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824ea0() {
   return (neuron0x1810900()*-0.858172);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824ee0() {
   return (neuron0x1810d80()*9.45097);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824f20() {
   return (neuron0x1811200()*0.975626);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1824f60() {
   return (neuron0x1811680()*0.668211);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18251c0() {
   return (neuron0x1813590()*8.70765);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825200() {
   return (neuron0x180e360()*5.14778);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825240() {
   return (neuron0x1814100()*3.954);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825280() {
   return (neuron0x1814c20()*8.67383);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18252c0() {
   return (neuron0x1815630()*-4.27612);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825300() {
   return (neuron0x1816040()*-3.51219);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825340() {
   return (neuron0x1813c30()*5.80381);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825380() {
   return (neuron0x1817c70()*5.30449);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18253c0() {
   return (neuron0x1818680()*-1.41314);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825400() {
   return (neuron0x1819090()*-3.52109);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825440() {
   return (neuron0x1819aa0()*2.27661);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825480() {
   return (neuron0x181a4b0()*-2.11632);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18254c0() {
   return (neuron0x181aec0()*-5.61696);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825500() {
   return (neuron0x181b8d0()*-2.06608);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825540() {
   return (neuron0x181c2e0()*1.52532);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825580() {
   return (neuron0x181ccf0()*-1.98134);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a590() {
   return (neuron0x1817310()*-0.455238);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x180a5d0() {
   return (neuron0x181ff60()*-1.49159);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18256d0() {
   return (neuron0x1820930()*5.85257);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825710() {
   return (neuron0x1821340()*-9.21768);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825750() {
   return (neuron0x1821d50()*-4.9122);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825790() {
   return (neuron0x1822760()*5.62274);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x18257d0() {
   return (neuron0x1823170()*-3.63951);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825810() {
   return (neuron0x1823b80()*1.64361);
}

double nnFunc_3A_25_25hi_5000ep_weight::synapse0x1825850() {
   return (neuron0x1824590()*-5.77041);
}

