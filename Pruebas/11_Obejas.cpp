#include <stdlib.h>
#include <stdio.h>

char preguntar(){

	char r;

	printf("¿Dormido? s/n \n");
	scanf(" %c",&r);

	return r;

}

int dormido(){

	char respuesta = preguntar();

	if(respuesta == 's')
		return true;

	return false;

}

int main(){

	int obejas;

	do{

		if(dormido())
			obejas = not obejas;

	}while(not obejas);

	return EXIT_SUCCESS;

}
