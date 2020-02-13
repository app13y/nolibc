function(add_tests suite)
  foreach(test IN LISTS ARGN)
    get_filename_component(test_name ${test} NAME_WE)
    get_filename_component(test_directory ${test} DIRECTORY)
    get_filename_component(test_header ${test_directory} NAME_WE)

    add_executable(${test_name} ${test})
    target_include_directories(${test_name} PRIVATE include)
    target_link_libraries(${test_name} nolibc)

    add_test(${suite}/${test_header}/${test_name} ${test_name})
  endforeach()
endfunction()

add_tests(nolibc
  src/assert/assert_is_defined.c
  src/assert/assert_is_not_redefined.c
  src/assert/assert_is_overridable.c
  src/assert/assert_respects_ndebug.c
  src/assert/static_assert_is_defined.c
  src/assert/static_assert_is_not_redefined.c
  src/iso646/and_works.c
  src/iso646/bitand_works.c
  src/iso646/not_works.c
  src/iso646/not_eq_works.c
  src/iso646/or_works.c
  src/iso646/xor_works.c
  src/stddef/null_is_defined.c
  src/stdlib/abort_is_defined.c
  src/string/memset_is_defined.c
  src/string/memset_works.c
)
