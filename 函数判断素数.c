#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//bool�����ķ���ֵ�� true����false,true����ֵ�䱾����1��false����ֵ������0 
bool is_prime(int y)
{   int i=0;
	for(i=2;i<sqrt(y);++i)
	{
		if(y%i==0)
     	{
		    return false;
	    }
	}
	return true;
}
int main()
{
	int i=0;
	for(i=101;i<=200;i+=2)
	{
		 if(is_prime(i))
		 {
		 	printf("%d\n",i); 
		  }
	} 
	return 0;
}
