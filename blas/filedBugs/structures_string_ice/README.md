# ICE when importing `Structures: {string}` with BlasLevel2

## Error
```
Internal compiler error
Assertion "!FUNDEF_ISLACFUN (fundef)" failed at
  src/libsac2c/tree/pattern_match_build_lut.c:134
```

## Reproduction
```bash
sac2c -Xl -framework -Xl Accelerate test.sac -o test.out
```

Importing `use Structures: {string}` alongside `use BlasLevel2: all` triggers an ICE. The code does not use any complex BLAS operations — just the `string` type for function parameters.

## Workaround
Use `char[.]` instead of `string`, or avoid importing Structures alongside BlasLevel2.
