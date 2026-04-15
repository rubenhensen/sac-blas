# Compilation failure with variable-size arrays in for-loops

## Error
```
Compilation failed while Running SAC optimizations
```

## Reproduction
```bash
sac2c test.sac -o test.out
```

A for-loop that creates arrays of different sizes per iteration (determined by a runtime variable `nn`) fails during the optimization pass. The compiler cannot handle loop-carried variables with changing array dimensions.

## Workaround
Extract the loop body into a separate function and call it for each size explicitly:
```sac
void run(int nn) { ... }
int main() { run(10); run(50); run(100); return 0; }
```
