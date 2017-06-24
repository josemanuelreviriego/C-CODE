#include "main.h"

void autor(int y,int x){

	char salir;
	bool ver_autor = true;

	do{

		mvprintw(y,x  ,"Sugerencias - Fernandosilv4c@gmail.com ");
		mvprintw(y+2,x,"     Autor - Fernando Silva Vera     ");
		mvprintw(y+4,x,"       Fecha inicio 05/04/2017");
		mvprintw(y+6,x,"        Fecha fin xx/04/2017");
		mvprintw(y+8,x,"       Github - Github/FSVera ");

		refresh();

	}while(ver_autor);


}
