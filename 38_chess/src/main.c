#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"

int is_empty (int row, int col, char board[SIZE][SIZE]);
int tower_check (int row, int col, char board[SIZE][SIZE]);

int
main (int argc, char *argv[])
{
  char chess_board[SIZE][SIZE];
  int row, col;



  do
    {
    	    system("clear");
      load (BOARD_FN, chess_board);//Lista
      dump (chess_board); //Lista
      do
	{
	  ask_coordinates (&row, &col, "torre"); //Lista
	}
      while (!is_empty (row, col, chess_board)); //Lista
      tower_check (row, col, chess_board); //Lista
      dump (chess_board); //Lista
    }
  while (repeat ());//Lista


  return EXIT_SUCCESS;
}

int
is_empty (int row, int col, char board[SIZE][SIZE])
{
	if(board[row][col] == ' '){

		board[row][col] = '*';
		return 1;

	}

	else
		printf("Esta ocupado\n");
		return 0;
}

int
tower_check (int row, int col, char board[SIZE][SIZE])
{
	int filas;
	int columnas;

	for(filas = 0; filas<SIZE; filas++){
		for(columnas = 0; columnas<SIZE; columnas++){

			if(board[filas][col] == board[filas][columnas])
				printf("\t\t\tPuedes comer arriba\n");

		}
	}



	

}
