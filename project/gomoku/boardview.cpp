#include "boardview.h"
BoardView::BoardView(Board *b) { board = b; }
void BoardView::show() {
  for (int i = 0; i < board->get_Size(); i++) {
    for (int j = 0; j < board->get_Size(); j++) {
      cout << " " << board->getcell(i, j);
    }
    cout << endl;
  }
}
void BoardView::start_Game() {
  int k1, k2, who_winner;
  show();
  while (true) {
    cout << "Vvedite coordinaty for first player:";
    cin >> k1 >> k2;
    board->make_Move(k1, k2, ONE);
    who_winner = board->who_Win();
    show();
    if (who_winner == ONE) {
      cout << "The winner is the first player\n";
      break;
    }

    cout << "Vvedite coordinaty for second player:";
    cin >> k1 >> k2;
    board->make_Move(k1, k2, TWO);
    who_winner = board->who_Win();
    show();
    if (who_winner == TWO) {
      cout << "The winner is the second player\n";
      break;
    }
  }
}
