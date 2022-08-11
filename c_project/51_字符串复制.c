#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define LSIZE 81

void strcopy(char[], char[]);

void main_51(void)
{
	char message[LSIZE];
	char newMessage[LSIZE];

	printf("ÊäÈë×Ö·û´®£º");
	gets_s(message, LSIZE);
	strcopy(newMessage, message);
	puts(message);
	puts(newMessage);
}

//¸´ÖÆstring2µ½string1
void strcopy(char string1[], char string2[])
{
	int i = 0;
	while (string2[i] != '\0')
	{
		string1[i] = string2[i];
		i++;
	}
	string1[i] = '\0';
}