#include "stdio.h"

void main_12()
{
	int a = 99, b = 5, c = 11, d = 3;
	printf("a - b = %d\n", a - b);
	printf("b * c = %d\n", b * c);
	printf("a / b = %5.2f\n", (double)(a / b));
	printf("a %% b = %d\n", a % b);
	printf("a %% d + b / c = %d\n", a % d + b * c);
}