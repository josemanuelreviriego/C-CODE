#include <stdio.h>
#include <stdlib.h>

int factorial(int numero){

	if(numero == 0)
		return numero;

	if(numero == 1)
		 return numero;
	
	else
		 return (numero*(factorial(numero-1)));


}

int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	printf("El factorial de %i es %i \n",numero,factorial(numero));


	return EXIT_SUCCESS;

}


