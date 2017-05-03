#include <stdlib.h>
#include <stdio.h>

typedef struct{

	char letra;
	int *numero;
	int **mas;

}DatosPersona;



int main(){

	int favorito = 10;
	DatosPersona fernando;
		fernando.numero = &favorito;
		fernando.mas = &fernando.numero;
		
	printf("%p\n",fernando.numero);
	printf("%p\n",*fernando.mas);
	



	return EXIT_SUCCESS;
}

