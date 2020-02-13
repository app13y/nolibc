#define NOLIBC_OVERRIDE_ASSERT

#include <helpers.h>
#include nolibc_header(nolibc/extensions/unmangled.h)
#include nolibc_header(nolibc/predefined/build_flavour.h)
#include nolibc_header(assert.h)
#include nolibc_header(stdbool.h)

static int number_of_calls = 0;

void
assert_override(
    bool condition
) {
    (void) condition;

    ++number_of_calls;
}

int
main(
    void
) {
    assert(true);
    assert(false);

    const int expected_number_of_calls = _BUILD_FLAVOUR_IS_DEBUG
        ? 2
        : 0;

    return (number_of_calls == expected_number_of_calls)
        ? 0
        : 1;
}
