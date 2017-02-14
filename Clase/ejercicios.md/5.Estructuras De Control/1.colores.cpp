#include <stdio.h>
#include <stdlib.h>

int main(){

int rojo = 0;
int amarillo = 0;
int azul = 0;
int color;


	for(int i=0; i<3; i++){

	printf("Selecciona 3 colores que lo forman,no puedes repetir colores\n"
		"1.- Rojo\n"
		"2.- Amarillo\n"
		"3.- Azul\n"
		"4.- Ninguno\n");
	scanf(" %i",&color);
	
	if(color == 1)
	rojo = color;
	if(color == 2)
	amarillo = color;
	if(color == 3)
	azul = color;
	}

  	if(rojo)
		if(amarillo)
			if(azul)
				printf("Tu color es Blanco");
			else
				printf("Tu color es Naranja");
		else
			if(azul)
				printf("Tu color es Morado");
			else
				printf("Tu color es Rojo");
	else
		if(amarillo)
			if(azul)
				printf("Tu color es Verde");
			else
				printf("Tu color es Amarillo");
		else
			if(azul)
				printf("Tu color es Azul");
			else
				printf("Tu color es Negro");
    return EXIT_SUCCESS;
}
