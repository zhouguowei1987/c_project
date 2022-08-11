#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_37(void)
{
	int day = 10;
	int peaches = 1;
	while (day > 1)
	{
		peaches = (peaches + 1) * 2;
		day--;
	}
	printf("%d\n", peaches);
}