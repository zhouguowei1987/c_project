#include "stdio.h"

int main_7(void)
{
	unsigned int x = 12;
	unsigned int y = 012;
	unsigned int z = 0x12;

	printf("ʮ����%uת��Ϊ �˽���%o ʮ������%x\n", x, x, x);
	printf("�˽���%uת��Ϊ ʮ����%u ʮ������%x\n", y, y, y);
	printf("ʮ������%xת��Ϊ �˽���%o ʮ����%u\n", z, z, z);

	return 0;
}