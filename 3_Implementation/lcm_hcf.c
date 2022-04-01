#include<stdio.h>
#include"unity.h"

int lcm(int n1,int n2)
{
	int max;
	max = (n1 > n2) ? n1 : n2;
	while(1)
	{
		if (max % n1 == 0 && max % n2 == 0)
		break; 
		++max;
	}
	return max;
}

int HCF(int n1,int n2)  
{  
	int i,j,hcf=1;
	j = (n1<n2) ? n1 : n2;  
	for(i=1; i<=j; i++)  
	{  
		if(n1%i==0 && n2%i==0)  
		{  
			hcf = i;  
		}  
	} 
	return hcf;
}

void automated_test_lcm()
{
	TEST_ASSERT_EQUAL(360, lcm(72, 120));
	TEST_ASSERT_EQUAL(20, lcm(10, 4));
	TEST_ASSERT_EQUAL(36, lcm(12, 18));
	TEST_ASSERT_EQUAL(90, lcm(15, 18));
	TEST_ASSERT_EQUAL(30, lcm(15, 10));
	TEST_ASSERT_EQUAL(1736, lcm(248, 868));
	TEST_ASSERT_EQUAL(5103, lcm(567, 729));
}

void automated_test_HCF()
{
	TEST_ASSERT_EQUAL(4, HCF(24,28));
	TEST_ASSERT_EQUAL(12, HCF(24,36));
	TEST_ASSERT_EQUAL(5, HCF(15,20));
	TEST_ASSERT_EQUAL(15, HCF(15,30));
	TEST_ASSERT_EQUAL(6, HCF(18,12));
	TEST_ASSERT_EQUAL(50, HCF(400,250));
}

#if 0
int main()
{
	test_lcm();
	return 0;
}
#endif
