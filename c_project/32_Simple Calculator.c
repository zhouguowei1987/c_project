#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main_32(void)
{
	int scanf_c = 0;
	char command_begin;
	double first_number;
	char character;
	double second_number;
	double value;
	printf("�򵥼���������\n----------\n");
	printf("��'>'��ʾ������һ�������\n");
	printf("�Ƿ�ʼ����Y/N��>");
	scanf_c = scanf("%c", &command_begin);
	while (command_begin == 'Y' || command_begin == 'y')
	{
		printf("������һ���򵥵���ʽ��");
		scanf_c = scanf("%lf%c%lf", &first_number, &character, &second_number);
		switch (character)
		{
		case '+':
			value = first_number + second_number;
			printf("����%lf\n", value);
			break;
		case '-':
			value = first_number - second_number;
			printf("����%lf\n", value);
			break;
		case '*':
			value = first_number * second_number;
			printf("����%lf\n", value);
			break;
		case '/':
			while (second_number == 0)
			{
				printf("����Ϊ�㣬������һ����ʽ��");
				scanf_c = scanf("%lf%c%lf", &first_number, &character, &second_number);
			}
			value = first_number / second_number;
			printf("����%lf\n", value);
			break;
		default:
			printf("�Ƿ����룡\n");
			break;
		}
		printf("�Ƿ�������㣿��Y/N��>");
		fflush(stdin);
		scanf_c = scanf("%c", &command_begin);
	}
	printf("�����˳���\n");
}