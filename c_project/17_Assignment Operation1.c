#include <stdio.h>

void main_17(void)
{
	int a, b, c;
	a = b = c = 1;
	a += b;//a = 2
	b += c;//b = 2
	c += a;//c = 3
	printf("(1)%d\n", a > b ? a : b);//2
	a >= b >= c ? printf("AA") : printf("CC");//CC
	printf("\n a = %d, b = %d, c = %d\n", a, b, c);
}