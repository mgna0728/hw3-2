#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y;
	printf("輸入兩個數字(第一個數為底數): ");
	scanf("%d %d", &x, &y);
	printf("%d\n", power(x, y));
	return 0;
}


int power(int a, int b)
{

	if (b == 0)
		return 1;
	else
		return a * power(a, b - 1);
}