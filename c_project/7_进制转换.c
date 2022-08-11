#include "stdio.h"

int main_7(void)
{
	unsigned int x = 12;
	unsigned int y = 012;
	unsigned int z = 0x12;

	printf("十进制%u转换为 八进制%o 十六进制%x\n", x, x, x);
	printf("八进制%u转换为 十进制%u 十六进制%x\n", y, y, y);
	printf("十六进制%x转换为 八进制%o 十进制%u\n", z, z, z);

	return 0;
}