#include <stdio.h>

int search(int arr[], int len, int num)
{
	int min=0;
	int max = len - 1;
	//mid 要不断变化
	while (min <= max) //<=是为了不漏最后一个数据
	{
		int mid = (max + min) / 2;

		if (arr[mid] < num)
		{
			min = mid + 1;
		}
		else if (arr[mid] > num)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int len = sizeof(arr) / sizeof(int);
	int num = 5;
	int index = search(arr,len,num);
	printf("%d\n", index);
	return 0;
}