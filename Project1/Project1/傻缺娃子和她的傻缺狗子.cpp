#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	printf("%d\n",100);//��ӡһ��������

	printf("%d\n", sizeof(char));//����char�Ĵ�С
	
	int age = 20;
	float weight = 75.213;
	age = age + 1;
	weight = weight - 10;

	printf("%d\n", age);
	printf("%f\n", weight);

	return 0;

}