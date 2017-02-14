#include <stdio.h>
#include <stdlib.h>

int main(){

int primero =0;
int segundo =0;
int intercambiador =0;

	printf("Primer número ");
	scanf (" %i",&primero);

	printf("Segundo número ");
	scanf (" %i",&segundo);

	intercambiador += primero ;
	primero = 0;

	primero += segundo ;
	segundo =0;

	segundo += intercambiador ; 

	printf("Primer número %i \nSegundo número %i\n",primero,segundo);


   

    return EXIT_SUCCESS;
}
