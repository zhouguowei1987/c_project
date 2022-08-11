#include <stdio.h>

void main_22(void)
{
	int n = 1, sum = 0;
	while (n < 100)
	{
		sum += n;
		n += 2;
	}
	printf("100以内的奇数和是：%d\n", sum);
}