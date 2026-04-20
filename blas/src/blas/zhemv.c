#include <Accelerate/Accelerate.h>
void SACzhemv(const char uplo, const int n, const void *alpha, const void *a, const int lda, const void *x, const int incx, const void *beta, void *y, const int incy) {
  enum CBLAS_UPLO u = (uplo=='U'||uplo=='u') ? CblasUpper : CblasLower;
  cblas_zhemv(CblasRowMajor, u, n, alpha, a, lda, x, incx, beta, y, incy);
}
