#include <stdio.h>

int sum(int sum1,int sum2)
{
	int sum = sum1 + sum2;
	return sum;
}
int main()
{
	int score1 = sum(93, 17);
	int score2 = sum(87, 9);
	if (score1 > score2)
	{
		printf("Zy更厉害!");
	}
	else
	{
		printf("Wst更厉害!");
	}
	return 0;
}