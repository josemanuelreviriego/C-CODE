#include <stdio.h>
#include <stdlib.h>

#define NO_PERFECTO 0
#define PERFECTO 1


bool es_perfecto(int *numero){

	int pos_perfecto = 0;

		for(int divisor=1; divisor<*numero; divisor++){
			if(*numero % divisor == 0)
				pos_perfecto += divisor;

		}

	if(pos_perfecto == *numero)

		return PERFECTO;
		
	else 

		return NO_PERFECTO;

}

int main (){

	int numero;

	printf("Numero \n");
	scanf(" %i",&numero);

	printf("Tu numero %ses perfecto\n",es_perfecto(&numero)?"":"no ");


	return EXIT_SUCCESS;

}
