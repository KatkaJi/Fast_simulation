#include "25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_downwing/nnFunc_1C_25_25hi_5000ep_weight_down.h"
#include <cmath>

double nnFunc_1C_25_25hi_5000ep_weight_down::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x14f5a40();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight_down::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x14f5a40();
     default:
         return 0.;
   }
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14d9ff0() {
   return input0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14da330() {
   return input1;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14da670() {
   return input2;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14da9b0() {
   return input3;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dacf0() {
   return input4;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14db160() {
   double input = -0.3635;
   input += synapse0x13e7140();
   input += synapse0x14c9460();
   input += synapse0x14db410();
   input += synapse0x14db450();
   input += synapse0x14db490();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14db160() {
   double input = input0x14db160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14db4d0() {
   double input = -2.07864;
   input += synapse0x14db810();
   input += synapse0x14db850();
   input += synapse0x14db890();
   input += synapse0x14db8d0();
   input += synapse0x14db910();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14db4d0() {
   double input = input0x14db4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14db950() {
   double input = 18.9641;
   input += synapse0x14dbc90();
   input += synapse0x14dbcd0();
   input += synapse0x14dbd10();
   input += synapse0x14dbd50();
   input += synapse0x14dbd90();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14db950() {
   double input = input0x14db950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dbdd0() {
   double input = -1.53482;
   input += synapse0x14dc110();
   input += synapse0x14dc150();
   input += synapse0x13d9330();
   input += synapse0x13d9370();
   input += synapse0x14dc2a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dbdd0() {
   double input = input0x14dbdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dc2e0() {
   double input = -21.011;
   input += synapse0x14dc620();
   input += synapse0x14dc660();
   input += synapse0x14dc6a0();
   input += synapse0x14dc6e0();
   input += synapse0x14dc720();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dc2e0() {
   double input = input0x14dc2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dc760() {
   double input = 0.599553;
   input += synapse0x14dcaa0();
   input += synapse0x14dcae0();
   input += synapse0x14dcb20();
   input += synapse0x14dcb60();
   input += synapse0x14dcba0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dc760() {
   double input = input0x14dc760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dcbe0() {
   double input = -0.306056;
   input += synapse0x14dcf20();
   input += synapse0x14dcf60();
   input += synapse0x14dcfa0();
   input += synapse0x14dc190();
   input += synapse0x14dc1d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dcbe0() {
   double input = input0x14dcbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dd1f0() {
   double input = 0.0684707;
   input += synapse0x14dd4a0();
   input += synapse0x14dd4e0();
   input += synapse0x14dd520();
   input += synapse0x14dd560();
   input += synapse0x14dd5a0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dd1f0() {
   double input = input0x14dd1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dd5e0() {
   double input = 0.407036;
   input += synapse0x14dd920();
   input += synapse0x14dd960();
   input += synapse0x14dd9a0();
   input += synapse0x14dd9e0();
   input += synapse0x14dda20();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dd5e0() {
   double input = input0x14dd5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dda60() {
   double input = 0.417723;
   input += synapse0x14ddda0();
   input += synapse0x14ddde0();
   input += synapse0x14dde20();
   input += synapse0x14dde60();
   input += synapse0x14ddea0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dda60() {
   double input = input0x14dda60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14ddee0() {
   double input = 2.92596;
   input += synapse0x14de220();
   input += synapse0x14de260();
   input += synapse0x14de2a0();
   input += synapse0x14de2e0();
   input += synapse0x14de320();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14ddee0() {
   double input = input0x14ddee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14de360() {
   double input = 0.977518;
   input += synapse0x13d9180();
   input += synapse0x13d91c0();
   input += synapse0x14de7b0();
   input += synapse0x14de7f0();
   input += synapse0x14de830();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14de360() {
   double input = input0x14de360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14de870() {
   double input = -1.08715;
   input += synapse0x14debb0();
   input += synapse0x14debf0();
   input += synapse0x14dec30();
   input += synapse0x14dec70();
   input += synapse0x14decb0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14de870() {
   double input = input0x14de870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dcfe0() {
   double input = -3.54908;
   input += synapse0x13d9950();
   input += synapse0x14dd170();
   input += synapse0x14dd1b0();
   input += synapse0x14df100();
   input += synapse0x14df140();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dcfe0() {
   double input = input0x14dcfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14df180() {
   double input = 15.3329;
   input += synapse0x14df4c0();
   input += synapse0x14df500();
   input += synapse0x14df540();
   input += synapse0x14df580();
   input += synapse0x14df5c0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14df180() {
   double input = input0x14df180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14df600() {
   double input = 5.60422;
   input += synapse0x14df940();
   input += synapse0x14da210();
   input += synapse0x14da250();
   input += synapse0x14da550();
   input += synapse0x14da590();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14df600() {
   double input = input0x14df600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dfed0() {
   double input = 2.33465;
   input += synapse0x14e0060();
   input += synapse0x14e00a0();
   input += synapse0x14e00e0();
   input += synapse0x14e0120();
   input += synapse0x14e0160();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dfed0() {
   double input = input0x14dfed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e01a0() {
   double input = -0.385343;
   input += synapse0x14e04e0();
   input += synapse0x14e0520();
   input += synapse0x14e0560();
   input += synapse0x14e05a0();
   input += synapse0x14e05e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e01a0() {
   double input = input0x14e01a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e0620() {
   double input = -6.77694;
   input += synapse0x14e0960();
   input += synapse0x14e09a0();
   input += synapse0x14e09e0();
   input += synapse0x14e0a20();
   input += synapse0x14e0a60();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e0620() {
   double input = input0x14e0620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e0aa0() {
   double input = -0.658439;
   input += synapse0x14e0de0();
   input += synapse0x14e0e20();
   input += synapse0x14e0e60();
   input += synapse0x14e0ea0();
   input += synapse0x14e0ee0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e0aa0() {
   double input = input0x14e0aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e0f20() {
   double input = 0.745765;
   input += synapse0x14e1260();
   input += synapse0x14e12a0();
   input += synapse0x14e12e0();
   input += synapse0x14e1320();
   input += synapse0x14e1360();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e0f20() {
   double input = input0x14e0f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e13a0() {
   double input = 0.78243;
   input += synapse0x14e16e0();
   input += synapse0x14e1720();
   input += synapse0x14e1760();
   input += synapse0x14e17a0();
   input += synapse0x14e17e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e13a0() {
   double input = input0x14e13a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e1820() {
   double input = -20.8995;
   input += synapse0x14e1b60();
   input += synapse0x14e1ba0();
   input += synapse0x14e1be0();
   input += synapse0x14e1c20();
   input += synapse0x14e1c60();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e1820() {
   double input = input0x14e1820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e1ca0() {
   double input = 16.1117;
   input += synapse0x14e1fe0();
   input += synapse0x14e2020();
   input += synapse0x14e2060();
   input += synapse0x14e20a0();
   input += synapse0x14e20e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e1ca0() {
   double input = input0x14e1ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e2120() {
   double input = -3.86216;
   input += synapse0x14e2460();
   input += synapse0x14e24a0();
   input += synapse0x14e24e0();
   input += synapse0x14e2520();
   input += synapse0x14e2560();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e2120() {
   double input = input0x14e2120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e4030() {
   double input = 0.00323284;
   input += synapse0x14dc080();
   input += synapse0x14dc0c0();
   input += synapse0x14dc590();
   input += synapse0x14dc5d0();
   input += synapse0x14dca10();
   input += synapse0x14dca50();
   input += synapse0x14dce90();
   input += synapse0x14dced0();
   input += synapse0x14dd410();
   input += synapse0x14dd450();
   input += synapse0x14dd890();
   input += synapse0x14dd8d0();
   input += synapse0x14ddd10();
   input += synapse0x14ddd50();
   input += synapse0x14de190();
   input += synapse0x14de1d0();
   input += synapse0x14de610();
   input += synapse0x14de650();
   input += synapse0x14deb20();
   input += synapse0x14deb60();
   input += synapse0x14df430();
   input += synapse0x14df470();
   input += synapse0x14df8b0();
   input += synapse0x14df8f0();
   input += synapse0x14daf10();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e4030() {
   double input = input0x14e4030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14dee00() {
   double input = 0.0406849;
   input += synapse0x14def90();
   input += synapse0x14defd0();
   input += synapse0x14df010();
   input += synapse0x14df050();
   input += synapse0x14df090();
   input += synapse0x14daf50();
   input += synapse0x14e11d0();
   input += synapse0x14e1210();
   input += synapse0x14e1650();
   input += synapse0x14e1690();
   input += synapse0x14e1ad0();
   input += synapse0x14e1b10();
   input += synapse0x14e1f50();
   input += synapse0x14e1f90();
   input += synapse0x14e23d0();
   input += synapse0x14e2410();
   input += synapse0x14db380();
   input += synapse0x14db3c0();
   input += synapse0x14e0450();
   input += synapse0x14e0490();
   input += synapse0x13e7210();
   input += synapse0x13e7250();
   input += synapse0x14e4ae0();
   input += synapse0x14e4b20();
   input += synapse0x14e4b60();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14dee00() {
   double input = input0x14dee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e4ba0() {
   double input = -0.642119;
   input += synapse0x14de6a0();
   input += synapse0x14de6e0();
   input += synapse0x14de720();
   input += synapse0x14de760();
   input += synapse0x14e50f0();
   input += synapse0x14e5130();
   input += synapse0x14e5170();
   input += synapse0x14e51b0();
   input += synapse0x14e51f0();
   input += synapse0x14e5230();
   input += synapse0x14e5270();
   input += synapse0x14e52b0();
   input += synapse0x14e52f0();
   input += synapse0x14e5330();
   input += synapse0x14e5370();
   input += synapse0x14e53b0();
   input += synapse0x14e4d30();
   input += synapse0x14e4d70();
   input += synapse0x14e5500();
   input += synapse0x14e5540();
   input += synapse0x14e5580();
   input += synapse0x14e55c0();
   input += synapse0x14e5600();
   input += synapse0x14e5640();
   input += synapse0x14e5680();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e4ba0() {
   double input = input0x14e4ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e56c0() {
   double input = -0.158292;
   input += synapse0x14e5a00();
   input += synapse0x14e5a40();
   input += synapse0x14e5a80();
   input += synapse0x14e5ac0();
   input += synapse0x14e5b00();
   input += synapse0x14e5b40();
   input += synapse0x14e5b80();
   input += synapse0x14e5bc0();
   input += synapse0x14e5c00();
   input += synapse0x14e5c40();
   input += synapse0x14e5c80();
   input += synapse0x14e5cc0();
   input += synapse0x14e5d00();
   input += synapse0x14e5d40();
   input += synapse0x14e5d80();
   input += synapse0x14e5dc0();
   input += synapse0x14e5850();
   input += synapse0x14e5890();
   input += synapse0x14e5f10();
   input += synapse0x14e5f50();
   input += synapse0x14e5f90();
   input += synapse0x14e5fd0();
   input += synapse0x14e6010();
   input += synapse0x14e6050();
   input += synapse0x14e6090();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e56c0() {
   double input = input0x14e56c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e60d0() {
   double input = 0.940062;
   input += synapse0x14e6410();
   input += synapse0x14e6450();
   input += synapse0x14e6490();
   input += synapse0x14e64d0();
   input += synapse0x14e6510();
   input += synapse0x14e6550();
   input += synapse0x14e6590();
   input += synapse0x14e65d0();
   input += synapse0x14e6610();
   input += synapse0x14e6650();
   input += synapse0x14e6690();
   input += synapse0x14e66d0();
   input += synapse0x14e6710();
   input += synapse0x14e6750();
   input += synapse0x14e6790();
   input += synapse0x14e67d0();
   input += synapse0x14e6260();
   input += synapse0x14e62a0();
   input += synapse0x14e6920();
   input += synapse0x14e6960();
   input += synapse0x14e69a0();
   input += synapse0x14e69e0();
   input += synapse0x14e6a20();
   input += synapse0x14e6a60();
   input += synapse0x14e6aa0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e60d0() {
   double input = input0x14e60d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e6ae0() {
   double input = 0.490151;
   input += synapse0x14e6e20();
   input += synapse0x14e6e60();
   input += synapse0x14e6ea0();
   input += synapse0x14e6ee0();
   input += synapse0x14e6f20();
   input += synapse0x14e6f60();
   input += synapse0x14e6fa0();
   input += synapse0x14e41c0();
   input += synapse0x14e4200();
   input += synapse0x14e4240();
   input += synapse0x14e4280();
   input += synapse0x14e42c0();
   input += synapse0x14e4300();
   input += synapse0x14e4340();
   input += synapse0x14e4380();
   input += synapse0x14e43c0();
   input += synapse0x14e6c70();
   input += synapse0x14e6cb0();
   input += synapse0x14e4510();
   input += synapse0x14e4550();
   input += synapse0x14e4590();
   input += synapse0x14e45d0();
   input += synapse0x14e4610();
   input += synapse0x14e4650();
   input += synapse0x14e4690();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e6ae0() {
   double input = input0x14e6ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e46d0() {
   double input = -0.142081;
   input += synapse0x14e4980();
   input += synapse0x14e8080();
   input += synapse0x14e80c0();
   input += synapse0x14e8100();
   input += synapse0x14e8140();
   input += synapse0x14e8180();
   input += synapse0x14e81c0();
   input += synapse0x14e8200();
   input += synapse0x14e8240();
   input += synapse0x14e8280();
   input += synapse0x14e82c0();
   input += synapse0x14e8300();
   input += synapse0x14e8340();
   input += synapse0x14e8380();
   input += synapse0x14e83c0();
   input += synapse0x14e8400();
   input += synapse0x14e4860();
   input += synapse0x14e48a0();
   input += synapse0x14e8550();
   input += synapse0x14e8590();
   input += synapse0x14e85d0();
   input += synapse0x14e8610();
   input += synapse0x14e8650();
   input += synapse0x14e8690();
   input += synapse0x14e86d0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e46d0() {
   double input = input0x14e46d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e8710() {
   double input = -2.57731;
   input += synapse0x14e8a50();
   input += synapse0x14e8a90();
   input += synapse0x14e8ad0();
   input += synapse0x14e8b10();
   input += synapse0x14e8b50();
   input += synapse0x14e8b90();
   input += synapse0x14e8bd0();
   input += synapse0x14e8c10();
   input += synapse0x14e8c50();
   input += synapse0x14e8c90();
   input += synapse0x14e8cd0();
   input += synapse0x14e8d10();
   input += synapse0x14e8d50();
   input += synapse0x14e8d90();
   input += synapse0x14e8dd0();
   input += synapse0x14e8e10();
   input += synapse0x14e88a0();
   input += synapse0x14e88e0();
   input += synapse0x14e8f60();
   input += synapse0x14e8fa0();
   input += synapse0x14e8fe0();
   input += synapse0x14e9020();
   input += synapse0x14e9060();
   input += synapse0x14e90a0();
   input += synapse0x14e90e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e8710() {
   double input = input0x14e8710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e9120() {
   double input = 0.470761;
   input += synapse0x14e9460();
   input += synapse0x14e94a0();
   input += synapse0x14e94e0();
   input += synapse0x14e9520();
   input += synapse0x14e9560();
   input += synapse0x14e95a0();
   input += synapse0x14e95e0();
   input += synapse0x14e9620();
   input += synapse0x14e9660();
   input += synapse0x14e96a0();
   input += synapse0x14e96e0();
   input += synapse0x14e9720();
   input += synapse0x14e9760();
   input += synapse0x14e97a0();
   input += synapse0x14e97e0();
   input += synapse0x14e9820();
   input += synapse0x14e92b0();
   input += synapse0x14e92f0();
   input += synapse0x14e9970();
   input += synapse0x14e99b0();
   input += synapse0x14e99f0();
   input += synapse0x14e9a30();
   input += synapse0x14e9a70();
   input += synapse0x14e9ab0();
   input += synapse0x14e9af0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e9120() {
   double input = input0x14e9120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e9b30() {
   double input = -0.708383;
   input += synapse0x14e9e70();
   input += synapse0x14e9eb0();
   input += synapse0x14e9ef0();
   input += synapse0x14e9f30();
   input += synapse0x14e9f70();
   input += synapse0x14e9fb0();
   input += synapse0x14e9ff0();
   input += synapse0x14ea030();
   input += synapse0x14ea070();
   input += synapse0x14ea0b0();
   input += synapse0x14ea0f0();
   input += synapse0x14ea130();
   input += synapse0x14ea170();
   input += synapse0x14ea1b0();
   input += synapse0x14ea1f0();
   input += synapse0x14ea230();
   input += synapse0x14e9cc0();
   input += synapse0x14e9d00();
   input += synapse0x14ea380();
   input += synapse0x14ea3c0();
   input += synapse0x14ea400();
   input += synapse0x14ea440();
   input += synapse0x14ea480();
   input += synapse0x14ea4c0();
   input += synapse0x14ea500();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e9b30() {
   double input = input0x14e9b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14ea540() {
   double input = -0.767224;
   input += synapse0x14ea880();
   input += synapse0x14ea8c0();
   input += synapse0x14ea900();
   input += synapse0x14ea940();
   input += synapse0x14ea980();
   input += synapse0x14ea9c0();
   input += synapse0x14eaa00();
   input += synapse0x14eaa40();
   input += synapse0x14eaa80();
   input += synapse0x14eaac0();
   input += synapse0x14eab00();
   input += synapse0x14eab40();
   input += synapse0x14eab80();
   input += synapse0x14eabc0();
   input += synapse0x14eac00();
   input += synapse0x14eac40();
   input += synapse0x14ea6d0();
   input += synapse0x14ea710();
   input += synapse0x14ead90();
   input += synapse0x14eadd0();
   input += synapse0x14eae10();
   input += synapse0x14eae50();
   input += synapse0x14eae90();
   input += synapse0x14eaed0();
   input += synapse0x14eaf10();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14ea540() {
   double input = input0x14ea540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14eaf50() {
   double input = 1.31659;
   input += synapse0x14eb290();
   input += synapse0x14eb2d0();
   input += synapse0x14eb310();
   input += synapse0x14eb350();
   input += synapse0x14eb390();
   input += synapse0x14eb3d0();
   input += synapse0x14eb410();
   input += synapse0x14eb450();
   input += synapse0x14eb490();
   input += synapse0x14eb4d0();
   input += synapse0x14eb510();
   input += synapse0x14eb550();
   input += synapse0x14eb590();
   input += synapse0x14eb5d0();
   input += synapse0x14eb610();
   input += synapse0x14eb650();
   input += synapse0x14eb0e0();
   input += synapse0x14eb120();
   input += synapse0x14eb7a0();
   input += synapse0x14eb7e0();
   input += synapse0x14eb820();
   input += synapse0x14eb860();
   input += synapse0x14eb8a0();
   input += synapse0x14eb8e0();
   input += synapse0x14eb920();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14eaf50() {
   double input = input0x14eaf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14eb960() {
   double input = -2.21741;
   input += synapse0x14ebca0();
   input += synapse0x14ebce0();
   input += synapse0x14ebd20();
   input += synapse0x14ebd60();
   input += synapse0x14ebda0();
   input += synapse0x14ebde0();
   input += synapse0x14ebe20();
   input += synapse0x14ebe60();
   input += synapse0x14ebea0();
   input += synapse0x14ebee0();
   input += synapse0x14ebf20();
   input += synapse0x14ebf60();
   input += synapse0x14ebfa0();
   input += synapse0x14ebfe0();
   input += synapse0x14ec020();
   input += synapse0x14ec060();
   input += synapse0x14ebaf0();
   input += synapse0x14ebb30();
   input += synapse0x14ec1b0();
   input += synapse0x14ec1f0();
   input += synapse0x14ec230();
   input += synapse0x14ec270();
   input += synapse0x14ec2b0();
   input += synapse0x14ec2f0();
   input += synapse0x14ec330();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14eb960() {
   double input = input0x14eb960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14ec370() {
   double input = -0.740548;
   input += synapse0x14ec6b0();
   input += synapse0x14ec6f0();
   input += synapse0x14ec730();
   input += synapse0x14ec770();
   input += synapse0x14ec7b0();
   input += synapse0x14ec7f0();
   input += synapse0x14ec830();
   input += synapse0x14ec870();
   input += synapse0x14ec8b0();
   input += synapse0x14ec8f0();
   input += synapse0x14ec930();
   input += synapse0x14ec970();
   input += synapse0x14ec9b0();
   input += synapse0x14ec9f0();
   input += synapse0x14eca30();
   input += synapse0x14eca70();
   input += synapse0x14ec500();
   input += synapse0x14ec540();
   input += synapse0x14ecbc0();
   input += synapse0x14ecc00();
   input += synapse0x14ecc40();
   input += synapse0x14ecc80();
   input += synapse0x14eccc0();
   input += synapse0x14ecd00();
   input += synapse0x14ecd40();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14ec370() {
   double input = input0x14ec370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14ecd80() {
   double input = 0.33643;
   input += synapse0x14ed0c0();
   input += synapse0x14ed100();
   input += synapse0x14ed140();
   input += synapse0x14ed180();
   input += synapse0x14ed1c0();
   input += synapse0x14ed200();
   input += synapse0x14ed240();
   input += synapse0x14ed280();
   input += synapse0x14ed2c0();
   input += synapse0x14ed300();
   input += synapse0x14ed340();
   input += synapse0x14ed380();
   input += synapse0x14ed3c0();
   input += synapse0x14ed400();
   input += synapse0x14ed440();
   input += synapse0x14ed480();
   input += synapse0x14ecf10();
   input += synapse0x14ecf50();
   input += synapse0x14ed5d0();
   input += synapse0x14ed610();
   input += synapse0x14ed650();
   input += synapse0x14ed690();
   input += synapse0x14ed6d0();
   input += synapse0x14ed710();
   input += synapse0x14ed750();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14ecd80() {
   double input = input0x14ecd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14ed790() {
   double input = 0.503734;
   input += synapse0x14edad0();
   input += synapse0x14db2f0();
   input += synapse0x14db330();
   input += synapse0x14db6f0();
   input += synapse0x14db730();
   input += synapse0x14dbb70();
   input += synapse0x14dbbb0();
   input += synapse0x14dbff0();
   input += synapse0x14dc030();
   input += synapse0x14dc500();
   input += synapse0x14dc540();
   input += synapse0x14dc980();
   input += synapse0x14dc9c0();
   input += synapse0x14dce00();
   input += synapse0x14dce40();
   input += synapse0x14dd380();
   input += synapse0x14dd3c0();
   input += synapse0x14dd800();
   input += synapse0x14dd840();
   input += synapse0x14ddc80();
   input += synapse0x14ddcc0();
   input += synapse0x14de100();
   input += synapse0x14de140();
   input += synapse0x14de580();
   input += synapse0x14de5c0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14ed790() {
   double input = input0x14ed790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14e7db0() {
   double input = -0.583084;
   input += synapse0x14e7f40();
   input += synapse0x14e7f80();
   input += synapse0x14df820();
   input += synapse0x14df860();
   input += synapse0x14ed920();
   input += synapse0x14ed960();
   input += synapse0x14dabd0();
   input += synapse0x14dac10();
   input += synapse0x14e03c0();
   input += synapse0x14e0400();
   input += synapse0x14e0840();
   input += synapse0x14e0880();
   input += synapse0x14e0cc0();
   input += synapse0x14e0d00();
   input += synapse0x14e1140();
   input += synapse0x14e1180();
   input += synapse0x14e15c0();
   input += synapse0x14e1600();
   input += synapse0x14e1a40();
   input += synapse0x14e1a80();
   input += synapse0x14e1ec0();
   input += synapse0x14e1f00();
   input += synapse0x14e2340();
   input += synapse0x14e2380();
   input += synapse0x14dea90();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14e7db0() {
   double input = input0x14e7db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f0a00() {
   double input = -1.07874;
   input += synapse0x14dead0();
   input += synapse0x14f0d40();
   input += synapse0x14f0d80();
   input += synapse0x14f0dc0();
   input += synapse0x14f0e00();
   input += synapse0x14f0e40();
   input += synapse0x14f0e80();
   input += synapse0x14f0ec0();
   input += synapse0x14f0f00();
   input += synapse0x14f0f40();
   input += synapse0x14f0f80();
   input += synapse0x14f0fc0();
   input += synapse0x14f1000();
   input += synapse0x14f1040();
   input += synapse0x14f1080();
   input += synapse0x14f10c0();
   input += synapse0x14f0b90();
   input += synapse0x14f0bd0();
   input += synapse0x14f1210();
   input += synapse0x14f1250();
   input += synapse0x14f1290();
   input += synapse0x14f12d0();
   input += synapse0x14f1310();
   input += synapse0x14f1350();
   input += synapse0x14f1390();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f0a00() {
   double input = input0x14f0a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f13d0() {
   double input = 0.887629;
   input += synapse0x14f1710();
   input += synapse0x14f1750();
   input += synapse0x14f1790();
   input += synapse0x14f17d0();
   input += synapse0x14f1810();
   input += synapse0x14f1850();
   input += synapse0x14f1890();
   input += synapse0x14f18d0();
   input += synapse0x14f1910();
   input += synapse0x14f1950();
   input += synapse0x14f1990();
   input += synapse0x14f19d0();
   input += synapse0x14f1a10();
   input += synapse0x14f1a50();
   input += synapse0x14f1a90();
   input += synapse0x14f1ad0();
   input += synapse0x14f1560();
   input += synapse0x14f15a0();
   input += synapse0x14f1c20();
   input += synapse0x14f1c60();
   input += synapse0x14f1ca0();
   input += synapse0x14f1ce0();
   input += synapse0x14f1d20();
   input += synapse0x14f1d60();
   input += synapse0x14f1da0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f13d0() {
   double input = input0x14f13d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f1de0() {
   double input = 2.26502;
   input += synapse0x14f2120();
   input += synapse0x14f2160();
   input += synapse0x14f21a0();
   input += synapse0x14f21e0();
   input += synapse0x14f2220();
   input += synapse0x14f2260();
   input += synapse0x14f22a0();
   input += synapse0x14f22e0();
   input += synapse0x14f2320();
   input += synapse0x14f2360();
   input += synapse0x14f23a0();
   input += synapse0x14f23e0();
   input += synapse0x14f2420();
   input += synapse0x14f2460();
   input += synapse0x14f24a0();
   input += synapse0x14f24e0();
   input += synapse0x14f1f70();
   input += synapse0x14f1fb0();
   input += synapse0x14f2630();
   input += synapse0x14f2670();
   input += synapse0x14f26b0();
   input += synapse0x14f26f0();
   input += synapse0x14f2730();
   input += synapse0x14f2770();
   input += synapse0x14f27b0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f1de0() {
   double input = input0x14f1de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f27f0() {
   double input = 0.860036;
   input += synapse0x14f2b30();
   input += synapse0x14f2b70();
   input += synapse0x14f2bb0();
   input += synapse0x14f2bf0();
   input += synapse0x14f2c30();
   input += synapse0x14f2c70();
   input += synapse0x14f2cb0();
   input += synapse0x14f2cf0();
   input += synapse0x14f2d30();
   input += synapse0x14f2d70();
   input += synapse0x14f2db0();
   input += synapse0x14f2df0();
   input += synapse0x14f2e30();
   input += synapse0x14f2e70();
   input += synapse0x14f2eb0();
   input += synapse0x14f2ef0();
   input += synapse0x14f2980();
   input += synapse0x14f29c0();
   input += synapse0x14f3040();
   input += synapse0x14f3080();
   input += synapse0x14f30c0();
   input += synapse0x14f3100();
   input += synapse0x14f3140();
   input += synapse0x14f3180();
   input += synapse0x14f31c0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f27f0() {
   double input = input0x14f27f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f3200() {
   double input = 0.150097;
   input += synapse0x14f3540();
   input += synapse0x14f3580();
   input += synapse0x14f35c0();
   input += synapse0x14f3600();
   input += synapse0x14f3640();
   input += synapse0x14f3680();
   input += synapse0x14f36c0();
   input += synapse0x14f3700();
   input += synapse0x14f3740();
   input += synapse0x14f3780();
   input += synapse0x14f37c0();
   input += synapse0x14f3800();
   input += synapse0x14f3840();
   input += synapse0x14f3880();
   input += synapse0x14f38c0();
   input += synapse0x14f3900();
   input += synapse0x14f3390();
   input += synapse0x14f33d0();
   input += synapse0x14f3a50();
   input += synapse0x14f3a90();
   input += synapse0x14f3ad0();
   input += synapse0x14f3b10();
   input += synapse0x14f3b50();
   input += synapse0x14f3b90();
   input += synapse0x14f3bd0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f3200() {
   double input = input0x14f3200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f3c10() {
   double input = 0.997218;
   input += synapse0x14f3f50();
   input += synapse0x14f3f90();
   input += synapse0x14f3fd0();
   input += synapse0x14f4010();
   input += synapse0x14f4050();
   input += synapse0x14f4090();
   input += synapse0x14f40d0();
   input += synapse0x14f4110();
   input += synapse0x14f4150();
   input += synapse0x14f4190();
   input += synapse0x14f41d0();
   input += synapse0x14f4210();
   input += synapse0x14f4250();
   input += synapse0x14f4290();
   input += synapse0x14f42d0();
   input += synapse0x14f4310();
   input += synapse0x14f3da0();
   input += synapse0x14f3de0();
   input += synapse0x14f4460();
   input += synapse0x14f44a0();
   input += synapse0x14f44e0();
   input += synapse0x14f4520();
   input += synapse0x14f4560();
   input += synapse0x14f45a0();
   input += synapse0x14f45e0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f3c10() {
   double input = input0x14f3c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f4620() {
   double input = 0.523187;
   input += synapse0x14f4960();
   input += synapse0x14f49a0();
   input += synapse0x14f49e0();
   input += synapse0x14f4a20();
   input += synapse0x14f4a60();
   input += synapse0x14f4aa0();
   input += synapse0x14f4ae0();
   input += synapse0x14f4b20();
   input += synapse0x14f4b60();
   input += synapse0x14f4ba0();
   input += synapse0x14f4be0();
   input += synapse0x14f4c20();
   input += synapse0x14f4c60();
   input += synapse0x14f4ca0();
   input += synapse0x14f4ce0();
   input += synapse0x14f4d20();
   input += synapse0x14f47b0();
   input += synapse0x14f47f0();
   input += synapse0x14f4e70();
   input += synapse0x14f4eb0();
   input += synapse0x14f4ef0();
   input += synapse0x14f4f30();
   input += synapse0x14f4f70();
   input += synapse0x14f4fb0();
   input += synapse0x14f4ff0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f4620() {
   double input = input0x14f4620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f5030() {
   double input = -0.400343;
   input += synapse0x14f5370();
   input += synapse0x14f53b0();
   input += synapse0x14f53f0();
   input += synapse0x14f5430();
   input += synapse0x14f5470();
   input += synapse0x14f54b0();
   input += synapse0x14f54f0();
   input += synapse0x14f5530();
   input += synapse0x14f5570();
   input += synapse0x14f55b0();
   input += synapse0x14f55f0();
   input += synapse0x14f5630();
   input += synapse0x14f5670();
   input += synapse0x14f56b0();
   input += synapse0x14f56f0();
   input += synapse0x14f5730();
   input += synapse0x14f51c0();
   input += synapse0x14f5200();
   input += synapse0x14f5880();
   input += synapse0x14f58c0();
   input += synapse0x14f5900();
   input += synapse0x14f5940();
   input += synapse0x14f5980();
   input += synapse0x14f59c0();
   input += synapse0x14f5a00();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f5030() {
   double input = input0x14f5030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::input0x14f5a40() {
   double input = 1.48913;
   input += synapse0x14f5c60();
   input += synapse0x14f5ca0();
   input += synapse0x14f5ce0();
   input += synapse0x14f5d20();
   input += synapse0x14f5d60();
   input += synapse0x14f5da0();
   input += synapse0x14f5de0();
   input += synapse0x14f5e20();
   input += synapse0x14f5e60();
   input += synapse0x14f5ea0();
   input += synapse0x14f5ee0();
   input += synapse0x14f5f20();
   input += synapse0x14f5f60();
   input += synapse0x14f5fa0();
   input += synapse0x14f5fe0();
   input += synapse0x14f6020();
   input += synapse0x14db030();
   input += synapse0x14db070();
   input += synapse0x14f6170();
   input += synapse0x14f61b0();
   input += synapse0x14f61f0();
   input += synapse0x14f6230();
   input += synapse0x14f6270();
   input += synapse0x14f62b0();
   input += synapse0x14f62f0();
   return input;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::neuron0x14f5a40() {
   double input = input0x14f5a40();
   return (input * 35.2946)+156.535;
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13e7140() {
   return (neuron0x14d9ff0()*0.533388);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14c9460() {
   return (neuron0x14da330()*-0.533145);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db410() {
   return (neuron0x14da670()*-0.72166);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db450() {
   return (neuron0x14da9b0()*3.48771);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db490() {
   return (neuron0x14dacf0()*-0.378302);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db810() {
   return (neuron0x14d9ff0()*5.75968);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db850() {
   return (neuron0x14da330()*-1.30874);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db890() {
   return (neuron0x14da670()*-2.65799);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db8d0() {
   return (neuron0x14da9b0()*-0.334867);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db910() {
   return (neuron0x14dacf0()*-1.60799);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbc90() {
   return (neuron0x14d9ff0()*12.2744);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbcd0() {
   return (neuron0x14da330()*-0.0530928);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbd10() {
   return (neuron0x14da670()*5.25518);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbd50() {
   return (neuron0x14da9b0()*-6.63794);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbd90() {
   return (neuron0x14dacf0()*9.30237);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc110() {
   return (neuron0x14d9ff0()*5.70448);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc150() {
   return (neuron0x14da330()*-1.47951);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13d9330() {
   return (neuron0x14da670()*-3.69136);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13d9370() {
   return (neuron0x14da9b0()*11.0954);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc2a0() {
   return (neuron0x14dacf0()*-1.59833);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc620() {
   return (neuron0x14d9ff0()*-3.06608);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc660() {
   return (neuron0x14da330()*-0.00216867);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc6a0() {
   return (neuron0x14da670()*-1.18122);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc6e0() {
   return (neuron0x14da9b0()*-15.1546);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc720() {
   return (neuron0x14dacf0()*-7.361);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcaa0() {
   return (neuron0x14d9ff0()*-2.75719);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcae0() {
   return (neuron0x14da330()*-0.0497293);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcb20() {
   return (neuron0x14da670()*-0.879334);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcb60() {
   return (neuron0x14da9b0()*0.290809);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcba0() {
   return (neuron0x14dacf0()*-0.121759);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcf20() {
   return (neuron0x14d9ff0()*0.766682);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcf60() {
   return (neuron0x14da330()*-0.0522668);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dcfa0() {
   return (neuron0x14da670()*0.193444);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc190() {
   return (neuron0x14da9b0()*4.22844);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc1d0() {
   return (neuron0x14dacf0()*-0.821571);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd4a0() {
   return (neuron0x14d9ff0()*3.45955);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd4e0() {
   return (neuron0x14da330()*-0.824552);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd520() {
   return (neuron0x14da670()*-0.0231887);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd560() {
   return (neuron0x14da9b0()*2.18274);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd5a0() {
   return (neuron0x14dacf0()*0.416525);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd920() {
   return (neuron0x14d9ff0()*-1.03292);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd960() {
   return (neuron0x14da330()*0.418983);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd9a0() {
   return (neuron0x14da670()*0.413248);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd9e0() {
   return (neuron0x14da9b0()*-5.59964);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dda20() {
   return (neuron0x14dacf0()*0.262418);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddda0() {
   return (neuron0x14d9ff0()*-0.21978);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddde0() {
   return (neuron0x14da330()*0.916119);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dde20() {
   return (neuron0x14da670()*0.0790189);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dde60() {
   return (neuron0x14da9b0()*-7.50323);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddea0() {
   return (neuron0x14dacf0()*0.40952);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de220() {
   return (neuron0x14d9ff0()*2.57322);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de260() {
   return (neuron0x14da330()*0.0491626);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de2a0() {
   return (neuron0x14da670()*0.357058);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de2e0() {
   return (neuron0x14da9b0()*-1.15727);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de320() {
   return (neuron0x14dacf0()*1.95407);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13d9180() {
   return (neuron0x14d9ff0()*-6.81728);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13d91c0() {
   return (neuron0x14da330()*1.16582);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de7b0() {
   return (neuron0x14da670()*2.55876);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de7f0() {
   return (neuron0x14da9b0()*0.12944);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de830() {
   return (neuron0x14dacf0()*1.64082);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14debb0() {
   return (neuron0x14d9ff0()*0.699176);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14debf0() {
   return (neuron0x14da330()*-0.41008);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dec30() {
   return (neuron0x14da670()*-0.67393);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dec70() {
   return (neuron0x14da9b0()*4.84791);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14decb0() {
   return (neuron0x14dacf0()*-0.727678);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13d9950() {
   return (neuron0x14d9ff0()*0.00533565);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd170() {
   return (neuron0x14da330()*-0.000226585);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd1b0() {
   return (neuron0x14da670()*0.0412274);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df100() {
   return (neuron0x14da9b0()*-3.93515);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df140() {
   return (neuron0x14dacf0()*-3.58764);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df4c0() {
   return (neuron0x14d9ff0()*0.0830359);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df500() {
   return (neuron0x14da330()*0.0187028);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df540() {
   return (neuron0x14da670()*-0.200563);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df580() {
   return (neuron0x14da9b0()*19.8816);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df5c0() {
   return (neuron0x14dacf0()*12.429);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df940() {
   return (neuron0x14d9ff0()*-1.94);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14da210() {
   return (neuron0x14da330()*-0.00157121);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14da250() {
   return (neuron0x14da670()*-0.580508);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14da550() {
   return (neuron0x14da9b0()*7.66031);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14da590() {
   return (neuron0x14dacf0()*-1.2275);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0060() {
   return (neuron0x14d9ff0()*2.51018);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e00a0() {
   return (neuron0x14da330()*0.042895);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e00e0() {
   return (neuron0x14da670()*1.72206);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0120() {
   return (neuron0x14da9b0()*2.26245);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0160() {
   return (neuron0x14dacf0()*1.5284);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e04e0() {
   return (neuron0x14d9ff0()*-0.117658);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0520() {
   return (neuron0x14da330()*-0.41872);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0560() {
   return (neuron0x14da670()*-2.57553);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e05a0() {
   return (neuron0x14da9b0()*14.9904);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e05e0() {
   return (neuron0x14dacf0()*0.502457);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0960() {
   return (neuron0x14d9ff0()*-0.420134);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e09a0() {
   return (neuron0x14da330()*-0.00325228);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e09e0() {
   return (neuron0x14da670()*-0.422089);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0a20() {
   return (neuron0x14da9b0()*-6.01509);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0a60() {
   return (neuron0x14dacf0()*-2.69839);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0de0() {
   return (neuron0x14d9ff0()*0.616701);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0e20() {
   return (neuron0x14da330()*-0.0681261);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0e60() {
   return (neuron0x14da670()*0.847434);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0ea0() {
   return (neuron0x14da9b0()*-5.50364);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0ee0() {
   return (neuron0x14dacf0()*-0.385739);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1260() {
   return (neuron0x14d9ff0()*-1.31325);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e12a0() {
   return (neuron0x14da330()*-0.0354643);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e12e0() {
   return (neuron0x14da670()*0.968382);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1320() {
   return (neuron0x14da9b0()*-3.81695);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1360() {
   return (neuron0x14dacf0()*0.669475);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e16e0() {
   return (neuron0x14d9ff0()*-1.58873);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1720() {
   return (neuron0x14da330()*0.470369);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1760() {
   return (neuron0x14da670()*1.11645);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e17a0() {
   return (neuron0x14da9b0()*-2.57025);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e17e0() {
   return (neuron0x14dacf0()*0.55291);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1b60() {
   return (neuron0x14d9ff0()*-0.101975);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1ba0() {
   return (neuron0x14da330()*-0.0303526);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1be0() {
   return (neuron0x14da670()*0.305589);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1c20() {
   return (neuron0x14da9b0()*-26.904);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1c60() {
   return (neuron0x14dacf0()*-15.1075);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1fe0() {
   return (neuron0x14d9ff0()*7.13229);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2020() {
   return (neuron0x14da330()*0.0201785);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2060() {
   return (neuron0x14da670()*3.6815);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e20a0() {
   return (neuron0x14da9b0()*2.24453);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e20e0() {
   return (neuron0x14dacf0()*3.90622);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2460() {
   return (neuron0x14d9ff0()*-0.166814);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e24a0() {
   return (neuron0x14da330()*0.00880692);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e24e0() {
   return (neuron0x14da670()*0.0122579);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2520() {
   return (neuron0x14da9b0()*-1.78794);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2560() {
   return (neuron0x14dacf0()*3.31561);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc080() {
   return (neuron0x14db160()*-0.814588);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc0c0() {
   return (neuron0x14db4d0()*1.74746);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc590() {
   return (neuron0x14db950()*9.95132);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc5d0() {
   return (neuron0x14dbdd0()*-0.874012);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dca10() {
   return (neuron0x14dc2e0()*-9.59966);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dca50() {
   return (neuron0x14dc760()*0.580138);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dce90() {
   return (neuron0x14dcbe0()*-2.66139);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dced0() {
   return (neuron0x14dd1f0()*-1.07975);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd410() {
   return (neuron0x14dd5e0()*-0.374427);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd450() {
   return (neuron0x14dda60()*-1.85778);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd890() {
   return (neuron0x14ddee0()*-5.80574);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd8d0() {
   return (neuron0x14de360()*0.639444);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddd10() {
   return (neuron0x14de870()*1.72382);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddd50() {
   return (neuron0x14dcfe0()*-2.36984);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de190() {
   return (neuron0x14df180()*14.9517);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de1d0() {
   return (neuron0x14df600()*7.0392);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de610() {
   return (neuron0x14dfed0()*0.58192);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de650() {
   return (neuron0x14e01a0()*3.02981);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14deb20() {
   return (neuron0x14e0620()*-3.04486);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14deb60() {
   return (neuron0x14e0aa0()*-1.47726);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df430() {
   return (neuron0x14e0f20()*-1.96569);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df470() {
   return (neuron0x14e13a0()*0.913915);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df8b0() {
   return (neuron0x14e1820()*-5.94134);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df8f0() {
   return (neuron0x14e1ca0()*10.8326);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14daf10() {
   return (neuron0x14e2120()*-1.40287);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14def90() {
   return (neuron0x14db160()*0.354566);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14defd0() {
   return (neuron0x14db4d0()*-1.20439);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df010() {
   return (neuron0x14db950()*0.395277);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df050() {
   return (neuron0x14dbdd0()*0.386612);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df090() {
   return (neuron0x14dc2e0()*0.276669);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14daf50() {
   return (neuron0x14dc760()*0.195);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e11d0() {
   return (neuron0x14dcbe0()*1.27521);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1210() {
   return (neuron0x14dd1f0()*-0.0635922);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1650() {
   return (neuron0x14dd5e0()*0.149581);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1690() {
   return (neuron0x14dda60()*0.765471);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1ad0() {
   return (neuron0x14ddee0()*-0.154029);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1b10() {
   return (neuron0x14de360()*-0.419121);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1f50() {
   return (neuron0x14de870()*-1.12597);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1f90() {
   return (neuron0x14dcfe0()*-0.740205);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e23d0() {
   return (neuron0x14df180()*-1.37413);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2410() {
   return (neuron0x14df600()*-0.0724712);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db380() {
   return (neuron0x14dfed0()*0.469969);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db3c0() {
   return (neuron0x14e01a0()*-1.95616);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0450() {
   return (neuron0x14e0620()*-2.39307);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0490() {
   return (neuron0x14e0aa0()*0.275477);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13e7210() {
   return (neuron0x14e0f20()*0.32993);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x13e7250() {
   return (neuron0x14e13a0()*-1.19256);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4ae0() {
   return (neuron0x14e1820()*-2.31516);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4b20() {
   return (neuron0x14e1ca0()*-0.444956);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4b60() {
   return (neuron0x14e2120()*-0.00963022);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de6a0() {
   return (neuron0x14db160()*0.0846022);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de6e0() {
   return (neuron0x14db4d0()*0.286171);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de720() {
   return (neuron0x14db950()*12.053);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de760() {
   return (neuron0x14dbdd0()*-0.23632);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e50f0() {
   return (neuron0x14dc2e0()*-8.70374);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5130() {
   return (neuron0x14dc760()*-0.810085);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5170() {
   return (neuron0x14dcbe0()*-0.924598);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e51b0() {
   return (neuron0x14dd1f0()*-0.346645);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e51f0() {
   return (neuron0x14dd5e0()*-0.631645);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5230() {
   return (neuron0x14dda60()*-1.21541);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5270() {
   return (neuron0x14ddee0()*-4.16547);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e52b0() {
   return (neuron0x14de360()*-0.555618);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e52f0() {
   return (neuron0x14de870()*0.458856);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5330() {
   return (neuron0x14dcfe0()*4.45394);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5370() {
   return (neuron0x14df180()*16.6296);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e53b0() {
   return (neuron0x14df600()*7.67087);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4d30() {
   return (neuron0x14dfed0()*-2.31938);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4d70() {
   return (neuron0x14e01a0()*0.117814);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5500() {
   return (neuron0x14e0620()*-8.3184);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5540() {
   return (neuron0x14e0aa0()*0.083321);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5580() {
   return (neuron0x14e0f20()*-1.16249);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e55c0() {
   return (neuron0x14e13a0()*-0.467953);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5600() {
   return (neuron0x14e1820()*-10.3507);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5640() {
   return (neuron0x14e1ca0()*12.1013);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5680() {
   return (neuron0x14e2120()*0.787382);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5a00() {
   return (neuron0x14db160()*-0.525277);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5a40() {
   return (neuron0x14db4d0()*2.54717);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5a80() {
   return (neuron0x14db950()*-0.811002);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5ac0() {
   return (neuron0x14dbdd0()*-1.07662);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5b00() {
   return (neuron0x14dc2e0()*1.89421);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5b40() {
   return (neuron0x14dc760()*-0.303073);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5b80() {
   return (neuron0x14dcbe0()*-2.52364);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5bc0() {
   return (neuron0x14dd1f0()*-0.77614);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5c00() {
   return (neuron0x14dd5e0()*-1.23371);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5c40() {
   return (neuron0x14dda60()*-3.05279);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5c80() {
   return (neuron0x14ddee0()*-1.79729);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5cc0() {
   return (neuron0x14de360()*-0.660945);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5d00() {
   return (neuron0x14de870()*2.18013);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5d40() {
   return (neuron0x14dcfe0()*2.32535);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5d80() {
   return (neuron0x14df180()*1.41761);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5dc0() {
   return (neuron0x14df600()*0.581652);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5850() {
   return (neuron0x14dfed0()*-1.31142);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5890() {
   return (neuron0x14e01a0()*2.58653);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5f10() {
   return (neuron0x14e0620()*1.15642);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5f50() {
   return (neuron0x14e0aa0()*-1.24437);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5f90() {
   return (neuron0x14e0f20()*-1.9357);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e5fd0() {
   return (neuron0x14e13a0()*0.577776);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6010() {
   return (neuron0x14e1820()*0.363065);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6050() {
   return (neuron0x14e1ca0()*0.888349);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6090() {
   return (neuron0x14e2120()*-1.40559);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6410() {
   return (neuron0x14db160()*0.285142);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6450() {
   return (neuron0x14db4d0()*-1.69025);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6490() {
   return (neuron0x14db950()*6.26005);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e64d0() {
   return (neuron0x14dbdd0()*1.60665);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6510() {
   return (neuron0x14dc2e0()*-7.56862);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6550() {
   return (neuron0x14dc760()*1.30468);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6590() {
   return (neuron0x14dcbe0()*2.87054);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e65d0() {
   return (neuron0x14dd1f0()*2.20134);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6610() {
   return (neuron0x14dd5e0()*2.0224);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6650() {
   return (neuron0x14dda60()*3.86075);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6690() {
   return (neuron0x14ddee0()*-0.3836);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e66d0() {
   return (neuron0x14de360()*0.69536);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6710() {
   return (neuron0x14de870()*-2.00058);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6750() {
   return (neuron0x14dcfe0()*0.909566);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6790() {
   return (neuron0x14df180()*-3.73731);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e67d0() {
   return (neuron0x14df600()*-2.114);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6260() {
   return (neuron0x14dfed0()*0.923426);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e62a0() {
   return (neuron0x14e01a0()*-1.86558);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6920() {
   return (neuron0x14e0620()*0.717563);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6960() {
   return (neuron0x14e0aa0()*1.71351);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e69a0() {
   return (neuron0x14e0f20()*3.56438);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e69e0() {
   return (neuron0x14e13a0()*0.369667);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6a20() {
   return (neuron0x14e1820()*-12.7805);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6a60() {
   return (neuron0x14e1ca0()*0.278054);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6aa0() {
   return (neuron0x14e2120()*1.19786);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6e20() {
   return (neuron0x14db160()*-0.0254782);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6e60() {
   return (neuron0x14db4d0()*1.3685);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6ea0() {
   return (neuron0x14db950()*-1.03326);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6ee0() {
   return (neuron0x14dbdd0()*-0.64553);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6f20() {
   return (neuron0x14dc2e0()*1.51495);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6f60() {
   return (neuron0x14dc760()*-0.172461);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6fa0() {
   return (neuron0x14dcbe0()*-1.98252);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e41c0() {
   return (neuron0x14dd1f0()*-0.103633);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4200() {
   return (neuron0x14dd5e0()*0.0831963);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4240() {
   return (neuron0x14dda60()*-0.754221);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4280() {
   return (neuron0x14ddee0()*0.404882);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e42c0() {
   return (neuron0x14de360()*0.405743);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4300() {
   return (neuron0x14de870()*1.50951);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4340() {
   return (neuron0x14dcfe0()*2.51472);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4380() {
   return (neuron0x14df180()*0.721064);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e43c0() {
   return (neuron0x14df600()*0.00266949);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6c70() {
   return (neuron0x14dfed0()*-0.481813);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e6cb0() {
   return (neuron0x14e01a0()*2.49763);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4510() {
   return (neuron0x14e0620()*3.86789);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4550() {
   return (neuron0x14e0aa0()*0.290869);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4590() {
   return (neuron0x14e0f20()*-0.468683);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e45d0() {
   return (neuron0x14e13a0()*1.31332);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4610() {
   return (neuron0x14e1820()*-0.835682);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4650() {
   return (neuron0x14e1ca0()*-0.040728);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4690() {
   return (neuron0x14e2120()*0.323099);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4980() {
   return (neuron0x14db160()*-0.431426);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8080() {
   return (neuron0x14db4d0()*0.116688);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e80c0() {
   return (neuron0x14db950()*1.56974);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8100() {
   return (neuron0x14dbdd0()*0.171419);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8140() {
   return (neuron0x14dc2e0()*-0.46955);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8180() {
   return (neuron0x14dc760()*0.322308);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e81c0() {
   return (neuron0x14dcbe0()*0.196309);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8200() {
   return (neuron0x14dd1f0()*0.171205);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8240() {
   return (neuron0x14dd5e0()*0.0383611);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8280() {
   return (neuron0x14dda60()*0.430702);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e82c0() {
   return (neuron0x14ddee0()*-0.214073);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8300() {
   return (neuron0x14de360()*0.321853);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8340() {
   return (neuron0x14de870()*0.265858);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8380() {
   return (neuron0x14dcfe0()*-0.97213);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e83c0() {
   return (neuron0x14df180()*-0.99905);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8400() {
   return (neuron0x14df600()*-0.991799);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e4860() {
   return (neuron0x14dfed0()*0.941213);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e48a0() {
   return (neuron0x14e01a0()*0.382962);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8550() {
   return (neuron0x14e0620()*2.48151);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8590() {
   return (neuron0x14e0aa0()*1.5196);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e85d0() {
   return (neuron0x14e0f20()*0.146264);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8610() {
   return (neuron0x14e13a0()*0.016012);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8650() {
   return (neuron0x14e1820()*-1.86072);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8690() {
   return (neuron0x14e1ca0()*-1.6035);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e86d0() {
   return (neuron0x14e2120()*1.5017);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8a50() {
   return (neuron0x14db160()*-0.0142092);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8a90() {
   return (neuron0x14db4d0()*-0.603679);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8ad0() {
   return (neuron0x14db950()*-5.94457);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8b10() {
   return (neuron0x14dbdd0()*0.297453);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8b50() {
   return (neuron0x14dc2e0()*10.3459);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8b90() {
   return (neuron0x14dc760()*-1.60675);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8bd0() {
   return (neuron0x14dcbe0()*0.845765);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8c10() {
   return (neuron0x14dd1f0()*-0.371091);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8c50() {
   return (neuron0x14dd5e0()*-2.26154);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8c90() {
   return (neuron0x14dda60()*-1.40113);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8cd0() {
   return (neuron0x14ddee0()*0.584563);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8d10() {
   return (neuron0x14de360()*-2.09044);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8d50() {
   return (neuron0x14de870()*-1.54368);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8d90() {
   return (neuron0x14dcfe0()*-0.473807);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8dd0() {
   return (neuron0x14df180()*6.79237);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8e10() {
   return (neuron0x14df600()*-0.60481);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e88a0() {
   return (neuron0x14dfed0()*0.632954);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e88e0() {
   return (neuron0x14e01a0()*0.0786693);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8f60() {
   return (neuron0x14e0620()*-3.63446);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8fa0() {
   return (neuron0x14e0aa0()*-2.6631);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e8fe0() {
   return (neuron0x14e0f20()*-0.854636);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9020() {
   return (neuron0x14e13a0()*-2.58254);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9060() {
   return (neuron0x14e1820()*15.6613);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e90a0() {
   return (neuron0x14e1ca0()*-1.13677);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e90e0() {
   return (neuron0x14e2120()*-2.97369);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9460() {
   return (neuron0x14db160()*-0.234349);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e94a0() {
   return (neuron0x14db4d0()*2.78189);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e94e0() {
   return (neuron0x14db950()*-0.0997186);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9520() {
   return (neuron0x14dbdd0()*-1.08536);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9560() {
   return (neuron0x14dc2e0()*0.267057);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e95a0() {
   return (neuron0x14dc760()*-0.0977377);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e95e0() {
   return (neuron0x14dcbe0()*-2.59103);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9620() {
   return (neuron0x14dd1f0()*-0.153502);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9660() {
   return (neuron0x14dd5e0()*-0.194444);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e96a0() {
   return (neuron0x14dda60()*-1.44789);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e96e0() {
   return (neuron0x14ddee0()*-0.420403);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9720() {
   return (neuron0x14de360()*0.071351);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9760() {
   return (neuron0x14de870()*1.81165);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e97a0() {
   return (neuron0x14dcfe0()*7.60123);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e97e0() {
   return (neuron0x14df180()*7.27743);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9820() {
   return (neuron0x14df600()*-0.553931);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e92b0() {
   return (neuron0x14dfed0()*-0.388406);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e92f0() {
   return (neuron0x14e01a0()*3.16701);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9970() {
   return (neuron0x14e0620()*1.70522);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e99b0() {
   return (neuron0x14e0aa0()*1.00558);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e99f0() {
   return (neuron0x14e0f20()*-1.4133);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9a30() {
   return (neuron0x14e13a0()*1.56585);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9a70() {
   return (neuron0x14e1820()*0.321844);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9ab0() {
   return (neuron0x14e1ca0()*-0.0737368);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9af0() {
   return (neuron0x14e2120()*-2.02825);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9e70() {
   return (neuron0x14db160()*-0.307841);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9eb0() {
   return (neuron0x14db4d0()*2.27448);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9ef0() {
   return (neuron0x14db950()*-1.71734);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9f30() {
   return (neuron0x14dbdd0()*-1.24116);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9f70() {
   return (neuron0x14dc2e0()*0.309905);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9fb0() {
   return (neuron0x14dc760()*-0.948815);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9ff0() {
   return (neuron0x14dcbe0()*-2.52968);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea030() {
   return (neuron0x14dd1f0()*0.398612);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea070() {
   return (neuron0x14dd5e0()*-1.33196);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea0b0() {
   return (neuron0x14dda60()*-2.95572);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea0f0() {
   return (neuron0x14ddee0()*-1.77975);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea130() {
   return (neuron0x14de360()*-1.22483);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea170() {
   return (neuron0x14de870()*2.29569);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea1b0() {
   return (neuron0x14dcfe0()*1.47137);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea1f0() {
   return (neuron0x14df180()*0.876255);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea230() {
   return (neuron0x14df600()*0.394389);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9cc0() {
   return (neuron0x14dfed0()*-1.78984);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e9d00() {
   return (neuron0x14e01a0()*2.38935);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea380() {
   return (neuron0x14e0620()*1.52707);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea3c0() {
   return (neuron0x14e0aa0()*-0.883573);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea400() {
   return (neuron0x14e0f20()*-2.2643);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea440() {
   return (neuron0x14e13a0()*-0.10115);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea480() {
   return (neuron0x14e1820()*1.50688);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea4c0() {
   return (neuron0x14e1ca0()*0.208325);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea500() {
   return (neuron0x14e2120()*-1.69897);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea880() {
   return (neuron0x14db160()*0.9591);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea8c0() {
   return (neuron0x14db4d0()*-2.42347);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea900() {
   return (neuron0x14db950()*-0.521899);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea940() {
   return (neuron0x14dbdd0()*0.786125);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea980() {
   return (neuron0x14dc2e0()*-1.69147);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea9c0() {
   return (neuron0x14dc760()*-0.661614);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eaa00() {
   return (neuron0x14dcbe0()*1.70952);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eaa40() {
   return (neuron0x14dd1f0()*-0.548203);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eaa80() {
   return (neuron0x14dd5e0()*-0.418452);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eaac0() {
   return (neuron0x14dda60()*2.27266);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eab00() {
   return (neuron0x14ddee0()*0.568529);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eab40() {
   return (neuron0x14de360()*-0.922825);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eab80() {
   return (neuron0x14de870()*-1.3297);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eabc0() {
   return (neuron0x14dcfe0()*-3.00074);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eac00() {
   return (neuron0x14df180()*-3.42587);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eac40() {
   return (neuron0x14df600()*-2.19909);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea6d0() {
   return (neuron0x14dfed0()*0.830329);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ea710() {
   return (neuron0x14e01a0()*-3.7431);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ead90() {
   return (neuron0x14e0620()*-2.61606);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eadd0() {
   return (neuron0x14e0aa0()*-0.0535805);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eae10() {
   return (neuron0x14e0f20()*0.98088);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eae50() {
   return (neuron0x14e13a0()*-2.03168);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eae90() {
   return (neuron0x14e1820()*-2.2532);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eaed0() {
   return (neuron0x14e1ca0()*-1.17598);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eaf10() {
   return (neuron0x14e2120()*0.535983);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb290() {
   return (neuron0x14db160()*-0.927407);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb2d0() {
   return (neuron0x14db4d0()*2.96455);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb310() {
   return (neuron0x14db950()*0.8761);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb350() {
   return (neuron0x14dbdd0()*-1.15834);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb390() {
   return (neuron0x14dc2e0()*2.16423);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb3d0() {
   return (neuron0x14dc760()*1.27176);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb410() {
   return (neuron0x14dcbe0()*-2.2498);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb450() {
   return (neuron0x14dd1f0()*0.682229);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb490() {
   return (neuron0x14dd5e0()*-0.662002);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb4d0() {
   return (neuron0x14dda60()*-2.29488);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb510() {
   return (neuron0x14ddee0()*-0.85794);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb550() {
   return (neuron0x14de360()*0.853333);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb590() {
   return (neuron0x14de870()*2.08813);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb5d0() {
   return (neuron0x14dcfe0()*2.97981);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb610() {
   return (neuron0x14df180()*4.03774);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb650() {
   return (neuron0x14df600()*1.66255);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb0e0() {
   return (neuron0x14dfed0()*-1.16257);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb120() {
   return (neuron0x14e01a0()*4.00369);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb7a0() {
   return (neuron0x14e0620()*2.50551);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb7e0() {
   return (neuron0x14e0aa0()*-0.456268);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb820() {
   return (neuron0x14e0f20()*-1.707);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb860() {
   return (neuron0x14e13a0()*2.09179);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb8a0() {
   return (neuron0x14e1820()*2.03191);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb8e0() {
   return (neuron0x14e1ca0()*1.79869);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eb920() {
   return (neuron0x14e2120()*-0.320307);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebca0() {
   return (neuron0x14db160()*-0.333812);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebce0() {
   return (neuron0x14db4d0()*1.15654);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebd20() {
   return (neuron0x14db950()*-2.38483);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebd60() {
   return (neuron0x14dbdd0()*-1.32819);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebda0() {
   return (neuron0x14dc2e0()*-0.114436);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebde0() {
   return (neuron0x14dc760()*-1.65166);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebe20() {
   return (neuron0x14dcbe0()*-3.27562);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebe60() {
   return (neuron0x14dd1f0()*-1.46172);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebea0() {
   return (neuron0x14dd5e0()*-0.939761);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebee0() {
   return (neuron0x14dda60()*-2.8385);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebf20() {
   return (neuron0x14ddee0()*-1.51067);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebf60() {
   return (neuron0x14de360()*-2.05505);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebfa0() {
   return (neuron0x14de870()*0.502194);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebfe0() {
   return (neuron0x14dcfe0()*0.199853);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec020() {
   return (neuron0x14df180()*0.0369969);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec060() {
   return (neuron0x14df600()*-0.13858);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebaf0() {
   return (neuron0x14dfed0()*-1.19573);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ebb30() {
   return (neuron0x14e01a0()*1.05542);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec1b0() {
   return (neuron0x14e0620()*0.443964);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec1f0() {
   return (neuron0x14e0aa0()*-0.75898);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec230() {
   return (neuron0x14e0f20()*-2.16755);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec270() {
   return (neuron0x14e13a0()*-0.744288);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec2b0() {
   return (neuron0x14e1820()*-0.98699);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec2f0() {
   return (neuron0x14e1ca0()*-0.904343);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec330() {
   return (neuron0x14e2120()*-2.36413);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec6b0() {
   return (neuron0x14db160()*-0.728248);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec6f0() {
   return (neuron0x14db4d0()*0.60111);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec730() {
   return (neuron0x14db950()*-2.6287);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec770() {
   return (neuron0x14dbdd0()*-0.0731637);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec7b0() {
   return (neuron0x14dc2e0()*1.28125);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec7f0() {
   return (neuron0x14dc760()*-1.51197);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec830() {
   return (neuron0x14dcbe0()*-1.16214);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec870() {
   return (neuron0x14dd1f0()*0.239771);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec8b0() {
   return (neuron0x14dd5e0()*-1.44638);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec8f0() {
   return (neuron0x14dda60()*-2.24982);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec930() {
   return (neuron0x14ddee0()*0.392547);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec970() {
   return (neuron0x14de360()*-0.765295);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec9b0() {
   return (neuron0x14de870()*0.231474);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec9f0() {
   return (neuron0x14dcfe0()*0.860109);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eca30() {
   return (neuron0x14df180()*4.62794);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eca70() {
   return (neuron0x14df600()*0.0370275);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec500() {
   return (neuron0x14dfed0()*-0.814609);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ec540() {
   return (neuron0x14e01a0()*1.47134);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecbc0() {
   return (neuron0x14e0620()*-2.77482);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecc00() {
   return (neuron0x14e0aa0()*0.344091);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecc40() {
   return (neuron0x14e0f20()*-1.21768);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecc80() {
   return (neuron0x14e13a0()*-0.583217);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14eccc0() {
   return (neuron0x14e1820()*5.0089);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecd00() {
   return (neuron0x14e1ca0()*2.27456);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecd40() {
   return (neuron0x14e2120()*0.176464);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed0c0() {
   return (neuron0x14db160()*0.126111);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed100() {
   return (neuron0x14db4d0()*-0.911805);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed140() {
   return (neuron0x14db950()*1.36135);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed180() {
   return (neuron0x14dbdd0()*1.49684);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed1c0() {
   return (neuron0x14dc2e0()*-0.121278);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed200() {
   return (neuron0x14dc760()*1.08027);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed240() {
   return (neuron0x14dcbe0()*1.93654);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed280() {
   return (neuron0x14dd1f0()*1.00921);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed2c0() {
   return (neuron0x14dd5e0()*0.461303);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed300() {
   return (neuron0x14dda60()*2.24985);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed340() {
   return (neuron0x14ddee0()*1.28177);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed380() {
   return (neuron0x14de360()*0.400442);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed3c0() {
   return (neuron0x14de870()*-0.762153);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed400() {
   return (neuron0x14dcfe0()*-0.429283);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed440() {
   return (neuron0x14df180()*-0.645713);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed480() {
   return (neuron0x14df600()*-0.775929);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecf10() {
   return (neuron0x14dfed0()*0.401753);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ecf50() {
   return (neuron0x14e01a0()*-1.0405);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed5d0() {
   return (neuron0x14e0620()*-0.768739);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed610() {
   return (neuron0x14e0aa0()*0.502064);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed650() {
   return (neuron0x14e0f20()*1.29317);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed690() {
   return (neuron0x14e13a0()*0.326213);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed6d0() {
   return (neuron0x14e1820()*0.260993);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed710() {
   return (neuron0x14e1ca0()*0.0967653);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed750() {
   return (neuron0x14e2120()*0.747094);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14edad0() {
   return (neuron0x14db160()*-0.802051);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db2f0() {
   return (neuron0x14db4d0()*-0.175938);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db330() {
   return (neuron0x14db950()*-0.340497);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db6f0() {
   return (neuron0x14dbdd0()*-0.221116);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db730() {
   return (neuron0x14dc2e0()*-1.40763);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbb70() {
   return (neuron0x14dc760()*1.60981);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbbb0() {
   return (neuron0x14dcbe0()*0.205318);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dbff0() {
   return (neuron0x14dd1f0()*0.734105);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc030() {
   return (neuron0x14dd5e0()*-0.397289);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc500() {
   return (neuron0x14dda60()*-0.334612);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc540() {
   return (neuron0x14ddee0()*-0.485698);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc980() {
   return (neuron0x14de360()*0.935342);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dc9c0() {
   return (neuron0x14de870()*0.462068);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dce00() {
   return (neuron0x14dcfe0()*1.11001);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dce40() {
   return (neuron0x14df180()*5.31883);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd380() {
   return (neuron0x14df600()*-0.506409);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd3c0() {
   return (neuron0x14dfed0()*-0.165325);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd800() {
   return (neuron0x14e01a0()*2.52596);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dd840() {
   return (neuron0x14e0620()*0.968079);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddc80() {
   return (neuron0x14e0aa0()*-0.570534);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ddcc0() {
   return (neuron0x14e0f20()*-0.00466128);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de100() {
   return (neuron0x14e13a0()*0.670734);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de140() {
   return (neuron0x14e1820()*1.93639);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de580() {
   return (neuron0x14e1ca0()*0.745342);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14de5c0() {
   return (neuron0x14e2120()*-0.579275);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e7f40() {
   return (neuron0x14db160()*0.0544541);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e7f80() {
   return (neuron0x14db4d0()*-0.162347);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df820() {
   return (neuron0x14db950()*-0.472843);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14df860() {
   return (neuron0x14dbdd0()*-0.177406);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed920() {
   return (neuron0x14dc2e0()*0.131589);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14ed960() {
   return (neuron0x14dc760()*0.155617);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dabd0() {
   return (neuron0x14dcbe0()*-0.032419);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dac10() {
   return (neuron0x14dd1f0()*-0.267836);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e03c0() {
   return (neuron0x14dd5e0()*-0.457169);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0400() {
   return (neuron0x14dda60()*-0.219);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0840() {
   return (neuron0x14ddee0()*-0.0352171);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0880() {
   return (neuron0x14de360()*-0.087263);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0cc0() {
   return (neuron0x14de870()*0.411514);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e0d00() {
   return (neuron0x14dcfe0()*1.21497);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1140() {
   return (neuron0x14df180()*-3.61503);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1180() {
   return (neuron0x14df600()*-0.433013);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e15c0() {
   return (neuron0x14dfed0()*0.48816);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1600() {
   return (neuron0x14e01a0()*0.653818);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1a40() {
   return (neuron0x14e0620()*0.382457);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1a80() {
   return (neuron0x14e0aa0()*-1.10377);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1ec0() {
   return (neuron0x14e0f20()*-0.696597);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e1f00() {
   return (neuron0x14e13a0()*0.326238);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2340() {
   return (neuron0x14e1820()*-1.409);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14e2380() {
   return (neuron0x14e1ca0()*-0.0564949);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dea90() {
   return (neuron0x14e2120()*2.6822);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14dead0() {
   return (neuron0x14db160()*0.327183);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0d40() {
   return (neuron0x14db4d0()*-1.54791);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0d80() {
   return (neuron0x14db950()*0.0333691);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0dc0() {
   return (neuron0x14dbdd0()*0.756235);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0e00() {
   return (neuron0x14dc2e0()*-1.5807);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0e40() {
   return (neuron0x14dc760()*-0.667584);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0e80() {
   return (neuron0x14dcbe0()*0.847763);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0ec0() {
   return (neuron0x14dd1f0()*0.0427058);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0f00() {
   return (neuron0x14dd5e0()*0.19728);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0f40() {
   return (neuron0x14dda60()*-0.0150998);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0f80() {
   return (neuron0x14ddee0()*0.693176);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0fc0() {
   return (neuron0x14de360()*-0.861052);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1000() {
   return (neuron0x14de870()*-2.12205);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1040() {
   return (neuron0x14dcfe0()*-1.17382);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1080() {
   return (neuron0x14df180()*-1.64411);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f10c0() {
   return (neuron0x14df600()*-0.810924);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0b90() {
   return (neuron0x14dfed0()*0.654368);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f0bd0() {
   return (neuron0x14e01a0()*-0.605441);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1210() {
   return (neuron0x14e0620()*-1.10135);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1250() {
   return (neuron0x14e0aa0()*-0.560146);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1290() {
   return (neuron0x14e0f20()*0.543782);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f12d0() {
   return (neuron0x14e13a0()*-1.47846);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1310() {
   return (neuron0x14e1820()*-1.24702);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1350() {
   return (neuron0x14e1ca0()*-0.381431);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1390() {
   return (neuron0x14e2120()*-0.211864);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1710() {
   return (neuron0x14db160()*-0.0463651);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1750() {
   return (neuron0x14db4d0()*-0.552632);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1790() {
   return (neuron0x14db950()*0.74892);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f17d0() {
   return (neuron0x14dbdd0()*0.141901);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1810() {
   return (neuron0x14dc2e0()*0.0722455);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1850() {
   return (neuron0x14dc760()*0.783679);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1890() {
   return (neuron0x14dcbe0()*0.17302);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f18d0() {
   return (neuron0x14dd1f0()*-0.412128);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1910() {
   return (neuron0x14dd5e0()*0.273861);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1950() {
   return (neuron0x14dda60()*1.28484);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1990() {
   return (neuron0x14ddee0()*0.375878);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f19d0() {
   return (neuron0x14de360()*0.0295566);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1a10() {
   return (neuron0x14de870()*-0.479468);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1a50() {
   return (neuron0x14dcfe0()*0.026559);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1a90() {
   return (neuron0x14df180()*-0.616461);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1ad0() {
   return (neuron0x14df600()*-0.150083);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1560() {
   return (neuron0x14dfed0()*1.0815);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f15a0() {
   return (neuron0x14e01a0()*-0.886582);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1c20() {
   return (neuron0x14e0620()*0.0849177);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1c60() {
   return (neuron0x14e0aa0()*1.10539);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1ca0() {
   return (neuron0x14e0f20()*0.965862);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1ce0() {
   return (neuron0x14e13a0()*0.148504);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1d20() {
   return (neuron0x14e1820()*-0.690105);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1d60() {
   return (neuron0x14e1ca0()*0.0896347);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1da0() {
   return (neuron0x14e2120()*0.820595);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2120() {
   return (neuron0x14db160()*0.832828);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2160() {
   return (neuron0x14db4d0()*-2.09302);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f21a0() {
   return (neuron0x14db950()*7.76729);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f21e0() {
   return (neuron0x14dbdd0()*0.955675);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2220() {
   return (neuron0x14dc2e0()*-1.36827);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2260() {
   return (neuron0x14dc760()*1.61527);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f22a0() {
   return (neuron0x14dcbe0()*2.80511);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f22e0() {
   return (neuron0x14dd1f0()*0.0174445);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2320() {
   return (neuron0x14dd5e0()*2.96068);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2360() {
   return (neuron0x14dda60()*4.82783);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f23a0() {
   return (neuron0x14ddee0()*2.75131);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f23e0() {
   return (neuron0x14de360()*2.41932);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2420() {
   return (neuron0x14de870()*-1.34388);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2460() {
   return (neuron0x14dcfe0()*0.752836);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f24a0() {
   return (neuron0x14df180()*-21.3442);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f24e0() {
   return (neuron0x14df600()*5.31317);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1f70() {
   return (neuron0x14dfed0()*2.24271);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f1fb0() {
   return (neuron0x14e01a0()*-3.61202);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2630() {
   return (neuron0x14e0620()*-3.55534);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2670() {
   return (neuron0x14e0aa0()*1.51861);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f26b0() {
   return (neuron0x14e0f20()*3.55286);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f26f0() {
   return (neuron0x14e13a0()*1.29239);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2730() {
   return (neuron0x14e1820()*-11.7336);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2770() {
   return (neuron0x14e1ca0()*-4.32653);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f27b0() {
   return (neuron0x14e2120()*2.55993);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2b30() {
   return (neuron0x14db160()*-0.18924);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2b70() {
   return (neuron0x14db4d0()*0.0483249);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2bb0() {
   return (neuron0x14db950()*-0.621519);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2bf0() {
   return (neuron0x14dbdd0()*-0.179011);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2c30() {
   return (neuron0x14dc2e0()*0.601593);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2c70() {
   return (neuron0x14dc760()*0.721072);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2cb0() {
   return (neuron0x14dcbe0()*0.373819);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2cf0() {
   return (neuron0x14dd1f0()*-0.237315);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2d30() {
   return (neuron0x14dd5e0()*0.297287);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2d70() {
   return (neuron0x14dda60()*0.855011);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2db0() {
   return (neuron0x14ddee0()*1.27899);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2df0() {
   return (neuron0x14de360()*0.38395);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2e30() {
   return (neuron0x14de870()*-0.616908);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2e70() {
   return (neuron0x14dcfe0()*0.472208);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2eb0() {
   return (neuron0x14df180()*-0.586411);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2ef0() {
   return (neuron0x14df600()*-0.427632);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f2980() {
   return (neuron0x14dfed0()*-0.738984);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f29c0() {
   return (neuron0x14e01a0()*-0.896271);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3040() {
   return (neuron0x14e0620()*-0.0798956);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3080() {
   return (neuron0x14e0aa0()*0.192205);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f30c0() {
   return (neuron0x14e0f20()*0.308843);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3100() {
   return (neuron0x14e13a0()*-0.144945);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3140() {
   return (neuron0x14e1820()*0.923451);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3180() {
   return (neuron0x14e1ca0()*-1.6217);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f31c0() {
   return (neuron0x14e2120()*0.0578377);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3540() {
   return (neuron0x14db160()*-0.664958);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3580() {
   return (neuron0x14db4d0()*0.509474);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f35c0() {
   return (neuron0x14db950()*-0.672309);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3600() {
   return (neuron0x14dbdd0()*-0.192958);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3640() {
   return (neuron0x14dc2e0()*0.559235);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3680() {
   return (neuron0x14dc760()*-0.74373);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f36c0() {
   return (neuron0x14dcbe0()*-0.562852);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3700() {
   return (neuron0x14dd1f0()*-0.0116684);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3740() {
   return (neuron0x14dd5e0()*-0.557278);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3780() {
   return (neuron0x14dda60()*-1.58415);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f37c0() {
   return (neuron0x14ddee0()*-0.859157);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3800() {
   return (neuron0x14de360()*-0.605174);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3840() {
   return (neuron0x14de870()*1.10063);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3880() {
   return (neuron0x14dcfe0()*0.0401903);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f38c0() {
   return (neuron0x14df180()*0.410147);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3900() {
   return (neuron0x14df600()*-0.264224);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3390() {
   return (neuron0x14dfed0()*-0.743708);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f33d0() {
   return (neuron0x14e01a0()*1.49733);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3a50() {
   return (neuron0x14e0620()*0.453056);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3a90() {
   return (neuron0x14e0aa0()*-0.243386);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3ad0() {
   return (neuron0x14e0f20()*-0.773457);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3b10() {
   return (neuron0x14e13a0()*-0.235279);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3b50() {
   return (neuron0x14e1820()*0.170718);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3b90() {
   return (neuron0x14e1ca0()*-0.00902841);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3bd0() {
   return (neuron0x14e2120()*-0.784694);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3f50() {
   return (neuron0x14db160()*0.0422572);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3f90() {
   return (neuron0x14db4d0()*1.11407);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3fd0() {
   return (neuron0x14db950()*0.0930461);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4010() {
   return (neuron0x14dbdd0()*-0.334537);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4050() {
   return (neuron0x14dc2e0()*0.863312);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4090() {
   return (neuron0x14dc760()*0.294529);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f40d0() {
   return (neuron0x14dcbe0()*-0.80882);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4110() {
   return (neuron0x14dd1f0()*-0.661065);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4150() {
   return (neuron0x14dd5e0()*0.217078);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4190() {
   return (neuron0x14dda60()*0.0238848);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f41d0() {
   return (neuron0x14ddee0()*-0.362671);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4210() {
   return (neuron0x14de360()*0.775442);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4250() {
   return (neuron0x14de870()*1.55213);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4290() {
   return (neuron0x14dcfe0()*1.24098);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f42d0() {
   return (neuron0x14df180()*0.502303);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4310() {
   return (neuron0x14df600()*-0.211994);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3da0() {
   return (neuron0x14dfed0()*0.372403);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f3de0() {
   return (neuron0x14e01a0()*0.261058);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4460() {
   return (neuron0x14e0620()*1.42231);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f44a0() {
   return (neuron0x14e0aa0()*0.715091);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f44e0() {
   return (neuron0x14e0f20()*-0.342035);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4520() {
   return (neuron0x14e13a0()*1.12269);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4560() {
   return (neuron0x14e1820()*-0.245182);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f45a0() {
   return (neuron0x14e1ca0()*0.199202);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f45e0() {
   return (neuron0x14e2120()*0.981145);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4960() {
   return (neuron0x14db160()*1.40236);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f49a0() {
   return (neuron0x14db4d0()*-1.08996);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f49e0() {
   return (neuron0x14db950()*3.25768);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4a20() {
   return (neuron0x14dbdd0()*1.10602);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4a60() {
   return (neuron0x14dc2e0()*-1.04274);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4aa0() {
   return (neuron0x14dc760()*0.834009);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4ae0() {
   return (neuron0x14dcbe0()*1.85558);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4b20() {
   return (neuron0x14dd1f0()*0.351157);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4b60() {
   return (neuron0x14dd5e0()*1.95574);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4ba0() {
   return (neuron0x14dda60()*3.39743);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4be0() {
   return (neuron0x14ddee0()*2.4827);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4c20() {
   return (neuron0x14de360()*1.09205);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4c60() {
   return (neuron0x14de870()*-1.29951);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4ca0() {
   return (neuron0x14dcfe0()*-0.497158);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4ce0() {
   return (neuron0x14df180()*-2.11213);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4d20() {
   return (neuron0x14df600()*-0.931726);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f47b0() {
   return (neuron0x14dfed0()*1.93804);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f47f0() {
   return (neuron0x14e01a0()*-3.87271);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4e70() {
   return (neuron0x14e0620()*0.454469);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4eb0() {
   return (neuron0x14e0aa0()*2.24798);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4ef0() {
   return (neuron0x14e0f20()*1.91647);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4f30() {
   return (neuron0x14e13a0()*-0.019669);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4f70() {
   return (neuron0x14e1820()*-1.99446);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4fb0() {
   return (neuron0x14e1ca0()*-0.563749);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f4ff0() {
   return (neuron0x14e2120()*1.18407);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5370() {
   return (neuron0x14db160()*-0.0762171);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f53b0() {
   return (neuron0x14db4d0()*-1.69094);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f53f0() {
   return (neuron0x14db950()*-0.935777);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5430() {
   return (neuron0x14dbdd0()*1.07792);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5470() {
   return (neuron0x14dc2e0()*-2.27805);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f54b0() {
   return (neuron0x14dc760()*-0.933623);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f54f0() {
   return (neuron0x14dcbe0()*1.06853);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5530() {
   return (neuron0x14dd1f0()*0.320183);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5570() {
   return (neuron0x14dd5e0()*-0.0845083);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f55b0() {
   return (neuron0x14dda60()*0.585879);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f55f0() {
   return (neuron0x14ddee0()*1.22071);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5630() {
   return (neuron0x14de360()*-0.951373);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5670() {
   return (neuron0x14de870()*-1.8643);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f56b0() {
   return (neuron0x14dcfe0()*-1.65062);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f56f0() {
   return (neuron0x14df180()*-1.333);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5730() {
   return (neuron0x14df600()*-0.178206);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f51c0() {
   return (neuron0x14dfed0()*1.14299);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5200() {
   return (neuron0x14e01a0()*-1.79532);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5880() {
   return (neuron0x14e0620()*-0.978533);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f58c0() {
   return (neuron0x14e0aa0()*-0.327335);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5900() {
   return (neuron0x14e0f20()*0.729146);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5940() {
   return (neuron0x14e13a0()*-1.94396);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5980() {
   return (neuron0x14e1820()*-1.78441);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f59c0() {
   return (neuron0x14e1ca0()*-0.838669);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5a00() {
   return (neuron0x14e2120()*-0.615345);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5c60() {
   return (neuron0x14e4030()*7.44053);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5ca0() {
   return (neuron0x14dee00()*-2.09911);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5ce0() {
   return (neuron0x14e4ba0()*-9.38278);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5d20() {
   return (neuron0x14e56c0()*-0.421685);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5d60() {
   return (neuron0x14e60d0()*5.45379);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5da0() {
   return (neuron0x14e6ae0()*2.33745);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5de0() {
   return (neuron0x14e46d0()*4.52594);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5e20() {
   return (neuron0x14e8710()*6.24765);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5e60() {
   return (neuron0x14e9120()*-5.25555);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5ea0() {
   return (neuron0x14e9b30()*-3.12649);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5ee0() {
   return (neuron0x14ea540()*-6.71599);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5f20() {
   return (neuron0x14eaf50()*6.18377);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5f60() {
   return (neuron0x14eb960()*-6.10836);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5fa0() {
   return (neuron0x14ec370()*5.68509);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f5fe0() {
   return (neuron0x14ecd80()*3.48553);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f6020() {
   return (neuron0x14ed790()*13.652);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db030() {
   return (neuron0x14e7db0()*-6.43912);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14db070() {
   return (neuron0x14f0a00()*8.30035);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f6170() {
   return (neuron0x14f13d0()*-1.21975);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f61b0() {
   return (neuron0x14f1de0()*-13.3239);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f61f0() {
   return (neuron0x14f27f0()*-0.922556);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f6230() {
   return (neuron0x14f3200()*0.586124);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f6270() {
   return (neuron0x14f3c10()*-6.23514);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f62b0() {
   return (neuron0x14f4620()*-7.87614);
}

double nnFunc_1C_25_25hi_5000ep_weight_down::synapse0x14f62f0() {
   return (neuron0x14f5030()*3.43112);
}

