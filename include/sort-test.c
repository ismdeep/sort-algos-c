//
// Created by ismdeep on 2020/1/27.
//

#include <time-utils.h>
#include <stdio.h>
#include <sorted-assert.h>
#include <sys/time.h>
#include <time.h>

void sort_test(
        const double *data,
        int data_size,
        void (*sort_func)(const void *, const void *, size_t, bool (*)(const void *, const void *)),
        char *sort_func_name,
        bool (*cmp_func)(const void *, const void *)
) {

    /* Copy data from raw to selection_sort_data */
    double *sort_data = (double *) malloc(sizeof(double) * data_size);
    for (int i = 0; i < data_size; i++) {
        sort_data[i] = data[i];
    }
    /* Sort array **sort_data** with **sort_func()** algorithm */
    struct timeval *start_point = create_start_point();
    sort_func(sort_data, sort_data + data_size, sizeof(double), cmp_func);
    printf("Time elapse[%s]: %.2lf ms\n", sort_func_name, stop_watch_us(start_point) / 1000.0);

    /* Assert sort result */
    if (sorted_assert(data, data + data_size, sort_data, sort_data + data_size, sizeof(double), cmp_func)) {
        printf("Successfully.\n");
    } else {
        printf("Unsuccessfully.\n");
    }
}