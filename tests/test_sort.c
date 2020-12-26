#define TEST_NO_MAIN

#include "a/sort.h"
#include "a/array.h"
#include "acutest.h"
#include "a/random.h"

#include <stdio.h>

#define ARSIZE 10 // fixed array size

/*
 * test_fixed_<sortFunc> compares a manually defined static array sorted
 * with the function provided against the same array sorted manually.
*/

void test_fixed_bubbleSortI64s(void) {
  int64_t sortedArr[ARSIZE] = {-459, -154, 24, 425, 578, 692, 867, 959, 1703, 1869};
  int64_t unsortedArr[ARSIZE] = {1703, 578, 959, -459, -154, 1869, 24, 867, 692, 425};

  TEST_CHECK(!i64ArrayCmp(unsortedArr, ARSIZE, sortedArr, ARSIZE));

  bubbleSortI64s(unsortedArr, ARSIZE);

  TEST_CHECK(i64ArrayCmp(unsortedArr, ARSIZE, sortedArr, ARSIZE));
}

void test_random_bubbleSortI64s(void) {
  const size_t n = randomInt32(0, 60);
  int64_t* arr = newI64Array(n);

  for (size_t i = 0; i < n; ++i) {
    srand(time(NULL));
    arr[i] = randomInt64(-2000, 2000);
  }

  bubbleSortI64s(arr, n);

  TEST_CHECK(i64sAreSorted(arr, n));

  free(arr);
}
