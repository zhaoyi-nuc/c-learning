#include <stdio.h>

int main()
{
	int number = 0;
	int rev = 0;
	scanf_s("%d", &number);
	while (number != 0)
	{
		int temp = number % 10;
		number /= 10;
		rev = rev * 10 + temp;
	}
	printf("%d\n", rev);
	return 0;
}