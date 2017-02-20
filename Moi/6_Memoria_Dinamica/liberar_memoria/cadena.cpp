#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main (){

	char cadena[MAX],*p_cadena;

	printf("Dame tu cadena");
	scanf(" %s",cadena);

	p_cadena = (char *)malloc(strlen(cadena)+1);

	strcpy(p_cadena,cadena);

	printf("%s",p_cadena);

	free(p_cadena);

	return EXIT_SUCCESS;

}
