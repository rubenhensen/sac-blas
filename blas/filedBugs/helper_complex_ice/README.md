# ICE when importing Helper module with complex number code

## Error
```
OOOOOOOPS, your program crashed the compiler 8-((
```

## Reproduction
```bash
sac2c -Xl -framework -Xl Accelerate test.sac -o test.out
```

Importing `use Helper: all` alongside complex number operations (using `Structures: all` for complex types) causes an internal compiler error. Removing `use Helper: all` allows the same code to compile and run correctly.

## Workaround
Do not import Helper when using complex types. Use `Structures: all` alone.
