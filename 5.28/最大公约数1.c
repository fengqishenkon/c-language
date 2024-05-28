#include<stdio.h>
int main()
{
	
    int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	int y=(a>b?b:a);
	while(1)
   {
	if(a%y==0 && b%y==0)
	{
        break;		
	}
		y--;	
   }
	printf("%d\n",y);
	return 0;
}




