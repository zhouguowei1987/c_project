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
	printf("简单计算器程序\n----------\n");
	printf("在'>'提示后输入一个命令符\n");
	printf("是否开始？（Y/N）>");
	scanf_c = scanf("%c", &command_begin);
	while (command_begin == 'Y' || command_begin == 'y')
	{
		printf("请输入一个简单的算式：");
		scanf_c = scanf("%lf%c%lf", &first_number, &character, &second_number);
		switch (character)
		{
		case '+':
			value = first_number + second_number;
			printf("等于%lf\n", value);
			break;
		case '-':
			value = first_number - second_number;
			printf("等于%lf\n", value);
			break;
		case '*':
			value = first_number * second_number;
			printf("等于%lf\n", value);
			break;
		case '/':
			while (second_number == 0)
			{
				printf("除数为零，请输入一个算式：");
				scanf_c = scanf("%lf%c%lf", &first_number, &character, &second_number);
			}
			value = first_number / second_number;
			printf("等于%lf\n", value);
			break;
		default:
			printf("非法输入！\n");
			break;
		}
		printf("是否继续运算？（Y/N）>");
		fflush(stdin);
		scanf_c = scanf("%c", &command_begin);
	}
	printf("程序退出！\n");
}