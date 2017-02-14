//SABER SI UN NÚMERO ES PAR

#include <stdio.h>
#include <stdlib.h>

#define PRIMO 1
#define NO_PRIMO 0


bool es_perfecto(int n);

int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	printf("%i %s perfecto.\n",numero,es_perfecto(numero)? "es " : "no es");

	return EXIT_SUCCESS;

}

bool es_perfecto(int n){

	int pos_perfecto = 0;

	for (int divisor = 1; divisor<n; divisor++ ){

		if (n % divisor == 0)

			pos_perfecto += divisor;

		else

			pos_perfecto +=0;
	}

	if (pos_perfecto == n)
		return PRIMO;
	if (pos_perfecto != n)
		return NO_PRIMO;



}

