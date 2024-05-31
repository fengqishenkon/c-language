#include<stdio.h>
void prin(int* a,int* b)
{
	int tum=0;
	tum=*a;
	*a=*b;
	*b=tum;
}
int main() 
{    
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    printf("a==%d\n",a);
    printf("b==%d\n",b);
     prin(&a,&b);
    printf("a==%d\n",a);
    printf("b==%d\n",b);
	return 0;
}
