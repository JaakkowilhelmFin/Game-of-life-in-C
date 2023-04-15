/***************************************************************************
 *   Copyright (C) $2023$ by $Koskela Jaakko$   *
 *   $koskela63z@gmail.com$   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*********************************************************************

 1.  NAME
     game of life version 1.0

 2.  DESCRIPTION
     game of life simple version

 3.  VERSIONS
       Original:
         1.0.2023 / Jaakko Koskela

       Version history:
        1.0 
**********************************************************************/

/*-------------------------------------------------------------------*
 *    HEADER FILES                                                    *
 *--------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*-------------------------------------------------------------------*
 *    GLOBAL VARIABLES AND CONSTANTS                                  *
 *--------------------------------------------------------------------*/
/* Control flags */

/* Global constants */
#define ROWS 9
#define COLS 9

/* Global variables */
#define DEAD 0
#define ALIVE 1

/* Global structures */
struct cell
 {

 int current; /* current situation, which is visible on screen */

 int future; /* temporary calculation area for next round calculation */

 };
/*-------------------------------------------------------------------*
 *    FUNCTION PROTOTYPES                                             *
 *--------------------------------------------------------------------*/
int init_gameboard(struct cell board[ROWS][COLS]);
void read_gameboard(struct cell board[ROWS][COLS]);
int count_neighbors(struct cell board[ROWS][COLS]);
int update_gameboard(struct cell board[ROWS][COLS]);
void print_gameboard(struct cell board[ROWS][COLS]);

/*********************************************************************
 *    MAIN PROGRAM                                                      *
 **********************************************************************/
int main() 
{
  struct cell board[ROWS][COLS];
  init_gameboard(board);
  read_gameboard(board);
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

/*********************************************************************
 *    FUNCTIONS                                                       *
 **********************************************************************/

/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: init_gameboard();
 DESCRIPTION: gives an array of the game (board)
    Input: all are zeroes. 
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/
 int init_gameboard(struct cell board[ROWS][COLS])
{
  int i; 
  int j; 
  for(i =0; i < ROWS; i++)
  {
    for(j=0; j < COLS; j++)
    {
        board[i][j].current = 0 ;
        board[i][j].future = 0; 
        
    }
  }
}
/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: read_gameboard()
 DESCRIPTION: reads game from file
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/
void read_gameboard(struct cell board[ROWS][COLS])
{
  FILE *fp = fpoen("gameoflife", "r");
  char state_c;
  int state, c, r;
  
  fclose(fp);
}
/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: int count_neighbors()
 DESCRIPTION: counts the neighbors
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/
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
      else
      {
        count++;
      }
    }
  }
  return count;
}
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
int update_gameboard(struct cell board[ROWS][COLS])
{
int i, j; 
  int neigborhood = count_neighbors(board, i, j);
  for(i = 0;i <= ROWS ; i++)
  {
    for (j = 0; j <= COLS; j++)
    {
      switch(board[ROWS][COLS])
      {
        case ALIVE:
          if(neighborhood < 2 || neighborhood > 3)
          {
            board[][] = DEAD;
          }
          else
          {
            board[][] = ALIVE;
          }
          break;

        case DEAD:
          if( neigborhood == 3)
          {
            board[][] = ALIVE;
          }
          else
          {
            board[][] = DEAD;
          }
          break;

        default: 
          printf("invalid operation. something went wrong");
      }
    }
  }
}
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
void print_gameboard(struct cell board[ROWS][COLS])
{
  
}