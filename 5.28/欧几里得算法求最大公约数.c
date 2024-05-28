//欧几里得算法 
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int r=0;
	scanf("%d %d",&a,&b);
    while( r=a%b)
    {   
         a=b;
         b=r;
	}
	printf("%d\n",b);
	
	return 0;
}
