# ICE with ternary operator on string literals

## Error
```
OOOOOOOPS, your program crashed the compiler 8-((
```

## Reproduction
```bash
sac2c test.sac -o test.out
```

Using a ternary expression `condition ? "PASS" : "FAIL"` with string literals crashes the compiler.

## Workaround
Use if/else with separate printf calls instead of ternary on strings.
