#ifndef BOARD_H_
#define BOARD_H_
enum players { ONE=1, TWO=2,ANYONE=3 };
class Board{
private:
static const int FIELD_SIZE;
int **b;
public:
Board();
~Board();
void make_Move(int , int , players);
int get_Size();
int who_Win();
int getcell(int x,int y);
};
#endif
