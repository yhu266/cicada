#include "list.h"
#include "a/array.h"

#include <stdlib.h>

IList* newIList() {
  IList* l = malloc(sizeof(IList));
  l->size = 0;
  l->head = NULL;
  l->tail = NULL;
  return l;
}

void freeIList(IList* l) {
  clearIList(l);
  free(l);
}

void clearIList(IList* l) {
  IListNode* next;
  IListNode* currNode = l->head;
  while (currNode != NULL) {
    next = currNode->next;
    free(currNode);
    currNode = next;
  }
  l->head = NULL;
  l->tail = NULL;
  l->size = 0;
}

int64_t popFromIList(IList* l) {
  const int64_t data = l->tail->data;
  IListNode* prev = l->tail->prev;
  prev->next = NULL;
  free(l->tail);
  l->tail = prev;
  return data;
}

static IListNode* createIListNode(IListNode* prev, int64_t data, IListNode* next) {
  IListNode* listNode = malloc(sizeof(IListNode));
  listNode->prev = prev;
  listNode->data = data;
  listNode->next = next;
  return listNode;
}

void appendToIList(IList* l, const int64_t data) {
  IListNode* listNode = createIListNode(l->tail, data, NULL);
  switch (l->size) {
  case 0:
    l->head = listNode;
  case 1:
    l->head->next = listNode;
    break;
  default:
    l->tail->next = listNode;
  }
  l->tail = listNode;
  l->size++;
}

int64_t* newIArrayFromIList(IList* l) {
  size_t i = 0;
  IListNode* curr = l->head;
  int64_t* arr = newI64Array(l->size);

  while (curr != NULL) {
    arr[i++] = curr->data;
    curr = curr->next;
  }

  return arr;
}

void prependToIList(IList* l, const int64_t data) {
  if (l->size == 0)
    appendToIList(l, data);
  else {
    IListNode* listNode = createIListNode(NULL, data, l->head);
    l->head->prev = listNode;
    l->head = listNode;
  }
}

IList* newIListFromIArray(int64_t* arr, const size_t n) {
  IList* l = newIList();
  for (size_t i = 0; i < n; ++i)
    appendToIList(l, arr[i]);
  return l;
}
