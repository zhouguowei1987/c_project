#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MSIZE 81

void main_49(void)
{
	char message[MSIZE];
	printf("�����ַ�����\n");
	gets(message);
	printf("����ַ�����\n");
	puts(message);

	printf("�����ַ�����\n");
	scanf("%s", message);
	printf("����ַ�����\n");
	puts(message);
}