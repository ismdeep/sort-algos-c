//
// Created by ismdeep on 2020/1/26.
//

#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <sort-algos/selection-sort.h>
#include <sort-algos/bubble-sort.h>
#include <sort-algos/insertion-sort.h>
#include <sort-algos/quick-sort.h>
#include <sort-algos/cocktail-sort.h>
#include <sort-test.h>

#define ARR_SIZE 2000

bool cmp(const double *data_left, const double *data_right) {
    return *data_left <= *data_right;
}

int main() {
    srandom((unsigned) time(NULL));

    /* Generate raw_data[ARR_SIZE] */
    double raw_data[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        raw_data[i] = (double) (random() % 1000);
    }

    /* Testing sort functions */
    sort_test(raw_data, ARR_SIZE, selection_sort, "selection_sort", (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, bubble_sort, "bubble_sort", (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, cocktail_sort, "cocktail_sort", (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, insertion_sort, "insertion_sort", (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, quick_sort, "quick_sort", (bool (*)(const void *, const void *)) cmp);
    
    return 0;
}
