/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: int update_gameboard()
 DESCRIPTION: updates game from future situation to present
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/
#include "header.h"
int update_gameboard(struct cell board[ROWS][COLS])
{
int i, j; 
int neighborhood = count_neighbors(board, i, j);
  for(i = 0;i < ROWS ; i++)
  {
    for (j = 0; j < COLS; j++)
    {
      switch(board[i][j].current)
      {
        case ALIVE:
          if(neighborhood < 2 || neighborhood > 3)
          {
            board[i][j].future = DEAD;
          }
          else
          {
            board[i][j].future = ALIVE;
          }
          break;

        case DEAD:
          if( neighborhood == 3)
          {
            board[i][j].future = ALIVE;
          }
          else
          {
            board[i][j].future = DEAD;
          }
          break;

        default: 
          printf("invalid operation. something went wrong");
      }
    }
  }  

  for(i = 0;i < ROWS ; i++)
  {
    for (j = 0; j < COLS; j++)
    {
      board[i][j].current = board[i][j].future; 
    }
      
  }
}
/*********************************************************************