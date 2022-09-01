
#include "TROOT.h"
#include <iostream>


void run(int NumberOfProtons)
{
    //bar 3A
    gROOT->ProcessLine( ".L 25_25hi_5000ep_3A_new_moved_random_midwing/nnFunc_3A_25_25hi_1500ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_upwing/nnFunc_3A_25_25hi_5000ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_downwing/nnFunc_3A_25_25hi_5000ep_weight_down.cxx+" );

    //bar 1A
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_centre_midwing/nnFunc_25_25hi_1500ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_sectorA_midwing/nnFunc_25_25hi_6000ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_sectorB_midwing/nnFunc_25_25hi_6000ep_weight_secB.cxx+" );

    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_upwing/nnFunc_25_25hi_5000ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_upwing/nnFunc_25_25hi_6000ep_weight_sec1up.cxx+" );

    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_downwing/nnFunc_25_25hi_6000ep_weight_down.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_downwing/nnFunc_25_25hi_5000ep_weight_down.cxx+" );

    //bar 1C
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_centre_midwing/nnFunc_1C_25_25hi_1500ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_sectorA_midwing/nnFunc_1C_25_25hi_7000ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_sectorB_midwing/nnFunc_1C_25_25hi_6000ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_upwing/nnFunc_1C_25_25hi_5000ep_weight_sec1up.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_upwing/nnFunc_1C_25_25hi_5000ep_weight.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_downwing/nnFunc_1C_25_25hi_5000ep_weight_sec1down.cxx+" );
    gROOT->ProcessLine( ".L 25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_downwing/nnFunc_1C_25_25hi_5000ep_weight_down.cxx+" );


    gROOT->ProcessLine( ".L routines_generator.c+" );
    gROOT->ProcessLine( ".L routines_network.c+" );
    gROOT->ProcessLine( ".L fast_cherenkov.c+" );

    char buffer[1000];
    sprintf(buffer,"fast_cherenkov(%d)",NumberOfProtons);

    gROOT->ProcessLine( buffer );
}
