//Escribe un programa que intercambie dos números.

#include <stdio.h>
#include <stdlib.h>


void imprime(int *a,int *b){

	printf("El numero a = %i \n",*a);
	printf("El numero b = %i  \n",*b);
}


void intercambia(int *a,int *b){

	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

}

int main (){

	int numero_a;
	int numero_b;
	
	printf("Dame un numero a ");
	scanf(" %i",&numero_a);
	printf("Dame un numero b ");
	scanf(" %i",&numero_b);

	imprime(&numero_a,&numero_b);

	intercambia(&numero_a,&numero_b);

	imprime(&numero_a,&numero_b);


	return EXIT_SUCCESS;

}
