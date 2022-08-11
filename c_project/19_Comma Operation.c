#include <stdio.h>

void main_19(void)
{
	int a = 2,b = 4,c = 6,x,y;
	y = (x = a + b), (b + c);//y = (x = a + b) x = 6 y = 6
	printf("x = %d, y = %d\n", x, y);
}