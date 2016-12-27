#ifndef LIST_H_
#define LIST_H_
#include <iostream>
using namespace std;
class list {
  protected:
  int myValue;
  list *myNext;

  public:
  int length();
  list(int = 0);
virtual  void test();
  virtual void addValue(int);
};
#endif
