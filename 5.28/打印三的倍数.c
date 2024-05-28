#include <stdio.h>
int main()
{
	int a=3;
	int i=0;
	for(i=3;i<=100;++i)
	{
		if(i%3==0)
		{
			printf("%d\n",i);
		}
		else
		{
			continue;
		}
	}
	return 0;
 } 
