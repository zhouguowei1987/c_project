#define _CRT_SECURE_NO_WARNINGS //���԰�ȫ��⣬��Ȼʹ��scanf�ᱨ��

#include <stdio.h>

#define PI 3.1415926

int main_3(void)
{
	float r;
	printf("������Բ�İ뾶��");
	scanf_s("%f", &r);
	printf("Բ���ܳ�Ϊ��%f\n", 2 * PI * r);
	printf("Բ�����Ϊ��%f\n", PI * r * r);
	return 0;
}