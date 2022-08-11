#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_46(void)
{
	float a[3][3], sum = 0;
	int i, j, scanf_c;
	printf("请输入3*3个元素：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf_c = scanf("%f", &a[i][j]);
	}

	for (i = 0; i < 3; i++)
		sum += a[i][i];

	printf("对角线元素和为：%6.2f\n", sum);
}