#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	int b = a % 2;
	if (b == 0)
	{
		printf("偶数");
	}
	else
	{
		printf("奇数");
	}
	return 0;
}