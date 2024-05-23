#include <stdio.h>
int f(int a)
{   
    if(a<0)
    {
     return 1;	
	}
    else if(a==0)
    {
    	return 0;
	 } 
	 else
	 {
	 	return -1;
	 }
}
int main()
{
	
    int x=0;
    int y;
    scanf("%d",&x);
	y=f(x);
	printf("%d\n",y);
	return 0;
}
/*已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。   

输入描述：
一行，输入一个整数x。（-10000<x<10000）
输出描述：
一行，输出y的值。
示例1
输入：
10
复制
输出：
-1
复制
示例2
输入：
-10
复制
输出：
1*/
