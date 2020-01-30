//
// Created by ismdeep on 2020/1/28.
//

#include <sort-algos-int/insertion-sort-int.h>

void insertion_sort(int a[], int len) {
    for (int left = 0; left < len; left++) {
        int min_p = left;
        for (int cur = min_p + 1; cur < len; cur++) {
            if ( a[cur] < a[min_p] ) {
                min_p = cur;
            }
        }
        int tmp = a[min_p];
        for (int cursor = min_p - 1; cursor >= left; cursor--) {
            a[cursor + 1] = a[cursor];
        }
        a[left] = tmp;
    }
}
