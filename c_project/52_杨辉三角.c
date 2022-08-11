#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define YHSIZE 15

void main_52(void)
{
	int i = 0;
	int j = 0;
	int a[YHSIZE][YHSIZE];
	for (i = 0; i < YHSIZE; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for (i = 2; i < YHSIZE; i++)
	{
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}

	for (i = 0; i < YHSIZE; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}