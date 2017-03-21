#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int fila;
	int columna;

}TCoordenadas;

TCoordenadas cambiar_xy(int x, int y){

	TCoordenadas cambiar;

	cambiar.fila = 2*x;
	cambiar.columna = 2*y;

	printf("x = %i\n",cambiar.columna);
	printf("y = %i\n",cambiar.fila);
	
}

int main (){


	TCoordenadas coor;

	int impimir;
	coor.fila;
	coor.columna;

	printf("Fila ");
	scanf(" %i",&coor.fila);

	printf("Columna ");
	scanf(" %i",&coor.columna);


	cambiar_xy(coor.fila,coor.columna);

	

	return EXIT_SUCCESS;

}
