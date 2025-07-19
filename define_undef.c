#define _CRT_SECURE_NO_WARNINGS 
//#define是创建一个宏
//undef是删除一个宏

#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
#define ADD(a,b) a+b//创建一个ADD宏
#undef ADD//删除ADD这个宏
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