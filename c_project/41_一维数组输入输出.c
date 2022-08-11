#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXGRADES 5

void main_41(void)
{
	int code[MAXGRADES] = {0};
	int scanf_c = 0;
	int i = 0;
	for (i = 0; i < MAXGRADES; i++)
	{
		printf("输入一个数据：");
		scanf_c = scanf("%d", &code[i]);
	}

	for (i = 0; i < MAXGRADES; i++)
	{
		printf("code[%d] = %d\n",i,code[i]);
	}
}