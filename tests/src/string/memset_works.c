#include <helpers.h>
#include nolibc_header(string.h)
#include nolibc_header(stdbool.h)

static inline bool
does_fill_buffer(
    unsigned char chr
) {
    unsigned char buffer[16];

    for (size_t i = 0; i < sizeof(buffer); ++i) {
        buffer[i] = (unsigned char) i;
    }

    memset(buffer, chr, sizeof(buffer));

    for (size_t i = 0; i < sizeof(buffer); ++i) {
        if (buffer[i] != chr) {
            return false;
        }
    }

    return true;
}

static inline bool
does_zeroise_buffer(
    void
) {
    return does_fill_buffer(0x00);
}

int
main(
    void
) {
    if (!does_zeroise_buffer()) {
        return 1;
    }

    if (!does_fill_buffer(0xfe)) {
        return 1;
    }

    return 0;
}
