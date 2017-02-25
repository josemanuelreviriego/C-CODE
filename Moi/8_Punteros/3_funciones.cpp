#include <stdio.h>
#include <stdlib.h>



void tercero(int *c){

      	printf("El numero en la funcion c es %i \n",*c);

}

void segundo(int *b){

      	printf("El numero en la funcion b es %i\n",*b);
	tercero(b);

}

void primero(int *a){

      	printf("El numero en la funcion a es %i\n",*a);
	segundo(a);

}

int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	primero(&numero);

	return EXIT_SUCCESS;

}
