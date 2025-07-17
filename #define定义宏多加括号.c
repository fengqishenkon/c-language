#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//!!!#define定义宏，要多加括号

//#define add(a,b) a+b
//int main()
//{
//	printf("%d\n", add(3,4));
//	//结果为7
//	printf("%d\n", 5*add(3, 4));
//	//这个结果为多少呢？
//	//35？还是19？
//  //5*3+4
//	//答案为19，因为在定义宏时，没有给表达式加括号，使之单独分隔开来，造成了操作符之间不可预料的相互作用。
//	return 0;
//}

//加上括号后

//#define add(a,b) (a+b)
//int main()
//{
//	printf("%d\n", add(3, 4));
//	//结果为7
//	printf("%d\n", 5 * add(3, 4));
//	//这个结果为多少呢？
//	//35？还是19？
//	// 5*(3+4)
//	//答案为35
//	return 0;
//}

//但只加一个大括号有时不够

//#define mul(a,b) (a*b)
//int main()
//{
//	printf("%d\n", mul(3, 4));
//	//结果为7
//	printf("%d\n", 5 + mul(2+1, 3+1));
//	//这个结果为多少呢？
//	// 17还是11？
//	// 5+2+1*3+1
//	//答案为11
//	return 0;
//}

//但如果  #define mul(a,b) ((a)*(b)) 每一个都加上括号，就可以避免以上所有的情况了
#define mul(a,b) ((a)*(b))
int main()
{
	printf("%d\n", mul(3, 4));
	//结果为7
	printf("%d\n", 5 + mul(2 + 1, 3 + 1));
	//这个结果为多少呢？
	// 17还是11？
	// 5+（2+1）*（3+1）
	//答案为17
	return 0;
}
