#include <stdio.h>

void main_14(void)
{
	int a, b, c;
	a = b = c = 10;

	a = b == c; //a=1
	printf("a = %d, b = %d, c = %d\n", a, b, c); // 1 10 10

	a = b > c >= 100; //a=0
	printf("a = %d, b = %d, c = %d\n", a, b, c); // 0 10 10
}