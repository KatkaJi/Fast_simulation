#ifndef ROUTINES_NETWORK_H
#define ROUTINES_NETWORK_H

#include "commonhdr_local.h"

double theta_ch = 48*PI/180;

// ========= FUNCTIONS ===================

TCanvas* canvasSet(TCanvas* p_canv);
TH1D* histSet1d(TH1D* p_hist, const char* p_xtitle, const char* p_ytitle, bool xrange, bool yrange,
                const double xrangemin = 0.,const double xrangemax = 0., const double yrangemin = 0.,
                const double yrangemax = 0., EColor p_colour = kBlue);


void network(TRandom3 *p_rand, int trainid, int barid, double vtxx, double vtxy, double vtxz, double vtxphi,
                double vtxtheta, double vtxwl, double protonDistance,TH1D* p_hist1A,TH1D* p_hist1B,
                TH1D* p_hist1C, TH1D* p_hist1D,TH1D* p_hist2A,TH1D* p_hist2B,TH1D* p_hist2C,TH1D* p_hist2D,
                TH1D* p_hist3A,TH1D* p_hist3B,TH1D* p_hist3C,TH1D* p_hist3D,TH1D* p_hist4A,TH1D* p_hist4B,
                TH1D* p_hist4C,TH1D* p_hist4D);
void move_train34(TRandom3 *p_rand,int barid, double trackLength,double vtxwl, double protonDistance,TH1D* p_hist3A, TH1D* p_hist3B,
                  TH1D* p_hist3C, TH1D* p_hist3D,TH1D* p_hist4A, TH1D* p_hist4B,
                     TH1D* p_hist4C, TH1D* p_hist4D);
void move_train12(TRandom3 *p_rand,double vtxwl, double protonDistance,double trlen1A,double trlen1C,int barid,TH1D* p_hist1A,
                     TH1D* p_hist1B,TH1D* p_hist1C,TH1D* p_hist1D,TH1D* p_hist2A,TH1D* p_hist2B,
                     TH1D* p_hist2C,TH1D* p_hist2D);
double NN3A(double vtxx,double vtxy,double vtxz,double vtxphi,double vtxtheta);
double NN1A(double vtxx,double vtxy,double vtxz,double vtxphi,double vtxtheta);
double NN1C(double vtxx,double vtxy,double vtxz,double vtxphi,double vtxtheta);

double timeofFlight(double trackLength, double refIndex, double protonDistance,int barid);
double timeZero(int barid);
double likelihoodAbs(double trlen, double vtxwl);



#endif
