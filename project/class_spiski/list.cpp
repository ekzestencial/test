#include "list.h"
list::list(int value) {
  myValue = value;
  myNext = 0;
}
void list::addValue(int value) {
  list *current = this;
  while (current->myNext != 0) {
    current = current->myNext;
  }
  current->myNext = new list(value);
}
int list::length() {
  int counter = 0;
  for (list *current = this; current != 0; current = current->myNext) {
    counter++;
  }
  return counter;
}
void list::test() { cout << "list"; }
