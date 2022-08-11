#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXELS 5

void findMax_43(int vals[MAXELS]);

void main_43(void)
{
	int nums[MAXELS] = { 2,18,1,27,16 };
	findMax_43(nums);
}

void findMax_43(int vals[MAXELS])
{
	int i, max = vals[0];
	for (i = 0; i < MAXELS; i++)
	{
		max = max < vals[i] ? vals[i] : max;
	}
	printf("The maximum value is %d\n", max);
}