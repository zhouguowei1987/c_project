#include <stdio.h>

void main_25(void)
{
	int m, n, r, t;
	int m1, n1;
	printf("�������1������");
	scanf_s("%d", &m);
	printf("\n�������2������");
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
	printf("\n%d��%d�����Լ����%d\n", m1, n1, m);
	printf("%d��%d����С����������%d\n", m1, n1, (m1 * n1) / m);
}