//
// Created by ismdeep on 2020/1/26.
//

#ifndef SORT_ALGOS_C_SORTED_ASSERT_H
#define SORT_ALGOS_C_SORTED_ASSERT_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <sort-base.h>

bool sorted_assert(
        const void *raw_data_start, const void *raw_data_end,
        const void *sorted_data_start, const void *sorted_data_end,
        size_t item_size,
        cmp_func_t cmp_func);

#endif //SORT_ALGOS_C_SORTED_ASSERT_H
