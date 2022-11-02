#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int count;
int main() {
	int n;
	printf("��J���X��:");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("�@���� %d ��", count);
	return 0;
}


int Hanoi(int n, char A, char B, char C) {
	if (n == 1)
	{
		printf("�L�l�q %c to %c\n", A, C);
	}
	else {
		Hanoi(n - 1, A, C, B);
		printf("�L�l�q %c to %c\n", A, C);
		Hanoi(n - 1, B, A, C);
	}
	count++;
}