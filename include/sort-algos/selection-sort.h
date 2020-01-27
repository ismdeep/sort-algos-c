//
// Created by ismdeep on 2020/1/26.
//

#ifndef SORT_ALGOS_C_SELECTION_SORT_H
#define SORT_ALGOS_C_SELECTION_SORT_H

#include <stdbool.h>

void selection_sort(void *data_start, void *data_end, size_t item_size,
                 bool (*cmp_func)(const void *, const void *));


#endif //SORT_ALGOS_C_SELECTION_SORT_H
