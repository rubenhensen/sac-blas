# `Array: all` and `Complex: all` cannot be used together

## Error (full import)
```
Error: Symbol 'reverse' used more than once
  ... from module 'Complex'
  ... from module 'Array'
Compilation failed while Running module system, 32 error(s).
```

## Error (selective import workaround attempt)
```
Internal compiler error
Assertion "!buf_empty" failed at src/libsac2c/scanparse/lex.c:1241
  -- buffer should never be empty at this point
```

## Reproduction
```bash
# Full import — 32 symbol conflicts
sac2c test.sac -o test.out

# Selective import — lexer ICE
sac2c test_selective.sac -o test_selective.out
```

Importing both `Array: all` and `Complex: all` produces 32 symbol conflicts. Attempting to work around this with selective imports from Array (listing individual symbols) triggers a separate ICE in the lexer.

## Workaround
Use `Structures: all` instead, which provides both array operations and complex types without conflicts.
