#include <stdio.h>

int main_9(void)
{
	/*printf("12345678901234567890\n");
	printf("abc\tdef\n");
	printf("abc\tde\bf\n");
	printf("abc\tde\b\rf\n");
	printf("abc\"def\"ghi\?\n");
	printf("���� 98\n");
	printf("%d\n", 'b');
	printf("�˽��Ʊ������98��\142\n");
	printf("ʮ�����Ʊ������98��\x62\n");*/

	float f = 12345.6789;
	printf("f = %f\n", f);

	float f1 = 1.0000;
	float f2 = 1.0001;
	if (f1 == f2)
	{
		printf("%f = %f\n", f1, f2);
	}
	else
	{
		printf("%f != %f\n", f1, f2);
	}


	return 0;
}