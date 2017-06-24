/*

	TABLERO.CPP

*/
#include "tablero.h"



void pintar_fila(int f, int w, int puntas_izquierda, int puntas_centros, int cfin, bool space,int *posicion_y,int *posicion_x){

        int vl = 1 + 2 * VSPACE + 1;
        mvaddch(*posicion_y+vl*f, *posicion_x, puntas_izquierda);
	


        for(int c=0; c<w-1; c++){

	            for (int r=0; r<HSPACE*2; r++)
	                addch(ACS_HLINE);
	            addch(puntas_centros);

	}

        for (int r=0; r<HSPACE*2; r++)
            addch(ACS_HLINE);

        addch(cfin);

	if (space){

		for(int rv=0; rv<1+VSPACE*2; rv++){

			mvaddch(*posicion_y+vl*f+1+rv, *posicion_x, ACS_VLINE);
			for(int c=0; c<w; c++){

				for (int r=0; r<HSPACE*2; r++)
					addch(' ');
					addch(ACS_VLINE);

			}
		}
	}



}
void pintar_tablero(int *y,int *x){


	attron(COLOR_PAIR(3));

		pintar_fila(0, MAX_MUROS, ACS_ULCORNER, ACS_TTEE, ACS_URCORNER, true,y,x);


		for (int i=1; i<MAX_MUROS; i++)
			pintar_fila(i, MAX_MUROS, ACS_LTEE, ACS_PLUS, ACS_RTEE, true,y,x);

	
		pintar_fila(MAX_MUROS, MAX_MUROS, ACS_LLCORNER, ACS_BTEE, ACS_LRCORNER, false,y,x);

	attroff(COLOR_PAIR(3));
		
}

void numeros_tablero(int y,int x,char adaptar[NO_MOSTRAR][NO_MOSTRAR]){

        int adaptar_fila =3;
        int adaptar_columna = 1;

        for(int fila=0; fila<NO_MOSTRAR;fila++){
	
	                adaptar_columna = 5;
	
	                for(int columna=0; columna<NO_MOSTRAR; columna++){
							
				mvprintw(y+adaptar_fila,x+adaptar_columna,"%c",adaptar[fila][columna]); //00
				adaptar_columna+=11;
			
						
			}
	
	                adaptar_fila +=6;


	}

        refresh();

}



