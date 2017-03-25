#ifndef __DINAMICA_H__
#define __DINAMICA_H__

void reservar_espacio(registro *anime, int *temporadas){

        for(int i=0; i<=*temporadas; i++){
	                anime->vistas_total[i] = (SeriesAnual *)malloc(sizeof(SeriesAnual));
	                anime->favoritas[i] = (SeriesAnual *)malloc(sizeof(SeriesAnual));
	        }
}
void liberar_espacio(registro *anime,int *temporadas){

        for(int i=0; i<=*temporadas; i++){
	                free(anime->vistas_total[i]);
	                free(anime->favoritas[i]);
	        }

}

#endif
