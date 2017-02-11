#include <stdio.h>
#include <stdlib.h>

#define VERTICAL 30
#define HORIZONTAL 80


int main (){

	char tablero [VERTICAL][HORIZONTAL];

	system ("clear");

	for (int i = 0; i<VERTICAL; i++){
		for( int j = 0; j<HORIZONTAL; j++){

			if (i == 0 || i == VERTICAL - 1)
				tablero[VERTICAL][HORIZONTAL] = '*';
			else if (j == 0 || j == HORIZONTAL -1)	
				tablero[VERTICAL][HORIZONTAL] = '*';
			else
				tablero[VERTICAL][HORIZONTAL] = ' ';
			
			printf("%c ",tablero[VERTICAL][HORIZONTAL]);

		}
	printf("\n");


	}









	return EXIT_SUCCESS;

}
