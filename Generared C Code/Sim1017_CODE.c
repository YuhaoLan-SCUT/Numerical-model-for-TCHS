/*
 * File: Sim1017_CODE.c
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

#include "Sim1017_CODE.h"
#define NumBitsPerChar                 8U

/* Block signals and states (auto storage) */
DW rtDW;

/* External inputs (root inport signals with auto storage) */
ExtU rtU;
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rtGetInf(void);
extern real32_T rtGetInfF(void);
extern real_T rtGetMinusInf(void);
extern real32_T rtGetMinusInfF(void);
extern real_T rtGetNaN(void);
extern real32_T rtGetNaNF(void);
extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
extern void rt_InitInfAndNaN(size_t realSize);
extern boolean_T rtIsInf(real_T value);
extern boolean_T rtIsInfF(real32_T value);
extern boolean_T rtIsNaN(real_T value);
extern boolean_T rtIsNaNF(real32_T value);
typedef struct {
  struct {
    uint32_T wordH;
    uint32_T wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_T wordL;
    uint32_T wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    real32_T wordLreal;
    uint32_T wordLuint;
  } wordL;
} IEEESingle;

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;

/*
 * Initialize rtInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T inf = 0.0;
  if (bitsPerReal == 32U) {
    inf = rtGetInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    inf = tmpVal.fltVal;
  }

  return inf;
}

/*
 * Initialize rtInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real32_T rtGetInfF(void)
{
  IEEESingle infF;
  infF.wordL.wordLuint = 0x7F800000U;
  return infF.wordL.wordLreal;
}

/*
 * Initialize rtMinusInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetMinusInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T minf = 0.0;
  if (bitsPerReal == 32U) {
    minf = rtGetMinusInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    minf = tmpVal.fltVal;
  }

  return minf;
}

/*
 * Initialize rtMinusInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real32_T rtGetMinusInfF(void)
{
  IEEESingle minfF;
  minfF.wordL.wordLuint = 0xFF800000U;
  return minfF.wordL.wordLreal;
}

/*
 * Initialize rtNaN needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetNaN(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T nan = 0.0;
  if (bitsPerReal == 32U) {
    nan = rtGetNaNF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF80000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    nan = tmpVal.fltVal;
  }

  return nan;
}

/*
 * Initialize rtNaNF needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
real32_T rtGetNaNF(void)
{
  IEEESingle nanF = { { 0 } };

  nanF.wordL.wordLuint = 0xFFC00000U;
  return nanF.wordL.wordLreal;
}

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
boolean_T rtIsInf(real_T value)
{
  return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
boolean_T rtIsNaN(real_T value)
{
  return (boolean_T)((value!=value) ? 1U : 0U);
}

/* Test if single-precision value is not a number */
boolean_T rtIsNaNF(real32_T value)
{
  return (boolean_T)(((value!=value) ? 1U : 0U));
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void Sim1017_CODE_step(void)
{
  real_T rtb_Bias2;
  real_T rtb_Gain14_a;
  real_T rtb_Bias2_ib;
  real_T rtb_Bias2_al;
  real_T rtb_MathFunction;
  real_T rtb_CON_i;
  real_T rtb_Gain14_n;
  real_T rtb_Gain4;
  real_T rtb_MathFunction_gh;
  real_T rtb_Gain4_m1;
  real_T rtb_MathFunction_px;
  real_T rtb_Gain14_ou;
  real_T rtb_Gain14_f;
  real_T rtb_Gain4_nu;
  real_T rtb_MathFunction_n;
  real_T rtb_CON;
  real_T rtb_Gain14_c;
  real_T rtb_Gain4_ff;
  real_T rtb_MathFunction_h3;
  real_T rtb_Gain4_g;
  real_T rtb_MathFunction_i;
  real_T rtb_MathFunction_h;
  real_T rtb_Gain14;
  real_T rtb_CON_p;
  real_T rtb_Gain4_jx;
  real_T rtb_MathFunction_a2;
  real_T rtb_Gain14_l;
  real_T rtb_CON_o;
  real_T rtb_Gain4_ht;
  real_T rtb_CONdTdt_jc;
  real_T rtb_Gain4_h;
  real_T rtb_CONdTdt_o4;
  real_T rtb_Gain4_c;
  real_T rtb_CONdTdt_a;
  real_T rtb_CONdTdt_oc;
  real_T rtb_Gain4_m;
  real_T rtb_MathFunction_o;
  real_T rtb_Gain4_oy;
  real_T rtb_CON_n;
  real_T rtb_AH_drexpAlhpa;
  real_T rtb_dTdt_as;
  real_T rtb_Gain4_b;
  real_T rtb_CONdTdt_mfz;
  real_T rtb_Gain4_o3;
  real_T rtb_CONdTdt_bk;
  real_T rtb_Gain4_k0;
  real_T rtb_dTdt_d3;
  real_T rtb_Gain4_lj;
  real_T rtb_dTdt_jt;
  real_T rtb_Gain4_kb;
  real_T rtb_dTdt_fo;
  real_T rtb_Gain4_n;
  real_T rtb_dTdt_kf;
  real_T rtb_Gain4_i;
  real_T rtb_Gain4_m0;
  real_T rtb_dTdt_lg;
  real_T rtb_Gain4_if;
  real_T rtb_CONdTdt_gn;
  real_T rtb_Gain4_ay;
  real_T rtb_MathFunction_bj;
  real_T rtb_Gain4_l;
  real_T rtb_CONdTdt_aa;
  real_T rtb_Gain4_n3;
  real_T rtb_CONdTdt_oz;
  real_T rtb_Gain4_e1;
  real_T rtb_dTdt_m;
  real_T rtb_Gain4_oj;
  real_T rtb_dTdt_cbz;
  real_T rtb_Gain4_aq;
  real_T rtb_dTdt_ou;
  real_T rtb_Gain4_dy;
  real_T rtb_dTdt_nu;
  real_T rtb_Gain4_cjt;
  real_T rtb_dTdt_ey;
  real_T rtb_Gain4_bw;
  real_T rtb_dTdt_bx;
  real_T rtb_Gain4_d4;
  real_T rtb_CONdTdt_ph;
  real_T rtb_Gain4_o;
  real_T rtb_Gain4_p;
  real_T rtb_MathFunction_a5;
  real_T rtb_Gain4_he;
  real_T rtb_Gain4_pj;
  real_T rtb_Gain4_a;
  real_T rtb_MathFunction_k;
  real_T rtb_Gain4_ogc;
  real_T rtb_Gain4_lr;
  real_T rtb_MathFunction_hl;
  real_T rtb_CONdTdt_m0;
  real_T rtb_Gain4_nf;
  real_T rtb_Gain4_le;
  real_T tmp;

  /* DiscreteIntegrator: '<S11>/Integrator' */
  Temp02 = rtDW.Integrator_DSTATE;

  /* Gain: '<S11>/Gain5' incorporates:
   *  Bias: '<S11>/Bias2'
   */
  rtb_Gain14_a = (Temp02
                  + -331.15)
    * 0.33333333333333331;

  /* Switch: '<S11>/Switch2' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  if (!(rtb_Gain14_a
        >= 0.0)) {
    rtb_Gain14_a = 0.0;
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Switch: '<S11>/Switch3' incorporates:
   *  Bias: '<S11>/Bias4'
   *  Constant: '<S11>/Constant4'
   *  Gain: '<S11>/Gain6'
   */
  if (-(rtb_Gain14_a
        + -1.0)
      > 0.0) {
    Beta02 = rtb_Gain14_a;
  } else {
    Beta02 = 1.0;
  }

  /* End of Switch: '<S11>/Switch3' */

  /* DiscreteIntegrator: '<S6>/Integrator' */
  Temp05 = rtDW.Integrator_DSTATE_k;

  /* Gain: '<S6>/Gain5' incorporates:
   *  Bias: '<S6>/Bias2'
   */
  rtb_Gain14_a = (Temp05
                  + -331.15)
    * 0.33333333333333331;

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (!(rtb_Gain14_a
        >= 0.0)) {
    rtb_Gain14_a = 0.0;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Switch: '<S6>/Switch3' incorporates:
   *  Bias: '<S6>/Bias4'
   *  Constant: '<S6>/Constant4'
   *  Gain: '<S6>/Gain6'
   */
  if (-(rtb_Gain14_a
        + -1.0)
      > 0.0) {
    Beta05 = rtb_Gain14_a;
  } else {
    Beta05 = 1.0;
  }

  /* End of Switch: '<S6>/Switch3' */

  /* DiscreteIntegrator: '<S21>/Integrator' */
  Temp08 = rtDW.Integrator_DSTATE_f;

  /* Gain: '<S21>/Gain5' incorporates:
   *  Bias: '<S21>/Bias2'
   */
  rtb_Gain14_a = (Temp08
                  + -331.15)
    * 0.33333333333333331;

  /* Switch: '<S21>/Switch2' incorporates:
   *  Constant: '<S21>/Constant2'
   */
  if (!(rtb_Gain14_a
        >= 0.0)) {
    rtb_Gain14_a = 0.0;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Switch: '<S21>/Switch3' incorporates:
   *  Bias: '<S21>/Bias4'
   *  Constant: '<S21>/Constant4'
   *  Gain: '<S21>/Gain6'
   */
  if (-(rtb_Gain14_a
        + -1.0)
      > 0.0) {
    Beta08 = rtb_Gain14_a;
  } else {
    Beta08 = 1.0;
  }

  /* End of Switch: '<S21>/Switch3' */

  /* DiscreteIntegrator: '<S11>/Integrator1' */
  Alpha02 = rtDW.Integrator1_DSTATE;

  /* DiscreteIntegrator: '<S6>/Integrator1' */
  Alpha05 = rtDW.Integrator1_DSTATE_h;

  /* DiscreteIntegrator: '<S21>/Integrator1' */
  Alpha08 = rtDW.Integrator1_DSTATE_o;

  /* Math: '<S1>/Math Function1' incorporates:
   *  Bias: '<S1>/Bias'
   *  Constant: '<S1>/Constant3'
   *  DiscreteIntegrator: '<S1>/Integrator1'
   *  Gain: '<S1>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_f
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_f + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_f + 1.0, 0.75);
  }

  /* End of Math: '<S1>/Math Function1' */

  /* Product: '<S1>/Product' incorporates:
   *  DiscreteIntegrator: '<S1>/Integrator'
   *  Gain: '<S1>/Gain1'
   *  Gain: '<S1>/Gain2'
   *  Math: '<S1>/Math Function'
   *  Product: '<S1>/Divide'
   *
   * About '<S1>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_a = exp(1.0
                     / (-5.6305025057564676E-5
                        * rtDW.Integrator_DSTATE_l))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S46>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S1>/Integrator'
   *  DiscreteIntegrator: '<S2>/Integrator'
   *  Sum: '<S46>/Subtract'
   */
  rtb_CON_i = (rtDW.Integrator_DSTATE_l
               - rtDW.Integrator_DSTATE_h)
    * 5.6252812605472272E+6;

  /* Switch: '<S1>/Switch1' incorporates:
   *  Bias: '<S1>/Bias3'
   *  Constant: '<S1>/Constant1'
   *  DiscreteIntegrator: '<S1>/Integrator'
   *  Gain: '<S1>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_l
        + -334.15)
      > 0.0) {
    /* Switch: '<S1>/Switch' incorporates:
     *  Bias: '<S1>/Bias2'
     *  Constant: '<S1>/Constant'
     *  Constant: '<S1>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_l
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S1>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Product: '<S1>/Divide1' incorporates:
   *  Inport: '<Root>/In1'
   *  Sum: '<S1>/Add'
   */
  rtb_MathFunction = ((rtb_Gain14_a
                       + rtU.Q_in)
                      - rtb_CON_i)
    * (1.0
       / tmp);

  /* Gain: '<S1>/Gain4' */
  rtb_Gain4 = -2.032520325203252E-9
    * rtb_Gain14_a;

  /* Math: '<S2>/Math Function1' incorporates:
   *  Bias: '<S2>/Bias'
   *  Constant: '<S2>/Constant3'
   *  DiscreteIntegrator: '<S2>/Integrator1'
   *  Gain: '<S2>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_j
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_j + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_j + 1.0, 0.75);
  }

  /* End of Math: '<S2>/Math Function1' */

  /* Product: '<S2>/Product' incorporates:
   *  DiscreteIntegrator: '<S2>/Integrator'
   *  Gain: '<S2>/Gain1'
   *  Gain: '<S2>/Gain2'
   *  Math: '<S2>/Math Function'
   *  Product: '<S2>/Divide'
   *
   * About '<S2>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_n = exp(1.0
                     / (-5.6305025057564676E-5
                        * rtDW.Integrator_DSTATE_h))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S47>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S13>/Integrator'
   *  DiscreteIntegrator: '<S2>/Integrator'
   *  Sum: '<S47>/Subtract'
   */
  rtb_Gain14_a = (rtDW.Integrator_DSTATE_h
                  - rtDW.Integrator_DSTATE_le)
    * 5.6252812605472272E+6;

  /* Switch: '<S2>/Switch1' incorporates:
   *  Bias: '<S2>/Bias3'
   *  Constant: '<S2>/Constant1'
   *  DiscreteIntegrator: '<S2>/Integrator'
   *  Gain: '<S2>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_h
        + -334.15)
      > 0.0) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Bias: '<S2>/Bias2'
     *  Constant: '<S2>/Constant'
     *  Constant: '<S2>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_h
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S2>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* Product: '<S2>/Divide1' incorporates:
   *  Sum: '<S2>/Add'
   */
  rtb_MathFunction_gh = ((rtb_Gain14_n
    + rtb_CON_i)
    - rtb_Gain14_a)
    * (1.0
       / tmp);

  /* Gain: '<S2>/Gain4' */
  rtb_Gain4_m1 = -2.032520325203252E-9
    * rtb_Gain14_n;

  /* Math: '<S3>/Math Function1' incorporates:
   *  Bias: '<S3>/Bias'
   *  Constant: '<S3>/Constant3'
   *  DiscreteIntegrator: '<S3>/Integrator1'
   *  Gain: '<S3>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_e
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_e + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_e + 1.0, 0.75);
  }

  /* End of Math: '<S3>/Math Function1' */

  /* Product: '<S3>/Product' incorporates:
   *  DiscreteIntegrator: '<S3>/Integrator'
   *  Gain: '<S3>/Gain1'
   *  Gain: '<S3>/Gain2'
   *  Math: '<S3>/Math Function'
   *  Product: '<S3>/Divide'
   *
   * About '<S3>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_n = exp(1.0
                     / (-5.6305025057564676E-5
                        * rtDW.Integrator_DSTATE_i))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S65>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S19>/Integrator'
   *  DiscreteIntegrator: '<S3>/Integrator'
   *  Sum: '<S65>/Subtract'
   */
  rtb_CON_i = (rtDW.Integrator_DSTATE_b
               - rtDW.Integrator_DSTATE_i)
    * 5.6252812605472272E+6;

  /* Gain: '<S48>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S20>/Integrator'
   *  DiscreteIntegrator: '<S3>/Integrator'
   *  Sum: '<S48>/Subtract'
   */
  rtb_Gain14_ou = (rtDW.Integrator_DSTATE_i
                   - rtDW.Integrator_DSTATE_n)
    * 5.6252812605472272E+6;

  /* Switch: '<S3>/Switch1' incorporates:
   *  Bias: '<S3>/Bias3'
   *  Constant: '<S3>/Constant1'
   *  DiscreteIntegrator: '<S3>/Integrator'
   *  Gain: '<S3>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_i
        + -334.15)
      > 0.0) {
    /* Switch: '<S3>/Switch' incorporates:
     *  Bias: '<S3>/Bias2'
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_i
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S3>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Product: '<S3>/Divide1' incorporates:
   *  Sum: '<S3>/Add'
   */
  rtb_MathFunction_px = ((rtb_Gain14_n
    + rtb_CON_i)
    - rtb_Gain14_ou)
    * (1.0
       / tmp);

  /* Gain: '<S3>/Gain4' */
  rtb_Gain4_nu = -2.032520325203252E-9
    * rtb_Gain14_n;

  /* Math: '<S4>/Math Function1' incorporates:
   *  Bias: '<S4>/Bias'
   *  Constant: '<S4>/Constant3'
   *  DiscreteIntegrator: '<S4>/Integrator1'
   *  Gain: '<S4>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_fs
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_fs + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_fs + 1.0, 0.75);
  }

  /* End of Math: '<S4>/Math Function1' */

  /* Product: '<S4>/Product' incorporates:
   *  DiscreteIntegrator: '<S4>/Integrator'
   *  Gain: '<S4>/Gain1'
   *  Gain: '<S4>/Gain2'
   *  Math: '<S4>/Math Function'
   *  Product: '<S4>/Divide'
   *
   * About '<S4>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_f = exp(1.0
                     / (-5.6305025057564676E-5
                        * rtDW.Integrator_DSTATE_p))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S62>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S17>/Integrator'
   *  DiscreteIntegrator: '<S4>/Integrator'
   *  Sum: '<S62>/Subtract'
   */
  rtb_Gain14_n = (rtDW.Integrator_DSTATE_d
                  - rtDW.Integrator_DSTATE_p)
    * 5.6252812605472272E+6;

  /* Gain: '<S49>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S4>/Integrator'
   *  DiscreteIntegrator: '<S5>/Integrator'
   *  Sum: '<S49>/Subtract'
   */
  rtb_CON = (rtDW.Integrator_DSTATE_p
             - rtDW.Integrator_DSTATE_fs)
    * 5.6252812605472272E+6;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Bias: '<S4>/Bias3'
   *  Constant: '<S4>/Constant1'
   *  DiscreteIntegrator: '<S4>/Integrator'
   *  Gain: '<S4>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_p
        + -334.15)
      > 0.0) {
    /* Switch: '<S4>/Switch' incorporates:
     *  Bias: '<S4>/Bias2'
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_p
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S4>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* Product: '<S4>/Divide1' incorporates:
   *  Sum: '<S4>/Add'
   */
  rtb_MathFunction_n = ((rtb_Gain14_f
    + rtb_Gain14_n)
                        - rtb_CON)
    * (1.0
       / tmp);

  /* Gain: '<S4>/Gain4' */
  rtb_Gain4_ff = -2.032520325203252E-9
    * rtb_Gain14_f;

  /* Math: '<S5>/Math Function1' incorporates:
   *  Bias: '<S5>/Bias'
   *  Constant: '<S5>/Constant3'
   *  DiscreteIntegrator: '<S5>/Integrator1'
   *  Gain: '<S5>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_fc
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_fc + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_fc + 1.0, 0.75);
  }

  /* End of Math: '<S5>/Math Function1' */

  /* Product: '<S5>/Product' incorporates:
   *  DiscreteIntegrator: '<S5>/Integrator'
   *  Gain: '<S5>/Gain1'
   *  Gain: '<S5>/Gain2'
   *  Math: '<S5>/Math Function'
   *  Product: '<S5>/Divide'
   *
   * About '<S5>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_c = exp(1.0
                     / (-5.6305025057564676E-5
                        * rtDW.Integrator_DSTATE_fs))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S50>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S5>/Integrator'
   *  Sum: '<S50>/Subtract'
   */
  rtb_Gain14_f = (rtDW.Integrator_DSTATE_fs
                  - Temp05)
    * 5.6252812605472272E+6;

  /* Switch: '<S5>/Switch1' incorporates:
   *  Bias: '<S5>/Bias3'
   *  Constant: '<S5>/Constant1'
   *  DiscreteIntegrator: '<S5>/Integrator'
   *  Gain: '<S5>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_fs
        + -334.15)
      > 0.0) {
    /* Switch: '<S5>/Switch' incorporates:
     *  Bias: '<S5>/Bias2'
     *  Constant: '<S5>/Constant'
     *  Constant: '<S5>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_fs
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S5>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Product: '<S5>/Divide1' incorporates:
   *  Sum: '<S5>/Add'
   */
  rtb_MathFunction_h3 = ((rtb_Gain14_c
    + rtb_CON)
    - rtb_Gain14_f)
    * (1.0
       / tmp);

  /* Gain: '<S5>/Gain4' */
  rtb_Gain4_g = -2.032520325203252E-9
    * rtb_Gain14_c;

  /* Math: '<S6>/Math Function1' incorporates:
   *  Bias: '<S6>/Bias'
   *  Constant: '<S6>/Constant3'
   *  Gain: '<S6>/Gain'
   */
  if (-Alpha05
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-Alpha05 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-Alpha05 + 1.0, 0.75);
  }

  /* End of Math: '<S6>/Math Function1' */

  /* Product: '<S6>/Product' incorporates:
   *  Gain: '<S6>/Gain1'
   *  Gain: '<S6>/Gain2'
   *  Math: '<S6>/Math Function'
   *  Product: '<S6>/Divide'
   *
   * About '<S6>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_c = exp(1.0
                     / (-5.6305025057564676E-5
                        * Temp05))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S51>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S18>/Integrator'
   *  Sum: '<S51>/Subtract'
   */
  rtb_CON = (Temp05
             - rtDW.Integrator_DSTATE_k5)
    * 5.6252812605472272E+6;

  /* Switch: '<S6>/Switch1' incorporates:
   *  Bias: '<S6>/Bias3'
   *  Constant: '<S6>/Constant1'
   *  Gain: '<S6>/Gain3'
   */
  if (-(Temp05
        + -334.15)
      > 0.0) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Bias: '<S6>/Bias2'
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     */
    if (Temp05
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S6>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Product: '<S6>/Divide1' incorporates:
   *  Sum: '<S6>/Add'
   */
  rtb_Bias2_ib = ((rtb_Gain14_c
                   + rtb_Gain14_f)
                  - rtb_CON)
    * (1.0
       / tmp);

  /* Gain: '<S6>/Gain4' */
  rtb_MathFunction_i = -2.032520325203252E-9
    * rtb_Gain14_c;

  /* Math: '<S7>/Math Function1' incorporates:
   *  Bias: '<S7>/Bias'
   *  Constant: '<S7>/Constant3'
   *  DiscreteIntegrator: '<S7>/Integrator1'
   *  Gain: '<S7>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_d
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_d + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_d + 1.0, 0.75);
  }

  /* End of Math: '<S7>/Math Function1' */

  /* Product: '<S7>/Product' incorporates:
   *  DiscreteIntegrator: '<S7>/Integrator'
   *  Gain: '<S7>/Gain1'
   *  Gain: '<S7>/Gain2'
   *  Math: '<S7>/Math Function'
   *  Product: '<S7>/Divide'
   *
   * About '<S7>/Math Function':
   *  Operator: exp
   */
  rtb_Gain14_c = exp(1.0
                     / (-5.6305025057564676E-5
                        * rtDW.Integrator_DSTATE_g))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S56>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S12>/Integrator'
   *  DiscreteIntegrator: '<S7>/Integrator'
   *  Sum: '<S56>/Subtract'
   */
  rtb_Gain14_f = (rtDW.Integrator_DSTATE_dz
                  - rtDW.Integrator_DSTATE_g)
    * 5.6252812605472272E+6;

  /* Gain: '<S61>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S17>/Integrator'
   *  DiscreteIntegrator: '<S7>/Integrator'
   *  Sum: '<S61>/Subtract'
   */
  rtb_Gain14 = (rtDW.Integrator_DSTATE_g
                - rtDW.Integrator_DSTATE_d)
    * 5.6252812605472272E+6;

  /* Switch: '<S7>/Switch1' incorporates:
   *  Bias: '<S7>/Bias3'
   *  Constant: '<S7>/Constant1'
   *  DiscreteIntegrator: '<S7>/Integrator'
   *  Gain: '<S7>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_g
        + -334.15)
      > 0.0) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Bias: '<S7>/Bias2'
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_g
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S7>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Product: '<S7>/Divide1' incorporates:
   *  Sum: '<S7>/Add'
   */
  rtb_MathFunction_h = ((rtb_Gain14_c
    + rtb_Gain14_f)
                        - rtb_Gain14)
    * (1.0
       / tmp);

  /* Gain: '<S7>/Gain4' */
  rtb_Gain4_jx = -2.032520325203252E-9
    * rtb_Gain14_c;

  /* Math: '<S8>/Math Function1' incorporates:
   *  Bias: '<S8>/Bias'
   *  Constant: '<S8>/Constant3'
   *  DiscreteIntegrator: '<S8>/Integrator1'
   *  Gain: '<S8>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_n
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_n + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_n + 1.0, 0.75);
  }

  /* End of Math: '<S8>/Math Function1' */

  /* Product: '<S8>/Product' incorporates:
   *  DiscreteIntegrator: '<S8>/Integrator'
   *  Gain: '<S8>/Gain1'
   *  Gain: '<S8>/Gain2'
   *  Math: '<S8>/Math Function'
   *  Product: '<S8>/Divide'
   *
   * About '<S8>/Math Function':
   *  Operator: exp
   */
  rtb_CON_p = exp(1.0
                  / (-5.6305025057564676E-5
                     * rtDW.Integrator_DSTATE_e))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S80>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  DiscreteIntegrator: '<S8>/Integrator'
   *  Sum: '<S80>/Subtract'
   */
  rtb_Gain14_c = (rtDW.Integrator_DSTATE_pd
                  - rtDW.Integrator_DSTATE_e)
    * 5.6252812605472272E+6;

  /* Gain: '<S52>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S8>/Integrator'
   *  DiscreteIntegrator: '<S9>/Integrator'
   *  Sum: '<S52>/Subtract'
   */
  rtb_Gain14_l = (rtDW.Integrator_DSTATE_e
                  - rtDW.Integrator_DSTATE_fx)
    * 5.6252812605472272E+6;

  /* Switch: '<S8>/Switch1' incorporates:
   *  Bias: '<S8>/Bias3'
   *  Constant: '<S8>/Constant1'
   *  DiscreteIntegrator: '<S8>/Integrator'
   *  Gain: '<S8>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_e
        + -334.15)
      > 0.0) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Bias: '<S8>/Bias2'
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_e
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S8>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Product: '<S8>/Divide1' incorporates:
   *  Sum: '<S8>/Add'
   */
  rtb_MathFunction_a2 = ((rtb_CON_p
    + rtb_Gain14_c)
    - rtb_Gain14_l)
    * (1.0
       / tmp);

  /* Gain: '<S8>/Gain4' */
  rtb_Gain4_ht = -2.032520325203252E-9
    * rtb_CON_p;

  /* Math: '<S9>/Math Function1' incorporates:
   *  Bias: '<S9>/Bias'
   *  Constant: '<S9>/Constant3'
   *  DiscreteIntegrator: '<S9>/Integrator1'
   *  Gain: '<S9>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_jf
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_jf + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_jf + 1.0, 0.75);
  }

  /* End of Math: '<S9>/Math Function1' */

  /* Product: '<S9>/Product' incorporates:
   *  DiscreteIntegrator: '<S9>/Integrator'
   *  Gain: '<S9>/Gain1'
   *  Gain: '<S9>/Gain2'
   *  Math: '<S9>/Math Function'
   *  Product: '<S9>/Divide'
   *
   * About '<S9>/Math Function':
   *  Operator: exp
   */
  rtb_CON_o = exp(1.0
                  / (-5.6305025057564676E-5
                     * rtDW.Integrator_DSTATE_fx))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S53>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S10>/Integrator'
   *  DiscreteIntegrator: '<S9>/Integrator'
   *  Sum: '<S53>/Subtract'
   */
  rtb_CON_p = (rtDW.Integrator_DSTATE_fx
               - rtDW.Integrator_DSTATE_hh)
    * 5.6252812605472272E+6;

  /* Switch: '<S9>/Switch1' incorporates:
   *  Bias: '<S9>/Bias3'
   *  Constant: '<S9>/Constant1'
   *  DiscreteIntegrator: '<S9>/Integrator'
   *  Gain: '<S9>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_fx
        + -334.15)
      > 0.0) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Bias: '<S9>/Bias2'
     *  Constant: '<S9>/Constant'
     *  Constant: '<S9>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_fx
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S9>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S9>/Switch1' */

  /* Product: '<S9>/Divide1' incorporates:
   *  Sum: '<S9>/Add'
   */
  rtb_CONdTdt_jc = ((rtb_CON_o
                     + rtb_Gain14_l)
                    - rtb_CON_p)
    * (1.0
       / tmp);

  /* Gain: '<S9>/Gain4' */
  rtb_Gain4_h = -2.032520325203252E-9
    * rtb_CON_o;

  /* Math: '<S10>/Math Function1' incorporates:
   *  Bias: '<S10>/Bias'
   *  Constant: '<S10>/Constant3'
   *  DiscreteIntegrator: '<S10>/Integrator1'
   *  Gain: '<S10>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_ov
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_ov + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_ov + 1.0, 0.75);
  }

  /* End of Math: '<S10>/Math Function1' */

  /* Product: '<S10>/Product' incorporates:
   *  DiscreteIntegrator: '<S10>/Integrator'
   *  Gain: '<S10>/Gain1'
   *  Gain: '<S10>/Gain2'
   *  Math: '<S10>/Math Function'
   *  Product: '<S10>/Divide'
   *
   * About '<S10>/Math Function':
   *  Operator: exp
   */
  rtb_CON_o = exp(1.0
                  / (-5.6305025057564676E-5
                     * rtDW.Integrator_DSTATE_hh))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S54>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S10>/Integrator'
   *  Sum: '<S54>/Subtract'
   */
  rtb_Gain14_l = (rtDW.Integrator_DSTATE_hh
                  - Temp02)
    * 5.6252812605472272E+6;

  /* Switch: '<S10>/Switch1' incorporates:
   *  Bias: '<S10>/Bias3'
   *  Constant: '<S10>/Constant1'
   *  DiscreteIntegrator: '<S10>/Integrator'
   *  Gain: '<S10>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_hh
        + -334.15)
      > 0.0) {
    /* Switch: '<S10>/Switch' incorporates:
     *  Bias: '<S10>/Bias2'
     *  Constant: '<S10>/Constant'
     *  Constant: '<S10>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_hh
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S10>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Product: '<S10>/Divide1' incorporates:
   *  Sum: '<S10>/Add'
   */
  rtb_CONdTdt_o4 = ((rtb_CON_o
                     + rtb_CON_p)
                    - rtb_Gain14_l)
    * (1.0
       / tmp);

  /* Gain: '<S10>/Gain4' */
  rtb_Gain4_c = -2.032520325203252E-9
    * rtb_CON_o;

  /* Math: '<S11>/Math Function1' incorporates:
   *  Bias: '<S11>/Bias'
   *  Constant: '<S11>/Constant3'
   *  Gain: '<S11>/Gain'
   */
  if (-Alpha02
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-Alpha02 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-Alpha02 + 1.0, 0.75);
  }

  /* End of Math: '<S11>/Math Function1' */

  /* Product: '<S11>/Product' incorporates:
   *  Gain: '<S11>/Gain1'
   *  Gain: '<S11>/Gain2'
   *  Math: '<S11>/Math Function'
   *  Product: '<S11>/Divide'
   *
   * About '<S11>/Math Function':
   *  Operator: exp
   */
  rtb_CON_o = exp(1.0
                  / (-5.6305025057564676E-5
                     * Temp02))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S55>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S41>/Integrator'
   *  Sum: '<S55>/Subtract'
   */
  rtb_CON_p = (Temp02
               - rtDW.Integrator_DSTATE_bz)
    * 5.6252812605472272E+6;

  /* Switch: '<S11>/Switch1' incorporates:
   *  Bias: '<S11>/Bias3'
   *  Constant: '<S11>/Constant1'
   *  Gain: '<S11>/Gain3'
   */
  if (-(Temp02
        + -334.15)
      > 0.0) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Bias: '<S11>/Bias2'
     *  Constant: '<S11>/Constant'
     *  Constant: '<S11>/Constant1'
     */
    if (Temp02
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S11>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Product: '<S11>/Divide1' incorporates:
   *  Sum: '<S11>/Add'
   */
  rtb_Bias2 = ((rtb_CON_o
                + rtb_Gain14_l)
               - rtb_CON_p)
    * (1.0
       / tmp);

  /* Gain: '<S11>/Gain4' */
  rtb_CONdTdt_a = -2.032520325203252E-9
    * rtb_CON_o;

  /* Math: '<S12>/Math Function1' incorporates:
   *  Bias: '<S12>/Bias'
   *  Constant: '<S12>/Constant3'
   *  DiscreteIntegrator: '<S12>/Integrator1'
   *  Gain: '<S12>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_p
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_p + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_p + 1.0, 0.75);
  }

  /* End of Math: '<S12>/Math Function1' */

  /* Product: '<S12>/Product' incorporates:
   *  DiscreteIntegrator: '<S12>/Integrator'
   *  Gain: '<S12>/Gain1'
   *  Gain: '<S12>/Gain2'
   *  Math: '<S12>/Math Function'
   *  Product: '<S12>/Divide'
   *
   * About '<S12>/Math Function':
   *  Operator: exp
   */
  rtb_CON_o = exp(1.0
                  / (-5.6305025057564676E-5
                     * rtDW.Integrator_DSTATE_dz))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S89>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S12>/Integrator'
   *  DiscreteIntegrator: '<S45>/Integrator'
   *  Sum: '<S89>/Subtract'
   */
  rtb_Gain14_l = (rtDW.Integrator_DSTATE_gk
                  - rtDW.Integrator_DSTATE_dz)
    * 5.6252812605472272E+6;

  /* Switch: '<S12>/Switch1' incorporates:
   *  Bias: '<S12>/Bias3'
   *  Constant: '<S12>/Constant1'
   *  DiscreteIntegrator: '<S12>/Integrator'
   *  Gain: '<S12>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_dz
        + -334.15)
      > 0.0) {
    /* Switch: '<S12>/Switch' incorporates:
     *  Bias: '<S12>/Bias2'
     *  Constant: '<S12>/Constant'
     *  Constant: '<S12>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_dz
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S12>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Product: '<S12>/Divide1' incorporates:
   *  Sum: '<S12>/Add'
   */
  rtb_CONdTdt_oc = ((rtb_CON_o
                     + rtb_Gain14_l)
                    - rtb_Gain14_f)
    * (1.0
       / tmp);

  /* Gain: '<S12>/Gain4' */
  rtb_Gain4_m = -2.032520325203252E-9
    * rtb_CON_o;

  /* Math: '<S13>/Math Function1' incorporates:
   *  Bias: '<S13>/Bias'
   *  Constant: '<S13>/Constant3'
   *  DiscreteIntegrator: '<S13>/Integrator1'
   *  Gain: '<S13>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_f0
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_f0 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_f0 + 1.0, 0.75);
  }

  /* End of Math: '<S13>/Math Function1' */

  /* Product: '<S13>/Product' incorporates:
   *  DiscreteIntegrator: '<S13>/Integrator'
   *  Gain: '<S13>/Gain1'
   *  Gain: '<S13>/Gain2'
   *  Math: '<S13>/Math Function'
   *  Product: '<S13>/Divide'
   *
   * About '<S13>/Math Function':
   *  Operator: exp
   */
  rtb_CON_o = exp(1.0
                  / (-5.6305025057564676E-5
                     * rtDW.Integrator_DSTATE_le))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S58>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S13>/Integrator'
   *  DiscreteIntegrator: '<S24>/Integrator'
   *  Sum: '<S58>/Subtract'
   */
  rtb_Gain14_f = (rtDW.Integrator_DSTATE_le
                  - rtDW.Integrator_DSTATE_g3)
    * 5.6252812605472272E+6;

  /* Switch: '<S13>/Switch1' incorporates:
   *  Bias: '<S13>/Bias3'
   *  Constant: '<S13>/Constant1'
   *  DiscreteIntegrator: '<S13>/Integrator'
   *  Gain: '<S13>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_le
        + -334.15)
      > 0.0) {
    /* Switch: '<S13>/Switch' incorporates:
     *  Bias: '<S13>/Bias2'
     *  Constant: '<S13>/Constant'
     *  Constant: '<S13>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_le
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S13>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Product: '<S13>/Divide1' incorporates:
   *  Sum: '<S13>/Add'
   */
  rtb_MathFunction_o = ((rtb_CON_o
    + rtb_Gain14_a)
                        - rtb_Gain14_f)
    * (1.0
       / tmp);

  /* Gain: '<S13>/Gain4' */
  rtb_Gain4_oy = -2.032520325203252E-9
    * rtb_CON_o;

  /* Math: '<S14>/Math Function1' incorporates:
   *  Bias: '<S14>/Bias'
   *  Constant: '<S14>/Constant3'
   *  DiscreteIntegrator: '<S14>/Integrator1'
   *  Gain: '<S14>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_m
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_m + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_m + 1.0, 0.75);
  }

  /* End of Math: '<S14>/Math Function1' */

  /* Product: '<S14>/Product' incorporates:
   *  DiscreteIntegrator: '<S14>/Integrator'
   *  Gain: '<S14>/Gain1'
   *  Gain: '<S14>/Gain2'
   *  Math: '<S14>/Math Function'
   *  Product: '<S14>/Divide'
   *
   * About '<S14>/Math Function':
   *  Operator: exp
   */
  rtb_CON_o = exp(1.0
                  / (-5.6305025057564676E-5
                     * rtDW.Integrator_DSTATE_h0))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S86>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S14>/Integrator'
   *  DiscreteIntegrator: '<S42>/Integrator'
   *  Sum: '<S86>/Subtract'
   */
  rtb_Gain14_a = (rtDW.Integrator_DSTATE_ef
                  - rtDW.Integrator_DSTATE_h0)
    * 5.6252812605472272E+6;

  /* Gain: '<S57>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S14>/Integrator'
   *  DiscreteIntegrator: '<S15>/Integrator'
   *  Sum: '<S57>/Subtract'
   */
  rtb_CON_n = (rtDW.Integrator_DSTATE_h0
               - rtDW.Integrator_DSTATE_f5)
    * 5.6252812605472272E+6;

  /* Switch: '<S14>/Switch1' incorporates:
   *  Bias: '<S14>/Bias3'
   *  Constant: '<S14>/Constant1'
   *  DiscreteIntegrator: '<S14>/Integrator'
   *  Gain: '<S14>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_h0
        + -334.15)
      > 0.0) {
    /* Switch: '<S14>/Switch' incorporates:
     *  Bias: '<S14>/Bias2'
     *  Constant: '<S14>/Constant'
     *  Constant: '<S14>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_h0
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S14>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Product: '<S14>/Divide1' incorporates:
   *  Sum: '<S14>/Add'
   */
  rtb_dTdt_as = ((rtb_CON_o
                  + rtb_Gain14_a)
                 - rtb_CON_n)
    * (1.0
       / tmp);

  /* Gain: '<S14>/Gain4' */
  rtb_Gain4_b = -2.032520325203252E-9
    * rtb_CON_o;

  /* Math: '<S15>/Math Function1' incorporates:
   *  Bias: '<S15>/Bias'
   *  Constant: '<S15>/Constant3'
   *  DiscreteIntegrator: '<S15>/Integrator1'
   *  Gain: '<S15>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_mn
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_mn + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_mn + 1.0, 0.75);
  }

  /* End of Math: '<S15>/Math Function1' */

  /* Product: '<S15>/Product' incorporates:
   *  DiscreteIntegrator: '<S15>/Integrator'
   *  Gain: '<S15>/Gain1'
   *  Gain: '<S15>/Gain2'
   *  Math: '<S15>/Math Function'
   *  Product: '<S15>/Divide'
   *
   * About '<S15>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_f5))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S59>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S15>/Integrator'
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  Sum: '<S59>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_f5
               - rtDW.Integrator_DSTATE_c)
    * 5.6252812605472272E+6;

  /* Switch: '<S15>/Switch1' incorporates:
   *  Bias: '<S15>/Bias3'
   *  Constant: '<S15>/Constant1'
   *  DiscreteIntegrator: '<S15>/Integrator'
   *  Gain: '<S15>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_f5
        + -334.15)
      > 0.0) {
    /* Switch: '<S15>/Switch' incorporates:
     *  Bias: '<S15>/Bias2'
     *  Constant: '<S15>/Constant'
     *  Constant: '<S15>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_f5
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S15>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S15>/Switch1' */

  /* Product: '<S15>/Divide1' incorporates:
   *  Sum: '<S15>/Add'
   */
  rtb_CONdTdt_mfz = ((rtb_AH_drexpAlhpa
                      + rtb_CON_n)
                     - rtb_CON_o)
    * (1.0
       / tmp);

  /* Gain: '<S15>/Gain4' */
  rtb_Gain4_o3 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S16>/Math Function1' incorporates:
   *  Bias: '<S16>/Bias'
   *  Constant: '<S16>/Constant3'
   *  DiscreteIntegrator: '<S16>/Integrator1'
   *  Gain: '<S16>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_c
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_c + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_c + 1.0, 0.75);
  }

  /* End of Math: '<S16>/Math Function1' */

  /* Product: '<S16>/Product' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  Gain: '<S16>/Gain1'
   *  Gain: '<S16>/Gain2'
   *  Math: '<S16>/Math Function'
   *  Product: '<S16>/Divide'
   *
   * About '<S16>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_c))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S60>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  DiscreteIntegrator: '<S43>/Integrator'
   *  Sum: '<S60>/Subtract'
   */
  rtb_CON_n = (rtDW.Integrator_DSTATE_c
               - rtDW.Integrator_DSTATE_ki)
    * 5.6252812605472272E+6;

  /* Switch: '<S16>/Switch1' incorporates:
   *  Bias: '<S16>/Bias3'
   *  Constant: '<S16>/Constant1'
   *  DiscreteIntegrator: '<S16>/Integrator'
   *  Gain: '<S16>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_c
        + -334.15)
      > 0.0) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Bias: '<S16>/Bias2'
     *  Constant: '<S16>/Constant'
     *  Constant: '<S16>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_c
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S16>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Product: '<S16>/Divide1' incorporates:
   *  Sum: '<S16>/Add'
   */
  rtb_CONdTdt_bk = ((rtb_AH_drexpAlhpa
                     + rtb_CON_o)
                    - rtb_CON_n)
    * (1.0
       / tmp);

  /* Gain: '<S16>/Gain4' */
  rtb_Gain4_k0 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S17>/Math Function1' incorporates:
   *  Bias: '<S17>/Bias'
   *  Constant: '<S17>/Constant3'
   *  DiscreteIntegrator: '<S17>/Integrator1'
   *  Gain: '<S17>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_k
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_k + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_k + 1.0, 0.75);
  }

  /* End of Math: '<S17>/Math Function1' */

  /* Product: '<S17>/Product' incorporates:
   *  DiscreteIntegrator: '<S17>/Integrator'
   *  Gain: '<S17>/Gain1'
   *  Gain: '<S17>/Gain2'
   *  Math: '<S17>/Math Function'
   *  Product: '<S17>/Divide'
   *
   * About '<S17>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_d))
    * -3.857772E+25
    * tmp;

  /* Switch: '<S17>/Switch1' incorporates:
   *  Bias: '<S17>/Bias3'
   *  Constant: '<S17>/Constant1'
   *  DiscreteIntegrator: '<S17>/Integrator'
   *  Gain: '<S17>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_d
        + -334.15)
      > 0.0) {
    /* Switch: '<S17>/Switch' incorporates:
     *  Bias: '<S17>/Bias2'
     *  Constant: '<S17>/Constant'
     *  Constant: '<S17>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_d
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S17>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S17>/Switch1' */

  /* Product: '<S17>/Divide1' incorporates:
   *  Sum: '<S17>/Add'
   */
  rtb_dTdt_d3 = ((rtb_AH_drexpAlhpa
                  + rtb_Gain14)
                 - rtb_Gain14_n)
    * (1.0
       / tmp);

  /* Gain: '<S17>/Gain4' */
  rtb_Gain4_lj = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S18>/Math Function1' incorporates:
   *  Bias: '<S18>/Bias'
   *  Constant: '<S18>/Constant3'
   *  DiscreteIntegrator: '<S18>/Integrator1'
   *  Gain: '<S18>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_c5
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_c5 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_c5 + 1.0, 0.75);
  }

  /* End of Math: '<S18>/Math Function1' */

  /* Product: '<S18>/Product' incorporates:
   *  DiscreteIntegrator: '<S18>/Integrator'
   *  Gain: '<S18>/Gain1'
   *  Gain: '<S18>/Gain2'
   *  Math: '<S18>/Math Function'
   *  Product: '<S18>/Divide'
   *
   * About '<S18>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_k5))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S63>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S18>/Integrator'
   *  DiscreteIntegrator: '<S19>/Integrator'
   *  Sum: '<S63>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_k5
               - rtDW.Integrator_DSTATE_b)
    * 5.6252812605472272E+6;

  /* Switch: '<S18>/Switch1' incorporates:
   *  Bias: '<S18>/Bias3'
   *  Constant: '<S18>/Constant1'
   *  DiscreteIntegrator: '<S18>/Integrator'
   *  Gain: '<S18>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_k5
        + -334.15)
      > 0.0) {
    /* Switch: '<S18>/Switch' incorporates:
     *  Bias: '<S18>/Bias2'
     *  Constant: '<S18>/Constant'
     *  Constant: '<S18>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_k5
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S18>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Product: '<S18>/Divide1' incorporates:
   *  Sum: '<S18>/Add'
   */
  rtb_dTdt_jt = ((rtb_AH_drexpAlhpa
                  + rtb_CON)
                 - rtb_CON_o)
    * (1.0
       / tmp);

  /* Gain: '<S18>/Gain4' */
  rtb_Gain4_kb = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S19>/Math Function1' incorporates:
   *  Bias: '<S19>/Bias'
   *  Constant: '<S19>/Constant3'
   *  DiscreteIntegrator: '<S19>/Integrator1'
   *  Gain: '<S19>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_dt
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_dt + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_dt + 1.0, 0.75);
  }

  /* End of Math: '<S19>/Math Function1' */

  /* Product: '<S19>/Product' incorporates:
   *  DiscreteIntegrator: '<S19>/Integrator'
   *  Gain: '<S19>/Gain1'
   *  Gain: '<S19>/Gain2'
   *  Math: '<S19>/Math Function'
   *  Product: '<S19>/Divide'
   *
   * About '<S19>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_b))
    * -3.857772E+25
    * tmp;

  /* Switch: '<S19>/Switch1' incorporates:
   *  Bias: '<S19>/Bias3'
   *  Constant: '<S19>/Constant1'
   *  DiscreteIntegrator: '<S19>/Integrator'
   *  Gain: '<S19>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_b
        + -334.15)
      > 0.0) {
    /* Switch: '<S19>/Switch' incorporates:
     *  Bias: '<S19>/Bias2'
     *  Constant: '<S19>/Constant'
     *  Constant: '<S19>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_b
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S19>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* Product: '<S19>/Divide1' incorporates:
   *  Sum: '<S19>/Add'
   */
  rtb_dTdt_fo = ((rtb_AH_drexpAlhpa
                  + rtb_CON_o)
                 - rtb_CON_i)
    * (1.0
       / tmp);

  /* Gain: '<S19>/Gain4' */
  rtb_Gain4_n = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S20>/Math Function1' incorporates:
   *  Bias: '<S20>/Bias'
   *  Constant: '<S20>/Constant3'
   *  DiscreteIntegrator: '<S20>/Integrator1'
   *  Gain: '<S20>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_p3
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_p3 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_p3 + 1.0, 0.75);
  }

  /* End of Math: '<S20>/Math Function1' */

  /* Product: '<S20>/Product' incorporates:
   *  DiscreteIntegrator: '<S20>/Integrator'
   *  Gain: '<S20>/Gain1'
   *  Gain: '<S20>/Gain2'
   *  Math: '<S20>/Math Function'
   *  Product: '<S20>/Divide'
   *
   * About '<S20>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_n))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S64>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S20>/Integrator'
   *  DiscreteIntegrator: '<S26>/Integrator'
   *  Sum: '<S64>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_n
               - rtDW.Integrator_DSTATE_l0)
    * 5.6252812605472272E+6;

  /* Switch: '<S20>/Switch1' incorporates:
   *  Bias: '<S20>/Bias3'
   *  Constant: '<S20>/Constant1'
   *  DiscreteIntegrator: '<S20>/Integrator'
   *  Gain: '<S20>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_n
        + -334.15)
      > 0.0) {
    /* Switch: '<S20>/Switch' incorporates:
     *  Bias: '<S20>/Bias2'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S20>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_n
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S20>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Product: '<S20>/Divide1' incorporates:
   *  Sum: '<S20>/Add'
   */
  rtb_dTdt_kf = ((rtb_AH_drexpAlhpa
                  + rtb_Gain14_ou)
                 - rtb_CON_o)
    * (1.0
       / tmp);

  /* Gain: '<S20>/Gain4' */
  rtb_Gain4_i = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S21>/Math Function1' incorporates:
   *  Bias: '<S21>/Bias'
   *  Constant: '<S21>/Constant3'
   *  Gain: '<S21>/Gain'
   */
  if (-Alpha08
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-Alpha08 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-Alpha08 + 1.0, 0.75);
  }

  /* End of Math: '<S21>/Math Function1' */

  /* Product: '<S21>/Product' incorporates:
   *  Gain: '<S21>/Gain1'
   *  Gain: '<S21>/Gain2'
   *  Math: '<S21>/Math Function'
   *  Product: '<S21>/Divide'
   *
   * About '<S21>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * Temp08))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S66>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S30>/Integrator'
   *  Sum: '<S66>/Subtract'
   */
  rtb_Gain14 = (rtDW.Integrator_DSTATE_ex
                - Temp08)
    * 5.6252812605472272E+6;

  /* Gain: '<S75>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S36>/Integrator'
   *  Sum: '<S75>/Subtract'
   */
  rtb_CON = (Temp08
             - rtDW.Integrator_DSTATE_hhz)
    * 5.6252812605472272E+6;

  /* Switch: '<S21>/Switch1' incorporates:
   *  Bias: '<S21>/Bias3'
   *  Constant: '<S21>/Constant1'
   *  Gain: '<S21>/Gain3'
   */
  if (-(Temp08
        + -334.15)
      > 0.0) {
    /* Switch: '<S21>/Switch' incorporates:
     *  Bias: '<S21>/Bias2'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S21>/Constant1'
     */
    if (Temp08
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S21>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Product: '<S21>/Divide1' incorporates:
   *  Sum: '<S21>/Add'
   */
  rtb_Bias2_al = ((rtb_AH_drexpAlhpa
                   + rtb_Gain14)
                  - rtb_CON)
    * (1.0
       / tmp);

  /* Gain: '<S21>/Gain4' */
  rtb_Gain4_m0 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S22>/Math Function1' incorporates:
   *  Bias: '<S22>/Bias'
   *  Constant: '<S22>/Constant3'
   *  DiscreteIntegrator: '<S22>/Integrator1'
   *  Gain: '<S22>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_ms
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_ms + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_ms + 1.0, 0.75);
  }

  /* End of Math: '<S22>/Math Function1' */

  /* Product: '<S22>/Product' incorporates:
   *  DiscreteIntegrator: '<S22>/Integrator'
   *  Gain: '<S22>/Gain1'
   *  Gain: '<S22>/Gain2'
   *  Math: '<S22>/Math Function'
   *  Product: '<S22>/Divide'
   *
   * About '<S22>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_dl))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S72>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S22>/Integrator'
   *  DiscreteIntegrator: '<S27>/Integrator'
   *  Sum: '<S72>/Subtract'
   */
  rtb_Gain14_ou = (rtDW.Integrator_DSTATE_i2
                   - rtDW.Integrator_DSTATE_dl)
    * 5.6252812605472272E+6;

  /* Gain: '<S67>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S22>/Integrator'
   *  DiscreteIntegrator: '<S23>/Integrator'
   *  Sum: '<S67>/Subtract'
   */
  rtb_Gain14_n = (rtDW.Integrator_DSTATE_dl
                  - rtDW.Integrator_DSTATE_ir)
    * 5.6252812605472272E+6;

  /* Switch: '<S22>/Switch1' incorporates:
   *  Bias: '<S22>/Bias3'
   *  Constant: '<S22>/Constant1'
   *  DiscreteIntegrator: '<S22>/Integrator'
   *  Gain: '<S22>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_dl
        + -334.15)
      > 0.0) {
    /* Switch: '<S22>/Switch' incorporates:
     *  Bias: '<S22>/Bias2'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S22>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_dl
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S22>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* Product: '<S22>/Divide1' incorporates:
   *  Sum: '<S22>/Add'
   */
  rtb_dTdt_lg = ((rtb_AH_drexpAlhpa
                  + rtb_Gain14_ou)
                 - rtb_Gain14_n)
    * (1.0
       / tmp);

  /* Gain: '<S22>/Gain4' */
  rtb_Gain4_if = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S23>/Math Function1' incorporates:
   *  Bias: '<S23>/Bias'
   *  Constant: '<S23>/Constant3'
   *  DiscreteIntegrator: '<S23>/Integrator1'
   *  Gain: '<S23>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_or
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_or + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_or + 1.0, 0.75);
  }

  /* End of Math: '<S23>/Math Function1' */

  /* Product: '<S23>/Product' incorporates:
   *  DiscreteIntegrator: '<S23>/Integrator'
   *  Gain: '<S23>/Gain1'
   *  Gain: '<S23>/Gain2'
   *  Math: '<S23>/Math Function'
   *  Product: '<S23>/Divide'
   *
   * About '<S23>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ir))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S68>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S23>/Integrator'
   *  DiscreteIntegrator: '<S25>/Integrator'
   *  Sum: '<S68>/Subtract'
   */
  rtb_CON_i = (rtDW.Integrator_DSTATE_ir
               - rtDW.Integrator_DSTATE_a)
    * 5.6252812605472272E+6;

  /* Switch: '<S23>/Switch1' incorporates:
   *  Bias: '<S23>/Bias3'
   *  Constant: '<S23>/Constant1'
   *  DiscreteIntegrator: '<S23>/Integrator'
   *  Gain: '<S23>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ir
        + -334.15)
      > 0.0) {
    /* Switch: '<S23>/Switch' incorporates:
     *  Bias: '<S23>/Bias2'
     *  Constant: '<S23>/Constant'
     *  Constant: '<S23>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ir
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S23>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S23>/Switch1' */

  /* Product: '<S23>/Divide1' incorporates:
   *  Sum: '<S23>/Add'
   */
  rtb_CONdTdt_gn = ((rtb_AH_drexpAlhpa
                     + rtb_Gain14_n)
                    - rtb_CON_i)
    * (1.0
       / tmp);

  /* Gain: '<S23>/Gain4' */
  rtb_Gain4_ay = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S24>/Math Function1' incorporates:
   *  Bias: '<S24>/Bias'
   *  Constant: '<S24>/Constant3'
   *  DiscreteIntegrator: '<S24>/Integrator1'
   *  Gain: '<S24>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_dn
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_dn + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_dn + 1.0, 0.75);
  }

  /* End of Math: '<S24>/Math Function1' */

  /* Product: '<S24>/Product' incorporates:
   *  DiscreteIntegrator: '<S24>/Integrator'
   *  Gain: '<S24>/Gain1'
   *  Gain: '<S24>/Gain2'
   *  Math: '<S24>/Math Function'
   *  Product: '<S24>/Divide'
   *
   * About '<S24>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_g3))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S69>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S24>/Integrator'
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  Sum: '<S69>/Subtract'
   */
  rtb_Gain14_n = (rtDW.Integrator_DSTATE_g3
                  - rtDW.Integrator_DSTATE_pd)
    * 5.6252812605472272E+6;

  /* Switch: '<S24>/Switch1' incorporates:
   *  Bias: '<S24>/Bias3'
   *  Constant: '<S24>/Constant1'
   *  DiscreteIntegrator: '<S24>/Integrator'
   *  Gain: '<S24>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_g3
        + -334.15)
      > 0.0) {
    /* Switch: '<S24>/Switch' incorporates:
     *  Bias: '<S24>/Bias2'
     *  Constant: '<S24>/Constant'
     *  Constant: '<S24>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_g3
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S24>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S24>/Switch1' */

  /* Product: '<S24>/Divide1' incorporates:
   *  Sum: '<S24>/Add'
   */
  rtb_MathFunction_bj = ((rtb_AH_drexpAlhpa
    + rtb_Gain14_f)
    - rtb_Gain14_n)
    * (1.0
       / tmp);

  /* Gain: '<S24>/Gain4' */
  rtb_Gain4_l = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S25>/Math Function1' incorporates:
   *  Bias: '<S25>/Bias'
   *  Constant: '<S25>/Constant3'
   *  DiscreteIntegrator: '<S25>/Integrator1'
   *  Gain: '<S25>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_b
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_b + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_b + 1.0, 0.75);
  }

  /* End of Math: '<S25>/Math Function1' */

  /* Product: '<S25>/Product' incorporates:
   *  DiscreteIntegrator: '<S25>/Integrator'
   *  Gain: '<S25>/Gain1'
   *  Gain: '<S25>/Gain2'
   *  Math: '<S25>/Math Function'
   *  Product: '<S25>/Divide'
   *
   * About '<S25>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_a))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S70>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S25>/Integrator'
   *  DiscreteIntegrator: '<S28>/Integrator'
   *  Sum: '<S70>/Subtract'
   */
  rtb_Gain14_f = (rtDW.Integrator_DSTATE_a
                  - rtDW.Integrator_DSTATE_ad)
    * 5.6252812605472272E+6;

  /* Switch: '<S25>/Switch1' incorporates:
   *  Bias: '<S25>/Bias3'
   *  Constant: '<S25>/Constant1'
   *  DiscreteIntegrator: '<S25>/Integrator'
   *  Gain: '<S25>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_a
        + -334.15)
      > 0.0) {
    /* Switch: '<S25>/Switch' incorporates:
     *  Bias: '<S25>/Bias2'
     *  Constant: '<S25>/Constant'
     *  Constant: '<S25>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_a
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S25>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S25>/Switch1' */

  /* Product: '<S25>/Divide1' incorporates:
   *  Sum: '<S25>/Add'
   */
  rtb_CONdTdt_aa = ((rtb_AH_drexpAlhpa
                     + rtb_CON_i)
                    - rtb_Gain14_f)
    * (1.0
       / tmp);

  /* Gain: '<S25>/Gain4' */
  rtb_Gain4_n3 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S26>/Math Function1' incorporates:
   *  Bias: '<S26>/Bias'
   *  Constant: '<S26>/Constant3'
   *  DiscreteIntegrator: '<S26>/Integrator1'
   *  Gain: '<S26>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_ju
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_ju + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_ju + 1.0, 0.75);
  }

  /* End of Math: '<S26>/Math Function1' */

  /* Product: '<S26>/Product' incorporates:
   *  DiscreteIntegrator: '<S26>/Integrator'
   *  Gain: '<S26>/Gain1'
   *  Gain: '<S26>/Gain2'
   *  Math: '<S26>/Math Function'
   *  Product: '<S26>/Divide'
   *
   * About '<S26>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_l0))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S71>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S26>/Integrator'
   *  DiscreteIntegrator: '<S27>/Integrator'
   *  Sum: '<S71>/Subtract'
   */
  rtb_CON_i = (rtDW.Integrator_DSTATE_l0
               - rtDW.Integrator_DSTATE_i2)
    * 5.6252812605472272E+6;

  /* Switch: '<S26>/Switch1' incorporates:
   *  Bias: '<S26>/Bias3'
   *  Constant: '<S26>/Constant1'
   *  DiscreteIntegrator: '<S26>/Integrator'
   *  Gain: '<S26>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_l0
        + -334.15)
      > 0.0) {
    /* Switch: '<S26>/Switch' incorporates:
     *  Bias: '<S26>/Bias2'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S26>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_l0
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S26>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S26>/Switch1' */

  /* Product: '<S26>/Divide1' incorporates:
   *  Sum: '<S26>/Add'
   */
  rtb_CONdTdt_oz = ((rtb_AH_drexpAlhpa
                     + rtb_CON_o)
                    - rtb_CON_i)
    * (1.0
       / tmp);

  /* Gain: '<S26>/Gain4' */
  rtb_Gain4_e1 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S27>/Math Function1' incorporates:
   *  Bias: '<S27>/Bias'
   *  Constant: '<S27>/Constant3'
   *  DiscreteIntegrator: '<S27>/Integrator1'
   *  Gain: '<S27>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_p2
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_p2 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_p2 + 1.0, 0.75);
  }

  /* End of Math: '<S27>/Math Function1' */

  /* Product: '<S27>/Product' incorporates:
   *  DiscreteIntegrator: '<S27>/Integrator'
   *  Gain: '<S27>/Gain1'
   *  Gain: '<S27>/Gain2'
   *  Math: '<S27>/Math Function'
   *  Product: '<S27>/Divide'
   *
   * About '<S27>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_i2))
    * -3.857772E+25
    * tmp;

  /* Switch: '<S27>/Switch1' incorporates:
   *  Bias: '<S27>/Bias3'
   *  Constant: '<S27>/Constant1'
   *  DiscreteIntegrator: '<S27>/Integrator'
   *  Gain: '<S27>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_i2
        + -334.15)
      > 0.0) {
    /* Switch: '<S27>/Switch' incorporates:
     *  Bias: '<S27>/Bias2'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S27>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_i2
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S27>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S27>/Switch1' */

  /* Product: '<S27>/Divide1' incorporates:
   *  Sum: '<S27>/Add'
   */
  rtb_dTdt_m = ((rtb_AH_drexpAlhpa
                 + rtb_CON_i)
                - rtb_Gain14_ou)
    * (1.0
       / tmp);

  /* Gain: '<S27>/Gain4' */
  rtb_Gain4_oj = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S28>/Math Function1' incorporates:
   *  Bias: '<S28>/Bias'
   *  Constant: '<S28>/Constant3'
   *  DiscreteIntegrator: '<S28>/Integrator1'
   *  Gain: '<S28>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_hz
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_hz + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_hz + 1.0, 0.75);
  }

  /* End of Math: '<S28>/Math Function1' */

  /* Product: '<S28>/Product' incorporates:
   *  DiscreteIntegrator: '<S28>/Integrator'
   *  Gain: '<S28>/Gain1'
   *  Gain: '<S28>/Gain2'
   *  Math: '<S28>/Math Function'
   *  Product: '<S28>/Divide'
   *
   * About '<S28>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ad))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S73>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S28>/Integrator'
   *  DiscreteIntegrator: '<S29>/Integrator'
   *  Sum: '<S73>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_ad
               - rtDW.Integrator_DSTATE_j)
    * 5.6252812605472272E+6;

  /* Switch: '<S28>/Switch1' incorporates:
   *  Bias: '<S28>/Bias3'
   *  Constant: '<S28>/Constant1'
   *  DiscreteIntegrator: '<S28>/Integrator'
   *  Gain: '<S28>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ad
        + -334.15)
      > 0.0) {
    /* Switch: '<S28>/Switch' incorporates:
     *  Bias: '<S28>/Bias2'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S28>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ad
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S28>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S28>/Switch1' */

  /* Product: '<S28>/Divide1' incorporates:
   *  Sum: '<S28>/Add'
   */
  rtb_dTdt_cbz = ((rtb_AH_drexpAlhpa
                   + rtb_Gain14_f)
                  - rtb_CON_o)
    * (1.0
       / tmp);

  /* Gain: '<S28>/Gain4' */
  rtb_Gain4_aq = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S29>/Math Function1' incorporates:
   *  Bias: '<S29>/Bias'
   *  Constant: '<S29>/Constant3'
   *  DiscreteIntegrator: '<S29>/Integrator1'
   *  Gain: '<S29>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_jq
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_jq + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_jq + 1.0, 0.75);
  }

  /* End of Math: '<S29>/Math Function1' */

  /* Product: '<S29>/Product' incorporates:
   *  DiscreteIntegrator: '<S29>/Integrator'
   *  Gain: '<S29>/Gain1'
   *  Gain: '<S29>/Gain2'
   *  Math: '<S29>/Math Function'
   *  Product: '<S29>/Divide'
   *
   * About '<S29>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_j))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S74>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S29>/Integrator'
   *  DiscreteIntegrator: '<S30>/Integrator'
   *  Sum: '<S74>/Subtract'
   */
  rtb_Gain14_f = (rtDW.Integrator_DSTATE_j
                  - rtDW.Integrator_DSTATE_ex)
    * 5.6252812605472272E+6;

  /* Switch: '<S29>/Switch1' incorporates:
   *  Bias: '<S29>/Bias3'
   *  Constant: '<S29>/Constant1'
   *  DiscreteIntegrator: '<S29>/Integrator'
   *  Gain: '<S29>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_j
        + -334.15)
      > 0.0) {
    /* Switch: '<S29>/Switch' incorporates:
     *  Bias: '<S29>/Bias2'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S29>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_j
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S29>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S29>/Switch1' */

  /* Product: '<S29>/Divide1' incorporates:
   *  Sum: '<S29>/Add'
   */
  rtb_dTdt_ou = ((rtb_AH_drexpAlhpa
                  + rtb_CON_o)
                 - rtb_Gain14_f)
    * (1.0
       / tmp);

  /* Gain: '<S29>/Gain4' */
  rtb_Gain4_dy = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S30>/Math Function1' incorporates:
   *  Bias: '<S30>/Bias'
   *  Constant: '<S30>/Constant3'
   *  DiscreteIntegrator: '<S30>/Integrator1'
   *  Gain: '<S30>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_hr
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_hr + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_hr + 1.0, 0.75);
  }

  /* End of Math: '<S30>/Math Function1' */

  /* Product: '<S30>/Product' incorporates:
   *  DiscreteIntegrator: '<S30>/Integrator'
   *  Gain: '<S30>/Gain1'
   *  Gain: '<S30>/Gain2'
   *  Math: '<S30>/Math Function'
   *  Product: '<S30>/Divide'
   *
   * About '<S30>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ex))
    * -3.857772E+25
    * tmp;

  /* Switch: '<S30>/Switch1' incorporates:
   *  Bias: '<S30>/Bias3'
   *  Constant: '<S30>/Constant1'
   *  DiscreteIntegrator: '<S30>/Integrator'
   *  Gain: '<S30>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ex
        + -334.15)
      > 0.0) {
    /* Switch: '<S30>/Switch' incorporates:
     *  Bias: '<S30>/Bias2'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S30>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ex
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S30>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S30>/Switch1' */

  /* Product: '<S30>/Divide1' incorporates:
   *  Sum: '<S30>/Add'
   */
  rtb_dTdt_nu = ((rtb_AH_drexpAlhpa
                  + rtb_Gain14_f)
                 - rtb_Gain14)
    * (1.0
       / tmp);

  /* Gain: '<S30>/Gain4' */
  rtb_Gain4_cjt = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S31>/Math Function1' incorporates:
   *  Bias: '<S31>/Bias'
   *  Constant: '<S31>/Constant3'
   *  DiscreteIntegrator: '<S31>/Integrator1'
   *  Gain: '<S31>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_fv
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_fv + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_fv + 1.0, 0.75);
  }

  /* End of Math: '<S31>/Math Function1' */

  /* Product: '<S31>/Product' incorporates:
   *  DiscreteIntegrator: '<S31>/Integrator'
   *  Gain: '<S31>/Gain1'
   *  Gain: '<S31>/Gain2'
   *  Math: '<S31>/Math Function'
   *  Product: '<S31>/Divide'
   *
   * About '<S31>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_leb))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S84>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S31>/Integrator'
   *  DiscreteIntegrator: '<S39>/Integrator'
   *  Sum: '<S84>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_pc
               - rtDW.Integrator_DSTATE_leb)
    * 5.6252812605472272E+6;

  /* Gain: '<S76>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S31>/Integrator'
   *  DiscreteIntegrator: '<S40>/Integrator'
   *  Sum: '<S76>/Subtract'
   */
  rtb_Gain14 = (rtDW.Integrator_DSTATE_leb
                - rtDW.Integrator_DSTATE_dc)
    * 5.6252812605472272E+6;

  /* Switch: '<S31>/Switch1' incorporates:
   *  Bias: '<S31>/Bias3'
   *  Constant: '<S31>/Constant1'
   *  DiscreteIntegrator: '<S31>/Integrator'
   *  Gain: '<S31>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_leb
        + -334.15)
      > 0.0) {
    /* Switch: '<S31>/Switch' incorporates:
     *  Bias: '<S31>/Bias2'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S31>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_leb
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S31>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S31>/Switch1' */

  /* Product: '<S31>/Divide1' incorporates:
   *  Sum: '<S31>/Add'
   */
  rtb_dTdt_ey = ((rtb_AH_drexpAlhpa
                  + rtb_CON_o)
                 - rtb_Gain14)
    * (1.0
       / tmp);

  /* Gain: '<S31>/Gain4' */
  rtb_Gain4_bw = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S32>/Math Function1' incorporates:
   *  Bias: '<S32>/Bias'
   *  Constant: '<S32>/Constant3'
   *  DiscreteIntegrator: '<S32>/Integrator1'
   *  Gain: '<S32>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_l
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_l + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_l + 1.0, 0.75);
  }

  /* End of Math: '<S32>/Math Function1' */

  /* Product: '<S32>/Product' incorporates:
   *  DiscreteIntegrator: '<S32>/Integrator'
   *  Gain: '<S32>/Gain1'
   *  Gain: '<S32>/Gain2'
   *  Math: '<S32>/Math Function'
   *  Product: '<S32>/Divide'
   *
   * About '<S32>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ci))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S82>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S32>/Integrator'
   *  DiscreteIntegrator: '<S37>/Integrator'
   *  Sum: '<S82>/Subtract'
   */
  rtb_Gain14_f = (rtDW.Integrator_DSTATE_o
                  - rtDW.Integrator_DSTATE_ci)
    * 5.6252812605472272E+6;

  /* Gain: '<S77>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S32>/Integrator'
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Sum: '<S77>/Subtract'
   */
  rtb_Gain14_ou = (rtDW.Integrator_DSTATE_ci
                   - rtDW.Integrator_DSTATE_m)
    * 5.6252812605472272E+6;

  /* Switch: '<S32>/Switch1' incorporates:
   *  Bias: '<S32>/Bias3'
   *  Constant: '<S32>/Constant1'
   *  DiscreteIntegrator: '<S32>/Integrator'
   *  Gain: '<S32>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ci
        + -334.15)
      > 0.0) {
    /* Switch: '<S32>/Switch' incorporates:
     *  Bias: '<S32>/Bias2'
     *  Constant: '<S32>/Constant'
     *  Constant: '<S32>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ci
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S32>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S32>/Switch1' */

  /* Product: '<S32>/Divide1' incorporates:
   *  Sum: '<S32>/Add'
   */
  rtb_dTdt_bx = ((rtb_AH_drexpAlhpa
                  + rtb_Gain14_f)
                 - rtb_Gain14_ou)
    * (1.0
       / tmp);

  /* Gain: '<S32>/Gain4' */
  rtb_Gain4_d4 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S33>/Math Function1' incorporates:
   *  Bias: '<S33>/Bias'
   *  Constant: '<S33>/Constant3'
   *  DiscreteIntegrator: '<S33>/Integrator1'
   *  Gain: '<S33>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_lp
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_lp + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_lp + 1.0, 0.75);
  }

  /* End of Math: '<S33>/Math Function1' */

  /* Product: '<S33>/Product' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S33>/Gain1'
   *  Gain: '<S33>/Gain2'
   *  Math: '<S33>/Math Function'
   *  Product: '<S33>/Divide'
   *
   * About '<S33>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_m))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S78>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  DiscreteIntegrator: '<S34>/Integrator'
   *  Sum: '<S78>/Subtract'
   */
  rtb_CON_i = (rtDW.Integrator_DSTATE_m
               - rtDW.Integrator_DSTATE_gf)
    * 5.6252812605472272E+6;

  /* Switch: '<S33>/Switch1' incorporates:
   *  Bias: '<S33>/Bias3'
   *  Constant: '<S33>/Constant1'
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S33>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_m
        + -334.15)
      > 0.0) {
    /* Switch: '<S33>/Switch' incorporates:
     *  Bias: '<S33>/Bias2'
     *  Constant: '<S33>/Constant'
     *  Constant: '<S33>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_m
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S33>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S33>/Switch1' */

  /* Product: '<S33>/Divide1' incorporates:
   *  Sum: '<S33>/Add'
   */
  rtb_CONdTdt_ph = ((rtb_AH_drexpAlhpa
                     + rtb_Gain14_ou)
                    - rtb_CON_i)
    * (1.0
       / tmp);

  /* Gain: '<S33>/Gain4' */
  rtb_Gain4_o = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S34>/Math Function1' incorporates:
   *  Bias: '<S34>/Bias'
   *  Constant: '<S34>/Constant3'
   *  DiscreteIntegrator: '<S34>/Integrator1'
   *  Gain: '<S34>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_es
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_es + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_es + 1.0, 0.75);
  }

  /* End of Math: '<S34>/Math Function1' */

  /* Product: '<S34>/Product' incorporates:
   *  DiscreteIntegrator: '<S34>/Integrator'
   *  Gain: '<S34>/Gain1'
   *  Gain: '<S34>/Gain2'
   *  Math: '<S34>/Math Function'
   *  Product: '<S34>/Divide'
   *
   * About '<S34>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_gf))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S79>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S34>/Integrator'
   *  DiscreteIntegrator: '<S38>/Integrator'
   *  Sum: '<S79>/Subtract'
   */
  rtb_Gain14_ou = (rtDW.Integrator_DSTATE_gf
                   - rtDW.Integrator_DSTATE_ls)
    * 5.6252812605472272E+6;

  /* Sum: '<S34>/Add' */
  rtb_CON_i = (rtb_AH_drexpAlhpa
               + rtb_CON_i)
    - rtb_Gain14_ou;

  /* Gain: '<S34>/Gain4' */
  rtb_Gain4_p = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S35>/Math Function1' incorporates:
   *  Bias: '<S35>/Bias'
   *  Constant: '<S35>/Constant3'
   *  DiscreteIntegrator: '<S35>/Integrator1'
   *  Gain: '<S35>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_jfa
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_jfa + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_jfa + 1.0, 0.75);
  }

  /* End of Math: '<S35>/Math Function1' */

  /* Product: '<S35>/Product' incorporates:
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  Gain: '<S35>/Gain1'
   *  Gain: '<S35>/Gain2'
   *  Math: '<S35>/Math Function'
   *  Product: '<S35>/Divide'
   *
   * About '<S35>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_pd))
    * -3.857772E+25
    * tmp;

  /* Sum: '<S35>/Add' */
  rtb_Gain14_n = (rtb_AH_drexpAlhpa
                  + rtb_Gain14_n)
    - rtb_Gain14_c;

  /* Switch: '<S35>/Switch1' incorporates:
   *  Bias: '<S35>/Bias3'
   *  Constant: '<S35>/Constant1'
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  Gain: '<S35>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_pd
        + -334.15)
      > 0.0) {
    /* Switch: '<S35>/Switch' incorporates:
     *  Bias: '<S35>/Bias2'
     *  Constant: '<S35>/Constant'
     *  Constant: '<S35>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_pd
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S35>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S35>/Switch1' */

  /* Product: '<S35>/Divide1' */
  rtb_Gain14_n
    *= 1.0
    / tmp;

  /* Gain: '<S35>/Gain4' */
  rtb_MathFunction_a5 = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S36>/Math Function1' incorporates:
   *  Bias: '<S36>/Bias'
   *  Constant: '<S36>/Constant3'
   *  DiscreteIntegrator: '<S36>/Integrator1'
   *  Gain: '<S36>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_bq
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_bq + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_bq + 1.0, 0.75);
  }

  /* End of Math: '<S36>/Math Function1' */

  /* Product: '<S36>/Product' incorporates:
   *  DiscreteIntegrator: '<S36>/Integrator'
   *  Gain: '<S36>/Gain1'
   *  Gain: '<S36>/Gain2'
   *  Math: '<S36>/Math Function'
   *  Product: '<S36>/Divide'
   *
   * About '<S36>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_hhz))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S81>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S36>/Integrator'
   *  DiscreteIntegrator: '<S37>/Integrator'
   *  Sum: '<S81>/Subtract'
   */
  rtb_Gain14_c = (rtDW.Integrator_DSTATE_hhz
                  - rtDW.Integrator_DSTATE_o)
    * 5.6252812605472272E+6;

  /* Switch: '<S36>/Switch1' incorporates:
   *  Bias: '<S36>/Bias3'
   *  Constant: '<S36>/Constant1'
   *  DiscreteIntegrator: '<S36>/Integrator'
   *  Gain: '<S36>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_hhz
        + -334.15)
      > 0.0) {
    /* Switch: '<S36>/Switch' incorporates:
     *  Bias: '<S36>/Bias2'
     *  Constant: '<S36>/Constant'
     *  Constant: '<S36>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_hhz
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S36>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S36>/Switch1' */

  /* Product: '<S36>/Divide1' incorporates:
   *  Sum: '<S36>/Add'
   */
  rtb_CON = ((rtb_AH_drexpAlhpa
              + rtb_CON)
             - rtb_Gain14_c)
    * (1.0
       / tmp);

  /* Gain: '<S36>/Gain4' */
  rtb_Gain4_he = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S37>/Math Function1' incorporates:
   *  Bias: '<S37>/Bias'
   *  Constant: '<S37>/Constant3'
   *  DiscreteIntegrator: '<S37>/Integrator1'
   *  Gain: '<S37>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_j4
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_j4 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_j4 + 1.0, 0.75);
  }

  /* End of Math: '<S37>/Math Function1' */

  /* Product: '<S37>/Product' incorporates:
   *  DiscreteIntegrator: '<S37>/Integrator'
   *  Gain: '<S37>/Gain1'
   *  Gain: '<S37>/Gain2'
   *  Math: '<S37>/Math Function'
   *  Product: '<S37>/Divide'
   *
   * About '<S37>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_o))
    * -3.857772E+25
    * tmp;

  /* Switch: '<S37>/Switch1' incorporates:
   *  Bias: '<S37>/Bias3'
   *  Constant: '<S37>/Constant1'
   *  DiscreteIntegrator: '<S37>/Integrator'
   *  Gain: '<S37>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_o
        + -334.15)
      > 0.0) {
    /* Switch: '<S37>/Switch' incorporates:
     *  Bias: '<S37>/Bias2'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S37>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_o
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S37>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S37>/Switch1' */

  /* Product: '<S37>/Divide1' incorporates:
   *  Sum: '<S37>/Add'
   */
  rtb_Gain14_f = ((rtb_AH_drexpAlhpa
                   + rtb_Gain14_c)
                  - rtb_Gain14_f)
    * (1.0
       / tmp);

  /* Gain: '<S37>/Gain4' */
  rtb_Gain4_pj = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S38>/Math Function1' incorporates:
   *  Bias: '<S38>/Bias'
   *  Constant: '<S38>/Constant3'
   *  DiscreteIntegrator: '<S38>/Integrator1'
   *  Gain: '<S38>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_lz
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_lz + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_lz + 1.0, 0.75);
  }

  /* End of Math: '<S38>/Math Function1' */

  /* Product: '<S38>/Product' incorporates:
   *  DiscreteIntegrator: '<S38>/Integrator'
   *  Gain: '<S38>/Gain1'
   *  Gain: '<S38>/Gain2'
   *  Math: '<S38>/Math Function'
   *  Product: '<S38>/Divide'
   *
   * About '<S38>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ls))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S83>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S38>/Integrator'
   *  DiscreteIntegrator: '<S39>/Integrator'
   *  Sum: '<S83>/Subtract'
   */
  rtb_Gain14_c = (rtDW.Integrator_DSTATE_ls
                  - rtDW.Integrator_DSTATE_pc)
    * 5.6252812605472272E+6;

  /* Sum: '<S38>/Add' */
  rtb_Gain14_ou = (rtb_AH_drexpAlhpa
                   + rtb_Gain14_ou)
    - rtb_Gain14_c;

  /* Gain: '<S38>/Gain4' */
  rtb_Gain4_a = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S39>/Math Function1' incorporates:
   *  Bias: '<S39>/Bias'
   *  Constant: '<S39>/Constant3'
   *  DiscreteIntegrator: '<S39>/Integrator1'
   *  Gain: '<S39>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_ch
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_ch + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_ch + 1.0, 0.75);
  }

  /* End of Math: '<S39>/Math Function1' */

  /* Product: '<S39>/Product' incorporates:
   *  DiscreteIntegrator: '<S39>/Integrator'
   *  Gain: '<S39>/Gain1'
   *  Gain: '<S39>/Gain2'
   *  Math: '<S39>/Math Function'
   *  Product: '<S39>/Divide'
   *
   * About '<S39>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_pc))
    * -3.857772E+25
    * tmp;

  /* Sum: '<S39>/Add' */
  rtb_Gain14_c = (rtb_AH_drexpAlhpa
                  + rtb_Gain14_c)
    - rtb_CON_o;

  /* Switch: '<S39>/Switch1' incorporates:
   *  Bias: '<S39>/Bias3'
   *  Constant: '<S39>/Constant1'
   *  DiscreteIntegrator: '<S39>/Integrator'
   *  Gain: '<S39>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_pc
        + -334.15)
      > 0.0) {
    /* Switch: '<S39>/Switch' incorporates:
     *  Bias: '<S39>/Bias2'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S39>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_pc
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S39>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S39>/Switch1' */

  /* Product: '<S39>/Divide1' */
  rtb_Gain14_c
    *= 1.0
    / tmp;

  /* Gain: '<S39>/Gain4' */
  rtb_MathFunction_k = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S40>/Math Function1' incorporates:
   *  Bias: '<S40>/Bias'
   *  Constant: '<S40>/Constant3'
   *  DiscreteIntegrator: '<S40>/Integrator1'
   *  Gain: '<S40>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_ovl
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_ovl + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_ovl + 1.0, 0.75);
  }

  /* End of Math: '<S40>/Math Function1' */

  /* Product: '<S40>/Product' incorporates:
   *  DiscreteIntegrator: '<S40>/Integrator'
   *  Gain: '<S40>/Gain1'
   *  Gain: '<S40>/Gain2'
   *  Math: '<S40>/Math Function'
   *  Product: '<S40>/Divide'
   *
   * About '<S40>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_dc))
    * -3.857772E+25
    * tmp;

  /* Switch: '<S40>/Switch1' incorporates:
   *  Bias: '<S40>/Bias3'
   *  Constant: '<S40>/Constant1'
   *  DiscreteIntegrator: '<S40>/Integrator'
   *  Gain: '<S40>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_dc
        + -334.15)
      > 0.0) {
    /* Switch: '<S40>/Switch' incorporates:
     *  Bias: '<S40>/Bias2'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S40>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_dc
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S40>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S40>/Switch1' */

  /* Product: '<S40>/Divide1' incorporates:
   *  Sum: '<S40>/Add'
   */
  rtb_Gain14 = 1.0
    / tmp
    * (rtb_AH_drexpAlhpa
       + rtb_Gain14);

  /* Gain: '<S40>/Gain4' */
  rtb_Gain4_ogc = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S41>/Math Function1' incorporates:
   *  Bias: '<S41>/Bias'
   *  Constant: '<S41>/Constant3'
   *  DiscreteIntegrator: '<S41>/Integrator1'
   *  Gain: '<S41>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_d5
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_d5 + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_d5 + 1.0, 0.75);
  }

  /* End of Math: '<S41>/Math Function1' */

  /* Product: '<S41>/Product' incorporates:
   *  DiscreteIntegrator: '<S41>/Integrator'
   *  Gain: '<S41>/Gain1'
   *  Gain: '<S41>/Gain2'
   *  Math: '<S41>/Math Function'
   *  Product: '<S41>/Divide'
   *
   * About '<S41>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_bz))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S85>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S41>/Integrator'
   *  DiscreteIntegrator: '<S42>/Integrator'
   *  Sum: '<S85>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_bz
               - rtDW.Integrator_DSTATE_ef)
    * 5.6252812605472272E+6;

  /* Sum: '<S41>/Add' */
  rtb_CON_p = (rtb_AH_drexpAlhpa
               + rtb_CON_p)
    - rtb_CON_o;

  /* Gain: '<S41>/Gain4' */
  rtb_Gain4_lr = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S42>/Math Function1' incorporates:
   *  Bias: '<S42>/Bias'
   *  Constant: '<S42>/Constant3'
   *  DiscreteIntegrator: '<S42>/Integrator1'
   *  Gain: '<S42>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_g
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_g + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_g + 1.0, 0.75);
  }

  /* End of Math: '<S42>/Math Function1' */

  /* Product: '<S42>/Product' incorporates:
   *  DiscreteIntegrator: '<S42>/Integrator'
   *  Gain: '<S42>/Gain1'
   *  Gain: '<S42>/Gain2'
   *  Math: '<S42>/Math Function'
   *  Product: '<S42>/Divide'
   *
   * About '<S42>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ef))
    * -3.857772E+25
    * tmp;

  /* Sum: '<S42>/Add' */
  rtb_Gain14_a = (rtb_AH_drexpAlhpa
                  + rtb_CON_o)
    - rtb_Gain14_a;

  /* Switch: '<S42>/Switch1' incorporates:
   *  Bias: '<S42>/Bias3'
   *  Constant: '<S42>/Constant1'
   *  DiscreteIntegrator: '<S42>/Integrator'
   *  Gain: '<S42>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ef
        + -334.15)
      > 0.0) {
    /* Switch: '<S42>/Switch' incorporates:
     *  Bias: '<S42>/Bias2'
     *  Constant: '<S42>/Constant'
     *  Constant: '<S42>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ef
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S42>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S42>/Switch1' */

  /* Product: '<S42>/Divide1' */
  rtb_Gain14_a
    *= 1.0
    / tmp;

  /* Gain: '<S42>/Gain4' */
  rtb_MathFunction_hl = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S43>/Math Function1' incorporates:
   *  Bias: '<S43>/Bias'
   *  Constant: '<S43>/Constant3'
   *  DiscreteIntegrator: '<S43>/Integrator1'
   *  Gain: '<S43>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_lh
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_lh + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_lh + 1.0, 0.75);
  }

  /* End of Math: '<S43>/Math Function1' */

  /* Product: '<S43>/Product' incorporates:
   *  DiscreteIntegrator: '<S43>/Integrator'
   *  Gain: '<S43>/Gain1'
   *  Gain: '<S43>/Gain2'
   *  Math: '<S43>/Math Function'
   *  Product: '<S43>/Divide'
   *
   * About '<S43>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ki))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S87>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S43>/Integrator'
   *  DiscreteIntegrator: '<S44>/Integrator'
   *  Sum: '<S87>/Subtract'
   */
  rtb_CON_o = (rtDW.Integrator_DSTATE_ki
               - rtDW.Integrator_DSTATE_ox)
    * 5.6252812605472272E+6;

  /* Switch: '<S43>/Switch1' incorporates:
   *  Bias: '<S43>/Bias3'
   *  Constant: '<S43>/Constant1'
   *  DiscreteIntegrator: '<S43>/Integrator'
   *  Gain: '<S43>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ki
        + -334.15)
      > 0.0) {
    /* Switch: '<S43>/Switch' incorporates:
     *  Bias: '<S43>/Bias2'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S43>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ki
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S43>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S43>/Switch1' */

  /* Product: '<S43>/Divide1' incorporates:
   *  Sum: '<S43>/Add'
   */
  rtb_CONdTdt_m0 = ((rtb_AH_drexpAlhpa
                     + rtb_CON_n)
                    - rtb_CON_o)
    * (1.0
       / tmp);

  /* Gain: '<S43>/Gain4' */
  rtb_Gain4_nf = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S44>/Math Function1' incorporates:
   *  Bias: '<S44>/Bias'
   *  Constant: '<S44>/Constant3'
   *  DiscreteIntegrator: '<S44>/Integrator1'
   *  Gain: '<S44>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_ga
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_ga + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_ga + 1.0, 0.75);
  }

  /* End of Math: '<S44>/Math Function1' */

  /* Product: '<S44>/Product' incorporates:
   *  DiscreteIntegrator: '<S44>/Integrator'
   *  Gain: '<S44>/Gain1'
   *  Gain: '<S44>/Gain2'
   *  Math: '<S44>/Math Function'
   *  Product: '<S44>/Divide'
   *
   * About '<S44>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_ox))
    * -3.857772E+25
    * tmp;

  /* Gain: '<S88>/Gain14' incorporates:
   *  DiscreteIntegrator: '<S44>/Integrator'
   *  DiscreteIntegrator: '<S45>/Integrator'
   *  Sum: '<S88>/Subtract'
   */
  rtb_CON_n = (rtDW.Integrator_DSTATE_ox
               - rtDW.Integrator_DSTATE_gk)
    * 5.6252812605472272E+6;

  /* Sum: '<S44>/Add' */
  rtb_CON_o = (rtb_AH_drexpAlhpa
               + rtb_CON_o)
    - rtb_CON_n;

  /* Gain: '<S44>/Gain4' */
  rtb_Gain4_le = -2.032520325203252E-9
    * rtb_AH_drexpAlhpa;

  /* Math: '<S45>/Math Function1' incorporates:
   *  Bias: '<S45>/Bias'
   *  Constant: '<S45>/Constant3'
   *  DiscreteIntegrator: '<S45>/Integrator1'
   *  Gain: '<S45>/Gain'
   */
  if (-rtDW.Integrator1_DSTATE_nc
      + 1.0
      < 0.0) {
    tmp =
      -rt_powd_snf(-(-rtDW.Integrator1_DSTATE_nc + 1.0), 0.75);
  } else {
    tmp = rt_powd_snf(-rtDW.Integrator1_DSTATE_nc + 1.0, 0.75);
  }

  /* End of Math: '<S45>/Math Function1' */

  /* Product: '<S45>/Product' incorporates:
   *  DiscreteIntegrator: '<S45>/Integrator'
   *  Gain: '<S45>/Gain1'
   *  Gain: '<S45>/Gain2'
   *  Math: '<S45>/Math Function'
   *  Product: '<S45>/Divide'
   *
   * About '<S45>/Math Function':
   *  Operator: exp
   */
  rtb_AH_drexpAlhpa = exp(1.0
    / (-5.6305025057564676E-5
       * rtDW.Integrator_DSTATE_gk))
    * -3.857772E+25
    * tmp;

  /* Sum: '<S45>/Add' */
  rtb_Gain14_l = (rtb_AH_drexpAlhpa
                  + rtb_CON_n)
    - rtb_Gain14_l;

  /* Update for DiscreteIntegrator: '<S11>/Integrator' */
  rtDW.Integrator_DSTATE
    += 0.1
    * rtb_Bias2;

  /* Update for DiscreteIntegrator: '<S6>/Integrator' */
  rtDW.Integrator_DSTATE_k
    += 0.1
    * rtb_Bias2_ib;

  /* Update for DiscreteIntegrator: '<S21>/Integrator' */
  rtDW.Integrator_DSTATE_f
    += 0.1
    * rtb_Bias2_al;

  /* Update for DiscreteIntegrator: '<S11>/Integrator1' */
  rtDW.Integrator1_DSTATE
    += 0.1
    * rtb_CONdTdt_a;

  /* Update for DiscreteIntegrator: '<S6>/Integrator1' */
  rtDW.Integrator1_DSTATE_h
    += 0.1
    * rtb_MathFunction_i;

  /* Update for DiscreteIntegrator: '<S21>/Integrator1' */
  rtDW.Integrator1_DSTATE_o
    += 0.1
    * rtb_Gain4_m0;

  /* Update for DiscreteIntegrator: '<S1>/Integrator' */
  rtDW.Integrator_DSTATE_l
    += 0.1
    * rtb_MathFunction;

  /* Update for DiscreteIntegrator: '<S1>/Integrator1' */
  rtDW.Integrator1_DSTATE_f
    += 0.1
    * rtb_Gain4;

  /* Update for DiscreteIntegrator: '<S2>/Integrator' */
  rtDW.Integrator_DSTATE_h
    += 0.1
    * rtb_MathFunction_gh;

  /* Update for DiscreteIntegrator: '<S2>/Integrator1' */
  rtDW.Integrator1_DSTATE_j
    += 0.1
    * rtb_Gain4_m1;

  /* Update for DiscreteIntegrator: '<S13>/Integrator' */
  rtDW.Integrator_DSTATE_le
    += 0.1
    * rtb_MathFunction_o;

  /* Update for DiscreteIntegrator: '<S3>/Integrator' */
  rtDW.Integrator_DSTATE_i
    += 0.1
    * rtb_MathFunction_px;

  /* Update for DiscreteIntegrator: '<S3>/Integrator1' */
  rtDW.Integrator1_DSTATE_e
    += 0.1
    * rtb_Gain4_nu;

  /* Update for DiscreteIntegrator: '<S19>/Integrator' */
  rtDW.Integrator_DSTATE_b
    += 0.1
    * rtb_dTdt_fo;

  /* Update for DiscreteIntegrator: '<S20>/Integrator' */
  rtDW.Integrator_DSTATE_n
    += 0.1
    * rtb_dTdt_kf;

  /* Update for DiscreteIntegrator: '<S4>/Integrator' */
  rtDW.Integrator_DSTATE_p
    += 0.1
    * rtb_MathFunction_n;

  /* Update for DiscreteIntegrator: '<S4>/Integrator1' */
  rtDW.Integrator1_DSTATE_fs
    += 0.1
    * rtb_Gain4_ff;

  /* Update for DiscreteIntegrator: '<S17>/Integrator' */
  rtDW.Integrator_DSTATE_d
    += 0.1
    * rtb_dTdt_d3;

  /* Update for DiscreteIntegrator: '<S5>/Integrator' */
  rtDW.Integrator_DSTATE_fs
    += 0.1
    * rtb_MathFunction_h3;

  /* Update for DiscreteIntegrator: '<S5>/Integrator1' */
  rtDW.Integrator1_DSTATE_fc
    += 0.1
    * rtb_Gain4_g;

  /* Update for DiscreteIntegrator: '<S18>/Integrator' */
  rtDW.Integrator_DSTATE_k5
    += 0.1
    * rtb_dTdt_jt;

  /* Update for DiscreteIntegrator: '<S7>/Integrator' */
  rtDW.Integrator_DSTATE_g
    += 0.1
    * rtb_MathFunction_h;

  /* Update for DiscreteIntegrator: '<S7>/Integrator1' */
  rtDW.Integrator1_DSTATE_d
    += 0.1
    * rtb_Gain4_jx;

  /* Update for DiscreteIntegrator: '<S12>/Integrator' */
  rtDW.Integrator_DSTATE_dz
    += 0.1
    * rtb_CONdTdt_oc;

  /* Update for DiscreteIntegrator: '<S8>/Integrator' */
  rtDW.Integrator_DSTATE_e
    += 0.1
    * rtb_MathFunction_a2;

  /* Update for DiscreteIntegrator: '<S8>/Integrator1' */
  rtDW.Integrator1_DSTATE_n
    += 0.1
    * rtb_Gain4_ht;

  /* Update for DiscreteIntegrator: '<S35>/Integrator' */
  rtDW.Integrator_DSTATE_pd
    += 0.1
    * rtb_Gain14_n;

  /* Update for DiscreteIntegrator: '<S9>/Integrator' */
  rtDW.Integrator_DSTATE_fx
    += 0.1
    * rtb_CONdTdt_jc;

  /* Update for DiscreteIntegrator: '<S9>/Integrator1' */
  rtDW.Integrator1_DSTATE_jf
    += 0.1
    * rtb_Gain4_h;

  /* Update for DiscreteIntegrator: '<S10>/Integrator' */
  rtDW.Integrator_DSTATE_hh
    += 0.1
    * rtb_CONdTdt_o4;

  /* Update for DiscreteIntegrator: '<S10>/Integrator1' */
  rtDW.Integrator1_DSTATE_ov
    += 0.1
    * rtb_Gain4_c;

  /* Switch: '<S41>/Switch1' incorporates:
   *  Bias: '<S41>/Bias3'
   *  Constant: '<S41>/Constant1'
   *  DiscreteIntegrator: '<S41>/Integrator'
   *  Gain: '<S41>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_bz
        + -334.15)
      > 0.0) {
    /* Switch: '<S41>/Switch' incorporates:
     *  Bias: '<S41>/Bias2'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S41>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_bz
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S41>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S41>/Switch1' */

  /* Update for DiscreteIntegrator: '<S41>/Integrator' incorporates:
   *  Product: '<S41>/Divide1'
   */
  rtDW.Integrator_DSTATE_bz
    += 1.0
    / tmp
    * rtb_CON_p
    * 0.1;

  /* Update for DiscreteIntegrator: '<S12>/Integrator1' */
  rtDW.Integrator1_DSTATE_p
    += 0.1
    * rtb_Gain4_m;

  /* Switch: '<S45>/Switch1' incorporates:
   *  Bias: '<S45>/Bias3'
   *  Constant: '<S45>/Constant1'
   *  DiscreteIntegrator: '<S45>/Integrator'
   *  Gain: '<S45>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_gk
        + -334.15)
      > 0.0) {
    /* Switch: '<S45>/Switch' incorporates:
     *  Bias: '<S45>/Bias2'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S45>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_gk
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S45>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S45>/Switch1' */

  /* Update for DiscreteIntegrator: '<S45>/Integrator' incorporates:
   *  Product: '<S45>/Divide1'
   */
  rtDW.Integrator_DSTATE_gk
    += 1.0
    / tmp
    * rtb_Gain14_l
    * 0.1;

  /* Update for DiscreteIntegrator: '<S13>/Integrator1' */
  rtDW.Integrator1_DSTATE_f0
    += 0.1
    * rtb_Gain4_oy;

  /* Update for DiscreteIntegrator: '<S24>/Integrator' */
  rtDW.Integrator_DSTATE_g3
    += 0.1
    * rtb_MathFunction_bj;

  /* Update for DiscreteIntegrator: '<S14>/Integrator' */
  rtDW.Integrator_DSTATE_h0
    += 0.1
    * rtb_dTdt_as;

  /* Update for DiscreteIntegrator: '<S14>/Integrator1' */
  rtDW.Integrator1_DSTATE_m
    += 0.1
    * rtb_Gain4_b;

  /* Update for DiscreteIntegrator: '<S42>/Integrator' */
  rtDW.Integrator_DSTATE_ef
    += 0.1
    * rtb_Gain14_a;

  /* Update for DiscreteIntegrator: '<S15>/Integrator' */
  rtDW.Integrator_DSTATE_f5
    += 0.1
    * rtb_CONdTdt_mfz;

  /* Update for DiscreteIntegrator: '<S15>/Integrator1' */
  rtDW.Integrator1_DSTATE_mn
    += 0.1
    * rtb_Gain4_o3;

  /* Update for DiscreteIntegrator: '<S16>/Integrator' */
  rtDW.Integrator_DSTATE_c
    += 0.1
    * rtb_CONdTdt_bk;

  /* Update for DiscreteIntegrator: '<S16>/Integrator1' */
  rtDW.Integrator1_DSTATE_c
    += 0.1
    * rtb_Gain4_k0;

  /* Update for DiscreteIntegrator: '<S43>/Integrator' */
  rtDW.Integrator_DSTATE_ki
    += 0.1
    * rtb_CONdTdt_m0;

  /* Update for DiscreteIntegrator: '<S17>/Integrator1' */
  rtDW.Integrator1_DSTATE_k
    += 0.1
    * rtb_Gain4_lj;

  /* Update for DiscreteIntegrator: '<S18>/Integrator1' */
  rtDW.Integrator1_DSTATE_c5
    += 0.1
    * rtb_Gain4_kb;

  /* Update for DiscreteIntegrator: '<S19>/Integrator1' */
  rtDW.Integrator1_DSTATE_dt
    += 0.1
    * rtb_Gain4_n;

  /* Update for DiscreteIntegrator: '<S20>/Integrator1' */
  rtDW.Integrator1_DSTATE_p3
    += 0.1
    * rtb_Gain4_i;

  /* Update for DiscreteIntegrator: '<S26>/Integrator' */
  rtDW.Integrator_DSTATE_l0
    += 0.1
    * rtb_CONdTdt_oz;

  /* Update for DiscreteIntegrator: '<S30>/Integrator' */
  rtDW.Integrator_DSTATE_ex
    += 0.1
    * rtb_dTdt_nu;

  /* Update for DiscreteIntegrator: '<S36>/Integrator' */
  rtDW.Integrator_DSTATE_hhz
    += 0.1
    * rtb_CON;

  /* Update for DiscreteIntegrator: '<S22>/Integrator' */
  rtDW.Integrator_DSTATE_dl
    += 0.1
    * rtb_dTdt_lg;

  /* Update for DiscreteIntegrator: '<S22>/Integrator1' */
  rtDW.Integrator1_DSTATE_ms
    += 0.1
    * rtb_Gain4_if;

  /* Update for DiscreteIntegrator: '<S27>/Integrator' */
  rtDW.Integrator_DSTATE_i2
    += 0.1
    * rtb_dTdt_m;

  /* Update for DiscreteIntegrator: '<S23>/Integrator' */
  rtDW.Integrator_DSTATE_ir
    += 0.1
    * rtb_CONdTdt_gn;

  /* Update for DiscreteIntegrator: '<S23>/Integrator1' */
  rtDW.Integrator1_DSTATE_or
    += 0.1
    * rtb_Gain4_ay;

  /* Update for DiscreteIntegrator: '<S25>/Integrator' */
  rtDW.Integrator_DSTATE_a
    += 0.1
    * rtb_CONdTdt_aa;

  /* Update for DiscreteIntegrator: '<S24>/Integrator1' */
  rtDW.Integrator1_DSTATE_dn
    += 0.1
    * rtb_Gain4_l;

  /* Update for DiscreteIntegrator: '<S25>/Integrator1' */
  rtDW.Integrator1_DSTATE_b
    += 0.1
    * rtb_Gain4_n3;

  /* Update for DiscreteIntegrator: '<S28>/Integrator' */
  rtDW.Integrator_DSTATE_ad
    += 0.1
    * rtb_dTdt_cbz;

  /* Update for DiscreteIntegrator: '<S26>/Integrator1' */
  rtDW.Integrator1_DSTATE_ju
    += 0.1
    * rtb_Gain4_e1;

  /* Update for DiscreteIntegrator: '<S27>/Integrator1' */
  rtDW.Integrator1_DSTATE_p2
    += 0.1
    * rtb_Gain4_oj;

  /* Update for DiscreteIntegrator: '<S28>/Integrator1' */
  rtDW.Integrator1_DSTATE_hz
    += 0.1
    * rtb_Gain4_aq;

  /* Update for DiscreteIntegrator: '<S29>/Integrator' */
  rtDW.Integrator_DSTATE_j
    += 0.1
    * rtb_dTdt_ou;

  /* Update for DiscreteIntegrator: '<S29>/Integrator1' */
  rtDW.Integrator1_DSTATE_jq
    += 0.1
    * rtb_Gain4_dy;

  /* Update for DiscreteIntegrator: '<S30>/Integrator1' */
  rtDW.Integrator1_DSTATE_hr
    += 0.1
    * rtb_Gain4_cjt;

  /* Update for DiscreteIntegrator: '<S31>/Integrator' */
  rtDW.Integrator_DSTATE_leb
    += 0.1
    * rtb_dTdt_ey;

  /* Update for DiscreteIntegrator: '<S31>/Integrator1' */
  rtDW.Integrator1_DSTATE_fv
    += 0.1
    * rtb_Gain4_bw;

  /* Update for DiscreteIntegrator: '<S39>/Integrator' */
  rtDW.Integrator_DSTATE_pc
    += 0.1
    * rtb_Gain14_c;

  /* Update for DiscreteIntegrator: '<S40>/Integrator' */
  rtDW.Integrator_DSTATE_dc
    += 0.1
    * rtb_Gain14;

  /* Update for DiscreteIntegrator: '<S32>/Integrator' */
  rtDW.Integrator_DSTATE_ci
    += 0.1
    * rtb_dTdt_bx;

  /* Update for DiscreteIntegrator: '<S32>/Integrator1' */
  rtDW.Integrator1_DSTATE_l
    += 0.1
    * rtb_Gain4_d4;

  /* Update for DiscreteIntegrator: '<S37>/Integrator' */
  rtDW.Integrator_DSTATE_o
    += 0.1
    * rtb_Gain14_f;

  /* Update for DiscreteIntegrator: '<S33>/Integrator' */
  rtDW.Integrator_DSTATE_m
    += 0.1
    * rtb_CONdTdt_ph;

  /* Update for DiscreteIntegrator: '<S33>/Integrator1' */
  rtDW.Integrator1_DSTATE_lp
    += 0.1
    * rtb_Gain4_o;

  /* Switch: '<S34>/Switch1' incorporates:
   *  Bias: '<S34>/Bias3'
   *  Constant: '<S34>/Constant1'
   *  DiscreteIntegrator: '<S34>/Integrator'
   *  Gain: '<S34>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_gf
        + -334.15)
      > 0.0) {
    /* Switch: '<S34>/Switch' incorporates:
     *  Bias: '<S34>/Bias2'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S34>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_gf
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S34>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S34>/Switch1' */

  /* Update for DiscreteIntegrator: '<S34>/Integrator' incorporates:
   *  Product: '<S34>/Divide1'
   */
  rtDW.Integrator_DSTATE_gf
    += 1.0
    / tmp
    * rtb_CON_i
    * 0.1;

  /* Update for DiscreteIntegrator: '<S34>/Integrator1' */
  rtDW.Integrator1_DSTATE_es
    += 0.1
    * rtb_Gain4_p;

  /* Switch: '<S38>/Switch1' incorporates:
   *  Bias: '<S38>/Bias3'
   *  Constant: '<S38>/Constant1'
   *  DiscreteIntegrator: '<S38>/Integrator'
   *  Gain: '<S38>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ls
        + -334.15)
      > 0.0) {
    /* Switch: '<S38>/Switch' incorporates:
     *  Bias: '<S38>/Bias2'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S38>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ls
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S38>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S38>/Switch1' */

  /* Update for DiscreteIntegrator: '<S38>/Integrator' incorporates:
   *  Product: '<S38>/Divide1'
   */
  rtDW.Integrator_DSTATE_ls
    += 1.0
    / tmp
    * rtb_Gain14_ou
    * 0.1;

  /* Update for DiscreteIntegrator: '<S35>/Integrator1' */
  rtDW.Integrator1_DSTATE_jfa
    += 0.1
    * rtb_MathFunction_a5;

  /* Update for DiscreteIntegrator: '<S36>/Integrator1' */
  rtDW.Integrator1_DSTATE_bq
    += 0.1
    * rtb_Gain4_he;

  /* Update for DiscreteIntegrator: '<S37>/Integrator1' */
  rtDW.Integrator1_DSTATE_j4
    += 0.1
    * rtb_Gain4_pj;

  /* Update for DiscreteIntegrator: '<S38>/Integrator1' */
  rtDW.Integrator1_DSTATE_lz
    += 0.1
    * rtb_Gain4_a;

  /* Update for DiscreteIntegrator: '<S39>/Integrator1' */
  rtDW.Integrator1_DSTATE_ch
    += 0.1
    * rtb_MathFunction_k;

  /* Update for DiscreteIntegrator: '<S40>/Integrator1' */
  rtDW.Integrator1_DSTATE_ovl
    += 0.1
    * rtb_Gain4_ogc;

  /* Update for DiscreteIntegrator: '<S41>/Integrator1' */
  rtDW.Integrator1_DSTATE_d5
    += 0.1
    * rtb_Gain4_lr;

  /* Update for DiscreteIntegrator: '<S42>/Integrator1' */
  rtDW.Integrator1_DSTATE_g
    += 0.1
    * rtb_MathFunction_hl;

  /* Update for DiscreteIntegrator: '<S43>/Integrator1' */
  rtDW.Integrator1_DSTATE_lh
    += 0.1
    * rtb_Gain4_nf;

  /* Switch: '<S44>/Switch1' incorporates:
   *  Bias: '<S44>/Bias3'
   *  Constant: '<S44>/Constant1'
   *  DiscreteIntegrator: '<S44>/Integrator'
   *  Gain: '<S44>/Gain3'
   */
  if (-(rtDW.Integrator_DSTATE_ox
        + -334.15)
      > 0.0) {
    /* Switch: '<S44>/Switch' incorporates:
     *  Bias: '<S44>/Bias2'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S44>/Constant1'
     */
    if (rtDW.Integrator_DSTATE_ox
        + -331.15
        >= 0.0) {
      tmp = 6.822E+7;
    } else {
      tmp = 1.82E+6;
    }

    /* End of Switch: '<S44>/Switch' */
  } else {
    tmp = 1.82E+6;
  }

  /* End of Switch: '<S44>/Switch1' */

  /* Update for DiscreteIntegrator: '<S44>/Integrator' incorporates:
   *  Product: '<S44>/Divide1'
   */
  rtDW.Integrator_DSTATE_ox
    += 1.0
    / tmp
    * rtb_CON_o
    * 0.1;

  /* Update for DiscreteIntegrator: '<S44>/Integrator1' */
  rtDW.Integrator1_DSTATE_ga
    += 0.1
    * rtb_Gain4_le;

  /* Update for DiscreteIntegrator: '<S45>/Integrator1' incorporates:
   *  Gain: '<S45>/Gain4'
   */
  rtDW.Integrator1_DSTATE_nc
    += -2.032520325203252E-9
    * rtb_AH_drexpAlhpa
    * 0.1;
}

/* Model initialize function */
void Sim1017_CODE_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Integrator' */
  rtDW.Integrator_DSTATE = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S6>/Integrator' */
  rtDW.Integrator_DSTATE_k = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Integrator' */
  rtDW.Integrator_DSTATE_f = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S1>/Integrator' */
  rtDW.Integrator_DSTATE_l = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Integrator' */
  rtDW.Integrator_DSTATE_h = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S13>/Integrator' */
  rtDW.Integrator_DSTATE_le = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S3>/Integrator' */
  rtDW.Integrator_DSTATE_i = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S19>/Integrator' */
  rtDW.Integrator_DSTATE_b = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S20>/Integrator' */
  rtDW.Integrator_DSTATE_n = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Integrator' */
  rtDW.Integrator_DSTATE_p = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S17>/Integrator' */
  rtDW.Integrator_DSTATE_d = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S5>/Integrator' */
  rtDW.Integrator_DSTATE_fs = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Integrator' */
  rtDW.Integrator_DSTATE_k5 = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Integrator' */
  rtDW.Integrator_DSTATE_g = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S12>/Integrator' */
  rtDW.Integrator_DSTATE_dz = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Integrator' */
  rtDW.Integrator_DSTATE_e = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Integrator' */
  rtDW.Integrator_DSTATE_pd = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Integrator' */
  rtDW.Integrator_DSTATE_fx = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S10>/Integrator' */
  rtDW.Integrator_DSTATE_hh = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S41>/Integrator' */
  rtDW.Integrator_DSTATE_bz = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S45>/Integrator' */
  rtDW.Integrator_DSTATE_gk = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Integrator' */
  rtDW.Integrator_DSTATE_g3 = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S14>/Integrator' */
  rtDW.Integrator_DSTATE_h0 = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S42>/Integrator' */
  rtDW.Integrator_DSTATE_ef = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S15>/Integrator' */
  rtDW.Integrator_DSTATE_f5 = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S16>/Integrator' */
  rtDW.Integrator_DSTATE_c = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S43>/Integrator' */
  rtDW.Integrator_DSTATE_ki = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S26>/Integrator' */
  rtDW.Integrator_DSTATE_l0 = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S30>/Integrator' */
  rtDW.Integrator_DSTATE_ex = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S36>/Integrator' */
  rtDW.Integrator_DSTATE_hhz = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Integrator' */
  rtDW.Integrator_DSTATE_dl = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S27>/Integrator' */
  rtDW.Integrator_DSTATE_i2 = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S23>/Integrator' */
  rtDW.Integrator_DSTATE_ir = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S25>/Integrator' */
  rtDW.Integrator_DSTATE_a = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Integrator' */
  rtDW.Integrator_DSTATE_ad = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S29>/Integrator' */
  rtDW.Integrator_DSTATE_j = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S31>/Integrator' */
  rtDW.Integrator_DSTATE_leb = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S39>/Integrator' */
  rtDW.Integrator_DSTATE_pc = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S40>/Integrator' */
  rtDW.Integrator_DSTATE_dc = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S32>/Integrator' */
  rtDW.Integrator_DSTATE_ci = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S37>/Integrator' */
  rtDW.Integrator_DSTATE_o = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S33>/Integrator' */
  rtDW.Integrator_DSTATE_m = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S34>/Integrator' */
  rtDW.Integrator_DSTATE_gf = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S38>/Integrator' */
  rtDW.Integrator_DSTATE_ls = 298.15;

  /* InitializeConditions for DiscreteIntegrator: '<S44>/Integrator' */
  rtDW.Integrator_DSTATE_ox = 298.15;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
