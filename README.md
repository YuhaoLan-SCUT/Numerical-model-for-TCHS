# Numerical-model-for-TCHS

This repository contains the numerical simulation model for TCHS (Thermalchemical Heat Storage), implemented using MATLAB and Simulink. The project includes MATLAB scripts, Simulink models, and generated C code for computational analysis.  

## Folder Structure  

- **Model_Matlab/**: Contains the MATLAB Simulink model files for TCHS.  
- **TimeCharacterizing_Matlab/**: Scripts and data for the Time Characterizing method.  
- **Generated_C_Code/**: The automatically generated C code from the Simulink model.  

## Getting Started  

### Prerequisites  
- MATLAB (R2016a or later recommended)  
- Simulink  

### How to Run the Simulation  
1. Open MATLAB and navigate to the project directory.  
2. Run `Parameters.m` to load the model parameters into the workspace. You can modify the parameters as needed.  
3. Open `Sim.slx` in Simulink.  
4. Each volume element is represented as a separate block, which outputs the material’s **phase change progress**, **thermal decomposition progress**, and **temperature results** at that position.  
5. You can add more scopes to observe results at different locations.  

## Time Characterizing Method  

**Time Characterizing** is a novel variable combination method invented in this study. It reduces the dimensionality of multi-dimensional data by merging variables related to heat transfer rates, making it easier to visualize trends using graphs.  

This method also introduces a **dimensionless time parameter**, similar to the Fourier number, to evaluate the progress of unsteady heat storage processes.  

### How to Use the Time Characterizing Scripts  
1. Open the `.mat` files in MATLAB and load the discrete data into the workspace.  
2. Run the corresponding `.m` script in the `TimeCharacterizing_Matlab/` folder.  
3. The script will compute the **LOSS function** as a function of **K-values** during variable merging.  
4. The recommended **K-value range** is consistent with the published research paper, but you can adjust it based on your specific application.  
