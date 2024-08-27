

/*
 *  Global Switches
 */

#ifndef SAC_DO_CHECK
#define SAC_DO_CHECK                             0
#endif
#ifndef SAC_DO_CHECK_TYPE
#define SAC_DO_CHECK_TYPE                        0
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
#define SAC_DO_MULTITHREAD                       1
#define SAC_DO_THREADS_STATIC                    0
#define SAC_DO_MT_CREATE_JOIN                    0
#define SAC_DO_MT_PTHREAD                        1
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
#define SAC_SET_MTMODE               2
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
#define SAC_SET_THREADS              0
#endif

#ifndef SAC_OMP_ACTIVE_LEVEL
#define SAC_OMP_ACTIVE_LEVEL          1
#endif

#ifndef SAC_SET_MASTERCLASS
#define SAC_SET_MASTERCLASS          0
#endif

#define SAC_SET_NUM_SCHEDULERS       1

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
#define SAC_SET_CACHESIM_FILE        "testing_tool.out.cs"
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
 *  SAC-Program testing_tool.sac :
 */


/* Additional headers for external function declarations */
#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"
#include <math.h>


/*
 *  type definitions
 */

SAC_ND_TYPEDEF((SACt_sacprelude_p__SACarg, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)

SAC_C_EXTERN SACt_sacprelude_p__SACarg SACARGcopy( SACt_sacprelude_p__SACarg);
SAC_C_EXTERN void SACARGfree( SACt_sacprelude_p__SACarg);

SAC_ND_TYPEDEF((SACt_Grey__grey, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_Color8__color, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_Quaternion__quaternion, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_ComplexBasics__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_ComplexArrayArith__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_String__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)

SAC_C_EXTERN SACt_String__string copy_string( SACt_String__string);
SAC_C_EXTERN void free_string( SACt_String__string);

SAC_ND_TYPEDEF((SACt_World__World, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Terminal__Terminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_TermFile__TermFile, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Complex__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_List__list, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_C_EXTERN void SAC_List_free_list( SACt_List__list);

SAC_ND_TYPEDEF((SACt_Structures__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_FileSystem__FileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_File__File, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_SysErr__syserr, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_C99Benchmarking__C99Benchmarking, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Interval__Interval, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_C99Benchmarking__Interval, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_MTClock__MTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)


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
 * ND_FUN_DECL( SACwf__MAIN_CL_ST__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

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
 * ND_FUN_DECL( SACf__MAIN_CL_ST__test, , 0)
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__test, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST_CL_INIT__init, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_World_CL_ST_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_World_CL_ST_CL_INIT__init_TheWorld__SACt_World__World, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Terminal_CL_ST_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Terminal_CL_ST_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_TermFile_CL_ST_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_TermFile_CL_ST_CL_INIT__init_stdout__SACt_TermFile__TermFile, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayIO_CL_ST__print__f_P, , 1, in, float, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayIO_CL_ST__print__f_P, void,  SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_C99Benchmarking_CL_ST_CL_INIT__init_TheBenchmarkObject__SACt_C99Benchmarking__C99Benchmarking, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_C99Benchmarking_CL_ST_CL_INIT__init_TheBenchmarkObject__SACt_C99Benchmarking__C99Benchmarking, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_MTClock_CL_ST_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_MTClock_CL_ST_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

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
 * ND_FUN_DECL( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4, , 6, out, float, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * MT_SPMDFUN_DECL( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 7, inout, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
;

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3, , 5, in, float, (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3, void,  SAC_ND_PARAM_in( (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X, , 1, in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DECL_FUN2( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float));

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
 * ND_OBJDEF_EXTERN( (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_C99Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_C99Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_C99Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
SAC_NOTHING()



/*
 *  SPMD infrastructure
 */

SAC_MT_SPMD_FRAME_BEGIN()
/*
 * MT_SPMD_FRAME_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 7, inout, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_MT_SPMD_FRAME_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X)
SAC_MT_FRAME_ELEMENT_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 1, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 2, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 3, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 4, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 5, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 6, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_SPMD_FRAME_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X)

SAC_MT_SPMD_FRAME_END()
SAC_MT_SPMD_BARRIER_BEGIN()
/*
 * MT_SPMD_BARRIER_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 7, inout, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_MT_SPMD_BARRIER_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X)
SAC_MT_BARRIER_ELEMENT_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 1, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 2, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 3, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 4, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 5, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 6, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
SAC_MT_SPMD_BARRIER_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X)

SAC_MT_SPMD_BARRIER_END()


/*
 *  function definitions (FUNDEFS)
 */



/****************************************************************************
 * Wrapper function:
 * ST function:
 * _MAIN:_ST::SACwf__MAIN_CL_ST__main(...) [ wrapper ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACwf__MAIN_CL_ST__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACwf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__main, , 1, out, int, SAC_SET_NT_USG( FAG, (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__main,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_12680, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACwf__MAIN_CL_ST__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__test(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__test, , 0)
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__test, void, void)
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;


    SAC_INIT_LOCAL_MEM()
    SAC_ND_ALLOC_BEGIN((SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5, 1, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 220, 2439, (SAC_ND_A_DIM( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 220, 2439, (SAC_ND_A_SHAPE( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) == 4), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5, 1, float)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4, 0.0f, 7.0f, -4.599999904632568359375f, -3.99999998401678880100007518194615840911865234375e-11f, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, 0.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 7.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2, -4.599999904632568359375f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3, -3.99999998401678880100007518194615840911865234375e-11f, )

    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3, , 5, in, float, SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_140144__pinl_122640_res__SSA3_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__test, , 0)
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__main(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_ND_DECL_CONST__DATA((SACp_emal_140145__isaa_134049__rso_10364_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST_CL_INIT__init, )

    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__test, , 0)
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__test, )

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_140145__isaa_134049__rso_10364_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_140145__isaa_134049__rso_10364_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST:_INIT::SACf__MAIN_CL_ST_CL_INIT__init(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST_CL_INIT__init, void, void)
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf_World_CL_ST_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_World_CL_ST_CL_INIT__init_TheWorld__SACt_World__World,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Terminal_CL_ST_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_Terminal_CL_ST_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_TermFile_CL_ST_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_TermFile_CL_ST_CL_INIT__init_stdout__SACt_TermFile__TermFile,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_C99Benchmarking_CL_ST_CL_INIT__init_TheBenchmarkObject__SACt_C99Benchmarking__C99Benchmarking, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_C99Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_C99Benchmarking_CL_ST_CL_INIT__init_TheBenchmarkObject__SACt_C99Benchmarking__C99Benchmarking,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_C99Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_MTClock_CL_ST_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_MTClock_CL_ST_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4, , 6, out, float, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 6, 4, 4, 4, 4, 4, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5120;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 6;

    /*
     * ND_DECL( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 2, 1024, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 1024;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5120;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 2;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    SAC_ND_ALLOC_BEGIN((SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 5)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_SHAPE( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) == 5), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 1, float)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, 0.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2, 0.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3, 0.0f, )
    SAC_ND_WRITE_COPY( (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4, 0.0f, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 6, float)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6, 4, 4, 4, 4, 4, 5)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_DIM( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (6)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) == 4), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) == 4), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) == 4), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) == 4), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) == 4), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 5, (SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5) == 5), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 6, float)
    /*
     * MT_SPMDFUN_AP( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 7, inout, float, SAC_SET_NT_USG( FAG, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FAG, (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_MT_BEGIN_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X);
    SAC_MT_SEND_PARAM_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, SAC_SET_NT_USG( FAG, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 1, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 2, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 3, SAC_SET_NT_USG( FPA, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 4, SAC_SET_NT_USG( FPA, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 5, SAC_SET_NT_USG( FPA, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 6, SAC_SET_NT_USG( FAG, (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_SPMD_EXECUTE( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X);
    SAC_MT_RECEIVE_RESULT_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 0, SAC_SET_NT_USG( FAG, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 1, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 2, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 3, SAC_SET_NT_USG( FPA, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 4, SAC_SET_NT_USG( FPA, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 5, SAC_SET_NT_USG( FPA, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, 6, SAC_SET_NT_USG( FAG, (SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
    SAC_MT_END_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X);

    /*
     * ND_REFRESH__MIRROR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6)
     */
    SAC_NOOP()

    SAC_ND_FREE((SACp_emal_140587__flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), 1, )
    /*
     * ND_ASSIGN__DESC( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
     */
    SAC_ND_A_DESC( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));

    SAC_ND_SET__RC((SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2, 1024, 5)
     */
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 224, (SAC_ND_A_DIM( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (2)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 224, (SAC_ND_A_SHAPE( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) == 1024), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 224, (SAC_ND_A_SHAPE( (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) == 5), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ASSIGN__DATA((SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOOP()
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140576__flat_7236, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4, , 6, out, float, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * SPMD function:
 * _MAIN:_ST::SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X(...) [ body ]
 ****************************************************************************/
/*
 * MT_SPMDFUN_DEF_BEGIN( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 7, inout, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_multi_threaded)
  SAC_MT_RECEIVE_PARAM_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 1, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 2, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 3, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 4, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 5, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 6, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))

  { 
    /* MT parallel branch */
    /*
     * ND_DECL( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 6, 4, 4, 4, 4, 4, 5)
     */
    SAC_ND_DECL__DATA( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5120;
    const int SAC_ND_A_MIRROR_DIM( (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 6;

    /*
     * ND_DECL( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;


    /*
     * ND_DECL__MIRROR_PARAM( (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 5)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    SAC_ND_DECL_PARAM_inout((SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float)
    /*
     * ND_DECL__MIRROR_PARAM( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6, 4, 4, 4, 4, 4, 5)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) = 4;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5120;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 6;

    SAC_INIT_LOCAL_MEM()
    /*
     * MT_SCHEDULER_Block_INIT( 0, 5, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1)
     */

    SAC_ND_ALLOC_BEGIN((SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2139, 13, (SAC_ND_A_DIM( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC__DESC((SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_PRF_SUB(SAC_ND_A_DIM((SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, ))))))))))), 5))
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 5)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_WL_MT_SCHEDULE_START( 4);
      int SAC_WL_MT_SCHEDULE_STOP( 4);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 5)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 5)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 1 * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = 1 * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) = 1 * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) = 1 * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) = 1 * SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 5);
      }

      /*
       * MT_SCHEDULER_Block_BEGIN( 0, 5, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1)
       */
      SAC_MT_SCHEDULER_Block_DIM0( 0, 4, 1);
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 4;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 4;
      SAC_WL_MT_SCHEDULE_START( 3) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 3) = 4;
      SAC_WL_MT_SCHEDULE_START( 4) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 4) = 4;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 5)
       */
      SAC_ND_WRITE( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3)
        + SAC_WL_MT_SCHEDULE_START( 4) * SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4);

      SAC_WL_MT_STRIDE_LOOP0_BEGIN(0, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(0, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP0_BEGIN(1, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(1, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP0_BEGIN(2, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(2, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP0_BEGIN(3, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(3, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      /*
       * WL_SET_OFFSET( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 3, 5, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 6, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 5, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_WRITE( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) 
        = ( SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4) * ( SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3) * ( SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2) * ( SAC_ND_A_SHAPE( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) * SAC_ND_READ( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        + SAC_ND_READ( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) )+ SAC_ND_READ( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) )+ SAC_ND_READ( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) ) + SAC_WL_MT_SCHEDULE_START( 4) ) * SAC_WL_SHAPE_FACTOR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4);

      SAC_WL_MT_STRIDE_LOOP0_BEGIN(4, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(4, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 0, float)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 723, (SAC_ND_A_DIM( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_READ( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      /*
       * WL_SUBALLOC( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_GETVAR((SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), SAC_ND_A_FIELD( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))) = SAC_ND_GETVAR( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), SAC_ND_A_FIELD( (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, ))))))))))))+SAC_ND_READ( (SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 5, (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0, SAC_ND_READ( (SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, SAC_ND_READ( (SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2, SAC_ND_READ( (SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 3, SAC_ND_READ( (SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 4, SAC_ND_READ( (SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_140584__pinl_125167__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_ND_FREE((SACp_emal_140583__pinl_125179__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_ND_FREE((SACp_emal_140582__pinl_125191__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_ND_FREE((SACp_emal_140581__pinl_125203__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_ND_FREE((SACp_emal_140580__pinl_125215__flat_156, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
      SAC_WL_MT_GRID_UNROLL_END(4, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(4, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_END(3, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(3, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_END(2, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(2, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_END(1, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(1, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      SAC_WL_MT_GRID_UNROLL_END(0, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(0, (SACp_flat_7230, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 4, 1)
      /*
       * MT_SCHEDULER_Block_END( 0, 5, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1)
       */


      /*
       * WL_SCHEDULE__END( 5)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_140630_SAC_label)
    SAC_ND_FREE__DESC((SACp_emal_140579__mose_516__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))))
    SAC_ND_FREE((SACp_wlidx_139981_perms, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_m, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * MT_SPMDFUN_RET( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 1, inout, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, ND, NONE)
     */
    SAC_MT_SYNC_BEGIN( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X);
      SAC_MT_SYNC_FOLD_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 0, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), (SACp_mtspmdfanon_140626_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, ND, NONE);
    SAC_MT_SYNC_CONT( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X);
      SAC_MT_SEND_RESULT_inout( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, SAC_MT_SELF_LOCAL_ID(), 0, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))));
    SAC_MT_SYNC_END( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X);
    SAC_MT_SPMDFUN_REAL_RETURN();

    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * MT_SPMDFUN_DEF_END( SACf__MAIN_CL_ST___mtspmdf_140627_permutations__f_4__f_4__f_4__f_4__f_4__f_4_4_4_4_4_5__f_X, 7, inout, float, (SACp_emal_140578_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_es, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACp_flat_7178__SSA19_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
   */
}



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3, , 5, in, float, (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3, void,  SAC_ND_PARAM_in( (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float), SAC_ND_PARAM_in( (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -4)
     */
    SAC_ND_DECL__DATA( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 2;

    /*
     * ND_DECL( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, 2, 1024, 5)
     */
    SAC_ND_DECL__DATA( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 1024;
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 5120;
    const int SAC_ND_A_MIRROR_DIM( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 2;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4, , 6, out, float, SAC_SET_NT_USG( FAG, (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), in, float, SAC_SET_NT_USG( FPA, (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__permutations__f_4__f_4__f_4__f_4__f_4,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), float), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_REFRESH__MIRROR( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2)
     */
    SAC_NOOP()

    /*
     * ND_ASSIGN( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -4, (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 2, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 3105, 5, (SAC_ND_A_DIM( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) == (2)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    SAC_ND_A_MIRROR_SHAPE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1);
    SAC_ND_A_MIRROR_SIZE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    SAC_ND_A_DESC_SHAPE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1);
    SAC_ND_A_DESC_SIZE( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACl_perms_v, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )

    /*
     * ND_FUN_AP( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X, , 1, in, float, SAC_SET_NT_USG( FAG, (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_140629_SACl_perms_v, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__test_sgemv__c_3__i_3__i_3__f_4__f_4__i_3__f_4__i_3__f_4__f_4__i_3, , 5, in, float, (SACl_alphas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_xs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_betas, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), in, float, (SACl_ys, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST:StdIO::SACof__MAIN_CL_ST_CLStdIO__print__f_X_X(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X, , 1, in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))), float))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, -1)
     */
    SAC_ND_DECL__DATA( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), float, )
    SAC_ND_DECL__DESC( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 0;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -4)
     */
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = 2;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_ASSIGN( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), -4, )
     */
    SAC_ND_A_DESC( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DESC( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_MIRROR_SIZE( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_MIRROR_DIM( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_A_DESC_DIM( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, )))))))))), )

    /*
     * ND_FUN_AP( SACf_ArrayIO_CL_ST__print__f_P, , 1, in, float, SAC_SET_NT_USG( FAG, (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ArrayIO_CL_ST__print__f_P,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_140628_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (FLO, ))))))))))), float))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACof__MAIN_CL_ST_CLStdIO__print__f_X_X, , 1, in, float, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (FLO, )))))))))))
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
  SAC_MT_DECL_MYTHREAD()
  SAC_ND_DECL__DATA( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
  SAC_ND_DECL__DESC( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
  SAC_NOTHING()
  SAC_HWLOC_SETUP();
  SAC_MT_SETUP_INITIAL();
  SAC_RTSPEC_SETUP_INITIAL(2, " -Xl -lcblas -tmt_pth -D ROUTINE=TEST -o bin/sac/mt-pth/testing_tool.out src/sac/testing_tool.sac", "sac2c");
  SAC_PF_SETUP();
  SAC_HM_SETUP();
  SAC_MT_SETUP();
  SAC_CS_SETUP();
  SAC_RTSPEC_SETUP();
  SAC_COMMANDLINE_SET( __argc, __argv);

  SAC_INVOKE_MAIN_FUN( SACf__MAIN_CL_ST__main, SAC_ND_ARG_out( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int));

  SAC_DISTMEM_BARRIER();
  SAC_PF_PRINT();
  SAC_CS_FINALIZE();
  SAC_MT_FINALIZE();
  SAC_HWLOC_FINALIZE();
  SAC_HM_PRINT();

  SAC_RTSPEC_FINALIZE();

  return( SAC_ND_READ( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0));
}
