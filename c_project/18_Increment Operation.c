#include "stdio.h"

void main_18(void)
{
	int a, b, c;
	a = 9;
	b = ++a;//a = 10 b = 10
	printf("(1)a = %d, b = %d\n", a, b);

	a = 9;
	c = a++;//a = 10 c = 9
	printf("(2)a = %d, c = %d\n", a, c);
}