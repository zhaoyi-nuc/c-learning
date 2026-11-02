#include <stdio.h>

int main()
{
	int a[10];
	int i, min, b;
	for (i = 0;i <= 9;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0;i <= 9;i++)
	{
		printf("%4d\n", a[i]);
	}
	min = a[0];
	for (i = 1;i <= 9;i++)
	{
		if (min > a[i])
		{
			min = a[i];
			b = i;
		}
	}
	printf("%d,%d\n", min, b);
	return 0;
}