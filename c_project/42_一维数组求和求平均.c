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
		printf("����һ�����ݣ�");
		scanf_c = scanf("%d", &code[i]);
		sum += code[i];
	}
	printf("���ǣ�%d\nƽ��ֵ�ǣ�%3.2f", sum, (double)(sum / MAX));
}