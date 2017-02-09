#include <stdio.h>
#include <stdlib.h>

#define NO_PERFECTO 0
#define PERFECTO 1

bool es_perfecto(int n);


int main (){

	int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	printf("Tu numero %ses perfecto ",es_perfecto(numero) ? "" : "no ");

	return EXIT_SUCCESS;
}

bool es_perfecto(int n){

	int pos_perfecto = 0;

	for(int divisor = 1; divisor<n; divisor++){
		if(n % divisor == 0)
			pos_perfecto += divisor;
		else
			pos_perfecto +=0;
	}

	if (pos_perfecto == n)
		return PERFECTO;
	else	
		return NO_PERFECTO;


}
