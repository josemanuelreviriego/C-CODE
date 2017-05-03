#include <stdlib.h>
#include <stdio.h>

typedef struct{

	int numero;
	char letra;

}DatosPersona;

DatosPersona *ReservarMemoria(){

	DatosPersona *dar_memoria = (DatosPersona *)malloc(sizeof(DatosPersona));
		dar_memoria->numero = 5;
		dar_memoria->letra = 'c';

	printf("dar %p\n",dar_memoria);

	return dar_memoria;

}

int main(){

	DatosPersona *fernando;
		fernando = ReservarMemoria();
	DatosPersona *xavier;
		xavier = ReservarMemoria();

	printf("%p\n",fernando);
	printf("%p\n",xavier);
		



	printf("%c\n",fernando->letra);
	printf("%i\n",fernando->numero);
	



	return EXIT_SUCCESS;
}

