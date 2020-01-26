//
// Created by ismdeep on 2020/1/26.
//

#include <stdbool.h>
#include <sorted-assert.h>

bool data_equal(const void *data1, const void *data2, size_t item_size) {
    for (size_t i = 0; i < item_size; i++) {
        if ( *((unsigned char *)data1 + i) != *((unsigned char *)data2 + i) ) {
            return false;
        }
    }
    return true;
}

bool sorted_assert(
        const void *raw_data_start, const void *raw_data_end,
        const void *sorted_data_start, const void *sorted_data_end,
        size_t item_size,
        bool (*cmp_func)(const void *, const void *)) {

    size_t count = (raw_data_end - raw_data_start) / item_size;
    bool *used = (bool *) malloc(sizeof(bool) * count);
    void *cursor;

    /* Check if all raw_data are the same with sorted_data (no data loose, no data append) */
    for (int i = 0; i < count; i++) {
        used[i] = false;
    }
    cursor = (void *) sorted_data_start;
    while (cursor < sorted_data_end) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (!used[i] && data_equal(cursor, raw_data_start + i * item_size, item_size)) {
                used[i] = true;
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
        cursor += item_size;
    }

    /* Check if every pair of adjacent is satisfied  **cmp_func()** */
    cursor = (void *)sorted_data_start;
    cursor += item_size;
    while (cursor < sorted_data_end) {
        if (!cmp_func(cursor - item_size, cursor)) {
            return false;
        }
        cursor += item_size;
    }
    return true;
}