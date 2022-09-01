#ifndef FAST_CHERENKOV_H
#define FAST_CHERENKOV_H

// ========== GLOBAL VARIABLES ============

double THETA_CH = 48*PI/180;


// ========= FUNCTIONS ===================

void Generator(int protons, TRandom3 *p_rand, TH1D* p_hist1A, TH1D* p_hist1B, TH1D* p_hist1C,
                       TH1D* p_hist1D, TH1D* p_hist2A, TH1D* p_hist2B, TH1D* p_hist2C, TH1D* p_hist2D,
                       TH1D* p_hist3A, TH1D* p_hist3B, TH1D* p_hist3C, TH1D* p_hist3D, TH1D* p_hist4A,
                       TH1D* p_hist4B, TH1D* p_hist4C, TH1D* p_hist4D);


void fast_cherenkov(int NumberOfProtons);

#endif
