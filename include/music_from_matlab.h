//
// File: music_from_matlab.h
//
// MATLAB Coder version            : 2.7
// C/C++ source code generated on  : 01-Feb-2016 14:02:25
//
#ifndef __MUSIC_FROM_MATLAB_H__
#define __MUSIC_FROM_MATLAB_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "music_from_matlab_types.h"

// Function Declarations
extern double music_from_matlab(const creal_T channel1[4096], const creal_T
  channel2[4096], const creal_T channel3[4096], const creal_T channel4[4096]);
extern void music_not_empty_init();

#endif

//
// File trailer for music_from_matlab.h
//
// [EOF]
//
