//
// Created by ismdeep on 2020/1/26.
//

#include <string.h>
#include <stdlib.h>

#include <sort-algos/selection-sort.h>

void selection_sort(void *data_start, void *data_end, size_t item_size,
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
        memcpy(tmp, left, item_size);
        memcpy(left, min_p, item_size);
        memcpy(min_p, tmp, item_size);
        free(tmp);
        left = left + item_size;
    }
}
