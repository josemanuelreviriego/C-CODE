#include <stdio.h>
#include <stdlib.h>

int fibonnaci(int numeros){

	if(numeros <= 1)
		return numeros;
	else
		return (fibonnaci(numeros-1)+fibonnaci(numeros-2));

}

int main (){

	int numeros = 1;

	printf("Numeros a imprimir ");
	scanf(" %i",&numeros);

	for(int i=0 ; i<numeros; i++)	
		printf("%i ",fibonnaci(i));
	
	printf("\n");
	return EXIT_SUCCESS;

}
