//
// Created by ismdeep on 2020/1/27.
//

#include <sort-algos/insertion-sort.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

void insertion_sort(const void *data_start, const void *data_end, size_t item_size,
                    bool (*cmp_func)(const void *, const void *)) {
    void *left = (void *) data_start;
    while (left < data_end) {
        void *min_p = left;
        void *cur = min_p + item_size;
        while (cur < data_end) {
            if (!cmp_func(min_p, cur)) {
                min_p = cur;
            }
            cur += item_size;
        }
        void *tmp = malloc(item_size);
        memcpy(tmp, min_p, item_size);

        void *cursor = min_p;
        cursor -= item_size;
        while (left <= cursor) {
            memcpy(cursor + item_size, cursor, item_size);
            cursor -= item_size;
        }

        memcpy(left, tmp, item_size);

        free(tmp);
        left = left + item_size;
    }
}