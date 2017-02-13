//ARRAY DE ESTRUCTURAS -- ESPAÑOL - JAPONES


#include <stdio.h>
#include <stdlib.h>

#define MAX 50
#define PALABRAS 1
#define TRADUCIR 2


typedef struct{

	char jp[MAX];
	char esp[MAX];
	int lleno ;

}traductor;

traductor japon[MAX];


void ceros(){

	for(int i=0; i<MAX;i++)
		japon[i].lleno = 0;

}

void anadir(){

	for (int i = 0; i<MAX; i++){
		if(japon[i].lleno == 0)
			printf("Palabra en JP ");
			fflush(stdin);
			fgets(japon[i].jp,MAX,stdin);

			printf("Palabra en ESP ");
			fflush(stdin);
			fgets(esp[i].jp,MAX,stdin);

			
	}
	}



}

void traducir(){





}



void usuario(){

	int opcion;
	char respuesta;

	do{
		do{
	
			printf("Selecciona una opcion ");
			printf("1.- Añadir palabras ");
			printf("2.- Traducir ");
			scanf(" %i",&opcion);
	
		}while(opcion <1 || opcion >2);

		switch (opcion){
		
			case PALABRAS:
				     anadir();
				     break;

			case TRADUCIR:
				     traducir();
				     break;
		
		}

		printf("¿Deseas hacer algo más? S/N ");
		scanf(" %c",&respuesta);



	}while(respuesta == 'S');


}


int main (){

	usuario();


	ceros();
	return EXIT_SUCCESS;

}


