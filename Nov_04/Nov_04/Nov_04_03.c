#include <stdio.h>

int main(void)
{
	double a[3][6] =
	{
		{85,93,84,85,95,86},
		{79,95,95,80,100,98},
		{80,91,93,75,97,90},
	};
	int i, j;
	double v[3];
	double w[6];
	double sum;
	for (i = 0;i < 3;i++)
	{
		sum = 0.0;
		for (j = 0;j < 6;j++)
		{
			sum += a[i][j];
		}
		v[i] = sum / 6.0;
	}
	for (j = 0;j < 6;j++)
	{
		sum = 0.0;
		for (i = 0;i < 3;i++)
		{
			sum += a[i][j];
		}
		w[j] = sum / 3.0;
	}
	for (i = 0;i < 3;i++)
	{
		printf("学生%d的平均分:%.2f\n", i + 1, v[i]);
	}
	printf("--------------------\n");
	for (j = 0;j < 6;j++)
	{
		printf("课程%d的平均分:%.2f\n", j + 1, w[j]);
	}
	return 0;
}