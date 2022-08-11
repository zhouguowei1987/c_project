#include "stdio.h"

int main_11(void)
{
	int i;
	double d;
	char c = 'a';
	printf("不同进制数据输出字符\'a\'\n");
	printf("%u,o%o,ox%x\n", c, c, c);

	i = 2;
	d = 2 + c + 0.5F;
	printf("隐式数据类型转换%f\n", d);

	i = d;
	printf("隐式数据类型转换%d\n", i);

	d = (int)1.2 + 3.9;
	printf("显式数据类型转换%f\n", d);

	d = (int)(1.2 + 3.9);
	printf("显式数据类型转换%f\n", d);

	return 0;
}