#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 15
#define CANTIDAD(x) (sizeof( (x) ) / sizeof (char *)-1)


const char *palabras[]={
	"vegeta",
	"goku",
	"gotenks",
	"bills",
	"rem",
	"emilia",
	"gabriel",
	"saitama",
	NULL
};

int main(int argc, char *argv[]){

const char *elegida;
char adivina[MAX];
int random;
char letra[1];
int intentos=0;

	srand(time(NULL));
	random = rand() % CANTIDAD(palabras);
	elegida = palabras[random];

	bzero(adivina,MAX);

// Imprimir palabra _ _ _ _ 

	printf("\n\t\t\t");

	for (int i=0; i<(int) strlen(elegida); i++){
		adivina[i] ='_';
		printf("%c ",adivina[i]);
	}
	
	printf("\n\n\n");

//pedir letra y comprobarlas

	do{
		printf("\t\t\t\t\t\tIntento nº %i letra introducida= %c\n\n\n",intentos,letra[0]);
		printf("Letra ");
		scanf(" %c",letra);

		printf("\n\t\t\t");

			for (int i=0; i<(int) strlen(elegida); i++){

				//comprobar letras
				
				if(elegida[i]==letra[0]){
					adivina[i]=letra[0];
				 }

				printf("%c ",adivina[i]);
			
				//En teoria resta las vidas pero suma los fallos de las letras que faltan
				/*if(elegida[i]!=letra[0]){
					intentos+=1;
				 }
				*/

			}
		
		printf("\n\n\n");
	
	
		intentos++;
	}
	while(intentos>=0);





    return EXIT_SUCCESS;
}
