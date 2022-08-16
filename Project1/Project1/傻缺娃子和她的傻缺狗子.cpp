#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	printf("%d\n",100);//打印一个整数！

	printf("%d\n", sizeof(char));//计算char的大小
	
	int age = 20;
	float weight = 75.213;
	age = age + 1;
	weight = weight - 10;

	printf("%d\n", age);
	printf("%f\n", weight);

	return 0;

}