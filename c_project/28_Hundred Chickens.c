#include <stdio.h>

void main_28(void)
{
	int x, y, z;
	int total = 100;
	int money = 100;
	for (x = 0; x <= money / 5; x++)
	{
		for (y = 0; y <= money / 3; y++)
		{
			z = total - x - y;
			if (5 * x + 3 * y + z / 3.0 == money)
				printf("公鸡%d只，母鸡%d只，小鸡%d只\n", x, y, z);
		}
	}
}