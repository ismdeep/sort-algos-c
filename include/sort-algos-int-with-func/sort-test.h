//
// Created by ismdeep on 2020/1/30.
//

#ifndef SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H
#define SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H

#include <stdbool.h>
#include <sort-base.h>

void sort_test(
        int data[],
        int len,
        sort_int_func_t sort_func,
        char *sort_func_name,
        cmp_int_func_t cmp_func
);

#endif //SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H
