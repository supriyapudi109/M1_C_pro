#include<stdio.h>
#include"unity.h"

int gcd(int n1,int n2)
{
    int i, gcd;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}
int factorial(int n)
{
    int f,i;
    i=n;
    f=1;
    while(i>0)
    {
        f=f*i;
        i--;
    }
    return f;
}

void automated_test_gcd()
{
    TEST_ASSERT_EQUAL(9, gcd(81,153));
    TEST_ASSERT_EQUAL(3, gcd(12, 3));
    TEST_ASSERT_EQUAL(6, gcd(12, 6));
    TEST_ASSERT_EQUAL(4, gcd(128, 444)); 
    TEST_ASSERT_EQUAL(40, gcd(120, 80)); 
    TEST_ASSERT_EQUAL(7, gcd(21, 56));

}

void automated_test_factorial()
{
    TEST_ASSERT_EQUAL(720, factorial(6));
    TEST_ASSERT_EQUAL(5040, factorial(7));
    TEST_ASSERT_EQUAL(40320, factorial(8));
    TEST_ASSERT_EQUAL(362880, factorial(9));
    TEST_ASSERT_EQUAL(3628800, factorial(10));
    TEST_ASSERT_EQUAL(39916800, factorial(11));
    TEST_ASSERT_EQUAL(479001600, factorial(12));
}

#if 0
int main()
{
    test_gcd();
    return 0;
}
#endif
