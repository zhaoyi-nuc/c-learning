//#include <stdio.h>
//
//int main()
//{
//	for (int i=1;i<=9;i++)
//	{
//		for (int j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	for (int k = 3;k <= 50;k++)
	{
		int is_prime = 1;
		for (int i = 2;i * i <= k;i++)
		{
			if (k % i == 0)
			{
				is_prime = 0;
				break;
			}
		}
		if (is_prime == 1)
		{
			printf("%3d", k);
		}
	}
	printf("\n");
	return 0;
}