#include "utils.h"

void swapI32s(int32_t* ap, int32_t* bp) {
  const int32_t tmp = *ap;
  *ap = *bp;
  *bp = tmp;
}

void swapI64s(int64_t* ap, int64_t* bp) {
  const int64_t tmp = *ap;
  *ap = *bp;
  *bp = tmp;
}
