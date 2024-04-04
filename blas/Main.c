

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
#define SAC_SET_CACHESIM_FILE        "Main.cs"
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
 *  SAC-Program Main.sac :
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
SAC_ND_TYPEDEF((SACt_Quaternion__quaternion, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_ComplexArrayArith__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)


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
 * ND_FUN_DECL( ARRAYIO__PrintFloatArray, , 4, inout_nodesc_bx, SAC_hidden, (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in_nodesc, int, (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, int, (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, float, (SACl_a, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( ARRAYIO__PrintFloatArray, void,  SAC_ND_PARAM_inout_nodesc_bx( (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in_nodesc( (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_a, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));



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
 * ND_FUN_DECL( SACf__MAIN__padVectorFront__i__f_X, , 3, out, float, (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, int, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN__padVectorFront__i__f_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

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
 * ND_FUN_DECL( SACf_ArrayIO__print__f_P, , 1, in, float, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayIO__print__f_P, void,  SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

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
 * ND_FUN_DECL( SACof__MAIN_CLStdIO__print__f_X, , 1, in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACof__MAIN_CLStdIO__print__f_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

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
     * ND_DECL( (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN__main, , 1, out, int, SAC_SET_NT_USG( FAG, (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN__main,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_76, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
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
     * ND_DECL( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_7694__isaa_3761__rso_44_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    /*
     * ND_DECL( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_7692__flat_9, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 10)
    /*
     * ND_DECL( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -3)
     */
    SAC_ND_DECL__DATA( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_INIT__init, , 0)
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_INIT__init, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 5)
     */
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4540, (SAC_ND_A_DIM( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 220, 4540, (SAC_ND_A_SHAPE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) == 5), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 5, 0.0f, 2.0f, 4.0f, 6.0f, 8.0f, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, 0.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 2.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2, 4.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3, 6.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4, 8.0f, )

    /*
     * ND_ASSIGN( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 12, 11, (SAC_ND_A_DIM( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )

    /*
     * ND_FUN_AP( SACf__MAIN__padVectorFront__i__f_X, , 3, out, float, SAC_SET_NT_USG( FAG, (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, int, SAC_SET_NT_USG( FAG, (SACp_emal_7692__flat_9, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), in, float, SAC_SET_NT_USG( FAG, (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN__padVectorFront__i__f_X,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_7692__flat_9, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_8498_SACp_emal_7693__pinl_2488__icc_2108__SSA3_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_REFRESH__MIRROR( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3)
     */
    SAC_ND_A_MIRROR_SHAPE( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));

    /*
     * ND_FUN_AP( SACof__MAIN_CLStdIO__print__f_X, , 1, in, float, SAC_SET_NT_USG( FAG, (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CLStdIO__print__f_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_flat_8, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7694__isaa_3761__rso_44_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7694__isaa_3761__rso_44_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
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
 * _MAIN::SACf__MAIN__padVectorFront__i__f_X(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN__padVectorFront__i__f_X, , 3, out, float, (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, int, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN__padVectorFront__i__f_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    /*
     * ND_DECL( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7715__al_3726, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7715__al_3726, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7715__al_3726, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -3)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -3)
     */
    SAC_ND_DECL__DATA( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 0;

    /*
     * ND_DECL( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, -3)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3)
     */
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOTHING()

    SAC_INIT_LOCAL_MEM()
    SAC_ND_ALLOC_BEGIN((SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 16, 1, (SAC_ND_A_DIM( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 16, 1, (SAC_ND_A_SHAPE( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_PRF_SHAPE_A__DATA( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3)
     */
    SAC_TR_PRF_PRINT( ("ND_PRF_SHAPE_A__DATA( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3)"))
    SAC_ND_WRITE_COPY( (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_A_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0), );

    SAC_ND_ALLOC_BEGIN((SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 16, 41, (SAC_ND_A_DIM( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 16, 41, (SAC_ND_A_SHAPE( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, 0, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 0, )

    /*
     * ND_PRF_IDX_SEL__DATA( (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 16, 41, (SAC_ND_A_DIM( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
    SAC_ND_WRITE_READ_COPY( (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_PRF_SxS__DATA((SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_SUB, SAC_ND_READ((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
    SAC_ND_PRF_NON_NEG_VAL_S("./Main.sac", 19, 25, (SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
    SAC_ND_ALLOC_BEGIN((SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 18, 3, (SAC_ND_A_DIM( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 18, 3, (SAC_ND_A_SHAPE( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_FREE((SACp_emal_7728__pinl_2548__flat_903, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_PRF_NON_NEG_VAL_S("./Main.sac", 20, 34, (SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
    SAC_ND_PRF_NON_NEG_VAL_S("./Main.sac", 20, 12, (SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
    SAC_ND_ALLOC_BEGIN((SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_DIM( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_SHAPE( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_PRF_VAL_LE_VAL_SxS("./Main.sac", 20, 12, (SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
    SAC_ND_COPY__DATA((SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 22, (SAC_ND_A_DIM( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 22, (SAC_ND_A_SHAPE( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_FREE((SACp_emal_7721__uprf_3257, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_DIM( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
    SAC_ND_CREATE__SCALAR__DATA((SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0.0f)
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_ALLOC_BEGIN((SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
    SAC_ND_COPY__DATA((SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    /*
     * ND_PRF_IDX_SEL__DATA( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 200, 12, (SAC_ND_A_DIM( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
    SAC_ND_WRITE_READ_COPY( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_FREE((SACp_emal_7720__idc_505, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_PRF_IDX_SEL__DATA( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 201, 12, (SAC_ND_A_DIM( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
    SAC_ND_WRITE_READ_COPY( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_FREE((SACp_emal_7723__idc_501, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_PRF_SxS__DATA((SACp_emal_7715__al_3726, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 0))
    SAC_ND_DEC_RC_FREE((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 1, )
    SAC_ND_ALLOC_BEGIN((SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (1)), "Assignment with incompatible types found");
    {

      int SAC_size = 1;
      SAC_size *= 
      SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 
      SAC_ND_A_DESC_SHAPE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_MIRROR_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_size;
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_MIRROR_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) >= 0), "Array with size <0 found!");
    }

    SAC_ND_ALLOC_END((SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    SAC_ND_ALLOC_BEGIN((SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, SAC_ND_READ( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = SAC_ND_READ( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ((SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      /*
       * WL_ASSIGN( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_DIM( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) - SAC_ND_A_SIZE( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_SIZE( (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, );

      SAC_WL_INC_OFFSET((SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ((SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, SAC_ND_READ( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */


      /*
       * MT_SCHEDULER_BEGIN( 0, 1, SAC_ND_READ( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      SAC_WL_MT_SCHEDULE_START( 0) = SAC_ND_READ( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_WL_MT_SCHEDULE_STOP( 0) = SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ((SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayArith.sac", 147, 7519, (SAC_ND_A_DIM( (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      SAC_ND_PRF_SxS__DATA((SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_ADD, SAC_ND_READ((SACp_emal_7715__al_3726, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SAC_ND_A_DIM( (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SAC_ND_A_DIM( (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2843, (SAC_ND_A_DIM( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2843, (SAC_ND_A_SHAPE( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_7712__al_3727, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SAC_ND_A_DIM( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_id( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_WRITE( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_7709__pinl_2759__idc_2045, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SAC_ND_A_DIM( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SAC_ND_A_DIM( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_7708__ivesli_7493, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/stdlib-build/src-mt_pth/structures/ArrayBasics.sac", 152, 2878, (SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_7711__uprf_3217, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_7710__uprf_3211, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_DIM( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) - SAC_ND_A_SIZE( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 20, 12, (SAC_ND_A_SIZE( (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, );

      SAC_ND_FREE((SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7707__pinl_2716__icc_2024, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ((SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      /*
       * MT_SCHEDULER_END( 0, 1, SAC_ND_READ( (SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_8499_SAC_label)
    SAC_ND_FREE((SACp_emal_7717__pinl_3024__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7729__icc_461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7718__icc_483, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_ND_FREE((SACp_eat_50, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7715__al_3726, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7732__isaa_3813_arr, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_7476__icc_487, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), 1, )
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_FREE((SACp_emal_7725__uprf_3270, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_ND_FREE((SACp_emal_7722__uprf_3258, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_ND_FREE((SACp_emal_7724__uprf_3264, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    /*
     * ND_ASSIGN( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_SHAPE( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == SAC_ND_A_SHAPE( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7730__cf_7615, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    /*
     * ND_PRF_IDX_SEL__DATA( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 200, 12, (SAC_ND_A_DIM( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
    SAC_ND_WRITE_READ_COPY( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_DEC_RC_FREE((SACp_icc_491, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    /*
     * ND_PRF_IDX_SEL__DATA( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
     */
    SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
    SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 201, 12, (SAC_ND_A_DIM( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
    SAC_ND_WRITE_READ_COPY( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ( (SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

    SAC_ND_FREE((SACp_emal_7726__idc_496, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7731__isaa_3815_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_PRF_SxS__DATA((SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_MAX, SAC_ND_READ((SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
    SAC_ND_ALLOC_BEGIN((SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    /*
     * ND_COPY__SHAPE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (1)), "Assignment with incompatible types found");
    {

      int SAC_size = 1;
      SAC_ND_A_MIRROR_SHAPE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 
      SAC_ND_A_DESC_SHAPE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_MIRROR_SIZE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_size * SAC_ND_A_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_MIRROR_SIZE( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) >= 0), "Array with size <0 found!");
    }

    SAC_ND_ALLOC_END((SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    SAC_ND_ALLOC_BEGIN((SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_PF_BEGIN_WITH(modarray)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 1;
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, SAC_ND_READ( (SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      SAC_WL_MT_SCHEDULE_START( 0) = SAC_ND_READ( (SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_WL_MT_SCHEDULE_STOP( 0) = SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ((SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 460, (SAC_ND_A_DIM( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 460, (SAC_ND_A_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -2, (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, )
       */
      SAC_ND_A_DESC( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_A_MIRROR_DIM( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_A_DESC_DIM( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), -3, (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), -1, (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      {
        int SAC_l;
        SAC_l = 0;
        SAC_l *= SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
        if (0 < SAC_ND_A_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
        {

          SAC_l += SAC_ND_READ( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
        }
SAC_ND_WRITE( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_l;       }

      SAC_ND_DEC_RC_FREE((SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -2, (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -2, (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) - SAC_ND_A_SIZE( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_SIZE( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, );

      SAC_ND_FREE((SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ((SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      /*
       * MT_SCHEDULER_END( 0, 1, SAC_ND_READ( (SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */


      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, SAC_ND_READ( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = SAC_ND_READ( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ((SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_INC_RC((SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 460, (SAC_ND_A_DIM( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 460, (SAC_ND_A_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -2, (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, )
       */
      SAC_ND_A_DESC( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_A_MIRROR_DIM( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_A_DESC_DIM( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), -3, (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7699__pinl_3191__idc_1402, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), -1, (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      {
        int SAC_l;
        SAC_l = 0;
        SAC_l *= SAC_ND_READ( (SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
        if (0 < SAC_ND_A_SIZE( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
        {

          SAC_l += SAC_ND_READ( (SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
        }
SAC_ND_WRITE( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_l;       }

      SAC_ND_DEC_RC_FREE((SACp_pinl_3147__icc_1379, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -2, (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -2, (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SAC_ND_A_DIM( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_3148__icc_1380, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_7698__ivesli_7492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//builds/sac-group/build-sac-pkgs/sac2c-build/sac2c-release/src/sac2c-release-build/runtime_build/src/runtime_libraries-build/sacprelude_p.sac", 67, 449, (SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_7701__uprf_3718, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_7700__uprf_3712, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_ASSIGN( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) - SAC_ND_A_SIZE( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_SIZE( (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, );

      SAC_ND_FREE((SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7697__pinl_3149__icc_1381, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ((SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, SAC_ND_READ( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */


      /*
       * MT_SCHEDULER_BEGIN( 0, 1, SAC_ND_READ( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */
      SAC_WL_MT_SCHEDULE_START( 0) = SAC_ND_READ( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);
      SAC_WL_MT_SCHEDULE_STOP( 0) = SAC_ND_READ( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1)
       */
      SAC_ND_WRITE( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ((SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      /*
       * WL_ASSIGN( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_DIM( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (SAC_ND_A_DIM( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) - SAC_ND_A_SIZE( (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))), "WL expression with illegal dimension found!");
      SAC_ASSURE_TYPE_LINE ("./Main.sac", 19, 10, (SAC_ND_A_SIZE( (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == SAC_WL_SHAPE_FACTOR( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)), "WL expression with illegal size found!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, );

      SAC_WL_INC_OFFSET((SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
      SAC_WL_GRID_UNROLL_END(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACl_iv__SSA0_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_READ((SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ((SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 1)
      /*
       * MT_SCHEDULER_END( 0, 1, SAC_ND_READ( (SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), SAC_ND_READ( (SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(modarray)
    SAC_ND_LABEL(_comp_8500_SAC_label)
    SAC_ND_FREE((SACp_emal_7704__pinl_3088__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7705__pinl_3085__icc_1887, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7703__pinl_3143_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7706__icc_487, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_ND_FREE((SACp_emal_7719__flat_27, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_ND_FREE((SACp_eat_51, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_7716__pinl_3027__icc_1893, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_7477__icc_492, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_PRF_GUARD("./Main.sac", 19, 10, (SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "With-loop guard failed")
    SAC_ND_FREE((SACp_emal_7727__uprf_3276, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_7695__icc_492, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN__padVectorFront__i__f_X, , 3, out, float, (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, int, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN:StdIO::SACof__MAIN_CLStdIO__print__f_X(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACof__MAIN_CLStdIO__print__f_X, , 1, in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACof__MAIN_CLStdIO__print__f_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -1)
     */
    SAC_ND_DECL__DATA( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 0;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3)
     */
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_ASSIGN( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -3, )
     */
    SAC_ND_A_DESC( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_MIRROR_SIZE( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_MIRROR_DIM( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_DESC_DIM( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )

    /*
     * ND_FUN_AP( SACf_ArrayIO__print__f_P, , 1, in, float, SAC_SET_NT_USG( FAG, (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ArrayIO__print__f_P,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_8497_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACof__MAIN_CLStdIO__print__f_X, , 1, in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
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
  SAC_RTSPEC_SETUP_INITIAL(2, " -o Main -check tc Main.sac", "sac2c");
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
