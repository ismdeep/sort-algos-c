//
// Created by ismdeep on 2020/1/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <sort-algos/selection-sort.h>
#include <sort-algos/bubble-sort.h>
#include <sort-test.h>

#define ARR_SIZE 200

bool cmp(const void *data_left, const void *data_right) {
    return *((double *) data_left) <= *((double *) data_right);
}


int main() {
    srandom((unsigned) time(NULL));

    /* Generate data in array a */
    double raw_data[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        raw_data[i] = (double) (random() % 1000);
    }

    sort_test(raw_data, ARR_SIZE, selection_sort, cmp);
    sort_test(raw_data, ARR_SIZE, bubble_sort, cmp);

    return 0;
}
