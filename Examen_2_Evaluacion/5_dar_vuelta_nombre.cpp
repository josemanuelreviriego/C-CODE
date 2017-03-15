#include <stdio.h>
#include <stdlib.h>

void cambiar(char nombre[],char vuelta[],int *cantidad){

	
	for (int i=0; i<*cantidad; i++){

		nombre[i] = vuelta[(*cantidad)--];
	
	
	}

	printf("%s",nombre);

}


int main (){

	char nombre[] = "Me llamo Jose Manuel";

	char *vuelta = NULL;

	int cantidad;

	cantidad = (sizeof(nombre))-2;

	vuelta = (char *)malloc(sizeof(nombre));

	for(int i=0; i<sizeof(nombre); i++){
	
		vuelta[i] = nombre[i];
	
	}

	


	cambiar(nombre,vuelta,&cantidad);
	
	free(vuelta);




	return EXIT_SUCCESS;

}
