#include <stdio.h>
#include <stdlib.h>

int main(){

int vector1[2];
int vector2[2];
int formula;


	printf("x1 = ");
	scanf(" %i",&vector1[0]);
	printf("y1 = ");
	scanf(" %i",&vector1[1]);

	printf("x2 = ");
	scanf(" %i",&vector2[0]);
	printf("y2 = ");
	scanf(" %i",&vector2[1]);

	formula= vector1[0]*vector2[0]+vector1[1]*vector2[1];

	printf("producto escalar = %i",formula);

   

    return EXIT_SUCCESS;
}
