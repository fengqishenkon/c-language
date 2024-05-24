#include <stdio.h>

int main() 
{  
   long long  n=0;
     scanf("%lld",&n);
     long long i=0;
     long long sum=0;
     for(i=1;i<=n;++i)
     {
         sum=sum+i;
        // ++sum;//sum=sum+1;
               //int b=sum;   
     }
        printf("%lld\n",sum);
     return 0;
}
