#include <stdio.h>

int main()
{
	int a;
	printf("请输入一个两位数:\n");
	scanf_s("%d", &a);
	int ge = a % 10;
	int shi = a / 10 % 10;
	printf("%d\n", ge != 7 && shi != 7);
}