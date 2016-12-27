#include "progger.h"
Worker::Worker(char *_name, int _sale) {
  int l = strlen(_name);
  name = new char[l + 1];
  strcpy(name, _name);
  name = _name;
  copyies = _sale;
}
// int Worker::test() { return *name; }
Worker::~Worker() { delete[] name; }
