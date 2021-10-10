
#include "sort.h"

// Função de comparação usada no algoritmo de QuickSort
int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int sort(int * vector, int vector_size){
	return qsort(vector, vector_size, sizeof(int), cmpfunc);
}
