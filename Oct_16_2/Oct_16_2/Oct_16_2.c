#include <stdio.h>

int main()
{
	int a = 123;
	int bai = a / 100;
	int shi = (a / 10) % 10;
	int ge = a % 10;
	int nixu = ge * 100 + shi * 10 + bai;
	printf("逆序数:%d\n", nixu);

	return 0;
}