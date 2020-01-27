//
// Created by ismdeep on 2020/1/27.
//

#ifndef SORT_ALGOS_C_TIME_UTILS_H
#define SORT_ALGOS_C_TIME_UTILS_H

#include <stdlib.h>
#include <stdint.h>
#include <sys/time.h>
#include <time.h>

struct timeval *create_start_point();

uint64_t stop_watch_us(const struct timeval *t1);

#endif //SORT_ALGOS_C_TIME_UTILS_H
