//
// Created by ismdeep on 2020/1/26.
//

#include <string.h>

#include <sort-algos/bubble-sort.h>
#include <data-swap.h>

void bubble_sort(const void *data_start, const void *data_end, size_t item_size,
                 bool (*cmp_func)(const void *, const void *)) {
    void *cursor_stop = (void *) data_end;
    cursor_stop -= item_size;

    while (data_start < cursor_stop) {
        void *cursor = (void *)data_start;
        while (cursor < cursor_stop) {
            if (!cmp_func(cursor, cursor + item_size)) {
                data_swap(cursor, cursor + item_size, item_size);
            }
            cursor += item_size;
        }
        cursor_stop -= item_size;
    }
}
