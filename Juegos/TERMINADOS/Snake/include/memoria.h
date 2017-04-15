#ifndef __MEMORIA_H__
#define __MEMORIA_H__

	//Liberias y Estructuras

#include "main.h"



#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	CoorSerp *NuevoCuerpo();
	bool push(CuerpoSerpiente *serpiente,CoorSerp *NuevoCuerpo);
	bool liberar_memoria(CuerpoSerpiente *liberar);

#ifdef __cplusplus
}
#endif

#endif
