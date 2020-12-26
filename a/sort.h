#ifndef CICADA_SORT_H
#define CICADA_SORT_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

bool i32sAreSorted(int32_t*, size_t);

bool i64sAreSorted(int64_t*, size_t);

void bubbleSortI32s(int32_t*, size_t);

void bubbleSortI64s(int64_t*, size_t);

void insertionSortI32s(int32_t*, size_t);

void insertionSortI64s(int64_t*, size_t);

#endif
