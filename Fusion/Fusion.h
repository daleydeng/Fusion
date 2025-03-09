/**
 * @file Fusion.h
 * @author Seb Madgwick
 * @brief Main header file for the Fusion library.  This is the only file that
 * needs to be included when using the library.
 */

#ifndef FUSION_H
#define FUSION_H

//------------------------------------------------------------------------------
// Includes

#ifdef __cplusplus
extern "C" {
#endif

#include "FusionAhrs.h" // IWYU pragma: export
#include "FusionAxes.h" // IWYU pragma: export
#include "FusionCalibration.h" // IWYU pragma: export
#include "FusionCompass.h" // IWYU pragma: export
#include "FusionConvention.h" // IWYU pragma: export
#include "FusionMath.h" // IWYU pragma: export
#include "FusionOffset.h"

#ifdef __cplusplus
}
#endif

#endif
//------------------------------------------------------------------------------
// End of file
