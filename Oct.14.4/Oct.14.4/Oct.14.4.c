#include <stdio.h>

int main()
{
	int a, b, c, d;
	a = 10;
	b = 10;
	c = a++;
	d = --b;
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
	return 0;
}