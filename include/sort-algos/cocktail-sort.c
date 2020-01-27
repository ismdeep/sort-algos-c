//
// Created by ismdeep on 2020/1/27.
//

#include <stdint.h>
#include <stdbool.h>
#include <data-swap.h>
#include <sort-algos/cocktail-sort.h>

void cocktail_sort(void *data_start, void *data_end, size_t item_size,
                   bool (*cmp_func)(const void *, const void *)) {
    void *i;
    void *left = data_start;
    void *right = data_end - item_size;
    while (left < right) {
        for (i = left; i < right; i += item_size)
            if ( !cmp_func(i, i + item_size) ) {
                data_swap(i, i + item_size, item_size);
            }
        right -= item_size;
        for (i = right; i > left; i -= item_size)
            if (!cmp_func(i - item_size, i)) {
                data_swap(i, i - item_size, item_size);
            }
        left += item_size;
    }
}

