#include "commonhdr_local.h"
#include "fast_cherenkov.h"
#include "routines_network.h"
#include "routines_generator.h"



void Generator(int protons, TRandom3 *p_rand,TH1D* p_hist1A,TH1D* p_hist1B,TH1D* p_hist1C,
               TH1D* p_hist1D,TH1D* p_hist2A,TH1D* p_hist2B,TH1D* p_hist2C,TH1D* p_hist2D,
               TH1D* p_hist3A,TH1D* p_hist3B,TH1D* p_hist3C,TH1D* p_hist3D,TH1D* p_hist4A,
               TH1D* p_hist4B,TH1D* p_hist4C,TH1D* p_hist4D)
{
    //for the whole TOF

    int i,j,k;

    for(j = 0; j < protons; j++)
    {
        vector<double> vecProtonPosCoor(3);
        int trainIndex = 0, *p_trainIndex = 0;
        p_trainIndex = &trainIndex;

        // generates one proton
        ProtonGenerator(p_rand,vecProtonPosCoor,p_trainIndex);

        for(k = 0; k < 4; k++)//LQbars A, B, C, D
        {
            vector<double> vecRefIndex;
            vector<double> vecTheta_CH;
            vector<double> vecPhi;
            vector<double> vecWavelength;
            vector< vector<double> > vecPhotonPositionCoordinate;
            vector<double> vecDistance;

            generator_photon(vecProtonPosCoor,p_rand,trainIndex,k,vecRefIndex,vecTheta_CH,vecPhi,
                             vecWavelength,vecPhotonPositionCoordinate,vecDistance);


            //iterate through the data and filling histograms:
            vector<double> PhotonPosition;
            vector< vector<double> >::iterator PhotonPositionCoordinate;
            vector<double>::iterator Theta_CH;
            vector<double>::iterator phi;
            vector<double>::iterator wavelength;
            vector<double>::iterator distance;

            for (i = 0,PhotonPositionCoordinate=vecPhotonPositionCoordinate.begin(),Theta_CH=vecTheta_CH.begin(),
                 phi=vecPhi.begin(),wavelength=vecWavelength.begin(),distance=vecDistance.begin();
                 PhotonPositionCoordinate!=vecPhotonPositionCoordinate.end(),Theta_CH!=vecTheta_CH.end(),
                 phi!=vecPhi.end(),wavelength!=vecWavelength.end(),distance!=vecDistance.end();
                 i++,PhotonPositionCoordinate++,Theta_CH++,phi++,wavelength++,distance++)
            {

                PhotonPosition = *PhotonPositionCoordinate;
                double vtxx,vtxy,vtxz;
                vtxx=PhotonPosition[0];
                vtxy=PhotonPosition[1];
                vtxz=PhotonPosition[2];

                double vtxphi,vtxtheta,vtxwl,protonDist;

                vtxphi=*phi;
                vtxtheta=*Theta_CH;
                vtxwl=*wavelength;
                protonDist=*distance;

                // generation of barid
                int barid;
                barid = generator_barid(k,trainIndex);

                //filling of histograms
                network(p_rand,trainIndex,barid,vtxx,vtxy,vtxz,vtxphi,vtxtheta,vtxwl,protonDist, p_hist1A,
                           p_hist1B,p_hist1C, p_hist1D, p_hist2A, p_hist2B, p_hist2C, p_hist2D, p_hist3A,
                           p_hist3B, p_hist3C,p_hist3D,p_hist4A,p_hist4B, p_hist4C,p_hist4D);

            }
        }// for() LQbars

    }// for() protons
}


//=============================================================
void fast_cherenkov(int NumberOfProtons)
{
    TRandom3 *p_rand = new TRandom3(time(NULL));

    char name[200] = "figures/results";
    int file = gSystem->mkdir(name,0);
    Printf("file return value: %d",file);

    // names
    char name1A[20] = "1A"; char name1B[20] = "1B"; char name1C[20] = "1C"; char name1D[20] = "1D";
    char name2A[20] = "2A"; char name2B[20] = "2B"; char name2C[20] = "2C"; char name2D[20] = "2D";
    char name3A[20] = "3A"; char name3B[20] = "3B"; char name3C[20] = "3C"; char name3D[20] = "3D";
    char name4A[20] = "4A"; char name4B[20] = "4B"; char name4C[20] = "4C"; char name4D[20] = "4D";

    char barName1A[20] = "bar 1A"; char barName1B[20] = "bar 1B"; char barName1C[20] = "bar 1C";
    char barName1D[20] = "bar 1D";
    char barName2A[20] = "bar 2A"; char barName2B[20] = "bar 2B"; char barName2C[20] = "bar 2C";
    char barName2D[20] = "bar 2D";
    char barName3A[20] = "bar 3A"; char barName3B[20] = "bar 3B"; char barName3C[20] = "bar 3C";
    char barName3D[20] = "bar 3D";
    char barName4A[20] = "bar 4A"; char barName4B[20] = "bar 4B"; char barName4C[20] = "bar 4C";
    char barName4D[20] = "bar 4D";


    char buffer_histGenerator[200];
    sprintf(buffer_histGenerator,"Arrival time: generator + NN vs. Geant4");


    char nameLeng1A[250]; char nameLeng1B[250]; char nameLeng1C[250]; char nameLeng1D[250];
    char nameLeng2A[250]; char nameLeng2B[250]; char nameLeng2C[250]; char nameLeng2D[250];
    char nameLeng3A[250]; char nameLeng3B[250]; char nameLeng3C[250]; char nameLeng3D[250];
    char nameLeng4A[250]; char nameLeng4B[250]; char nameLeng4C[250]; char nameLeng4D[250];
    sprintf(nameLeng1A,"%s/%s_hist_time.png",name,name1A);
    sprintf(nameLeng1B,"%s/%s_hist_time.png",name,name1B);
    sprintf(nameLeng1C,"%s/%s_hist_time.png",name,name1C);
    sprintf(nameLeng1D,"%s/%s_hist_time.png",name,name1D);

    sprintf(nameLeng2A,"%s/%s_hist_time.png",name,name2A);
    sprintf(nameLeng2B,"%s/%s_hist_time.png",name,name2B);
    sprintf(nameLeng2C,"%s/%s_hist_time.png",name,name2C);
    sprintf(nameLeng2D,"%s/%s_hist_time.png",name,name2D);

    sprintf(nameLeng3A,"%s/%s_hist_time.png",name,name3A);
    sprintf(nameLeng3B,"%s/%s_hist_time.png",name,name3B);
    sprintf(nameLeng3C,"%s/%s_hist_time.png",name,name3C);
    sprintf(nameLeng3D,"%s/%s_hist_time.png",name,name3D);

    sprintf(nameLeng4A,"%s/%s_hist_time.png",name,name4A);
    sprintf(nameLeng4B,"%s/%s_hist_time.png",name,name4B);
    sprintf(nameLeng4C,"%s/%s_hist_time.png",name,name4C);
    sprintf(nameLeng4D,"%s/%s_hist_time.png",name,name4D);

    //==================  TIME HISTOS  ==============================
    int maxbin = 80;

    //Generator
    TH1D* p_hist1AGenerator = new TH1D(barName1A,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist1BGenerator = new TH1D(barName1B,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist1CGenerator = new TH1D(barName1C,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist1DGenerator = new TH1D(barName1D,buffer_histGenerator,maxbin,0,2);

    TH1D* p_hist2AGenerator = new TH1D(barName2A,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist2BGenerator = new TH1D(barName2B,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist2CGenerator = new TH1D(barName2C,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist2DGenerator = new TH1D(barName2D,buffer_histGenerator,maxbin,0,2);

    TH1D* p_hist3AGenerator = new TH1D(barName3A,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist3BGenerator = new TH1D(barName3B,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist3CGenerator = new TH1D(barName3C,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist3DGenerator = new TH1D(barName3D,buffer_histGenerator,maxbin,0,2);

    TH1D* p_hist4AGenerator = new TH1D(barName4A,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist4BGenerator = new TH1D(barName4B,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist4CGenerator = new TH1D(barName4C,buffer_histGenerator,maxbin,0,2);
    TH1D* p_hist4DGenerator = new TH1D(barName4D,buffer_histGenerator,maxbin,0,2);
    // ==================================================================

    char xaxisLeng[250] = "arrival time [ns]";
    char yaxisLeng[250] = "count [-]";
    bool xrangeLeng = 0; bool yrangeLeng = 0;
    double xrangeminLeng = -15.; double xrangemaxLeng = 0.;
    double yrangeminLeng = 0.; double yrangemaxLeng = 3000.;


    //canvases
    TCanvas* p_canv1A = new TCanvas("1A","1A: arrival time",200,10,1200,800);
    TCanvas* p_canv1B = new TCanvas("1B","1B: arrival time",200,10,1200,800);
    TCanvas* p_canv1C = new TCanvas("1C","1C: arrival time",200,10,1200,800);
    TCanvas* p_canv1D = new TCanvas("1D","1D: arrival time",200,10,1200,800);

    TCanvas* p_canv2A = new TCanvas("2A","2A: arrival time",200,10,1200,800);
    TCanvas* p_canv2B = new TCanvas("2B","2B: arrival time",200,10,1200,800);
    TCanvas* p_canv2C = new TCanvas("2C","2C: arrival time",200,10,1200,800);
    TCanvas* p_canv2D = new TCanvas("2D","2D: arrival time",200,10,1200,800);

    TCanvas* p_canv3A = new TCanvas("3A","3A: arrival time",200,10,1200,800);
    TCanvas* p_canv3B = new TCanvas("3B","3B: arrival time",200,10,1200,800);
    TCanvas* p_canv3C = new TCanvas("3C","3C: arrival time",200,10,1200,800);
    TCanvas* p_canv3D = new TCanvas("3D","3D: arrival time",200,10,1200,800);

    TCanvas* p_canv4A = new TCanvas("4A","4A: arrival time",200,10,1200,800);
    TCanvas* p_canv4B = new TCanvas("4B","4B: arrival time",200,10,1200,800);
    TCanvas* p_canv4C = new TCanvas("4C","4C: arrival time",200,10,1200,800);
    TCanvas* p_canv4D = new TCanvas("4D","4D: arrival time",200,10,1200,800);


    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //                          CHERENKOV GENERATOR
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    Generator(NumberOfProtons,p_rand,
              p_hist1AGenerator,p_hist1BGenerator,p_hist1CGenerator,p_hist1DGenerator,
              p_hist2AGenerator,p_hist2BGenerator,p_hist2CGenerator,p_hist2DGenerator,
              p_hist3AGenerator,p_hist3BGenerator,p_hist3CGenerator,p_hist3DGenerator,
              p_hist4AGenerator,p_hist4BGenerator,p_hist4CGenerator,p_hist4DGenerator);

    // histo setting

    histSet1d(p_hist1AGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist1BGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist1CGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist1DGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);


    histSet1d(p_hist2AGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist2BGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist2CGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist2DGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);

    histSet1d(p_hist3AGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist3BGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist3CGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist3DGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);


    histSet1d(p_hist4AGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist4BGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist4CGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);
    histSet1d(p_hist4DGenerator,xaxisLeng,yaxisLeng,xrangeLeng,yrangeLeng,xrangeminLeng,xrangemaxLeng,yrangeminLeng,yrangemaxLeng,kBlue);

    // ploting of histograms
    // train 1
    p_canv1A->cd();
    p_hist1AGenerator->Draw();
    canvasSet(p_canv1A);
    p_canv1A->Update();

    p_canv1B->cd();
    p_hist1BGenerator->Draw();
    canvasSet(p_canv1B);
    p_canv1B->Update();

    p_canv1C->cd();
    p_hist1CGenerator->Draw();
    canvasSet(p_canv1C);
    p_canv1C->Update();

    p_canv1D->cd();
    p_hist1DGenerator->Draw();
    canvasSet(p_canv1D);
    p_canv1D->Update();

    // train 2
    p_canv2A->cd();
    p_hist2AGenerator->Draw();
    canvasSet(p_canv2A);
    p_canv2A->Update();

    p_canv2B->cd();
    p_hist2BGenerator->Draw();
    canvasSet(p_canv2B);
    p_canv2B->Update();

    p_canv2C->cd();
    p_hist2CGenerator->Draw();
    canvasSet(p_canv2C);
    p_canv2C->Update();

    p_canv2D->cd();
    p_hist2DGenerator->Draw();
    canvasSet(p_canv2D);
    p_canv2D->Update();

    //train 3
    p_canv3A->cd();
    p_hist3AGenerator->Draw();
    canvasSet(p_canv3A);
    p_canv3A->Update();

    p_canv3B->cd();
    p_hist3BGenerator->Draw();
    canvasSet(p_canv3B);
    p_canv3B->Update();

    p_canv3C->cd();
    p_hist3CGenerator->Draw();
    canvasSet(p_canv3C);
    p_canv3C->Update();

    p_canv3D->cd();
    p_hist3DGenerator->Draw();
    canvasSet(p_canv3D);
    p_canv3D->Update();

    //train 4
    p_canv4A->cd();
    p_hist4AGenerator->Draw();
    canvasSet(p_canv4A);
    p_canv4A->Update();

    p_canv4B->cd();
    p_hist4BGenerator->Draw();
    canvasSet(p_canv4B);
    p_canv4B->Update();

    p_canv4C->cd();
    p_hist4CGenerator->Draw();
    canvasSet(p_canv4C);
    p_canv4C->Update();

    p_canv4D->cd();
    p_hist4DGenerator->Draw();
    canvasSet(p_canv4D);
    p_canv4D->Update();


    //print canvases
    p_canv1A->Print(nameLeng1A);
    p_canv1B->Print(nameLeng1B);
    p_canv1C->Print(nameLeng1C);
    p_canv1D->Print(nameLeng1D);

    p_canv2A->Print(nameLeng2A);
    p_canv2B->Print(nameLeng2B);
    p_canv2C->Print(nameLeng2C);
    p_canv2D->Print(nameLeng2D);

    p_canv3A->Print(nameLeng3A);
    p_canv3B->Print(nameLeng3B);
    p_canv3C->Print(nameLeng3C);
    p_canv3D->Print(nameLeng3D);

    p_canv4A->Print(nameLeng4A);
    p_canv4B->Print(nameLeng4B);
    p_canv4C->Print(nameLeng4C);
    p_canv4D->Print(nameLeng4D);
}
