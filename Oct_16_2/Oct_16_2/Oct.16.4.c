#include <stdio.h>

int main()
{
	int a;
	printf("请输入一个不大于255的正整数：\n");
	scanf_s("%d", &a);
	int b7 = a % 2;
	int b6 = b7 % 2;
	int b5 = b6 % 2;
	int b4 = b5 % 2;
	int b3 = b4 % 2;
	int b2 = b3 % 2;
	int b1 = b2 % 2;
	int b0 = b1 % 2;
	printf("%d%d%d%d%d%d%d%d\n", b0, b1, b2, b3, b4, b5, b6, b7);

	return 0;
}