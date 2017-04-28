#include "unitTest.h"
#include <stdio.h>

void unitTest(tPrueba pruebas*, int cantPruebas){
	int i;
	for (i = 0; i < cantPruebas; i++){
		tPrueba prueba;
		prueba = pruebas[i];
		if(prueba() == PUNTO_CORRECTO)
			printf("¡Punto %d correcto!\n", i + 1);
		else
			printf("¡Punto %d incorrecto! REHACER\n", i + 1);
	}
}