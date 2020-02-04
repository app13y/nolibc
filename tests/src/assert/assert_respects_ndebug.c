#if !defined NDEBUG
    #define NDEBUG
#endif
#define NOLIBC_OVERRIDE_ASSERT

#include <nolibc/predefined/build_flavour.h>
#include <assert.h>
#include <stdbool.h>

static int number_of_asserts = 0;

void
assert_override(
    bool condition
) {
    ++number_of_asserts;
}

int
main(
    void
) {
    assert(true);
    assert(false);

    static int expected_number_of_asserts = _BUILD_FLAVOUR_IS_DEBUG
        ? 1
        : 0;

    return (number_of_asserts == expected_number_of_asserts)
        ? 0
        : 1;
}
