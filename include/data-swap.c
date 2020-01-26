//
// Created by ismdeep on 2020/1/26.
//

#include <data-swap.h>

#include <string.h>
#include <stdlib.h>

void data_swap(void *data1, void *data2, size_t item_size) {
    void *tmp = malloc(item_size);
    memcpy(tmp, data1, item_size);
    memcpy(data1, data2, item_size);
    memcpy(data2, tmp, item_size);
    free(tmp);
}
