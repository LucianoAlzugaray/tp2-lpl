/* 
	File: main.c
	Autor: Luciano Alzugaray
	Fecha: 27/04/2017
*/

#include <stdio.h>
#include "swap.h"

/* DEFINICIONES */
#define PUNTO_CORRECTO 1
#define PUNTO_INCORRECTO 0

typedef int (*tPrueba)();

/* DECLARACIONS DE FUNCIONES */
int pruebaSwapInt();
int pruebaSwap();

tPrueba pruebas[] = {pruebaSwapInt,pruebaSwap};

int cantPruebas = 2;

int main(int argc, char argv[]){
	int i;
	for (i = 0; i < cantPruebas; i++){
		int (*prueba)(void);
		prueba = pruebas[i];
		if(prueba() == PUNTO_CORRECTO)
			printf("¡Punto %d correcto!\n", i + 1);
		else
			printf("¡Punto %d incorrecto! REHACER\n", i + 1);
	}
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