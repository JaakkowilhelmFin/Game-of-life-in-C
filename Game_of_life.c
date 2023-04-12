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

/* Global structures */
struct cell
 {

 int current; /* current situation, which is visible on screen */

 int future; /* temporary calculation area for next round calculation */

 };
/*-------------------------------------------------------------------*
 *    FUNCTION PROTOTYPES                                             *
 *--------------------------------------------------------------------*/
int init_board(board[ROWS][COLS]);
void read_board(board[ROWS][COLS]);
int count_neighbors(board[ROWS][COLS]);
int update_board(board[ROWS][COLS]);
void print_board(board[ROWS][COLS]);

/*********************************************************************
 *    MAIN PROGRAM                                                      *
 **********************************************************************/
int main() 
{
struct cell board[ROWS][COLS];
init_board(board);
read_board(board);

print_board(board);
for (int i = 0; i < 10; i++) 
{
update_board(board);
print_board(board);
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
 NAME: init_board();
 DESCRIPTION: gives an array (board)
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/
 int init_board(board[ROWS][COLS])
{
  int i; 
  int j; 
  for(i =0; i < ROWS; i++)
    {
      for(j=0; j < COLS; j++)
        {
          .current ;
          .future ; 
        }
    }
}
/*********************************************************************
    F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME: 
 DESCRIPTION: 
    Input:
    Output: 
  Used global variables:struct
 REMARKS when using this function:
*********************************************************************/

