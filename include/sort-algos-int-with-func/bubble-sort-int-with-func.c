//
// Created by ismdeep on 2020/1/28.
//

#include <sort-algos-int-with-func/bubble-sort-int-with-func.h>

#include <data-swap.h>

void bubble_sort(int a[], int len, cmp_int_func_t cmp_func) {
    for (int stop = len - 1; stop > 0; stop--) {
        for (int i = 0; i < stop; i++) {
            if ( !cmp_func(&a[i], &a[i+1])) {
                data_swap(a + i, a + i + 1, sizeof(int));
            }
        }
    }
}
