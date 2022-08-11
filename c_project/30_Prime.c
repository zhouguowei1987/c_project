#include <stdio.h>

void main_30(void)
{
	int i, m, flag = 1;
	printf("请输入一个大于2的整数：");
	scanf_s("%d", &m);
	for (i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			flag = 0;
			break;
		}
	}

	flag ? printf("%d是素数！\n", m) : printf("%d不是素数！\n", m);
}