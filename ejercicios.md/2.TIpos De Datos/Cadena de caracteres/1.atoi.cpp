#include <stdio.h>
#include <stdlib.h>

int main(){

char dni[9];
int dni_entero;

	printf("Numero DNI= ");
	scanf(dni" %s",dni);
	
	printf("Letra DNI= ");
	dni_entero=atoi(dni);

	printf("%i",dni_entero);
    return EXIT_SUCCESS;
}
