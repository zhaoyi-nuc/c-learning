#include <stdio.h>

int main()
{
	int a, b, max;
	printf("请输入两个数:");
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		max = a;
	}
	else if(a==b)
	{
		max = b;
	}
	else
	{
		max = b;
	}
	printf("%d\n", max);
	return 0;
}