#define _CRT_SECURE_NO_WARNINGS //忽略安全检测，不然使用scanf会报错

#include <stdio.h>

#define PI 3.1415926

int main_3(void)
{
	float r;
	printf("请输入圆的半径：");
	scanf_s("%f", &r);
	printf("圆的周长为：%f\n", 2 * PI * r);
	printf("圆的面积为：%f\n", PI * r * r);
	return 0;
}