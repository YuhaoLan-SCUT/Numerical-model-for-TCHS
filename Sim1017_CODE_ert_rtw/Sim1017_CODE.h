/*
 * File: Sim1017_CODE.h
 *
 * Code generated for Simulink model 'Sim1017_CODE'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Mar 03 11:26:24 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Sim1017_CODE_h_
#define RTW_HEADER_Sim1017_CODE_h_
#include <stddef.h>
#include <math.h>
#ifndef Sim1017_CODE_COMMON_INCLUDES_
# define Sim1017_CODE_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Sim1017_CODE_COMMON_INCLUDES_ */

#include "Sim1017_CODE_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"

/* Macros for accessing real-time model data structure */

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S11>/Integrator' */
  real_T Integrator_DSTATE_k;          /* '<S6>/Integrator' */
  real_T Integrator_DSTATE_f;          /* '<S21>/Integrator' */
  real_T Integrator1_DSTATE;           /* '<S11>/Integrator1' */
  real_T Integrator1_DSTATE_h;         /* '<S6>/Integrator1' */
  real_T Integrator1_DSTATE_o;         /* '<S21>/Integrator1' */
  real_T Integrator_DSTATE_l;          /* '<S1>/Integrator' */
  real_T Integrator1_DSTATE_f;         /* '<S1>/Integrator1' */
  real_T Integrator_DSTATE_h;          /* '<S2>/Integrator' */
  real_T Integrator1_DSTATE_j;         /* '<S2>/Integrator1' */
  real_T Integrator_DSTATE_le;         /* '<S13>/Integrator' */
  real_T Integrator_DSTATE_i;          /* '<S3>/Integrator' */
  real_T Integrator1_DSTATE_e;         /* '<S3>/Integrator1' */
  real_T Integrator_DSTATE_b;          /* '<S19>/Integrator' */
  real_T Integrator_DSTATE_n;          /* '<S20>/Integrator' */
  real_T Integrator_DSTATE_p;          /* '<S4>/Integrator' */
  real_T Integrator1_DSTATE_fs;        /* '<S4>/Integrator1' */
  real_T Integrator_DSTATE_d;          /* '<S17>/Integrator' */
  real_T Integrator_DSTATE_fs;         /* '<S5>/Integrator' */
  real_T Integrator1_DSTATE_fc;        /* '<S5>/Integrator1' */
  real_T Integrator_DSTATE_k5;         /* '<S18>/Integrator' */
  real_T Integrator_DSTATE_g;          /* '<S7>/Integrator' */
  real_T Integrator1_DSTATE_d;         /* '<S7>/Integrator1' */
  real_T Integrator_DSTATE_dz;         /* '<S12>/Integrator' */
  real_T Integrator_DSTATE_e;          /* '<S8>/Integrator' */
  real_T Integrator1_DSTATE_n;         /* '<S8>/Integrator1' */
  real_T Integrator_DSTATE_pd;         /* '<S35>/Integrator' */
  real_T Integrator_DSTATE_fx;         /* '<S9>/Integrator' */
  real_T Integrator1_DSTATE_jf;        /* '<S9>/Integrator1' */
  real_T Integrator_DSTATE_hh;         /* '<S10>/Integrator' */
  real_T Integrator1_DSTATE_ov;        /* '<S10>/Integrator1' */
  real_T Integrator_DSTATE_bz;         /* '<S41>/Integrator' */
  real_T Integrator1_DSTATE_p;         /* '<S12>/Integrator1' */
  real_T Integrator_DSTATE_gk;         /* '<S45>/Integrator' */
  real_T Integrator1_DSTATE_f0;        /* '<S13>/Integrator1' */
  real_T Integrator_DSTATE_g3;         /* '<S24>/Integrator' */
  real_T Integrator_DSTATE_h0;         /* '<S14>/Integrator' */
  real_T Integrator1_DSTATE_m;         /* '<S14>/Integrator1' */
  real_T Integrator_DSTATE_ef;         /* '<S42>/Integrator' */
  real_T Integrator_DSTATE_f5;         /* '<S15>/Integrator' */
  real_T Integrator1_DSTATE_mn;        /* '<S15>/Integrator1' */
  real_T Integrator_DSTATE_c;          /* '<S16>/Integrator' */
  real_T Integrator1_DSTATE_c;         /* '<S16>/Integrator1' */
  real_T Integrator_DSTATE_ki;         /* '<S43>/Integrator' */
  real_T Integrator1_DSTATE_k;         /* '<S17>/Integrator1' */
  real_T Integrator1_DSTATE_c5;        /* '<S18>/Integrator1' */
  real_T Integrator1_DSTATE_dt;        /* '<S19>/Integrator1' */
  real_T Integrator1_DSTATE_p3;        /* '<S20>/Integrator1' */
  real_T Integrator_DSTATE_l0;         /* '<S26>/Integrator' */
  real_T Integrator_DSTATE_ex;         /* '<S30>/Integrator' */
  real_T Integrator_DSTATE_hhz;        /* '<S36>/Integrator' */
  real_T Integrator_DSTATE_dl;         /* '<S22>/Integrator' */
  real_T Integrator1_DSTATE_ms;        /* '<S22>/Integrator1' */
  real_T Integrator_DSTATE_i2;         /* '<S27>/Integrator' */
  real_T Integrator_DSTATE_ir;         /* '<S23>/Integrator' */
  real_T Integrator1_DSTATE_or;        /* '<S23>/Integrator1' */
  real_T Integrator_DSTATE_a;          /* '<S25>/Integrator' */
  real_T Integrator1_DSTATE_dn;        /* '<S24>/Integrator1' */
  real_T Integrator1_DSTATE_b;         /* '<S25>/Integrator1' */
  real_T Integrator_DSTATE_ad;         /* '<S28>/Integrator' */
  real_T Integrator1_DSTATE_ju;        /* '<S26>/Integrator1' */
  real_T Integrator1_DSTATE_p2;        /* '<S27>/Integrator1' */
  real_T Integrator1_DSTATE_hz;        /* '<S28>/Integrator1' */
  real_T Integrator_DSTATE_j;          /* '<S29>/Integrator' */
  real_T Integrator1_DSTATE_jq;        /* '<S29>/Integrator1' */
  real_T Integrator1_DSTATE_hr;        /* '<S30>/Integrator1' */
  real_T Integrator_DSTATE_leb;        /* '<S31>/Integrator' */
  real_T Integrator1_DSTATE_fv;        /* '<S31>/Integrator1' */
  real_T Integrator_DSTATE_pc;         /* '<S39>/Integrator' */
  real_T Integrator_DSTATE_dc;         /* '<S40>/Integrator' */
  real_T Integrator_DSTATE_ci;         /* '<S32>/Integrator' */
  real_T Integrator1_DSTATE_l;         /* '<S32>/Integrator1' */
  real_T Integrator_DSTATE_o;          /* '<S37>/Integrator' */
  real_T Integrator_DSTATE_m;          /* '<S33>/Integrator' */
  real_T Integrator1_DSTATE_lp;        /* '<S33>/Integrator1' */
  real_T Integrator_DSTATE_gf;         /* '<S34>/Integrator' */
  real_T Integrator1_DSTATE_es;        /* '<S34>/Integrator1' */
  real_T Integrator_DSTATE_ls;         /* '<S38>/Integrator' */
  real_T Integrator1_DSTATE_jfa;       /* '<S35>/Integrator1' */
  real_T Integrator1_DSTATE_bq;        /* '<S36>/Integrator1' */
  real_T Integrator1_DSTATE_j4;        /* '<S37>/Integrator1' */
  real_T Integrator1_DSTATE_lz;        /* '<S38>/Integrator1' */
  real_T Integrator1_DSTATE_ch;        /* '<S39>/Integrator1' */
  real_T Integrator1_DSTATE_ovl;       /* '<S40>/Integrator1' */
  real_T Integrator1_DSTATE_d5;        /* '<S41>/Integrator1' */
  real_T Integrator1_DSTATE_g;         /* '<S42>/Integrator1' */
  real_T Integrator1_DSTATE_lh;        /* '<S43>/Integrator1' */
  real_T Integrator_DSTATE_ox;         /* '<S44>/Integrator' */
  real_T Integrator1_DSTATE_ga;        /* '<S44>/Integrator1' */
  real_T Integrator1_DSTATE_nc;        /* '<S45>/Integrator1' */
} DW;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T Q_in;                         /* '<Root>/In1' */
} ExtU;

/* Block signals and states (auto storage) */
extern DW rtDW;

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* Model entry point functions */
extern void Sim1017_CODE_initialize(void);
extern void Sim1017_CODE_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Bias4' : Unused code path elimination
 * Block '<S1>/Constant2' : Unused code path elimination
 * Block '<S1>/Constant4' : Unused code path elimination
 * Block '<S1>/Gain5' : Unused code path elimination
 * Block '<S1>/Gain6' : Unused code path elimination
 * Block '<S1>/Switch2' : Unused code path elimination
 * Block '<S1>/Switch3' : Unused code path elimination
 * Block '<S2>/Bias4' : Unused code path elimination
 * Block '<S2>/Constant2' : Unused code path elimination
 * Block '<S2>/Constant4' : Unused code path elimination
 * Block '<S2>/Gain5' : Unused code path elimination
 * Block '<S2>/Gain6' : Unused code path elimination
 * Block '<S2>/Switch2' : Unused code path elimination
 * Block '<S2>/Switch3' : Unused code path elimination
 * Block '<S3>/Bias4' : Unused code path elimination
 * Block '<S3>/Constant2' : Unused code path elimination
 * Block '<S3>/Constant4' : Unused code path elimination
 * Block '<S3>/Gain5' : Unused code path elimination
 * Block '<S3>/Gain6' : Unused code path elimination
 * Block '<S3>/Switch2' : Unused code path elimination
 * Block '<S3>/Switch3' : Unused code path elimination
 * Block '<S4>/Bias4' : Unused code path elimination
 * Block '<S4>/Constant2' : Unused code path elimination
 * Block '<S4>/Constant4' : Unused code path elimination
 * Block '<S4>/Gain5' : Unused code path elimination
 * Block '<S4>/Gain6' : Unused code path elimination
 * Block '<S4>/Switch2' : Unused code path elimination
 * Block '<S4>/Switch3' : Unused code path elimination
 * Block '<S5>/Bias4' : Unused code path elimination
 * Block '<S5>/Constant2' : Unused code path elimination
 * Block '<S5>/Constant4' : Unused code path elimination
 * Block '<S5>/Gain5' : Unused code path elimination
 * Block '<S5>/Gain6' : Unused code path elimination
 * Block '<S5>/Switch2' : Unused code path elimination
 * Block '<S5>/Switch3' : Unused code path elimination
 * Block '<S7>/Bias4' : Unused code path elimination
 * Block '<S7>/Constant2' : Unused code path elimination
 * Block '<S7>/Constant4' : Unused code path elimination
 * Block '<S7>/Gain5' : Unused code path elimination
 * Block '<S7>/Gain6' : Unused code path elimination
 * Block '<S7>/Switch2' : Unused code path elimination
 * Block '<S7>/Switch3' : Unused code path elimination
 * Block '<S8>/Bias4' : Unused code path elimination
 * Block '<S8>/Constant2' : Unused code path elimination
 * Block '<S8>/Constant4' : Unused code path elimination
 * Block '<S8>/Gain5' : Unused code path elimination
 * Block '<S8>/Gain6' : Unused code path elimination
 * Block '<S8>/Switch2' : Unused code path elimination
 * Block '<S8>/Switch3' : Unused code path elimination
 * Block '<S9>/Bias4' : Unused code path elimination
 * Block '<S9>/Constant2' : Unused code path elimination
 * Block '<S9>/Constant4' : Unused code path elimination
 * Block '<S9>/Gain5' : Unused code path elimination
 * Block '<S9>/Gain6' : Unused code path elimination
 * Block '<S9>/Switch2' : Unused code path elimination
 * Block '<S9>/Switch3' : Unused code path elimination
 * Block '<S10>/Bias4' : Unused code path elimination
 * Block '<S10>/Constant2' : Unused code path elimination
 * Block '<S10>/Constant4' : Unused code path elimination
 * Block '<S10>/Gain5' : Unused code path elimination
 * Block '<S10>/Gain6' : Unused code path elimination
 * Block '<S10>/Switch2' : Unused code path elimination
 * Block '<S10>/Switch3' : Unused code path elimination
 * Block '<S12>/Bias4' : Unused code path elimination
 * Block '<S12>/Constant2' : Unused code path elimination
 * Block '<S12>/Constant4' : Unused code path elimination
 * Block '<S12>/Gain5' : Unused code path elimination
 * Block '<S12>/Gain6' : Unused code path elimination
 * Block '<S12>/Switch2' : Unused code path elimination
 * Block '<S12>/Switch3' : Unused code path elimination
 * Block '<S13>/Bias4' : Unused code path elimination
 * Block '<S13>/Constant2' : Unused code path elimination
 * Block '<S13>/Constant4' : Unused code path elimination
 * Block '<S13>/Gain5' : Unused code path elimination
 * Block '<S13>/Gain6' : Unused code path elimination
 * Block '<S13>/Switch2' : Unused code path elimination
 * Block '<S13>/Switch3' : Unused code path elimination
 * Block '<S14>/Bias4' : Unused code path elimination
 * Block '<S14>/Constant2' : Unused code path elimination
 * Block '<S14>/Constant4' : Unused code path elimination
 * Block '<S14>/Gain5' : Unused code path elimination
 * Block '<S14>/Gain6' : Unused code path elimination
 * Block '<S14>/Switch2' : Unused code path elimination
 * Block '<S14>/Switch3' : Unused code path elimination
 * Block '<S15>/Bias4' : Unused code path elimination
 * Block '<S15>/Constant2' : Unused code path elimination
 * Block '<S15>/Constant4' : Unused code path elimination
 * Block '<S15>/Gain5' : Unused code path elimination
 * Block '<S15>/Gain6' : Unused code path elimination
 * Block '<S15>/Switch2' : Unused code path elimination
 * Block '<S15>/Switch3' : Unused code path elimination
 * Block '<S16>/Bias4' : Unused code path elimination
 * Block '<S16>/Constant2' : Unused code path elimination
 * Block '<S16>/Constant4' : Unused code path elimination
 * Block '<S16>/Gain5' : Unused code path elimination
 * Block '<S16>/Gain6' : Unused code path elimination
 * Block '<S16>/Switch2' : Unused code path elimination
 * Block '<S16>/Switch3' : Unused code path elimination
 * Block '<S17>/Bias4' : Unused code path elimination
 * Block '<S17>/Constant2' : Unused code path elimination
 * Block '<S17>/Constant4' : Unused code path elimination
 * Block '<S17>/Gain5' : Unused code path elimination
 * Block '<S17>/Gain6' : Unused code path elimination
 * Block '<S17>/Switch2' : Unused code path elimination
 * Block '<S17>/Switch3' : Unused code path elimination
 * Block '<S18>/Bias4' : Unused code path elimination
 * Block '<S18>/Constant2' : Unused code path elimination
 * Block '<S18>/Constant4' : Unused code path elimination
 * Block '<S18>/Gain5' : Unused code path elimination
 * Block '<S18>/Gain6' : Unused code path elimination
 * Block '<S18>/Switch2' : Unused code path elimination
 * Block '<S18>/Switch3' : Unused code path elimination
 * Block '<S19>/Bias4' : Unused code path elimination
 * Block '<S19>/Constant2' : Unused code path elimination
 * Block '<S19>/Constant4' : Unused code path elimination
 * Block '<S19>/Gain5' : Unused code path elimination
 * Block '<S19>/Gain6' : Unused code path elimination
 * Block '<S19>/Switch2' : Unused code path elimination
 * Block '<S19>/Switch3' : Unused code path elimination
 * Block '<S20>/Bias4' : Unused code path elimination
 * Block '<S20>/Constant2' : Unused code path elimination
 * Block '<S20>/Constant4' : Unused code path elimination
 * Block '<S20>/Gain5' : Unused code path elimination
 * Block '<S20>/Gain6' : Unused code path elimination
 * Block '<S20>/Switch2' : Unused code path elimination
 * Block '<S20>/Switch3' : Unused code path elimination
 * Block '<S22>/Bias4' : Unused code path elimination
 * Block '<S22>/Constant2' : Unused code path elimination
 * Block '<S22>/Constant4' : Unused code path elimination
 * Block '<S22>/Gain5' : Unused code path elimination
 * Block '<S22>/Gain6' : Unused code path elimination
 * Block '<S22>/Switch2' : Unused code path elimination
 * Block '<S22>/Switch3' : Unused code path elimination
 * Block '<S23>/Bias4' : Unused code path elimination
 * Block '<S23>/Constant2' : Unused code path elimination
 * Block '<S23>/Constant4' : Unused code path elimination
 * Block '<S23>/Gain5' : Unused code path elimination
 * Block '<S23>/Gain6' : Unused code path elimination
 * Block '<S23>/Switch2' : Unused code path elimination
 * Block '<S23>/Switch3' : Unused code path elimination
 * Block '<S24>/Bias4' : Unused code path elimination
 * Block '<S24>/Constant2' : Unused code path elimination
 * Block '<S24>/Constant4' : Unused code path elimination
 * Block '<S24>/Gain5' : Unused code path elimination
 * Block '<S24>/Gain6' : Unused code path elimination
 * Block '<S24>/Switch2' : Unused code path elimination
 * Block '<S24>/Switch3' : Unused code path elimination
 * Block '<S25>/Bias4' : Unused code path elimination
 * Block '<S25>/Constant2' : Unused code path elimination
 * Block '<S25>/Constant4' : Unused code path elimination
 * Block '<S25>/Gain5' : Unused code path elimination
 * Block '<S25>/Gain6' : Unused code path elimination
 * Block '<S25>/Switch2' : Unused code path elimination
 * Block '<S25>/Switch3' : Unused code path elimination
 * Block '<S26>/Bias4' : Unused code path elimination
 * Block '<S26>/Constant2' : Unused code path elimination
 * Block '<S26>/Constant4' : Unused code path elimination
 * Block '<S26>/Gain5' : Unused code path elimination
 * Block '<S26>/Gain6' : Unused code path elimination
 * Block '<S26>/Switch2' : Unused code path elimination
 * Block '<S26>/Switch3' : Unused code path elimination
 * Block '<S27>/Bias4' : Unused code path elimination
 * Block '<S27>/Constant2' : Unused code path elimination
 * Block '<S27>/Constant4' : Unused code path elimination
 * Block '<S27>/Gain5' : Unused code path elimination
 * Block '<S27>/Gain6' : Unused code path elimination
 * Block '<S27>/Switch2' : Unused code path elimination
 * Block '<S27>/Switch3' : Unused code path elimination
 * Block '<S28>/Bias4' : Unused code path elimination
 * Block '<S28>/Constant2' : Unused code path elimination
 * Block '<S28>/Constant4' : Unused code path elimination
 * Block '<S28>/Gain5' : Unused code path elimination
 * Block '<S28>/Gain6' : Unused code path elimination
 * Block '<S28>/Switch2' : Unused code path elimination
 * Block '<S28>/Switch3' : Unused code path elimination
 * Block '<S29>/Bias4' : Unused code path elimination
 * Block '<S29>/Constant2' : Unused code path elimination
 * Block '<S29>/Constant4' : Unused code path elimination
 * Block '<S29>/Gain5' : Unused code path elimination
 * Block '<S29>/Gain6' : Unused code path elimination
 * Block '<S29>/Switch2' : Unused code path elimination
 * Block '<S29>/Switch3' : Unused code path elimination
 * Block '<S30>/Bias4' : Unused code path elimination
 * Block '<S30>/Constant2' : Unused code path elimination
 * Block '<S30>/Constant4' : Unused code path elimination
 * Block '<S30>/Gain5' : Unused code path elimination
 * Block '<S30>/Gain6' : Unused code path elimination
 * Block '<S30>/Switch2' : Unused code path elimination
 * Block '<S30>/Switch3' : Unused code path elimination
 * Block '<S31>/Bias4' : Unused code path elimination
 * Block '<S31>/Constant2' : Unused code path elimination
 * Block '<S31>/Constant4' : Unused code path elimination
 * Block '<S31>/Gain5' : Unused code path elimination
 * Block '<S31>/Gain6' : Unused code path elimination
 * Block '<S31>/Switch2' : Unused code path elimination
 * Block '<S31>/Switch3' : Unused code path elimination
 * Block '<S32>/Bias4' : Unused code path elimination
 * Block '<S32>/Constant2' : Unused code path elimination
 * Block '<S32>/Constant4' : Unused code path elimination
 * Block '<S32>/Gain5' : Unused code path elimination
 * Block '<S32>/Gain6' : Unused code path elimination
 * Block '<S32>/Switch2' : Unused code path elimination
 * Block '<S32>/Switch3' : Unused code path elimination
 * Block '<S33>/Bias4' : Unused code path elimination
 * Block '<S33>/Constant2' : Unused code path elimination
 * Block '<S33>/Constant4' : Unused code path elimination
 * Block '<S33>/Gain5' : Unused code path elimination
 * Block '<S33>/Gain6' : Unused code path elimination
 * Block '<S33>/Switch2' : Unused code path elimination
 * Block '<S33>/Switch3' : Unused code path elimination
 * Block '<S34>/Bias4' : Unused code path elimination
 * Block '<S34>/Constant2' : Unused code path elimination
 * Block '<S34>/Constant4' : Unused code path elimination
 * Block '<S34>/Gain5' : Unused code path elimination
 * Block '<S34>/Gain6' : Unused code path elimination
 * Block '<S34>/Switch2' : Unused code path elimination
 * Block '<S34>/Switch3' : Unused code path elimination
 * Block '<S35>/Bias4' : Unused code path elimination
 * Block '<S35>/Constant2' : Unused code path elimination
 * Block '<S35>/Constant4' : Unused code path elimination
 * Block '<S35>/Gain5' : Unused code path elimination
 * Block '<S35>/Gain6' : Unused code path elimination
 * Block '<S35>/Switch2' : Unused code path elimination
 * Block '<S35>/Switch3' : Unused code path elimination
 * Block '<S36>/Bias4' : Unused code path elimination
 * Block '<S36>/Constant2' : Unused code path elimination
 * Block '<S36>/Constant4' : Unused code path elimination
 * Block '<S36>/Gain5' : Unused code path elimination
 * Block '<S36>/Gain6' : Unused code path elimination
 * Block '<S36>/Switch2' : Unused code path elimination
 * Block '<S36>/Switch3' : Unused code path elimination
 * Block '<S37>/Bias4' : Unused code path elimination
 * Block '<S37>/Constant2' : Unused code path elimination
 * Block '<S37>/Constant4' : Unused code path elimination
 * Block '<S37>/Gain5' : Unused code path elimination
 * Block '<S37>/Gain6' : Unused code path elimination
 * Block '<S37>/Switch2' : Unused code path elimination
 * Block '<S37>/Switch3' : Unused code path elimination
 * Block '<S38>/Bias4' : Unused code path elimination
 * Block '<S38>/Constant2' : Unused code path elimination
 * Block '<S38>/Constant4' : Unused code path elimination
 * Block '<S38>/Gain5' : Unused code path elimination
 * Block '<S38>/Gain6' : Unused code path elimination
 * Block '<S38>/Switch2' : Unused code path elimination
 * Block '<S38>/Switch3' : Unused code path elimination
 * Block '<S39>/Bias4' : Unused code path elimination
 * Block '<S39>/Constant2' : Unused code path elimination
 * Block '<S39>/Constant4' : Unused code path elimination
 * Block '<S39>/Gain5' : Unused code path elimination
 * Block '<S39>/Gain6' : Unused code path elimination
 * Block '<S39>/Switch2' : Unused code path elimination
 * Block '<S39>/Switch3' : Unused code path elimination
 * Block '<S40>/Bias4' : Unused code path elimination
 * Block '<S40>/Constant2' : Unused code path elimination
 * Block '<S40>/Constant4' : Unused code path elimination
 * Block '<S40>/Gain5' : Unused code path elimination
 * Block '<S40>/Gain6' : Unused code path elimination
 * Block '<S40>/Switch2' : Unused code path elimination
 * Block '<S40>/Switch3' : Unused code path elimination
 * Block '<S41>/Bias4' : Unused code path elimination
 * Block '<S41>/Constant2' : Unused code path elimination
 * Block '<S41>/Constant4' : Unused code path elimination
 * Block '<S41>/Gain5' : Unused code path elimination
 * Block '<S41>/Gain6' : Unused code path elimination
 * Block '<S41>/Switch2' : Unused code path elimination
 * Block '<S41>/Switch3' : Unused code path elimination
 * Block '<S42>/Bias4' : Unused code path elimination
 * Block '<S42>/Constant2' : Unused code path elimination
 * Block '<S42>/Constant4' : Unused code path elimination
 * Block '<S42>/Gain5' : Unused code path elimination
 * Block '<S42>/Gain6' : Unused code path elimination
 * Block '<S42>/Switch2' : Unused code path elimination
 * Block '<S42>/Switch3' : Unused code path elimination
 * Block '<S43>/Bias4' : Unused code path elimination
 * Block '<S43>/Constant2' : Unused code path elimination
 * Block '<S43>/Constant4' : Unused code path elimination
 * Block '<S43>/Gain5' : Unused code path elimination
 * Block '<S43>/Gain6' : Unused code path elimination
 * Block '<S43>/Switch2' : Unused code path elimination
 * Block '<S43>/Switch3' : Unused code path elimination
 * Block '<S44>/Bias4' : Unused code path elimination
 * Block '<S44>/Constant2' : Unused code path elimination
 * Block '<S44>/Constant4' : Unused code path elimination
 * Block '<S44>/Gain5' : Unused code path elimination
 * Block '<S44>/Gain6' : Unused code path elimination
 * Block '<S44>/Switch2' : Unused code path elimination
 * Block '<S44>/Switch3' : Unused code path elimination
 * Block '<S45>/Bias4' : Unused code path elimination
 * Block '<S45>/Constant2' : Unused code path elimination
 * Block '<S45>/Constant4' : Unused code path elimination
 * Block '<S45>/Gain5' : Unused code path elimination
 * Block '<S45>/Gain6' : Unused code path elimination
 * Block '<S45>/Switch2' : Unused code path elimination
 * Block '<S45>/Switch3' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Sim1017_CODE'
 * '<S1>'   : 'Sim1017_CODE/Element'
 * '<S2>'   : 'Sim1017_CODE/Element1'
 * '<S3>'   : 'Sim1017_CODE/Element10'
 * '<S4>'   : 'Sim1017_CODE/Element11'
 * '<S5>'   : 'Sim1017_CODE/Element12'
 * '<S6>'   : 'Sim1017_CODE/Element13'
 * '<S7>'   : 'Sim1017_CODE/Element14'
 * '<S8>'   : 'Sim1017_CODE/Element15'
 * '<S9>'   : 'Sim1017_CODE/Element16'
 * '<S10>'  : 'Sim1017_CODE/Element17'
 * '<S11>'  : 'Sim1017_CODE/Element18'
 * '<S12>'  : 'Sim1017_CODE/Element19'
 * '<S13>'  : 'Sim1017_CODE/Element2'
 * '<S14>'  : 'Sim1017_CODE/Element20'
 * '<S15>'  : 'Sim1017_CODE/Element21'
 * '<S16>'  : 'Sim1017_CODE/Element22'
 * '<S17>'  : 'Sim1017_CODE/Element23'
 * '<S18>'  : 'Sim1017_CODE/Element24'
 * '<S19>'  : 'Sim1017_CODE/Element25'
 * '<S20>'  : 'Sim1017_CODE/Element26'
 * '<S21>'  : 'Sim1017_CODE/Element27'
 * '<S22>'  : 'Sim1017_CODE/Element28'
 * '<S23>'  : 'Sim1017_CODE/Element29'
 * '<S24>'  : 'Sim1017_CODE/Element3'
 * '<S25>'  : 'Sim1017_CODE/Element30'
 * '<S26>'  : 'Sim1017_CODE/Element31'
 * '<S27>'  : 'Sim1017_CODE/Element32'
 * '<S28>'  : 'Sim1017_CODE/Element33'
 * '<S29>'  : 'Sim1017_CODE/Element34'
 * '<S30>'  : 'Sim1017_CODE/Element35'
 * '<S31>'  : 'Sim1017_CODE/Element36'
 * '<S32>'  : 'Sim1017_CODE/Element37'
 * '<S33>'  : 'Sim1017_CODE/Element38'
 * '<S34>'  : 'Sim1017_CODE/Element39'
 * '<S35>'  : 'Sim1017_CODE/Element4'
 * '<S36>'  : 'Sim1017_CODE/Element40'
 * '<S37>'  : 'Sim1017_CODE/Element41'
 * '<S38>'  : 'Sim1017_CODE/Element42'
 * '<S39>'  : 'Sim1017_CODE/Element43'
 * '<S40>'  : 'Sim1017_CODE/Element44'
 * '<S41>'  : 'Sim1017_CODE/Element5'
 * '<S42>'  : 'Sim1017_CODE/Element6'
 * '<S43>'  : 'Sim1017_CODE/Element7'
 * '<S44>'  : 'Sim1017_CODE/Element8'
 * '<S45>'  : 'Sim1017_CODE/Element9'
 * '<S46>'  : 'Sim1017_CODE/Heat treansfer'
 * '<S47>'  : 'Sim1017_CODE/Heat treansfer1'
 * '<S48>'  : 'Sim1017_CODE/Heat treansfer10'
 * '<S49>'  : 'Sim1017_CODE/Heat treansfer11'
 * '<S50>'  : 'Sim1017_CODE/Heat treansfer12'
 * '<S51>'  : 'Sim1017_CODE/Heat treansfer13'
 * '<S52>'  : 'Sim1017_CODE/Heat treansfer14'
 * '<S53>'  : 'Sim1017_CODE/Heat treansfer15'
 * '<S54>'  : 'Sim1017_CODE/Heat treansfer16'
 * '<S55>'  : 'Sim1017_CODE/Heat treansfer17'
 * '<S56>'  : 'Sim1017_CODE/Heat treansfer18'
 * '<S57>'  : 'Sim1017_CODE/Heat treansfer19'
 * '<S58>'  : 'Sim1017_CODE/Heat treansfer2'
 * '<S59>'  : 'Sim1017_CODE/Heat treansfer20'
 * '<S60>'  : 'Sim1017_CODE/Heat treansfer21'
 * '<S61>'  : 'Sim1017_CODE/Heat treansfer22'
 * '<S62>'  : 'Sim1017_CODE/Heat treansfer23'
 * '<S63>'  : 'Sim1017_CODE/Heat treansfer24'
 * '<S64>'  : 'Sim1017_CODE/Heat treansfer25'
 * '<S65>'  : 'Sim1017_CODE/Heat treansfer26'
 * '<S66>'  : 'Sim1017_CODE/Heat treansfer27'
 * '<S67>'  : 'Sim1017_CODE/Heat treansfer28'
 * '<S68>'  : 'Sim1017_CODE/Heat treansfer29'
 * '<S69>'  : 'Sim1017_CODE/Heat treansfer3'
 * '<S70>'  : 'Sim1017_CODE/Heat treansfer30'
 * '<S71>'  : 'Sim1017_CODE/Heat treansfer31'
 * '<S72>'  : 'Sim1017_CODE/Heat treansfer32'
 * '<S73>'  : 'Sim1017_CODE/Heat treansfer33'
 * '<S74>'  : 'Sim1017_CODE/Heat treansfer34'
 * '<S75>'  : 'Sim1017_CODE/Heat treansfer35'
 * '<S76>'  : 'Sim1017_CODE/Heat treansfer36'
 * '<S77>'  : 'Sim1017_CODE/Heat treansfer37'
 * '<S78>'  : 'Sim1017_CODE/Heat treansfer38'
 * '<S79>'  : 'Sim1017_CODE/Heat treansfer39'
 * '<S80>'  : 'Sim1017_CODE/Heat treansfer4'
 * '<S81>'  : 'Sim1017_CODE/Heat treansfer40'
 * '<S82>'  : 'Sim1017_CODE/Heat treansfer41'
 * '<S83>'  : 'Sim1017_CODE/Heat treansfer42'
 * '<S84>'  : 'Sim1017_CODE/Heat treansfer44'
 * '<S85>'  : 'Sim1017_CODE/Heat treansfer5'
 * '<S86>'  : 'Sim1017_CODE/Heat treansfer6'
 * '<S87>'  : 'Sim1017_CODE/Heat treansfer7'
 * '<S88>'  : 'Sim1017_CODE/Heat treansfer8'
 * '<S89>'  : 'Sim1017_CODE/Heat treansfer9'
 */
#endif                                 /* RTW_HEADER_Sim1017_CODE_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
