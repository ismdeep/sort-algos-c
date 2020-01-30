//
// Created by ismdeep on 2020/1/27.
//

#include <data-swap.h>
#include <string.h>

#include <sort-algos/quick-sort.h>


void quick_sort(void *data_start, void *data_end, size_t item_size,
                bool (*cmp_func)(const void *, const void *)) {
    if (data_start >= data_end - item_size)
        return;
    void *mid = data_end - item_size;
    void *left = data_start;
    void *right = data_end - item_size - item_size;

    while (left < right) {
        while ( cmp_func(left, mid) && left < right)
            left += item_size;
        while (! cmp_func(right, mid) && left < right)
            right -= item_size;
        data_swap(left, right, item_size);
    }
    if ( cmp_func(data_end - item_size, left)) {
        data_swap(left, data_end - item_size, item_size);
    } else {
        left += item_size;
        data_swap(left, data_end - item_size, item_size);
    }
    if (left != data_start)
        quick_sort(data_start, left, item_size, cmp_func);
    quick_sort(left + item_size, data_end, item_size, cmp_func);
}
