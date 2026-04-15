# `reverse` type inference failure when importing BlasLevel2

## Error
```
ArrayTransform.sac: Function reverse: Component #0 of inferredreturn type (int[+]) is not within int[.]
```

## Reproduction
```bash
sac2c test.sac -o test.out
```

Importing BlasLevel2 (even selectively with `{dgemv}`) triggers a type inference failure in the standard library's `reverse` function during optimization. The user code does not call `reverse` — the error comes from functions inside BlasLevel2 that use `reverse` internally.

## Workaround
Call `OpenBlas::dgemv` directly instead of importing BlasLevel2.
