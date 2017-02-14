#include <stdio.h>
#include <stdlib.h>

int main(){

char persona [30];
char nombre [15];
char apellido [15];

	printf("Dime tu nombre ");
	scanf(" %s",nombre);

	printf("Dime tu apellido ");
	scanf("%s",apellido);

	sprintf(persona,"%s %s",nombre,apellido);
	printf("Hola %s\n",persona);

    return EXIT_SUCCESS;
}
