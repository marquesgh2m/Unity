#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

// Antes do teste unitario
TEST_SETUP(Sort)
{

}

// Depois do teste unitario
TEST_TEAR_DOWN(Sort)
{
    
}

TEST(Sort, TestSort1)
{
    int i, n;
    int vector_size = 10;
    int in_vector[vector_size]; // Vetor de entrada
    int out_vector[vector_size]; // Vetor de saida

    // Inicialização com pior caso, ordem decrescente
    for (i=0 ; i<vector_size; i++){
        in_vector[i] = vector_size-i;
        out_vector[i] = vector_size-i;
    }

    // Print dos valores de entrada
    printf("\n\tInput vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");

    sort(out_vector, vector_size);

    // Print dos valores ordenados
    printf("\n\tSorted vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", out_vector[n]);
    }
    printf("\n");

    // All of these should pass
    for(n=0;n<vector_size;n++) {
        TEST_ASSERT_EQUAL(in_vector[n], out_vector[vector_size-n-1]);
    }
}

TEST(Sort, TestSort2)
{
    // This test will fail
    //TEST_ASSERT_EQUAL(2, sort(1,2));
}
