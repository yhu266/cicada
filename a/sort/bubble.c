#include "a/utils.h"

#include <stdint.h>
#include <stddef.h>

void bubbleSortI32s(int32_t* arr, const size_t n) {
  for (size_t i = 0; i < n - 1; ++i)
    for (size_t j = 0; j < n - i - 1; ++j)
      if (arr[j] > arr[j + 1])
        swapI32s(&arr[j], &arr[j + 1]);
}

void bubbleSortI64s(int64_t* arr, const size_t n) {
  for (size_t i = 0; i < n - 1; ++i)
    for (size_t j = 0; j < n - i - 1; ++j)
      if (arr[j] > arr[j + 1])
        swapI64s(&arr[j], &arr[j + 1]);
}
