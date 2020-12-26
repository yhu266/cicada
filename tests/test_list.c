#define TEST_NO_MAIN

#include "acutest.h"
#include "ds/list.h"

void test_newIList(void) {
  IList* list = newIList();

  TEST_ASSERT(list != NULL);

  freeIList(list);
}

void test_clearIList(void) {
  IList* list = newIList();
  appendToIList(list, 31);
  appendToIList(list, 98);

  TEST_CHECK(list->size == 2);
  TEST_CHECK(list->head != NULL);

  clearIList(list);

  TEST_CHECK(list->size == 0);
  TEST_CHECK(list->head == NULL);
  TEST_CHECK(list->tail == NULL);

  freeIList(list);
}

void test_newIArrayFromIList(void) {
  IList* list = newIList();

  TEST_ASSERT(list != NULL);

  int64_t* arr = newIArrayFromIList(list);

  TEST_ASSERT(arr != NULL);

  free(arr);
  freeIList(list);
}

void test_appendToIList(void) {
  size_t i;
  IList* list = newIList();
  int64_t arr[3] = {32, 83, 76};

  TEST_ASSERT(list != NULL);

  for (i = 0; i < 3; ++i)
    appendToIList(list, arr[i]);

  i = 0;
  IListNode* currNode = list->head;
  while (currNode != NULL) {
    TEST_CHECK(arr[i++] == currNode->data);
    currNode = currNode->next;
  }

  freeIList(list);
}
