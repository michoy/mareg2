#include "ni_modelframework.h"
#if defined VXWORKS || defined kNIOSLinux
#define u2pwm_P                        u2pwm_P DataSection(".NIVS.defaultparams")
#endif

/*
 * u2pwm_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "u2pwm".
 *
 * Model version              : 1.100
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri Mar 06 17:02:21 2020
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "u2pwm.h"
#include "u2pwm_private.h"

/* Block parameters (auto storage) */
P_u2pwm_T u2pwm_P = {
  0.34999999999999964,                 /* Variable: BT_u2pwm_gainNeg
                                        * Referenced by: '<S17>/Constant'
                                        */
  0.69999999999999907,                 /* Variable: BT_u2pwm_gainPos
                                        * Referenced by: '<S17>/Constant1'
                                        */
  6.5,                                 /* Variable: BT_zero_pwm
                                        * Referenced by: '<S20>/Constant'
                                        */
  6.3,                                 /* Variable: BT_zero_pwm_neg
                                        * Referenced by: '<S19>/Constant'
                                        */
  6.8,                                 /* Variable: BT_zero_pwm_pos
                                        * Referenced by: '<S18>/Constant'
                                        */
  1.71,                                /* Variable: VSP1_u2pwm_gain
                                        * Referenced by: '<S12>/VPS_Speed_Gain'
                                        */
  1.71,                                /* Variable: VSP2_u2pwm_gain
                                        * Referenced by: '<S12>/VPS_Speed_Gain2'
                                        */
  5.2,                                 /* Variable: VSP_min_pwm
                                        * Referenced by: '<S12>/VPS_Power_Offset'
                                        */
  5.0,                                 /* Expression: 1.5/0.3
                                        * Referenced by: '<S6>/Gain4'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Gain2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Gain5'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/Triangle'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/Triangle'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/Triangle'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/Triangle'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/Triangle'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/Triangle'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/Circle'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/Circle'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/Circle'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/Circle'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/Circle'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/Circle'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/Cross'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/Cross'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/Cross'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/Cross'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/Cross'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/Cross'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S3>/Square'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S3>/Square'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S3>/Square'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S3>/Square'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S3>/Square'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S3>/Square'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S3>/Memory'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S6>/u_BT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S6>/u_BT'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S6>/u_BT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S6>/u_BT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S6>/u_BT'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S6>/u_BT'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  2.2888888888888888,                  /* Expression: 1.03/0.45
                                        * Referenced by: '<S6>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Gain3'
                                        */
  2.2888888888888888,                  /* Expression: 1.03/0.45
                                        * Referenced by: '<S6>/Gain6'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Gain7'
                                        */
  0.199,                               /* Expression: 0.199
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  0.235,                               /* Expression: 0.235
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/u_BT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/u_BT'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/u_BT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/u_BT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/u_BT'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/u_BT'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant6'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/u_BT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/u_BT'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/u_BT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/u_BT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/u_BT'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/u_BT'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/u_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/u_VSP2'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/u_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/u_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/u_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/u_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/omega_VSP1'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/omega_VSP2'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/u_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/u_VSP1'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/u_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/u_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/u_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/u_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/alpha_VSP1'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/alpha_VSP2'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S9>/ctrl_custom'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S9>/ctrl_custom'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<S9>/ctrl_custom'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S9>/ctrl_custom'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S9>/ctrl_custom'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S9>/ctrl_custom'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S9>/ctrl_DP'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S9>/ctrl_DP'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<S9>/ctrl_DP'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S9>/ctrl_DP'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S9>/ctrl_DP'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S9>/ctrl_DP'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S9>/STOP'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S9>/STOP'
                                        */
  10.0,                                /* Expression: portnum
                                        * Referenced by: '<S9>/STOP'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S9>/STOP'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S9>/STOP'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S9>/STOP'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S9>/ctrl_sixaxis2thruster'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S9>/ctrl_sixaxis2thruster'
                                        */
  11.0,                                /* Expression: portnum
                                        * Referenced by: '<S9>/ctrl_sixaxis2thruster'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S9>/ctrl_sixaxis2thruster'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S9>/ctrl_sixaxis2thruster'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S9>/ctrl_sixaxis2thruster'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/enable_mech_el'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/enable_mech_el'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/enable_mech_el'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/enable_mech_el'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/enable_mech_el'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/enable_mech_el'
                                        */
  0.9,                                 /* Expression: 0.9
                                        * Referenced by: '<S2>/Limit u_BT'
                                        */
  -0.9,                                /* Expression: -0.9
                                        * Referenced by: '<S2>/Limit u_BT'
                                        */
  0.199,                               /* Expression: 0.199
                                        * Referenced by: '<S2>/Lmimit OMegaVSP1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Lmimit OMegaVSP1'
                                        */
  0.235,                               /* Expression: 0.235
                                        * Referenced by: '<S2>/Lmimit OMegaVSP2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Lmimit OMegaVSP2'
                                        */
  0.9,                                 /* Expression: 0.9
                                        * Referenced by: '<S2>/Limit u_BT1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Limit u_BT1'
                                        */
  0.9,                                 /* Expression: 0.9
                                        * Referenced by: '<S2>/Limit u_BT2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Limit u_BT2'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<S12>/Saturation8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Saturation8'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_VSP1'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_VSP1'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<S12>/Saturation9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Saturation9'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_VSP2'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_VSP2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_VSP2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Integrator'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/AddGainBTPos'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/AddGainBTPos'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/AddGainBTPos'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/AddGainBTPos'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/AddGainBTPos'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/AddGainBTPos'
                                        */
  0.035,                               /* Expression: 0.035
                                        * Referenced by: '<S17>/Constant2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/AddGainBTNeg'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/AddGainBTNeg'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/AddGainBTNeg'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/AddGainBTNeg'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/AddGainBTNeg'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/AddGainBTNeg'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Switch'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_BT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_BT'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_BT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_BT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_BT'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_BT'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Saturation10'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Saturation10'
                                        */
  0.95,                                /* Expression: .95
                                        * Referenced by: '<S12>/Gain5'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S12>/Saturation1'
                                        */
  -3.1415926535897931,                 /* Expression: -pi
                                        * Referenced by: '<S12>/Saturation1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Gain3'
                                        */

  /*  Expression: servo_mapping(:,:,4)
   * Referenced by: '<S12>/2-D Lookup Table3'
   */
  { 5.7, 5.8757359312880713, 6.3, 6.1232233047033633, 6.05, 5.3602438661763951,
    5.5301219330881981, 5.9543860018001258, 5.7776093065034893,
    5.8801219330881977, 4.54, 4.7098780669118021, 5.12, 5.3674873734152913, 5.47,
    4.2288730162779187, 4.3987510831897216, 4.243187591328681,
    4.5401724394270309, 4.6426850660117394, 4.1, 4.0355634918610406, 3.88,
    4.17698484809835, 4.3 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table3'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table3'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_servo4'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_servo4'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_servo4'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_servo4'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_servo4'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_servo4'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Gain2'
                                        */

  /*  Expression: servo_mapping(:,:,3)
   * Referenced by: '<S12>/2-D Lookup Table2'
   */
  { 5.6, 5.4828427124746186, 5.2, 4.38682720163547, 4.05, 5.6439339828220172,
    5.3129646455628166, 5.0301219330881981, 4.2169491347236674,
    4.0060660171779823, 5.75, 5.4190306627407985, 4.62, 4.1108831175456855, 3.9,
    5.7853553390593273, 5.4543860018001258, 4.6907106781186547,
    4.3937258300203048, 4.1828427124746188, 5.8, 5.4836753236814708, 4.72,
    4.42301515190165, 4.3 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table2'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table2'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_servo3'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_servo3'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_servo3'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_servo3'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_servo3'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_servo3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Saturation11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Saturation11'
                                        */
  0.95,                                /* Expression: .95
                                        * Referenced by: '<S12>/Gain4'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S12>/Saturation'
                                        */
  -3.1415926535897931,                 /* Expression: -pi
                                        * Referenced by: '<S12>/Saturation'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Gain'
                                        */

  /*  Expression: servo_mapping(:,:,1)
   * Referenced by: '<S12>/2-D Lookup Table'
   */
  { 3.58, 3.4687005768508881, 3.2, 3.3979898987322334, 3.48, 3.8348171003677036,
    3.8494617613083761, 3.5807611844574883, 3.7787510831897215,
    3.743603896932107, 4.45, 4.4646446609406727, 4.5, 4.4151471862576139, 4.38,
    5.0510407640085653, 5.0656854249492378, 5.3485281374238571,
    5.0303300858899105, 4.9951828996322964, 5.3, 5.4171572875253808, 5.7,
    5.3818019484660535, 5.25 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_servo1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_servo1'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_servo1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_servo1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_servo1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_servo1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Gain1'
                                        */

  /*  Expression: servo_mapping(:,:,2)
   * Referenced by: '<S12>/2-D Lookup Table1'
   */
  { 6.87, 6.6298275605729691, 6.05, 5.5408831175456861, 5.33, 6.96665476220844,
    6.600538238691624, 6.0207106781186548, 5.511593795664341, 5.2919238815542515,
    7.2, 6.8338834764831846, 5.95, 5.41966991411009, 5.2, 7.1646446609406729,
    6.7985281374238573, 6.5863961030678926, 5.5964466094067262,
    5.3767766952966367, 7.15, 7.0621320343559644, 6.85, 5.8600505063388333, 5.45
  },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table1'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },

  /*  Expression: [-1,-0.7071067811865476,0,0.7071067811865476,1]
   * Referenced by: '<S12>/2-D Lookup Table1'
   */
  { -1.0, -0.70710678118654757, 0.0, 0.70710678118654757, 1.0 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/pwm_servo2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/pwm_servo2'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/pwm_servo2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/pwm_servo2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/pwm_servo2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/pwm_servo2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/u_BT_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/u_BT_HIL'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/u_BT_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/u_BT_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/u_BT_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/u_BT_HIL'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/u_VSP1_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/u_VSP1_HIL'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/u_VSP1_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/u_VSP1_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/u_VSP1_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/u_VSP1_HIL'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/u_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/u_VSP2_HIL'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/u_VSP2_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/u_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/u_VSP2_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/u_VSP2_HIL'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/alpha_VSP1_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/alpha_VSP1_HIL'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/alpha_VSP1_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/alpha_VSP1_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/alpha_VSP1_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/alpha_VSP1_HIL'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/alpha_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/alpha_VSP2_HIL'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/alpha_VSP2_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/alpha_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/alpha_VSP2_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/alpha_VSP2_HIL'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/omega_VSP1_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/omega_VSP1_HIL'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/omega_VSP1_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/omega_VSP1_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/omega_VSP1_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/omega_VSP1_HIL'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/omega_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/omega_VSP2_HIL'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/omega_VSP2_HIL'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/omega_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/omega_VSP2_HIL'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/omega_VSP2_HIL'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Saturation7'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Saturation7'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S17>/Gain1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Gain6'
                                        */

  /*  Computed Parameter: uDLookupTable3_maxIndex
   * Referenced by: '<S12>/2-D Lookup Table3'
   */
  { 4U, 4U },

  /*  Computed Parameter: uDLookupTable2_maxIndex
   * Referenced by: '<S12>/2-D Lookup Table2'
   */
  { 4U, 4U },

  /*  Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S12>/2-D Lookup Table'
   */
  { 4U, 4U },

  /*  Computed Parameter: uDLookupTable1_maxIndex
   * Referenced by: '<S12>/2-D Lookup Table1'
   */
  { 4U, 4U }
};

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : u2pwm
 * Model version : 1.100
 * VeriStand Model Framework version : 2017.0.1.0 (2017 f1)
 * Source generated on : Fri Mar 06 17:02:20 2020
 *========================================================================*/
#if defined VXWORKS || defined kNIOSLinux

typedef struct {
  int32_t size;
  int32_t width;
  int32_t basetype;
} NI_ParamSizeWidth;

NI_ParamSizeWidth P_u2pwm_T_sizes[] DataSection(".NIVS.defaultparamsizes") = {
  { sizeof(P_u2pwm_T), 1 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 25, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 25, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 25, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 25, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 5, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(uint32_T), 2, 7 },

  { sizeof(uint32_T), 2, 7 },

  { sizeof(uint32_T), 2, 7 },

  { sizeof(uint32_T), 2, 7 },
};

#endif
