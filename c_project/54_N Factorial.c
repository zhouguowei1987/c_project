#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long fac(int);

void main_54(void)
{
	int n;
	int scanf_c = 0;
	printf("input the value of n.\n");
	scanf_c = scanf("%d", &n);
	printf("%d! = %ld", n, fac(n));
}

long fac(int n)
{
	long m;
	if (n == 1)
		m = 1;
	else
		m = fac(n - 1) * n;
	return m;
}