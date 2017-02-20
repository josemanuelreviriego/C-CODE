#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char *memoria;

	memoria = (char *)malloc(sizeof(int));

	*memoria = 97;

	printf("%c\n",*memoria);


	return EXIT_SUCCESS;

}
