#include "board.h"
const int Board::FIELD_SIZE = 10;
Board::Board() {
  b = new int*[FIELD_SIZE];
  for (int i = 0; i < get_Size(); i++) {
    b[i] = new int[FIELD_SIZE];
  }
  for (int i = 0; i < get_Size(); i++) {
    for (int i = 0; i < get_Size(); i++) {
      b[i][i] = 0;
    }
  }
}
Board::~Board() {
  for (int i = 0; i < get_Size(); i++) {
    delete[] b[i];
  }
  delete[] b;
}
int Board::get_Size() { return Board::FIELD_SIZE; }
void Board::make_Move(int x, int y, players p) {
  if (p == ONE) {
    b[x][y] = ONE;
  } else {
    b[x][y] = TWO;
  }
}
int Board::who_Win() {
  for (int i = 0; i < get_Size(); i++) {
    if (b[i][i] == ONE && b[i + 1][i] == ONE && b[i + 2][i] == ONE &&
	b[i + 3][i] == ONE && b[i + 4][i] == ONE) {
      return ONE;
    }
    if (b[i][i] == ONE && b[i][i + 1] == ONE && b[i][i + 2] == ONE &&
	b[i][i + 3] == ONE && b[i][i + 4] == ONE) {
      return ONE;
    }
    if (b[i][i] == ONE && b[i + 1][i + 1] == ONE && b[i + 2][i + 2] == ONE &&
	b[i + 3][i + 3] == ONE && b[i + 4][i + 4] == ONE) {
      return ONE;
    }
    if (b[i][i] == ONE && b[i - 1][i - 1] == ONE && b[i - 2][i - 2] == ONE &&
	b[i - 3][i - 3] == ONE && b[i - 4][i - 4] == ONE) {
      return ONE;
    }
    if (b[i][i] == TWO && b[i + 1][i] == TWO && b[i + 2][i] == TWO &&
	b[i + 3][i] == TWO && b[i + 2][i] == TWO) {
      return TWO;
    }
    if (b[i][i] == TWO && b[i][i + 1] == TWO && b[i][i + 2] == TWO &&
	b[i][i + 3] == TWO && b[i][i + 4] == TWO) {
      return TWO;
    }
    if (b[i][i] == TWO && b[i + 1][i + 1] == TWO && b[i + 2][i + 2] == TWO &&
	b[i + 3][i + 3] == TWO && b[i + 4][i + 4] == TWO) {
      return TWO;
    }
    if (b[i][i] == TWO && b[i - 1][i - 1] == TWO && b[i - 2][i - 2] == TWO &&
	b[i - 3][i - 3] == TWO && b[i - 4][i - 4] == TWO) {
      return TWO;
    }
    // else {
    //     return ANYONE;
    //   }
  }
}
int Board::getcell(int i, int j) { return b[i][j]; }
