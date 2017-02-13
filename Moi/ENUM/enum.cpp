#include <stdio.h>
#include <stdlib.h>

int main (){

	enum dias {lunes,martes,miercoles,jueves,vieres,sabado,domingo};
	enum dias semana;

	semana = domingo;

	if (semana == 6)
		printf("hola");

	//Le veo más utilidad en base de datos, me puede servir como macros


	return EXIT_SUCCESS;

}
