#include <iostream>
#include "doublelist.h"
#include "list.h"
using namespace std;

main() {
  list l(5);
  l.addValue(6);
  Doublelist k(6);
  k.addValue(7);
  k.addValue(3);
  //  cout << k.length();
  //  l.test();
  list *l1;
  list *l2 = new Doublelist();
  l1 = l2;
  // Doublelist *l2;
  // l1 = l2;
  // l2 = (Doublelist *)new list();
  l1->test();
  l1 = new list();
  // l2 = (Doublelist *)new list();
  l1->test();
  return 0;
}
