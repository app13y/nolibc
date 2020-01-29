add_library(no_std_library INTERFACE)

target_link_options(
    no_std_library INTERFACE
    $<$<COMPILE_LANGUAGE:C>:-nolibc>
)
