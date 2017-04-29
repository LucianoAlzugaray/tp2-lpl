/* 
	File: main.c
	Autor: Luciano Alzugaray
	Fecha: 27/04/2017
*/

#include <stdio.h>
#include "swap.h"
#include "unitTest.h"

#define CANT_PRUEBAS 3

/* DECLARACIONS DE FUNCIONES */
int pruebaSwapInt();
int pruebaSwap();
int pruebaSwapPointer();

tPrueba pruebas[CANT_PRUEBAS] = {pruebaSwapInt, pruebaSwap, pruebaSwapPointer};

int main(int argc, char argv[]){
	unitTest(pruebas, CANT_PRUEBAS);	
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
	struct Estructura {int x; int y; };
	
	struct Estructura a = { 5, 10};
	struct Estructura b = { 40, 30};

	swap(&a, &b, sizeof(struct Estructura));

	if((a.x == 40) && (b.x == 5) && (a.y == 30) && (b.y == 10))
		return PUNTO_CORRECTO;	
	return PUNTO_INCORRECTO;
}


int pruebaSwapPointer(){
	struct Estructura {int x; int y; };
	
	struct Estructura a = { 5, 10};
	struct Estructura b = { 40, 30};

	void *pa = &a;
	void *pb = &b;

	void *paaux = pa;
	void *pbaux = pb; 

	swapPointer(&pa, &pb);

	if(( paaux == pb ) && ( pbaux == pa))
		return PUNTO_CORRECTO;	
	return PUNTO_INCORRECTO;
}