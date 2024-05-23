#include<stdio.h>
int f(int x,int y);
int main()
{
	int a=0;
	int b=0;
	scanf("%d,%d",&a,&b);
	int g=f(a,b);
	printf("%d\n",g); 
	return 0;
}
int f(int n,int m)
{
	if(n>m)
	{
		return n;
	}
	else
	{
		return m;
	}
}
