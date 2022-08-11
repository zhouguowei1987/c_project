#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 5

void main_42(void)
{
	int code[MAX];
	int scanf_c = 0;
	int i = 0,sum = 0;
	for (i = 0; i < MAX; i++)
	{
		printf("输入一个数据：");
		scanf_c = scanf("%d", &code[i]);
		sum += code[i];
	}
	printf("和是：%d\n平均值是：%3.2f", sum, (double)(sum / MAX));
}