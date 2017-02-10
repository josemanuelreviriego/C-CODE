//SABER SI UN NÚMERO ES PAR

#include <stdio.h>
#include <stdlib.h>

#define PRIMO 1
#define NO_PRIMO 0


bool es_primo(int n);

int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	printf("%i %s primo.\n",numero,es_primo(numero)? "es " : "no es");

	return EXIT_SUCCESS;

}

bool es_primo(int n){

	for (int divisor = 2; divisor<n; divisor++){
		if (n % divisor == 0)
			return NO_PRIMO;
	}
	return PRIMO;


}

