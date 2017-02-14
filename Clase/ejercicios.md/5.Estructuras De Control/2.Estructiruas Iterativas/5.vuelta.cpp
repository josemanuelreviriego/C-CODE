#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;

	printf("Numero\n");
	scanf(" %i",&numero);

	do{
	printf("%i",numero%10);
	numero/=10;
	}
	while(numero>0);

	printf("\n");


    return EXIT_SUCCESS;
}
