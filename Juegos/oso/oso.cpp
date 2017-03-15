#include "tablero.h"
#include "letras.h"

int main (){

	char tablero [MAX][MAX]; // tablero de 4x4 
	char letra = '?'; // Aqui guardare la letra que jugara o/s
	char jugada = '?';  //Aqui guardare el lugar donde pondra su jugada
	int tablero_disponible = false;

	do{

		rellenar(tablero,&letra,&jugada);
		imprimir(tablero);

		preguntar(letra);
		preguntar_jugada(tablero,&jugada);

	}while(tablero_disponible == true);


	return EXIT_SUCCESS;

}
