//
// Created by ismdeep on 2020/1/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>

#include <sort-algos/selection-sort.h>
#include <sort-algos/bubble-sort.h>
#include <sorted-assert.h>

#define ARR_SIZE 20000

bool cmp(const void *data_left, const void *data_right) {
    return *((double *) data_left) <= *((double *) data_right);
}

struct timeval * create_start_point() {
    struct timeval *t = (struct timeval *) malloc(sizeof(struct timeval));
    gettimeofday(t, NULL);
    return t;
}

uint64_t stop_watch_us(const struct timeval *t1) {
    struct timeval t2;
    gettimeofday(&t2, NULL);
    uint64_t timestamp1 = (uint64_t)t1->tv_sec * 1000000 + t1->tv_usec;
    uint64_t timestamp2 = (uint64_t)t2.tv_sec * 1000000 + t2.tv_usec;
    return timestamp2 - timestamp1;
}

int main() {
    srandom((unsigned) time(NULL));

    /* Generate data in array a */
    double a[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        a[i] = (double) (random() % 1000);
    }

    /* Copy data from a to raw */
    double raw[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        raw[i] = a[i];
    }

    struct timeval *start_point = create_start_point();

    /* Sort array **a** with **select_sort()** algorithm */
    selection_sort(a, a + ARR_SIZE, sizeof(double), cmp);
    bubble_sort(a, a + ARR_SIZE, sizeof(double), cmp);

    printf("Time elapse: %.2lf ms\n", stop_watch_us(start_point) / 1000.0);

    /* Assert sort result */
    if (sorted_assert(raw, raw + ARR_SIZE, a, a + ARR_SIZE, sizeof(double), cmp)) {
        printf("Successfully.\n");
    } else {
        printf("Unsuccessfully.");
    }

    return 0;
}
