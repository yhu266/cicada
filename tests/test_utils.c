#define TEST_NO_MAIN

#include "acutest.h"
#include "a/utils.h"

void test_swapI32s(void) {
  const int32_t v1 = 83;
  const int32_t v2 = 38;

  int32_t a = v1, b = v2;

  TEST_CHECK(a == v1);
  TEST_CHECK(b == v2);

  swapI32s(&a, &b);

  TEST_CHECK(a == v2);
  TEST_CHECK(b == v1);
}

void test_swapI64s(void) {
  const int64_t v1 = 74;
  const int64_t v2 = 47;

  int64_t a = v1, b = v2;

  TEST_CHECK(a == v1);
  TEST_CHECK(b == v2);

  swapI64s(&a, &b);

  TEST_CHECK(a == v2);
  TEST_CHECK(b == v1);
}
