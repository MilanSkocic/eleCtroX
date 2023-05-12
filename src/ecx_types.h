/**
 * @file ecx_types.h
 * @brief Type C header for th ecx library.
 * @details Compatibilty layer for handling complex numbers with MSC.
 */
#include <complex.h>
#if _MSC_VER
typedef _Dcomplex ecx_cdouble;
#define ecx_cbuild(real, imag) (_Cbuild(real, imag))
#else
typedef double _Complex ecx_cdouble;
#define ecx_cbuild(real, imag) (real+I*imag)
#endif