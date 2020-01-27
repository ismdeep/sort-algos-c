//
// Created by ismdeep on 2020/1/27.
//

#include <time-utils.h>

struct timeval *create_start_point() {
    struct timeval *t = (struct timeval *) malloc(sizeof(struct timeval));
    gettimeofday(t, NULL);
    return t;
}

uint64_t stop_watch_us(const struct timeval *t1) {
    struct timeval t2;
    gettimeofday(&t2, NULL);
    uint64_t timestamp1 = (uint64_t) t1->tv_sec * 1000000 + t1->tv_usec;
    uint64_t timestamp2 = (uint64_t) t2.tv_sec * 1000000 + t2.tv_usec;
    return timestamp2 - timestamp1;
}
