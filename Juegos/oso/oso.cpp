#include "tablero.h"
#include "letras.h"

int main (){

	char tablero [MAX][MAX]; // tablero de 4x4 
	char letra = '?'; // Aqui guardare la letra que jugara o/s
	char jugada = '?';  //Aqui guardare el lugar donde pondra su jugada
	int tablero_disponible = MAX * MAX;
	
	do{

		rellenar(tablero,&letra,&jugada); //Meter A-Z y letras jugadas
		imprimir(tablero); //Imprimir A-Z y letras jugadas

		preguntar(&letra);//Preguntar la letra o/s
		preguntar_jugada(tablero,&jugada); //Preguntar posición A-Z

		tablero_disponible--;

	}while(tablero_disponible != false); //Dar vuelta mientras quede disponible A-Z


	return EXIT_SUCCESS;

}
