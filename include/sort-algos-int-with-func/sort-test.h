//
// Created by ismdeep on 2020/1/30.
//

#ifndef SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H
#define SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H

#include <stdbool.h>

void sort_test(
        int data[],
        int len,
        void (*sort_func)(int [], int, bool(*)(const int*, const int*)),
        char *sort_func_name,
        bool (*cmp_func)(const int*, const int*)
);

#endif //SORT_ALGOS_INT_WITH_FUNC_SORT_TEST_H
