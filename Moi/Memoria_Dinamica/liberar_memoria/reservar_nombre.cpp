#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main (){

	char nombre[MAX],*p_nombre;

	printf("Nombre ");
	scanf(" %s",nombre);

	p_nombre = (char *)(malloc(strlen(nombre) + 1 ));
	strcpy(p_nombre,nombre);

	printf("%s",p_nombre);

	free(p_nombre);

	return EXIT_SUCCESS;

}
