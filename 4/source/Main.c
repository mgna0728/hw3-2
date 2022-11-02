#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long fibonacci(unsigned int number);
int main()
{
	unsigned int n = 1;
	printf("輸入欲計算第幾個費氏數列數字： ");
	scanf("%u", &n);
	printf("%lu\n", fibonacci(n));
	return 0;
}


unsigned long fibonacci(unsigned int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}