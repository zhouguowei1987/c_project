#include "stdio.h"

int main_10(void)
{
	//int i;
	//i = 1 + 2.0 * 3 + 1.234 + 'c' + 'A';
	/*printf("%c\n", 65);
	i = 1 + 2.0F * 3 + 1.234F + 'c' + 'A';
	printf("%d\n", i);*/

	/*float f = 1.23;
	printf("%d\n", (int)f);
	printf("%f\n", f);*/

	float f1, f2;
	f1 = (int)1.2 + 3.4;
	f2 = (int)(1.2 + 3.4);
	printf("f1 = %f, f2 = %f\n", f1, f2);

	return 0;
}