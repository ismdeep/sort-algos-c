//
// Created by ismdeep on 2020/1/28.
//

#include <stdlib.h>
#include <time.h>
#include <sort-algos-int/sort-test.h>
#include <sort-algos-int/selection-sort-int.h>
#include <sort-algos-int/bubble-sort-int.h>
#include <sort-algos-int/cocktail-sort-int.h>
#include <sort-algos-int/quick-sort-int.h>
#include <sort-algos-int/insertion-sort-int.h>

#define ARR_SIZE 20000

bool cmp(const int *a, const int *b) {
    return *a <= *b;
}

int main() {
    srandom((unsigned) time(NULL));

    /* Generate raw_data[ARR_SIZE] */
    int raw_data[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        raw_data[i] = (int) (random() % 1000);
    }

    sort_test(raw_data, ARR_SIZE, selection_sort, "selection_sort", (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, bubble_sort   , "bubble_sort"   , (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, cocktail_sort , "cocktail_sort" , (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, insertion_sort, "insertion_sort", (bool (*)(const void *, const void *)) cmp);
    sort_test(raw_data, ARR_SIZE, quick_sort    , "quick_sort"    , (bool (*)(const void *, const void *)) cmp);

    return 0;
}
