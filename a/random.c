#include "random.h"

#include <time.h>
#include <stdlib.h>

int32_t randomInt32(const int32_t lower, const int32_t upper) {
  srand(time(NULL));
  return (int32_t) (rand() % (upper - lower + 1) + lower);
}

int64_t randomInt64(const int64_t lower, const int64_t upper) {
  srand(time(NULL));
  return (int64_t) (rand() % (upper - lower + 1) + lower);
}
