#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_50(void)
{
	char a[] = "abcdefg";
	char b[] = "123456";
	char c[80];

	int i = 0, j = 0, k = 0;

	while (a[i] != '\0' || b[j] != '\0')
	{
		if (a[i] != '\0')
		{
			//c[k] = a[i];
			//i++;
			c[k] = a[i++];
		}
		else
		{
			//c[k] = b[j];
			//j++;
			c[k] = b[j++];
		}
		k++;
	}
	c[k] = '\0';
	puts(c);
}