#include <stdio.h>
int main() 
{
    
   int a[4]={0};
   int i=0;
   for(i=0;i<4;++i)
   {
    scanf("%d ",&a[i]);
   }
   for(i=0;i<3;++i)
   {
    if(a[i]>a[i+1])
    {
      a[i+1]=a[i]; 
    }
    
   }
   printf("%d\n",a[3]);
    
    return 0;
}
