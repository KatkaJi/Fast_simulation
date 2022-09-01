#ifndef ROUTINES_GENERATOR_H
#define ROUTINES_GENERATOR_H

#include "commonhdr_local.h"


//=========== GLOBAL VARIABLES  =========================

double theta_ch_bar = 48*PI/180;
double THETA_CH_COMPLEMENT = 42*PI/180;

//LQbar dimensions
double ZDimLQbar = 6.;
double edgeBarLength = 6/sin(theta_ch_bar);
double TofHight = (2 + 0.1 + 4 + 0.1 + 5 + 0.1 + 5.5);

//fitting parameters for function of refractive indexu
double par0=1.44871;
double par1=7004.45;
double par2=60.5718;
double par3=1.61394;


double lambdaMin=200;
double lambdaMax=654;
double dEpsilon=4.54e-05;//cm

double ElectronCharge=1;  // natural units
double beta = 1.;

//=========== FUNCTIONS  ===================================================

double pointsInOut(vector<double>& Proton, double sz);

int generator_barid(int k, int trainid);

void generator_photon(vector<double>& Proton, TRandom3 *p_rand, int trainIndex, int bar, vector<double>& vecRefIndex, vector<double>& vecTheta_CH,
                      vector<double>& vecPhi, vector<double>& vecWavelength, vector< vector<double> >& vecPhotonPositionCoordinate, vector<double>& vecDistance);

int photonsPerTrack(TRandom3 *p_rand,int trainIndex,int bar);
void ProtonGenerator(TRandom3 *p_rand, vector<double>& Proton, int* p_trainIndex);

double Random3(TRandom3 *r0, double min, double max);

double ValueCherenkovAngle(double n);
double RefractiveIndexFunction(TRandom3 *r0);
double RefractiveIndexWavelenConvertor(double lambda);

double MeanNumberOfPhotons(TRandom3 *p_rand,double* p_refIndex,double* p_sin2thetach,
                           int trainIndex,int bar);
double generator_stepLength(int trainIndex,int bar);
int PoissonDist(TRandom3 *r0, double param);

void generator_phi(map<int, double> &binContent);
void generator_wl(map <int,double>& binContent);

#endif
