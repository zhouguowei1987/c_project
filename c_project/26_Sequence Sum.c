#include <stdio.h>

void main_26(void)
{
	int i = 1;
	double sum = 0;
	while (i <= 20)
	{
		sum += i / (i + 1.00);
		printf("%d/%d \n", i, i + 1);
		i++;
	}
	printf("该数列前20项的和为：%f\n", sum);
}