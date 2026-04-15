#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <cblas.h>

void gmres(int n, const double *A, const double *b, double *x,
           int m, double tol, int maxit, int *out_iters, double *out_res) {
    double *r = malloc(n * sizeof(double));
    double *w = malloc(n * sizeof(double));
    double *V = calloc((m+1) * n, sizeof(double));
    double *H = calloc((m+1) * m, sizeof(double));
    double *cs = calloc(m, sizeof(double));
    double *sn = calloc(m, sizeof(double));
    double *e1 = calloc(m+1, sizeof(double));
    double *y = malloc(m * sizeof(double));
    double b_norm = cblas_dnrm2(n, b, 1);
    if (b_norm < 1e-15) b_norm = 1.0;
    int total_iters = 0; double final_res = 1.0;
    for (int outer = 0; outer < maxit; outer++) {
        memcpy(r, b, n * sizeof(double));
        cblas_dgemv(CblasRowMajor, CblasNoTrans, n, n, -1.0, A, n, x, 1, 1.0, r, 1);
        double beta = cblas_dnrm2(n, r, 1);
        if (beta / b_norm < tol) { final_res = beta/b_norm; break; }
        memset(V, 0, (m+1)*n*sizeof(double));
        memset(H, 0, (m+1)*m*sizeof(double));
        memset(e1, 0, (m+1)*sizeof(double));
        e1[0] = beta;
        for (int i = 0; i < n; i++) V[i] = r[i] / beta;
        int k = 0, converged = 0;
        for (int i = 0; i < m && !converged; i++) {
            cblas_dgemv(CblasRowMajor, CblasNoTrans, n, n, 1.0, A, n, V+i*n, 1, 0.0, w, 1);
            for (int j = 0; j <= i; j++) {
                H[j*m+i] = cblas_ddot(n, w, 1, V+j*n, 1);
                cblas_daxpy(n, -H[j*m+i], V+j*n, 1, w, 1);
            }
            H[(i+1)*m+i] = cblas_dnrm2(n, w, 1);
            if (fabs(H[(i+1)*m+i]) > 1e-15)
                for (int j = 0; j < n; j++) V[(i+1)*n+j] = w[j] / H[(i+1)*m+i];
            for (int j = 0; j < i; j++) {
                double tmp = cs[j]*H[j*m+i] + sn[j]*H[(j+1)*m+i];
                H[(j+1)*m+i] = -sn[j]*H[j*m+i] + cs[j]*H[(j+1)*m+i];
                H[j*m+i] = tmp;
            }
            double rr = sqrt(H[i*m+i]*H[i*m+i] + H[(i+1)*m+i]*H[(i+1)*m+i]);
            if (rr > 1e-15) { cs[i] = H[i*m+i]/rr; sn[i] = H[(i+1)*m+i]/rr; }
            else { cs[i] = 1.0; sn[i] = 0.0; }
            H[i*m+i] = cs[i]*H[i*m+i] + sn[i]*H[(i+1)*m+i]; H[(i+1)*m+i] = 0.0;
            double tmp2 = cs[i]*e1[i] + sn[i]*e1[i+1];
            e1[i+1] = -sn[i]*e1[i] + cs[i]*e1[i+1]; e1[i] = tmp2;
            k = i+1; total_iters++;
            final_res = fabs(e1[i+1]) / b_norm;
            if (final_res < tol) converged = 1;
        }
        for (int i = k-1; i >= 0; i--) {
            double s = e1[i];
            for (int j = i+1; j < k; j++) s -= H[i*m+j]*y[j];
            y[i] = s / H[i*m+i];
        }
        for (int i = 0; i < k; i++) cblas_daxpy(n, y[i], V+i*n, 1, x, 1);
        if (converged) break;
    }
    *out_iters = total_iters; *out_res = final_res;
    free(r); free(w); free(V); free(H); free(cs); free(sn); free(e1); free(y);
}

void run_bench(int nn) {
    double *A = calloc(nn*nn, sizeof(double));
    double *b = malloc(nn*sizeof(double));
    double *x = calloc(nn, sizeof(double));
    double *ones = malloc(nn*sizeof(double));
    double h = 1.0 / (double)(nn + 1);
    for (int i = 0; i < nn; i++) {
        ones[i] = 1.0; A[i*nn+i] = 2.0 + h;
        if (i+1 < nn) A[i*nn+(i+1)] = -1.0 + 0.5*h;
        if (i > 0) A[i*nn+(i-1)] = -1.0 - 0.5*h;
    }
    cblas_dgemv(CblasRowMajor, CblasNoTrans, nn, nn, 1.0, A, nn, ones, 1, 0.0, b, 1);
    int m = nn < 30 ? nn : 30, iters; double res;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    gmres(nn, A, b, x, m, 1e-10, 1000, &iters, &res);
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double dt = (t1.tv_sec-t0.tv_sec) + (t1.tv_nsec-t0.tv_nsec)/1e9;
    double err = 0;
    for (int i = 0; i < nn; i++) err += (x[i]-1.0)*(x[i]-1.0);
    err = sqrt(err/nn);
    printf("N=%5d: iters=%4d  residual=%.2e  error=%.2e  time=%.6f s\n", nn, iters, res, err, dt);
    free(A); free(b); free(x); free(ones);
}

int main() {
    printf("=== C + OpenBLAS ===\n\n");
    run_bench(100); run_bench(500); run_bench(1000);
    run_bench(2000); run_bench(5000); run_bench(10000);
    return 0;
}
