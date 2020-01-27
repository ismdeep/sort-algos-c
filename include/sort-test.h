//
// Created by ismdeep on 2020/1/27.
//

#ifndef SORT_ALGOS_C_SORT_TEST_H
#define SORT_ALGOS_C_SORT_TEST_H

#include <stdlib.h>
#include <stdbool.h>

void sort_test(
        const double *data,
        int data_size,
        void (*sort_func)(void *, void *, size_t, bool (*)(const void *, const void *)),
        char *sort_func_name,
        bool (*cmp_func) (const void *, const void *)
);

#endif //SORT_ALGOS_C_SORT_TEST_H
