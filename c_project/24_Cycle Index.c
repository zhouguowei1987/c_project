#include "stdio.h"

void main_24(void)
{
	int i, n;
	long t = 1;
	printf("������һ��������");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		t *= i;
	printf("%d!Ϊ%ld\n", n, t);
}