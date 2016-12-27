#ifndef BOARDVIEW_H_
#define BOARDVIEW_H_
#include "board.h"
#include<iostream>
using namespace std;
class BoardView{
private:
Board *board;
void show();
public:
void start_Game();
BoardView(Board *b);
};
#endif
