#include <stdio.h>
#include <stdlib.h>
#define CUADRADO	1
#define CIRCULO		2
#define TRIANGULO	3
#define RECTANGULO 	4
#define ROMBO		5

int main(){

int opciones;
int lado;
int area;
int altura;

	printf("Selecciona una de las 5 opciones\n\n"
		"1.- Cuadrado\n"
		"2.- Circulo\n"
		"3.- Triangulo\n"
		"4.- Rectangulo\n"
		"5.- Rombo\n");

	scanf(" %i",&opciones);		
	
	

		switch(opciones){
			case CUADRADO:

				printf("lado = ");
				scanf(" %i",&lado);
				area=lado*lado;
				printf("area = %i\n",area);		
			break;

			case CIRCULO:

				printf("radio= ");
				scanf(" %i",&lado);
				area=3.14*(lado*lado);
				printf("area = %i\n",area);		
				
			break;

			case TRIANGULO:

				printf("base= ");
				scanf(" %i",&lado);
				printf("altura= ");
				scanf(" %i",&altura);
				area=(lado*altura)/2;
				printf("area = %i\n",area);		

			break;

			case RECTANGULO:

				printf("base= ");
				scanf(" %i",&lado);
				printf("altura= ");
				scanf(" %i",&altura);
				area=(lado*altura);
				printf("area = %i\n",area);
		
			break;
			
			case ROMBO:

				printf("Diametro Mayor= ");
				scanf(" %i",&lado);
				printf("Diamentro Menor= ");
				scanf(" %i",&altura);
				area=(lado*altura)/2;
				printf("area = %i\n",area);

			break;
	
			default: 
				
				printf("Adios");

			break;







}  

    return EXIT_SUCCESS;
}
