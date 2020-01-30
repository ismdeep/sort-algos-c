//
// Created by ismdeep on 2020/1/28.
//

#include <sort-algos-int/cocktail-sort-int.h>

void cocktail_sort(int a[], int len) {
    int i, left = 0, right = len - 1;
    int temp;
    while (left < right) {
        for (i = left; i < right; i++)
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        right--;
        for (i = right; i > left; i--)
            if (a[i - 1] > a[i]) {
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        left++;
    }
}
