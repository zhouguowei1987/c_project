#include <stdio.h>

int main_4(void)
{
	int i = 10;
	char ppt = 'a';
	printf("第1次输出 i = %d \n", i);
	i = 20;
	printf("第2次输出 i = %d \n", i);
	printf("第1次输出 ppt = %c \n", ppt);
	ppt = 'b';
	printf("第2次输出 ppt = %c \n", ppt);
	return 0;
}