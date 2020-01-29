include(cmake/NoStdHeaders.cmake)
include(cmake/NoStdLibrary.cmake)

add_library(nolibc INTERFACE)

target_include_directories(
    nolibc INTERFACE
    include
)

target_compile_features(
    nolibc INTERFACE
)

option(NOLIBC_NO_STD_HEADERS
    "Disables standard include directories for all dependent targets" ON)

option(NOLIBC_NO_STD_LIBRARY
    "Disables standard and startup libraries for all dependent targets" OFF)

target_link_libraries(
    nolibc INTERFACE
    $<$<BOOL:${NOLIBC_NO_STD_HEADERS}>:no_std_headers>
    $<$<BOOL:${NOLIBC_NO_STD_LIBRARY}>:no_std_library>
)
