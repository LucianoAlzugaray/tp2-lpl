/* 
	File: unitTest.h
	Descripcion: Cabecera del modulo UnitTest.
	Autor: Luciano Alzugaray
	Fecha: 27/04/2017
*/


/* DEFINICIONES */
#define PUNTO_CORRECTO 1
#define PUNTO_INCORRECTO 0

typedef int (*tPrueba)();
void unitTest(tPrueba *pruebas, int cantPruebas);