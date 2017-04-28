/* 
	File: main.c
	Autor: Luciano Alzugaray
	Fecha: 27/04/2017
*/

#include <stdio.h>
#include "swap.h"
#include "unitTest.h"

/* DECLARACIONS DE FUNCIONES */
int pruebaSwapInt();
int pruebaSwap();

tPrueba pruebas[] = {&pruebaSwapInt,&pruebaSwap};

int cantPruebas = 2;

int main(int argc, char argv[]){
	unitTest(pruebas, cantPruebas);	
}

int pruebaSwapInt(){
	int a = 1;
	int b = 4;	

	swapInt(&a,&b);	
	
	if((a == 4) && (b == 1))
		return PUNTO_CORRECTO;
	
	return PUNTO_INCORRECTO;
}

int pruebaSwap(){
	struct Estructura a{ int x = 5, int y = 10};
	struct Estructura b{ int x = 40, int y = 30};
	
	swap(&a, &b, sizeof(struct Estructura));

	if((a.x == 40) && (b.x == 5) && (a.y == 30) && (b.y == 10))
		return PUNTO_CORRECTO;	
	return PUNTO_INCORRECTO;
}