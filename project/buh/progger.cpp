#include "progger.h"
Progger::Progger(char *_name, char *_project, int _level, int _sale)
    : Worker(_name, _sale) {
  int l = strlen(_project);
  project = new char[l + 1];
  strcpy(project, _project);
  level = _level;
}
Progger::~Progger() { delete[] project; }
int Progger::calculate() {
  int salary = 2000 + level * 400 + copyies * 10;
  return salary;
}
