#ifndef CICADA_LIST_H
#define CICADA_LIST_H

#include <stddef.h>
#include <stdint.h>

struct IListNode {
  int64_t data;
  struct IListNode* prev;
  struct IListNode* next;
};

struct IList {
  size_t size;
  struct IListNode* head;
  struct IListNode* tail;
};

typedef struct IList IList;
typedef struct IListNode IListNode;

IList* newIList();

void freeIList(IList*);

void clearIList(IList*);

int64_t popFromIList(IList*);

void appendToIList(IList*, int64_t);

int64_t* newIArrayFromIList(IList*);

void prependToIList(IList*, int64_t);

IList* newIListFromIArray(int64_t*, size_t);

#endif // CICADA_LIST_H
