#define assert \
    custom_assert

#include <nolibc/predefined/build_flavour.h>
#include <assert.h>
#include <stdbool.h>

static int number_of_calls = 0;

void custom_assert(bool condition) {
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
