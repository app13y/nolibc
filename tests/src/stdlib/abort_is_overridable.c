#define NOLIBC_OVERRIDE_ABORT

#include <stdlib.h>
#include <stdbool.h>

static bool does_call_abort_override = false;

void
abort_override(
    void
) {
    does_call_abort_override = true;
}

int
main(
    void
) {
    abort();
    return does_call_abort_override
        ? 0
        : 1;
}