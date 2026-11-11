#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	srand(time(NULL));
	
	for (int i = 0;i < len;i++)
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
	}
	for (int i = 0;i < len;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}