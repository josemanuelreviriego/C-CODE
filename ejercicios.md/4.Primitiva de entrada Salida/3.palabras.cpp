#include <stdio.h>
#include <stdlib.h>

int main(){

char palabras[20];
char palabra1[10];
char palabra2[10];

	printf("Primera palabra ");
	scanf(" %s",palabra1);

	printf("Segunda palabra ");
	scanf(" %s",palabra2);

	sprintf(palabras,"%s %s",palabra1,palabra2);
	printf("Las palabras son: "
		"%s\n",palabras);


    return EXIT_SUCCESS;
}
