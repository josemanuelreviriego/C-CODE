#include <stdio.h>
#include <stdlib.h>

int main (){

	char almacenar;
	FILE *f;

	f = fopen("ejercicio.txt","r");

	while(almacenar != EOF){
	
		almacenar = fgetc(f);
		printf("%c",almacenar);
	}
	printf("\n");

	fclose(f);

	return EXIT_SUCCESS;

}
