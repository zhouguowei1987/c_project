#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MSIZE 81

void main_49(void)
{
	char message[MSIZE];
	printf("ÊäÈë×Ö·û´®£º\n");
	gets(message);
	printf("Êä³ö×Ö·û´®£º\n");
	puts(message);

	printf("ÊäÈë×Ö·û´®£º\n");
	scanf("%s", message);
	printf("Êä³ö×Ö·û´®£º\n");
	puts(message);
}