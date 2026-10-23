#include <stdio.h>

int main()
{
	int x = 0;
	int a = 1;
	scanf_s("%d", &x);
	while (a*a < x)
	{
		a++;
	}
	printf("%d\n", a);
	return 0;
}