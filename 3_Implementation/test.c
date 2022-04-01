#include "unity.h"

extern void automated_test_lcm();
extern void automated_test_HCF();
extern void automated_test_gcd();
extern void automated_test_factorial();

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_test_lcm);
    RUN_TEST(automated_test_HCF);
    RUN_TEST(automated_test_gcd);
    RUN_TEST(automated_test_factorial);

    return (UnityEnd());

}
