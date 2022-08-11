#include <stdio.h>

void main_23()
{
	int a, b, c, i;
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = (i / 10) % 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf("%d \t", i);
		}
	}
}