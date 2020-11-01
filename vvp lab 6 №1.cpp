#include<stdio.h>

int main()
{
	int A, B, t;
	scanf_s("%d %d", &A, &B);
	t = A;
	A = B;
	B = t;
	printf("new A and B: %d and %d", A, B);
	return 0;
}