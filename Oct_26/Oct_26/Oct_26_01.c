//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b = 0;
//	scanf_s("%d", &a);
//	while (a!=0)
//	{
//		int c = a % 10;
//		a /= 10;
//		b = b * 10 + c;
//	}
//	printf("%d", b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	int i = 0;
//	scanf_s("%d %d", &a, &b);
//	while (a>=b)
//	{
//		a -= b;
//		i++;
//	}
//	printf("商:%d,余:%d", i, a);
//	return 0;
//}
#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= 5);
	return 0;
}