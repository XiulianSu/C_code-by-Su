#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int g_gza = 2022;
//
//int main()
//{
//	printf("1:%d\n", g_gza);
//	printf("hehe\n");
//	{
//		int a = 10; //作用只在本个大括号内
//		printf("a =%d\n", a);//哪里起作用哪里就是他的作用域
//
//		printf("2:%d\n", g_gza);
//	}
//	printf("3:%d\n", g_gza);
//
//	return 0;
//
//	
//
//}
//声明一下变量

extern int g_gza;

int main()
{
	printf("%d\n", g_gza);

	return 0;
}