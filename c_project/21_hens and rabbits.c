#include <stdio.h>

void main_21(void)
{
	int h, f, m, n;
	printf("�����뼦���õ���ͷ����");
	scanf_s("%d", &h);
	printf("�����뼦���õ��ܽ�����");
	scanf_s("%d", &f);
	m = (4 * h - f) / 2;
	n = (f - 2 * h) / 2;
	printf("���м���%dֻ������%dֻ��\n", m, n);
}