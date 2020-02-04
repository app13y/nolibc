function(add_tests suite)
  foreach(test IN LISTS ARGN)
    get_filename_component(test_name ${test} NAME_WE)

    add_executable(${test_name} ${test})
    target_link_libraries(${test_name} nolibc)

    add_test(${suite}/${test_name} ${test_name})
  endforeach()
endfunction()

add_tests(nolibc
  src/assert/assert_is_defined.c
  src/assert/assert_is_not_redefined.c
  src/assert/assert_is_overridable.c
  src/assert/assert_respects_ndebug.c
  src/stddef/null_is_defined.c
  src/stdlib/abort_is_defined.c
  src/string/memset_is_defined.c
  src/string/memset_works.c
)
