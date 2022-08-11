#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_48(void)
{
	//char c[] = {'a','b','c'};
	char c[] = "abc";
	//char c[] = { "abc" };
	int i = 0;
	for (i = 0; i < 3; i++)
		printf("%c\n", c[i]);

	printf("%s\n", c);
	printf("%c\n", c[0]);
	c[1] = 'w';
	printf("%s\n", c);
}