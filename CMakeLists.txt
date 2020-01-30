cmake_minimum_required(VERSION 3.10)
project(sort-algos C)
project(sort-algos-int C)
project(sort-algos-int-with-func C)

set(CMAKE_C_STANDARD 11)

include_directories("./include")

add_executable(sort-algos

        include/data-swap.c
        include/sort-algos/selection-sort.c
        include/sort-algos/bubble-sort.c
        include/sort-algos/insertion-sort.c
        include/sort-algos/quick-sort.c
        include/sort-algos/cocktail-sort.c
        include/sorted-assert.c
        include/sort-algos/sort-test.c
        include/time-utils.c
        sort-algos.c)

add_executable(sort-algos-int

        include/sort-algos-int/selection-sort-int.c
        include/sort-algos-int/bubble-sort-int.c
        include/sort-algos-int/insertion-sort-int.c
        include/sort-algos-int/quick-sort-int.c
        include/sort-algos-int/cocktail-sort-int.c
        include/sorted-assert.c
        include/data-swap.c
        include/sort-algos-int/sort-test.c
        include/time-utils.c
        sort-algos-int.c)

add_executable(sort-algos-int-with-func

        include/sort-algos-int-with-func/selection-sort-int-with-func.c
        include/sort-algos-int-with-func/bubble-sort-int-with-func.c
        include/sort-algos-int-with-func/insertion-sort-int-with-func.c
        include/sort-algos-int-with-func/quick-sort-int-with-func.c
        include/sort-algos-int-with-func/cocktail-sort-int-with-func.c
        include/sorted-assert.c
        include/data-swap.c
        include/sort-algos-int-with-func/sort-test.c
        include/time-utils.c
        sort-algos-int-with-func.c)
