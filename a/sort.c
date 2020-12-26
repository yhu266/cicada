#include "sort.h"
#include "sort/bubble.c"
#include "sort/insertion.c"

bool i32sAreSorted(int32_t* arr, const size_t n) {
  if (n == 0 || n == 1)
    return true;
  for (size_t i = 0; i < n - 1; ++i)
    if (arr[i] < arr[i + 1])
      return false;
  return true;
}

bool i64sAreSorted(int64_t* arr, const size_t n) {
  if (n == 0 || n == 1)
    return true;
  for (size_t i = 0; i < n - 1; ++i)
    if (arr[i] < arr[i + 1])
      return false;
  return true;
}
