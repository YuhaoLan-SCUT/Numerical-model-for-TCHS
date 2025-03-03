# Numerical-model-for-TCHS
This repository contains a MATLAB SIMULINK-based numerical simulation model for TCHS (Thermochemical Heat Storage). The models are stored in the Model_Matlab folder. It is recommended to use MATLAB R2016a or later to open and run the simulations.
Getting Started
1. Load Model Parameters

Before running the numerical simulation, execute the Parameters.m script to load the required model parameters into the MATLAB workspace. You may modify the parameter values as needed.
2. Open the Simulation Model

After loading the parameters, open Sim.slx. In this model:

    Each volume element is represented as an individual block.
    Each block outputs key information, including:
        Phase change progress
        Thermal decomposition progress
        Temperature distribution
    You can add more oscilloscopes to observe variations at different positions.

C Code Generation

We have also generated C code for this model. The corresponding files can be found in the Generated_C_Code folder.
Time Characterizing Method

Time Characterizing is a novel variable-merging approach developed in this study. The code and datasets for five merging iterations are stored in the TimeCharacterizing_Matlab folder.
