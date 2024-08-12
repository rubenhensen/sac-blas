

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
#include "/home/rhensen/bin/openblas/bin/include/cblas.h"
#include <math.h>


/*
 *  type definitions
 */

SAC_ND_TYPEDEF((SACt_sacprelude_p__SACarg, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)

SAC_C_EXTERN SACt_sacprelude_p__SACarg SACARGcopy( SACt_sacprelude_p__SACarg);
SAC_C_EXTERN void SACARGfree( SACt_sacprelude_p__SACarg);

SAC_ND_TYPEDEF((SACt_ComplexBasics__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_ComplexArrayArith__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_String__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)

SAC_C_EXTERN SACt_String__string copy_string( SACt_String__string);
SAC_C_EXTERN void free_string( SACt_String__string);

SAC_ND_TYPEDEF((SACt_Color8__color, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_Quaternion__quaternion, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_Grey__grey, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_ComplexArrayTransform__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_Complex__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_Structures__complex, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
SAC_ND_TYPEDEF((SACt_List__list, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_C_EXTERN void SAC_List_free_list( SACt_List__list);

SAC_ND_TYPEDEF((SACt_Structures__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_World__World, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_FileSystem__FileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_File__File, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_SysErr__syserr, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int)
SAC_ND_TYPEDEF((SACt_Terminal__Terminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_TermFile__TermFile, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden)
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
 * ND_FUN_DECL( sqrt, (double, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, in_nodesc, double, (SACl_X, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( sqrt, SAC_ND_TYPE_NT( (double, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))),  SAC_ND_PARAM_in_nodesc( (SACl_X, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( to_string, , 3, out, SAC_hidden, (SAC_arg_1, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in, unsigned char, (SACl_A, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in_nodesc, int, (SACl_LENGTH, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( to_string, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in( (SACl_A, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in_nodesc( (SACl_LENGTH, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACprintf_TF, , 2, in_nodesc, SAC_hidden, (SACl_FORMAT, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), , ..., )
 */
SAC_ND_DECL_FUN2( SACprintf_TF, void,  SAC_ND_PARAM_in_nodesc( (SACl_FORMAT, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_( , ...));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACdrotg, , 4, inout_nodesc, double, (SACl_a, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc, double, (SACl_b, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc, double, (SACl_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc, double, (SACl_s, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACdrotg, void,  SAC_ND_PARAM_inout_nodesc( (SACl_a, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc( (SACl_b, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc( (SACl_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc( (SACl_s, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACdrotmg, , 5, inout_nodesc, double, (SACl_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc, double, (SACl_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc, double, (SACl_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc, double, (SACl_y1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), inout_nodesc_bx, double, (SACl_param, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACdrotmg, void,  SAC_ND_PARAM_inout_nodesc( (SACl_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc( (SACl_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc( (SACl_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc( (SACl_y1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_inout_nodesc_bx( (SACl_param, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( ARRAYIO__PrintDoubleArray, , 4, inout_nodesc_bx, SAC_hidden, (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in_nodesc, int, (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, int, (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, double, (SACl_a, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( ARRAYIO__PrintDoubleArray, void,  SAC_ND_PARAM_inout_nodesc_bx( (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in_nodesc( (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_a, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( ARRAYIO__ShowCharArray, , 4, inout_nodesc_bx, SAC_hidden, (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in_nodesc, int, (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, int, (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in_nodesc, unsigned char, (SACl_a, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( ARRAYIO__ShowCharArray, void,  SAC_ND_PARAM_inout_nodesc_bx( (SACl_stream, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in_nodesc( (SACl_d, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_s, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in_nodesc( (SACl_a, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( minint, (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
 */
SAC_ND_DECL_FUN2( minint, SAC_ND_TYPE_NT( (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), void);



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
 * ND_FUN_DECL( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, , 2, in, SAC_hidden, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in, int, (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, void,  SAC_ND_PARAM_in( (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in( (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

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
 * ND_FUN_DECL( SACf_ScalarArith___ST__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarArith___ST__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ScalarArith___PL__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarArith___PL__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayArith__max__i_P__i_P, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayArith__max__i_P__i_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayArith__max__i_P__i, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayArith__max__i_P__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayArith__max__i__i_P, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayArith__max__i__i_P, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ScalarArith__max__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarArith__max__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_World_CL_ST_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_World_CL_ST_CL_INIT__init_TheWorld__SACt_World__World, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

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
 * ND_FUN_DECL( SACf_ArrayIO_CL_ST__show__d_P, , 1, in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayIO_CL_ST__show__d_P, void,  SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ScalarIO_CL_ST__print__SACt_String__string, , 1, in, SAC_hidden, (SACl_n, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarIO_CL_ST__print__SACt_String__string, void,  SAC_ND_PARAM_in( (SACl_n, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayIO_CL_ST__print__d_P, , 1, in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayIO_CL_ST__print__d_P, void,  SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, (SACl_n, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarIO_CL_ST__print__d, void,  SAC_ND_PARAM_in( (SACl_n, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

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
 * ND_FUN_DECL( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9, , 5, out, double, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * MT_SPMDFUN_DECL( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 7, inout, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
;

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9, , 4, in, double, (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9, void,  SAC_ND_PARAM_in( (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST__permutations__d_9__d_9, , 3, out, double, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__permutations__d_9__d_9, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST__test_drotg__d_9__d_9, , 2, in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__test_drotg__d_9__d_9, void,  SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACof__MAIN_CL_ST_CLStdIO__print__d_5, , 1, in, double, (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACof__MAIN_CL_ST_CLStdIO__print__d_5, void,  SAC_ND_PARAM_in( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACof__MAIN_CL_ST_CLStdIO__print__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACof__MAIN_CL_ST_CLStdIO__print__d_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACof__MAIN_CL_ST_CLStdIO__show__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DECL_FUN2( SACof__MAIN_CL_ST_CLStdIO__show__d_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double));

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

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayFormat__ScalarFormatter__d__i, , 3, out, unsigned char, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, double, (SACl_y, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACl_precision, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayFormat__ScalarFormatter__d__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_precision, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayFormat__alignrow__c_X_X__i_1__i_X__i_X__i_X__i, , 7, out, unsigned char, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_fry, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, int, (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_widths, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lodp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lodpmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_zcols, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayFormat__alignrow__c_X_X__i_1__i_X__i_X__i_X__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_fry, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_widths, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lodp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lodpmax, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_zcols, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_ArrayFormat__alignrow__c_S__i_S__i_S__i_S__i_S__i_S, , 7, out, unsigned char, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_fry, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, int, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_widths, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lodp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_lodpmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_zcols, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_ArrayFormat__alignrow__c_S__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_fry, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_widths, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lodp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_lodpmax, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_zcols, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayFormat__thcharsto__c_2__c_X, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_ch, (AKS, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_fry, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayFormat__thcharsto__c_2__c_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ch, (AKS, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_fry, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayFormat__thcharsto__c_X__c_X, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_ch, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_fry, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayFormat__thcharsto__c_X__c_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ch, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_fry, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_ArrayFormat__thcharsto__c_S__c_S, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_ch, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, unsigned char, (SACl_fry, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_ArrayFormat__thcharsto__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_ch, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_fry, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ArrayTransform__drop__i_X__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, int, (SACl_v, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ArrayTransform__drop__i_X__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_v, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_ArrayFormat_CLArray__drop__i_S__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), in, int, (SACl_v, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, unsigned char, (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_ArrayFormat_CLArray__drop__i_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_v, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_array, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (UCH, )))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_ArrayFormat_CLArray__max__i_S__i_S, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, int, (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_ArrayFormat_CLArray__max__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_A, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int), SAC_ND_PARAM_in( (SACl_B, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int));



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
 * ND_OBJDEF_EXTERN( (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), extern)
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
 * MT_SPMD_FRAME_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 7, inout, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_MT_SPMD_FRAME_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X)
SAC_MT_FRAME_ELEMENT_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 1, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 2, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 3, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 4, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 5, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 6, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_SPMD_FRAME_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X)

SAC_MT_SPMD_FRAME_END()
SAC_MT_SPMD_BARRIER_BEGIN()
/*
 * MT_SPMD_BARRIER_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 7, inout, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_MT_SPMD_BARRIER_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X)
SAC_MT_BARRIER_ELEMENT_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 1, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 2, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 3, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 4, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 5, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 6, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
SAC_MT_SPMD_BARRIER_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X)

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
     * ND_DECL( (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__main, , 1, out, int, SAC_SET_NT_USG( FAG, (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__main,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_cwc_14691, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
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
 * _MAIN:_ST::SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, , 2, in, SAC_hidden, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in, int, (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, void,  SAC_ND_PARAM_in( (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), SAC_hidden), SAC_ND_PARAM_in( (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_pinl_107680__emal_105975__flat_8757, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 23)
    /*
     * ND_DECL( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 24)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 24;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 24;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_pinl_107678__emal_105973__flat_8730, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 22)
    /*
     * ND_DECL( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 23)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 23;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 23;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_105971__esd_91009, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_105971__esd_91009, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_105971__esd_91009, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOTHING()

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOTHING()

    SAC_INIT_LOCAL_MEM()
    SAC_ND_PRF_S__DATA((SACp_emal_105971__esd_91009, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 0))
    SAC_ND_PRF_SxS__DATA((SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_int, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_emal_105971__esd_91009, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 0)
    SAC_ND_FREE((SACp_emal_105971__esd_91009, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    if (SAC_ND_GETVAR((SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_emal_105970__pinl_42816__flat_312)) 
    { 
      SAC_ND_DEC_RC_FREE((SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_FREE((SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 23)
       */
      SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 23), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
      SAC_ND_CREATE__STRING__DATA((SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "%s: PASSED all tests.\n")
      /*
       * ND_ASSIGN( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2034, 16, (SAC_ND_A_DIM( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
      SAC_ND_A_DESC_SHAPE( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
      SAC_ND_ASSIGN__DATA( (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_pinl_107677__emal_105972__flat_8706, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

      /*
       * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_107678__emal_105973__flat_8730, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
       */
      SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109872_SACp_pinl_107677__emal_105972__flat_8706, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_107678__emal_105973__flat_8730, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
       */
      SAC_NOOP()

      SAC_ND_DEC_RC_FREE((SACp_pinl_107678__emal_105973__flat_8730, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      /*
       * ND_FUN_AP( SACprintf_TF, , 2, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in_nodesc, SAC_hidden, SAC_SET_NT_USG( FPA, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, ))))))))))))
       */
      SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_107676__flat_8705, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FPA, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

      SAC_ND_DEC_RC_FREE((SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), 1, )
    }
    else
    { 
      SAC_ND_FREE((SACp_emal_105970__pinl_42816__flat_312, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 24)
       */
      SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 24), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
      SAC_ND_CREATE__STRING__DATA((SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "%s: FAILED %i test(s).\n")
      /*
       * ND_ASSIGN( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2036, 16, (SAC_ND_A_DIM( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
      SAC_ND_A_DESC_SHAPE( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
      SAC_ND_ASSIGN__DATA( (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_pinl_107679__emal_105974__flat_8732, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

      /*
       * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_107680__emal_105975__flat_8757, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
       */
      SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109873_SACp_pinl_107679__emal_105974__flat_8732, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_107680__emal_105975__flat_8757, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
       */
      SAC_NOOP()

      SAC_ND_DEC_RC_FREE((SACp_pinl_107680__emal_105975__flat_8757, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
      /*
       * ND_FUN_AP( SACprintf_TF, , 3, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in_nodesc, SAC_hidden, SAC_SET_NT_USG( FPA, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FPA, (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, ))))))))))))
       */
      SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_107673__flat_8731, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FPA, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FPA, (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, ))))))))))), int))

      SAC_ND_DEC_RC_FREE((SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), 1, )
    }
    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, , 2, in, SAC_hidden, (SACl_routine, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (OTH, )))))))))), in, int, (SACl_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
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
     * ND_DECL( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 9)
     */
    SAC_ND_DECL__DATA( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_105979__flat_12391, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 13)
    /*
     * ND_DECL( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 14)
     */
    SAC_ND_DECL__DATA( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 14;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 14;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_105977__flat_12409, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 14)
    /*
     * ND_DECL( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 15)
     */
    SAC_ND_DECL__DATA( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 15;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 15;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    SAC_ND_ALLOC_BEGIN((SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 6, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 3108, 5, (SAC_ND_A_DIM( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 3108, 5, (SAC_ND_A_SHAPE( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 9), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 6, 1, double)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9, 0.0, 7.0, 3.20000000000000017763568394002504646778106689453125, -4.5999999999999996447286321199499070644378662109375, -10.0, 2.999999999999999980049621235082650538839033060867222957313060760498046875e-11, -3.9999999999999997579878771277592437206893638546034708269871771335601806640625e-11, 700000.0, -4375.3000000000001818989403545856475830078125, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 0.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 7.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 3.20000000000000017763568394002504646778106689453125, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, -4.5999999999999996447286321199499070644378662109375, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4, -10.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, 2.999999999999999980049621235082650538839033060867222957313060760498046875e-11, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 6, -3.9999999999999997579878771277592437206893638546034708269871771335601806640625e-11, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 7, 700000.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 8, -4375.3000000000001818989403545856475830078125, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 14)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 14), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "Testing drotg")
    /*
     * ND_ASSIGN( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 3117, 11, (SAC_ND_A_DIM( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_105978__flat_12376, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_105979__flat_12391, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109871_SACp_emal_105978__flat_12376, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_105979__flat_12391, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_105979__flat_12391, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    /*
     * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__SACt_String__string, , 1, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__SACt_String__string,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_flat_12375, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__test_drotg__d_9__d_9, , 2, in, double, SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__test_drotg__d_9__d_9,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    SAC_ND_ALLOC_BEGIN((SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 15)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 15), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "Testing drotmg")
    /*
     * ND_ASSIGN( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 3120, 11, (SAC_ND_A_DIM( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_105976__flat_12393, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_105977__flat_12409, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109870_SACp_emal_105976__flat_12393, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_105977__flat_12409, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_105977__flat_12409, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    /*
     * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__SACt_String__string, , 1, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__SACt_String__string,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_flat_12392, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9, , 4, in, double, SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_105980_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

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
    SAC_ND_DECL_CONST__DATA((SACp_emal_105981__isaa_86819__rso_12631_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)

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
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_105981__isaa_86819__rso_12631_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), (SACp_emal_105981__isaa_86819__rso_12631_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
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
     * ND_FUN_AP( SACf_Terminal_CL_ST_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_Terminal_CL_ST_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_TermFile_CL_ST_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_TermFile_CL_ST_CL_INIT__init_stdout__SACt_TermFile__TermFile,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_FileSystem_CL_ST_CL_INIT__init_TheFileSystem__SACt_FileSystem__FileSystem,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_FileSystem__TheFileSystem, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

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
 * _MAIN:_ST::SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9, , 5, out, double, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_107228__wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 9)
    /*
     * ND_DECL( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 5, 9, 9, 9, 9, 4)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 26244;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;

    /*
     * ND_DECL( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 2, 6561, 4)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 6561;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 26244;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    SAC_ND_ALLOC_BEGIN((SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_DIM( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_SHAPE( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 4), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4, 0.0, 0.0, 0.0, 0.0, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 0.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 0.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, 0.0, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, 9, 9, 9, 9, 4)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 5, (SAC_ND_A_DIM( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (5)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 5, (SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 9), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 5, (SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) == 9), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 5, (SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) == 9), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 5, (SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) == 9), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 5, (SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4) == 4), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5, double)
    /*
     * MT_SPMDFUN_AP( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 7, inout, double, SAC_SET_NT_USG( FAG, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, int, SAC_SET_NT_USG( FAG, (SACp_emal_107228__wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_MT_BEGIN_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X);
    SAC_MT_SEND_PARAM_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, SAC_SET_NT_USG( FAG, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 1, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 2, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 3, SAC_SET_NT_USG( FPA, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 4, SAC_SET_NT_USG( FPA, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 5, SAC_SET_NT_USG( FAG, (SACp_emal_107228__wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 6, SAC_SET_NT_USG( FAG, (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_SPMD_EXECUTE( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X);
    SAC_MT_RECEIVE_RESULT_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 0, SAC_SET_NT_USG( FAG, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 1, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 2, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 3, SAC_SET_NT_USG( FPA, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 4, SAC_SET_NT_USG( FPA, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 5, SAC_SET_NT_USG( FAG, (SACp_emal_107228__wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, 6, SAC_SET_NT_USG( FAG, (SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
    SAC_MT_END_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X);

    /*
     * ND_REFRESH__MIRROR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5)
     */
    SAC_NOOP()

    SAC_ND_FREE((SACp_emal_107229__icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_ND_FREE((SACp_emal_107228__wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), 1, )
    /*
     * ND_ASSIGN__DESC( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
     */
    SAC_ND_A_DESC( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));

    SAC_ND_SET__RC((SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 6561, 4)
     */
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 312, (SAC_ND_A_DIM( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 312, (SAC_ND_A_SHAPE( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 6561), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 312, (SAC_ND_A_SHAPE( (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) == 4), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ASSIGN__DATA((SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOOP()
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107202__pinl_60437__icc_25829, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9, , 5, out, double, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * SPMD function:
 * _MAIN:_ST::SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X(...) [ body ]
 ****************************************************************************/
/*
 * MT_SPMDFUN_DEF_BEGIN( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 7, inout, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_multi_threaded)
  SAC_MT_RECEIVE_PARAM_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 1, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 2, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 3, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 4, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 5, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 6, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))

  { 
    /* MT parallel branch */
    /*
     * ND_DECL( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 5, 9, 9, 9, 9, 4)
     */
    SAC_ND_DECL__DATA( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 26244;
    const int SAC_ND_A_MIRROR_DIM( (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;

    /*
     * ND_DECL( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
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
     * ND_DECL( (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;


    /*
     * ND_DECL__MIRROR_PARAM( (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_NOTHING()

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_ND_DECL_PARAM_inout((SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double)
    /*
     * ND_DECL__MIRROR_PARAM( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, 9, 9, 9, 9, 4)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 26244;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;

    SAC_INIT_LOCAL_MEM()
    /*
     * MT_SCHEDULER_Block_INIT( 0, 4, 0, 0, 0, 0, 9, 9, 9, 9, 1, 1, 1, 1)
     */

    SAC_ND_ALLOC_BEGIN((SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_DIM( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_DIM( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_DIM( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_DIM( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2071, 13, (SAC_ND_A_DIM( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC__DESC((SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_SUB(SAC_ND_A_DIM((SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, ))))))))))), 4))
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 4)
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

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 4)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 4)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1 * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 1 * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) = 1 * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) = 1 * SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4);
      }

      /*
       * MT_SCHEDULER_Block_BEGIN( 0, 4, 0, 0, 0, 0, 9, 9, 9, 9, 1, 1, 1, 1)
       */
      SAC_MT_SCHEDULER_Block_DIM0( 0, 9, 1);
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 9;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 9;
      SAC_WL_MT_SCHEDULE_START( 3) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 3) = 9;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 4)
       */
      SAC_ND_WRITE( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3);

      SAC_WL_MT_STRIDE_LOOP0_BEGIN(0, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(0, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP0_BEGIN(1, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(1, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP0_BEGIN(2, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(2, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      /*
       * WL_SET_OFFSET( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 4, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 5, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 4, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_WRITE( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) 
        = ( SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3) * ( SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) * ( SAC_ND_A_SHAPE( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) * SAC_ND_READ( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        + SAC_ND_READ( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) )+ SAC_ND_READ( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) ) + SAC_WL_MT_SCHEDULE_START( 3) ) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3);

      SAC_WL_MT_STRIDE_LOOP0_BEGIN(3, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_BEGIN(3, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 9)
       */
      SAC_ND_WRITE( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_107223__pinl_60010__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107222__ivesli_105440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_107225__uprf_75958, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_107224__uprf_75952, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 9)
       */
      SAC_ND_WRITE( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_107218__pinl_60063__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107217__ivesli_105439, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_107220__uprf_75943, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_107219__uprf_75937, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 9)
       */
      SAC_ND_WRITE( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_107213__pinl_60116__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107212__ivesli_105438, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_107215__uprf_75928, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_107214__uprf_75922, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 9)
       */
      SAC_ND_WRITE( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_107208__pinl_60169__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107207__ivesli_105437, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_107210__uprf_75913, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_107209__uprf_75907, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_SUBALLOC( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_GETVAR((SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_A_FIELD( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))) = SAC_ND_GETVAR( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), SAC_ND_A_FIELD( (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, ))))))))))))+SAC_ND_READ( (SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4, (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, SAC_ND_READ( (SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, SAC_ND_READ( (SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, SAC_ND_READ( (SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, SAC_ND_READ( (SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107221__pinl_59967__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_FREE((SACp_emal_107216__pinl_60020__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_FREE((SACp_emal_107211__pinl_60073__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_FREE((SACp_emal_107206__pinl_60126__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_MT_GRID_UNROLL_END(3, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(3, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_END(2, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(2, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_END(1, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(1, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_MT_GRID_UNROLL_END(0, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_MT_STRIDE_LOOP_END(0, (SACp_flat_9208, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      /*
       * MT_SCHEDULER_Block_END( 0, 4, 0, 0, 0, 0, 9, 9, 9, 9, 1, 1, 1, 1)
       */


      /*
       * WL_SCHEDULE__END( 4)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_109874_SAC_label)
    SAC_ND_FREE__DESC((SACp_emal_107205__mose_900__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
    SAC_ND_FREE((SACp_wlidx_105347__icc_25881, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_l, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_k, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * MT_SPMDFUN_RET( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 1, inout, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, ND, NONE)
     */
    SAC_MT_SYNC_BEGIN( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X);
      SAC_MT_SYNC_FOLD_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 0, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), (SACp_mtspmdfanon_109854__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, ND, NONE);
    SAC_MT_SYNC_CONT( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X);
      SAC_MT_SEND_RESULT_inout( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, SAC_MT_SELF_LOCAL_ID(), 0, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))));
    SAC_MT_SYNC_END( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X);
    SAC_MT_SPMDFUN_REAL_RETURN();

    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * MT_SPMDFUN_DEF_END( SACf__MAIN_CL_ST___mtspmdf_109855_permutations__d_9__d_9__d_9__d_9__i__d_9_9_9_9_4__d_X, 7, inout, double, (SACp_emal_107204__icc_25881, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPO, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_cs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_ds, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, int, (SACp_wlsimp_75876, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (NDI, (INT, )))))))))), in, double, (SACp_icc_25868__SSA18_4, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9, , 4, in, double, (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9, void,  SAC_ND_PARAM_in( (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109103__emal_107297__pinl_34832__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109103__emal_107297__pinl_34832__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109103__emal_107297__pinl_34832__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109102__emal_107296__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109102__emal_107296__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109102__emal_107296__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109096__emal_107304__pinl_34827__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109096__emal_107304__pinl_34827__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109096__emal_107304__pinl_34827__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109095__emal_107303__pinl_34828__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109095__emal_107303__pinl_34828__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109095__emal_107303__pinl_34828__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109093__emal_107301__pinl_34823__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109093__emal_107301__pinl_34823__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109093__emal_107301__pinl_34823__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109092__emal_107300__pinl_34824__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109092__emal_107300__pinl_34824__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109092__emal_107300__pinl_34824__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109085__emal_107308__flat_1614, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109084__emal_107307_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109083__emal_107306_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    /*
     * ND_DECL( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109073__emal_107295__esd_92642, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109073__emal_107295__esd_92642, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109073__emal_107295__esd_92642, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109055__emlr_107583_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109055__emlr_107583_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109055__emlr_107583_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    /*
     * ND_DECL( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109045__emal_107310__pinl_34815__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109045__emal_107310__pinl_34815__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109045__emal_107310__pinl_34815__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109044__emal_107309__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109044__emal_107309__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109044__emal_107309__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109032__emal_107324__ctz_63128, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109032__emal_107324__ctz_63128, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109032__emal_107324__ctz_63128, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109031__emal_107323__pinl_34810__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109031__emal_107323__pinl_34810__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109031__emal_107323__pinl_34810__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109030__emal_107322__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109030__emal_107322__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109030__emal_107322__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109024__emal_107330__pinl_34807__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109024__emal_107330__pinl_34807__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109024__emal_107330__pinl_34807__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109023__emal_107329__pinl_34808__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109023__emal_107329__pinl_34808__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109023__emal_107329__pinl_34808__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109020__emal_107326__pinl_34802__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109020__emal_107326__pinl_34802__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109020__emal_107326__pinl_34802__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109019__emal_107325__pinl_34803__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109019__emal_107325__pinl_34803__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109019__emal_107325__pinl_34803__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109010__emal_107335__flat_1601, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109009__emal_107334_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109008__emal_107333_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    /*
     * ND_DECL( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108997__emal_107321__esd_92643, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108997__emal_107321__esd_92643, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108997__emal_107321__esd_92643, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108995__emal_107319__ctz_63126, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108995__emal_107319__ctz_63126, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108995__emal_107319__ctz_63126, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108993__emal_107317__ctz_63124, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108993__emal_107317__ctz_63124, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108993__emal_107317__ctz_63124, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108981__emlr_107587_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108981__emlr_107587_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108981__emlr_107587_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108979__emlr_107585_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108979__emlr_107585_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108979__emlr_107585_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    /*
     * ND_DECL( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108970__emal_107338__ctz_63130, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108970__emal_107338__ctz_63130, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108970__emal_107338__ctz_63130, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108969__emal_107337__pinl_34794__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108969__emal_107337__pinl_34794__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108969__emal_107337__pinl_34794__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108968__emal_107336__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108968__emal_107336__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108968__emal_107336__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108964__emal_107314__ctz_63122, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108964__emal_107314__ctz_63122, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108964__emal_107314__ctz_63122, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108959__emal_107363_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    /*
     * ND_DECL( (SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108954__emal_107358__pinl_34789__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108954__emal_107358__pinl_34789__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108954__emal_107358__pinl_34789__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108953__emal_107357__pinl_34790__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108953__emal_107357__pinl_34790__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108953__emal_107357__pinl_34790__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108951__emal_107355_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_108939__emal_107353_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_108937__emal_107351_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_pinl_108936__emal_107350__pinl_34779__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108936__emal_107350__pinl_34779__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108936__emal_107350__pinl_34779__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108935__emal_107349__pinl_34780__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108935__emal_107349__pinl_34780__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108935__emal_107349__pinl_34780__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108927__emal_107347__flat_1592, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108920__emal_107340__flat_1589, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108905__emal_107279__pinl_34770__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108905__emal_107279__pinl_34770__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108905__emal_107279__pinl_34770__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108901__emal_107275__esd_103524, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108901__emal_107275__esd_103524, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108901__emal_107275__esd_103524, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108899__emal_107273__esd_103523, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108899__emal_107273__esd_103523, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108899__emal_107273__esd_103523, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108897__emal_107271_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -2.0)
    /*
     * ND_DECL( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_108867__emal_107267_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emlr_107589__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emlr_107589__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emlr_107589__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_emal_107241__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    SAC_ND_DECL_CONST__DATA((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    SAC_ND_DECL_CONST__DATA((SACp_emal_107239__dlirmov_105857__uprf_76313, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 6561)
    SAC_ND_DECL_CONST__DATA((SACp_emal_107238__dlirmov_105861__flat_10796, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 5)
    /*
     * ND_DECL( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 6)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 6;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 6;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_107235__dlirmov_105876__flat_10829, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 14)
    /*
     * ND_DECL( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 15)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 15;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 15;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_107233__dlirmov_105886__flat_10844, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 11)
    /*
     * ND_DECL( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 12)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 12;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 12;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_107231__flat_10858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 6)
    /*
     * ND_DECL( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 7)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 7;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 7;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 2, 6561, 4)
     */
    SAC_ND_DECL__DATA( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 6561;
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 26244;
    const int SAC_ND_A_MIRROR_DIM( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9, , 5, out, double, SAC_SET_NT_USG( FAG, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__permutations__d_9__d_9__d_9__d_9,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_REFRESH__MIRROR( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2)
     */
    SAC_NOOP()

    SAC_ND_ALLOC_BEGIN((SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5)
     */
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 220, 566, (SAC_ND_A_DIM( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 220, 566, (SAC_ND_A_SHAPE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 5), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5, 0.0, 1.0, 2.0, 3.0, 4.0, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 0.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 2.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, 3.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4, 4.0, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 6)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 6), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "input")
    /*
     * ND_ASSIGN( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2669, 15, (SAC_ND_A_DIM( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_107236__dlirmov_105873__flat_10804, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_107238__dlirmov_105861__flat_10796, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109869_SACp_emal_107236__dlirmov_105873__flat_10804, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_107238__dlirmov_105861__flat_10796, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_107238__dlirmov_105861__flat_10796, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    SAC_ND_ALLOC_BEGIN((SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 15)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 15), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "native results")
    /*
     * ND_ASSIGN( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2677, 15, (SAC_ND_A_DIM( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_107234__dlirmov_105884__flat_10813, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_107235__dlirmov_105876__flat_10829, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109868_SACp_emal_107234__dlirmov_105884__flat_10813, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_107235__dlirmov_105876__flat_10829, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_107235__dlirmov_105876__flat_10829, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    SAC_ND_ALLOC_BEGIN((SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 12)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 12), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "lib results")
    /*
     * ND_ASSIGN( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2685, 15, (SAC_ND_A_DIM( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_107232__dlirmov_105888__flat_10831, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_107233__dlirmov_105886__flat_10844, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109867_SACp_emal_107232__dlirmov_105888__flat_10831, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_107233__dlirmov_105886__flat_10844, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_107233__dlirmov_105886__flat_10844, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    SAC_ND_COPY__DATA((SACp_emlr_107589__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107241__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_ASSIGN( (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emlr_107589__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2660, 5, (SAC_ND_A_DIM( (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emlr_107589__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    /*
     * ND_ASSIGN( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2660, 5, (SAC_ND_A_DIM( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109106_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    SAC_ND_GOTO(_dup_109109__f2l_107640_label)
    do 
    { 
      SAC_ND_FREE((SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * ND_ASSIGN( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2660, 5, (SAC_ND_A_DIM( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      SAC_ND_LABEL(_dup_109109__f2l_107640_label)
      SAC_ND_INC_RC((SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4)
      SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3)
      SAC_ND_INC_RC((SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
      SAC_ND_INC_RC((SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 1)
      SAC_ND_INC_RC((SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 1)
      SAC_ND_INC_RC((SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 1)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107239__dlirmov_105857__uprf_76313, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 2), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_VECT2OFFSET_arr( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 6561, 4)
       */
      SAC_ND_WRITE( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = ( 4 * SAC_ND_READ( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) + SAC_ND_READ( (SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1) );

      SAC_ND_FREE((SACp_pinl_108855__emal_107263__pinl_60674__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_108804__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_pinl_108854__emal_107262__ivesli_105444, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 2), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_VECT2OFFSET_arr( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 6561, 4)
       */
      SAC_ND_WRITE( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = ( 4 * SAC_ND_READ( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) + SAC_ND_READ( (SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1) );

      SAC_ND_FREE((SACp_pinl_108852__emal_107260__pinl_60674__idc_27217__SSA27_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_108816__icc_27195__SSA27_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_pinl_108851__emal_107259__ivesli_105443, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 2), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_VECT2OFFSET_arr( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 6561, 4)
       */
      SAC_ND_WRITE( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = ( 4 * SAC_ND_READ( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) + SAC_ND_READ( (SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1) );

      SAC_ND_FREE((SACp_pinl_108849__emal_107257__pinl_60674__idc_27217__SSA27_2, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_108819__icc_27195__SSA27_2, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_pinl_108848__emal_107256__ivesli_105442, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 2), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 3, )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 3, )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_VECT2OFFSET_arr( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 6561, 4)
       */
      SAC_ND_WRITE( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = ( 4 * SAC_ND_READ( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) + SAC_ND_READ( (SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1) );

      SAC_ND_FREE((SACp_pinl_108846__emal_107254__pinl_60674__idc_27217__SSA27_3, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_108822__icc_27195__SSA27_3, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_pinl_108845__emal_107253__ivesli_105441, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_pinl_108857__emal_107265__uprf_76328, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_pinl_108856__emal_107264__uprf_76315, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__SACt_String__string, , 1, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__SACt_String__string,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_ASSIGN( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2674, 9, (SAC_ND_A_DIM( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SIZE( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_FUN_AP( SACof__MAIN_CL_ST_CLStdIO__print__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACof__MAIN_CL_ST_CLStdIO__print__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109866_SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      SAC_ND_PRF_SxS__DATA((SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
      if (SAC_ND_GETVAR((SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108843__emal_107251__pinl_76222__flat_332)) 
      { 
        SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
        SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
        SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
        SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
        SAC_ND_FREE((SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
        /*
         * ND_ASSIGN( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108866__emal_107266_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108867__emal_107267_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 266, 3, (SAC_ND_A_DIM( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108867__emal_107267_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      }
      else
      { 
        SAC_ND_FREE((SACp_pinl_108843__emal_107251__pinl_76222__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
        SAC_ND_ALLOC_BEGIN((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
        /*
         * ND_SET__SHAPE_arr( (SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
         */
        SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()

        SAC_ND_ALLOC_END((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
        SAC_ND_PRF_SxS__DATA((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
        SAC_ND_PRF_S__DATA((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
        SAC_ND_PRF_SxS__DATA((SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
        SAC_ND_FREE((SACp_pinl_108870__emal_107270__pinl_34763__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
        if (SAC_ND_GETVAR((SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108868__emal_107268__pinl_34764__flat_330)) 
        { 
          SAC_ND_INC_RC((SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_INC_RC((SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_INC_RC((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_INC_RC((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_FREE((SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
          /*
           * ND_ASSIGN( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108897__emal_107271_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 271, 10, (SAC_ND_A_DIM( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108897__emal_107271_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        }
        else
        { 
          SAC_ND_FREE((SACp_pinl_108868__emal_107268__pinl_34764__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
          SAC_ND_ALLOC_BEGIN((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          /*
           * ND_SET__SHAPE_arr( (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()

          SAC_ND_ALLOC_END((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_ALLOC_BEGIN((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          /*
           * ND_SET__SHAPE_arr( (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()

          SAC_ND_ALLOC_END((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_ALLOC_BEGIN((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          /*
           * ND_SET__SHAPE_arr( (SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()

          SAC_ND_ALLOC_END((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_S__DATA((SACp_pinl_108905__emal_107279__pinl_34770__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_S__DATA((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108905__emal_107279__pinl_34770__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_FREE((SACp_pinl_108905__emal_107279__pinl_34770__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
          SAC_ND_FREE((SACp_pinl_108906__emal_107280__pinl_34769__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          if (SAC_ND_GETVAR((SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108902__emal_107276__pinl_34772__flat_334)) 
          { 
            SAC_ND_FREE((SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
            SAC_ND_FREE((SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            SAC_ND_ALLOC_BEGIN((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
            /*
             * ND_SET__SHAPE_arr( (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
             */
            SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 101, 179, (SAC_ND_A_DIM( (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()

            SAC_ND_ALLOC_END((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
            SAC_ND_PRF_S__DATA((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_FREE((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
            SAC_ND_ALLOC_BEGIN((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
            /*
             * ND_SET__SHAPE_arr( (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
             */
            SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()

            SAC_ND_ALLOC_END((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, 1.0, SAC_ND_READ((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            if (SAC_ND_GETVAR((SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108919__emal_107339__pinl_34778__flat_334)) 
            { 
              SAC_ND_FREE((SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108936__emal_107350__pinl_34779__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108935__emal_107349__pinl_34780__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              /*
               * ND_ASSIGN( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108936__emal_107350__pinl_34779__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108936__emal_107350__pinl_34779__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108935__emal_107349__pinl_34780__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108935__emal_107349__pinl_34780__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108937__emal_107351_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108937__emal_107351_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            else
            { 
              SAC_ND_DEC_RC_FREE((SACp_pinl_108922__emal_107342__pinl_34776__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
              SAC_ND_FREE((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_FREE((SACp_pinl_108925__emal_107345__pinl_34773__flat_291, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_FREE((SACp_pinl_108919__emal_107339__pinl_34778__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108938__emal_107352_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108939__emal_107353_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 284, 7, (SAC_ND_A_DIM( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108939__emal_107353_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            /*
             * ND_ASSIGN( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108920__emal_107340__flat_1589, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 279, 5, (SAC_ND_A_DIM( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108920__emal_107340__flat_1589, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108920__emal_107340__flat_1589, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 279, 5, (SAC_ND_A_DIM( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108920__emal_107340__flat_1589, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          }
          else
          { 
            SAC_ND_FREE((SACp_pinl_108902__emal_107276__pinl_34772__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            SAC_ND_FREE((SACp_pinl_108907__emal_107281__pinl_34768__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
            if (SAC_ND_GETVAR((SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108926__emal_107346__pinl_34783__flat_332)) 
            { 
              SAC_ND_FREE((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_FREE((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_FREE((SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108950__emal_107354_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108951__emal_107355_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108951__emal_107355_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_108926__emal_107346__pinl_34783__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_FREE((SACp_pinl_108909__emal_107283__pinl_34766__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_ALLOC_BEGIN((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
              /*
               * ND_SET__SHAPE_arr( (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
               */
              SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()

              SAC_ND_ALLOC_END((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, SAC_ND_READ((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 1.0)
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108954__emal_107358__pinl_34789__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108953__emal_107357__pinl_34790__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              /*
               * ND_ASSIGN( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108954__emal_107358__pinl_34789__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108954__emal_107358__pinl_34789__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108953__emal_107357__pinl_34790__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108953__emal_107357__pinl_34790__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108956__emal_107360__pinl_34787__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108957__emal_107361__pinl_34786__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108908__emal_107282__pinl_34767__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108959__emal_107363_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 300, 7, (SAC_ND_A_DIM( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108959__emal_107363_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            /*
             * ND_ASSIGN( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108927__emal_107347__flat_1592, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 279, 5, (SAC_ND_A_DIM( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108927__emal_107347__flat_1592, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108927__emal_107347__flat_1592, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 279, 5, (SAC_ND_A_DIM( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108927__emal_107347__flat_1592, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          }
          SAC_ND_PRF_S__DATA((SACp_pinl_108901__emal_107275__esd_103524, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_NE, 0.0, SAC_ND_READ((SACp_pinl_108901__emal_107275__esd_103524, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_FREE((SACp_pinl_108901__emal_107275__esd_103524, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          if (SAC_ND_GETVAR((SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108900__emal_107274__pinl_34792__flat_331)) 
          { 
            SAC_ND_FREE((SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108964__emal_107314__ctz_63122, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -5.96046000000000015661078879049272760681787985959090292453765869140625e-08, SAC_ND_READ((SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_108964__emal_107314__ctz_63122, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            SAC_ND_FREE((SACp_pinl_108964__emal_107314__ctz_63122, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
            if (SAC_ND_GETVAR((SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108963__emal_107313__pinl_34793__flat_332)) 
            { 
              SAC_ND_FREE((SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_CREATE__SCALAR__DATA((SACp_pinl_108968__emal_107336__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), true)
              /*
               * ND_ASSIGN( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_108968__emal_107336__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 13, (SAC_ND_A_DIM( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_108968__emal_107336__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_108963__emal_107313__pinl_34793__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108970__emal_107338__ctz_63130, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -16777200.0, SAC_ND_READ((SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_108969__emal_107337__pinl_34794__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_108970__emal_107338__ctz_63130, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
              SAC_ND_FREE((SACp_pinl_108970__emal_107338__ctz_63130, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_108969__emal_107337__pinl_34794__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 13, (SAC_ND_A_DIM( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_108969__emal_107337__pinl_34794__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

            }
            if (SAC_ND_GETVAR((SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108960__hce_1047)) 
            { 
              SAC_ND_FREE((SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_COPY__DATA((SACp_pinl_108981__emlr_107587_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_DEC_RC_FREE((SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
              SAC_ND_COPY__DATA((SACp_pinl_108979__emlr_107585_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_DEC_RC_FREE((SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
              /*
               * ND_ASSIGN( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108979__emlr_107585_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108979__emlr_107585_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108981__emlr_107587_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108981__emlr_107587_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              SAC_ND_GOTO(_dup_109107__f2l_107655_label)
              do 
              { 
                SAC_ND_INC_RC((SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
                SAC_ND_FREE((SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                /*
                 * ND_ASSIGN( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                SAC_ND_LABEL(_dup_109107__f2l_107655_label)
                SAC_ND_PRF_S__DATA((SACp_pinl_108997__emal_107321__esd_92643, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_DEC_RC_FREE((SACp_pinl_108998__f2l_107648_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                SAC_ND_PRF_SxS__DATA((SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_pinl_108997__emal_107321__esd_92643, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                SAC_ND_FREE((SACp_pinl_108997__emal_107321__esd_92643, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                if (SAC_ND_GETVAR((SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108996__emal_107320__pinl_34795__flat_330)) 
                { 
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_DEC_RC_FREE((SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_FREE((SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  /*
                   * ND_ASSIGN( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109008__emal_107333_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109008__emal_107333_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109008__emal_107333_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109008__emal_107333_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                else
                { 
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109001__f2l_107651_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109000__f2l_107650_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_FREE((SACp_pinl_108996__emal_107320__pinl_34795__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  /*
                   * ND_ASSIGN( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109002__f2l_107652_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109010__emal_107335__flat_1601, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109010__emal_107335__flat_1601, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109009__emal_107334_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109009__emal_107334_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 323, 9, (SAC_ND_A_DIM( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108999__f2l_107649_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                SAC_ND_PRF_SxS__DATA((SACp_pinl_108995__emal_107319__ctz_63126, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -5.96046000000000015661078879049272760681787985959090292453765869140625e-08, SAC_ND_READ((SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_PRF_SxS__DATA((SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_108995__emal_107319__ctz_63126, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                SAC_ND_FREE((SACp_pinl_108995__emal_107319__ctz_63126, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                if (SAC_ND_GETVAR((SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108994__emal_107318__pinl_34798__flat_332)) 
                { 
                  SAC_ND_FREE((SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 16777216.0, SAC_ND_READ((SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 4096.0)
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109020__emal_107326__pinl_34802__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 4096.0)
                  SAC_ND_DEC_RC_FREE((SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109019__emal_107325__pinl_34803__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 4096.0)
                  SAC_ND_DEC_RC_FREE((SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  /*
                   * ND_ASSIGN( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109019__emal_107325__pinl_34803__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109019__emal_107325__pinl_34803__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109020__emal_107326__pinl_34802__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109020__emal_107326__pinl_34802__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                else
                { 
                  SAC_ND_FREE((SACp_pinl_108994__emal_107318__pinl_34798__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 16777216.0)
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 4096.0, SAC_ND_READ((SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109024__emal_107330__pinl_34807__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 4096.0, SAC_ND_READ((SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_DEC_RC_FREE((SACp_pinl_108984_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109023__emal_107329__pinl_34808__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 4096.0, SAC_ND_READ((SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_DEC_RC_FREE((SACp_pinl_108985_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  /*
                   * ND_ASSIGN( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109004__f2l_107654_d1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109003__f2l_107653_x1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109023__emal_107329__pinl_34808__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109023__emal_107329__pinl_34808__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109024__emal_107330__pinl_34807__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 333, 9, (SAC_ND_A_DIM( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109024__emal_107330__pinl_34807__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                SAC_ND_PRF_SxS__DATA((SACp_pinl_108993__emal_107317__ctz_63124, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -5.96046000000000015661078879049272760681787985959090292453765869140625e-08, SAC_ND_READ((SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_PRF_SxS__DATA((SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_108993__emal_107317__ctz_63124, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                SAC_ND_FREE((SACp_pinl_108993__emal_107317__ctz_63124, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                if (SAC_ND_GETVAR((SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108992__emal_107316__pinl_34809__flat_332)) 
                { 
                  SAC_ND_FREE((SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_CREATE__SCALAR__DATA((SACp_pinl_109030__emal_107322__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), true)
                  /*
                   * ND_ASSIGN( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_109030__emal_107322__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 13, (SAC_ND_A_DIM( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109030__emal_107322__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

                }
                else
                { 
                  SAC_ND_FREE((SACp_pinl_108992__emal_107316__pinl_34809__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109032__emal_107324__ctz_63128, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -16777200.0, SAC_ND_READ((SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109031__emal_107323__pinl_34810__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109032__emal_107324__ctz_63128, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                  SAC_ND_FREE((SACp_pinl_109032__emal_107324__ctz_63128, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                  /*
                   * ND_ASSIGN( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_109031__emal_107323__pinl_34810__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 13, (SAC_ND_A_DIM( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109031__emal_107323__pinl_34810__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

                }
              }
              while (SAC_ND_GETVAR((SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108983__hce_1046));
              SAC_ND_DEC_RC_FREE((SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
              SAC_ND_FREE((SACp_pinl_108983__hce_1046, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108976_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108975_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108974_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108973_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108972_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108971_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108978__emal_107315__dlirmov_105849_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_108960__hce_1047, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 322, 7, (SAC_ND_A_DIM( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
          }
          else
          { 
            SAC_ND_FREE((SACp_pinl_108900__emal_107274__pinl_34792__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            /*
             * ND_ASSIGN( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108879_d1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108877_x1__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108876_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108875_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108874_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108873_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 321, 5, (SAC_ND_A_DIM( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108872_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          }
          SAC_ND_PRF_S__DATA((SACp_pinl_108899__emal_107273__esd_103523, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_NE, 0.0, SAC_ND_READ((SACp_pinl_108899__emal_107273__esd_103523, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_FREE((SACp_pinl_108899__emal_107273__esd_103523, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          if (SAC_ND_GETVAR((SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108898__emal_107272__pinl_34811__flat_331)) 
          { 
            SAC_ND_FREE((SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            SAC_ND_ALLOC_BEGIN((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
            /*
             * ND_SET__SHAPE_arr( (SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
             */
            SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 92, 187, (SAC_ND_A_DIM( (SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()

            SAC_ND_ALLOC_END((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
            SAC_ND_PRF_S__DATA((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -5.96046000000000015661078879049272760681787985959090292453765869140625e-08, SAC_ND_READ((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            SAC_ND_FREE((SACp_pinl_109039__emal_107286__pinl_34812__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
            if (SAC_ND_GETVAR((SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109037__emal_107284__pinl_34813__flat_332)) 
            { 
              SAC_ND_FREE((SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_CREATE__SCALAR__DATA((SACp_pinl_109044__emal_107309__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), true)
              /*
               * ND_ASSIGN( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_109044__emal_107309__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 13, (SAC_ND_A_DIM( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109044__emal_107309__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_109037__emal_107284__pinl_34813__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_ALLOC_BEGIN((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
              /*
               * ND_SET__SHAPE_arr( (SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
               */
              SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 92, 187, (SAC_ND_A_DIM( (SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()

              SAC_ND_ALLOC_END((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
              SAC_ND_PRF_S__DATA((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -16777200.0, SAC_ND_READ((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              SAC_ND_PRF_SxS__DATA((SACp_pinl_109045__emal_107310__pinl_34815__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
              SAC_ND_FREE((SACp_pinl_109047__emal_107312__pinl_34814__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_109045__emal_107310__pinl_34815__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 13, (SAC_ND_A_DIM( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109045__emal_107310__pinl_34815__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

            }
            if (SAC_ND_GETVAR((SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109033__hce_1045)) 
            { 
              SAC_ND_FREE((SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_COPY__DATA((SACp_pinl_109055__emlr_107583_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
              SAC_ND_DEC_RC_FREE((SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
              /*
               * ND_ASSIGN( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109055__emlr_107583_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109055__emlr_107583_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              SAC_ND_GOTO(_dup_109108__f2l_107647_label)
              do 
              { 
                SAC_ND_INC_RC((SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
                SAC_ND_FREE((SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                /*
                 * ND_ASSIGN( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                /*
                 * ND_ASSIGN( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                SAC_ND_LABEL(_dup_109108__f2l_107647_label)
                SAC_ND_PRF_S__DATA((SACp_pinl_109073__emal_107295__esd_92642, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_DEC_RC_FREE((SACp_pinl_109074__f2l_107641_sflag, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                SAC_ND_PRF_SxS__DATA((SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_pinl_109073__emal_107295__esd_92642, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                SAC_ND_FREE((SACp_pinl_109073__emal_107295__esd_92642, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                if (SAC_ND_GETVAR((SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109072__emal_107294__pinl_34816__flat_330)) 
                { 
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_FREE((SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  /*
                   * ND_ASSIGN( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109083__emal_107306_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109083__emal_107306_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109083__emal_107306_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109083__emal_107306_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                else
                { 
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109077__f2l_107644_sh12, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109076__f2l_107643_sh21, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_FREE((SACp_pinl_109072__emal_107294__pinl_34816__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  /*
                   * ND_ASSIGN( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109078__f2l_107645_sh22, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109085__emal_107308__flat_1614, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109085__emal_107308__flat_1614, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109084__emal_107307_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109084__emal_107307_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 349, 9, (SAC_ND_A_DIM( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109075__f2l_107642_sh11, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                SAC_ND_ALLOC_BEGIN((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
                /*
                 * ND_SET__SHAPE_arr( (SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
                 */
                SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 92, 187, (SAC_ND_A_DIM( (SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()

                SAC_ND_ALLOC_END((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
                SAC_ND_PRF_S__DATA((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_PRF_SxS__DATA((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -5.96046000000000015661078879049272760681787985959090292453765869140625e-08, SAC_ND_READ((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_PRF_SxS__DATA((SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                SAC_ND_FREE((SACp_pinl_109071__emal_107293__pinl_34819__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                if (SAC_ND_GETVAR((SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109070__emal_107291__pinl_34820__flat_332)) 
                { 
                  SAC_ND_FREE((SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 16777216.0, SAC_ND_READ((SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109093__emal_107301__pinl_34823__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 4096.0)
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109092__emal_107300__pinl_34824__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 4096.0)
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  /*
                   * ND_ASSIGN( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 359, 9, (SAC_ND_A_DIM( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109092__emal_107300__pinl_34824__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 359, 9, (SAC_ND_A_DIM( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109092__emal_107300__pinl_34824__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109093__emal_107301__pinl_34823__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 359, 9, (SAC_ND_A_DIM( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109093__emal_107301__pinl_34823__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                else
                { 
                  SAC_ND_FREE((SACp_pinl_109070__emal_107291__pinl_34820__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 16777216.0)
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109096__emal_107304__pinl_34827__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 4096.0, SAC_ND_READ((SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109058_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109095__emal_107303__pinl_34828__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, 4096.0, SAC_ND_READ((SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_DEC_RC_FREE((SACp_pinl_109059_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
                  /*
                   * ND_ASSIGN( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 359, 9, (SAC_ND_A_DIM( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109079__f2l_107646_d2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109095__emal_107303__pinl_34828__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 359, 9, (SAC_ND_A_DIM( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109095__emal_107303__pinl_34828__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                  /*
                   * ND_ASSIGN( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109096__emal_107304__pinl_34827__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 359, 9, (SAC_ND_A_DIM( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109096__emal_107304__pinl_34827__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

                }
                SAC_ND_ALLOC_BEGIN((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
                /*
                 * ND_SET__SHAPE_arr( (SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
                 */
                SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 92, 187, (SAC_ND_A_DIM( (SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()

                SAC_ND_ALLOC_END((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
                SAC_ND_PRF_S__DATA((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_PRF_SxS__DATA((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -5.96046000000000015661078879049272760681787985959090292453765869140625e-08, SAC_ND_READ((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                SAC_ND_PRF_SxS__DATA((SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                SAC_ND_FREE((SACp_pinl_109069__emal_107290__pinl_34829__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                if (SAC_ND_GETVAR((SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109068__emal_107288__pinl_34830__flat_332)) 
                { 
                  SAC_ND_FREE((SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_CREATE__SCALAR__DATA((SACp_pinl_109102__emal_107296__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), true)
                  /*
                   * ND_ASSIGN( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_109102__emal_107296__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 13, (SAC_ND_A_DIM( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109102__emal_107296__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

                }
                else
                { 
                  SAC_ND_FREE((SACp_pinl_109068__emal_107288__pinl_34830__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                  SAC_ND_ALLOC_BEGIN((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
                  /*
                   * ND_SET__SHAPE_arr( (SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
                   */
                  SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 92, 187, (SAC_ND_A_DIM( (SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()

                  SAC_ND_ALLOC_END((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
                  SAC_ND_PRF_S__DATA((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -16777200.0, SAC_ND_READ((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
                  SAC_ND_PRF_SxS__DATA((SACp_pinl_109103__emal_107297__pinl_34832__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
                  SAC_ND_FREE((SACp_pinl_109105__emal_107299__pinl_34831__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
                  /*
                   * ND_ASSIGN( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, (SACp_pinl_109103__emal_107297__pinl_34832__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0, )
                   */
                  SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 13, (SAC_ND_A_DIM( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_NOOP()
                  SAC_ND_ASSIGN__DATA( (SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109103__emal_107297__pinl_34832__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )

                }
              }
              while (SAC_ND_GETVAR((SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109057__hce_1044));
              SAC_ND_DEC_RC_FREE((SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
              SAC_ND_FREE((SACp_pinl_109057__hce_1044, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109052_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109051_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109050_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109049_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109048_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109054__emal_107287__dlirmov_105852_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_109033__hce_1045, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

              /*
               * ND_ASSIGN( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 348, 7, (SAC_ND_A_DIM( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
          }
          else
          { 
            SAC_ND_FREE((SACp_pinl_108898__emal_107272__pinl_34811__flat_331, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            /*
             * ND_ASSIGN( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 347, 5, (SAC_ND_A_DIM( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108878_d2__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 347, 5, (SAC_ND_A_DIM( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108884_sh22__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 347, 5, (SAC_ND_A_DIM( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108883_sh12__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 347, 5, (SAC_ND_A_DIM( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108882_sh21__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 347, 5, (SAC_ND_A_DIM( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108881_sh11__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            /*
             * ND_ASSIGN( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 347, 5, (SAC_ND_A_DIM( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108880_sflag__SSA0_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          }
        }
      }
      SAC_ND_ALLOC_BEGIN((SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5)
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 372, 27, (SAC_ND_A_DIM( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 372, 27, (SAC_ND_A_SHAPE( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 5), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5, (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, SAC_ND_READ( (SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, SAC_ND_READ( (SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, SAC_ND_READ( (SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, SAC_ND_READ( (SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 4, SAC_ND_READ( (SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_108811_sh22__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108810_sh12__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108809_sh21__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108808_sh11__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108807_sflag__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__SACt_String__string, , 1, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__SACt_String__string,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108767_native1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108766_native2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108765_native3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACof__MAIN_CL_ST_CLStdIO__print__d_5, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACof__MAIN_CL_ST_CLStdIO__print__d_5,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108842__emal_107250_native5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      SAC_ND_ALLOC_BEGIN((SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5)
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2684, 60, (SAC_ND_A_DIM( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2684, 60, (SAC_ND_A_SHAPE( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 5), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      SAC_ND_COPY__DATA((SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_COPY__DATA((SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108844__emal_107252__pinl_60630__icc_27196__SSA27_3, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_COPY__DATA((SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108847__emal_107255__pinl_60630__icc_27196__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_COPY__DATA((SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108850__emal_107258__pinl_60630__icc_27196__SSA27_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2684, 60, (SAC_ND_A_DIM( (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_COPY__DATA((SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_DEC_RC_FREE((SACp_pinl_108853__emal_107261__pinl_60630__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      /*
       * ND_FUN_AP( SACdrotmg, , 5, inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc_bx, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACdrotmg,  SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc_bx( SAC_SET_NT_USG( FAG, (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
       */
      SAC_NOOP()

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__SACt_String__string, , 1, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__SACt_String__string,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108837__emal_107245__emec_105959__pinl_60642__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108838__emal_107246__emec_105960__pinl_60642__flat_165__SSA27_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108839__emal_107247__emec_105961__pinl_60642__flat_165__SSA27_4, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACf_ScalarIO_CL_ST__print__d, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACf_ScalarIO_CL_ST__print__d,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108840__emal_107248__emec_105962__pinl_60642__flat_165__SSA27_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_FUN_AP( SACof__MAIN_CL_ST_CLStdIO__print__d_5, , 1, in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACof__MAIN_CL_ST_CLStdIO__print__d_5,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_108841__emal_107249__emec_105963__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      SAC_ND_PRF_SxS__DATA((SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_ADD, 1, SAC_ND_READ((SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      /*
       * ND_ASSIGN( (SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 127, 156, (SAC_ND_A_DIM( (SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      SAC_ND_PRF_SxS__DATA((SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_ADD, -6560, SAC_ND_READ((SACp_pinl_108858__f2l_107637_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      SAC_ND_PRF_SxS__DATA((SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_int, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 0)
      SAC_ND_FREE((SACp_pinl_108835__emal_107243__al_77847, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    }
    while (SAC_ND_GETVAR((SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_108834__emal_107242__pinl_61107__flat_314));
    SAC_ND_FREE((SACp_pinl_108836__emal_107244__pinl_61052__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_107240__dlirmov_105856__pinl_60640__flat_162, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_107239__dlirmov_105857__uprf_76313, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_107237__dlirmov_105866__pinl_60992__icc_26372__SSA27_5, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_dlirmov_105874__flat_10803, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_dlirmov_105885__flat_10812, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_dlirmov_105889__flat_10830, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 1, )
    SAC_ND_FREE((SACp_pinl_108834__emal_107242__pinl_61107__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 7)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 7), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "drotmg")
    /*
     * ND_ASSIGN( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2707, 23, (SAC_ND_A_DIM( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_107230__flat_10850, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_107231__flat_10858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109865_SACp_emal_107230__flat_10850, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_107231__flat_10858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_107231__flat_10858, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, , 2, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, int, SAC_SET_NT_USG( FAG, (SACp_emal_107241__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_flat_10849, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_107241__isaa_89854__rso_12603_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__test_drotmg__d_9__d_9__d_9__d_9, , 4, in, double, (SACl_d1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_d2s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_x1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_y1s, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__permutations__d_9__d_9(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__permutations__d_9__d_9, , 3, out, double, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__permutations__d_9__d_9, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_107380__wlsimp_76415, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 9)
    /*
     * ND_DECL( (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 1;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 3, 9, 9, 2)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 9;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 162;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 3;

    /*
     * ND_DECL( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 2, 81, 2)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 81;
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 162;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
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
     * ND_DECL( (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    SAC_ND_ALLOC_BEGIN((SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 2)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 13, (SAC_ND_A_DIM( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 13, (SAC_ND_A_SHAPE( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 2), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 2, 0.0, 0.0, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, 0.0, )
    SAC_ND_WRITE_COPY( (SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0.0, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 3, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, 9, 9, 2)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_DIM( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (3)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 9), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) == 9), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2) == 2), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 3, double)
    SAC_ND_ALLOC_BEGIN((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_DIM( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_DIM( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2041, 5, (SAC_ND_A_DIM( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
    SAC_ND_ALLOC__DESC((SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_SUB(SAC_ND_A_DIM((SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), 2))
    SAC_PF_BEGIN_WITH(genarray)
    /*
     * WL_SCHEDULE__BEGIN( 2)
     */
    {
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      /*
       * WL_DECLARE_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2)
       */
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      int SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);

      /*
       * WL_DEFINE_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2)
       */
      {
        int SAC_i;
        SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 1 * SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) * SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2);
        SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 1 * SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2);
      }

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 9, 9)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 9;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 9;

      /*
       * WL_INIT_OFFSET( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2)
       */
      SAC_ND_WRITE( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);

      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      /*
       * WL_SET_OFFSET( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 2, (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_WRITE( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) 
        = ( SAC_ND_A_SHAPE( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) * SAC_ND_READ( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
         + SAC_WL_MT_SCHEDULE_START( 1) ) * SAC_WL_SHAPE_FACTOR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);

      SAC_WL_STRIDE_LOOP0_BEGIN(1, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_GRID_UNROLL_BEGIN(1, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_ND_ALLOC_BEGIN((SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107380__wlsimp_76415, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 9)
       */
      SAC_ND_WRITE( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_107375__pinl_61263__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107374__ivesli_105446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_107377__uprf_76461, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_107376__uprf_76455, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107380__wlsimp_76415, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 1), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, int)
      /*
       * ND_VECT2OFFSET_arr( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 9)
       */
      SAC_ND_WRITE( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = SAC_ND_READ( (SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      SAC_ND_FREE((SACp_emal_107370__pinl_61316__idc_25962, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107369__ivesli_105445, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_emal_107372__uprf_76446, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_emal_107371__uprf_76440, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * WL_SUBALLOC( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
       */
      SAC_ND_GETVAR((SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_A_FIELD( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))) = SAC_ND_GETVAR( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_A_FIELD( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))+SAC_ND_READ( (SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0);

      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 2, (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, SAC_ND_READ( (SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, SAC_ND_READ( (SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )

      SAC_ND_FREE((SACp_emal_107373__pinl_61220__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_FREE((SACp_emal_107368__pinl_61273__icc_25941, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_WL_INC_OFFSET((SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
      SAC_WL_GRID_UNROLL_END(1, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(1, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      SAC_WL_GRID_UNROLL_END(0, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_flat_8799, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, 9, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 9, 9)
       */


      /*
       * WL_SCHEDULE__END( 2)
       */
    }

    SAC_PF_END_WITH(genarray)
    SAC_ND_LABEL(_comp_109875_SAC_label)
    SAC_ND_FREE__DESC((SACp_emal_107367__mose_894__SSA0_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
    SAC_ND_FREE((SACp_emal_107381__icc_25989__SSA20_2, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_ND_FREE((SACl_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACl_j, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_emal_107380__wlsimp_76415, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_FREE((SACp_wlidx_105348__icc_26002, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), 1, )
    /*
     * ND_ASSIGN__DESC( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
     */
    SAC_ND_A_DESC( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));

    SAC_ND_SET__RC((SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, 81, 2)
     */
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 312, (SAC_ND_A_DIM( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 312, (SAC_ND_A_SHAPE( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 81), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 62, 312, (SAC_ND_A_SHAPE( (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) == 2), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ASSIGN__DATA((SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107366__icc_26002, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOOP()
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), (SACp_emal_107364__pinl_61427__icc_25920, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__permutations__d_9__d_9, , 3, out, double, (SAC_arg_1, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__test_drotg__d_9__d_9(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__test_drotg__d_9__d_9, , 2, in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__test_drotg__d_9__d_9, void,  SAC_ND_PARAM_in( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double), SAC_ND_PARAM_in( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109475__emal_107429__flat_10749, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 19)
    /*
     * ND_DECL( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 20)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 20;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 20;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109473__emal_107427__flat_10761, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 8)
    /*
     * ND_DECL( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 9)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 9)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109470__emal_107424__pinl_62077__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109470__emal_107424__pinl_62077__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109470__emal_107424__pinl_62077__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109452__emal_107450__pinl_34760__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109452__emal_107450__pinl_34760__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109452__emal_107450__pinl_34760__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109451__emal_107449__hce_1038, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    /*
     * ND_DECL( (SACp_pinl_109448__emal_107448__esd_92660, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109448__emal_107448__esd_92660, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109448__emal_107448__esd_92660, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109444__emal_107460_res__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109443__emal_107459_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1)
    /*
     * ND_DECL( (SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109439__emal_107457_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, -1)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109436__emal_107456_res__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109435__emal_107455_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1)
    /*
     * ND_DECL( (SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109431__emal_107453_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, -1)
    /*
     * ND_DECL( (SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109424__emal_107446__pinl_34734__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109424__emal_107446__pinl_34734__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109424__emal_107446__pinl_34734__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109418__emal_107440__pinl_34754__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109418__emal_107440__pinl_34754__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109418__emal_107440__pinl_34754__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109413__emal_107435_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109412__emal_107434_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109396__emal_107433__esd_92658, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109396__emal_107433__esd_92658, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109396__emal_107433__esd_92658, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_109394__emal_107431_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0.0)
    SAC_ND_DECL_CONST__DATA((SACp_pinl_109393__emal_107430_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1.0)
    /*
     * ND_DECL( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 2;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109376__emal_107415__esd_92657, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109376__emal_107415__esd_92657, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109376__emal_107415__esd_92657, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109364__emal_107396__pinl_61988__flat_1663__SSA28_2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109364__emal_107396__pinl_61988__flat_1663__SSA28_2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109364__emal_107396__pinl_61988__flat_1663__SSA28_2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emlr_107591__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emlr_107591__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emlr_107591__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_emal_107385__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
    SAC_ND_DECL_CONST__DATA((SACp_emal_107384__dlirmov_105894__uprf_77004, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 81)
    SAC_ND_DECL_CONST__DATA((SACp_emal_107383__flat_10786, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 5)
    /*
     * ND_DECL( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, 1, 6)
     */
    SAC_ND_DECL__DATA( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = 6;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 6;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, 2, 81, 2)
     */
    SAC_ND_DECL__DATA( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 81;
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = 2;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 162;
    const int SAC_ND_A_MIRROR_DIM( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 2;

    /*
     * ND_DECL( (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), )
    SAC_NOTHING()


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    /*
     * ND_DECL__MIRROR_PARAM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 9)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 9;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 9;
    const int SAC_ND_A_MIRROR_DIM( (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__permutations__d_9__d_9, , 3, out, double, SAC_SET_NT_USG( FAG, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), in, double, SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__permutations__d_9__d_9,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FPA, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_REFRESH__MIRROR( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2)
     */
    SAC_NOOP()

    SAC_ND_COPY__DATA((SACp_emlr_107591__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107385__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    /*
     * ND_ASSIGN( (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emal_107385__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2634, 5, (SAC_ND_A_DIM( (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107385__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    /*
     * ND_ASSIGN( (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_emlr_107591__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2634, 5, (SAC_ND_A_DIM( (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emlr_107591__isaa_90344__rso_12601_stdout, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    /*
     * ND_ASSIGN( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2634, 5, (SAC_ND_A_DIM( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109477_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    /*
     * ND_ASSIGN( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2634, 5, (SAC_ND_A_DIM( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109476_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

    SAC_ND_GOTO(_dup_109478__f2l_107660_label)
    do 
    { 
      SAC_ND_FREE((SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      /*
       * ND_ASSIGN( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2634, 5, (SAC_ND_A_DIM( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2634, 5, (SAC_ND_A_DIM( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      SAC_ND_LABEL(_dup_109478__f2l_107660_label)
      SAC_ND_INC_RC((SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2)
      SAC_ND_PRF_NON_NEG_VAL_S("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_PRF_VAL_LT_VAL_SxS("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_emal_107384__dlirmov_105894__uprf_77004, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 2), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 0, )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_VECT2OFFSET_arr( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 81, 2)
       */
      SAC_ND_WRITE( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = ( 2 * SAC_ND_READ( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) + SAC_ND_READ( (SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1) );

      SAC_ND_FREE((SACp_pinl_109382__emal_107421__pinl_61536__idc_27217, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_109327__icc_27195, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_pinl_109381__emal_107420__ivesli_105448, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_DIM( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 957, (SAC_ND_A_SHAPE( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) == 2), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 2, (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, SAC_ND_READ( (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, 1, )

      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      /*
       * ND_ASSIGN( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (2)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_MIRROR_SIZE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
      SAC_ND_A_DESC_SHAPE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1) = SAC_ND_A_SHAPE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1);
      SAC_ND_A_DESC_SIZE( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
      SAC_ND_ASSIGN__DATA( (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      /*
       * ND_VECT2OFFSET_arr( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 2, 81, 2)
       */
      SAC_ND_WRITE( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) = ( 2 * SAC_ND_READ( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0) + SAC_ND_READ( (SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1) );

      SAC_ND_FREE((SACp_pinl_109379__emal_107418__pinl_61536__idc_27217__SSA28_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -4, (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SAC_ND_A_DIM( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_READ( (SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), )

      SAC_ND_DEC_RC_FREE((SACp_pinl_109337__icc_27195__SSA28_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_FREE((SACp_pinl_109378__emal_107417__ivesli_105447, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_PRF_GUARD("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 152, 992, (SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), "Primitive function _sel_VxA_ guard failed")
      SAC_ND_FREE((SACp_pinl_109384__emal_107423__uprf_77019, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_FREE((SACp_pinl_109383__emal_107422__uprf_77006, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_PRF_S__DATA((SACp_pinl_109376__emal_107415__esd_92657, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_pinl_109376__emal_107415__esd_92657, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
      SAC_ND_FREE((SACp_pinl_109376__emal_107415__esd_92657, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      if (SAC_ND_GETVAR((SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109375__emal_107414__pinl_61735__flat_330)) 
      { 
        SAC_ND_INC_RC((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
        SAC_ND_FREE((SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
        /*
         * ND_ASSIGN( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109393__emal_107430_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 106, 3, (SAC_ND_A_DIM( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109393__emal_107430_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109394__emal_107431_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 106, 3, (SAC_ND_A_DIM( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109394__emal_107431_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109394__emal_107431_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 106, 3, (SAC_ND_A_DIM( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109394__emal_107431_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_ASSIGN( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 106, 3, (SAC_ND_A_DIM( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

      }
      else
      { 
        SAC_ND_FREE((SACp_pinl_109375__emal_107414__pinl_61735__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
        SAC_ND_PRF_S__DATA((SACp_pinl_109396__emal_107433__esd_92658, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
        SAC_ND_PRF_SxS__DATA((SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_pinl_109396__emal_107433__esd_92658, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
        SAC_ND_FREE((SACp_pinl_109396__emal_107433__esd_92658, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
        if (SAC_ND_GETVAR((SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109395__emal_107432__pinl_34733__flat_330)) 
        { 
          SAC_ND_INC_RC((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_FREE((SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
          /*
           * ND_ASSIGN( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109412__emal_107434_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109412__emal_107434_c, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109413__emal_107435_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109413__emal_107435_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109413__emal_107435_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109413__emal_107435_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        }
        else
        { 
          SAC_ND_FREE((SACp_pinl_109395__emal_107432__pinl_34733__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
          SAC_ND_PRF_S__DATA((SACp_pinl_109424__emal_107446__pinl_34734__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_ALLOC_BEGIN((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          /*
           * ND_SET__SHAPE_arr( (SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 92, 187, (SAC_ND_A_DIM( (SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()

          SAC_ND_ALLOC_END((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          SAC_ND_PRF_S__DATA((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109424__emal_107446__pinl_34734__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_FREE((SACp_pinl_109424__emal_107446__pinl_34734__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
          SAC_ND_FREE((SACp_pinl_109423__emal_107445__pinl_34735__flat_287, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          if (SAC_ND_GETVAR((SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109421__emal_107443__pinl_34736__flat_334)) 
          { 
            SAC_ND_PRF_SxS__DATA((SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            if (SAC_ND_GETVAR((SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109427__emal_107451__pinl_34743__flat_332)) 
            { 
              SAC_ND_FREE((SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109431__emal_107453_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/src/numerical/Math.sac", 577, 3, (SAC_ND_A_DIM( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109431__emal_107453_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_109427__emal_107451__pinl_34743__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
              if (SAC_ND_GETVAR((SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109432__emal_107454__pinl_34739__flat_334)) 
              { 
                SAC_ND_FREE((SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                /*
                 * ND_ASSIGN( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109435__emal_107455_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/src/numerical/Math.sac", 583, 5, (SAC_ND_A_DIM( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109435__emal_107455_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

              }
              else
              { 
                SAC_ND_FREE((SACp_pinl_109432__emal_107454__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                /*
                 * ND_ASSIGN( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109436__emal_107456_res__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/src/numerical/Math.sac", 583, 5, (SAC_ND_A_DIM( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109436__emal_107456_res__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

              }
            }
          }
          else
          { 
            SAC_ND_PRF_SxS__DATA((SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            if (SAC_ND_GETVAR((SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109428__emal_107452__pinl_34749__flat_332)) 
            { 
              SAC_ND_FREE((SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109439__emal_107457_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/src/numerical/Math.sac", 577, 3, (SAC_ND_A_DIM( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109439__emal_107457_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_109428__emal_107452__pinl_34749__flat_332, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
              if (SAC_ND_GETVAR((SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109440__emal_107458__pinl_34739__flat_334)) 
              { 
                SAC_ND_FREE((SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                /*
                 * ND_ASSIGN( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109443__emal_107459_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/src/numerical/Math.sac", 583, 5, (SAC_ND_A_DIM( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109443__emal_107459_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

              }
              else
              { 
                SAC_ND_FREE((SACp_pinl_109440__emal_107458__pinl_34739__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
                /*
                 * ND_ASSIGN( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109444__emal_107460_res__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
                 */
                SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/src/numerical/Math.sac", 583, 5, (SAC_ND_A_DIM( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
                SAC_NOOP()
                SAC_NOOP()
                SAC_NOOP()
                SAC_ND_ASSIGN__DATA( (SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109444__emal_107460_res__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

              }
            }
          }
          SAC_ND_ALLOC_BEGIN((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          /*
           * ND_SET__SHAPE_arr( (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 153, 181, (SAC_ND_A_DIM( (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()

          SAC_ND_ALLOC_END((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          SAC_ND_PRF_S__DATA((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_TOD, SAC_ND_READ((SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
          SAC_ND_FREE((SACp_pinl_109398__hce_1039, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
          SAC_ND_ALLOC_BEGIN((SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          /*
           * ND_SET__SHAPE_arr( (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 81, 1289, (SAC_ND_A_DIM( (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()

          SAC_ND_ALLOC_END((SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109418__emal_107440__pinl_34754__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, SAC_ND_READ((SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109418__emal_107440__pinl_34754__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_FREE((SACp_pinl_109418__emal_107440__pinl_34754__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
          /*
           * ND_FUN_AP( sqrt, SACp_pinl_109400__flat_1516, 1, in_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
           */
          SACp_pinl_109400__flat_1516 = sqrt( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double));

          SAC_ND_ALLOC__DESC((SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
          /*
           * ND_REFRESH__MIRROR( (SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
           */
          SAC_NOOP()

          SAC_ND_SET__RC((SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
          SAC_ND_DEC_RC_FREE((SACp_pinl_109419__emal_107441__pinl_34753__flat_280, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_MUL, SAC_ND_READ((SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_DEC_RC_FREE((SACp_pinl_109400__flat_1516, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          SAC_ND_PRF_SxS__DATA((SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
          if (SAC_ND_GETVAR((SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109421__emal_107443__pinl_34736__flat_334)) 
          { 
            SAC_ND_INC_RC((SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1)
            SAC_ND_FREE((SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            /*
             * ND_ASSIGN( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
             */
            SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 121, 9, (SAC_ND_A_DIM( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
            SAC_NOOP()
            SAC_NOOP()
            SAC_NOOP()
            SAC_ND_ASSIGN__DATA( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          }
          else
          { 
            SAC_ND_FREE((SACp_pinl_109421__emal_107443__pinl_34736__flat_334, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
            SAC_ND_PRF_S__DATA((SACp_pinl_109448__emal_107448__esd_92660, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
            SAC_ND_PRF_SxS__DATA((SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_EQ, SAC_ND_READ((SACp_pinl_109448__emal_107448__esd_92660, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
            SAC_ND_FREE((SACp_pinl_109448__emal_107448__esd_92660, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
            if (SAC_ND_GETVAR((SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109447__emal_107447__pinl_34759__flat_330)) 
            { 
              SAC_ND_FREE((SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              /*
               * ND_ASSIGN( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109451__emal_107449__hce_1038, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 121, 31, (SAC_ND_A_DIM( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109451__emal_107449__hce_1038, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
            else
            { 
              SAC_ND_FREE((SACp_pinl_109447__emal_107447__pinl_34759__flat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
              SAC_ND_PRF_SxS__DATA((SACp_pinl_109452__emal_107450__pinl_34760__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_DIV, 1.0, SAC_ND_READ((SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
              /*
               * ND_ASSIGN( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109452__emal_107450__pinl_34760__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
               */
              SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 121, 31, (SAC_ND_A_DIM( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
              SAC_NOOP()
              SAC_NOOP()
              SAC_NOOP()
              SAC_ND_ASSIGN__DATA( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109452__emal_107450__pinl_34760__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

            }
          }
          /*
           * ND_ASSIGN( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109415__emal_107437__pinl_34757__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109414__emal_107436__pinl_34758__flat_281, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

          /*
           * ND_ASSIGN( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, )
           */
          SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 111, 10, (SAC_ND_A_DIM( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
          SAC_NOOP()
          SAC_NOOP()
          SAC_NOOP()
          SAC_ND_ASSIGN__DATA( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109420__emal_107442__pinl_34752__flat_359, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        }
      }
      SAC_ND_COPY__DATA((SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_COPY__DATA((SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_COPY__DATA((SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2641, 50, (SAC_ND_A_DIM( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_COPY__DATA((SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      /*
       * ND_FUN_AP( SACdrotg, , 4, inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), inout_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
       */
      SAC_ND_FUNAP2( SACdrotg,  SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_inout_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_NOOP()

      SAC_ND_ALLOC_BEGIN((SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 223, 1123, (SAC_ND_A_DIM( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 223, 1123, (SAC_ND_A_SHAPE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 4), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4, (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, SAC_ND_READ( (SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, SAC_ND_READ( (SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, SAC_ND_READ( (SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, SAC_ND_READ( (SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 223, 1123, (SAC_ND_A_DIM( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayBasics.sac", 223, 1123, (SAC_ND_A_SHAPE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) == 4), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 1, double)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 4, (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0, SAC_ND_READ( (SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, SAC_ND_READ( (SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 2, SAC_ND_READ( (SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 3, SAC_ND_READ( (SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 147, 11065, (SAC_ND_A_DIM( (SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_109371__emal_107410__emec_105964__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_109322_r, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 147, 11065, (SAC_ND_A_DIM( (SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_109372__emal_107411__emec_105965__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_109323_z, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_109373__emal_107412__emec_105966__pinl_61504__flat_165, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 147, 11065, (SAC_ND_A_DIM( (SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 0, double)
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), SAC_ND_READ((SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_109374__emal_107413__emec_105967__pinl_61504__flat_165__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_109324_s__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
      SAC_ND_PRF_S__DATA((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_PRF_S__DATA((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_PRF_S__DATA((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_PRF_S__DATA((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), SAC_ND_PRF_ABS, SAC_ND_READ((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -0.001000000000000000020816681711721685132943093776702880859375, SAC_ND_READ((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 194, 13988, (SAC_ND_A_DIM( (SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
      SAC_ND_FREE((SACp_pinl_109368__emal_107407__pinl_61848__flat_889, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -0.001000000000000000020816681711721685132943093776702880859375, SAC_ND_READ((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109364__emal_107396__pinl_61988__flat_1663__SSA28_2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
      SAC_ND_FREE((SACp_pinl_109367__emal_107406__pinl_61848__flat_889__SSA28_2, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -0.001000000000000000020816681711721685132943093776702880859375, SAC_ND_READ((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 194, 13988, (SAC_ND_A_DIM( (SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
      SAC_ND_FREE((SACp_pinl_109325_c__SSA0_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), T_double, SAC_ND_PRF_ADD, -0.001000000000000000020816681711721685132943093776702880859375, SAC_ND_READ((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0))
      SAC_ND_ALLOC_BEGIN((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ArrayArith.sac", 194, 13988, (SAC_ND_A_DIM( (SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 1, 0, bool)
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_double, SAC_ND_PRF_GT, SAC_ND_READ((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0), 0.0)
      SAC_ND_FREE((SACp_pinl_109366__emal_107404__pinl_61848__flat_889__SSA28_6, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_ignore, SAC_ND_PRF_OR, SAC_ND_READ((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0), SAC_ND_READ((SACp_pinl_109364__emal_107396__pinl_61988__flat_1663__SSA28_2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0))
      SAC_ND_FREE((SACp_pinl_109364__emal_107396__pinl_61988__flat_1663__SSA28_2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_ignore, SAC_ND_PRF_OR, SAC_ND_READ((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0), SAC_ND_READ((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0))
      SAC_ND_FREE((SACp_pinl_109365__emal_107398__pinl_61988__flat_1663, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_ignore, SAC_ND_PRF_OR, SAC_ND_READ((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0), SAC_ND_READ((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), 0))
      SAC_ND_FREE((SACp_pinl_109363__emal_107394__pinl_61988__flat_1663__SSA28_4, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
      if (SAC_ND_GETVAR((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6)) 
      { 
        SAC_ND_FREE((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
        SAC_ND_ALLOC_BEGIN((SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
        /*
         * ND_SET__SHAPE_arr( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 20)
         */
        SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 20), "Assignment with incompatible types found");
        SAC_NOOP()

        SAC_ND_ALLOC_END((SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
        SAC_ND_CREATE__STRING__DATA((SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "For a = %f, b = %f\n")
        /*
         * ND_ASSIGN( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2646, 20, (SAC_ND_A_DIM( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ND_A_DESC( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_A_MIRROR_SHAPE( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
        SAC_ND_A_MIRROR_SIZE( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_A_DESC_SHAPE( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
        SAC_ND_A_DESC_SIZE( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_ASSIGN__DATA( (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_pinl_109474__emal_107428__flat_10728, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

        /*
         * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_109475__emal_107429__flat_10749, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
         */
        SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109864_SACp_pinl_109474__emal_107428__flat_10728, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109475__emal_107429__flat_10749, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_DEC_RC_FREE((SACp_pinl_109475__emal_107429__flat_10749, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
        /*
         * ND_FUN_AP( SACprintf_TF, , 3, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), in_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
         */
        SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109460__flat_10727, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

        SAC_ND_DEC_RC_FREE((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
        SAC_ND_DEC_RC_FREE((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
        SAC_ND_ALLOC_BEGIN((SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
        /*
         * ND_SET__SHAPE_arr( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 9)
         */
        SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 9), "Assignment with incompatible types found");
        SAC_NOOP()

        SAC_ND_ALLOC_END((SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
        SAC_ND_CREATE__STRING__DATA((SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "Native: ")
        /*
         * ND_ASSIGN( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2647, 20, (SAC_ND_A_DIM( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ND_A_DESC( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_A_MIRROR_SHAPE( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
        SAC_ND_A_MIRROR_SIZE( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_A_DESC_SHAPE( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
        SAC_ND_A_DESC_SIZE( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_ASSIGN__DATA( (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_pinl_109472__emal_107426__flat_10751, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

        /*
         * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_109473__emal_107427__flat_10761, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
         */
        SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109863_SACp_pinl_109472__emal_107426__flat_10751, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109473__emal_107427__flat_10761, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
         */
        SAC_NOOP()

        /*
         * ND_FUN_AP( SACprintf_TF, , 1, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
         */
        SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109457__flat_10750, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

        /*
         * ND_ASSIGN( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2648, 13, (SAC_ND_A_DIM( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ND_A_DESC( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
        SAC_ND_A_MIRROR_SHAPE( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
        SAC_ND_A_MIRROR_SIZE( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
        SAC_ND_A_DESC_SHAPE( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
        SAC_ND_A_DESC_SIZE( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
        SAC_ND_ASSIGN__DATA( (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_FUN_AP( SACof__MAIN_CL_ST_CLStdIO__show__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
         */
        SAC_ND_FUNAP2( SACof__MAIN_CL_ST_CLStdIO__show__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109862_SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

        SAC_ND_ALLOC_BEGIN((SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
        /*
         * ND_SET__SHAPE_arr( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 9)
         */
        SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 9), "Assignment with incompatible types found");
        SAC_NOOP()

        SAC_ND_ALLOC_END((SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
        SAC_ND_CREATE__STRING__DATA((SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "Library:")
        /*
         * ND_ASSIGN( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2649, 20, (SAC_ND_A_DIM( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ND_A_DESC( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_A_MIRROR_SHAPE( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
        SAC_ND_A_MIRROR_SIZE( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_A_DESC_SHAPE( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
        SAC_ND_A_DESC_SIZE( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
        SAC_ND_ASSIGN__DATA( (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_pinl_109471__emal_107425__flat_10763, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

        /*
         * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_109473__emal_107427__flat_10761, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
         */
        SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109861_SACp_pinl_109471__emal_107425__flat_10763, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109473__emal_107427__flat_10761, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_DEC_RC_FREE((SACp_pinl_109473__emal_107427__flat_10761, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
        /*
         * ND_FUN_AP( SACprintf_TF, , 1, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))))
         */
        SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_109454__flat_10762, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden))

        /*
         * ND_ASSIGN( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2650, 13, (SAC_ND_A_DIM( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) == (1)), "Assignment with incompatible types found");
        SAC_ND_A_DESC( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
        SAC_ND_A_MIRROR_SHAPE( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
        SAC_ND_A_MIRROR_SIZE( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
        SAC_ND_A_DESC_SHAPE( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
        SAC_ND_A_DESC_SIZE( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
        SAC_ND_ASSIGN__DATA( (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

        /*
         * ND_FUN_AP( SACof__MAIN_CL_ST_CLStdIO__show__d_X, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
         */
        SAC_ND_FUNAP2( SACof__MAIN_CL_ST_CLStdIO__show__d_X,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109860_SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

        SAC_ND_PRF_SxS__DATA((SACp_pinl_109470__emal_107424__pinl_62077__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_ADD, 1, SAC_ND_READ((SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
        SAC_ND_DEC_RC_FREE((SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
        /*
         * ND_ASSIGN( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109470__emal_107424__pinl_62077__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2645, 9, (SAC_ND_A_DIM( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109470__emal_107424__pinl_62077__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      }
      else
      { 
        SAC_ND_FREE((SACp_pinl_109369__emal_107408__pinl_61826__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
        SAC_ND_FREE((SACp_pinl_109370__emal_107409__pinl_61782__icc_26589, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
        SAC_ND_DEC_RC_FREE((SACp_pinl_109377__emal_107416__pinl_61492__icc_27196__SSA28_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
        SAC_ND_DEC_RC_FREE((SACp_pinl_109380__emal_107419__pinl_61492__icc_27196, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
        SAC_ND_FREE((SACp_pinl_109362__emal_107392__pinl_61988__flat_1663__SSA28_6, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
        /*
         * ND_ASSIGN( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2645, 9, (SAC_ND_A_DIM( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109385__f2l_107656_mistakes, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      }
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_ADD, 1, SAC_ND_READ((SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      /*
       * ND_ASSIGN( (SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/rhensen/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 127, 156, (SAC_ND_A_DIM( (SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), (SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )

      SAC_ND_PRF_SxS__DATA((SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), T_int, SAC_ND_PRF_ADD, -80, SAC_ND_READ((SACp_pinl_109386__f2l_107657_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0))
      SAC_ND_PRF_SxS__DATA((SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), T_int, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 0), 0)
      SAC_ND_FREE((SACp_pinl_109360__emal_107387__al_77882, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    }
    while (SAC_ND_GETVAR((SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), SACp_pinl_109359__emal_107386__pinl_62134__flat_314));
    SAC_ND_FREE((SACp_pinl_109361__emal_107388__pinl_62079__flat_292, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), )
    SAC_ND_DEC_RC_FREE((SACl_perms, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_107384__dlirmov_105894__uprf_77004, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    SAC_ND_FREE((SACp_pinl_109359__emal_107386__pinl_62134__flat_314, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (BOO, )))))))))), )
    SAC_ND_ALLOC_BEGIN((SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 6)
     */
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_DIM( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("testing_tool.sac", 1, 1, (SAC_ND_A_SHAPE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) == 6), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, 1, unsigned char)
    SAC_ND_CREATE__STRING__DATA((SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), "drotg")
    /*
     * ND_ASSIGN( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), -3, (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 1, )
     */
    SAC_ASSURE_TYPE_LINE ("./src/sac/testing_tool.sac", 2654, 23, (SAC_ND_A_DIM( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ND_A_DESC( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_DESC( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_MIRROR_SHAPE( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_MIRROR_SIZE( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0) = SAC_ND_A_SHAPE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))) = SAC_ND_A_SIZE( (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), (SACp_emal_107382__flat_10779, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, )))))))))), )

    /*
     * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_107383__flat_10786, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109859_SACp_emal_107382__flat_10779, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (UCH, ))))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_107383__flat_10786, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, )))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_107383__flat_10786, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, )))))))))), 1, )
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i, , 2, in, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), in, int, SAC_SET_NT_USG( FAG, (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__print_test_status__SACt_Structures__string__i,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_flat_10778, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (OTH, ))))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_77856_mistakes__SSA0_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (NDI, (INT, ))))))))))), int))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__test_drotg__d_9__d_9, , 2, in, double, (SACl_as, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), in, double, (SACl_bs, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST:StdIO::SACof__MAIN_CL_ST_CLStdIO__print__d_5(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACof__MAIN_CL_ST_CLStdIO__print__d_5, , 1, in, double, (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACof__MAIN_CL_ST_CLStdIO__print__d_5, void,  SAC_ND_PARAM_in( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1)
     */
    SAC_ND_DECL__DATA( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, 5)
     */
    const int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = 5;
    const int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 5;
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_ASSIGN( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -1, (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 1, )
     */
    SAC_ND_A_DESC( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SIZE( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_DIM( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_SHAPE( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_SHAPE( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    SAC_ND_A_DESC_SIZE( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_DIM( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACf_ArrayIO_CL_ST__print__d_P, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ArrayIO_CL_ST__print__d_P,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109858_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACof__MAIN_CL_ST_CLStdIO__print__d_5, , 1, in, double, (SACl_arr, (AKS, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST:StdIO::SACof__MAIN_CL_ST_CLStdIO__print__d_X(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACof__MAIN_CL_ST_CLStdIO__print__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACof__MAIN_CL_ST_CLStdIO__print__d_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1)
     */
    SAC_ND_DECL__DATA( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3)
     */
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_ASSIGN( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, )
     */
    SAC_ND_A_DESC( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SIZE( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_DIM( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_DIM( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACf_ArrayIO_CL_ST__print__d_P, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ArrayIO_CL_ST__print__d_P,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109857_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACof__MAIN_CL_ST_CLStdIO__print__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST:StdIO::SACof__MAIN_CL_ST_CLStdIO__show__d_X(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACof__MAIN_CL_ST_CLStdIO__show__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACof__MAIN_CL_ST_CLStdIO__show__d_X, void,  SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))), double))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, -1)
     */
    SAC_ND_DECL__DATA( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), double, )
    SAC_ND_DECL__DESC( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 0;


    /*
     * ND_DECL__MIRROR_PARAM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3)
     */
    int SAC_ND_A_MIRROR_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = 1;

    SAC_INIT_LOCAL_MEM()
    /*
     * ND_ASSIGN( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -1, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), -3, )
     */
    SAC_ND_A_DESC( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DESC( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_SIZE( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_SIZE( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_MIRROR_DIM( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_A_DESC_DIM( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))) = SAC_ND_A_DIM( (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))));
    SAC_ND_ASSIGN__DATA( (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, )))))))))), )

    /*
     * ND_FUN_AP( SACf_ArrayIO_CL_ST__show__d_P, , 1, in, double, SAC_SET_NT_USG( FAG, (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))))
     */
    SAC_ND_FUNAP2( SACf_ArrayIO_CL_ST__show__d_P,  SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_109856_SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (NDI, (DOU, ))))))))))), double))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACof__MAIN_CL_ST_CLStdIO__show__d_X, , 1, in, double, (SACl_arr, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (NDI, (DOU, )))))))))))
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
  SAC_RTSPEC_SETUP_INITIAL(2, " -check tc -ecc -Xl -L/home/rhensen/bin/openblas/bin/lib/ -Xl -lopenblas -tmt_pth -D ROUTINE=TEST -o bin/sac/mt-pth/testing_tool.out src/sac/testing_tool.sac", "sac2c");
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
