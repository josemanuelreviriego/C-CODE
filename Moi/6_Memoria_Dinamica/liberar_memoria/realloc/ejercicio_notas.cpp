#include <stdio.h>
#include <stdlib.h>

#define NO 0

void imprimir_notas(int *asignaturas,double *media){

	system("clear");

	for (int i=0; i<*asignaturas; i++){

		printf("Nota %i = %.2lf\n",i+1,media[i]);
	}


}

int main (){

	double *media = NULL;
	double nota;
	int asignaturas;
	int respuesta;
	float media_final;

	do{

		//Pedir
		
		asignaturas = 0;
		media_final = 0;

		do{
			printf("Nota ");
			scanf(" %lf",&nota);
		
			if(nota >= 0){

				media = (double *)realloc (media,++asignaturas * sizeof(double));
				media[asignaturas-1] = nota;
			
			}
		
		}while(nota >= 0);

		//Imprimir
		
		imprimir_notas(&asignaturas,media);

		printf("¿Estas de acuerdo con las notas? si = 1 / no = 0 ");
		scanf(" %i",&respuesta);

	}while(respuesta == NO);


	//Media
	
	for(int i=0; i<asignaturas; i++){
	
		media_final += media[i];
			
	}
	
	//Imprimir media
	
	printf("La media es %.2lf\n",media_final/asignaturas);

	free(media);


	return EXIT_SUCCESS;

}
