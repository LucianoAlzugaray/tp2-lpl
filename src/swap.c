#include <stdlib.h>
#include "swap.h"

void swapInt(int *pa, int *pb){
	int aux;
	aux = *pb;
	*pb = *pa;
	*pa = aux;
	
}

void swap(void *a, void *b, size_t len){
    unsigned char * p = a, * q = b, tmp;
    for (size_t i = 0; i != len; ++i)
    {
        tmp = p[i];
        p[i] = q[i];
        q[i] = tmp;
    }
}