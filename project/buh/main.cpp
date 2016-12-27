#include <iostream>
#include "db.h"
#include "progger.h"
using namespace std;

main() {
  Progger *pr1 = new Progger((char *)"test", (char *)"prj_test", 4, 2000);
  Progger *pr2 = new Progger((char *)"test2", (char *)"prj_test", 6, 2001);
  // cout << pr1->calculate();
  DB base;
  base.add(pr1);
  base.add(pr2);
  cout << base.calculate_all();
  // Progger *pr1 = new Progger("test", "prj_test", 4);
  //  Worker *wo = new Worker((char *)"fdf");
  return 0;
}
