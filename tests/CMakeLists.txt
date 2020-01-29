add_executable(tests)

target_sources(
    tests PRIVATE
    src/stddef_tests.c
)

target_link_libraries(
    tests PRIVATE
    nolibc
)
