

/*
 *  Global Switches
 */

#ifndef SAC_DO_CHECK
#define SAC_DO_CHECK                             1
#endif
#ifndef SAC_DO_CHECK_TYPE
#define SAC_DO_CHECK_TYPE                        1
#endif
#ifndef SAC_DO_CHECK_GPU
#define SAC_DO_CHECK_GPU                         0
#endif
#ifndef SAC_DO_CHECK_BOUNDARY
#define SAC_DO_CHECK_BOUNDARY                    0
#endif
#ifndef SAC_DO_CHECK_MALLOC
#define SAC_DO_CHECK_MALLOC                      0
#endif
#ifndef SAC_DO_CHECK_ERRNO
#define SAC_DO_CHECK_ERRNO                       0
#endif
#ifndef SAC_DO_CHECK_HEAP
#define SAC_DO_CHECK_HEAP                        0
#endif
#ifndef SAC_DO_CHECK_DISTMEM
#define SAC_DO_CHECK_DISTMEM                     0
#endif
#ifndef SAC_DO_CHECK_DISTMEMPHM
#define SAC_DO_CHECK_DISTMEMPHM                  0
#endif

#define SAC_DO_PHM                               1
#define SAC_DO_APS                               1
#define SAC_DO_DAO                               1
#define SAC_DO_MSCA                              1
#define SAC_DO_COMPILE_MODULE                    0

#ifndef SAC_DO_PROFILE
#define SAC_DO_PROFILE                           0
#endif
#ifndef SAC_DO_PROFILE_WITH
#define SAC_DO_PROFILE_WITH                      0
#endif
#ifndef SAC_DO_PROFILE_FUN
#define SAC_DO_PROFILE_FUN                       0
#endif
#ifndef SAC_DO_PROFILE_INL
#define SAC_DO_PROFILE_INL                       0
#endif
#ifndef SAC_DO_PROFILE_LIB
#define SAC_DO_PROFILE_LIB                       0
#endif
#ifndef SAC_DO_PROFILE_MEM
#define SAC_DO_PROFILE_MEM                       0
#endif
#ifndef SAC_DO_PROFILE_OPS
#define SAC_DO_PROFILE_OPS                       0
#endif
#ifndef SAC_DO_PROFILE_CUDA
#define SAC_DO_PROFILE_CUDA                      0
#endif
#ifndef SAC_DO_PROFILE_DISTMEM
#define SAC_DO_PROFILE_DISTMEM                   0
#endif

#ifndef SAC_DO_TRACE
#define SAC_DO_TRACE                             0
#endif
#ifndef SAC_DO_TRACE_REF
#define SAC_DO_TRACE_REF                         0
#endif
#ifndef SAC_DO_TRACE_MEM
#define SAC_DO_TRACE_MEM                         0
#endif
#ifndef SAC_DO_TRACE_PRF
#define SAC_DO_TRACE_PRF                         0
#endif
#ifndef SAC_DO_TRACE_FUN
#define SAC_DO_TRACE_FUN                         0
#endif
#ifndef SAC_DO_TRACE_WL
#define SAC_DO_TRACE_WL                          0
#endif
#ifndef SAC_DO_TRACE_AA
#define SAC_DO_TRACE_AA                          0
#endif
#ifndef SAC_DO_TRACE_MT
#define SAC_DO_TRACE_MT                          0
#endif
#ifndef SAC_DO_TRACE_GPU
#define SAC_DO_TRACE_GPU                         0
#endif
#ifndef SAC_DO_TRACE_RTSPEC
#define SAC_DO_TRACE_RTSPEC                      0
#endif
#ifndef SAC_DO_TRACE_DISTMEM
#define SAC_DO_TRACE_DISTMEM                     0
#endif

#ifndef SAC_DO_CACHESIM
#define SAC_DO_CACHESIM                          0
#endif
#ifndef SAC_DO_CACHESIM_ADV
#define SAC_DO_CACHESIM_ADV                      0
#endif
#ifndef SAC_DO_CACHESIM_GLOBAL
#define SAC_DO_CACHESIM_GLOBAL                   1
#endif
#ifndef SAC_DO_CACHESIM_FILE
#define SAC_DO_CACHESIM_FILE                     0
#endif
#ifndef SAC_DO_CACHESIM_PIPE
#define SAC_DO_CACHESIM_PIPE                     0
#endif
#ifndef SAC_DO_CACHESIM_IMDT
#define SAC_DO_CACHESIM_IMDT                     1
#endif

/*
 * Setup for Multi Threaded Data Parallelism
 */
#define SAC_DO_MULTITHREAD                       0
#define SAC_DO_THREADS_STATIC                    1
#define SAC_DO_MT_CREATE_JOIN                    0
#define SAC_DO_MT_PTHREAD                        0
#define SAC_DO_MT_LPEL                           0

/*
 * Setup for OMP Data Parallelism
 */
#define SAC_DO_MT_OMP                            0
#define SAC_DO_OMP_MACROS                        0

/*
 * Setup for MUTC
 */
#define SAC_MUTC_FUNAP_AS_CREATE                 0
#define SAC_MUTC_THREAD_MALLOC                   0
#define SAC_MUTC_DISABLE_THREAD_MEM              0
#define SAC_MUTC_BENCH                           0
#define SAC_MUTC_MACROS                          0
#define SAC_MUTC_RC_INDIRECT                     0
#define SAC_MUTC_SEQ_DATA_PARALLEL               0

/*
 * Setup for GPU Data Parallelism
 */
#define SAC_CUDA_MACROS                          0

/*
 * Setup for Distributed Memory Data Parallelism
 */
#define SAC_DO_DISTMEM                           0
#define SAC_DO_DISTMEM_GASNET                    0
#define SAC_DO_DISTMEM_GPI                       0
#define SAC_DO_DISTMEM_MPI                       0
#define SAC_DO_DISTMEM_ARMCI                     0
#define SAC_DO_DISTMEM_ALLOC_CACHE_OUTSIDE_DSM   0
#define SAC_DO_DISTMEM_PTR_DESC                  0
#define SAC_DO_DISTMEM_PTR_CACHE                 1

/*
 * Setup for Task Parallelism
 */
#define SAC_DO_FP                                0

/*
 * Debugging Support
 */
#ifndef SAC_DEBUG_RC
#define SAC_DEBUG_RC                             0
#endif

#define SAC_DO_CUDA_FORCE_INIT 1


/*
 *  Global Settings
 */

#define SAC_FORCE_DESC_SIZE -1

/*
 *  MUTC Backend Specific Settings
 */
#define SAC_MUTC_RC_PLACES  1
#define SAC_MUTC_FORCE_SPAWN_FLAGS

#define SAC_C_EXTERN           extern



/*
 *  Global Settings
 */

#ifndef NULL
#  ifdef __cplusplus
#    define NULL         0
#  else
#    define NULL         (void*) 0
#  endif
#endif

#define SAC_SET_TMPDIR              "/tmp"
#define SAC_SET_INITIAL_MASTER_HEAPSIZE      1048576
#define SAC_SET_INITIAL_WORKER_HEAPSIZE      65536
#define SAC_SET_INITIAL_UNIFIED_HEAPSIZE     0

#ifndef SAC_SET_RTSPEC_THREADS
#define SAC_SET_RTSPEC_THREADS              1
#endif

#ifndef SAC_SET_MTMODE
#define SAC_SET_MTMODE               0
#endif

#define SAC_SET_CPU_BIND_STRATEGY 0
#define SAC_SET_BARRIER_TYPE               0
#define SAC_SET_SMART_DECISIONS            0
#define SAC_SET_SMART_FILENAME           "default"
#define SAC_SET_SMART_ARCH               "(null)"
#define SAC_SET_SMART_PERIOD               500
#ifndef SAC_SET_THREADS_MAX
#define SAC_SET_THREADS_MAX          128
#endif

#ifndef SAC_SET_THREADS
#define SAC_SET_THREADS              1
#endif

#ifndef SAC_OMP_ACTIVE_LEVEL
#define SAC_OMP_ACTIVE_LEVEL          1
#endif

#ifndef SAC_SET_MASTERCLASS
#define SAC_SET_MASTERCLASS          0
#endif

#define SAC_SET_NUM_SCHEDULERS       0

#define SAC_SET_CACHE_1_SIZE         -1
#define SAC_SET_CACHE_1_LINE         4
#define SAC_SET_CACHE_1_ASSOC        1
#define SAC_SET_CACHE_1_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_1_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_2_SIZE         -1
#define SAC_SET_CACHE_2_LINE         4
#define SAC_SET_CACHE_2_ASSOC        1
#define SAC_SET_CACHE_2_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_2_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_3_SIZE         -1
#define SAC_SET_CACHE_3_LINE         4
#define SAC_SET_CACHE_3_ASSOC        1
#define SAC_SET_CACHE_3_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_3_MSCA_FACTOR  0.00

#define SAC_SET_CACHESIM_HOST        ""
#define SAC_SET_CACHESIM_FILE        "a.out.cs"
#define SAC_SET_CACHESIM_DIR         "/tmp"
#define SAC_SET_MAXFUN               0
#define SAC_SET_MAXFUNAP             1
#define SBLOCKSZ               16
#define LBLOCKSZ               256



/*
 *  Includes
 */


#include "sac.h"


#if SAC_OMP_MACROS

#include "omp.h"

#endif

#if SAC_CUDA_MACROS

#include <stdio.h>


#include <cuda.h>


#include <cuda_runtime.h>


#include <algorithm>

#endif

/*
 *  SAC-Program blas.sac :
 */


/*
 *  type definitions
 */

SAC_ND_TYPEDEF((SACt_sacprelude_p__SACarg, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)

SAC_C_EXTERN SACt_sacprelude_p__SACarg SACARGcopy( SACt_sacprelude_p__SACarg);
SAC_C_EXTERN void SACARGfree( SACt_sacprelude_p__SACarg);

SAC_ND_TYPEDEF((SACt_World__World, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Terminal__Terminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_TermFile__TermFile, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_ComplexBasics__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_Complex__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_List__list, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_C_EXTERN void SAC_List_free_list( SACt_List__list);

SAC_ND_TYPEDEF((SACt_Grey__grey, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_Color8__color, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_String__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)

SAC_C_EXTERN SACt_String__string copy_string( SACt_String__string);
SAC_C_EXTERN void free_string( SACt_String__string);

SAC_ND_TYPEDEF((SACt_Structures__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)


/*
 *  Global Definitions
 */

SAC_PF_DEFINE()
SAC_HM_DEFINE()


/*
 *  prototypes for externals (FUNDECS)
 */

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( ARRAYIO__PrintDoubleArray, , 4, inout_nodesc_bx, SAC_hidden, (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in_nodesc, int, (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, int, (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, double, (SACl_a, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( ARRAYIO__PrintDoubleArray, void,  SAC_ND_PARAM_inout_nodesc_bx( (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in_nodesc( (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_a, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));



/*
 *  prototypes for locals (FUNDEFS)
 */

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionSlicer__i_S__i_S__i_S__i_S__i_S, , 9, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_min, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_max, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_axis, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionSlicer__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_min, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_max, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_axis, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionIntersectMax__i_S__i_S, , 3, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_PWLbound1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ivmin, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionIntersectMax__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_PWLbound1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ivmin, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__isPartitionIntersectNull__i_S__i_S__i_S__i_S, , 5, out, bool, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idxmin, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idxmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound2, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__isPartitionIntersectNull__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idxmin, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idxmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound2, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionIntersectMin__i_S__i_S, , 3, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_PWLbound2, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ivmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionIntersectMin__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_PWLbound2, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ivmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_S, , 4, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__prod__i_S, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_v, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__prod__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_v, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_S__i_S, , 5, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_shp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_shp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__i_S__i_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__f_S__f_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, float, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__f_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__d_S__d_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, double, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__d_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__bl_S__bl_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__bl_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__c_S__c_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, unsigned char, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__b_S__b_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, byte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, byte, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__b_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__s_S__s_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, short, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, short, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__s_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__l_S__l_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, long, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, long, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__l_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ll_S__ll_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, longlong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, longlong, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ll_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ub_S__ub_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ubyte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, ubyte, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ub_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__us_S__us_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ushort, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, ushort, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__us_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ui_S__ui_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, uint, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, uint, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ui_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ul_S__ul_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ulong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, ulong, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ul_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ull_S__ull_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ulonglong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, ulonglong, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ull_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__gridFiller__i_S__i_S__i_S__i_S__i_S, , 8, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_wdth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_dim, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_maxwidth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__gridFiller__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_wdth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_dim, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_maxwidth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__isPartitionIntersect1Part__i_S__i_S__i_S__i_S, , 5, out, bool, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idxmin, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idxmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound2, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__isPartitionIntersect1Part__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idxmin, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idxmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound2, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__i_S, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__d_S, , 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__f_S, , 2, out, float, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__c_S, , 2, out, unsigned char, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__bl_S, , 2, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__b_S, , 2, out, byte, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, byte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__s_S, , 2, out, short, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, short, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__l_S, , 2, out, long, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, long, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__ll_S, , 2, out, longlong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, longlong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__ub_S, , 2, out, ubyte, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, ubyte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__us_S, , 2, out, ushort, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, ushort, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__ui_S, , 2, out, uint, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, uint, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__ul_S, , 2, out, ulong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, ulong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__zero__ull_S, , 2, out, ulonglong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, ulonglong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__zero__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionMax__i_S__i_S, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionMax__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionMin__i_S__i_S, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionMin__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p___PL_PL__i_S, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_a, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p___PL_PL__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_a, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__i_S, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__f_S, , 3, out, float, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, float, (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__d_S, , 3, out, double, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__bl_S, , 3, out, bool, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, bool, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__b_S, , 3, out, byte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, byte, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__s_S, , 3, out, short, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, short, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__l_S, , 3, out, long, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, long, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ll_S, , 3, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, longlong, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ub_S, , 3, out, ubyte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ubyte, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__us_S, , 3, out, ushort, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ushort, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ui_S, , 3, out, uint, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, uint, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ul_S, , 3, out, ulong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ulong, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ull_S, , 3, out, ulonglong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ulonglong, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_INIT__init, , 0)
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_INIT__init, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayIO__print__d_P, , 1, in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayIO__print__d_P, void,  SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ull_S, , 3, out, ulonglong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ulonglong, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ul_S, , 3, out, ulong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ulong, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ui_S, , 3, out, uint, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, uint, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__us_S, , 3, out, ushort, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ushort, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ub_S, , 3, out, ubyte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, ubyte, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ll_S, , 3, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, longlong, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__l_S, , 3, out, long, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, long, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__s_S, , 3, out, short, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, short, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__b_S, , 3, out, byte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, byte, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__bl_S, , 3, out, bool, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, bool, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__d_S, , 3, out, double, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__f_S, , 3, out, float, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, float, (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__i_S, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ull_P, , 2, out, ulonglong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, ulonglong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ull_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ull_S, , 2, out, ulonglong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, ulonglong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ul_P, , 2, out, ulong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, ulong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ul_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ul_S, , 2, out, ulong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, ulong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ui_P, , 2, out, uint, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, uint, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ui_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ui_S, , 2, out, uint, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, uint, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__us_P, , 2, out, ushort, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, ushort, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__us_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__us_S, , 2, out, ushort, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, ushort, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ub_P, , 2, out, ubyte, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, ubyte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ub_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ub_S, , 2, out, ubyte, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, ubyte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ll_P, , 2, out, longlong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, longlong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ll_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__ll_S, , 2, out, longlong, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, longlong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__l_P, , 2, out, long, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, long, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__l_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__l_S, , 2, out, long, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, long, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__s_P, , 2, out, short, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, short, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__s_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__s_S, , 2, out, short, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, short, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__b_P, , 2, out, byte, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, byte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__b_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__b_S, , 2, out, byte, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, byte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__bl_P, , 2, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__bl_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__bl_S, , 2, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__c_P, , 2, out, unsigned char, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__c_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__c_S, , 2, out, unsigned char, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__f_P, , 2, out, float, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__f_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__f_S, , 2, out, float, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__d_P, , 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__d_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__d_S, , 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__i_P, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__i_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__zero__i_S, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__zero__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ull_S__ull_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ulonglong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), in, ulonglong, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ull_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULL, )))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ul_S__ul_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ulong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), in, ulong, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ul_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (ULO, )))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ui_S__ui_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, uint, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), in, uint, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ui_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UIN, )))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__us_S__us_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ushort, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), in, ushort, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__us_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (USH, )))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ub_S__ub_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, ubyte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), in, ubyte, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ub_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UBY, )))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ll_S__ll_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, longlong, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), in, longlong, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ll_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LLO, )))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__l_S__l_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, long, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), in, long, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__l_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (LON, )))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__s_S__s_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, short, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), in, short, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__s_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (SHO, )))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__b_S__b_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, byte, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), in, byte, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__b_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BYT, )))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__c_S__c_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, unsigned char, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__bl_S__bl_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__bl_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__d_S__d_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, double, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__d_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__f_S__f_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, float, (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__f_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__i_S__i_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_X, , 4, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_X__i_X, , 5, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_shp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_shp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__isPartitionIntersectNull__i_X__i_X__i_X__i_X, , 5, out, bool, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idxmin, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idxmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__isPartitionIntersectNull__i_X__i_X__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idxmin, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idxmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__isPartitionIntersectNull__i__i__i_X__i_X, , 5, out, bool, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idxmin, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idxmax, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__isPartitionIntersectNull__i__i__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idxmin, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idxmax, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionMin__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionMin__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionMax__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionMax__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__isPartitionIntersect1Part__i_X__i_X__i_X__i_X, , 5, out, bool, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idxmin, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idxmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__isPartitionIntersect1Part__i_X__i_X__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idxmin, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idxmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__isPartitionIntersect1Part__i__i__i_X__i_X, , 5, out, bool, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, int, (SACl_idxmin, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_idxmax, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__isPartitionIntersect1Part__i__i__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_idxmin, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_idxmax, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_bound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionIntersectMax__i_X__i_X, , 3, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_PWLbound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ivmin, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionIntersectMax__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_PWLbound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ivmin, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionIntersectMax__i_X__i, , 3, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_PWLbound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ivmin, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionIntersectMax__i_X__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_PWLbound1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ivmin, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionIntersectMin__i_X__i_X, , 3, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_PWLbound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ivmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionIntersectMin__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_PWLbound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ivmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionIntersectMin__i_X__i, , 3, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_PWLbound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ivmax, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionIntersectMin__i_X__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_PWLbound2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ivmax, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__prod__i_X, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_v, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__prod__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_v, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionSlicer__i_X__i_X__i__i_X__i_X, , 9, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_min, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_max, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_axis, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionSlicer__i_X__i_X__i__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_min, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_max, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_axis, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__gridFiller__i_X__i_X__i_X__i__i_X, , 8, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_wdth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_dim, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_maxwidth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__gridFiller__i_X__i_X__i_X__i__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_wdth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_dim, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_maxwidth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p___PL_PL__i, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_a, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p___PL_PL__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_a, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACof__MAIN_CLStdIO__print__d_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p___ST__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_a, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_b, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p___ST__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_a, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_b, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__and__bl__bl, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_a, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), in, bool, (SACl_b, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__and__bl__bl, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_a, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool), SAC_ND_PARAM_in( (SACl_b, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (BOO, )))))))))), bool));



/*
 *  global objects
 */

/*
 * ND_OBJDEF_EXTERN( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
SAC_NOTHING()



/*
 *  function definitions (FUNDEFS)
 */



/****************************************************************************
 * Wrapper function:
 * _MAIN::SACwf__MAIN__main(...) [ wrapper ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACwf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACwf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN__main, , 1, out, int, SAC_SET_NT_USG( FAG, (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN__main,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_47, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACwf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN::SACf__MAIN__main(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_9302__isaa_5553__rso_18_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    SAC_ND_DECL_CONST__DATA((SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 10)
    /*
     * ND_DECL( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_9298__pinl_2385__flat_5744, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_9289__pinl_2437__flat_3020, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 2.0)
    /*
     * ND_DECL( (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_INIT__init, , 0)
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_INIT__init, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 237, 3, (SAC_ND_A_DIM( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 237, 3, (SAC_ND_A_SHAPE( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 237, 3, (SAC_ND_A_DIM( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      /*
       * WL_ASSIGN( (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("ArrayBasics.sac", 1, 1, (SAC_ND_A_DIM( (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("ArrayBasics.sac", 1, 1, (SAC_ND_A_SIZE( (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, );

      SAC_WL_INC_OFFSET((SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_2343__flat_560, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_10129_SAC_label)
    SAC_ND_FREE((SACp_pinl_2344_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_9028__pinl_2337__icc_221, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4704, (SAC_ND_A_DIM( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4704, (SAC_ND_A_SHAPE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4704, (SAC_ND_A_DIM( (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4704, (SAC_ND_A_DIM( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SAC_ND_A_DIM( (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SAC_ND_A_DIM( (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4724, (SAC_ND_A_DIM( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4724, (SAC_ND_A_SHAPE( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SAC_ND_A_DIM( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9294__pinl_2412__idc_1551, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SAC_ND_A_DIM( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SAC_ND_A_DIM( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9293__ivesli_9056, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4745, (SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9296__uprf_5098, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9295__uprf_5092, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4736, (SAC_ND_A_DIM( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_PRF_S__DATA((SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_TOD, SAC_ND_READ((SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_emal_9292__pinl_2376__icc_1533, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      /*
       * WL_ASSIGN( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("ArrayArith.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("ArrayArith.sac", 1, 1, (SAC_ND_A_SIZE( (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_FREE((SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9291__pinl_2388__flat_5748, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_2386_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_10130_SAC_label)
    SAC_ND_FREE((SACp_emal_9298__pinl_2385__flat_5744, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_ND_FREE((SACp_pinl_2390__eat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_9299__pinl_2337__icc_221, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_9029__pinl_2380__icc_1539, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42723, (SAC_ND_A_DIM( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42723, (SAC_ND_A_SHAPE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42723, (SAC_ND_A_DIM( (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42723, (SAC_ND_A_DIM( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SAC_ND_A_DIM( (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SAC_ND_A_DIM( (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42743, (SAC_ND_A_DIM( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42743, (SAC_ND_A_SHAPE( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SAC_ND_A_DIM( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9285__pinl_2464__idc_1518, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SAC_ND_A_DIM( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SAC_ND_A_DIM( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9284__ivesli_9055, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42767, (SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9287__uprf_5083, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9286__uprf_5077, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 42755, (SAC_ND_A_DIM( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_PRF_SxS__DATA((SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, 10.0, SAC_ND_READ((SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_emal_9283__pinl_2427__icc_1500, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      /*
       * WL_ASSIGN( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("ArrayArith.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("ArrayArith.sac", 1, 1, (SAC_ND_A_SIZE( (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_FREE((SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9282__pinl_2440__flat_3025, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_2438_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_10131_SAC_label)
    SAC_ND_FREE((SACp_emal_9289__pinl_2437__flat_3020, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_ND_FREE((SACp_pinl_2442__eat_24, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_9030__pinl_2431__icc_1506, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_ASSIGN( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./blas.sac", 8, 5, (SAC_ND_A_DIM( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10128_SACp_emal_9290__pinl_2380__icc_1539, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_ASSIGN( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./blas.sac", 9, 5, (SAC_ND_A_DIM( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10127_SACp_emal_9281__pinl_2431__icc_1506, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    SAC_ND_ALLOC_BEGIN((SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_SHAPE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(modarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_DIM( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_SHAPE( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9277__pinl_3388__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9276__ivesli_9054, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9279__uprf_5038, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9278__uprf_5032, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_SIZE( (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_DEC_RC_FREE((SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_WL_INC_OFFSET((SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9275__pinl_3345__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_3223_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(modarray)
    SAC_ND_LABEL(_comp_10132_SAC_label)
    SAC_ND_FREE((SACp_pinl_3236__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_9031__pinl_3213__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_SHAPE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 1, double)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(modarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_DIM( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_SHAPE( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9270__pinl_3529__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9269__ivesli_9053, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9272__uprf_4993, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9271__uprf_4987, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 517, 5, (SAC_ND_A_DIM( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 517, 5, (SAC_ND_A_SIZE( (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_DEC_RC_FREE((SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_WL_INC_OFFSET((SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9268__pinl_3486__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_3235_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(modarray)
    SAC_ND_LABEL(_comp_10133_SAC_label)
    SAC_ND_FREE((SACp_pinl_3237__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_9032__pinl_3217__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_ASSIGN( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./blas.sac", 12, 5, (SAC_ND_A_DIM( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10126_SACp_emal_9267__pinl_3217__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_ASSIGN( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./blas.sac", 13, 5, (SAC_ND_A_DIM( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10125_SACp_emal_9274__pinl_3213__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_CHECK_REUSE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_IS_LASTREF__BLOCK_BEGIN( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_SHAPE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == SAC_ND_A_SHAPE( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_TR_MEM_PRINT( ("reuse memory of (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))) at %p for (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))", SAC_ND_GETVAR( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_A_FIELD( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))))
      SAC_PF_MEM_INC_REUSE()    SAC_IS_LASTREF__BLOCK_END( (SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
    else

    SAC_ND_ALLOC_BEGIN((SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_SHAPE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 1, double)
    SAC_ND_INC_RC((SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
    SAC_ND_DEC_RC_FREE((SACp_emal_9267__pinl_3217__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_ALLOC_BEGIN((SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(modarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 2)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 10265, (SAC_ND_A_DIM( (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      SAC_ND_PRF_SxS__DATA((SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 2)
      SAC_ND_PRF_SxS__DATA((SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_MUL, 2, SAC_ND_READ((SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_DIM( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_SHAPE( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_9259__pinl_3899__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9255__pinl_3834__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9254__ivesli_9051, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9257__uprf_4948, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9256__uprf_4942, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_SIZE( (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_DEC_RC_FREE((SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_WL_INC_OFFSET((SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9253__pinl_3791__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
      SAC_ND_INC_RC((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 732, (SAC_ND_A_DIM( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 732, (SAC_ND_A_SHAPE( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9263__pinl_4657__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9262__ivesli_9052, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9265__uprf_5489, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9264__uprf_5483, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_DIM( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 518, 5, (SAC_ND_A_SIZE( (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_DEC_RC_FREE((SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_WL_INC_OFFSET((SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9261__pinl_4615__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_3669_i, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 2)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(modarray)
    SAC_ND_LABEL(_comp_10134_SAC_label)
    SAC_ND_FREE((SACp_pinl_3682__eat_1579, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_9033__pinl_3659__icc_1560, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_CHECK_REUSE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_IS_LASTREF__BLOCK_BEGIN( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_SHAPE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == SAC_ND_A_SHAPE( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_TR_MEM_PRINT( ("reuse memory of (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))) at %p for (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))", SAC_ND_GETVAR( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_A_FIELD( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))))
      SAC_PF_MEM_INC_REUSE()    SAC_IS_LASTREF__BLOCK_END( (SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
    else

    SAC_ND_ALLOC_BEGIN((SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 10)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_SHAPE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 10), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 1, double)
    SAC_ND_INC_RC((SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
    SAC_ND_DEC_RC_FREE((SACp_emal_9274__pinl_3213__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_ALLOC_BEGIN((SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 516, 10, (SAC_ND_A_DIM( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(modarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 10)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 10;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 2)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 10265, (SAC_ND_A_DIM( (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      SAC_ND_PRF_SxS__DATA((SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 2)
      SAC_ND_PRF_SxS__DATA((SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_MUL, 2, SAC_ND_READ((SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_DIM( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3112, (SAC_ND_A_SHAPE( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_9244__pinl_4040__flat_1858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9240__pinl_3975__idc_1721, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SAC_ND_A_DIM( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9239__ivesli_9049, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 3147, (SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9242__uprf_4903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9241__uprf_4897, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 517, 5, (SAC_ND_A_DIM( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 517, 5, (SAC_ND_A_SIZE( (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_DEC_RC_FREE((SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_WL_INC_OFFSET((SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9238__pinl_3932__icc_1700, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
      SAC_ND_INC_RC((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 732, (SAC_ND_A_DIM( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 732, (SAC_ND_A_SHAPE( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 10)
       */
      SAC_ND_WRITE( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_DEC_RC_FREE((SACp_emal_9248__pinl_4841__idc_842, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SAC_ND_A_DIM( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_9247__ivesli_9050, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 721, (SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_9250__uprf_5474, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_9249__uprf_5468, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 517, 5, (SAC_ND_A_DIM( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) - SAC_ND_A_SIZE( (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./BlasLevel1.sac", 517, 5, (SAC_ND_A_SIZE( (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, );

      SAC_ND_DEC_RC_FREE((SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_WL_INC_OFFSET((SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9246__pinl_4799__icc_821, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_3681_i__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 10, 2)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 10)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(modarray)
    SAC_ND_LABEL(_comp_10135_SAC_label)
    SAC_ND_FREE((SACp_emal_9301__flat_3, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_pinl_3683__eat_1580, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACp_emal_9281__pinl_2431__icc_1506, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_9290__pinl_2380__icc_1539, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_FREE((SACp_wlidx_9034__pinl_3663__icc_1567, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_ASSIGN( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./blas.sac", 16, 5, (SAC_ND_A_DIM( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9237__pinl_3663__icc_1567, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10124_SACp_emal_9237__pinl_3663__icc_1567, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_ASSIGN( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./blas.sac", 17, 5, (SAC_ND_A_DIM( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_9252__pinl_3659__icc_1560, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10123_SACp_emal_9252__pinl_3659__icc_1560, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9302__isaa_5553__rso_18_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_9302__isaa_5553__rso_18_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN:_INIT::SACf__MAIN_CL_INIT__init(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_INIT__init, , 0)
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_INIT__init, void, void)
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_World_CL_INIT__init_TheWorld__SACt_World__World,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_INIT__init, , 0)
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN:StdIO::SACof__MAIN_CLStdIO__print__d_X(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACof__MAIN_CLStdIO__print__d_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1)
     */
    SAC_ND_DECL__DATA( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3)
     */
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_ASSIGN( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, )
     */
    SAC_ND_A_DESC( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SIZE( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_DIM( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_DIM( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACf_ArrayIO__print__d_P, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ArrayIO__print__d_P,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_10122_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACof__MAIN_CLStdIO__print__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()

/*
 * stubs for SACARGfreeDataUdt and SACARGcopyDataUdt
 */
extern void SACARGfreeDataUdt( int, void *);
extern void *SACARGcopyDataUdt( int, int, void *);
void SACARGfreeDataUdt( int size, void *data) {}
void *SACARGcopyDataUdt( int type, int size, void *data) { return ((void *) 0x0); } 

int main( int __argc, char *__argv[])
{
  SAC_ND_DECL__DATA( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
  SAC_ND_DECL__DESC( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
  SAC_NOTHING()
  SAC_HWLOC_SETUP();
  SAC_MT_SETUP_INITIAL();
  SAC_RTSPEC_SETUP_INITIAL(2, " -check tc blas.sac", "sac2c");
  SAC_PF_SETUP();
  SAC_HM_SETUP();
  SAC_MT_SETUP();
  SAC_CS_SETUP();
  SAC_RTSPEC_SETUP();
  SAC_COMMANDLINE_SET( __argc, __argv);

  SAC_INVOKE_MAIN_FUN( SACf__MAIN__main, SAC_ND_ARG_out( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int));

  SAC_DISTMEM_BARRIER();
  SAC_PF_PRINT();
  SAC_CS_FINALIZE();
  SAC_MT_FINALIZE();
  SAC_HWLOC_FINALIZE();
  SAC_HM_PRINT();

  SAC_RTSPEC_FINALIZE();

  return( SAC_ND_READ( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0));
}
