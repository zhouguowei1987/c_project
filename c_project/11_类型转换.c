#include "stdio.h"

int main_11(void)
{
	int i;
	double d;
	char c = 'a';
	printf("��ͬ������������ַ�\'a\'\n");
	printf("%u,o%o,ox%x\n", c, c, c);

	i = 2;
	d = 2 + c + 0.5F;
	printf("��ʽ��������ת��%f\n", d);

	i = d;
	printf("��ʽ��������ת��%d\n", i);

	d = (int)1.2 + 3.9;
	printf("��ʽ��������ת��%f\n", d);

	d = (int)(1.2 + 3.9);
	printf("��ʽ��������ת��%f\n", d);

	return 0;
}