#include <stdlib.h>
#include <stdio.h>

#include <string.h>

#define MAX 10


#define ELECCION_CORRECTA 0

#define PIZZA 0
#define ARROZ 1
#define PATATAS 2
#define NULO 3


const char *comida[] = {

	"pizza",
	"arroz",
	"patatas",
	NULL

};


int main(){

	char eleccion [MAX];



	do{

		bzero(eleccion,MAX);


		printf("Escribe una de las siguiente opciones");
		
		for(int i=0; i<NULO; i++){
			printf("\n%s",comida[i]);

			if(i ==(NULO -1))
				printf("\n\n");

		}

		scanf(" %s",eleccion);

		if (strcmp(eleccion,comida[PIZZA]) == ELECCION_CORRECTA)
			break;

		else if (strcmp(eleccion,comida[ARROZ]) == ELECCION_CORRECTA)
			break;

		else if (strcmp(eleccion,comida[PATATAS]) == ELECCION_CORRECTA)
			break;

		else{
			system("clear");
			printf("ESCRIBELO BIEN!,\nescribiste => %s\n\n",eleccion);
		}
		
	}while(true);
	
	printf("Te servimos %s en un momento\n",eleccion);

	return EXIT_SUCCESS;

}
