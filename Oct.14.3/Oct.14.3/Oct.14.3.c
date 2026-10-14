#include <stdio.h>

int main()
{
	char low, upp;
	low = 'a';
	upp = low - 32;
	printf("low=%c,upp=%c\n", low, upp);
	printf("low=%d,upp=%d\n", low, upp);
	
	return 0;
}