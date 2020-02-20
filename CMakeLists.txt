cmake_minimum_required(VERSION 3.11)

project(nolibc VERSION 0.0.1 LANGUAGES C)

add_subdirectory(nolibc)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
  enable_testing()
  add_subdirectory(tests)
endif()
