#include <stdio.h>

void main_30(void)
{
	int i, m, flag = 1;
	printf("������һ������2��������");
	scanf_s("%d", &m);
	for (i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			flag = 0;
			break;
		}
	}

	flag ? printf("%d��������\n", m) : printf("%d����������\n", m);
}