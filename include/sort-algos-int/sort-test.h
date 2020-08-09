//
// Created by ismdeep on 2020/1/29.
//

#ifndef SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H
#define SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sort-base.h>

void sort_test(
        int a[],
        int len,
        void (*sort_func)(int [], int),
        char *sort_func_name,
        cmp_func_t cmp_func
);

#endif //SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H
