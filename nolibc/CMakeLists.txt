add_library(nolibc INTERFACE)

target_include_directories(
    nolibc INTERFACE
    include
)

target_compile_features(
    nolibc INTERFACE
)

include(cmake/NoStdHeaders.cmake)
include(cmake/NoStdLibrary.cmake)

target_link_libraries(
    nolibc INTERFACE
    no_std_headers
)
