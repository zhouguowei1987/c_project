#include <stdio.h>

void main_13()
{
	int x, a = 3;
	float y;
	x = 20 + 25 / 5 * 2;
	printf("(1)x = %d\n", x);//30

	x = 25 / 2 * 2;
	printf("(2)x = %d\n", x);//24

	x = -a + 4 * 5 - 6;
	printf("(3)x = %d\n", x);//11

	x = a + 4 % 5 - 6;
	printf("(4)x = %d\n", x);//1

	x = -3 * 4 % -6 / 5;
	printf("%d\n", -3 * 4 % -5);
	printf("(5)x = %d\n", x);//-0

	x = (7 + 6) % 5 / 2;
	printf("(6)x = %d\n", x);//1

	x = 25.0 / 2.0 * 2.0;
	printf("(7)x = %d\n", x);//25
}