#include <Accelerate/Accelerate.h>
void SACztrsv(const char uplo, const char trans, const char diag, const int n, const void *a, const int lda, void *x, const int incx) {
  enum CBLAS_UPLO u = (uplo=='U'||uplo=='u') ? CblasUpper : CblasLower;
  enum CBLAS_TRANSPOSE t = (trans=='N'||trans=='n') ? CblasNoTrans : (trans=='T'||trans=='t') ? CblasTrans : CblasConjTrans;
  enum CBLAS_DIAG d = (diag=='U'||diag=='u') ? CblasUnit : CblasNonUnit;
  cblas_ztrsv(CblasRowMajor, u, t, d, n, a, lda, x, incx);
}
