#include <stdio.h>
#include <stdlib.h>

int main (){

	int a = 5;
	int b = 6;
	int c = 7;
	int d = 8;

	int prueba;

	prueba = (a>b) ? a+b : d;

	/*Esto equivale a 
	if (a>b)
		prueba = a+b;
	else
		prueba = d;

	*/
	printf("%i\n",prueba);




	return EXIT_SUCCESS;

}
