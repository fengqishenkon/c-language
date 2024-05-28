/*能被4整除且不能被100整除，或者能被400整除*/ 
#include<stdio.h>
int main()
{
	int i=0;
	for(i=1000;i<=2000;++i)
	{
		if((i%4==0 && i%100!=0) || i%400==0)
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
