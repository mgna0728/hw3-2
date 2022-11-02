#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int count;
int main() {
	int n;
	printf("輸入有幾環:");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("共執行 %d 次", count);
	return 0;
}


int Hanoi(int n, char A, char B, char C) {
	if (n == 1)
	{
		printf("盤子從 %c to %c\n", A, C);
	}
	else {
		Hanoi(n - 1, A, C, B);
		printf("盤子從 %c to %c\n", A, C);
		Hanoi(n - 1, B, A, C);
	}
	count++;
}