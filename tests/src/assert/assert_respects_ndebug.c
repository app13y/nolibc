#define NDEBUG
#define NOLIBC_OVERRIDE_ABORT

#include <assert.h>
#include <stdbool.h>

static int number_of_aborts = 0;

void
abort_override(
    void
) {
    ++number_of_aborts;
}

int
main(
    void
) {
    assert(true);
    assert(false);

    return (number_of_aborts == 0)
        ? 0
        : 1;
}
