#define NOLIBC_OVERRIDE_ASSERT

#include <assert.h>
#include <stdbool.h>

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

    return (number_of_calls == 2)
        ? 0
        : 1;
}
