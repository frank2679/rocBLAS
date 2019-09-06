/* ************************************************************************
 * Copyright 2016-2019 Advanced Micro Devices, Inc.
 * ************************************************************************ */
#include "rocblas_nrm2_strided_batched.hpp"


/*
 * ===========================================================================
 *    C wrapper
 * ===========================================================================
 */

extern "C" {

rocblas_status rocblas_snrm2_strided_batched(rocblas_handle handle,
                                             rocblas_int    n,
                                             const float*   x,
                                             rocblas_int    incx,
                                             rocblas_int    stridex,
                                             float*         result,
                                             rocblas_int    batch_count)
{
    return rocblas_nrm2_strided_batched(handle, n, x, 0, incx, stridex, result, batch_count);
}

rocblas_status rocblas_dnrm2_strided_batched(rocblas_handle handle,
                                             rocblas_int    n,
                                             const double*  x,
                                             rocblas_int    incx,
                                             rocblas_int    stridex,
                                             double*        result,
                                             rocblas_int    batch_count)
{
    return rocblas_nrm2_strided_batched(handle, n, x, 0, incx, stridex, result, batch_count);
}

rocblas_status rocblas_scnrm2_strided_batched(rocblas_handle               handle,
                                              rocblas_int                  n,
                                              const rocblas_float_complex* x,
                                              rocblas_int                  incx,
                                              rocblas_int                  stridex,
                                              float*                       result,
                                              rocblas_int                  batch_count)
{
    return rocblas_nrm2_strided_batched(handle, n, x, 0, incx, stridex, result, batch_count);
}

rocblas_status rocblas_dznrm2_strided_batched(rocblas_handle                handle,
                                              rocblas_int                   n,
                                              const rocblas_double_complex* x,
                                              rocblas_int                   incx,
                                              rocblas_int                   stridex,
                                              double*                       result,
                                              rocblas_int                   batch_count)
{
    return rocblas_nrm2_strided_batched(handle, n, x, 0, incx, stridex, result, batch_count);
}

} // extern "C"
