/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: void print_gameboard()
 DESCRIPTION: prints gameboard to screen
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/
#include "header.h"
void print_gameboard(struct cell board[ROWS][COLS])
{
  int i, j;
    printf("\n");
    for (i = 0; i < ROWS; i++) 
    {
      for (j = 0; j < COLS; j++) 
      {
        if (board[i][j].current == ALIVE) 
        {
          printf("%c", '*');
        } 
        else 
        {
          printf("%c", '.');
        }
      }
        printf("\n");
    }
  printf("\n");
}