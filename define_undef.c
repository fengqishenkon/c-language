#define _CRT_SECURE_NO_WARNINGS 
//#define�Ǵ���һ����
//undef��ɾ��һ����

#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
#define ADD(a,b) a+b//����һ��ADD��
#undef ADD//ɾ��ADD�����
#define ADD(a,b) a+b
int main()
{
	int a = 2;
	int b = 3;
	int c = Add(a, b);
	printf("%d\n", c);
	int d = ADD(a, b);
	printf("%d", d);
	return 0;
}