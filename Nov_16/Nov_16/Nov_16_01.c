#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(int arr[], int len, int num)//此处的arr[]就是*arr(指针),数组作为函数参数会退化为指针。
{
	for (int i = 0;i < len;i++)
	{
		if (arr[i] == num)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
	for (int i = 0;i < len;i++)
	{
		int num = rand() % 100 + 1;
		int flag = contains(arr, len, num);
		if (flag == 0)
		{
			arr[i] = num;
		}
		else//重点
		{
			i--;
		}
	}

	for (int i = 0;i < len;i++)
	{
		printf("%d\n", arr[i]);
	}

	int sum = 0;
	for (int i = 0;i < len;i++)
	{
		sum += arr[i];
	}

	double avg = (double)sum / len;
	int count = 0;
	for (int i = 0;i < len;i++)
	{
		if (arr[i] < avg)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}