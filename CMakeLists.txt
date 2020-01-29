cmake_minimum_required(VERSION 3.11)

project(nolibc VERSION 0.0.0 LANGUAGES C)

add_library(nolibc INTERFACE)

target_include_directories(
    nolibc INTERFACE
    include
)

target_compile_features(
    nolibc INTERFACE
)
