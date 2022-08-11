#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_36(void)
{
	int i = 1;
	int scanf_c = 0,count = 1;
	printf("输出斐波那契数列前多少项：");
	scanf_c = scanf("%d", &count);
	while (i < count)
	{
		printf("%d", fibonacci(i));
		i++;
	}
}


int fibonacci(int i)
{
	if (i == 1 || i == 2) {
		return 1;
	}
	else
	{
		return fibonacci(i - 1) + fibonacci(i - 2);
	}
}