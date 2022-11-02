#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

char change(char);
int main()
{
	char input, output;
	scanf_s("%c", &input);
	output = change(input);
	printf("%c", output);
}


char change(char a)
{
	char b;
	if (a >= 65 && a < 97)
	{
		b = a + 32;
	}
	else if (a >= 97 && a <= 122)
	{
		b = a - 32;
	}
	return b;
}