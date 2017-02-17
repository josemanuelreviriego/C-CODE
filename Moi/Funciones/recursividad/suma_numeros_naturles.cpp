#include <stdio.h>
#include <stdlib.h>

int suma(int numeros){

	if(numeros == 0)
		return 0;

	if(numeros == 1)
		return 1;

	if(numeros > 1)
		return (numeros + suma(numeros-1));

}


int main (){

	int numeros;

	printf("Cantidad ");
	scanf(" %i",&numeros);

	printf("La suma es %i \n",suma(numeros));


	return EXIT_SUCCESS;

}
