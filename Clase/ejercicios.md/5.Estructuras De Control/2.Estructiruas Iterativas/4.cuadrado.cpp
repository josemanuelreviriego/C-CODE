#include <stdio.h>
#include <stdlib.h>

int main(){

int tamano;
int vueltas =0;

	printf("tamaño \n");
	scanf(" %i",&tamano);

while(vueltas<tamano){

		for(int i=0; i<tamano; i++){
			printf("\t* ");
		}

	printf("\n\n\n");
	vueltas++;
}
	


    return EXIT_SUCCESS;
}
