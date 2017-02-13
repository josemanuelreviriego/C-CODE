#include <stdio.h>
#include <stdlib.h>

int main(){

	int dni;
	int resto;
	resto = 0;

	printf("Introduce tu DNI\n");
	scanf(" %i",&dni);

	resto = dni % 23;

	if (resto == 0)
		printf ("Tu letra es la T\n");

	if (resto == 1)
		printf ("Tu letra es la R\n");

	if (resto == 2)
		printf ("Tu letra es la W\n");

	if (resto == 3)
		printf ("Tu letra es la A\n");

	if (resto == 4)
		printf ("Tu letra es la G\n");

	if (resto == 5)
		printf ("Tu letra es la M\n");

	if (resto == 6)
		printf ("Tu letra es la Y\n");

	if (resto == 7)
		printf ("Tu letra es la F\n");

	if (resto == 8)
		printf ("Tu letra es la P\n");

	if (resto == 9)
		printf ("Tu letra es la D\n");

	if (resto == 10)
		printf ("Tu letra es la X\n");

	if (resto == 11)
		printf ("Tu letra es la B\n");

	if (resto == 12)
		printf ("Tu letra es la N\n");

	if (resto == 13)
		printf ("Tu letra es la J\n");

	if (resto == 14)
		printf ("Tu letra es la Z\n");

	if (resto == 15)
		printf ("Tu letra es la S\n");

	if (resto == 16)
		printf ("Tu letra es la Q\n");

	if (resto == 17)
		printf ("Tu letra es la V\n");

	if (resto == 18)
		printf ("Tu letra es la H\n");

	if (resto == 19)
		printf ("Tu letra es la L\n");

	if (resto == 20)
		printf ("Tu letra es la C\n");

	if (resto == 21)
		printf ("Tu letra es la K\n");

	if (resto == 22)
		printf ("Tu letra es la E\n");






   

    return EXIT_SUCCESS;
}
