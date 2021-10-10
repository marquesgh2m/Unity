
#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

// Função de comparação usada no algoritmo de QuickSort
int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void sort(int * vector, int vector_size){
    qsort(vector, vector_size, sizeof(int), cmpfunc);
}
