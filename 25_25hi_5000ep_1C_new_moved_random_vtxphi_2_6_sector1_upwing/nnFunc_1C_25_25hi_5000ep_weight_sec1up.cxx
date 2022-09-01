#include "25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_upwing/nnFunc_1C_25_25hi_5000ep_weight_sec1up.h"
#include <cmath>

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1f14580();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1f14580();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1ef8b30() {
   return input0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1ef8e70() {
   return input1;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1ef91b0() {
   return input2;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1ef94f0() {
   return input3;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1ef9830() {
   return input4;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1ef9ca0() {
   double input = -2.78787;
   input += synapse0x1e05f20();
   input += synapse0x1ee7fa0();
   input += synapse0x1ef9f50();
   input += synapse0x1ef9f90();
   input += synapse0x1ef9fd0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1ef9ca0() {
   double input = input0x1ef9ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efa010() {
   double input = 0.287487;
   input += synapse0x1efa350();
   input += synapse0x1efa390();
   input += synapse0x1efa3d0();
   input += synapse0x1efa410();
   input += synapse0x1efa450();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efa010() {
   double input = input0x1efa010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efa490() {
   double input = 0.34257;
   input += synapse0x1efa7d0();
   input += synapse0x1efa810();
   input += synapse0x1efa850();
   input += synapse0x1efa890();
   input += synapse0x1efa8d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efa490() {
   double input = input0x1efa490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efa910() {
   double input = -4.1451;
   input += synapse0x1efac50();
   input += synapse0x1efac90();
   input += synapse0x1df8110();
   input += synapse0x1df8150();
   input += synapse0x1efade0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efa910() {
   double input = input0x1efa910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efae20() {
   double input = -1.20212;
   input += synapse0x1efb160();
   input += synapse0x1efb1a0();
   input += synapse0x1efb1e0();
   input += synapse0x1efb220();
   input += synapse0x1efb260();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efae20() {
   double input = input0x1efae20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efb2a0() {
   double input = 28.9618;
   input += synapse0x1efb5e0();
   input += synapse0x1efb620();
   input += synapse0x1efb660();
   input += synapse0x1efb6a0();
   input += synapse0x1efb6e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efb2a0() {
   double input = input0x1efb2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efb720() {
   double input = 1.48303;
   input += synapse0x1efba60();
   input += synapse0x1efbaa0();
   input += synapse0x1efbae0();
   input += synapse0x1efacd0();
   input += synapse0x1efad10();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efb720() {
   double input = input0x1efb720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efbd30() {
   double input = -0.64496;
   input += synapse0x1efbfe0();
   input += synapse0x1efc020();
   input += synapse0x1efc060();
   input += synapse0x1efc0a0();
   input += synapse0x1efc0e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efbd30() {
   double input = input0x1efbd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efc120() {
   double input = -0.436467;
   input += synapse0x1efc460();
   input += synapse0x1efc4a0();
   input += synapse0x1efc4e0();
   input += synapse0x1efc520();
   input += synapse0x1efc560();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efc120() {
   double input = input0x1efc120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efc5a0() {
   double input = 1.87132;
   input += synapse0x1efc8e0();
   input += synapse0x1efc920();
   input += synapse0x1efc960();
   input += synapse0x1efc9a0();
   input += synapse0x1efc9e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efc5a0() {
   double input = input0x1efc5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efca20() {
   double input = -1.03416;
   input += synapse0x1efcd60();
   input += synapse0x1efcda0();
   input += synapse0x1efcde0();
   input += synapse0x1efce20();
   input += synapse0x1efce60();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efca20() {
   double input = input0x1efca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efcea0() {
   double input = 2.37087;
   input += synapse0x1df7f60();
   input += synapse0x1df7fa0();
   input += synapse0x1efd2f0();
   input += synapse0x1efd330();
   input += synapse0x1efd370();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efcea0() {
   double input = input0x1efcea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efd3b0() {
   double input = 2.77334;
   input += synapse0x1efd6f0();
   input += synapse0x1efd730();
   input += synapse0x1efd770();
   input += synapse0x1efd7b0();
   input += synapse0x1efd7f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efd3b0() {
   double input = input0x1efd3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efbb20() {
   double input = 0.863304;
   input += synapse0x1df8730();
   input += synapse0x1efbcb0();
   input += synapse0x1efbcf0();
   input += synapse0x1efdc40();
   input += synapse0x1efdc80();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efbb20() {
   double input = input0x1efbb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efdcc0() {
   double input = -1.23617;
   input += synapse0x1efe000();
   input += synapse0x1efe040();
   input += synapse0x1efe080();
   input += synapse0x1efe0c0();
   input += synapse0x1efe100();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efdcc0() {
   double input = input0x1efdcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efe140() {
   double input = 0.127603;
   input += synapse0x1efe480();
   input += synapse0x1ef8d50();
   input += synapse0x1ef8d90();
   input += synapse0x1ef9090();
   input += synapse0x1ef90d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efe140() {
   double input = input0x1efe140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efea10() {
   double input = 0.921252;
   input += synapse0x1efeba0();
   input += synapse0x1efebe0();
   input += synapse0x1efec20();
   input += synapse0x1efec60();
   input += synapse0x1efeca0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efea10() {
   double input = input0x1efea10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efece0() {
   double input = -3.54596;
   input += synapse0x1eff020();
   input += synapse0x1eff060();
   input += synapse0x1eff0a0();
   input += synapse0x1eff0e0();
   input += synapse0x1eff120();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efece0() {
   double input = input0x1efece0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1eff160() {
   double input = -3.19353;
   input += synapse0x1eff4a0();
   input += synapse0x1eff4e0();
   input += synapse0x1eff520();
   input += synapse0x1eff560();
   input += synapse0x1eff5a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1eff160() {
   double input = input0x1eff160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1eff5e0() {
   double input = 16.4848;
   input += synapse0x1eff920();
   input += synapse0x1eff960();
   input += synapse0x1eff9a0();
   input += synapse0x1eff9e0();
   input += synapse0x1effa20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1eff5e0() {
   double input = input0x1eff5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1effa60() {
   double input = -24.5184;
   input += synapse0x1effda0();
   input += synapse0x1effde0();
   input += synapse0x1effe20();
   input += synapse0x1effe60();
   input += synapse0x1effea0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1effa60() {
   double input = input0x1effa60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1effee0() {
   double input = 1.0927;
   input += synapse0x1f00220();
   input += synapse0x1f00260();
   input += synapse0x1f002a0();
   input += synapse0x1f002e0();
   input += synapse0x1f00320();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1effee0() {
   double input = input0x1effee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f00360() {
   double input = -0.208622;
   input += synapse0x1f006a0();
   input += synapse0x1f006e0();
   input += synapse0x1f00720();
   input += synapse0x1f00760();
   input += synapse0x1f007a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f00360() {
   double input = input0x1f00360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f007e0() {
   double input = -0.00892171;
   input += synapse0x1f00b20();
   input += synapse0x1f00b60();
   input += synapse0x1f00ba0();
   input += synapse0x1f00be0();
   input += synapse0x1f00c20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f007e0() {
   double input = input0x1f007e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f00c60() {
   double input = -0.277884;
   input += synapse0x1f00fa0();
   input += synapse0x1f00fe0();
   input += synapse0x1f01020();
   input += synapse0x1f01060();
   input += synapse0x1f010a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f00c60() {
   double input = input0x1f00c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f02b70() {
   double input = 0.445508;
   input += synapse0x1efabc0();
   input += synapse0x1efac00();
   input += synapse0x1efb0d0();
   input += synapse0x1efb110();
   input += synapse0x1efb550();
   input += synapse0x1efb590();
   input += synapse0x1efb9d0();
   input += synapse0x1efba10();
   input += synapse0x1efbf50();
   input += synapse0x1efbf90();
   input += synapse0x1efc3d0();
   input += synapse0x1efc410();
   input += synapse0x1efc850();
   input += synapse0x1efc890();
   input += synapse0x1efccd0();
   input += synapse0x1efcd10();
   input += synapse0x1efd150();
   input += synapse0x1efd190();
   input += synapse0x1efd660();
   input += synapse0x1efd6a0();
   input += synapse0x1efdf70();
   input += synapse0x1efdfb0();
   input += synapse0x1efe3f0();
   input += synapse0x1efe430();
   input += synapse0x1ef9a50();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f02b70() {
   double input = input0x1f02b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1efd940() {
   double input = 0.322185;
   input += synapse0x1efdad0();
   input += synapse0x1efdb10();
   input += synapse0x1efdb50();
   input += synapse0x1efdb90();
   input += synapse0x1efdbd0();
   input += synapse0x1ef9a90();
   input += synapse0x1effd10();
   input += synapse0x1effd50();
   input += synapse0x1f00190();
   input += synapse0x1f001d0();
   input += synapse0x1f00610();
   input += synapse0x1f00650();
   input += synapse0x1f00a90();
   input += synapse0x1f00ad0();
   input += synapse0x1f00f10();
   input += synapse0x1f00f50();
   input += synapse0x1ef9ec0();
   input += synapse0x1ef9f00();
   input += synapse0x1efef90();
   input += synapse0x1efefd0();
   input += synapse0x1e05ff0();
   input += synapse0x1e06030();
   input += synapse0x1f03620();
   input += synapse0x1f03660();
   input += synapse0x1f036a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1efd940() {
   double input = input0x1efd940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f036e0() {
   double input = 0.687104;
   input += synapse0x1efd1e0();
   input += synapse0x1efd220();
   input += synapse0x1efd260();
   input += synapse0x1efd2a0();
   input += synapse0x1f03c30();
   input += synapse0x1f03c70();
   input += synapse0x1f03cb0();
   input += synapse0x1f03cf0();
   input += synapse0x1f03d30();
   input += synapse0x1f03d70();
   input += synapse0x1f03db0();
   input += synapse0x1f03df0();
   input += synapse0x1f03e30();
   input += synapse0x1f03e70();
   input += synapse0x1f03eb0();
   input += synapse0x1f03ef0();
   input += synapse0x1f03870();
   input += synapse0x1f038b0();
   input += synapse0x1f04040();
   input += synapse0x1f04080();
   input += synapse0x1f040c0();
   input += synapse0x1f04100();
   input += synapse0x1f04140();
   input += synapse0x1f04180();
   input += synapse0x1f041c0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f036e0() {
   double input = input0x1f036e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f04200() {
   double input = -0.286744;
   input += synapse0x1f04540();
   input += synapse0x1f04580();
   input += synapse0x1f045c0();
   input += synapse0x1f04600();
   input += synapse0x1f04640();
   input += synapse0x1f04680();
   input += synapse0x1f046c0();
   input += synapse0x1f04700();
   input += synapse0x1f04740();
   input += synapse0x1f04780();
   input += synapse0x1f047c0();
   input += synapse0x1f04800();
   input += synapse0x1f04840();
   input += synapse0x1f04880();
   input += synapse0x1f048c0();
   input += synapse0x1f04900();
   input += synapse0x1f04390();
   input += synapse0x1f043d0();
   input += synapse0x1f04a50();
   input += synapse0x1f04a90();
   input += synapse0x1f04ad0();
   input += synapse0x1f04b10();
   input += synapse0x1f04b50();
   input += synapse0x1f04b90();
   input += synapse0x1f04bd0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f04200() {
   double input = input0x1f04200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f04c10() {
   double input = 0.130572;
   input += synapse0x1f04f50();
   input += synapse0x1f04f90();
   input += synapse0x1f04fd0();
   input += synapse0x1f05010();
   input += synapse0x1f05050();
   input += synapse0x1f05090();
   input += synapse0x1f050d0();
   input += synapse0x1f05110();
   input += synapse0x1f05150();
   input += synapse0x1f05190();
   input += synapse0x1f051d0();
   input += synapse0x1f05210();
   input += synapse0x1f05250();
   input += synapse0x1f05290();
   input += synapse0x1f052d0();
   input += synapse0x1f05310();
   input += synapse0x1f04da0();
   input += synapse0x1f04de0();
   input += synapse0x1f05460();
   input += synapse0x1f054a0();
   input += synapse0x1f054e0();
   input += synapse0x1f05520();
   input += synapse0x1f05560();
   input += synapse0x1f055a0();
   input += synapse0x1f055e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f04c10() {
   double input = input0x1f04c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f05620() {
   double input = 0.204191;
   input += synapse0x1f05960();
   input += synapse0x1f059a0();
   input += synapse0x1f059e0();
   input += synapse0x1f05a20();
   input += synapse0x1f05a60();
   input += synapse0x1f05aa0();
   input += synapse0x1f05ae0();
   input += synapse0x1f02d00();
   input += synapse0x1f02d40();
   input += synapse0x1f02d80();
   input += synapse0x1f02dc0();
   input += synapse0x1f02e00();
   input += synapse0x1f02e40();
   input += synapse0x1f02e80();
   input += synapse0x1f02ec0();
   input += synapse0x1f02f00();
   input += synapse0x1f057b0();
   input += synapse0x1f057f0();
   input += synapse0x1f03050();
   input += synapse0x1f03090();
   input += synapse0x1f030d0();
   input += synapse0x1f03110();
   input += synapse0x1f03150();
   input += synapse0x1f03190();
   input += synapse0x1f031d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f05620() {
   double input = input0x1f05620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f03210() {
   double input = 0.251546;
   input += synapse0x1f034c0();
   input += synapse0x1f06bc0();
   input += synapse0x1f06c00();
   input += synapse0x1f06c40();
   input += synapse0x1f06c80();
   input += synapse0x1f06cc0();
   input += synapse0x1f06d00();
   input += synapse0x1f06d40();
   input += synapse0x1f06d80();
   input += synapse0x1f06dc0();
   input += synapse0x1f06e00();
   input += synapse0x1f06e40();
   input += synapse0x1f06e80();
   input += synapse0x1f06ec0();
   input += synapse0x1f06f00();
   input += synapse0x1f06f40();
   input += synapse0x1f033a0();
   input += synapse0x1f033e0();
   input += synapse0x1f07090();
   input += synapse0x1f070d0();
   input += synapse0x1f07110();
   input += synapse0x1f07150();
   input += synapse0x1f07190();
   input += synapse0x1f071d0();
   input += synapse0x1f07210();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f03210() {
   double input = input0x1f03210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f07250() {
   double input = -0.0189521;
   input += synapse0x1f07590();
   input += synapse0x1f075d0();
   input += synapse0x1f07610();
   input += synapse0x1f07650();
   input += synapse0x1f07690();
   input += synapse0x1f076d0();
   input += synapse0x1f07710();
   input += synapse0x1f07750();
   input += synapse0x1f07790();
   input += synapse0x1f077d0();
   input += synapse0x1f07810();
   input += synapse0x1f07850();
   input += synapse0x1f07890();
   input += synapse0x1f078d0();
   input += synapse0x1f07910();
   input += synapse0x1f07950();
   input += synapse0x1f073e0();
   input += synapse0x1f07420();
   input += synapse0x1f07aa0();
   input += synapse0x1f07ae0();
   input += synapse0x1f07b20();
   input += synapse0x1f07b60();
   input += synapse0x1f07ba0();
   input += synapse0x1f07be0();
   input += synapse0x1f07c20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f07250() {
   double input = input0x1f07250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f07c60() {
   double input = 2.25874;
   input += synapse0x1f07fa0();
   input += synapse0x1f07fe0();
   input += synapse0x1f08020();
   input += synapse0x1f08060();
   input += synapse0x1f080a0();
   input += synapse0x1f080e0();
   input += synapse0x1f08120();
   input += synapse0x1f08160();
   input += synapse0x1f081a0();
   input += synapse0x1f081e0();
   input += synapse0x1f08220();
   input += synapse0x1f08260();
   input += synapse0x1f082a0();
   input += synapse0x1f082e0();
   input += synapse0x1f08320();
   input += synapse0x1f08360();
   input += synapse0x1f07df0();
   input += synapse0x1f07e30();
   input += synapse0x1f084b0();
   input += synapse0x1f084f0();
   input += synapse0x1f08530();
   input += synapse0x1f08570();
   input += synapse0x1f085b0();
   input += synapse0x1f085f0();
   input += synapse0x1f08630();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f07c60() {
   double input = input0x1f07c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f08670() {
   double input = 0.378624;
   input += synapse0x1f089b0();
   input += synapse0x1f089f0();
   input += synapse0x1f08a30();
   input += synapse0x1f08a70();
   input += synapse0x1f08ab0();
   input += synapse0x1f08af0();
   input += synapse0x1f08b30();
   input += synapse0x1f08b70();
   input += synapse0x1f08bb0();
   input += synapse0x1f08bf0();
   input += synapse0x1f08c30();
   input += synapse0x1f08c70();
   input += synapse0x1f08cb0();
   input += synapse0x1f08cf0();
   input += synapse0x1f08d30();
   input += synapse0x1f08d70();
   input += synapse0x1f08800();
   input += synapse0x1f08840();
   input += synapse0x1f08ec0();
   input += synapse0x1f08f00();
   input += synapse0x1f08f40();
   input += synapse0x1f08f80();
   input += synapse0x1f08fc0();
   input += synapse0x1f09000();
   input += synapse0x1f09040();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f08670() {
   double input = input0x1f08670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f09080() {
   double input = -0.198729;
   input += synapse0x1f093c0();
   input += synapse0x1f09400();
   input += synapse0x1f09440();
   input += synapse0x1f09480();
   input += synapse0x1f094c0();
   input += synapse0x1f09500();
   input += synapse0x1f09540();
   input += synapse0x1f09580();
   input += synapse0x1f095c0();
   input += synapse0x1f09600();
   input += synapse0x1f09640();
   input += synapse0x1f09680();
   input += synapse0x1f096c0();
   input += synapse0x1f09700();
   input += synapse0x1f09740();
   input += synapse0x1f09780();
   input += synapse0x1f09210();
   input += synapse0x1f09250();
   input += synapse0x1f098d0();
   input += synapse0x1f09910();
   input += synapse0x1f09950();
   input += synapse0x1f09990();
   input += synapse0x1f099d0();
   input += synapse0x1f09a10();
   input += synapse0x1f09a50();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f09080() {
   double input = input0x1f09080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f09a90() {
   double input = -0.990959;
   input += synapse0x1f09dd0();
   input += synapse0x1f09e10();
   input += synapse0x1f09e50();
   input += synapse0x1f09e90();
   input += synapse0x1f09ed0();
   input += synapse0x1f09f10();
   input += synapse0x1f09f50();
   input += synapse0x1f09f90();
   input += synapse0x1f09fd0();
   input += synapse0x1f0a010();
   input += synapse0x1f0a050();
   input += synapse0x1f0a090();
   input += synapse0x1f0a0d0();
   input += synapse0x1f0a110();
   input += synapse0x1f0a150();
   input += synapse0x1f0a190();
   input += synapse0x1f09c20();
   input += synapse0x1f09c60();
   input += synapse0x1f0a2e0();
   input += synapse0x1f0a320();
   input += synapse0x1f0a360();
   input += synapse0x1f0a3a0();
   input += synapse0x1f0a3e0();
   input += synapse0x1f0a420();
   input += synapse0x1f0a460();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f09a90() {
   double input = input0x1f09a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f0a4a0() {
   double input = 0.697566;
   input += synapse0x1f0a7e0();
   input += synapse0x1f0a820();
   input += synapse0x1f0a860();
   input += synapse0x1f0a8a0();
   input += synapse0x1f0a8e0();
   input += synapse0x1f0a920();
   input += synapse0x1f0a960();
   input += synapse0x1f0a9a0();
   input += synapse0x1f0a9e0();
   input += synapse0x1f0aa20();
   input += synapse0x1f0aa60();
   input += synapse0x1f0aaa0();
   input += synapse0x1f0aae0();
   input += synapse0x1f0ab20();
   input += synapse0x1f0ab60();
   input += synapse0x1f0aba0();
   input += synapse0x1f0a630();
   input += synapse0x1f0a670();
   input += synapse0x1f0acf0();
   input += synapse0x1f0ad30();
   input += synapse0x1f0ad70();
   input += synapse0x1f0adb0();
   input += synapse0x1f0adf0();
   input += synapse0x1f0ae30();
   input += synapse0x1f0ae70();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f0a4a0() {
   double input = input0x1f0a4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f0aeb0() {
   double input = 0.235252;
   input += synapse0x1f0b1f0();
   input += synapse0x1f0b230();
   input += synapse0x1f0b270();
   input += synapse0x1f0b2b0();
   input += synapse0x1f0b2f0();
   input += synapse0x1f0b330();
   input += synapse0x1f0b370();
   input += synapse0x1f0b3b0();
   input += synapse0x1f0b3f0();
   input += synapse0x1f0b430();
   input += synapse0x1f0b470();
   input += synapse0x1f0b4b0();
   input += synapse0x1f0b4f0();
   input += synapse0x1f0b530();
   input += synapse0x1f0b570();
   input += synapse0x1f0b5b0();
   input += synapse0x1f0b040();
   input += synapse0x1f0b080();
   input += synapse0x1f0b700();
   input += synapse0x1f0b740();
   input += synapse0x1f0b780();
   input += synapse0x1f0b7c0();
   input += synapse0x1f0b800();
   input += synapse0x1f0b840();
   input += synapse0x1f0b880();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f0aeb0() {
   double input = input0x1f0aeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f0b8c0() {
   double input = -0.449405;
   input += synapse0x1f0bc00();
   input += synapse0x1f0bc40();
   input += synapse0x1f0bc80();
   input += synapse0x1f0bcc0();
   input += synapse0x1f0bd00();
   input += synapse0x1f0bd40();
   input += synapse0x1f0bd80();
   input += synapse0x1f0bdc0();
   input += synapse0x1f0be00();
   input += synapse0x1f0be40();
   input += synapse0x1f0be80();
   input += synapse0x1f0bec0();
   input += synapse0x1f0bf00();
   input += synapse0x1f0bf40();
   input += synapse0x1f0bf80();
   input += synapse0x1f0bfc0();
   input += synapse0x1f0ba50();
   input += synapse0x1f0ba90();
   input += synapse0x1f0c110();
   input += synapse0x1f0c150();
   input += synapse0x1f0c190();
   input += synapse0x1f0c1d0();
   input += synapse0x1f0c210();
   input += synapse0x1f0c250();
   input += synapse0x1f0c290();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f0b8c0() {
   double input = input0x1f0b8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f0c2d0() {
   double input = -0.510559;
   input += synapse0x1f0c610();
   input += synapse0x1ef9e30();
   input += synapse0x1ef9e70();
   input += synapse0x1efa230();
   input += synapse0x1efa270();
   input += synapse0x1efa6b0();
   input += synapse0x1efa6f0();
   input += synapse0x1efab30();
   input += synapse0x1efab70();
   input += synapse0x1efb040();
   input += synapse0x1efb080();
   input += synapse0x1efb4c0();
   input += synapse0x1efb500();
   input += synapse0x1efb940();
   input += synapse0x1efb980();
   input += synapse0x1efbec0();
   input += synapse0x1efbf00();
   input += synapse0x1efc340();
   input += synapse0x1efc380();
   input += synapse0x1efc7c0();
   input += synapse0x1efc800();
   input += synapse0x1efcc40();
   input += synapse0x1efcc80();
   input += synapse0x1efd0c0();
   input += synapse0x1efd100();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f0c2d0() {
   double input = input0x1f0c2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f068f0() {
   double input = 0.0251033;
   input += synapse0x1f06a80();
   input += synapse0x1f06ac0();
   input += synapse0x1efe360();
   input += synapse0x1efe3a0();
   input += synapse0x1f0c460();
   input += synapse0x1f0c4a0();
   input += synapse0x1ef9710();
   input += synapse0x1ef9750();
   input += synapse0x1efef00();
   input += synapse0x1efef40();
   input += synapse0x1eff380();
   input += synapse0x1eff3c0();
   input += synapse0x1eff800();
   input += synapse0x1eff840();
   input += synapse0x1effc80();
   input += synapse0x1effcc0();
   input += synapse0x1f00100();
   input += synapse0x1f00140();
   input += synapse0x1f00580();
   input += synapse0x1f005c0();
   input += synapse0x1f00a00();
   input += synapse0x1f00a40();
   input += synapse0x1f00e80();
   input += synapse0x1f00ec0();
   input += synapse0x1efd5d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f068f0() {
   double input = input0x1f068f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f0f540() {
   double input = 0.0766251;
   input += synapse0x1efd610();
   input += synapse0x1f0f880();
   input += synapse0x1f0f8c0();
   input += synapse0x1f0f900();
   input += synapse0x1f0f940();
   input += synapse0x1f0f980();
   input += synapse0x1f0f9c0();
   input += synapse0x1f0fa00();
   input += synapse0x1f0fa40();
   input += synapse0x1f0fa80();
   input += synapse0x1f0fac0();
   input += synapse0x1f0fb00();
   input += synapse0x1f0fb40();
   input += synapse0x1f0fb80();
   input += synapse0x1f0fbc0();
   input += synapse0x1f0fc00();
   input += synapse0x1f0f6d0();
   input += synapse0x1f0f710();
   input += synapse0x1f0fd50();
   input += synapse0x1f0fd90();
   input += synapse0x1f0fdd0();
   input += synapse0x1f0fe10();
   input += synapse0x1f0fe50();
   input += synapse0x1f0fe90();
   input += synapse0x1f0fed0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f0f540() {
   double input = input0x1f0f540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f0ff10() {
   double input = 0.510748;
   input += synapse0x1f10250();
   input += synapse0x1f10290();
   input += synapse0x1f102d0();
   input += synapse0x1f10310();
   input += synapse0x1f10350();
   input += synapse0x1f10390();
   input += synapse0x1f103d0();
   input += synapse0x1f10410();
   input += synapse0x1f10450();
   input += synapse0x1f10490();
   input += synapse0x1f104d0();
   input += synapse0x1f10510();
   input += synapse0x1f10550();
   input += synapse0x1f10590();
   input += synapse0x1f105d0();
   input += synapse0x1f10610();
   input += synapse0x1f100a0();
   input += synapse0x1f100e0();
   input += synapse0x1f10760();
   input += synapse0x1f107a0();
   input += synapse0x1f107e0();
   input += synapse0x1f10820();
   input += synapse0x1f10860();
   input += synapse0x1f108a0();
   input += synapse0x1f108e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f0ff10() {
   double input = input0x1f0ff10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f10920() {
   double input = -0.402605;
   input += synapse0x1f10c60();
   input += synapse0x1f10ca0();
   input += synapse0x1f10ce0();
   input += synapse0x1f10d20();
   input += synapse0x1f10d60();
   input += synapse0x1f10da0();
   input += synapse0x1f10de0();
   input += synapse0x1f10e20();
   input += synapse0x1f10e60();
   input += synapse0x1f10ea0();
   input += synapse0x1f10ee0();
   input += synapse0x1f10f20();
   input += synapse0x1f10f60();
   input += synapse0x1f10fa0();
   input += synapse0x1f10fe0();
   input += synapse0x1f11020();
   input += synapse0x1f10ab0();
   input += synapse0x1f10af0();
   input += synapse0x1f11170();
   input += synapse0x1f111b0();
   input += synapse0x1f111f0();
   input += synapse0x1f11230();
   input += synapse0x1f11270();
   input += synapse0x1f112b0();
   input += synapse0x1f112f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f10920() {
   double input = input0x1f10920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f11330() {
   double input = -0.543402;
   input += synapse0x1f11670();
   input += synapse0x1f116b0();
   input += synapse0x1f116f0();
   input += synapse0x1f11730();
   input += synapse0x1f11770();
   input += synapse0x1f117b0();
   input += synapse0x1f117f0();
   input += synapse0x1f11830();
   input += synapse0x1f11870();
   input += synapse0x1f118b0();
   input += synapse0x1f118f0();
   input += synapse0x1f11930();
   input += synapse0x1f11970();
   input += synapse0x1f119b0();
   input += synapse0x1f119f0();
   input += synapse0x1f11a30();
   input += synapse0x1f114c0();
   input += synapse0x1f11500();
   input += synapse0x1f11b80();
   input += synapse0x1f11bc0();
   input += synapse0x1f11c00();
   input += synapse0x1f11c40();
   input += synapse0x1f11c80();
   input += synapse0x1f11cc0();
   input += synapse0x1f11d00();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f11330() {
   double input = input0x1f11330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f11d40() {
   double input = 0.194764;
   input += synapse0x1f12080();
   input += synapse0x1f120c0();
   input += synapse0x1f12100();
   input += synapse0x1f12140();
   input += synapse0x1f12180();
   input += synapse0x1f121c0();
   input += synapse0x1f12200();
   input += synapse0x1f12240();
   input += synapse0x1f12280();
   input += synapse0x1f122c0();
   input += synapse0x1f12300();
   input += synapse0x1f12340();
   input += synapse0x1f12380();
   input += synapse0x1f123c0();
   input += synapse0x1f12400();
   input += synapse0x1f12440();
   input += synapse0x1f11ed0();
   input += synapse0x1f11f10();
   input += synapse0x1f12590();
   input += synapse0x1f125d0();
   input += synapse0x1f12610();
   input += synapse0x1f12650();
   input += synapse0x1f12690();
   input += synapse0x1f126d0();
   input += synapse0x1f12710();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f11d40() {
   double input = input0x1f11d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f12750() {
   double input = 0.0869447;
   input += synapse0x1f12a90();
   input += synapse0x1f12ad0();
   input += synapse0x1f12b10();
   input += synapse0x1f12b50();
   input += synapse0x1f12b90();
   input += synapse0x1f12bd0();
   input += synapse0x1f12c10();
   input += synapse0x1f12c50();
   input += synapse0x1f12c90();
   input += synapse0x1f12cd0();
   input += synapse0x1f12d10();
   input += synapse0x1f12d50();
   input += synapse0x1f12d90();
   input += synapse0x1f12dd0();
   input += synapse0x1f12e10();
   input += synapse0x1f12e50();
   input += synapse0x1f128e0();
   input += synapse0x1f12920();
   input += synapse0x1f12fa0();
   input += synapse0x1f12fe0();
   input += synapse0x1f13020();
   input += synapse0x1f13060();
   input += synapse0x1f130a0();
   input += synapse0x1f130e0();
   input += synapse0x1f13120();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f12750() {
   double input = input0x1f12750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f13160() {
   double input = -0.542749;
   input += synapse0x1f134a0();
   input += synapse0x1f134e0();
   input += synapse0x1f13520();
   input += synapse0x1f13560();
   input += synapse0x1f135a0();
   input += synapse0x1f135e0();
   input += synapse0x1f13620();
   input += synapse0x1f13660();
   input += synapse0x1f136a0();
   input += synapse0x1f136e0();
   input += synapse0x1f13720();
   input += synapse0x1f13760();
   input += synapse0x1f137a0();
   input += synapse0x1f137e0();
   input += synapse0x1f13820();
   input += synapse0x1f13860();
   input += synapse0x1f132f0();
   input += synapse0x1f13330();
   input += synapse0x1f139b0();
   input += synapse0x1f139f0();
   input += synapse0x1f13a30();
   input += synapse0x1f13a70();
   input += synapse0x1f13ab0();
   input += synapse0x1f13af0();
   input += synapse0x1f13b30();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f13160() {
   double input = input0x1f13160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f13b70() {
   double input = 0.382826;
   input += synapse0x1f13eb0();
   input += synapse0x1f13ef0();
   input += synapse0x1f13f30();
   input += synapse0x1f13f70();
   input += synapse0x1f13fb0();
   input += synapse0x1f13ff0();
   input += synapse0x1f14030();
   input += synapse0x1f14070();
   input += synapse0x1f140b0();
   input += synapse0x1f140f0();
   input += synapse0x1f14130();
   input += synapse0x1f14170();
   input += synapse0x1f141b0();
   input += synapse0x1f141f0();
   input += synapse0x1f14230();
   input += synapse0x1f14270();
   input += synapse0x1f13d00();
   input += synapse0x1f13d40();
   input += synapse0x1f143c0();
   input += synapse0x1f14400();
   input += synapse0x1f14440();
   input += synapse0x1f14480();
   input += synapse0x1f144c0();
   input += synapse0x1f14500();
   input += synapse0x1f14540();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f13b70() {
   double input = input0x1f13b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::input0x1f14580() {
   double input = -0.456622;
   input += synapse0x1f147a0();
   input += synapse0x1f147e0();
   input += synapse0x1f14820();
   input += synapse0x1f14860();
   input += synapse0x1f148a0();
   input += synapse0x1f148e0();
   input += synapse0x1f14920();
   input += synapse0x1f14960();
   input += synapse0x1f149a0();
   input += synapse0x1f149e0();
   input += synapse0x1f14a20();
   input += synapse0x1f14a60();
   input += synapse0x1f14aa0();
   input += synapse0x1f14ae0();
   input += synapse0x1f14b20();
   input += synapse0x1f14b60();
   input += synapse0x1ef9b70();
   input += synapse0x1ef9bb0();
   input += synapse0x1f14cb0();
   input += synapse0x1f14cf0();
   input += synapse0x1f14d30();
   input += synapse0x1f14d70();
   input += synapse0x1f14db0();
   input += synapse0x1f14df0();
   input += synapse0x1f14e30();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::neuron0x1f14580() {
   double input = input0x1f14580();
   return (input * 3.67599)+119.091;
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1e05f20() {
   return (neuron0x1ef8b30()*-0.707261);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ee7fa0() {
   return (neuron0x1ef8e70()*-1.20554);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9f50() {
   return (neuron0x1ef91b0()*0.0235195);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9f90() {
   return (neuron0x1ef94f0()*-0.92835);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9fd0() {
   return (neuron0x1ef9830()*-1.11367);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa350() {
   return (neuron0x1ef8b30()*-4.45626);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa390() {
   return (neuron0x1ef8e70()*0.330975);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa3d0() {
   return (neuron0x1ef91b0()*2.18887);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa410() {
   return (neuron0x1ef94f0()*1.19026);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa450() {
   return (neuron0x1ef9830()*-0.244178);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa7d0() {
   return (neuron0x1ef8b30()*-1.19685);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa810() {
   return (neuron0x1ef8e70()*0.536815);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa850() {
   return (neuron0x1ef91b0()*0.885533);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa890() {
   return (neuron0x1ef94f0()*1.42535);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa8d0() {
   return (neuron0x1ef9830()*0.389301);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efac50() {
   return (neuron0x1ef8b30()*-5.92118);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efac90() {
   return (neuron0x1ef8e70()*-3.38957);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1df8110() {
   return (neuron0x1ef91b0()*0.402006);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1df8150() {
   return (neuron0x1ef94f0()*-15.0762);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efade0() {
   return (neuron0x1ef9830()*-3.27924);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb160() {
   return (neuron0x1ef8b30()*-4.14164);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb1a0() {
   return (neuron0x1ef8e70()*-0.355541);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb1e0() {
   return (neuron0x1ef91b0()*1.59833);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb220() {
   return (neuron0x1ef94f0()*1.99709);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb260() {
   return (neuron0x1ef9830()*-0.307159);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb5e0() {
   return (neuron0x1ef8b30()*0.0806633);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb620() {
   return (neuron0x1ef8e70()*0.384126);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb660() {
   return (neuron0x1ef91b0()*-0.00467844);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb6a0() {
   return (neuron0x1ef94f0()*-13.3838);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb6e0() {
   return (neuron0x1ef9830()*8.2559);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efba60() {
   return (neuron0x1ef8b30()*2.10584);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbaa0() {
   return (neuron0x1ef8e70()*0.136145);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbae0() {
   return (neuron0x1ef91b0()*-0.387828);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efacd0() {
   return (neuron0x1ef94f0()*-3.24558);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efad10() {
   return (neuron0x1ef9830()*0.807754);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbfe0() {
   return (neuron0x1ef8b30()*1.23597);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc020() {
   return (neuron0x1ef8e70()*-0.446048);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc060() {
   return (neuron0x1ef91b0()*-0.310927);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc0a0() {
   return (neuron0x1ef94f0()*-0.947313);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc0e0() {
   return (neuron0x1ef9830()*-0.0947872);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc460() {
   return (neuron0x1ef8b30()*4.70795);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc4a0() {
   return (neuron0x1ef8e70()*-0.305648);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc4e0() {
   return (neuron0x1ef91b0()*-1.83723);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc520() {
   return (neuron0x1ef94f0()*-2.27454);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc560() {
   return (neuron0x1ef9830()*0.0696837);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc8e0() {
   return (neuron0x1ef8b30()*0.370188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc920() {
   return (neuron0x1ef8e70()*-0.757581);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc960() {
   return (neuron0x1ef91b0()*-0.225483);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc9a0() {
   return (neuron0x1ef94f0()*-3.58328);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc9e0() {
   return (neuron0x1ef9830()*0.726764);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efcd60() {
   return (neuron0x1ef8b30()*2.31743);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efcda0() {
   return (neuron0x1ef8e70()*-0.602481);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efcde0() {
   return (neuron0x1ef91b0()*-1.31945);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efce20() {
   return (neuron0x1ef94f0()*-1.75389);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efce60() {
   return (neuron0x1ef9830()*-0.493473);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1df7f60() {
   return (neuron0x1ef8b30()*0.367503);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1df7fa0() {
   return (neuron0x1ef8e70()*0.0434188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd2f0() {
   return (neuron0x1ef91b0()*0.178566);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd330() {
   return (neuron0x1ef94f0()*-3.12396);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd370() {
   return (neuron0x1ef9830()*0.68514);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd6f0() {
   return (neuron0x1ef8b30()*0.575148);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd730() {
   return (neuron0x1ef8e70()*-0.17931);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd770() {
   return (neuron0x1ef91b0()*0.121681);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd7b0() {
   return (neuron0x1ef94f0()*-3.27147);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd7f0() {
   return (neuron0x1ef9830()*0.704708);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1df8730() {
   return (neuron0x1ef8b30()*-1.14043);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbcb0() {
   return (neuron0x1ef8e70()*0.197298);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbcf0() {
   return (neuron0x1ef91b0()*0.457284);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdc40() {
   return (neuron0x1ef94f0()*1.24549);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdc80() {
   return (neuron0x1ef9830()*-0.0854552);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe000() {
   return (neuron0x1ef8b30()*-0.701362);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe040() {
   return (neuron0x1ef8e70()*0.545801);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe080() {
   return (neuron0x1ef91b0()*1.15632);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe0c0() {
   return (neuron0x1ef94f0()*2.81519);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe100() {
   return (neuron0x1ef9830()*-0.365968);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe480() {
   return (neuron0x1ef8b30()*0.333944);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef8d50() {
   return (neuron0x1ef8e70()*-0.636851);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef8d90() {
   return (neuron0x1ef91b0()*-0.245546);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9090() {
   return (neuron0x1ef94f0()*-2.35862);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef90d0() {
   return (neuron0x1ef9830()*0.0874786);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efeba0() {
   return (neuron0x1ef8b30()*0.103581);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efebe0() {
   return (neuron0x1ef8e70()*-0.803211);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efec20() {
   return (neuron0x1ef91b0()*-0.266374);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efec60() {
   return (neuron0x1ef94f0()*-2.96108);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efeca0() {
   return (neuron0x1ef9830()*1.02163);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff020() {
   return (neuron0x1ef8b30()*0.0928705);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff060() {
   return (neuron0x1ef8e70()*-1.15432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff0a0() {
   return (neuron0x1ef91b0()*0.0105327);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff0e0() {
   return (neuron0x1ef94f0()*-0.066357);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff120() {
   return (neuron0x1ef9830()*-2.80054);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff4a0() {
   return (neuron0x1ef8b30()*-0.398414);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff4e0() {
   return (neuron0x1ef8e70()*0.284697);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff520() {
   return (neuron0x1ef91b0()*-0.0178119);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff560() {
   return (neuron0x1ef94f0()*3.93726);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff5a0() {
   return (neuron0x1ef9830()*-1.31084);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff920() {
   return (neuron0x1ef8b30()*0.0399407);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff960() {
   return (neuron0x1ef8e70()*0.0468399);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff9a0() {
   return (neuron0x1ef91b0()*0.00101306);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff9e0() {
   return (neuron0x1ef94f0()*-6.74461);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effa20() {
   return (neuron0x1ef9830()*1.94251);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effda0() {
   return (neuron0x1ef8b30()*-0.105329);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effde0() {
   return (neuron0x1ef8e70()*-0.247865);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effe20() {
   return (neuron0x1ef91b0()*0.000616585);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effe60() {
   return (neuron0x1ef94f0()*10.6222);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effea0() {
   return (neuron0x1ef9830()*-5.35834);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00220() {
   return (neuron0x1ef8b30()*0.76913);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00260() {
   return (neuron0x1ef8e70()*0.173614);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f002a0() {
   return (neuron0x1ef91b0()*-0.48391);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f002e0() {
   return (neuron0x1ef94f0()*-2.60335);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00320() {
   return (neuron0x1ef9830()*0.198507);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f006a0() {
   return (neuron0x1ef8b30()*-3.98492);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f006e0() {
   return (neuron0x1ef8e70()*-9.01723);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00720() {
   return (neuron0x1ef91b0()*0.0714807);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00760() {
   return (neuron0x1ef94f0()*-0.50091);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f007a0() {
   return (neuron0x1ef9830()*-3.1593);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00b20() {
   return (neuron0x1ef8b30()*0.112488);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00b60() {
   return (neuron0x1ef8e70()*-0.00400337);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00ba0() {
   return (neuron0x1ef91b0()*-0.00030338);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00be0() {
   return (neuron0x1ef94f0()*0.322127);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00c20() {
   return (neuron0x1ef9830()*-0.343092);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00fa0() {
   return (neuron0x1ef8b30()*-0.977272);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00fe0() {
   return (neuron0x1ef8e70()*0.606411);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f01020() {
   return (neuron0x1ef91b0()*1.14736);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f01060() {
   return (neuron0x1ef94f0()*2.25464);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f010a0() {
   return (neuron0x1ef9830()*-0.0743886);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efabc0() {
   return (neuron0x1ef9ca0()*0.251894);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efac00() {
   return (neuron0x1efa010()*0.409377);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb0d0() {
   return (neuron0x1efa490()*0.548139);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb110() {
   return (neuron0x1efa910()*-1.18031);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb550() {
   return (neuron0x1efae20()*0.392957);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb590() {
   return (neuron0x1efb2a0()*0.0841627);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb9d0() {
   return (neuron0x1efb720()*0.723785);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efba10() {
   return (neuron0x1efbd30()*-0.320107);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbf50() {
   return (neuron0x1efc120()*0.188378);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbf90() {
   return (neuron0x1efc5a0()*0.611231);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc3d0() {
   return (neuron0x1efca20()*0.545797);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc410() {
   return (neuron0x1efcea0()*-0.0829999);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc850() {
   return (neuron0x1efd3b0()*0.627448);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc890() {
   return (neuron0x1efbb20()*-0.215466);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efccd0() {
   return (neuron0x1efdcc0()*0.589405);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efcd10() {
   return (neuron0x1efe140()*0.185199);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd150() {
   return (neuron0x1efea10()*-0.00966381);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd190() {
   return (neuron0x1efece0()*-0.75689);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd660() {
   return (neuron0x1eff160()*-0.104402);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd6a0() {
   return (neuron0x1eff5e0()*0.483537);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdf70() {
   return (neuron0x1effa60()*-0.0146375);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdfb0() {
   return (neuron0x1effee0()*0.32264);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe3f0() {
   return (neuron0x1f00360()*-0.0807962);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe430() {
   return (neuron0x1f007e0()*-0.297551);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9a50() {
   return (neuron0x1f00c60()*0.301079);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdad0() {
   return (neuron0x1ef9ca0()*1.02368);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdb10() {
   return (neuron0x1efa010()*-0.495);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdb50() {
   return (neuron0x1efa490()*1.08897);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdb90() {
   return (neuron0x1efa910()*-2.88591);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efdbd0() {
   return (neuron0x1efae20()*-0.385021);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9a90() {
   return (neuron0x1efb2a0()*-4.86017);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effd10() {
   return (neuron0x1efb720()*-0.984977);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effd50() {
   return (neuron0x1efbd30()*0.181178);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00190() {
   return (neuron0x1efc120()*-0.924714);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f001d0() {
   return (neuron0x1efc5a0()*-2.55137);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00610() {
   return (neuron0x1efca20()*-0.0705485);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00650() {
   return (neuron0x1efcea0()*-1.94981);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00a90() {
   return (neuron0x1efd3b0()*-2.20258);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00ad0() {
   return (neuron0x1efbb20()*0.889694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00f10() {
   return (neuron0x1efdcc0()*1.86875);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00f50() {
   return (neuron0x1efe140()*-1.57598);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9ec0() {
   return (neuron0x1efea10()*-1.8241);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9f00() {
   return (neuron0x1efece0()*1.52735);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efef90() {
   return (neuron0x1eff160()*1.88115);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efefd0() {
   return (neuron0x1eff5e0()*-4.11039);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1e05ff0() {
   return (neuron0x1effa60()*3.01858);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1e06030() {
   return (neuron0x1effee0()*-1.11081);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03620() {
   return (neuron0x1f00360()*0.737445);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03660() {
   return (neuron0x1f007e0()*-1.89948);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f036a0() {
   return (neuron0x1f00c60()*0.548111);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd1e0() {
   return (neuron0x1ef9ca0()*0.262046);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd220() {
   return (neuron0x1efa010()*0.369982);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd260() {
   return (neuron0x1efa490()*-0.386364);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd2a0() {
   return (neuron0x1efa910()*0.220054);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03c30() {
   return (neuron0x1efae20()*0.209317);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03c70() {
   return (neuron0x1efb2a0()*1.32074);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03cb0() {
   return (neuron0x1efb720()*0.606185);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03cf0() {
   return (neuron0x1efbd30()*-0.00493072);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03d30() {
   return (neuron0x1efc120()*-0.0867069);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03d70() {
   return (neuron0x1efc5a0()*1.04485);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03db0() {
   return (neuron0x1efca20()*-0.239921);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03df0() {
   return (neuron0x1efcea0()*0.734846);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03e30() {
   return (neuron0x1efd3b0()*0.607029);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03e70() {
   return (neuron0x1efbb20()*0.264607);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03eb0() {
   return (neuron0x1efdcc0()*-0.705595);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03ef0() {
   return (neuron0x1efe140()*0.64383);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03870() {
   return (neuron0x1efea10()*0.848997);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f038b0() {
   return (neuron0x1efece0()*-0.176875);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04040() {
   return (neuron0x1eff160()*-0.651556);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04080() {
   return (neuron0x1eff5e0()*1.57258);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f040c0() {
   return (neuron0x1effa60()*0.287239);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04100() {
   return (neuron0x1effee0()*0.61511);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04140() {
   return (neuron0x1f00360()*-0.317655);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04180() {
   return (neuron0x1f007e0()*1.25949);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f041c0() {
   return (neuron0x1f00c60()*0.238887);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04540() {
   return (neuron0x1ef9ca0()*-0.628489);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04580() {
   return (neuron0x1efa010()*0.285515);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f045c0() {
   return (neuron0x1efa490()*-0.601088);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04600() {
   return (neuron0x1efa910()*0.537651);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04640() {
   return (neuron0x1efae20()*0.231263);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04680() {
   return (neuron0x1efb2a0()*0.685318);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f046c0() {
   return (neuron0x1efb720()*0.295621);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04700() {
   return (neuron0x1efbd30()*-0.582775);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04740() {
   return (neuron0x1efc120()*0.401108);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04780() {
   return (neuron0x1efc5a0()*0.0862955);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f047c0() {
   return (neuron0x1efca20()*0.624049);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04800() {
   return (neuron0x1efcea0()*-0.0315466);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04840() {
   return (neuron0x1efd3b0()*0.149423);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04880() {
   return (neuron0x1efbb20()*-0.352767);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f048c0() {
   return (neuron0x1efdcc0()*0.00542339);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04900() {
   return (neuron0x1efe140()*0.400495);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04390() {
   return (neuron0x1efea10()*0.084634);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f043d0() {
   return (neuron0x1efece0()*-0.498881);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04a50() {
   return (neuron0x1eff160()*-1.09326);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04a90() {
   return (neuron0x1eff5e0()*0.45791);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04ad0() {
   return (neuron0x1effa60()*-0.43079);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04b10() {
   return (neuron0x1effee0()*0.0411404);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04b50() {
   return (neuron0x1f00360()*0.105415);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04b90() {
   return (neuron0x1f007e0()*-0.424551);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04bd0() {
   return (neuron0x1f00c60()*-0.720271);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04f50() {
   return (neuron0x1ef9ca0()*0.141242);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04f90() {
   return (neuron0x1efa010()*-0.385349);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04fd0() {
   return (neuron0x1efa490()*-0.760627);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05010() {
   return (neuron0x1efa910()*0.272971);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05050() {
   return (neuron0x1efae20()*0.0763392);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05090() {
   return (neuron0x1efb2a0()*0.560868);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f050d0() {
   return (neuron0x1efb720()*1.02307);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05110() {
   return (neuron0x1efbd30()*0.140975);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05150() {
   return (neuron0x1efc120()*0.676884);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05190() {
   return (neuron0x1efc5a0()*1.2497);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f051d0() {
   return (neuron0x1efca20()*-0.0406559);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05210() {
   return (neuron0x1efcea0()*0.718839);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05250() {
   return (neuron0x1efd3b0()*1.05351);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05290() {
   return (neuron0x1efbb20()*-0.59961);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f052d0() {
   return (neuron0x1efdcc0()*-1.38015);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05310() {
   return (neuron0x1efe140()*0.291333);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04da0() {
   return (neuron0x1efea10()*1.53688);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f04de0() {
   return (neuron0x1efece0()*-1.26803);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05460() {
   return (neuron0x1eff160()*-1.48494);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f054a0() {
   return (neuron0x1eff5e0()*0.831082);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f054e0() {
   return (neuron0x1effa60()*-0.236587);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05520() {
   return (neuron0x1effee0()*0.476791);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05560() {
   return (neuron0x1f00360()*-0.396828);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f055a0() {
   return (neuron0x1f007e0()*0.405029);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f055e0() {
   return (neuron0x1f00c60()*-1.02326);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05960() {
   return (neuron0x1ef9ca0()*-0.00866529);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f059a0() {
   return (neuron0x1efa010()*-0.011845);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f059e0() {
   return (neuron0x1efa490()*-0.259488);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05a20() {
   return (neuron0x1efa910()*0.126698);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05a60() {
   return (neuron0x1efae20()*-0.064206);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05aa0() {
   return (neuron0x1efb2a0()*0.0987596);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f05ae0() {
   return (neuron0x1efb720()*-0.297174);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02d00() {
   return (neuron0x1efbd30()*0.134635);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02d40() {
   return (neuron0x1efc120()*0.324277);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02d80() {
   return (neuron0x1efc5a0()*0.169934);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02dc0() {
   return (neuron0x1efca20()*0.53258);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02e00() {
   return (neuron0x1efcea0()*0.697745);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02e40() {
   return (neuron0x1efd3b0()*-0.341955);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02e80() {
   return (neuron0x1efbb20()*-0.0436952);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02ec0() {
   return (neuron0x1efdcc0()*0.0603742);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f02f00() {
   return (neuron0x1efe140()*0.630483);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f057b0() {
   return (neuron0x1efea10()*0.463396);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f057f0() {
   return (neuron0x1efece0()*-0.0162437);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03050() {
   return (neuron0x1eff160()*-0.438464);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03090() {
   return (neuron0x1eff5e0()*0.947117);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f030d0() {
   return (neuron0x1effa60()*0.410352);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03110() {
   return (neuron0x1effee0()*-0.21517);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03150() {
   return (neuron0x1f00360()*0.0897595);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f03190() {
   return (neuron0x1f007e0()*1.15494);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f031d0() {
   return (neuron0x1f00c60()*-0.611898);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f034c0() {
   return (neuron0x1ef9ca0()*-0.198592);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06bc0() {
   return (neuron0x1efa010()*-0.114732);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06c00() {
   return (neuron0x1efa490()*-1.17653);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06c40() {
   return (neuron0x1efa910()*5.0104);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06c80() {
   return (neuron0x1efae20()*-0.378654);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06cc0() {
   return (neuron0x1efb2a0()*9.70304);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06d00() {
   return (neuron0x1efb720()*0.577046);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06d40() {
   return (neuron0x1efbd30()*0.283142);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06d80() {
   return (neuron0x1efc120()*-0.136261);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06dc0() {
   return (neuron0x1efc5a0()*2.04371);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06e00() {
   return (neuron0x1efca20()*0.0153762);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06e40() {
   return (neuron0x1efcea0()*2.31221);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06e80() {
   return (neuron0x1efd3b0()*1.37386);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06ec0() {
   return (neuron0x1efbb20()*-0.613242);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06f00() {
   return (neuron0x1efdcc0()*-1.42994);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06f40() {
   return (neuron0x1efe140()*0.849553);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f033a0() {
   return (neuron0x1efea10()*1.59023);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f033e0() {
   return (neuron0x1efece0()*-0.81777);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07090() {
   return (neuron0x1eff160()*-2.02348);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f070d0() {
   return (neuron0x1eff5e0()*6.0332);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07110() {
   return (neuron0x1effa60()*-5.28002);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07150() {
   return (neuron0x1effee0()*0.675021);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07190() {
   return (neuron0x1f00360()*-0.592381);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f071d0() {
   return (neuron0x1f007e0()*-0.225471);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07210() {
   return (neuron0x1f00c60()*-1.13965);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07590() {
   return (neuron0x1ef9ca0()*-1.03357);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f075d0() {
   return (neuron0x1efa010()*0.0859046);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07610() {
   return (neuron0x1efa490()*-0.661347);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07650() {
   return (neuron0x1efa910()*0.884031);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07690() {
   return (neuron0x1efae20()*0.0462307);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f076d0() {
   return (neuron0x1efb2a0()*3.66767);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07710() {
   return (neuron0x1efb720()*-0.0197083);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07750() {
   return (neuron0x1efbd30()*0.135518);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07790() {
   return (neuron0x1efc120()*-0.0107144);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f077d0() {
   return (neuron0x1efc5a0()*0.164747);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07810() {
   return (neuron0x1efca20()*-0.137233);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07850() {
   return (neuron0x1efcea0()*-0.35757);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07890() {
   return (neuron0x1efd3b0()*0.113744);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f078d0() {
   return (neuron0x1efbb20()*-0.199196);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07910() {
   return (neuron0x1efdcc0()*-0.248046);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07950() {
   return (neuron0x1efe140()*-0.278771);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f073e0() {
   return (neuron0x1efea10()*0.0708025);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07420() {
   return (neuron0x1efece0()*-0.328438);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07aa0() {
   return (neuron0x1eff160()*-0.62624);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07ae0() {
   return (neuron0x1eff5e0()*0.510703);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07b20() {
   return (neuron0x1effa60()*-3.2103);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07b60() {
   return (neuron0x1effee0()*-0.202893);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07ba0() {
   return (neuron0x1f00360()*-0.396221);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07be0() {
   return (neuron0x1f007e0()*-1.28623);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07c20() {
   return (neuron0x1f00c60()*-0.553806);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07fa0() {
   return (neuron0x1ef9ca0()*4.86712);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07fe0() {
   return (neuron0x1efa010()*2.61208);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08020() {
   return (neuron0x1efa490()*1.98802);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08060() {
   return (neuron0x1efa910()*-11.9238);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f080a0() {
   return (neuron0x1efae20()*2.36623);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f080e0() {
   return (neuron0x1efb2a0()*-22.3452);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08120() {
   return (neuron0x1efb720()*-0.448546);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08160() {
   return (neuron0x1efbd30()*0.269109);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f081a0() {
   return (neuron0x1efc120()*-0.211003);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f081e0() {
   return (neuron0x1efc5a0()*2.44924);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08220() {
   return (neuron0x1efca20()*-0.0426407);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08260() {
   return (neuron0x1efcea0()*1.5619);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f082a0() {
   return (neuron0x1efd3b0()*0.586417);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f082e0() {
   return (neuron0x1efbb20()*2.57813);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08320() {
   return (neuron0x1efdcc0()*0.978245);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08360() {
   return (neuron0x1efe140()*0.655731);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07df0() {
   return (neuron0x1efea10()*1.64028);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f07e30() {
   return (neuron0x1efece0()*-0.402038);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f084b0() {
   return (neuron0x1eff160()*1.55075);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f084f0() {
   return (neuron0x1eff5e0()*-12.5807);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08530() {
   return (neuron0x1effa60()*23.3464);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08570() {
   return (neuron0x1effee0()*0.654261);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f085b0() {
   return (neuron0x1f00360()*0.510952);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f085f0() {
   return (neuron0x1f007e0()*-0.408281);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08630() {
   return (neuron0x1f00c60()*1.20763);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f089b0() {
   return (neuron0x1ef9ca0()*0.669419);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f089f0() {
   return (neuron0x1efa010()*0.36096);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08a30() {
   return (neuron0x1efa490()*-0.195394);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08a70() {
   return (neuron0x1efa910()*2.10852);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08ab0() {
   return (neuron0x1efae20()*0.0835543);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08af0() {
   return (neuron0x1efb2a0()*1.9649);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08b30() {
   return (neuron0x1efb720()*0.287996);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08b70() {
   return (neuron0x1efbd30()*-0.0432646);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08bb0() {
   return (neuron0x1efc120()*-0.00659069);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08bf0() {
   return (neuron0x1efc5a0()*0.0117016);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08c30() {
   return (neuron0x1efca20()*0.374603);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08c70() {
   return (neuron0x1efcea0()*-0.145956);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08cb0() {
   return (neuron0x1efd3b0()*0.0373331);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08cf0() {
   return (neuron0x1efbb20()*-0.22881);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08d30() {
   return (neuron0x1efdcc0()*-0.0228422);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08d70() {
   return (neuron0x1efe140()*-0.34357);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08800() {
   return (neuron0x1efea10()*-0.179048);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08840() {
   return (neuron0x1efece0()*0.298378);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08ec0() {
   return (neuron0x1eff160()*-0.73226);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08f00() {
   return (neuron0x1eff5e0()*-0.43296);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08f40() {
   return (neuron0x1effa60()*-1.40907);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08f80() {
   return (neuron0x1effee0()*0.554558);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f08fc0() {
   return (neuron0x1f00360()*-0.366441);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09000() {
   return (neuron0x1f007e0()*-1.13618);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09040() {
   return (neuron0x1f00c60()*0.00938698);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f093c0() {
   return (neuron0x1ef9ca0()*-0.292872);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09400() {
   return (neuron0x1efa010()*0.203188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09440() {
   return (neuron0x1efa490()*-0.0104393);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09480() {
   return (neuron0x1efa910()*-0.355749);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f094c0() {
   return (neuron0x1efae20()*0.366995);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09500() {
   return (neuron0x1efb2a0()*-0.885933);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09540() {
   return (neuron0x1efb720()*-0.728618);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09580() {
   return (neuron0x1efbd30()*0.0323248);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f095c0() {
   return (neuron0x1efc120()*-0.772225);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09600() {
   return (neuron0x1efc5a0()*-1.02089);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09640() {
   return (neuron0x1efca20()*-0.418151);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09680() {
   return (neuron0x1efcea0()*-0.519428);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f096c0() {
   return (neuron0x1efd3b0()*-0.927089);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09700() {
   return (neuron0x1efbb20()*0.499072);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09740() {
   return (neuron0x1efdcc0()*0.713522);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09780() {
   return (neuron0x1efe140()*-0.392183);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09210() {
   return (neuron0x1efea10()*-0.712998);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09250() {
   return (neuron0x1efece0()*0.799072);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f098d0() {
   return (neuron0x1eff160()*0.810431);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09910() {
   return (neuron0x1eff5e0()*-0.886313);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09950() {
   return (neuron0x1effa60()*1.26127);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09990() {
   return (neuron0x1effee0()*-0.793155);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f099d0() {
   return (neuron0x1f00360()*0.234626);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09a10() {
   return (neuron0x1f007e0()*-0.474715);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09a50() {
   return (neuron0x1f00c60()*0.249138);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09dd0() {
   return (neuron0x1ef9ca0()*-0.909417);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09e10() {
   return (neuron0x1efa010()*-0.764798);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09e50() {
   return (neuron0x1efa490()*-0.146706);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09e90() {
   return (neuron0x1efa910()*5.00946);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09ed0() {
   return (neuron0x1efae20()*-0.608817);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09f10() {
   return (neuron0x1efb2a0()*8.43971);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09f50() {
   return (neuron0x1efb720()*-0.151724);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09f90() {
   return (neuron0x1efbd30()*0.676668);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09fd0() {
   return (neuron0x1efc120()*0.340259);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a010() {
   return (neuron0x1efc5a0()*-1.09104);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a050() {
   return (neuron0x1efca20()*-0.339929);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a090() {
   return (neuron0x1efcea0()*-0.479375);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a0d0() {
   return (neuron0x1efd3b0()*0.0247929);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a110() {
   return (neuron0x1efbb20()*-1.27152);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a150() {
   return (neuron0x1efdcc0()*0.0333884);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a190() {
   return (neuron0x1efe140()*0.302007);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09c20() {
   return (neuron0x1efea10()*0.309657);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f09c60() {
   return (neuron0x1efece0()*-0.15775);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a2e0() {
   return (neuron0x1eff160()*-0.802199);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a320() {
   return (neuron0x1eff5e0()*3.70531);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a360() {
   return (neuron0x1effa60()*-8.50348);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a3a0() {
   return (neuron0x1effee0()*-0.556159);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a3e0() {
   return (neuron0x1f00360()*-0.521569);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a420() {
   return (neuron0x1f007e0()*0.147458);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a460() {
   return (neuron0x1f00c60()*-0.106588);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a7e0() {
   return (neuron0x1ef9ca0()*-1.51895);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a820() {
   return (neuron0x1efa010()*0.392787);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a860() {
   return (neuron0x1efa490()*0.255804);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a8a0() {
   return (neuron0x1efa910()*0.555632);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a8e0() {
   return (neuron0x1efae20()*0.316926);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a920() {
   return (neuron0x1efb2a0()*0.544028);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a960() {
   return (neuron0x1efb720()*0.738693);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a9a0() {
   return (neuron0x1efbd30()*-0.353159);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a9e0() {
   return (neuron0x1efc120()*0.718063);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0aa20() {
   return (neuron0x1efc5a0()*1.6603);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0aa60() {
   return (neuron0x1efca20()*-0.185086);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0aaa0() {
   return (neuron0x1efcea0()*1.135);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0aae0() {
   return (neuron0x1efd3b0()*0.935762);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ab20() {
   return (neuron0x1efbb20()*-0.384756);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ab60() {
   return (neuron0x1efdcc0()*-0.638939);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0aba0() {
   return (neuron0x1efe140()*0.682508);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a630() {
   return (neuron0x1efea10()*1.19936);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0a670() {
   return (neuron0x1efece0()*-1.24992);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0acf0() {
   return (neuron0x1eff160()*-0.977137);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ad30() {
   return (neuron0x1eff5e0()*1.32776);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ad70() {
   return (neuron0x1effa60()*0.921365);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0adb0() {
   return (neuron0x1effee0()*0.198306);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0adf0() {
   return (neuron0x1f00360()*-0.254582);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ae30() {
   return (neuron0x1f007e0()*1.44634);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ae70() {
   return (neuron0x1f00c60()*-0.298419);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b1f0() {
   return (neuron0x1ef9ca0()*0.926163);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b230() {
   return (neuron0x1efa010()*-0.0189258);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b270() {
   return (neuron0x1efa490()*-0.0374332);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b2b0() {
   return (neuron0x1efa910()*1.55932);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b2f0() {
   return (neuron0x1efae20()*-0.297139);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b330() {
   return (neuron0x1efb2a0()*-0.0652428);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b370() {
   return (neuron0x1efb720()*-0.0396177);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b3b0() {
   return (neuron0x1efbd30()*-0.266774);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b3f0() {
   return (neuron0x1efc120()*0.0833432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b430() {
   return (neuron0x1efc5a0()*-0.820563);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b470() {
   return (neuron0x1efca20()*-0.148479);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b4b0() {
   return (neuron0x1efcea0()*-0.18154);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b4f0() {
   return (neuron0x1efd3b0()*-0.340825);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b530() {
   return (neuron0x1efbb20()*0.654948);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b570() {
   return (neuron0x1efdcc0()*0.094056);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b5b0() {
   return (neuron0x1efe140()*0.14204);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b040() {
   return (neuron0x1efea10()*-0.685097);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b080() {
   return (neuron0x1efece0()*-0.109025);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b700() {
   return (neuron0x1eff160()*0.293187);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b740() {
   return (neuron0x1eff5e0()*-0.748028);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b780() {
   return (neuron0x1effa60()*0.0844708);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b7c0() {
   return (neuron0x1effee0()*-0.577615);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b800() {
   return (neuron0x1f00360()*-0.287013);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b840() {
   return (neuron0x1f007e0()*-0.385676);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0b880() {
   return (neuron0x1f00c60()*0.0238996);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bc00() {
   return (neuron0x1ef9ca0()*-0.313272);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bc40() {
   return (neuron0x1efa010()*-0.0390422);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bc80() {
   return (neuron0x1efa490()*-0.136579);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bcc0() {
   return (neuron0x1efa910()*-1.58845);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bd00() {
   return (neuron0x1efae20()*-0.0914585);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bd40() {
   return (neuron0x1efb2a0()*-2.61629);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bd80() {
   return (neuron0x1efb720()*-0.829692);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bdc0() {
   return (neuron0x1efbd30()*-0.146862);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0be00() {
   return (neuron0x1efc120()*-0.802849);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0be40() {
   return (neuron0x1efc5a0()*-1.89857);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0be80() {
   return (neuron0x1efca20()*-0.454468);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bec0() {
   return (neuron0x1efcea0()*-2.05996);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bf00() {
   return (neuron0x1efd3b0()*-1.38371);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bf40() {
   return (neuron0x1efbb20()*0.876496);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bf80() {
   return (neuron0x1efdcc0()*1.20858);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0bfc0() {
   return (neuron0x1efe140()*-0.818692);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ba50() {
   return (neuron0x1efea10()*-2.01508);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0ba90() {
   return (neuron0x1efece0()*0.383494);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c110() {
   return (neuron0x1eff160()*0.950744);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c150() {
   return (neuron0x1eff5e0()*-2.55066);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c190() {
   return (neuron0x1effa60()*0.410745);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c1d0() {
   return (neuron0x1effee0()*-0.285965);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c210() {
   return (neuron0x1f00360()*-1.05862);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c250() {
   return (neuron0x1f007e0()*-0.291299);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c290() {
   return (neuron0x1f00c60()*0.404636);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c610() {
   return (neuron0x1ef9ca0()*0.390112);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9e30() {
   return (neuron0x1efa010()*-0.048665);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9e70() {
   return (neuron0x1efa490()*0.64218);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa230() {
   return (neuron0x1efa910()*-0.68048);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa270() {
   return (neuron0x1efae20()*-0.240007);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa6b0() {
   return (neuron0x1efb2a0()*-0.921334);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efa6f0() {
   return (neuron0x1efb720()*-0.774233);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efab30() {
   return (neuron0x1efbd30()*0.229089);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efab70() {
   return (neuron0x1efc120()*-1.09681);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb040() {
   return (neuron0x1efc5a0()*-0.897348);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb080() {
   return (neuron0x1efca20()*0.162198);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb4c0() {
   return (neuron0x1efcea0()*-0.819979);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb500() {
   return (neuron0x1efd3b0()*-1.13532);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb940() {
   return (neuron0x1efbb20()*0.21868);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efb980() {
   return (neuron0x1efdcc0()*0.878596);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbec0() {
   return (neuron0x1efe140()*-0.656119);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efbf00() {
   return (neuron0x1efea10()*-0.928362);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc340() {
   return (neuron0x1efece0()*0.867874);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc380() {
   return (neuron0x1eff160()*0.818974);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc7c0() {
   return (neuron0x1eff5e0()*-1.22754);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efc800() {
   return (neuron0x1effa60()*0.995688);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efcc40() {
   return (neuron0x1effee0()*-0.736695);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efcc80() {
   return (neuron0x1f00360()*0.206856);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd0c0() {
   return (neuron0x1f007e0()*-0.446993);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd100() {
   return (neuron0x1f00c60()*-0.0837173);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06a80() {
   return (neuron0x1ef9ca0()*-0.603123);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f06ac0() {
   return (neuron0x1efa010()*0.222696);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe360() {
   return (neuron0x1efa490()*-0.0228918);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efe3a0() {
   return (neuron0x1efa910()*0.487375);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c460() {
   return (neuron0x1efae20()*0.291368);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0c4a0() {
   return (neuron0x1efb2a0()*0.147575);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9710() {
   return (neuron0x1efb720()*0.363252);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9750() {
   return (neuron0x1efbd30()*-0.661778);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efef00() {
   return (neuron0x1efc120()*0.227755);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efef40() {
   return (neuron0x1efc5a0()*0.70024);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff380() {
   return (neuron0x1efca20()*0.487432);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff3c0() {
   return (neuron0x1efcea0()*1.14525);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff800() {
   return (neuron0x1efd3b0()*1.41341);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1eff840() {
   return (neuron0x1efbb20()*-0.855309);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effc80() {
   return (neuron0x1efdcc0()*-0.441061);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1effcc0() {
   return (neuron0x1efe140()*0.703327);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00100() {
   return (neuron0x1efea10()*0.800881);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00140() {
   return (neuron0x1efece0()*-1.16754);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00580() {
   return (neuron0x1eff160()*-0.589376);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f005c0() {
   return (neuron0x1eff5e0()*0.795316);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00a00() {
   return (neuron0x1effa60()*-0.339358);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00a40() {
   return (neuron0x1effee0()*0.497028);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00e80() {
   return (neuron0x1f00360()*-0.259771);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f00ec0() {
   return (neuron0x1f007e0()*0.469075);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd5d0() {
   return (neuron0x1f00c60()*-0.893877);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1efd610() {
   return (neuron0x1ef9ca0()*0.015291);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f880() {
   return (neuron0x1efa010()*-0.192231);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f8c0() {
   return (neuron0x1efa490()*-0.581756);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f900() {
   return (neuron0x1efa910()*0.164557);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f940() {
   return (neuron0x1efae20()*-0.288913);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f980() {
   return (neuron0x1efb2a0()*0.232279);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f9c0() {
   return (neuron0x1efb720()*0.636899);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fa00() {
   return (neuron0x1efbd30()*-0.751585);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fa40() {
   return (neuron0x1efc120()*0.136363);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fa80() {
   return (neuron0x1efc5a0()*0.570033);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fac0() {
   return (neuron0x1efca20()*0.583027);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fb00() {
   return (neuron0x1efcea0()*0.779073);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fb40() {
   return (neuron0x1efd3b0()*0.992753);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fb80() {
   return (neuron0x1efbb20()*-0.3834);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fbc0() {
   return (neuron0x1efdcc0()*-0.230884);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fc00() {
   return (neuron0x1efe140()*0.378717);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f6d0() {
   return (neuron0x1efea10()*1.18296);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0f710() {
   return (neuron0x1efece0()*-0.851696);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fd50() {
   return (neuron0x1eff160()*-1.11369);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fd90() {
   return (neuron0x1eff5e0()*0.789071);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fdd0() {
   return (neuron0x1effa60()*0.0631744);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fe10() {
   return (neuron0x1effee0()*0.513133);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fe50() {
   return (neuron0x1f00360()*-0.793423);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fe90() {
   return (neuron0x1f007e0()*0.119511);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f0fed0() {
   return (neuron0x1f00c60()*-0.244125);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10250() {
   return (neuron0x1ef9ca0()*0.446698);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10290() {
   return (neuron0x1efa010()*-0.216879);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f102d0() {
   return (neuron0x1efa490()*-0.119544);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10310() {
   return (neuron0x1efa910()*-0.578127);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10350() {
   return (neuron0x1efae20()*0.552561);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10390() {
   return (neuron0x1efb2a0()*2.36345);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f103d0() {
   return (neuron0x1efb720()*0.874102);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10410() {
   return (neuron0x1efbd30()*-0.242331);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10450() {
   return (neuron0x1efc120()*0.0867853);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10490() {
   return (neuron0x1efc5a0()*0.562486);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f104d0() {
   return (neuron0x1efca20()*-0.0949708);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10510() {
   return (neuron0x1efcea0()*0.494508);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10550() {
   return (neuron0x1efd3b0()*0.746374);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10590() {
   return (neuron0x1efbb20()*-0.45682);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f105d0() {
   return (neuron0x1efdcc0()*-0.636421);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10610() {
   return (neuron0x1efe140()*0.0355164);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f100a0() {
   return (neuron0x1efea10()*1.10785);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f100e0() {
   return (neuron0x1efece0()*-0.890202);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10760() {
   return (neuron0x1eff160()*-0.761872);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f107a0() {
   return (neuron0x1eff5e0()*1.07902);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f107e0() {
   return (neuron0x1effa60()*-2.28916);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10820() {
   return (neuron0x1effee0()*0.148208);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10860() {
   return (neuron0x1f00360()*1.32522);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f108a0() {
   return (neuron0x1f007e0()*0.376753);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f108e0() {
   return (neuron0x1f00c60()*-0.124045);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10c60() {
   return (neuron0x1ef9ca0()*-0.418063);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10ca0() {
   return (neuron0x1efa010()*-0.403615);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10ce0() {
   return (neuron0x1efa490()*-0.204556);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10d20() {
   return (neuron0x1efa910()*0.215063);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10d60() {
   return (neuron0x1efae20()*-0.208409);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10da0() {
   return (neuron0x1efb2a0()*0.124093);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10de0() {
   return (neuron0x1efb720()*0.409328);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10e20() {
   return (neuron0x1efbd30()*0.22517);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10e60() {
   return (neuron0x1efc120()*0.486085);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10ea0() {
   return (neuron0x1efc5a0()*1.11812);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10ee0() {
   return (neuron0x1efca20()*0.242766);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10f20() {
   return (neuron0x1efcea0()*0.20206);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10f60() {
   return (neuron0x1efd3b0()*0.660064);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10fa0() {
   return (neuron0x1efbb20()*0.0500891);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10fe0() {
   return (neuron0x1efdcc0()*-0.663327);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11020() {
   return (neuron0x1efe140()*0.375733);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10ab0() {
   return (neuron0x1efea10()*0.376979);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f10af0() {
   return (neuron0x1efece0()*-0.780829);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11170() {
   return (neuron0x1eff160()*-0.279959);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f111b0() {
   return (neuron0x1eff5e0()*0.282082);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f111f0() {
   return (neuron0x1effa60()*-0.122822);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11230() {
   return (neuron0x1effee0()*-0.0404207);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11270() {
   return (neuron0x1f00360()*-0.323276);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f112b0() {
   return (neuron0x1f007e0()*0.198571);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f112f0() {
   return (neuron0x1f00c60()*-0.242598);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11670() {
   return (neuron0x1ef9ca0()*-2.54023);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f116b0() {
   return (neuron0x1efa010()*-0.864426);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f116f0() {
   return (neuron0x1efa490()*-1.41751);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11730() {
   return (neuron0x1efa910()*8.84512);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11770() {
   return (neuron0x1efae20()*-1.57609);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f117b0() {
   return (neuron0x1efb2a0()*19.462);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f117f0() {
   return (neuron0x1efb720()*1.00543);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11830() {
   return (neuron0x1efbd30()*-0.742626);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11870() {
   return (neuron0x1efc120()*0.147307);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f118b0() {
   return (neuron0x1efc5a0()*2.96245);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f118f0() {
   return (neuron0x1efca20()*0.0416825);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11930() {
   return (neuron0x1efcea0()*3.4738);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11970() {
   return (neuron0x1efd3b0()*2.09447);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f119b0() {
   return (neuron0x1efbb20()*-1.6837);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f119f0() {
   return (neuron0x1efdcc0()*-2.32093);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11a30() {
   return (neuron0x1efe140()*1.35928);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f114c0() {
   return (neuron0x1efea10()*2.76398);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11500() {
   return (neuron0x1efece0()*-2.36842);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11b80() {
   return (neuron0x1eff160()*-4.37976);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11bc0() {
   return (neuron0x1eff5e0()*7.64842);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11c00() {
   return (neuron0x1effa60()*-11.5608);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11c40() {
   return (neuron0x1effee0()*0.658294);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11c80() {
   return (neuron0x1f00360()*-0.511183);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11cc0() {
   return (neuron0x1f007e0()*1.4247);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11d00() {
   return (neuron0x1f00c60()*-2.08658);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12080() {
   return (neuron0x1ef9ca0()*-0.447109);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f120c0() {
   return (neuron0x1efa010()*0.110299);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12100() {
   return (neuron0x1efa490()*-0.021997);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12140() {
   return (neuron0x1efa910()*0.319176);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12180() {
   return (neuron0x1efae20()*0.047484);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f121c0() {
   return (neuron0x1efb2a0()*0.422631);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12200() {
   return (neuron0x1efb720()*-0.208312);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12240() {
   return (neuron0x1efbd30()*-0.287771);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12280() {
   return (neuron0x1efc120()*-0.49188);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f122c0() {
   return (neuron0x1efc5a0()*-1.08677);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12300() {
   return (neuron0x1efca20()*0.281829);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12340() {
   return (neuron0x1efcea0()*-0.603399);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12380() {
   return (neuron0x1efd3b0()*-1.0034);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f123c0() {
   return (neuron0x1efbb20()*-0.391967);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12400() {
   return (neuron0x1efdcc0()*0.675703);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12440() {
   return (neuron0x1efe140()*-0.865389);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11ed0() {
   return (neuron0x1efea10()*-0.546694);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f11f10() {
   return (neuron0x1efece0()*0.208335);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12590() {
   return (neuron0x1eff160()*0.425002);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f125d0() {
   return (neuron0x1eff5e0()*-0.731041);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12610() {
   return (neuron0x1effa60()*-1.51743);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12650() {
   return (neuron0x1effee0()*-0.63543);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12690() {
   return (neuron0x1f00360()*-0.505609);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f126d0() {
   return (neuron0x1f007e0()*-1.84458);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12710() {
   return (neuron0x1f00c60()*0.146635);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12a90() {
   return (neuron0x1ef9ca0()*-0.705634);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12ad0() {
   return (neuron0x1efa010()*-0.433416);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12b10() {
   return (neuron0x1efa490()*-0.0156001);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12b50() {
   return (neuron0x1efa910()*0.493859);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12b90() {
   return (neuron0x1efae20()*0.133177);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12bd0() {
   return (neuron0x1efb2a0()*-0.993142);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12c10() {
   return (neuron0x1efb720()*-0.331234);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12c50() {
   return (neuron0x1efbd30()*-0.342521);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12c90() {
   return (neuron0x1efc120()*-0.302932);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12cd0() {
   return (neuron0x1efc5a0()*-1.85709);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12d10() {
   return (neuron0x1efca20()*0.251397);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12d50() {
   return (neuron0x1efcea0()*-1.00642);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12d90() {
   return (neuron0x1efd3b0()*-0.884263);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12dd0() {
   return (neuron0x1efbb20()*0.605152);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12e10() {
   return (neuron0x1efdcc0()*0.846402);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12e50() {
   return (neuron0x1efe140()*-0.866472);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f128e0() {
   return (neuron0x1efea10()*-0.68278);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12920() {
   return (neuron0x1efece0()*0.326089);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12fa0() {
   return (neuron0x1eff160()*1.13039);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f12fe0() {
   return (neuron0x1eff5e0()*-1.98959);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13020() {
   return (neuron0x1effa60()*-0.47082);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13060() {
   return (neuron0x1effee0()*-0.537952);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f130a0() {
   return (neuron0x1f00360()*0.0664062);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f130e0() {
   return (neuron0x1f007e0()*-3.46787);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13120() {
   return (neuron0x1f00c60()*0.195565);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f134a0() {
   return (neuron0x1ef9ca0()*0.49279);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f134e0() {
   return (neuron0x1efa010()*-0.720841);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13520() {
   return (neuron0x1efa490()*0.464484);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13560() {
   return (neuron0x1efa910()*0.402043);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f135a0() {
   return (neuron0x1efae20()*-0.263536);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f135e0() {
   return (neuron0x1efb2a0()*-1.6365);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13620() {
   return (neuron0x1efb720()*-0.463756);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13660() {
   return (neuron0x1efbd30()*0.0846586);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f136a0() {
   return (neuron0x1efc120()*-0.0295774);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f136e0() {
   return (neuron0x1efc5a0()*-1.53159);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13720() {
   return (neuron0x1efca20()*-0.33412);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13760() {
   return (neuron0x1efcea0()*-0.607466);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f137a0() {
   return (neuron0x1efd3b0()*-0.79959);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f137e0() {
   return (neuron0x1efbb20()*0.404938);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13820() {
   return (neuron0x1efdcc0()*0.403893);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13860() {
   return (neuron0x1efe140()*-0.875474);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f132f0() {
   return (neuron0x1efea10()*-0.832958);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13330() {
   return (neuron0x1efece0()*1.04684);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f139b0() {
   return (neuron0x1eff160()*0.449205);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f139f0() {
   return (neuron0x1eff5e0()*-1.16674);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13a30() {
   return (neuron0x1effa60()*1.26159);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13a70() {
   return (neuron0x1effee0()*-0.226028);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13ab0() {
   return (neuron0x1f00360()*0.888236);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13af0() {
   return (neuron0x1f007e0()*-0.679941);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13b30() {
   return (neuron0x1f00c60()*-0.179814);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13eb0() {
   return (neuron0x1ef9ca0()*0.710505);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13ef0() {
   return (neuron0x1efa010()*-0.240333);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13f30() {
   return (neuron0x1efa490()*-0.384013);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13f70() {
   return (neuron0x1efa910()*0.401224);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13fb0() {
   return (neuron0x1efae20()*-0.104466);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13ff0() {
   return (neuron0x1efb2a0()*0.444534);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14030() {
   return (neuron0x1efb720()*0.738759);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14070() {
   return (neuron0x1efbd30()*-0.242165);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f140b0() {
   return (neuron0x1efc120()*0.296377);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f140f0() {
   return (neuron0x1efc5a0()*1.83768);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14130() {
   return (neuron0x1efca20()*-0.176597);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14170() {
   return (neuron0x1efcea0()*1.02216);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f141b0() {
   return (neuron0x1efd3b0()*1.03233);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f141f0() {
   return (neuron0x1efbb20()*-0.159379);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14230() {
   return (neuron0x1efdcc0()*-0.679892);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14270() {
   return (neuron0x1efe140()*0.25546);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13d00() {
   return (neuron0x1efea10()*1.29975);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f13d40() {
   return (neuron0x1efece0()*-0.130766);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f143c0() {
   return (neuron0x1eff160()*-1.14576);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14400() {
   return (neuron0x1eff5e0()*0.994818);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14440() {
   return (neuron0x1effa60()*0.685972);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14480() {
   return (neuron0x1effee0()*0.707024);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f144c0() {
   return (neuron0x1f00360()*0.366306);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14500() {
   return (neuron0x1f007e0()*1.79106);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14540() {
   return (neuron0x1f00c60()*-1.1117);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f147a0() {
   return (neuron0x1f02b70()*-2.67545);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f147e0() {
   return (neuron0x1efd940()*-5.39891);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14820() {
   return (neuron0x1f036e0()*2.99002);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14860() {
   return (neuron0x1f04200()*-1.32953);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f148a0() {
   return (neuron0x1f04c10()*0.772903);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f148e0() {
   return (neuron0x1f05620()*2.39114);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14920() {
   return (neuron0x1f03210()*4.40633);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14960() {
   return (neuron0x1f07250()*-4.09624);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f149a0() {
   return (neuron0x1f07c60()*10.6717);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f149e0() {
   return (neuron0x1f08670()*-3.71012);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14a20() {
   return (neuron0x1f09080()*1.05671);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14a60() {
   return (neuron0x1f09a90()*-10.8583);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14aa0() {
   return (neuron0x1f0a4a0()*2.49223);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14ae0() {
   return (neuron0x1f0aeb0()*-1.85768);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14b20() {
   return (neuron0x1f0b8c0()*-3.79575);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14b60() {
   return (neuron0x1f0c2d0()*0.756974);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9b70() {
   return (neuron0x1f068f0()*0.249142);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1ef9bb0() {
   return (neuron0x1f0f540()*0.396881);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14cb0() {
   return (neuron0x1f0ff10()*-3.37535);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14cf0() {
   return (neuron0x1f10920()*0.837509);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14d30() {
   return (neuron0x1f11330()*16.0196);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14d70() {
   return (neuron0x1f11d40()*-3.26632);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14db0() {
   return (neuron0x1f12750()*-5.5709);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14df0() {
   return (neuron0x1f13160()*-1.92028);
}

double nnFunc_1C_25_25hi_5000ep_weight_sec1up::synapse0x1f14e30() {
   return (neuron0x1f13b70()*3.10671);
}

