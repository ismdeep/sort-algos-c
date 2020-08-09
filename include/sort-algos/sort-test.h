//
// Created by ismdeep on 2020/1/27.
//

#ifndef SORT_ALGOS_C_SORT_TEST_H
#define SORT_ALGOS_C_SORT_TEST_H

#include <stdlib.h>
#include <stdbool.h>
#include <sort-base.h>

void sort_test(
        void *data_start,
        void *data_end,
        size_t item_size,
        sort_func_t sort_func,
        char *sort_func_name,
        cmp_func_t cmp_func
);

#endif //SORT_ALGOS_C_SORT_TEST_H
