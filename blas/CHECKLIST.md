- [x] cblas_?gbmv
- [x] cblas_?gemv
- [x] cblas_?ger
- [-] cblas_?gerc
- [-] cblas_?geru
- [-] cblas_?hbmv
- [-] cblas_?hemv
- [-] cblas_?her
- [-] cblas_?her2
- [-] cblas_?hpmv
- [-] cblas_?hpr
- [-] cblas_?hpr2
- [-] cblas_?sbmv
- [x] cblas_?spmv
- [x] cblas_?spr
- [x] cblas_?spr2
- [x] cblas_?symv
- [x] cblas_?syr
- [x] cblas_?syr2
- [-] cblas_?tbmv
- [-] cblas_?tbsv
- [-] cblas_?tpmv
- [ ] cblas_?tpsv
- [x] cblas_?trmv
- [x] cblas_?trsv 

IMPLEMENT MISSING FUNCS

- Werkt de padding, lda
- Wordt ongebruikte values daadwerkelijk niet gebruikt. eg sym
- Werkt de stapgrote correct
- Check type guards


bugs:
inline / noinline bug ttrs(constraint violation)
wrong type bug, displays int instead of float
can't read from char array bug.
Doesn't do loop bug when using nested loops
Crashes when reading float in matrix
displays <> dim 0 instead of actual number
