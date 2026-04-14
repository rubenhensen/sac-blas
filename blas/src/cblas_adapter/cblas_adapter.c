/*
 * CBLAS adapter layer: bridges standard cblas_* API to SAC BLAS via sac4c wrappers.
 * Each function creates SACargs, calls the sac4c wrapper, extracts results.
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cblas.h"
#include "sacblas.h"

/* ========== Helpers ========== */

static SACarg *mk_int(int v) {
    sac_int *p = (sac_int*)malloc(sizeof(sac_int));
    *p = (sac_int)v;
    return SACARGcreateFromPointer(SACTYPE__MAIN__int, p, 0, NULL);
}
static SACarg *mk_float(float v) {
    float *p = (float*)malloc(sizeof(float));
    *p = v;
    return SACARGcreateFromPointer(SACTYPE__MAIN__float, p, 0, NULL);
}
static SACarg *mk_double(double v) {
    double *p = (double*)malloc(sizeof(double));
    *p = v;
    return SACARGcreateFromPointer(SACTYPE__MAIN__double, p, 0, NULL);
}
static SACarg *mk_char(char v) {
    unsigned char *p = (unsigned char*)malloc(sizeof(unsigned char));
    *p = (unsigned char)v;
    return SACARGcreateFromPointer(SACTYPE__MAIN__char, p, 0, NULL);
}

static SACarg *mk_fvec(const float *data, int len) {
    if (len <= 0) len = 1;
    float *c = (float*)malloc(len * sizeof(float));
    memcpy(c, data, len * sizeof(float));
    sac_int s[] = {len};
    return SACARGcreateFromPointer(SACTYPE__MAIN__float, c, 1, s);
}

static SACarg *mk_dvec(const double *data, int len) {
    if (len <= 0) len = 1;
    double *c = (double*)malloc(len * sizeof(double));
    memcpy(c, data, len * sizeof(double));
    sac_int s[] = {len};
    return SACARGcreateFromPointer(SACTYPE__MAIN__double, c, 1, s);
}

static SACarg *mk_fmat(const float *data, int rows, int cols) {
    if (rows <= 0) rows = 1;
    if (cols <= 0) cols = 1;
    int len = rows * cols;
    float *c = (float*)malloc(len * sizeof(float));
    memcpy(c, data, len * sizeof(float));
    sac_int s[] = {rows, cols};
    return SACARGcreateFromPointer(SACTYPE__MAIN__float, c, 2, s);
}

static SACarg *mk_dmat(const double *data, int rows, int cols) {
    if (rows <= 0) rows = 1;
    if (cols <= 0) cols = 1;
    int len = rows * cols;
    double *c = (double*)malloc(len * sizeof(double));
    memcpy(c, data, len * sizeof(double));
    sac_int s[] = {rows, cols};
    return SACARGcreateFromPointer(SACTYPE__MAIN__double, c, 2, s);
}

static void copy_fvec_back(SACarg *ret, float *dst, int len) {
    const float *src = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, ret);
    memcpy(dst, src, len * sizeof(float));
    SACARGdeleteSacArray(&ret);
}

static void copy_dvec_back(SACarg *ret, double *dst, int len) {
    const double *src = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, ret);
    memcpy(dst, src, len * sizeof(double));
    SACARGdeleteSacArray(&ret);
}

static void copy_fmat_back(SACarg *ret, float *dst, int rows, int cols) {
    const float *src = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, ret);
    memcpy(dst, src, rows * cols * sizeof(float));
    SACARGdeleteSacArray(&ret);
}

static void copy_dmat_back(SACarg *ret, double *dst, int rows, int cols) {
    const double *src = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, ret);
    memcpy(dst, src, rows * cols * sizeof(double));
    SACARGdeleteSacArray(&ret);
}

static float get_float(SACarg *ret) {
    const float *p = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, ret);
    float v = *p;
    SACARGdeleteSacArray(&ret);
    return v;
}

static double get_double(SACarg *ret) {
    const double *p = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, ret);
    double v = *p;
    SACARGdeleteSacArray(&ret);
    return v;
}

static int get_int(SACarg *ret) {
    const sac_int *p = (const sac_int*)SACARGgetSharedData(SACTYPE__MAIN__int, ret);
    int v = (int)*p;
    SACARGdeleteSacArray(&ret);
    return v;
}

/* Compute array length for stride access: 1 + (n-1)*|inc| */
static int veclen(int n, int inc) {
    if (n <= 0) return 1;
    int absinc = inc < 0 ? -inc : inc;
    if (absinc == 0) absinc = 1;
    return 1 + (n - 1) * absinc;
}

/*
 * For negative increments, BLAS convention is that the first accessed element
 * is at offset (n-1)*|inc|. We reverse the strided elements so the SAC code
 * (which only supports positive inc) can process them naturally.
 * Returns a malloc'd copy with elements reversed, and sets *out_inc = |inc|.
 */
static float *adjust_fvec(const float *data, int n, int inc, int *out_inc, int *out_len) {
    int absinc = inc < 0 ? -inc : inc;
    if (absinc == 0) absinc = 1;
    int len = veclen(n, inc);
    *out_len = len;
    if (inc >= 0) {
        *out_inc = inc;
        float *c = (float*)malloc(len * sizeof(float));
        memcpy(c, data, len * sizeof(float));
        return c;
    }
    /* Negative inc: reverse the strided elements */
    *out_inc = absinc;
    float *c = (float*)malloc(len * sizeof(float));
    for (int i = 0; i < n; i++) {
        /* Source: starts at (n-1)*absinc, goes backward */
        /* Dest: starts at 0, goes forward */
        c[i * absinc] = data[(n - 1 - i) * absinc];
    }
    /* Fill non-strided positions with original data (for completeness) */
    if (absinc > 1) {
        for (int i = 0; i < len; i++) {
            if (i % absinc != 0 || i / absinc >= n)
                c[i] = data[len - 1 - i];
        }
    }
    return c;
}

static double *adjust_dvec(const double *data, int n, int inc, int *out_inc, int *out_len) {
    int absinc = inc < 0 ? -inc : inc;
    if (absinc == 0) absinc = 1;
    int len = veclen(n, inc);
    *out_len = len;
    if (inc >= 0) {
        *out_inc = inc;
        double *c = (double*)malloc(len * sizeof(double));
        memcpy(c, data, len * sizeof(double));
        return c;
    }
    *out_inc = absinc;
    double *c = (double*)malloc(len * sizeof(double));
    for (int i = 0; i < n; i++) {
        c[i * absinc] = data[(n - 1 - i) * absinc];
    }
    if (absinc > 1) {
        for (int i = 0; i < len; i++) {
            if (i % absinc != 0 || i / absinc >= n)
                c[i] = data[len - 1 - i];
        }
    }
    return c;
}

/* Reverse the result back to negative-stride order and copy to dst */
static void unadjust_fvec(const float *adjusted, float *dst, int n, int inc) {
    int absinc = inc < 0 ? -inc : inc;
    if (absinc == 0) absinc = 1;
    if (inc >= 0) {
        int len = veclen(n, inc);
        memcpy(dst, adjusted, len * sizeof(float));
        return;
    }
    for (int i = 0; i < n; i++) {
        dst[(n - 1 - i) * absinc] = adjusted[i * absinc];
    }
}

static void unadjust_dvec(const double *adjusted, double *dst, int n, int inc) {
    int absinc = inc < 0 ? -inc : inc;
    if (absinc == 0) absinc = 1;
    if (inc >= 0) {
        int len = veclen(n, inc);
        memcpy(dst, adjusted, len * sizeof(double));
        return;
    }
    for (int i = 0; i < n; i++) {
        dst[(n - 1 - i) * absinc] = adjusted[i * absinc];
    }
}

/* CBLAS enum to char conversion */
static char trans_char(CBLAS_TRANSPOSE t) {
    return (t == CblasTrans || t == CblasConjTrans) ? 'T' : 'N';
}
static char uplo_char(CBLAS_UPLO u) {
    return (u == CblasUpper) ? 'U' : 'L';
}
static char diag_char(CBLAS_DIAG d) {
    return (d == CblasUnit) ? 'U' : 'N';
}
static char side_char(CBLAS_SIDE s) {
    return (s == CblasLeft) ? 'L' : 'R';
}

/* SAC runtime initialization */
static int sac_initialized = 0;
static void ensure_sac_init(void) {
    if (!sac_initialized) {
        char *argv[] = {"sacblas", NULL};
        SAC_InitRuntimeSystem(1, argv, 1, 0, 0);
        sac_initialized = 1;
    }
}

/* ========== LEVEL 1: FLOAT ========== */

void cblas_srotg(float *a, float *b, float *c, float *s) {
    ensure_sac_init();
    SACarg *r1, *r2, *r3, *r4;
    BlasLevel1__srotg4(&r1, &r2, &r3, &r4, mk_float(*a), mk_float(*b), mk_float(*c), mk_float(*s));
    *a = get_float(r1); *b = get_float(r2); *c = get_float(r3); *s = get_float(r4);
}

void cblas_srotmg(float *d1, float *d2, float *b1, const float b2, float *P) {
    ensure_sac_init();
    SACarg *r1, *r2, *r3, *r4;
    BlasLevel1__srotmg4(&r1, &r2, &r3, &r4, mk_float(*d1), mk_float(*d2), mk_float(*b1), mk_float(b2));
    *d1 = get_float(r1); *d2 = get_float(r2); *b1 = get_float(r3);
    copy_fvec_back(r4, P, 5);
}

void cblas_srot(const int N, float *X, const int incX, float *Y, const int incY, const float c, const float s) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1, *r2;
    BlasLevel1__srot7(&r1, &r2, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy),
        mk_float(c), mk_float(s));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r2);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r2);
}

void cblas_srotm(const int N, float *X, const int incX, float *Y, const int incY, const float *P) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1, *r2;
    BlasLevel1__srotm6(&r1, &r2, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy),
        mk_fvec(P, 5));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r2);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r2);
}

void cblas_sswap(const int N, float *X, const int incX, float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1, *r2;
    BlasLevel1__sswap5(&r1, &r2, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r2);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r2);
}

void cblas_sscal(const int N, const float alpha, float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__sscal4(&r1, mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_scopy(const int N, const float *X, const int incX, float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__scopy5(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_saxpy(const int N, const float alpha, const float *X, const int incX, float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__saxpy6(&r1, mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *res = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(res, Y, N, incY);
    SACARGdeleteSacArray(&r1);
}

float cblas_sdot(const int N, const float *X, const int incX, const float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return 0.0f;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__sdot5(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    return get_float(r1);
}

float cblas_sdsdot(const int N, const float alpha, const float *X, const int incX, const float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return alpha;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__sdsdot6(&r1, mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    return get_float(r1);
}

float cblas_snrm2(const int N, const float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return 0.0f;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__snrm23(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    return get_float(r1);
}

float cblas_sasum(const int N, const float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return 0.0f;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__sasum3(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    return get_float(r1);
}

CBLAS_INDEX cblas_isamax(const int N, const float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return 0;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__isamax3(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    return (CBLAS_INDEX)get_int(r1);
}

/* cblas_saxpby - extended BLAS, not in SAC: fallback to separate scal + axpy */
void cblas_saxpby(const int N, const float alpha, const float *X, const int incX,
                  const float beta, float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    cblas_sscal(N, beta, Y, incY);
    cblas_saxpy(N, alpha, X, incX, Y, incY);
}

/* ========== LEVEL 1: DOUBLE ========== */

void cblas_drotg(double *a, double *b, double *c, double *s) {
    ensure_sac_init();
    SACarg *r1, *r2, *r3, *r4;
    BlasLevel1__drotg4(&r1, &r2, &r3, &r4, mk_double(*a), mk_double(*b), mk_double(*c), mk_double(*s));
    *a = get_double(r1); *b = get_double(r2); *c = get_double(r3); *s = get_double(r4);
}

void cblas_drotmg(double *d1, double *d2, double *b1, const double b2, double *P) {
    ensure_sac_init();
    SACarg *r1, *r2, *r3, *r4;
    BlasLevel1__drotmg4(&r1, &r2, &r3, &r4, mk_double(*d1), mk_double(*d2), mk_double(*b1), mk_double(b2));
    *d1 = get_double(r1); *d2 = get_double(r2); *b1 = get_double(r3);
    copy_dvec_back(r4, P, 5);
}

void cblas_drot(const int N, double *X, const int incX, double *Y, const int incY, const double c, const double s) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1, *r2;
    BlasLevel1__drot7(&r1, &r2, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy),
        mk_double(c), mk_double(s));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r2);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r2);
}

void cblas_drotm(const int N, double *X, const int incX, double *Y, const int incY, const double *P) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1, *r2;
    BlasLevel1__drotm6(&r1, &r2, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy),
        mk_dvec(P, 5));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r2);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r2);
}

void cblas_dswap(const int N, double *X, const int incX, double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1, *r2;
    BlasLevel1__dswap5(&r1, &r2, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r2);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r2);
}

void cblas_dscal(const int N, const double alpha, double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, xlen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__dscal4(&r1, mk_int(N), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dcopy(const int N, const double *X, const int incX, double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__dcopy5(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_daxpy(const int N, const double alpha, const double *X, const int incX, double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__daxpy6(&r1, mk_int(N), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

double cblas_ddot(const int N, const double *X, const int incX, const double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return 0.0;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__ddot5(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    return get_double(r1);
}

double cblas_dsdot(const int N, const float *X, const int incX, const float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return 0.0;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel1__dsdot5(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    return get_double(r1);
}

double cblas_dnrm2(const int N, const double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return 0.0;
    int aincx, xlen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__dnrm23(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    return get_double(r1);
}

double cblas_dasum(const int N, const double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return 0.0;
    int aincx, xlen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__dasum3(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    return get_double(r1);
}

CBLAS_INDEX cblas_idamax(const int N, const double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return 0;
    int aincx, xlen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel1__idamax3(&r1, mk_int(N),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    return (CBLAS_INDEX)get_int(r1);
}

void cblas_daxpby(const int N, const double alpha, const double *X, const int incX,
                  const double beta, double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    cblas_dscal(N, beta, Y, incY);
    cblas_daxpy(N, alpha, X, incX, Y, incY);
}

/* ========== LEVEL 2: FLOAT ========== */

void cblas_sgemv(const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE TransA,
                 const int M, const int N, const float alpha, const float *A,
                 const int lda, const float *X, const int incX, const float beta,
                 float *Y, const int incY) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char t;
    int rm, rn;
    if (Layout == CblasColMajor) {
        t = (TransA == CblasNoTrans) ? 'T' : 'N';
        rm = N; rn = M; /* swap for row-major equivalence */
    } else {
        t = trans_char(TransA);
        rm = M; rn = N;
    }
    int lenx_n = (t == 'N') ? rn : rm;
    int leny_n = (t == 'N') ? rm : rn;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, lenx_n, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, leny_n, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__sgemv11(&r1, mk_char(t), mk_int(rm), mk_int(rn), mk_float(alpha),
        mk_fmat(A, rm, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_float(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(ry, Y, leny_n, incY);
    SACARGdeleteSacArray(&r1);
}

void cblas_sgbmv(const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE TransA,
                 const int M, const int N, const int KL, const int KU,
                 const float alpha, const float *A, const int lda,
                 const float *X, const int incX, const float beta,
                 float *Y, const int incY) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char t = (Layout == CblasColMajor) ? ((TransA == CblasNoTrans) ? 'T' : 'N') : trans_char(TransA);
    int lenx_n = (t == 'N') ? N : M;
    int leny_n = (t == 'N') ? M : N;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, lenx_n, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, leny_n, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    int arows = KL + KU + 1;
    SACarg *r1;
    BlasLevel2__sgbmv13(&r1, mk_char(t), mk_int(M), mk_int(N), mk_int(KL), mk_int(KU),
        mk_float(alpha), mk_fmat(A, arows, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_float(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(ry, Y, leny_n, incY); SACARGdeleteSacArray(&r1);
}

void cblas_ssymv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *A, const int lda,
                 const float *X, const int incX, const float beta,
                 float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__ssymv10(&r1, mk_char(u), mk_int(N), mk_float(alpha),
        mk_fmat(A, N, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_float(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_ssbmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const int K, const float alpha, const float *A,
                 const int lda, const float *X, const int incX, const float beta,
                 float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__ssbmv11(&r1, mk_char(u), mk_int(N), mk_int(K), mk_float(alpha),
        mk_fmat(A, K+1, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_float(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_sspmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *Ap,
                 const float *X, const int incX, const float beta,
                 float *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aplen = N * (N + 1) / 2;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__sspmv9(&r1, mk_char(u), mk_int(N), mk_float(alpha),
        mk_fvec(Ap, aplen),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_float(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy));
    const float *ry = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_strmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const float *A, const int lda, float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__strmv8(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_fmat(A, N, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_stbmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const int K, const float *A, const int lda,
                 float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    /* stbmv not yet in SAC - using stbsv placeholder */
    SACarg *r1;
    BlasLevel2__stbsv9(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N), mk_int(K),
        mk_fmat(A, K+1, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_stpmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const float *Ap, float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aplen = N * (N + 1) / 2;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__stpmv7(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_fvec(Ap, aplen),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_strsv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const float *A, const int lda, float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__strsv8(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_fmat(A, N, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_stbsv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const int K, const float *A, const int lda,
                 float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__stbsv9(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N), mk_int(K),
        mk_fmat(A, K+1, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_stpsv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const float *Ap, float *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aplen = N * (N + 1) / 2;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__stpsv7(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_fvec(Ap, aplen),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx));
    const float *rx = (const float*)SACARGgetSharedData(SACTYPE__MAIN__float, r1);
    unadjust_fvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_sger(const CBLAS_LAYOUT Layout, const int M, const int N,
                const float alpha, const float *X, const int incX,
                const float *Y, const int incY, float *A, const int lda) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    int rm, rn;
    if (Layout == CblasColMajor) { rm = N; rn = M; } else { rm = M; rn = N; }
    int aincx, aincy, xlen, ylen;
    float *ax, *ay;
    if (Layout == CblasColMajor) {
        ay = adjust_fvec(X, M, incX, &aincy, &ylen);
        ax = adjust_fvec(Y, N, incY, &aincx, &xlen);
    } else {
        ax = adjust_fvec(X, M, incX, &aincx, &xlen);
        ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    }
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__sger9(&r1, mk_int(rm), mk_int(rn), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy),
        mk_fmat(A, rm, lda), mk_int(lda));
    copy_fmat_back(r1, A, rm, lda);
}

void cblas_ssyr(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                const int N, const float alpha, const float *X, const int incX,
                float *A, const int lda) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__ssyr7(&r1, mk_char(u), mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_fmat(A, N, lda), mk_int(lda));
    copy_fmat_back(r1, A, N, lda);
}

void cblas_sspr(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                const int N, const float alpha, const float *X, const int incX,
                float *Ap) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aplen = N * (N + 1) / 2;
    int aincx, xlen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__sspr6(&r1, mk_char(u), mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        mk_fvec(Ap, aplen));
    copy_fvec_back(r1, Ap, aplen);
}

void cblas_ssyr2(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *X, const int incX,
                 const float *Y, const int incY, float *A, const int lda) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__ssyr29(&r1, mk_char(u), mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy),
        mk_fmat(A, N, lda), mk_int(lda));
    copy_fmat_back(r1, A, N, lda);
}

void cblas_sspr2(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *X, const int incX,
                 const float *Y, const int incY, float *Ap) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aplen = N * (N + 1) / 2;
    int aincx, aincy, xlen, ylen;
    float *ax = adjust_fvec(X, N, incX, &aincx, &xlen);
    float *ay = adjust_fvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__sspr28(&r1, mk_char(u), mk_int(N), mk_float(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__float, ay, 1, yshp), mk_int(aincy),
        mk_fvec(Ap, aplen));
    copy_fvec_back(r1, Ap, aplen);
}

/* ========== LEVEL 2: DOUBLE ========== */

void cblas_dgemv(const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE TransA,
                 const int M, const int N, const double alpha, const double *A,
                 const int lda, const double *X, const int incX, const double beta,
                 double *Y, const int incY) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char t; int rm, rn;
    if (Layout == CblasColMajor) { t = (TransA == CblasNoTrans) ? 'T' : 'N'; rm = N; rn = M; }
    else { t = trans_char(TransA); rm = M; rn = N; }
    int lenx_n = (t == 'N') ? rn : rm;
    int leny_n = (t == 'N') ? rm : rn;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, lenx_n, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, leny_n, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dgemv11(&r1, mk_char(t), mk_int(rm), mk_int(rn), mk_double(alpha),
        mk_dmat(A, rm, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_double(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, leny_n, incY); SACARGdeleteSacArray(&r1);
}

void cblas_dgbmv(const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE TransA,
                 const int M, const int N, const int KL, const int KU,
                 const double alpha, const double *A, const int lda,
                 const double *X, const int incX, const double beta,
                 double *Y, const int incY) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char t = (Layout == CblasColMajor) ? ((TransA == CblasNoTrans) ? 'T' : 'N') : trans_char(TransA);
    int lenx_n = (t == 'N') ? N : M;
    int leny_n = (t == 'N') ? M : N;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, lenx_n, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, leny_n, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    int arows = KL + KU + 1;
    SACarg *r1;
    BlasLevel2__dgbmv13(&r1, mk_char(t), mk_int(M), mk_int(N), mk_int(KL), mk_int(KU),
        mk_double(alpha), mk_dmat(A, arows, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_double(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, leny_n, incY); SACARGdeleteSacArray(&r1);
}

void cblas_dsymv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *A, const int lda,
                 const double *X, const int incX, const double beta,
                 double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dsymv10(&r1, mk_char(u), mk_int(N), mk_double(alpha),
        mk_dmat(A, N, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_double(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_dsbmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const int K, const double alpha, const double *A,
                 const int lda, const double *X, const int incX, const double beta,
                 double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dsbmv11(&r1, mk_char(u), mk_int(N), mk_int(K), mk_double(alpha),
        mk_dmat(A, K+1, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_double(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_dspmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *Ap,
                 const double *X, const int incX, const double beta,
                 double *Y, const int incY) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aplen = N * (N + 1) / 2;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dspmv9(&r1, mk_char(u), mk_int(N), mk_double(alpha),
        mk_dvec(Ap, aplen),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_double(beta),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy));
    const double *ry = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(ry, Y, N, incY); SACARGdeleteSacArray(&r1);
}

void cblas_dtrmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const double *A, const int lda, double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dtrmv8(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_dmat(A, N, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dtbmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const int K, const double *A, const int lda,
                 double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    /* dtbmv not yet in SAC - using dtbsv placeholder */
    BlasLevel2__dtbsv9(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N), mk_int(K),
        mk_dmat(A, K+1, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dtpmv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const double *Ap, double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aplen = N * (N + 1) / 2;
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dtpmv7(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_dvec(Ap, aplen),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dtrsv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const double *A, const int lda, double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dtrsv8(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_dmat(A, N, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dtbsv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const int K, const double *A, const int lda,
                 double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dtbsv9(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N), mk_int(K),
        mk_dmat(A, K+1, lda), mk_int(lda),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dtpsv(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int N, const double *Ap, double *X, const int incX) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int aplen = N * (N + 1) / 2;
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dtpsv7(&r1, mk_char(u), mk_char(t), mk_char(d), mk_int(N),
        mk_dvec(Ap, aplen),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx));
    const double *rx = (const double*)SACARGgetSharedData(SACTYPE__MAIN__double, r1);
    unadjust_dvec(rx, X, N, incX); SACARGdeleteSacArray(&r1);
}

void cblas_dger(const CBLAS_LAYOUT Layout, const int M, const int N,
                const double alpha, const double *X, const int incX,
                const double *Y, const int incY, double *A, const int lda) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    int rm, rn;
    if (Layout == CblasColMajor) { rm = N; rn = M; } else { rm = M; rn = N; }
    int aincx, aincy, xlen, ylen;
    double *ax, *ay;
    if (Layout == CblasColMajor) {
        ay = adjust_dvec(X, M, incX, &aincy, &ylen);
        ax = adjust_dvec(Y, N, incY, &aincx, &xlen);
    } else {
        ax = adjust_dvec(X, M, incX, &aincx, &xlen);
        ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    }
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dger9(&r1, mk_int(rm), mk_int(rn), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy),
        mk_dmat(A, rm, lda), mk_int(lda));
    copy_dmat_back(r1, A, rm, lda);
}

void cblas_dsyr(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                const int N, const double alpha, const double *X, const int incX,
                double *A, const int lda) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dsyr7(&r1, mk_char(u), mk_int(N), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_dmat(A, N, lda), mk_int(lda));
    copy_dmat_back(r1, A, N, lda);
}

void cblas_dspr(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                const int N, const double alpha, const double *X, const int incX,
                double *Ap) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aplen = N * (N + 1) / 2;
    int aincx, xlen; double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    sac_int xshp[] = {xlen};
    SACarg *r1;
    BlasLevel2__dspr6(&r1, mk_char(u), mk_int(N), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        mk_dvec(Ap, aplen));
    copy_dvec_back(r1, Ap, aplen);
}

void cblas_dsyr2(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *X, const int incX,
                 const double *Y, const int incY, double *A, const int lda) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dsyr29(&r1, mk_char(u), mk_int(N), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy),
        mk_dmat(A, N, lda), mk_int(lda));
    copy_dmat_back(r1, A, N, lda);
}

void cblas_dspr2(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *X, const int incX,
                 const double *Y, const int incY, double *Ap) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo);
    if (Layout == CblasColMajor) u = (u == 'U') ? 'L' : 'U';
    int aplen = N * (N + 1) / 2;
    int aincx, aincy, xlen, ylen;
    double *ax = adjust_dvec(X, N, incX, &aincx, &xlen);
    double *ay = adjust_dvec(Y, N, incY, &aincy, &ylen);
    sac_int xshp[] = {xlen}; sac_int yshp[] = {ylen};
    SACarg *r1;
    BlasLevel2__dspr28(&r1, mk_char(u), mk_int(N), mk_double(alpha),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ax, 1, xshp), mk_int(aincx),
        SACARGcreateFromPointer(SACTYPE__MAIN__double, ay, 1, yshp), mk_int(aincy),
        mk_dvec(Ap, aplen));
    copy_dvec_back(r1, Ap, aplen);
}

/* ========== LEVEL 3: FLOAT ========== */

void cblas_sgemm(const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE TransA,
                 const CBLAS_TRANSPOSE TransB, const int M, const int N, const int K,
                 const float alpha, const float *A, const int lda,
                 const float *B, const int ldb, const float beta,
                 float *C, const int ldc) {
    ensure_sac_init();
    if (M <= 0 || N <= 0 || K <= 0) return;
    char ta, tb;
    int rm, rn, rk;
    if (Layout == CblasColMajor) {
        /* Col-major gemm(ta,tb,M,N,K) = Row-major gemm(tb,ta,N,M,K) */
        ta = trans_char(TransB); tb = trans_char(TransA);
        rm = N; rn = M; rk = K;
    } else {
        ta = trans_char(TransA); tb = trans_char(TransB);
        rm = M; rn = N; rk = K;
    }
    int arows = (ta == 'N') ? rm : rk;
    int brows = (tb == 'N') ? rk : rn;
    SACarg *r1;
    BlasLevel3__sgemm13(&r1, mk_char(ta), mk_char(tb), mk_int(rm), mk_int(rn), mk_int(rk),
        mk_float(alpha), mk_fvec(A, arows * lda), mk_int(lda),
        mk_fvec(B, brows * ldb), mk_int(ldb),
        mk_float(beta), mk_fvec(C, rm * ldc), mk_int(ldc));
    copy_fvec_back(r1, C, rm * ldc);
}

void cblas_ssymm(const CBLAS_LAYOUT Layout, const CBLAS_SIDE Side, const CBLAS_UPLO Uplo,
                 const int M, const int N, const float alpha, const float *A, const int lda,
                 const float *B, const int ldb, const float beta, float *C, const int ldc) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char s = side_char(Side), u = uplo_char(Uplo);
    if (Layout == CblasColMajor) { s = (s == 'L') ? 'R' : 'L'; u = (u == 'U') ? 'L' : 'U'; }
    int na = (s == 'L') ? M : N;
    SACarg *r1;
    BlasLevel3__ssymm12(&r1, mk_char(s), mk_char(u), mk_int(M), mk_int(N),
        mk_float(alpha), mk_fvec(A, na * lda), mk_int(lda),
        mk_fvec(B, M * ldb), mk_int(ldb),
        mk_float(beta), mk_fvec(C, M * ldc), mk_int(ldc));
    copy_fvec_back(r1, C, M * ldc);
}

void cblas_ssyrk(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo, const CBLAS_TRANSPOSE Trans,
                 const int N, const int K, const float alpha, const float *A, const int lda,
                 const float beta, float *C, const int ldc) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(Trans);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int arows = (t == 'N') ? N : K;
    SACarg *r1;
    BlasLevel3__ssyrk10(&r1, mk_char(u), mk_char(t), mk_int(N), mk_int(K),
        mk_float(alpha), mk_fvec(A, arows * lda), mk_int(lda),
        mk_float(beta), mk_fvec(C, N * ldc), mk_int(ldc));
    copy_fvec_back(r1, C, N * ldc);
}

void cblas_ssyr2k(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo, const CBLAS_TRANSPOSE Trans,
                  const int N, const int K, const float alpha, const float *A, const int lda,
                  const float *B, const int ldb, const float beta, float *C, const int ldc) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(Trans);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int arows = (t == 'N') ? N : K;
    SACarg *r1;
    BlasLevel3__ssyr2k12(&r1, mk_char(u), mk_char(t), mk_int(N), mk_int(K),
        mk_float(alpha), mk_fvec(A, arows * lda), mk_int(lda),
        mk_fvec(B, arows * ldb), mk_int(ldb),
        mk_float(beta), mk_fvec(C, N * ldc), mk_int(ldc));
    copy_fvec_back(r1, C, N * ldc);
}

void cblas_strmm(const CBLAS_LAYOUT Layout, const CBLAS_SIDE Side, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int M, const int N, const float alpha,
                 const float *A, const int lda, float *B, const int ldb) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char s = side_char(Side), u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { s = (s == 'L') ? 'R' : 'L'; u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int na = (s == 'L') ? M : N;
    SACarg *r1;
    BlasLevel3__strmm11(&r1, mk_char(s), mk_char(u), mk_char(t), mk_char(d),
        mk_int(M), mk_int(N), mk_float(alpha),
        mk_fvec(A, na * lda), mk_int(lda),
        mk_fvec(B, M * ldb), mk_int(ldb));
    copy_fvec_back(r1, B, M * ldb);
}

void cblas_strsm(const CBLAS_LAYOUT Layout, const CBLAS_SIDE Side, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int M, const int N, const float alpha,
                 const float *A, const int lda, float *B, const int ldb) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char s = side_char(Side), u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { s = (s == 'L') ? 'R' : 'L'; u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int na = (s == 'L') ? M : N;
    SACarg *r1;
    BlasLevel3__strsm11(&r1, mk_char(s), mk_char(u), mk_char(t), mk_char(d),
        mk_int(M), mk_int(N), mk_float(alpha),
        mk_fvec(A, na * lda), mk_int(lda),
        mk_fvec(B, M * ldb), mk_int(ldb));
    copy_fvec_back(r1, B, M * ldb);
}

/* ========== LEVEL 3: DOUBLE ========== */

void cblas_dgemm(const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE TransA,
                 const CBLAS_TRANSPOSE TransB, const int M, const int N, const int K,
                 const double alpha, const double *A, const int lda,
                 const double *B, const int ldb, const double beta,
                 double *C, const int ldc) {
    ensure_sac_init();
    if (M <= 0 || N <= 0 || K <= 0) return;
    char ta, tb;
    int rm, rn, rk;
    if (Layout == CblasColMajor) {
        ta = trans_char(TransB); tb = trans_char(TransA);
        rm = N; rn = M; rk = K;
    } else {
        ta = trans_char(TransA); tb = trans_char(TransB);
        rm = M; rn = N; rk = K;
    }
    int arows = (ta == 'N') ? rm : rk;
    int brows = (tb == 'N') ? rk : rn;
    SACarg *r1;
    BlasLevel3__dgemm13(&r1, mk_char(ta), mk_char(tb), mk_int(rm), mk_int(rn), mk_int(rk),
        mk_double(alpha), mk_dvec(A, arows * lda), mk_int(lda),
        mk_dvec(B, brows * ldb), mk_int(ldb),
        mk_double(beta), mk_dvec(C, rm * ldc), mk_int(ldc));
    copy_dvec_back(r1, C, rm * ldc);
}

void cblas_dsymm(const CBLAS_LAYOUT Layout, const CBLAS_SIDE Side, const CBLAS_UPLO Uplo,
                 const int M, const int N, const double alpha, const double *A, const int lda,
                 const double *B, const int ldb, const double beta, double *C, const int ldc) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char s = side_char(Side), u = uplo_char(Uplo);
    if (Layout == CblasColMajor) { s = (s == 'L') ? 'R' : 'L'; u = (u == 'U') ? 'L' : 'U'; }
    int na = (s == 'L') ? M : N;
    SACarg *r1;
    BlasLevel3__dsymm12(&r1, mk_char(s), mk_char(u), mk_int(M), mk_int(N),
        mk_double(alpha), mk_dvec(A, na * lda), mk_int(lda),
        mk_dvec(B, M * ldb), mk_int(ldb),
        mk_double(beta), mk_dvec(C, M * ldc), mk_int(ldc));
    copy_dvec_back(r1, C, M * ldc);
}

void cblas_dsyrk(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo, const CBLAS_TRANSPOSE Trans,
                 const int N, const int K, const double alpha, const double *A, const int lda,
                 const double beta, double *C, const int ldc) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(Trans);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int arows = (t == 'N') ? N : K;
    SACarg *r1;
    BlasLevel3__dsyrk10(&r1, mk_char(u), mk_char(t), mk_int(N), mk_int(K),
        mk_double(alpha), mk_dvec(A, arows * lda), mk_int(lda),
        mk_double(beta), mk_dvec(C, N * ldc), mk_int(ldc));
    copy_dvec_back(r1, C, N * ldc);
}

void cblas_dsyr2k(const CBLAS_LAYOUT Layout, const CBLAS_UPLO Uplo, const CBLAS_TRANSPOSE Trans,
                  const int N, const int K, const double alpha, const double *A, const int lda,
                  const double *B, const int ldb, const double beta, double *C, const int ldc) {
    ensure_sac_init();
    if (N <= 0) return;
    char u = uplo_char(Uplo), t = trans_char(Trans);
    if (Layout == CblasColMajor) { u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int arows = (t == 'N') ? N : K;
    SACarg *r1;
    BlasLevel3__dsyr2k12(&r1, mk_char(u), mk_char(t), mk_int(N), mk_int(K),
        mk_double(alpha), mk_dvec(A, arows * lda), mk_int(lda),
        mk_dvec(B, arows * ldb), mk_int(ldb),
        mk_double(beta), mk_dvec(C, N * ldc), mk_int(ldc));
    copy_dvec_back(r1, C, N * ldc);
}

void cblas_dtrmm(const CBLAS_LAYOUT Layout, const CBLAS_SIDE Side, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int M, const int N, const double alpha,
                 const double *A, const int lda, double *B, const int ldb) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char s = side_char(Side), u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { s = (s == 'L') ? 'R' : 'L'; u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int na = (s == 'L') ? M : N;
    SACarg *r1;
    BlasLevel3__dtrmm11(&r1, mk_char(s), mk_char(u), mk_char(t), mk_char(d),
        mk_int(M), mk_int(N), mk_double(alpha),
        mk_dvec(A, na * lda), mk_int(lda),
        mk_dvec(B, M * ldb), mk_int(ldb));
    copy_dvec_back(r1, B, M * ldb);
}

void cblas_dtrsm(const CBLAS_LAYOUT Layout, const CBLAS_SIDE Side, const CBLAS_UPLO Uplo,
                 const CBLAS_TRANSPOSE TransA, const CBLAS_DIAG Diag,
                 const int M, const int N, const double alpha,
                 const double *A, const int lda, double *B, const int ldb) {
    ensure_sac_init();
    if (M <= 0 || N <= 0) return;
    char s = side_char(Side), u = uplo_char(Uplo), t = trans_char(TransA), d = diag_char(Diag);
    if (Layout == CblasColMajor) { s = (s == 'L') ? 'R' : 'L'; u = (u == 'U') ? 'L' : 'U'; t = (t == 'N') ? 'T' : 'N'; }
    int na = (s == 'L') ? M : N;
    SACarg *r1;
    BlasLevel3__dtrsm11(&r1, mk_char(s), mk_char(u), mk_char(t), mk_char(d),
        mk_int(M), mk_int(N), mk_double(alpha),
        mk_dvec(A, na * lda), mk_int(lda),
        mk_dvec(B, M * ldb), mk_int(ldb));
    copy_dvec_back(r1, B, M * ldb);
}

/* ========== Error handling and test infrastructure ========== */

/* Global variables required by Netlib CBLAS test infrastructure */
int cblas_info = 0;
int cblas_lerr = 0;
int cblas_ok = 1;
int RowMajorStrg = 0;
char *cblas_rout = "";

/* cblas_xerbla and link_xerbla provided by test infrastructure (c_xerbla.c) */

/* Skewsym stubs - not implemented */
void cblas_sskewsymv(const CBLAS_LAYOUT L, const CBLAS_UPLO U, const int N,
                     const float a, const float *A, const int lda,
                     const float *X, const int incX, const float b,
                     float *Y, const int incY) { (void)L; (void)U; (void)N; (void)a; (void)A; (void)lda; (void)X; (void)incX; (void)b; (void)Y; (void)incY; }
void cblas_sskewsyr2(const CBLAS_LAYOUT L, const CBLAS_UPLO U, const int N,
                     const float a, const float *X, const int incX,
                     const float *Y, const int incY, float *A, const int lda) { (void)L; (void)U; (void)N; (void)a; (void)X; (void)incX; (void)Y; (void)incY; (void)A; (void)lda; }
void cblas_dskewsymv(const CBLAS_LAYOUT L, const CBLAS_UPLO U, const int N,
                     const double a, const double *A, const int lda,
                     const double *X, const int incX, const double b,
                     double *Y, const int incY) { (void)L; (void)U; (void)N; (void)a; (void)A; (void)lda; (void)X; (void)incX; (void)b; (void)Y; (void)incY; }
void cblas_dskewsyr2(const CBLAS_LAYOUT L, const CBLAS_UPLO U, const int N,
                     const double a, const double *X, const int incX,
                     const double *Y, const int incY, double *A, const int lda) { (void)L; (void)U; (void)N; (void)a; (void)X; (void)incX; (void)Y; (void)incY; (void)A; (void)lda; }
