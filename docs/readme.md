# nolibc

[![Travis](https://travis-ci.org/aprelev/nolibc.svg?branch=master)](https://travis-ci.org/aprelev/nolibc)

## Mission

_nolibc_ is a tweakable header-only implementation of a standard C library subset,
which helps to build lean binaries without linking against the runtime.

## Coverage

_nolibc_ provides necessary built-in functions, macros and type aliases
to facilitate most needs a lean binary might have.

| Header | Implementation notes |
| --- | --- |
| `assert.h`        | [ ] *Not implemented* |
| `complex.h`       | [ ] *Not implemented* |
| `ctype.h`         | [ ] *Not implemented* |
| `errno.h`         | [X] Mostly implemented |
| `fenv.h`          | [ ] *Not implemented* |
| `float.h`         | [ ] *Not implemented* |
| `inttypes.h`      | [ ] *Not implemented* |
| `iso646.h`        | [ ] *Not implemented* |
| `limits.h`        | [ ] Has `CHAR_BIT` and `RSIZE_MAX` only |
| `locale.h`        | [ ] *Not implemented* |
| `math.h`          | [ ] *Not implemented* |
| `setjmp.h`        | [ ] *Not implemented* |
| `signal.h`        | [ ] *Not implemented* |
| `stdalign.h`      | [X] Mostly implemented |
| `stdarg.h`        | [ ] *Not implemented* |
| `stdatomic.h`     | [ ] *Not implemented* |
| `stdbool.h`       | [X] Implemented |
| `stddef.h.`       | [X] Partially implemented |
| `stdint.h`        | [ ] *Not implemented* |
| `stdio.h`         | [ ] *Not implemented* |
| `stdlib.h`        | [ ] Partially implemented |
| `stdnoreturn.h`   | [X] Implemented for GCC and Clang |
| `string.h`        | [X] Partially implemented |
| `tgmath.h`        | [ ] *Not implemented* |
| `threads.h`       | [ ] *Not implemented* |
| `time.h`          | [ ] *Not implemented* |
| `uchar.h`         | [ ] *Not implemented* |
| `wchar.h`         | [ ] *Not implemented* |
| `wctype.h`        | [ ] *Not implemented* |
