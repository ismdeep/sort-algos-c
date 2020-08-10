//
// Created by ismdeep on 2020/1/28.
//

#include <sort-algos-int-with-func/selection-sort-int-with-func.h>

#include <stdbool.h>

void selection_sort(int a[], int len, cmp_int_func_t cmp_func) {
    for (int left = 0; left < len; left++) {
        int min_p = left;
        for (int cur = left + 1; cur < len; cur++) {
            if ( cmp_func(&a[cur], &a[min_p]) ) {
                min_p = cur;
            }
        }
        int tmp = a[min_p];
        a[min_p] = a[left];
        a[left] = tmp;
    }
}
