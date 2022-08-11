#include "stdio.h"

void main_20()
{
	int a = 1, b = 5;
	float x, y;
	printf("ÇëÊäÈëxµÄÖµ£º");
	scanf_s("%f", &x);
	y = x >= -10 ? (-a) * (b + x) : 3 / ((a * a * a + x * x * x) * b);
	printf("%f\n", y);
}