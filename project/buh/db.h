#ifndef DB_H
#define DB_H
#include "worker.h"
class DB {
  private:
  Worker *workers[100];
  static int num;
  int sum;

  public:
  void add(Worker *);
  int calculate_all();
};
#endif
