#include "pay.h"
#include "unity.h"
#include "unity_fixture.h"
#include <time.h>
#include <stdlib.h>

TEST_GROUP(Payment);

// Antes do teste unitario
TEST_SETUP(Payment)
{

}

// Depois do teste unitario
TEST_TEAR_DOWN(Payment)
{
    
}

// Testa classes de equivalencia validas
TEST(Payment, TestPay1)
{
    TEST_ASSERT_EQUAL(0, payment(0.01, "regular"));

}

// Testa classes de equivalencia invalidas
TEST(Payment, TestPay2)
{

}

// Testa valores limites 
TEST(Payment, TestPay3)
{

}