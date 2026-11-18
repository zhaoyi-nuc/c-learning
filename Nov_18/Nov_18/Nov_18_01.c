#include <stdio.h>
//计算斐波那契数列的20项
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main(void)
{
	printf("第20项是%d\n", fib(20));
	return 0;
}