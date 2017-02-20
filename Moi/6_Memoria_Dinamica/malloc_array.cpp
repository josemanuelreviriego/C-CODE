#include <stdio.h>
#include <stdlib.h>

#include <time.h>

#define MAX 999999999

int main (){
	
	double *p_array;

	p_array = (double *)malloc(MAX*sizeof(double));
	
	if(p_array == NULL)
		printf("No hay memoria");

	
	else
		srand(time(NULL));
		for(int i=0; i<MAX; i++){
			p_array[i] = rand() % MAX;
			printf("numero %i .- %lf\n",i,p_array[i]);

		
		
		}


	return EXIT_SUCCESS;

}
