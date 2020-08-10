//
// Created by ismdeep on 2020/1/27.
//

#ifndef SORT_ALGOS_C_COCKTAIL_SORT_H
#define SORT_ALGOS_C_COCKTAIL_SORT_H

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sort-base.h>

void cocktail_sort(void *data_start, void *data_end, size_t item_size, cmp_func_t cmp_func);

#endif //SORT_ALGOS_C_COCKTAIL_SORT_H
