//
// Created by ismdeep on 2020/1/27.
//

#include <time-utils.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sorted-assert.h>
#include <sys/time.h>
#include <time.h>
#include <sort-base.h>

void sort_test(
        void *data_start,
        void *data_end,
        size_t item_size,
        sort_func_t sort_func,
        char *sort_func_name,
        cmp_func_t cmp_func
) {

    /* Copy data from raw to selection_sort_data */
    void *sort_data = (void *) malloc( data_end - data_start );
    memcpy(sort_data, data_start, data_end - data_start);

    /* Sort array **sort_data** with **sort_func()** algorithm */
    struct timeval *start_point = create_start_point();
    sort_func(sort_data, sort_data + (data_end - data_start), item_size, cmp_func);
    printf("Time elapse[%s]: %.2lf ms\n", sort_func_name, stop_watch_us(start_point) / 1000.0);

    /* Assert sort result */
    if (sorted_assert(data_start, data_end, sort_data, sort_data + (data_end - data_start), item_size, cmp_func)) {
        printf("Successfully.\n\n");
    } else {
        printf("Unsuccessfully.\n\n");
    }

    free(sort_data);
    free(start_point);
}
