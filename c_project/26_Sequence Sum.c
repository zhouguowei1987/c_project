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
	printf("������ǰ20��ĺ�Ϊ��%f\n", sum);
}