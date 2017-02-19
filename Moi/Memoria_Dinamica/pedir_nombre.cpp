#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main (){
	
	char cadena[MAX],*p_cadena;
	


	printf("Cadena ");
	scanf(" %s",cadena);

	p_cadena = (char *)malloc((strlen(cadena)+1)*sizeof(char));
	strcpy(p_cadena,cadena);
	


	printf("%s",p_cadena);

	free(p_cadena);

	return EXIT_SUCCESS;

}
