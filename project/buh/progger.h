#ifndef PROGGER_H
#define PROGGER_H
#include "worker.h"
class Progger : public Worker {
  private:
  int level;
  char *project;

  public:
  int calculate();
  Progger(char *, char *, int, int);
  ~Progger();
};
#endif
