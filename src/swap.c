#include "swap.h"

int swapInt(int *pa, int *pb){
	printf("pa: %p, pb: %p\n", pa, pb);
	int aux;
	paux = *pb;
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