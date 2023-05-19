/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: int count_neighbors()
 DESCRIPTION: counts the neighbors
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
/*********************************************************************/
#include "header.h"
int count_neighbors(struct cell board[ROWS][COLS], int row, int col)
{
  int count= 0;
  int i;
  int j; 

  for(i = -1; i <= 1; i++)
  {
    for( j= -1; j <= 1; j++)
    {
      if ( i != 0 || j !=0)
      {
        count = count + 0;
      }
      else if (board[i+row][j+col].current == 1)
      {  
        count++;
      }
    }

  }
  return count;
}
/*********************************************************************/