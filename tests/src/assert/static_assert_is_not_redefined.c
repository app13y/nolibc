#define static_assert \
    custom_static_assert

#include <nolibc/extensions/stringify.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

static inline bool
does_expand_to_expected_macro(
    void
) {
    const char expands_to[] = _Stringify(static_assert);
    const char should_expand_to[] = _Stringify(custom_static_assert);

    // todo: replace with nolibc's implementation of strcmp
    // when nolibc has one
    extern int
    strcmp(char const *, char const *);
    return (0 == strcmp(expands_to, should_expand_to));
}

int
main(
    void
) {
    if (!does_expand_to_expected_macro()) {
        return 1;
    }

    return 0;
}
