#include <stdio.h>
#include <stdlib.h>
#define base2 2
#define base3 3
#define base4 4
#define base5 5
#define base6 6
#define base7 7
#define base8 8
#define base9 9

int main(){

int base;
int resto;
int numero;

	printf("Numero ");
	scanf(" %i",&numero);

	printf("Selecciona la base\n"
		"2.-Base 2\n"
		"3.-Base 3\n"
		"4.-Base 4\n"
		"5.-Base 5\n"
		"6.-Base 6\n"
		"7.-Base 7\n"
		"8.-Base 8\n"
		"9.-Base 9\n");

	scanf(" %i",&base);
	
	switch(base){
		case base2 :
			while(numero>0){
				printf("%i",numero%2);
				numero/=2;
			}
			printf("\n");
		break;

		case base3 :
			while(numero>0){
				printf("%i",numero%3);
				numero/=3;
			}
			printf("\n");
		break;

		case base4 :
			while(numero>0){
				printf("%i",numero%4);
				numero/=4;
			}
			printf("\n");
		break;

		case base5 :
			while(numero>0){
				printf("%i",numero%5);
				numero/=5;
			}
			printf("\n");
		break;

		case base6 :
			while(numero>0){
				printf("%i",numero%6);
				numero/=6;
			}
			printf("\n");
		break;

		case base7 :
			while(numero>0){
				printf("%i",numero%7);
				numero/=7;
			}
			printf("\n");
		break;

		case base8 :
			while(numero>0){
				printf("%i",numero%8);
				numero/=8;
			}
			printf("\n");
		break;

		case base9 :
			while(numero>0){
				printf("%i",numero%9);
				numero/=9;
			}
			printf("\n");
		break;

		default:
			printf("Adios\n");
		break;
	}
    return EXIT_SUCCESS;
}
