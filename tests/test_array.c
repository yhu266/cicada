#define TEST_NO_MAIN

#include "acutest.h"
#include "a/array.h"

#define SIZE 5

void test_newI64Array(void) {
  int64_t vals[SIZE] = {3, 2, 5, 9, 3};
  int64_t* arr = newI64Array(SIZE);

  for (size_t i = 0; i < 5; ++i) arr[i] = vals[i];

  TEST_CHECK(i64ArrayCmp(arr, SIZE, vals, SIZE));

  free(arr);
}
