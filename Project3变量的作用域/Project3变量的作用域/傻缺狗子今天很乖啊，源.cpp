#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int g_gza = 2022;
//
//int main()
//{
//	printf("1:%d\n", g_gza);
//	printf("hehe\n");
//	{
//		int a = 10; //����ֻ�ڱ�����������
//		printf("a =%d\n", a);//���������������������������
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
//����һ�±���

extern int g_gza;

int main()
{
	printf("%d\n", g_gza);

	return 0;
}