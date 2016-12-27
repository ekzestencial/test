#include "db.h"
int DB::num = 0;
void DB::add(Worker *w) {
  workers[num] = w;
  DB::num++;
}
int DB::calculate_all() {
  sum = 0;
  for (int i = 0; i < DB::num; i++) {
    sum += workers[i]->calculate();
  }
  return sum;
}
