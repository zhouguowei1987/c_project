#include <stdio.h>

void main_21(void)
{
	int h, f, m, n;
	printf("请输入鸡和兔的总头数：");
	scanf_s("%d", &h);
	printf("请输入鸡和兔的总脚数：");
	scanf_s("%d", &f);
	m = (4 * h - f) / 2;
	n = (f - 2 * h) / 2;
	printf("笼中鸡有%d只，兔有%d只！\n", m, n);
}