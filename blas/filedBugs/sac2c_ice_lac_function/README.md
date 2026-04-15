# sac2c ICE: "cannot start lut building on a lac function"

## Bug Summary

Internal compiler error when calling a module function that uses a multi-generator 
with-loop containing `pad(n, take([n], m[i]))` — a function call composed with `take` 
inside a with-loop generator. The same code compiles and runs correctly when defined 
inline in the program file.

## Error Message

```
Internal compiler error
Assertion "!FUNDEF_ISLACFUN (fundef)" failed at 
  src/libsac2c/tree/pattern_match_build_lut.c:134 
  -- cannot start lut building on a lac function!
```

## Reproduction

```bash
# Step 1: Compile the module (succeeds)
sac2c MyMod.sac

# Step 2: Compile a program that calls the module function (ICE)
sac2c test.sac -o test.out
# -> Internal compiler error

# Step 3: Same code inline works fine
sac2c test_inline.sac -o test_inline.out
./test_inline.out
# -> Prints correct 3x3 matrix
```

## Minimal Module (MyMod.sac)

```sac
module MyMod;
use Array: all;
export all;

float[k] pad(int k, float[n] arr) {
  return { iv -> 0.0f          | iv < [k-n];
           iv -> arr[iv-(k-n)] | [k-n] <= iv < [k] };
}

float[n,n] convert(float[.,.] m, int n) {
  return { [i] -> pad(n, take([n], m[i])) | [i] < [n] };
}
```

## Key Observations

- **Module compiles fine** — the ICE occurs only when specializing the function 
  during program compilation
- **Inline version works** — identical code defined in the program file compiles 
  and produces correct results
- The trigger is the composition: `pad(n, take([...], expr))` inside a with-loop 
  generator, where `pad` itself uses a multi-generator with-loop
- Removing either `pad` or `take` from the composition avoids the ICE:
  - `{ [i] -> pad(n, m[i]) | ... }` — no ICE
  - `{ [i] -> take([n], m[i]) | ... }` — no ICE
  - `{ [i] -> pad(n, take([n], m[i])) | ... }` — **ICE**

## Impact

This bug prevents using certain function compositions in SAC modules. In the 
SAC-BLAS project, it blocks SAC-native testing of banded matrix routines (ssbmv, 
stbmv, stbsv) that use this pattern for band-to-full matrix conversion. The routines 
work correctly when called via sac4c pre-compiled wrappers.

## Environment

- sac2c version: 2.1.0-PuurGeluk-260-g7be5 (release build)
- Platform: macOS (Darwin, ARM64)
