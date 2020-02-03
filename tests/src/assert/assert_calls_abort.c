#define NOLIBC_OVERRIDE_ABORT

#include <nolibc/predefined/build_flavour.h>
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

    const int expected_number_of_aborts = _BUILD_FLAVOUR_IS_DEBUG
        ? 1
        : 0;

    return (number_of_aborts == expected_number_of_aborts)
        ? 0
        : 1;
}
