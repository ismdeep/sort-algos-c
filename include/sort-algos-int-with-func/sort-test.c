//
// Created by ismdeep on 2020/1/30.
//

#include <sort-algos-int-with-func/sort-test.h>

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <sorted-assert.h>
#include <time-utils.h>
#include <stdio.h>

void sort_test(
        int data[],
        int len,
        sort_int_func_t sort_func,
        char *sort_func_name,
        cmp_int_func_t cmp_func
) {
    /* Copy data from raw to selection_sort_data */
    int *sort_data = (int *) malloc(sizeof(int) * len );
    memcpy(sort_data, data, sizeof(int) * len);

    /* Sort array **sort_data** with **sort_func()** algorithm */
    struct timeval *start_point = create_start_point();
    sort_func(sort_data, len, cmp_func);
    printf("Time elapse[%s]: %.2lf ms\n", sort_func_name, stop_watch_us(start_point) / 1000.0);

    /* Assert sort result */
    if (sorted_assert(data, data + len, sort_data, sort_data + len, sizeof(int),
                      (bool (*)(const void *, const void *)) cmp_func)) {
        printf("Successfully.\n\n");
    } else {
        printf("Unsuccessfully.\n\n");
    }

    free(sort_data);
    free(start_point);
}
