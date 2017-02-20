#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char nombre[20], *p_nombre;
	int longitud;
	
	strcpy(nombre,"Fernando");

	longitud = strlen(nombre);

	p_nombre = (char *)malloc((longitud + 1)*sizeof(char));

	strcpy(p_nombre,nombre);

	printf("%s\n",p_nombre);

	return EXIT_SUCCESS;

}
