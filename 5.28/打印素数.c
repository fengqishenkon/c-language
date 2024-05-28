#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	int isPrime=0;
	printf("%d\n",2);
	for(i=3;i<=100;++i)
	{
		 isPrime = 1;
		for(j=2;j<i;++j)
		{
			if(i%j==0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 
