#ifndef CICADA_STRING_H
#define CICADA_STRING_H

struct Str {
  char* data;
  size_t len;
};

typedef struct Str Str;

Str* newStr();

Str* str(char*);

void freeStr(Str*);

Str* appendStr(char*);

Str* sliceStr(size_t, size_t);

#endif // CICADA_STRING_H
