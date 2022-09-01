#include "routines_generator.h"
#include "commonhdr_local.h"

// functions used for generating of protons and photons



double pointsInOut(vector<double>& Proton,double sz)
{
    double kOut;
    double zIn, zOut = ZDimLQbar;

    zIn = Proton[2];

    kOut = (zOut - zIn)/sz;

    return kOut;
}

int generator_barid(int k, int trainid)
{
    int barid = 0;

    //train 1
    if (k == 0 && trainid == 1) barid = 41;
    if (k == 1 && trainid == 1) barid = 42;
    if (k == 2 && trainid == 1) barid = 43;
    if (k == 3 && trainid == 1) barid = 44;

    // train 2
    if (k == 0 && trainid == 2) barid = 31;
    if (k == 1 && trainid == 2) barid = 32;
    if (k == 2 && trainid == 2) barid = 33;
    if (k == 3 && trainid == 2) barid = 34;

    // train 3
    if (k == 0 && trainid == 3) barid = 21;
    if (k == 1 && trainid == 3) barid = 22;
    if (k == 2 && trainid == 3) barid = 23;
    if (k == 3 && trainid == 3) barid = 24;

    // train 4
    if (k == 0 && trainid == 4) barid = 11;
    if (k == 1 && trainid == 4) barid = 12;
    if (k == 2 && trainid == 4) barid = 13;
    if (k == 3 && trainid == 4) barid = 14;

    return barid;
}

void generator_photon(vector<double>& Proton,TRandom3 *p_rand, int trainIndex, int bar, vector<double>& vecRefIndex,vector<double>& vecTheta_CH,
                      vector<double>& vecPhi,vector<double>& vecWavelength, vector< vector<double> >& vecPhotonPositionCoordinate
                      ,vector<double>& vecDistance)
{

    // direction coordinates of proton
    double sx = - 1.; double sy = 0.; double sz = 1/tan(THETA_CH_COMPLEMENT);
    double kOut = pointsInOut(Proton,sz);

    double MeanNumPhotons;
    MeanNumPhotons = photonsPerTrack(p_rand,trainIndex,bar);

    for(int i = 0; i < MeanNumPhotons; i++)
    {
        double PhotonX; double PhotonY; double PhotonZ;
        double k;
        double xIn; double yIn; double zIn;
        vector<double> PhotonCoord(3);

        xIn = Proton[0]; yIn = Proton[1]; zIn = Proton[2];

        k = Random3(p_rand,0.,kOut);

        PhotonX = xIn + sx * k;
        PhotonY = yIn + sy * k;
        PhotonZ = zIn + sz * k;

        PhotonCoord[0] = PhotonX;
        PhotonCoord[1] = PhotonY;
        PhotonCoord[2] = PhotonZ;
        vecPhotonPositionCoordinate.push_back(PhotonCoord);


        double distance;//length of proton trajectory before the emission of photon in one bar

        distance = sqrt((PhotonX - xIn)*(PhotonX - xIn) + (PhotonY - yIn)*(PhotonY - yIn) +
                        (PhotonZ - zIn)*(PhotonZ - zIn));
        distance = distance + xIn*sin(THETA_CH_COMPLEMENT);//correction on plain 1
        vecDistance.push_back(distance);

        // direction angles
        double phi, Theta_Ch, refIndex,wavelength;

        double random;
        double likelihoodWlGeant = 0.;

        //======= wavelength  ==============
        do {
            wavelength = Random3(p_rand,lambdaMin,lambdaMax);
            random = Random3(p_rand,0.,0.1);

            //the code finds out to whether bin the value of theta belongs to
            double binNum;
            int BINNUM;
            binNum = wavelength/4.6;//width of bin
            BINNUM = binNum;
            int initialBinNum = 43;
            BINNUM = BINNUM - initialBinNum;

            map <int,double> mapVtxwl;
            map <int,double>::iterator iter;
            generator_wl(mapVtxwl);
            for(iter=mapVtxwl.begin();iter!=mapVtxwl.end();iter++)
            {
                if (iter->first == BINNUM)
                {
                    likelihoodWlGeant = iter->second;
                }
            }
        } while (random  > likelihoodWlGeant);

        refIndex = RefractiveIndexWavelenConvertor(wavelength);
        Theta_Ch = ValueCherenkovAngle(refIndex);


        //======= vtxphi   ==============
        double likelihoodGen, likelihoodVec = 0.;
        do {
            phi = Random3(p_rand,-PI,PI);

            likelihoodGen = Random3(p_rand,0.,1.);
            double divide;
            int DIVIDE;
            divide = phi/0.0629;//width of bin
            DIVIDE = divide;
            int bin;
            if (divide < 0) bin = 50 - sqrt(DIVIDE*DIVIDE);
            else bin = sqrt(DIVIDE*DIVIDE) + 50; //correction on symetry of the original plot

            map <int,double> mapVtxphi;
            map <int,double>::iterator iter;
            generator_phi(mapVtxphi);
            for(iter=mapVtxphi.begin();iter!=mapVtxphi.end();iter++)
            {
                if (iter->first == bin) likelihoodVec = iter->second;

            }

        } while (likelihoodGen > likelihoodVec);


        vecRefIndex.push_back(refIndex);
        vecWavelength.push_back(wavelength);
        vecTheta_CH.push_back(Theta_Ch);
        vecPhi.push_back(phi);

    }
}



int photonsPerTrack(TRandom3 *p_rand,int trainIndex,int bar)
{
    double sin2ThetaCh = 0, *p_sin2ThetaCh = 0;
    p_sin2ThetaCh = &sin2ThetaCh;

    double RefIndex = 0, *p_RefIndex = 0;
    p_RefIndex = &RefIndex;

    int MeanNumPhotons = 0, *p_MeanNumPhotons = 0;
    p_MeanNumPhotons = &MeanNumPhotons;

    double parameter;

    parameter = MeanNumberOfPhotons(p_rand,p_RefIndex,p_sin2ThetaCh,trainIndex,bar);
    *p_MeanNumPhotons = PoissonDist(p_rand,parameter);

    return MeanNumPhotons;
}


void ProtonGenerator(TRandom3 *p_rand, vector<double>& Proton,int* p_trainIndex)
{
    //whole ToF
    // generates incidental coordinates of protons
    double ProtonInX,ProtonInY,ProtonInZ;

    double x_range_lqbar = 5./cos(THETA_CH_COMPLEMENT);// 5 mm from the edge
    double y_range_lqbar = TofHight;

    // random generation of protons entering lqbar
    ProtonInX = Random3(p_rand,0.,- x_range_lqbar);
    ProtonInY = Random3(p_rand,0.,y_range_lqbar);
    ProtonInZ = 0;


    if (ProtonInY > 0.0 && ProtonInY < 5.5)//recognition of the hit bar
    {
        *p_trainIndex = 4; //train 4
        ProtonInY = Random3(p_rand,0.,5.);
    }

    if (ProtonInY > 5.6 && ProtonInY < 10.6)//train 3
    {
        *p_trainIndex = 3;
        ProtonInY = Random3(p_rand,0.,5.);
    }

    if (ProtonInY > 10.7 && ProtonInY < 14.7)//train 2
    {
        *p_trainIndex = 2;
        ProtonInY = Random3(p_rand,0.,2.);
    }
    if (ProtonInY > 14.8 && ProtonInY < 16.8)//train 1
    {
        *p_trainIndex = 1;
        ProtonInY = Random3(p_rand,0.,2.);
    }


    Proton[0] = ProtonInX;
    Proton[1] = ProtonInY;
    Proton[2] = ProtonInZ;

}

double Random3(TRandom3 *r0, double min, double max)
{
    double number,rand;

    number = r0->Rndm();

    rand = min + number * (max - min);

    return rand;
}


double ValueCherenkovAngle(double n)
{

    double Theta_CH;

    Theta_CH = acos(1/ (beta * n));

    return Theta_CH;
}


double RefractiveIndexFunction(TRandom3 *r0)
{
    double index;
    double lambda;

    lambda=Random3(r0,lambdaMin,lambdaMax);

    index = par0 + par1 / ((par2 - par3*lambda)*(par2 - par3*lambda));

    return index;
}

double RefractiveIndexWavelenConvertor(double lambda)
{
    double index;

    index = par0 + par1 / ((par2 - par3*lambda)*(par2 - par3*lambda));

    return index;
}


double MeanNumberOfPhotons(TRandom3 *p_rand,double* p_refIndex,double* p_sin2thetach,
                           int trainIndex,int bar)
{
    double param, N, stepLen;

    *p_refIndex = RefractiveIndexFunction(p_rand);

    *p_sin2thetach = 1 - 1/(beta*beta*(*p_refIndex)*(*p_refIndex));

    N = 370*ElectronCharge*ElectronCharge*(*p_sin2thetach);

    stepLen = generator_stepLength(trainIndex,bar);

    param = N*stepLen*dEpsilon;

    return param;
}

double generator_stepLength(int trainIndex,int bar)
{
    double step = 0.;

    //train 1
    if (trainIndex == 1 && bar == 0) step = (edgeBarLength-4.9)*10000;
    if (trainIndex == 1 && bar == 1) step = (edgeBarLength-4.9)*10000;
    if (trainIndex == 1 && bar == 2) step = (edgeBarLength-4.9)*10000;
    if (trainIndex == 1 && bar == 3) step = (edgeBarLength-4.9)*10000;

    //train 2
    if (trainIndex == 2 && bar == 0) step = (edgeBarLength-4.5)*10000;
    if (trainIndex == 2 && bar == 1) step = (edgeBarLength-4.5)*10000;
    if (trainIndex == 2 && bar == 2) step = (edgeBarLength-4.5)*10000;
    if (trainIndex == 2 && bar == 3) step = (edgeBarLength-4.5)*10000;

    //train 3
    if (trainIndex == 3 && bar == 0) step = (edgeBarLength-5.6)*10000;
    if (trainIndex == 3 && bar == 1) step = (edgeBarLength-5.6)*10000;
    if (trainIndex == 3 && bar == 2) step = (edgeBarLength-5.6)*10000;
    if (trainIndex == 3 && bar == 3) step = (edgeBarLength-5.5)*10000;

    //train 4
    if (trainIndex == 4 && bar == 0) step = (edgeBarLength-5.9)*10000;
    if (trainIndex == 4 && bar == 1) step = (edgeBarLength-5.9)*10000;
    if (trainIndex == 4 && bar == 2) step = (edgeBarLength-5.9)*10000;
    if (trainIndex == 4 && bar == 3) step = (edgeBarLength-5.9)*10000;

    return step;
}

int PoissonDist(TRandom3 *r0,double param)
{
    int numPhotons;

    numPhotons = r0->Poisson(param);

    return numPhotons;
}


void generator_phi(map <int,double>& binContent)
{
    binContent[0] = 0.000000;
    binContent[1] = 0.334952;
    binContent[2] = 0.324468;
    binContent[3] = 0.312273;
    binContent[4] = 0.280018;
    binContent[5] = 0.271427;
    binContent[6] = 0.250941;
    binContent[7] = 0.221184;
    binContent[8] = 0.218003;
    binContent[9] = 0.197403;
    binContent[10] = 0.168750;
    binContent[11] = 0.159226;
    binContent[12] = 0.154097;
    binContent[13] = 0.128290;
    binContent[14] = 0.114980;
    binContent[15] = 0.087789;
    binContent[16] = 0.070561;
    binContent[17] = 0.210256;
    binContent[18] = 0.263491;
    binContent[19] = 0.266283;
    binContent[20] = 0.210562;
    binContent[21] = 0.192899;
    binContent[22] = 0.197396;
    binContent[23] = 0.192027;
    binContent[24] = 0.173121;
    binContent[25] = 0.180446;
    binContent[26] = 0.172959;
    binContent[27] = 0.178073;
    binContent[28] = 0.174309;
    binContent[29] = 0.173802;
    binContent[30] = 0.170362;
    binContent[31] = 0.176186;
    binContent[32] = 0.189783;
    binContent[33] = 0.151389;
    binContent[34] = 0.071175;
    binContent[35] = 0.022936;
    binContent[36] = 0.025663;
    binContent[37] = 0.039081;
    binContent[38] = 0.043316;
    binContent[39] = 0.053214;
    binContent[40] = 0.055928;
    binContent[41] = 0.080209;
    binContent[42] = 0.079526;
    binContent[43] = 0.091115;
    binContent[44] = 0.102592;
    binContent[45] = 0.116254;
    binContent[46] = 0.120158;
    binContent[47] = 0.117879;
    binContent[48] = 0.146925;
    binContent[49] = 0.132336;
    binContent[50] = 0.149324;
    binContent[51] = 0.164430;
    binContent[52] = 0.137383;
    binContent[53] = 0.137489;
    binContent[54] = 0.110484;
    binContent[55] = 0.119391;
    binContent[56] = 0.111522;
    binContent[57] = 0.103705;
    binContent[58] = 0.095836;
    binContent[59] = 0.081264;
    binContent[60] = 0.064705;
    binContent[61] = 0.058386;
    binContent[62] = 0.053726;
    binContent[63] = 0.043138;
    binContent[64] = 0.036529;
    binContent[65] = 0.028254;
    binContent[66] = 0.021284;
    binContent[67] = 0.077283;
    binContent[68] = 0.161322;
    binContent[69] = 0.177620;
    binContent[70] = 0.170630;
    binContent[71] = 0.164519;
    binContent[72] = 0.175951;
    binContent[73] = 0.168759;
    binContent[74] = 0.167970;
    binContent[75] = 0.166938;
    binContent[76] = 0.185838;
    binContent[77] = 0.178955;
    binContent[78] = 0.181610;
    binContent[79] = 0.199921;
    binContent[80] = 0.173249;
    binContent[81] = 0.231835;
    binContent[82] = 0.249908;
    binContent[83] = 0.244480;
    binContent[84] = 0.184152;
    binContent[85] = 0.078430;
    binContent[86] = 0.082855;
    binContent[87] = 0.101644;
    binContent[88] = 0.125994;
    binContent[89] = 0.146219;
    binContent[90] = 0.142569;
    binContent[91] = 0.204123;
    binContent[92] = 0.191912;
    binContent[93] = 0.229764;
    binContent[94] = 0.240161;
    binContent[95] = 0.241241;
    binContent[96] = 0.276778;
    binContent[97] = 0.275761;
    binContent[98] = 0.277185;
    binContent[99] = 0.298230;
    binContent[100] = 0.341582;
}

void generator_wl(map <int,double>& binContent)
{
    binContent[0] = 0.000206;
    binContent[1] = 0.000926;
    binContent[2] = 0.000863;
    binContent[3] = 0.000825;
    binContent[4] = 0.000764;
    binContent[5] = 0.002143;
    binContent[6] = 0.006364;
    binContent[7] = 0.012581;
    binContent[8] = 0.018947;
    binContent[9] = 0.023471;
    binContent[10] = 0.026055;
    binContent[11] = 0.027018;
    binContent[12] = 0.025655;
    binContent[13] = 0.024606;
    binContent[14] = 0.023570;
    binContent[15] = 0.022626;
    binContent[16] = 0.021941;
    binContent[17] = 0.021092;
    binContent[18] = 0.020459;
    binContent[19] = 0.019571;
    binContent[20] = 0.018922;
    binContent[21] = 0.018441;
    binContent[22] = 0.018176;
    binContent[23] = 0.018398;
    binContent[24] = 0.017714;
    binContent[25] = 0.017288;
    binContent[26] = 0.016843;
    binContent[27] = 0.016179;
    binContent[28] = 0.015753;
    binContent[29] = 0.015404;
    binContent[30] = 0.014911;
    binContent[31] = 0.014507;
    binContent[32] = 0.014082;
    binContent[33] = 0.013724;
    binContent[34] = 0.013320;
    binContent[35] = 0.013008;
    binContent[36] = 0.012667;
    binContent[37] = 0.012142;
    binContent[38] = 0.012007;
    binContent[39] = 0.011790;
    binContent[40] = 0.011433;
    binContent[41] = 0.011145;
    binContent[42] = 0.010858;
    binContent[43] = 0.010653;
    binContent[44] = 0.010394;
    binContent[45] = 0.010231;
    binContent[46] = 0.010037;
    binContent[47] = 0.009691;
    binContent[48] = 0.009483;
    binContent[49] = 0.009400;
    binContent[50] = 0.009210;
    binContent[51] = 0.008943;
    binContent[52] = 0.008731;
    binContent[53] = 0.008579;
    binContent[54] = 0.008343;
    binContent[55] = 0.008148;
    binContent[56] = 0.007973;
    binContent[57] = 0.007812;
    binContent[58] = 0.007748;
    binContent[59] = 0.007570;
    binContent[60] = 0.007348;
    binContent[61] = 0.007247;
    binContent[62] = 0.007113;
    binContent[63] = 0.006880;
    binContent[64] = 0.006898;
    binContent[65] = 0.006774;
    binContent[66] = 0.006679;
    binContent[67] = 0.006420;
    binContent[68] = 0.006399;
    binContent[69] = 0.006209;
    binContent[70] = 0.006125;
    binContent[71] = 0.006086;
    binContent[72] = 0.005870;
    binContent[73] = 0.005873;
    binContent[74] = 0.005614;
    binContent[75] = 0.005561;
    binContent[76] = 0.005572;
    binContent[77] = 0.005505;
    binContent[78] = 0.005341;
    binContent[79] = 0.005238;
    binContent[80] = 0.005147;
    binContent[81] = 0.005031;
    binContent[82] = 0.004975;
    binContent[83] = 0.004891;
    binContent[84] = 0.004891;
    binContent[85] = 0.004784;
    binContent[86] = 0.004640;
    binContent[87] = 0.004616;
    binContent[88] = 0.004520;
    binContent[89] = 0.004523;
    binContent[90] = 0.004384;
    binContent[91] = 0.004334;
    binContent[92] = 0.004210;
    binContent[93] = 0.004144;
    binContent[94] = 0.004161;
    binContent[95] = 0.004108;
    binContent[96] = 0.003987;
    binContent[97] = 0.003976;
    binContent[98] = 0.002790;
    binContent[99] = 0.000000;
    binContent[100] = 0.000000;
}


