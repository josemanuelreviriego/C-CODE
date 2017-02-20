#include <stdio.h>
#include <stdlib.h>

void binario(int numero){

	if(numero > 1)	
		binario(numero/2);

	printf("%i",numero%2);
}


int main (){

	int numero;

	do{

		printf("Numero ");
		scanf(" %i",&numero);	
	
	}while(numero < 0);

	binario(numero);

	return EXIT_SUCCESS;

}
