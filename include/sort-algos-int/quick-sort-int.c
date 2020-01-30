//
// Created by ismdeep on 2020/1/28.
//

#include <sort-algos-int/quick-sort-int.h>
#include <data-swap.h>
#include <stdio.h>

void quick_sort(int a[], int len) {
    if (len <= 1)
        return;
    int mid = a[len - 1];
    int left = 0;
    int right = len - 2;
    while (left < right) {
        while (a[left] <= mid && left < right)
            ++left;
        while ( a[right] > mid && left < right)
            --right;
        data_swap(a + left, a + right, sizeof(int));
    }
    if ( a[len - 1] < a[left] ) {
        data_swap(a + left, a + len - 1, sizeof(int));
    } else {
        ++left;
        data_swap(a + left, a + len - 1, sizeof(int));
    }
    if (left)
        quick_sort(a, left);
    quick_sort(a + left + 1, len - left - 1);
}