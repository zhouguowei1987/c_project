#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_46(void)
{
	float a[3][3], sum = 0;
	int i, j, scanf_c;
	printf("������3*3��Ԫ�أ�\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf_c = scanf("%f", &a[i][j]);
	}

	for (i = 0; i < 3; i++)
		sum += a[i][i];

	printf("�Խ���Ԫ�غ�Ϊ��%6.2f\n", sum);
}