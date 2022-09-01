
                             FAST CHERENKOV SIMULATION
                                    version 1.0
                             =========================


Basic description of the project
--------------------------------
Fast Cherenkov simulation aims to describe transmission of Cherenkov radiation
through the optical part of the AFP ToF detector which is formed by 16 "L-shaped"
fused silica bars. The code simulates passage of highly relativistic protons
(E = 7 TeV) through these bars and generates Cherenkov radiation in these bars.
For each bar the code calculates photon's trajectory length in the bar and its arrival
time at the end of the bar. The arrival time is measured with respect to the time
when proton passes a trigger plain. The calculation of trajectory length is base
on usage of neural networks. They are implemented in dedicated classes.

The output of the code is formed by 16 histograms of arrival time. A folder
called figures/results is created and all plots are saved in format .png.

Further information are found in the master thesis: Fast simulation of Cherenkov
photons transmission through the optical part of the AFP detector by Katerina Jirakova.


Description of libraries and classes
------------------------------------
Classes with trained neural networks (NNs) are found in folders whose names
start with the chain "25_25hi_5000ep". To simulate bar 3A, 3 NNs have to work
together, whereas bars 1A and 1C are formed by 7 NNs each. Every NN is used
only for the data from the given interval of angle vtxphi. These intervals
are called "upwing", "midwind" and "downwing".

Library responsible for managing of NNs and arrival time calculation is
routines_network.h. Generation of Cherenkov photons is governed by functions
of routine_generator.h library. The function fast_cherenkov(int NumberOfProtons)
of fast_cherenkov.h library incorporates the whole simulation and handles its output.


Prerequisites
-------------
Fast Cherenkov simulation is a ROOT macro that can be compiled only under ROOT.
In case the user does not have ROOT installed, please refer to web
sides: https://root.cern.ch/downloading-root


Running the code
----------------
This code is run by executing of these steps:

1) open ROOT session in usual way, e.g.: $ root -l
2) compile file run.c: $ .L run.c+
3) execute function run(int NumberOfProtons) and as its argument insert number of
protons that should pass through Lqbars, e.g.: $ run(7000)

Note that the code provides comparable results with Geant4 only if the statistics
of protons is sufficiently high (like thousands and more).


Author and contact
------------------
Katerina Jirakova
Palacky University Olomouc and Joint Laboratory of Optics
e-mail: katerina.jirakova@upol.cz  or  katkajirakova.kj@gmail.com
