#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main_34(void)
{
	//float f1 = 11.110000811;
	//float f2 = 11.110000;

	//%f格式输出的数据小数部分必须是6位，
	//如果原数据不符合，位数少的时候补零
	//位数多的时候小数部分取前6位，第7位四舍五入
	//printf("%f\n", f1);
	//printf("%f\n", f2);

	int i = 0;
	char a = 0;
	float f = 0;
	int c = 0;

	printf("请输入1个整型、1个字符型和1个浮点型的值：\n");

	c = scanf("%d,%c,%f", &i, &a, & f);
	printf("i = %d, a = %c, f = %f\n", i, a, f);


}