#ifndef CICADA_ARRAY_H
#define CICADA_ARRAY_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

int64_t* newI64Array(size_t);

int32_t* newI32Array(size_t);

bool i32ArrayCmp(int32_t*, size_t, int32_t*, size_t);

bool i64ArrayCmp(int64_t*, size_t, int64_t*, size_t);

#endif
