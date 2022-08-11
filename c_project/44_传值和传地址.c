#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXELS 5

void findMax_44(int [], int);
void main_44(void)
{
	int nums[MAXELS] = {0};
	int i, value = 0;

	printf("调用函数前输出结果：\n");
	for (i = 0; i < MAXELS; i++)
		printf("nums[%d] = %d\n", i, nums[i]);
	printf("value = %d\n", value);
	
	//调用函数时，变量是按照传值的方式传递，
	//而数组是按照传地址方式传递。
	//就是说，对于变量，实参可以改变形参，形参的改变不会影响到实参；
	//对于数组，实参可以改变形参，形参的改变也会改变实参。
	findMax_44(nums,value);

	printf("调用函数后输出结果：\n");
	for (i = 0; i < MAXELS; i++)
		printf("nums[%d] = %d\n", i, nums[i]);
	printf("value = %d\n", value);

}

void findMax_44(int vals[], int m)
{
	int i;
	m = 1;
	for (i = 0; i < MAXELS; i++)
		vals[i] = 1;
}