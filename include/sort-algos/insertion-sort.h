//
// Created by ismdeep on 2020/1/27.
//

#ifndef SORT_ALGOS_C_INSERTION_SORT_H
#define SORT_ALGOS_C_INSERTION_SORT_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

void insertion_sort(void *data_start, void *data_end, size_t item_size,
                 bool (*cmp_func)(const void *, const void *));

#endif //SORT_ALGOS_C_INSERTION_SORT_H
