#include <stdio.h>

int main()
{
	float a = 23.5F;
	float b = 24.6F;
	float c = 27.5F;
	float d = 23.1F;
	float e = 27.5F;
	float g = (a + b + c + d + e) / 5;
	printf("平均温度:%.2f\n", g);

	return 0;
}