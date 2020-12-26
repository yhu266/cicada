#ifndef CICADA_VECTOR_H
#define CICADA_VECTOR_H

#include <stddef.h>
#include <stdint.h>

struct IVector {
  size_t size;
  size_t _cap;
  int64_t* data;
};

typedef struct IVector IVector;

IVector* newIVector();

void freeIVector(IVector*);

void clearIVector(IVector*);

void appendToIVector(IVector*, int64_t);

int64_t* newIArrayFromIVector(IVector*);

IVector* newIVectorFromIArray(int64_t*, size_t);

#endif
