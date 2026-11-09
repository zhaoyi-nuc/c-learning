//#include <stdio.h>
//
//int main()
//{
//	char a[10];
//	scanf_s("%s", a, 10);
//	printf("%s", a);
//	return 0;
//}
// ---------------------------------------------------
//#include <stdio.h>
//
//int main()
//{
//	char a[10];
//	gets_s(a,10);//gets(a);这样就不用长度
//	printf("%s", a);
//	return 0;
//}
//-----------------------------------------------------
#include <stdio.h>

int main()
{
	char str1[50], str2[20];
	int i, j;
	printf("请输入字符串1:");
	gets(str1);
	printf("请输入字符串2:");
	gets(str2);
	i = j = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	while ((str1[i++] = str2[j++]) != '\0');
	printf("连接后的字符串为:%s\n", str1);
	return 0;
}