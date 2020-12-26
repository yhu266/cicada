#include "tests.h"
#include "acutest.h"

TEST_LIST = {
  { "test_newIList", test_newIList },
  { "test_swapI32s", test_swapI32s },
  { "test_swapI64s", test_swapI64s },
  { "test_newIVector", test_newIVector },
  { "test_clearIList", test_clearIList },
  { "test_newI64Array", test_newI64Array },
  { "test_clearIVector", test_clearIVector },
  { "test_appendToIList", test_appendToIList },
  { "test_appendToIVector", test_appendToIVector },
  { "test_newIArrayFromIList", test_newIArrayFromIList },
  { "test_newIArrayFromIVector", test_newIArrayFromIVector },
  { "test_fixed_bubbleSortI64s", test_fixed_bubbleSortI64s },
  { "test_random_bubbleSortI64s", test_random_bubbleSortI64s },
  { NULL, NULL },
};
