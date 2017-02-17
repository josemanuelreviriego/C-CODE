#include <stdio.h>
#include <stdlib.h>


void dar_vuelta(int numero){

	printf("%i",numero%10);

	if(numero>10)
		dar_vuelta(numero/10);

}


int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	dar_vuelta(numero);
	printf("\n");


	return EXIT_SUCCESS;

}
