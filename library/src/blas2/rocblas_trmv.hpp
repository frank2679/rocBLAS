/* ************************************************************************
 * Copyright 2019-2020 Advanced Micro Devices, Inc.
 * ************************************************************************ */

#pragma once

#include "trmv_template.hpp"

template <typename A, typename X, typename W>
rocblas_status rocblas_trmv_nobatch_template(rocblas_handle    handle,
                                             rocblas_fill      uplo,
                                             rocblas_operation transa,
                                             rocblas_diagonal  diag,
                                             rocblas_int       m,
                                             A                 a,
                                             rocblas_int       lda,
                                             X                 x,
                                             rocblas_int       incx,
                                             W                 w)
{
    static constexpr rocblas_int    NB          = 512;
    static constexpr rocblas_int    batch_count = 1;
    static constexpr ptrdiff_t      offseta     = 0;
    static constexpr ptrdiff_t      offsetx     = 0;
    static constexpr rocblas_stride stridex     = 0;
    static constexpr rocblas_stride stridea     = 0;
    static constexpr rocblas_stride stridew     = 0;

    return rocblas_trmv_template<NB>(handle,
                                     uplo,
                                     transa,
                                     diag,
                                     m,
                                     a,
                                     offseta,
                                     lda,
                                     stridea,
                                     x,
                                     offsetx,
                                     incx,
                                     stridex,
                                     w,
                                     stridew,
                                     batch_count);
}
