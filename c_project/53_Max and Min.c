#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> //���ò��������rand()������Ҫ����ͷ�ļ�stdlib.h
#include <time.h>

void main_53(void)
{
	int a0, ai, i;
	int max, min;
	srand(time(0));
	a0 = rand() % 101 + 100;
	printf("a0 = %d\n", a0);
	max = min = a0;
	for (i = 0; i < 10; i++)
	{
		ai = rand() % 101 + 100;
		printf("a%d = %d\n", i + 1, ai);
		if (ai > max)
			max = ai;
		if (ai < min)
			min = ai;
	}
	printf("���ֵΪ��%d����СֵΪ��%d", max, min);
}