#include <stdio.h>

void main_16(void)
{
	int year;
	while (1) {
		printf("请输入任意年份：");
		scanf_s("%d", &year);

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%d 是闰年\n", year);
		}
		else
		{
			printf("%d 不是闰年\n", year);
		}
	}
}