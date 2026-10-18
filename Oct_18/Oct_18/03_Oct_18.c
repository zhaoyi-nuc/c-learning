#include <stdio.h>

int main()
{
	int rowA = 6;
	int numA = 7;
	int rowB = 6;
	int numB = 8;
	if ((rowA == rowB) && (numA - numB == 1 || numA - numB == -1))
	{
		printf("我会开心的看电影");
	}
	else
	{
		printf("我会开心的打游戏");
	}
}