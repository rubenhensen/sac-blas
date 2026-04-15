# `reverse` type inference failure when importing Benchmarking with BlasLevel1

## Error
```
ArrayTransform.sac: Function reverse: Component #0 of inferredreturn type (int[+]) is not within int[.]
```

## Reproduction
```bash
sac2c -Xl -framework -Xl Accelerate test.sac -o test.out
```

Same `reverse` type inference bug as the BlasLevel2 case, but triggered by importing Benchmarking alongside BlasLevel1.

## Workaround
Use `MTClock::gettime()` for timing instead of the Benchmarking module.
