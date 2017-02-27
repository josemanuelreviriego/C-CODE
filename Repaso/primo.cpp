#include <stdio.h>
#include <stdlib.h>

#define NO_PRIMO 0
#define PRIMO 1

bool comprobar_numero(int *numero){

	int no_primo = 0;

	for(int divisor=1; divisor<=*numero; divisor++){
	
		if(*numero % divisor == 0)
			no_primo+=1;
		if(no_primo>2)
			return NO_PRIMO;

	}

	return PRIMO;

}

int main (){

	int numero;

	printf("Numero \n");
	scanf(" %i",&numero);

	printf("Tu numero %ses primo\n",comprobar_numero(&numero)?"":"no ");

	return EXIT_SUCCESS;

}
