cmake_minimum_required(VERSION 3.15)
project(sort-algos-c C)

set(CMAKE_C_STANDARD 11)

include_directories("./include")

add_executable(sort-algos-c
        include/data-swap.c
        include/sort-algos/selection-sort.c
        include/sort-algos/bubble-sort.c
        include/sorted-assert.c
        include/sort-test.c
        include/time-utils.c
        main.c)
