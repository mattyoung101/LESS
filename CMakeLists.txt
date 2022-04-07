cmake_minimum_required(VERSION 3.21)
project(less C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Wno-unused-parameter)
add_executable(less src/main.c src/less.h)
include_directories(src)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    message(STATUS "Maximum optimization for size")
    add_compile_options(-Os -flto)
    add_link_options(-flto)
else ()
    message(STATUS "Minimal optimization, debug info included")
    add_compile_options(-O0 -g3)
    add_compile_options(-fsanitize=address -fsanitize=undefined -fno-sanitize=leak -fno-omit-frame-pointer)
    add_compile_definitions(DEBUG)
endif ()


# TODO make a dynamic link library as well