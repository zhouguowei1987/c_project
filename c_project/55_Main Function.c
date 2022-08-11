#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main(int argc, char *argv[])
{
	int count;
	printf("The command line has %d arguments:\n", argc);
	for (count = 0; count < argc; count++)
	{
		printf("%d : %s\n", count, argv[count]);
	}
}