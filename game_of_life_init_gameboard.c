#include "header.h"
int init_gameboard(struct cell board[ROWS][COLS])
{
  int i; 
  int j; 
  for(i =0; i < ROWS; i++)
  {
    for(j=0; j < COLS; j++)
    {
        board[i][j].current = DEAD ;
        board[i][j].future = DEAD; 
        
    }
  }
  board[3][7].current = ALIVE;
  board[3][3].current = ALIVE; 
  board[5][7].current = ALIVE;
  board[1][2].current = ALIVE; 
  board[5][5].current = ALIVE;
  board[1][4].current = ALIVE;
  board[6][7].current = ALIVE;
  board[5][8].current = ALIVE;
  board[3][4].current = ALIVE; 
  board[3][5].current = ALIVE;
  board[2][5].current = ALIVE; 
  board[5][4].current = ALIVE;
  board[1][3].current = ALIVE;
  board[1][2].current = ALIVE;
}
/*********************************************************************/