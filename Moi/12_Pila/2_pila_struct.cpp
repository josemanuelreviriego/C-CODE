#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct{

	struct Elementos *siguiente;
	char *nombre;

}elemento;

elemento *ultimo = NULL;

void push(elemento *elemento){

	elemento->siguiente = NULL;

	if(ultimo == NULL)
		ultimo = elemento;
	else{
		elemento->siguiente = ultimo;
		ultimo = elemento;
	
	}

elemento* pop(){
	if(ultimo == NULL)
		return NULL;
	elemento* elemento_retorno = ultimo;
	ultimo = elemento_retorno->siguiente;

	return elemento_retorno;

}

}


int main (){

	elemento* uno = malloc(sizeof(elemento));
	elemento* dos = malloc(sizeof(elemento));
	elemento* tres = malloc(sizeof(elemento));

	uno->nombre = "Programacion";
	dos->nombre = "Bases";
	tres->nombre = "Entornos";

	agregar(uno);
	agregar(dos);
	agregar(tres);

	elemento* i = extraer();


	while(i != NULL){
	
		i=extraer();
		printf("%s\n,i");
		
	
	}




	return 0;
}
