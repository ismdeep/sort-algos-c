//
// Created by cybartist on 2020/8/10.
//

#ifndef SORT_ALGOS_C_SORT_BASE_H
#define SORT_ALGOS_C_SORT_BASE_H

#include <stdlib.h>
#include <stdbool.h>

typedef void (*sort_func_t)(void*, void*, size_t, bool (*)(const void*, const void*));

typedef void (*sort_int_func_t)(int[], int, bool (*)(const int*, const int*));

typedef bool (*cmp_func_t) (const void*, const void*);

typedef bool (*cmp_int_func_t) (const int*, const int*);

#endif //SORT_ALGOS_C_SORT_BASE_H
