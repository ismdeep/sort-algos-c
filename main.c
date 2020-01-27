//
// Created by ismdeep on 2020/1/26.
//

#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <sort-algos/selection-sort.h>
#include <sort-algos/bubble-sort.h>
#include <sort-algos/insertion-sort.h>
#include <sort-test.h>

#define ARR_SIZE 2000

bool cmp(const void *data_left, const void *data_right) {
    return *((double *) data_left) <= *((double *) data_right);
}

int main() {
    srandom((unsigned) time(NULL));

    /* Generate raw_data[ARR_SIZE] */
    double raw_data[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        raw_data[i] = (double) (random() % 1000);
    }

    /* Testing sort functions */
    sort_test(raw_data, ARR_SIZE, selection_sort, "selection_sort", cmp);
    sort_test(raw_data, ARR_SIZE, bubble_sort, "bubble_sort", cmp);
    sort_test(raw_data, ARR_SIZE, insertion_sort, "insertion_sort", cmp);

    return 0;
}
