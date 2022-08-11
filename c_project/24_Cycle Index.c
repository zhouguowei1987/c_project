#include "stdio.h"

void main_24(void)
{
	int i, n;
	long t = 1;
	printf("请输入一个整数：");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		t *= i;
	printf("%d!为%ld\n", n, t);
}