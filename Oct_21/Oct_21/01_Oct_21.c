//#include <stdio.h>
//
//int main()
//{
//	if (1)
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	int a = 20;
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1;i <= 5;i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0;i <= 100;i += 2)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	int a, b;
	int count = 0;
	printf("请输入两个整数:");
	scanf_s("%d %d", &a, &b);
	for (int c = a;c <= b;c++)
	{
		if (c % 6 == 0 && c % 8 == 0)
		{
			count++;
		}
	}
		printf("%d\n", count);
	return 0;
}