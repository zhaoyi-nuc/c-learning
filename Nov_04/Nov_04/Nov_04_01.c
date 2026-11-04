//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	int a[3][3];
	int i, j, sum=0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			if (i == j)
			{
				sum += a[i][j];
			}
			if ((i + j) == 2 && (i != j))
			{
				sum += a[i][j];
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}