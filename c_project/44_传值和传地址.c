#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXELS 5

void findMax_44(int [], int);
void main_44(void)
{
	int nums[MAXELS] = {0};
	int i, value = 0;

	printf("���ú���ǰ��������\n");
	for (i = 0; i < MAXELS; i++)
		printf("nums[%d] = %d\n", i, nums[i]);
	printf("value = %d\n", value);
	
	//���ú���ʱ�������ǰ��մ�ֵ�ķ�ʽ���ݣ�
	//�������ǰ��մ���ַ��ʽ���ݡ�
	//����˵�����ڱ�����ʵ�ο��Ըı��βΣ��βεĸı䲻��Ӱ�쵽ʵ�Σ�
	//�������飬ʵ�ο��Ըı��βΣ��βεĸı�Ҳ��ı�ʵ�Ρ�
	findMax_44(nums,value);

	printf("���ú�������������\n");
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