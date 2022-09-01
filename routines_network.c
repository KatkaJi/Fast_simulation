
#include "routines_generator.h"
#include "routines_network.h"

//3A
#include "25_25hi_5000ep_3A_new_moved_random_midwing/nnFunc_3A_25_25hi_1500ep_weight.h"
#include "25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_upwing/nnFunc_3A_25_25hi_5000ep_weight.h"
#include "25_25hi_5000ep_3A_new_moved_random_trlen_290_vtxphi_1_downwing/nnFunc_3A_25_25hi_5000ep_weight_down.h"

// 1A new
#include "25_25hi_5000ep_1A_new_moved_random_centre_midwing/nnFunc_25_25hi_1500ep_weight.h"
#include "25_25hi_5000ep_1A_new_moved_random_sectorA_midwing/nnFunc_25_25hi_6000ep_weight.h"
#include "25_25hi_5000ep_1A_new_moved_random_sectorB_midwing/nnFunc_25_25hi_6000ep_weight_secB.h"

#include "25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_upwing/nnFunc_25_25hi_5000ep_weight.h"
#include "25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_upwing/nnFunc_25_25hi_6000ep_weight_sec1up.h"

#include "25_25hi_5000ep_1A_new_moved_random_vtxphi_2_58_sector1_downwing/nnFunc_25_25hi_6000ep_weight_down.h"
#include "25_25hi_5000ep_1A_new_moved_random_trlen_325_vtxphi_1_downwing/nnFunc_25_25hi_5000ep_weight_down.h"

//1C
#include "25_25hi_5000ep_1C_new_moved_random_centre_midwing/nnFunc_1C_25_25hi_1500ep_weight.h"
#include "25_25hi_5000ep_1C_new_moved_random_sectorA_midwing/nnFunc_1C_25_25hi_7000ep_weight.h"
#include "25_25hi_5000ep_1C_new_moved_random_sectorB_midwing/nnFunc_1C_25_25hi_6000ep_weight.h"
#include "25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_upwing/nnFunc_1C_25_25hi_5000ep_weight_sec1up.h"
#include "25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_upwing/nnFunc_1C_25_25hi_5000ep_weight.h"
#include "25_25hi_5000ep_1C_new_moved_random_vtxphi_2_6_sector1_downwing/nnFunc_1C_25_25hi_5000ep_weight_sec1down.h"
#include "25_25hi_5000ep_1C_new_moved_random_trlen_275_vtxphi_1_downwing/nnFunc_1C_25_25hi_5000ep_weight_down.h"



TCanvas* canvasSet(TCanvas* p_canv)
{
    p_canv->SetGridx(1);
    p_canv->SetGridy(1);
    p_canv->Update();

    return p_canv;
}


TH1D* histSet1d(TH1D* p_hist, const char* p_xtitle, const char* p_ytitle, bool xrange, bool yrange,
                const double xrangemin, const double xrangemax, const double yrangemin,
                const double yrangemax, EColor p_colour)
{
    p_hist->GetXaxis()->SetTitle(p_xtitle);
    p_hist->GetYaxis()->SetTitle(p_ytitle);
    p_hist->SetLineWidth(2);
    p_hist->SetLineColor(p_colour);
    p_hist->SetStats(1);

    if (xrange == 1) p_hist->GetXaxis()->SetRangeUser(xrangemin,xrangemax);
    if (yrange == 1) p_hist->GetYaxis()->SetRangeUser(yrangemin,yrangemax);

    return p_hist;
}


double NN3A(double vtxx,double vtxy,double vtxz,double vtxphi,double vtxtheta)
{
    double trackLength = 0;

    // ------- UP WING --------------
    if (vtxphi > 1.)
    {
        // ==================== konstructor =====================================
        nnFunc_3A_25_25hi_5000ep_weight* p_nn = new nnFunc_3A_25_25hi_5000ep_weight();
        trackLength = p_nn->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);
        // ==================== destructor ==============================
        p_nn->~nnFunc_3A_25_25hi_5000ep_weight();
    }

    // ------- MIDDLE WING --------------
    if (vtxphi < 1. && vtxphi > -1.)
    {
        // ==================== konstructor ====================================
        nnFunc_3A_25_25hi_1500ep_weight* p_nnmid = new nnFunc_3A_25_25hi_1500ep_weight();
        trackLength = p_nnmid->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        // ==================== destructor ===================================
        p_nnmid->~nnFunc_3A_25_25hi_1500ep_weight();
    }

    // ---- DOWN WING  --------------
    if (vtxphi < -1.)
    {
        // ==================== konstructor ====================================
        nnFunc_3A_25_25hi_5000ep_weight_down* p_nndown = new nnFunc_3A_25_25hi_5000ep_weight_down();
        trackLength = p_nndown->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        // ==================== destructor =====================================
        p_nndown->~nnFunc_3A_25_25hi_5000ep_weight_down();
    }

    return trackLength;
}


void network(TRandom3 *p_rand, int trainid, int barid, double vtxx, double vtxy, double vtxz, double vtxphi,
                double vtxtheta, double vtxwl, double protonDistance,TH1D* p_hist1A,TH1D* p_hist1B,
                TH1D* p_hist1C, TH1D* p_hist1D,TH1D* p_hist2A,TH1D* p_hist2B,TH1D* p_hist2C,TH1D* p_hist2D,
                TH1D* p_hist3A,TH1D* p_hist3B,TH1D* p_hist3C,TH1D* p_hist3D,TH1D* p_hist4A,TH1D* p_hist4B,
                TH1D* p_hist4C,TH1D* p_hist4D)
{

    double trlen3A,trlen1A,trlen1C;

    if (trainid == 3 || trainid == 4)
    {
        trlen3A = NN3A(vtxx,vtxy,vtxz,vtxphi,vtxtheta);
        move_train34(p_rand,barid,trlen3A,vtxwl,protonDistance,p_hist3A,p_hist3B,p_hist3C,p_hist3D,p_hist4A,
                     p_hist4B,p_hist4C,p_hist4D);
    }
    if (trainid == 1 || trainid == 2)
    {
        trlen1A = NN1A(vtxx,vtxy,vtxz, vtxphi, vtxtheta);
        trlen1C = NN1C(vtxx,vtxy, vtxz, vtxphi, vtxtheta);
        move_train12(p_rand,vtxwl,protonDistance,trlen1A,trlen1C,barid,p_hist1A,p_hist1B,p_hist1C,p_hist1D,
                     p_hist2A,p_hist2B,p_hist2C,p_hist2D);
    }

}

void move_train34(TRandom3 *p_rand,int barid, double trackLength,double vtxwl,
                  double protonDistance,TH1D* p_hist3A, TH1D* p_hist3B,TH1D* p_hist3C,
                  TH1D* p_hist3D,TH1D* p_hist4A, TH1D* p_hist4B,
                  TH1D* p_hist4C, TH1D* p_hist4D)
{
    //for the whole tof
    double likelihood;
    double rand = Random3(p_rand,0.,1.);
    double time, refIndex;
    refIndex = RefractiveIndexWavelenConvertor(vtxwl);

    // ------------------ train 3 -------------------------
    if (barid == 21)
    {
        likelihood = likelihoodAbs(trackLength,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trackLength,refIndex,protonDistance,barid);
            p_hist3A->Fill(time);
            // p_hist3A->Fill(trackLength);
        }
    }

    if (barid == 22)
    {
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs((trackLength-5.6),vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-5.6,refIndex,protonDistance,barid);
                p_hist3B->Fill(time);
                // p_hist3B->Fill(trackLength - 5.6);
            }
        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs((trackLength-11.),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-11.,refIndex,protonDistance,barid);
                    p_hist3B->Fill(time);
                    //  p_hist3B->Fill(trackLength - 11.);
                }
            }
            else
            {
                likelihood = likelihoodAbs((trackLength-10.3),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-10.3,refIndex,protonDistance,barid);
                    p_hist3B->Fill(time);
                    //   p_hist3B->Fill(trackLength - 10.3);
                }

            }
        }
    }

    if (barid == 23)
    {
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs((trackLength-11.3),vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-11.3,refIndex,protonDistance,barid);
                p_hist3C->Fill(time);
                //  p_hist3C->Fill(trackLength - 11.3);
            }
        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs((trackLength-19.3),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-19.3,refIndex,protonDistance,barid);
                    p_hist3C->Fill(time);
                    // p_hist3C->Fill(trackLength - 19.3);
                }
            }
            else
            {
                likelihood = likelihoodAbs((trackLength-18.3),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-18.3,refIndex,protonDistance,barid);
                    p_hist3C->Fill(time);
                    //  p_hist3C->Fill(trackLength - 18.3);
                }
            }
        }
    }


    if (barid == 24)
    {
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs((trackLength-17.1),vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-17.1,refIndex,protonDistance,barid);
                p_hist3D->Fill(time);
                //   p_hist3D->Fill(trackLength - 17.1);
            }

        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs((trackLength-27.),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-27.,refIndex,protonDistance,barid);
                    p_hist3D->Fill(time);
                    //   p_hist3D->Fill(trackLength - 27.);
                }
            }
            else
            {
                likelihood = likelihoodAbs((trackLength-26.3),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-26.3,refIndex,protonDistance,barid);
                    p_hist3D->Fill(time);
                    //  p_hist3D->Fill(trackLength - 26.3);
                }
            }
        }
    }

    // -------------  train 4  -----------------
    if (barid == 11)
    {
        //4A
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs((trackLength-11.9),vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-11.9,refIndex,protonDistance,barid);
                p_hist4A->Fill(time);
                //    p_hist4A->Fill(trackLength - 11.9);
            }
        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs((trackLength-19.1),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-19.1,refIndex,protonDistance,barid);
                    p_hist4A->Fill(time);
                    //     p_hist4A->Fill(trackLength - 19.1);
                }
            }
            else
            {
                likelihood = likelihoodAbs((trackLength-17.6),vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-17.6,refIndex,protonDistance,barid);
                    p_hist4A->Fill(time);
                    //  p_hist4A->Fill(trackLength - 17.6);
                }
            }
        }
    }


    if (barid == 12)
    {
        //4B
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs(trackLength-17.8,vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-17.8,refIndex,protonDistance,barid);
                p_hist4B->Fill(time);
                //    p_hist4B->Fill(trackLength - 17.8);
            }

        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs(trackLength-31.,vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-31.,refIndex,protonDistance,barid);
                    p_hist4B->Fill(time);
                    //   p_hist4B->Fill(trackLength - 31.);
                }

            }
            else
            {
                likelihood = likelihoodAbs(trackLength-27.5,vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-27.5,refIndex,protonDistance,barid);
                    p_hist4B->Fill(time);
                    //  p_hist4B->Fill(trackLength - 27.5);
                }

            }
        }
    }

    if (barid == 13)
    {
        //4C
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs(trackLength-23.3,vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-23.3,refIndex,protonDistance,barid);
                p_hist4C->Fill(time);
                //  p_hist4C->Fill(trackLength - 23.3);
            }

        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs(trackLength-38.8,vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-38.8,refIndex,protonDistance,barid);
                    p_hist4C->Fill(time);
                    //  p_hist4C->Fill(trackLength - 38.8);
                }

            }
            else
            {
                likelihood = likelihoodAbs(trackLength-37.,vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-37.,refIndex,protonDistance,barid);
                    p_hist4C->Fill(time);
                    //  p_hist4C->Fill(trackLength - 37.);
                }
            }
        }
    }

    if (barid == 14)
    {
        //4D
        if (trackLength < 154)
        {
            likelihood = likelihoodAbs(trackLength-29.,vtxwl);
            if (likelihood < rand)
            {
                time = timeofFlight(trackLength-29.,refIndex,protonDistance,barid);
                p_hist4D->Fill(time);
                //  p_hist4D->Fill(trackLength - 29.);
            }

        }
        if (trackLength > 154)
        {
            if (trackLength > 154 && trackLength < 156)
            {
                likelihood = likelihoodAbs(trackLength-50.8,vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-50.8,refIndex,protonDistance,barid);
                    p_hist4D->Fill(time);
                    //    p_hist4D->Fill(trackLength - 50.8);
                }

            }
            else
            {
                likelihood = likelihoodAbs(trackLength-45.9,vtxwl);
                if (likelihood < rand)
                {
                    time = timeofFlight(trackLength-45.9,refIndex,protonDistance,barid);
                    p_hist4D->Fill(time);
                    //  p_hist4D->Fill(trackLength - 45.9);
                }
            }
        }
    }
}

void move_train12(TRandom3 *p_rand,double vtxwl, double protonDistance,double trlen1A,
                  double trlen1C,int barid,TH1D* p_hist1A,TH1D* p_hist1B,TH1D* p_hist1C,
                  TH1D* p_hist1D,TH1D* p_hist2A,TH1D* p_hist2B,TH1D* p_hist2C,TH1D* p_hist2D)
{
    // for the whole TOf
    double likelihood;
    double rand = Random3(p_rand,0.,1.);
    double time, refIndex;
    refIndex = RefractiveIndexWavelenConvertor(vtxwl);

    //bars derived from bar 1A: 1B, 2A, 2B
    if (barid == 41) //1A
    {
        likelihood = likelihoodAbs(trlen1A,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1A,refIndex,protonDistance,barid);
            p_hist1A->Fill(time);
            // p_hist1A->Fill(trlen1A);
        }

    }

    if (barid == 42) //1B
    {
        likelihood = likelihoodAbs(trlen1A-5.7,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1A-5.7,refIndex,protonDistance,barid);
            p_hist1B->Fill(time);
            // p_hist1B->Fill(trlen1A - 5.7);
        }

    }
    if (barid == 43) //1C
    {
        likelihood = likelihoodAbs(trlen1C,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1C,refIndex,protonDistance,barid);
            p_hist1C->Fill(time);
            //   p_hist1C->Fill(trlen1C);
        }
    }

    if (barid == 44) //1D
    {
        likelihood = likelihoodAbs(trlen1C-5.7,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1C-5.7,refIndex,protonDistance,barid);
            p_hist1D->Fill(time);
            //  p_hist1D->Fill(trlen1C - 5.7);
        }
    }

    // ---  train 2  -------
    if (barid == 31)//2A
    {
        likelihood = likelihoodAbs(trlen1A-8.6,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1A-8.6,refIndex,protonDistance,barid);
            p_hist2A->Fill(time);
            //  p_hist2A->Fill(trlen1A - 8.6);
        }
    }

    if (barid == 32)//2B
    {
        likelihood = likelihoodAbs(trlen1A-14.1,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1A-14.1,refIndex,protonDistance,barid);
            p_hist2B->Fill(time);
            //   p_hist2B->Fill(trlen1A - 14.1);
        }
    }
    //bars derived from bar 1C: 1D, 2C, 2D

    if (barid == 33)//2C
    {
        likelihood = likelihoodAbs(trlen1C-8.5,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1C-8.5,refIndex,protonDistance,barid);
            p_hist2C->Fill(time);
            //  p_hist2C->Fill(trlen1C - 8.5);
        }
    }

    if (barid == 34)//2D
    {
        likelihood = likelihoodAbs(trlen1C-14.2,vtxwl);
        if (likelihood < rand)
        {
            time = timeofFlight(trlen1C-14.2,refIndex,protonDistance,barid);
            p_hist2D->Fill(time);
            //  p_hist2D->Fill(trlen1C - 14.2);
        }
    }
}

double NN1A(double vtxx,double vtxy,double vtxz,double vtxphi,double vtxtheta)
{
    double trackLength = 0.;

    // -------SECTOR 1 UP WING --------------
    if (vtxphi > 2.58)
    {
        nnFunc_25_25hi_6000ep_weight_sec1up* p_nnSec1U = new nnFunc_25_25hi_6000ep_weight_sec1up();

        trackLength = p_nnSec1U->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nnSec1U->~nnFunc_25_25hi_6000ep_weight_sec1up();
    }// if


    // -------SECTOR 2 UP WING --------------
    if (vtxphi > 1. && vtxphi < 2.58)
    {
        nnFunc_25_25hi_5000ep_weight* p_nn = new nnFunc_25_25hi_5000ep_weight();

        trackLength = p_nn->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nn->~nnFunc_25_25hi_5000ep_weight();
    } //


    // ------- MIDDLE WING --------------

    // ######  SECTOR A  ################

    if (vtxphi > 0.5 && vtxphi < 1.)
    {
        nnFunc_25_25hi_6000ep_weight* p_secA = new nnFunc_25_25hi_6000ep_weight();

        trackLength = p_secA->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_secA->~nnFunc_25_25hi_6000ep_weight();
    } // if

    // ============ centre MIDWING  ========================
    if (vtxphi < 0.5 && vtxphi > -0.5)
    {
        nnFunc_25_25hi_1500ep_weight* p_nnmid = new nnFunc_25_25hi_1500ep_weight();

        trackLength = p_nnmid->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nnmid->~nnFunc_25_25hi_1500ep_weight();
    } // if


    // ######  SECTOR B  ################
    if (vtxphi > -1. && vtxphi < -0.5)
    {
        nnFunc_25_25hi_6000ep_weight_secB* p_secB = new nnFunc_25_25hi_6000ep_weight_secB();

        trackLength = p_secB->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_secB->~nnFunc_25_25hi_6000ep_weight_secB();
    } // if


    // --------------- DOWN WING SECTOR 2 -----------------------

    if (vtxphi < -1. && vtxphi > -2.58)
    {
        nnFunc_25_25hi_5000ep_weight_down* p_nndown = new nnFunc_25_25hi_5000ep_weight_down();

        trackLength = p_nndown->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nndown->~nnFunc_25_25hi_5000ep_weight_down();
    } // if

    //  -----------------DOWN WING SECTOR 1  ---------------------
    if (vtxphi < -2.58)
    {
        nnFunc_25_25hi_6000ep_weight_down* p_nnSec1D = new nnFunc_25_25hi_6000ep_weight_down();

        trackLength = p_nnSec1D->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nnSec1D->~nnFunc_25_25hi_6000ep_weight_down();
    }

    return trackLength;
}

double NN1C(double vtxx,double vtxy,double vtxz,double vtxphi,double vtxtheta)
{
    double trackLength = 0.;

    // ---------- SECTOR 1 UP WING --------------
    if (vtxphi > 2.6)
    {
        nnFunc_1C_25_25hi_5000ep_weight_sec1up* p_nnSec1U = new nnFunc_1C_25_25hi_5000ep_weight_sec1up();

        trackLength = p_nnSec1U->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nnSec1U->~nnFunc_1C_25_25hi_5000ep_weight_sec1up();
    }// if


    // -------SECTOR 2 UP WING --------------
    if (vtxphi > 1. && vtxphi < 2.6)
    {
        nnFunc_1C_25_25hi_5000ep_weight* p_nn = new nnFunc_1C_25_25hi_5000ep_weight();

        trackLength = p_nn->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nn->~nnFunc_1C_25_25hi_5000ep_weight(); // destruktor
    } //


    // ------- MIDDLE WING --------------

    // ######  SECTOR A  ################

    if (vtxphi > 0.5 && vtxphi < 1.)
    {
        nnFunc_1C_25_25hi_7000ep_weight* p_secA = new nnFunc_1C_25_25hi_7000ep_weight();

        trackLength = p_secA->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_secA->~nnFunc_1C_25_25hi_7000ep_weight();
    } // if

    // ============ centre MIDWING  ========================
    if (vtxphi < 0.5 && vtxphi > -0.5)
    {
        nnFunc_1C_25_25hi_1500ep_weight* p_nnmid = new nnFunc_1C_25_25hi_1500ep_weight();

        trackLength = p_nnmid->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nnmid->~nnFunc_1C_25_25hi_1500ep_weight();
    } // if


    // ######  SECTOR B  ################
    if (vtxphi > -1. && vtxphi < -0.5)
    {
        nnFunc_1C_25_25hi_6000ep_weight* p_secB = new nnFunc_1C_25_25hi_6000ep_weight();

        trackLength = p_secB->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_secB->~nnFunc_1C_25_25hi_6000ep_weight();
    } // if


    // ---------------SECTOR 2 DOWN WING  -----------------------

    if (vtxphi < -1. && vtxphi > -2.6)
    {
        nnFunc_1C_25_25hi_5000ep_weight_down* p_nndown = new nnFunc_1C_25_25hi_5000ep_weight_down();

        trackLength = p_nndown->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nndown->~nnFunc_1C_25_25hi_5000ep_weight_down();
    } // if

    //  -----------------SECTOR 1 DOWN WING ---------------------
    if (vtxphi < -2.6)
    {
        nnFunc_1C_25_25hi_5000ep_weight_sec1down* p_nnSec1D = new nnFunc_1C_25_25hi_5000ep_weight_sec1down();

        trackLength = p_nnSec1D->Value(0,vtxx,vtxy,vtxz,vtxphi,vtxtheta);

        p_nnSec1D->~nnFunc_1C_25_25hi_5000ep_weight_sec1down();
    }

    return trackLength;
}


double timeofFlight(double trackLength,double refIndex,double protonDistance,int barid)
{
    double time, timezero;
    double timeTrig = 0.025; // time shift of trigger plain wrt. plain1

    timezero = timeZero(barid);

    time = timezero + (protonDistance*1e-03)/c + (refIndex*trackLength*1e-03)/c;// length in meters
    time = time*1e09 + timeTrig;// conversion to ns

    return time;
}

double timeZero(int barid)
{
    // calculates time delay from the bar A
    double timezero;

    //A bars
    if (barid == 41 || barid == 31 || barid == 21 || barid == 11)
    {
        timezero = 0.;
    }
    //B bars
    if (barid == 42 || barid == 32 || barid == 22 || barid == 12)
    {
        timezero = ((6 + 0.25)/sin(theta_ch))*1e-03/c;//seconds
    }
    //C bars
    if (barid == 43 || barid == 33 || barid == 23 || barid == 13)
    {
        timezero = ((2*6 + 2*0.25)/sin(theta_ch))*1e-03/c;
    }
    //D bars
    if (barid == 44 || barid == 34 || barid == 24 || barid == 14)
    {
        timezero = ((3*6 + 3*0.25)/sin(theta_ch))*1e-03/c;
    }

    return timezero;
}

double likelihoodAbs(double trlen, double vtxwl)
{
    double pabs;
    double muAbs;

    //fit function
    // polynomial of the third orded
    muAbs =  121.667 + 4.65441 * vtxwl - 0.00606166 * vtxwl*vtxwl + 2.60047e-06 * vtxwl*vtxwl*vtxwl;

    pabs = 1 - exp( - trlen/muAbs);

    return pabs;
}


