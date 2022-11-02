#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int lcm(int, int);
int in1, in2;
int c;
int main()
{
	printf("¿é¤J¨â­Ó¼Æ¦r:");
	scanf_s("%d %d", &in1, &in2);
	printf("%d", lcm(in1, in2));
	return 0;
}






int lcm(int a, int b)
{
	int ans = 1;
	int i = 2;
	if (a == 1 || b == 1)
	{
		return (a * b);
	}
	else if (a >= i && b >= i)
	{
		while (a >= i && b >= i)
		{
			while (a%i == 0 && b%i == 0)
			{
				ans = ans * i;
				a /= i;
				b /= i;
			}
			i++;
		}
		c = a * b* ans;
		return c;
	}
}