#define assert \
    assert

#include <helpers.h>
#include nolibc_header(nolibc/predefined/build_flavour.h)
#include nolibc_header(assert.h)
#include nolibc_header(stdbool.h)

static int number_of_calls = 0;

#undef assert
#define assert \
    custom_assert

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

    const int expected_number_of_calls = 2;
    return (number_of_calls == expected_number_of_calls)
        ? 0
        : 1;
}
