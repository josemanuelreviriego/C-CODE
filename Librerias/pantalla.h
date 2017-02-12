//Pantalla de Inicio

#include <stdio.h>
#include <stdlib.h>

#define X 6
#define Y 6

void rellenar(char tablero[Y][X]){


	
	for (int y = 0; y<Y; y++){
		for (int x = 0; x<X; x++){
			if(y == 0 || y == Y-1)
				tablero[y][x] = '+';
			else
				if (x == 0 || x == X-1)

				tablero[y][x] = '-';
			else
				tablero[y][x] = ' ';
	
		}

	}


}
void dibujar(char tablero[Y][X]){


	for (int y= 0; y<Y; y++){
		for (int x= 0; x<X; x++){
			printf("%c ",tablero[y][x]);
		}

		printf("\n");
	}

}

int pantalla_inicio (){

	char tablero [Y][X];

	rellenar (tablero);
	dibujar (tablero);


	return EXIT_SUCCESS;
}
