#include <stdio.h>

void main_33(void)
{
	int i = 123456;
	printf("%d\n",i);
	//%md：用m限制了数据的宽度，是指数据的位数。
	//当数据的位数小于m时，以前面补充空格的方式输出；
	//反之，如果位数大于m，则按原数输出
	printf("%5d\n", i);
	printf("%7d\n", i);
}