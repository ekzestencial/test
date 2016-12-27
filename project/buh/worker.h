#ifndef WORKER_H
#define WORKER_H
#include <cstring>
class Worker {
  protected:
  char *name;
  int copyies;

  public:
  Worker(char *, int);
  virtual int calculate() = 0;
  virtual ~Worker();
  // int test();
};
#endif
