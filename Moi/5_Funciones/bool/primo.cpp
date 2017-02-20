#include <stdio.h>
#include <stdlib.h>

#define NO_PRIMO 0
#define PRIMO 1

bool es_primo(int n);


int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	if (numero == 0 | numero == 1)
		printf("Tu numero no es primo");
	else
		printf("Tu numero %ses primo",es_primo(numero)? "" : "no ");

	return EXIT_SUCCESS;
}

bool es_primo(int n){
	
	for (int divisor = 2; divisor<n; divisor++)
		if (n % divisor == 0)
			return NO_PRIMO;
	return PRIMO;
}
