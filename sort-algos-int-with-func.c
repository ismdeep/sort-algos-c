//
// Created by ismdeep on 2020/1/28.
//

#include <stdbool.h>
#include <time-utils.h>
#include <time.h>

#include <sort-algos-int-with-func/sort-test.h>
#include <sort-algos-int-with-func/selection-sort-int-with-func.h>
#include <sort-algos-int-with-func/bubble-sort-int-with-func.h>
#include <sort-algos-int-with-func/cocktail-sort-int-with-func.h>
#include <sort-algos-int-with-func/insertion-sort-int-with-func.h>
#include <sort-algos-int-with-func/quick-sort-int-with-func.h>


#define ARR_SIZE 20000

bool cmp(const int *a, const int *b) {
    return *a >= *b;
}

int main() {
    srandom((unsigned) time(NULL));

    /* Generate raw_data[ARR_SIZE] */
    int raw_data[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        raw_data[i] = (int) (random() % 1000);
    }

    sort_test(raw_data, ARR_SIZE, selection_sort, "selection_sort", cmp);
    sort_test(raw_data, ARR_SIZE, bubble_sort   , "bubble_sort"   , cmp);
    sort_test(raw_data, ARR_SIZE, cocktail_sort , "cocktail_sort" , cmp);
    sort_test(raw_data, ARR_SIZE, insertion_sort, "insertion_sort", cmp);
    sort_test(raw_data, ARR_SIZE, quick_sort    , "quick_sort"    , cmp);

    return 0;
}
