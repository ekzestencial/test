#include <iostream>
#include "board.h"
#include "boardview.h"
using namespace std;
//
main() {
  Board *b = new Board;
  BoardView v(b);
  v.start_Game();
  return 0;
}
