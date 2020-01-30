//
// Created by ismdeep on 2020/1/28.
//

#ifndef SORT_ALGOS_INT_WITH_FUNC_SELECTION_SORT_INT_WITH_FUNC_H
#define SORT_ALGOS_INT_WITH_FUNC_SELECTION_SORT_INT_WITH_FUNC_H

#include <stdbool.h>

void selection_sort(int a[], int len, bool (*cmp_func)(const int *, const int *));

#endif //SORT_ALGOS_INT_WITH_FUNC_SELECTION_SORT_INT_WITH_FUNC_H
