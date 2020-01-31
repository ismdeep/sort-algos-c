//
// Created by ismdeep on 2020/1/29.
//

#include <sort-algos-int/sort-test.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>
#include <time-utils.h>
#include <sorted-assert.h>

void sort_test(
        int data[],
        int len,
        void (*sort_func)(int [], int),
        char *sort_func_name,
        bool (*cmp_func)(const void *, const void *)
) {
    /* Copy data from raw to selection_sort_data */
    int *sort_data = (int *) malloc(sizeof(int) * len );
    memcpy(sort_data, data, sizeof(int) * len);

    /* Sort array **sort_data** with **sort_func()** algorithm */
    struct timeval *start_point = create_start_point();
    sort_func(sort_data, len);
    printf("Time elapse[%s]: %.2lf ms\n", sort_func_name, stop_watch_us(start_point) / 1000.0);

    /* Assert sort result */
    if (sorted_assert(data, data + len, sort_data, sort_data + len, sizeof(int), cmp_func)) {
        printf("Successfully.\n\n");
    } else {
        printf("Unsuccessfully.\n\n");
    }

    free(sort_data);
    free(start_point);
}
