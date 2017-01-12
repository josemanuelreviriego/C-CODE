#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;
int resto = 0;

	printf("Número ");
	scanf(" %i",&numero);

	for(int i=2; i<numero; i++){
	
	if(numero%i == 0){

		printf("El numero tiene divisores\n");
		return EXIT_SUCCESS;
	}

	resto = resto+(numero%i);
	if(resto>0){

		printf("El numero no tiene divisores\n");
		return EXIT_SUCCESS;
	}

	}

	if(numero == 1)
		printf("El numero 1 solo se puede dividir por si mismo\n");
	if(numero == 2)
		printf("El numero 2 solo se puede dividir por 1 y 2\n");

    return EXIT_SUCCESS;
}
