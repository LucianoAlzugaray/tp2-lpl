/* 
	File: unitTest.c
	Descripcion: modulo UnitTest para testear funcionalidades.
	Autor: Luciano Alzugaray
	Fecha: 27/04/2017
*/

#include "unitTest.h"
#include <stdio.h>

void unitTest(tPrueba *pruebas, int cantPruebas){
	int i;
	int todoCorrecto = 1;
	for (i = 0; i < cantPruebas; i++){
		tPrueba prueba;
		prueba = pruebas[i];
		if(prueba() == PUNTO_CORRECTO)
			printf("¡Punto %d correcto!\n", i + 1);
		else{
			todoCorrecto = 0;
			printf("¡Punto %d incorrecto! REHACER\n", i + 1);
		}
	}
	if (todoCorrecto){
		printf("Trabajo terminado!\n");
	}
}