#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAX 2

typedef struct fecha{

	int dia;
	int mes;
	int anio;

}fecha_t;


fecha_t *reservar(int *i){

	fecha_t *nueva_fecha[MAX];

		nueva_fecha[*i] = (fecha_t *)malloc(sizeof(fecha_t));

	return nueva_fecha[*i];
}

void preguntar(fecha_t datos[MAX],int *i){

		printf("Dia\n");
		scanf(" %i",&datos[*i].dia);
		
		printf("Mes\n");
		scanf(" %i",&datos[*i].mes);
		
		printf("Anio\n");
		scanf(" %i",&datos[*i].anio);
		
}

void imprimir_fecha(fecha_t *fecha_imprimir,int *i){

	printf("Dia %i - Mes %i - Anio %i\n",fecha_imprimir[*i].dia,
					     fecha_imprimir[*i].mes,
					     fecha_imprimir[*i].anio);

}




int main (){

	fecha_t *fecha[MAX];
	
	//RESERVAR
	for(int i=0;i<MAX;i++)
		fecha[i] = reservar(&i);	
	
	//PREGUNTAR
	for(int i=0;i<MAX;i++)
		preguntar(fecha[i],&i);

	//IMPRIMIR
	for(int i=0;i<MAX;i++)
		imprimir_fecha(fecha[i],&i);


	//PREGUNTAR COMO SE LIBERA






	return EXIT_SUCCESS;

}
