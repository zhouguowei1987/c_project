#include <stdio.h>

void main_6(void)
{
	float sum = 0.0, avg = 0.0;
	int score, count, c9, c89, c78, c67, c6;
	score = count = c9 = c89 = c78 = c67 = c6 = 0;

	scanf_s("%d", &score);
	while (score > 0 && score <= 100)
	{
		sum += score;
		count++;
		if (score >= 90)
		{
			c9++;
		}
		else if (score >= 80 && score < 90) {
			c89++;
		}
		else if (score >= 70 && score < 80) {
			c78++;
		}
		else if (score >= 60 && score < 70) {
			c67++;
		}
		else {
			c6++;
		}
		scanf_s("%d", &score);
	}
	avg = sum / count;
	printf("班级平均成绩为：%f\n", avg);
	printf("90分以上的（包括90）的人数是：%d\n", c9);
	printf("80分-90分（包含80）的人数是：%d\n", c89);
	printf("70分-80分（包含70）的人数是：%d\n", c78);
	printf("60分-70分（包含60）的人数是：%d\n", c67);
	printf("60分以下的人数是：%d\n", c6);
}