#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main_34(void)
{
	//float f1 = 11.110000811;
	//float f2 = 11.110000;

	//%f��ʽ���������С�����ֱ�����6λ��
	//���ԭ���ݲ����ϣ�λ���ٵ�ʱ����
	//λ�����ʱ��С������ȡǰ6λ����7λ��������
	//printf("%f\n", f1);
	//printf("%f\n", f2);

	int i = 0;
	char a = 0;
	float f = 0;
	int c = 0;

	printf("������1�����͡�1���ַ��ͺ�1�������͵�ֵ��\n");

	c = scanf("%d,%c,%f", &i, &a, & f);
	printf("i = %d, a = %c, f = %f\n", i, a, f);


}