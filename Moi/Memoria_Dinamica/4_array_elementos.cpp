#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int *p_array,numeros;

	printf("Cuantos numeros quieres almacenar? ");
	scanf("%i",&numeros);

	srand(time(NULL));
	
	p_array = (int *)malloc(sizeof numeros);

	for(int i=0; i<numeros; i++){
		printf("%i\n",p_array[i] = rand() % numeros);
	}
	


	
	

	return EXIT_SUCCESS;

}
