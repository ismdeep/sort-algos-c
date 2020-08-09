//
// Created by ismdeep on 2020/1/28.
//

#include <sort-algos-int-with-func/quick-sort-int-with-func.h>

#include <stdbool.h>
#include <data-swap.h>

void quick_sort(int a[], int len, cmp_int_func_t cmp_func) {
    if (len <= 1)
        return;
    int mid = a[len - 1];
    int left = 0;
    int right = len - 2;
    while (left < right) {
        while (cmp_func(&a[left], &mid) && left < right)
            ++left;
        while (!cmp_func(&a[right], &mid) && left < right)
            --right;
        data_swap(a + left, a + right, sizeof(int));
    }
    if ( cmp_func(&a[len-1], &a[left]) ) {
        data_swap(a + left, a + len - 1, sizeof(int));
    } else {
        ++left;
        data_swap(a + left, a + len - 1, sizeof(int));
    }
    if (left)
        quick_sort(a, left, cmp_func);
    quick_sort(a + left + 1, len - left - 1, cmp_func);
}