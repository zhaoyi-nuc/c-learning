#include <stdio.h>

int* method()
{

	static int a = 10;
	return &a;
}

int main()
{
	int* p = method();
	printf("%d\n", *p);

	return 0;
}