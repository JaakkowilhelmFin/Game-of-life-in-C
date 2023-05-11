/*********************************************************************
 *    MAIN PROGRAM                                                      *
 **********************************************************************/
#include "header.h"
int main() 
{
  struct cell board[ROWS][COLS];
  init_gameboard(board);
 /* read_gameboard(board); */
  int i =0; 
  print_gameboard(board);
  for (i; i < 10; i++) 
  {
    update_gameboard(board);
    print_gameboard(board);
  }
  return 0;
}
/* end of main */