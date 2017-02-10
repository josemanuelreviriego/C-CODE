#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dni;
	char letra [] = "TRWAGMYPFDXBNJZSQVHLCKE";


	printf ("Introduce tu DNI \n");
	scanf(" %i",&dni);

	printf ("La letra de tu DNI es %c\n", letra [dni % 23]);






   

    return EXIT_SUCCESS;
}
