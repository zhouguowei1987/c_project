#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_35(void)
{
	int i = 1, j = 1;

	while (i < 1000) {
		int sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d \t", i);
		}
		i++;
	}
}