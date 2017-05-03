#include <stdlib.h>
#include <stdio.h>

int main(){


	int numeros [6] = {1,2,3,4,5,6};

	for(int i=0;i<=6;i++){

		if(i>0)
			printf("%i",*numeros);
		*numeros = numeros[i];

	}
	


	return EXIT_SUCCESS;
}

