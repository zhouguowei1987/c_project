#include <stdio.h>

void main_25(void)
{
	int m, n, r, t;
	int m1, n1;
	printf("请输入第1个数：");
	scanf_s("%d", &m);
	printf("\n请输入第2个数：");
	scanf_s("%d", &n);
	m1 = m, n1 = n;
	if (m < n)
		t = m, m = n, n = t;
	do
	{
		r = m % n;
		m = n;
		n = r;
	} while (r != 0);
	printf("\n%d和%d的最大公约数是%d\n", m1, n1, m);
	printf("%d和%d的最小公倍数数是%d\n", m1, n1, (m1 * n1) / m);
}