#include<stdio.h>
int f(int a)
{
	if(a%5==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int M=0;
	scanf("%d",&M);
	f(M);
	if(f(M))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
 } 
