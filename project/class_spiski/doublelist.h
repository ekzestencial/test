#include "list.h"
#include<iostream>
using namespace std;

class Doublelist : public list {
  private:
  list *myPrevious;

  public:
  Doublelist(int=0);
  void addValue(int);
void test();
};
