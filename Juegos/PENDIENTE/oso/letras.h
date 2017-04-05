#include "tablero.h"

void preguntar(char *letra){

	do{

		printf("Letra o/s ");
		scanf(" %c",letra);
		

	}while( *letra != 'o' && *letra != 's' );

}

