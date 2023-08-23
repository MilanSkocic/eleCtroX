/**
 * @file ecx_core.h
 * @brief EIS C header for the ecx_core module.
 * @details Constants and utilities functions.
 */
#ifndef ECX_CORE_H
#define ECX_CORE_H
#include "ecx_types.h"

extern const double ecx_core_capi_PI; /**< PI */
void ecx_core_capi_nm2eV(double *lambda, double *E, size_t n);

#endif