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

    // Inicialização com pior caso
    for (i=0 ; i<vector_size; i++){
        in_vector[i] = vector_size-i;
    }

    // All of these should pass
    //TEST_ASSERT_EQUAL(-2, sort(1,2));
    //TEST_ASSERT_EQUAL(-1, sort(2,2));

    // Print dos valores de entrada
    printf("\n\tInput vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");



    //TEST_ASSERT_EQUAL(-2, sort(1,2));

    //TEST_ASSERT_EQUAL(-2, sort(1,2));
    //TEST_ASSERT_EQUAL(-1, sort(2,2));

    // Print dos valores ordenados
    printf("\n\tSorted vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", out_vector[n]);
    }
    printf("\n");
}

TEST(Sort, TestSort2)
{
    // This test will fail
    //TEST_ASSERT_EQUAL(2, sort(1,2));
}
