//1/1-1/2+1/3-1/4+1/5 бнбн + 1/99 - 1/100
#include <stdio.h>
int main()
{
	
	int a=0;
	int b=1;
    int i=0;
	double sum=0;
	for(i=1;i<=100;++i)
	{
		sum+=b*1.0/i;
		b=-b;
	}
	printf("%f\n",sum);
	return 0;
}
