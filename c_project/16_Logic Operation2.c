#include <stdio.h>

void main_16(void)
{
	int year;
	while (1) {
		printf("������������ݣ�");
		scanf_s("%d", &year);

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%d ������\n", year);
		}
		else
		{
			printf("%d ��������\n", year);
		}
	}
}