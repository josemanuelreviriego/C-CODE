#include <stdio.h>
#include <stdlib.h>

int main (){

	int *vector,*nuevo_vector;

	vector = (int *) malloc(3);

	vector[0] = 1;

	vector[1] = 2;

	vector[2] = 3;

	for(int i=0; i<3; i++){
		printf("%i\n",vector[i]);
	}
	
	printf("\n");

	nuevo_vector =(int *) realloc(nuevo_vector,5 * sizeof(int));
	
	vector[0] = 1;

	vector[1] = 2;

	vector[2] = 3;

	vector[3] = 7;

	vector[7] = 55;

	for(int i=0; i<20; i++){
		printf("%i\n",vector[i]);
	}

	return EXIT_SUCCESS;

}
