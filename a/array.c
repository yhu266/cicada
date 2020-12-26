#include "array.h"

#include <stdlib.h>

int32_t* newI32Array(const size_t n) {
  int32_t* arr = (int32_t*) (malloc(sizeof(int32_t) * n));
  return arr;
}

int64_t* newI64Array(const size_t n) {
  int64_t* arr = (int64_t*) (malloc(sizeof(int64_t) * n));
  return arr;
}

bool i32ArrayCmp(int32_t* arr1, const size_t n1, int32_t* arr2, const size_t n2) {
  if (n1 != n2)
    return false;
  for (size_t i = 0; i < n1; ++i)
    if (arr1[i] != arr2[i])
      return false;
  return true;
}

bool i64ArrayCmp(int64_t* arr1, const size_t n1, int64_t* arr2, const size_t n2) {
  if (n1 != n2)
    return false;
  for (size_t i = 0; i < n1; ++i)
    if (arr1[i] != arr2[i])
      return false;
  return true;
}
