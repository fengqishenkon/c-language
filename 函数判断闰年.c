#include <stdio.h>
#include <stdbool.h>
bool is_leap_year(int y)
{
	if((y%4==0 && y%100!=0) ||  y%400==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int y=0;
	int i=0;
	for(y=1000;y<=2000;++y)
	{
		if(is_leap_year(y))
		{
			i++;
			printf("%d ",y);
		}
	}
	printf("\n");
	printf("%d\n",i);
	return 0;
}
