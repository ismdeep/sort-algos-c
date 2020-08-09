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
#include <sort-algos/sort-test.h>

#define ARR_SIZE 20000

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
    sort_test(raw_data, raw_data + ARR_SIZE, sizeof(double), selection_sort, "selection_sort", (cmp_func_t) cmp);
    sort_test(raw_data, raw_data + ARR_SIZE, sizeof(double), bubble_sort,    "bubble_sort",    (cmp_func_t) cmp);
    sort_test(raw_data, raw_data + ARR_SIZE, sizeof(double), cocktail_sort,  "cocktail_sort",  (cmp_func_t) cmp);
    sort_test(raw_data, raw_data + ARR_SIZE, sizeof(double), insertion_sort, "insertion_sort", (cmp_func_t) cmp);
    sort_test(raw_data, raw_data + ARR_SIZE, sizeof(double), quick_sort,     "quick_sort",     (cmp_func_t) cmp);

    return 0;
}
