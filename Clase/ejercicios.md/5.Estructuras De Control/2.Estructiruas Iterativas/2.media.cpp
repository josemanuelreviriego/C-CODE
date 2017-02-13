#include <stdio.h>
#include <stdlib.h>

int main(){

int notas = 0;
int suma=0;
int asignaturas =1;
int media;

	printf("Para terminar introduce una nota negativa\n");

do{
	printf("Nota %i.- ",asignaturas);
	scanf(" %i",&notas);
	
	if(notas>=0){
	suma+=notas;
	media=suma/asignaturas;
	}
	asignaturas++;
}

while(notas>=0);

	printf("Media = %i\n ",media);


    return EXIT_SUCCESS;
}
