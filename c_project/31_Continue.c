#include <stdio.h>

void main_31(void)
{
	int i, n = 0;
	for (i = 100; i <= 200; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			continue;
		}
		printf("%d\t", i);
		n++;
		if (n % 10 == 0)
		{
			printf("\n");
		}
	}
}