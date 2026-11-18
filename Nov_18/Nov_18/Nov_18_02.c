#include <stdio.h>

int order(int arr[], int len, int num)
{
	for (int i = 0;i < len;i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 11,22,44,33,55 };
	int len = sizeof(arr) / sizeof(int);
	int num = 33;

	int index = order(arr, len, num);
	printf("%d\n", index);

	return 0;
}