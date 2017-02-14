#include <stdio.h>
#include <stdlib.h>

#define TIEMPO_S 1
#define DIFERENCIA 0.125


double x_cuad(double x){

	return x*x;

}


int main (){


	double tiempo_1,tiempo_2;
	double velocidad,velocidad_2;
	double aceleracion;
	

	printf("¿x? ");
	scanf(" %lf",&tiempo_1);

	velocidad = x_cuad(tiempo_1);

	tiempo_2 = tiempo_1 + TIEMPO_S;
	velocidad_2 = velocidad + DIFERENCIA;

	aceleracion = (velocidad_2 - velocidad) / ( tiempo_1 - tiempo_2);



	printf("la diferencia en 1 segundo es %lf",aceleracion);

	return EXIT_SUCCESS;

}
