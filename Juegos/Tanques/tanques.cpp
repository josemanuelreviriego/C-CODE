#include <stdio.h>
#include <stdlib.h>

#define SEGUNDA_VELOCIDAD 1
#define DIFERENCIA 2.0


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

	tiempo_2 = tiempo_1 + SEGUNDA_VELOCIDAD;
	velocidad_2 = velocidad + DIFERENCIA;

	aceleracion = (tiempo_1 - tiempo_2) / (velocidad_2 - velocidad);



	printf("la diferencia en 1 segundo es %lf",aceleracion);

	return EXIT_SUCCESS;

}
