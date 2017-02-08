#include <stdio.h>
#include <stdlib.h>

int max (int a, int b);


int main (){

	int numero_1,numero_2;
	int mayor;

	printf("Dime el primer numero \n");
	scanf(" %i",&numero_1);

	printf("Dime el segundo numero \n");
	scanf(" %i",&numero_2);

	mayor = max(numero_1,numero_2);
	
	printf("El mayor es %i\n",mayor);

	return EXIT_SUCCESS;

}

int max (int a, int b){
	return (a>b)?a:b;
}
