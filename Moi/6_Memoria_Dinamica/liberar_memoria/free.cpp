#include <stdio.h>
#include <stdlib.h>

int main (){

	int *p;

	p = (int *)malloc(sizeof(int));

	*p = 5555;
	printf("con malloc %i\n",*p);

	free(p);

	printf("despues de liberar el espacio%i\n",*p);
	

	return EXIT_SUCCESS;

}
