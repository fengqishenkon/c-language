#include <stdio.h>

int main()
{

     int x=12;
     int n=0;
     scanf("%d",&n);
     int y=0;
     if(n<12)
     {
        y=2;
       printf("%d\n",2);
     }
     else 
     {
         y=n/12*4+2;
        printf("%d\n",y);
     }
     
    return 0;
}
