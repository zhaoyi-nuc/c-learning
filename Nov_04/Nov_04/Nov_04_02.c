#include <stdio.h>
//优化后的二维数组练习题（基于01）
int main()
{
	int a[3][3];
	int i, j, sum = 0;
	printf("请输入九个数字:\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0;i < 3;i++)
	{
		sum += a[i][i];
		sum += a[i][2 - i];
	}
	sum -= a[1][1];
	printf("%d\n", sum);
	return 0;
}