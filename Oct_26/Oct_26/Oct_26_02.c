//#include <stdio.h>
//
//int main()
//{
//	int i, n;
//	i = 1;
//	scanf_s("%d", &n);
//	while (i <= n)
//	{
//		if ((i % 3 == 0) || (i % 7 == 0) || (i / 10 == 3) || (i / 10 == 7) || (i % 10 == 3) || (i % 10 == 7))
//		{
//			printf("过\n");
//		}
//		else
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1;i <= 100;i++)
//	{
//		if (i > 15)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			break;
//		}
//	}
//	printf("%d\n", i);
//	return 0;
//}
#include <stdio.h>

int main()
{
	for (int i = 1;i <= 1000;i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}