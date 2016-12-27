#include "doublelist.h"
Doublelist::Doublelist(int value) : list(value) { myPrevious = 0; }
void Doublelist::addValue(int value) {
  Doublelist *current = this;
  while (current->myNext != 0) {
    //  current = current->myNext;
    current = (Doublelist *)current->myNext;
  }
  current->myNext = new Doublelist(value);
  ((Doublelist *)current->myNext)->myPrevious = current;
}
void Doublelist::test() { cout << "doublelist"; }
