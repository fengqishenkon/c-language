#include <stdio.h>

int main()
{
    

    int a[10]={0};
    int i=0;
    for(i=0;i<10;++i)
    {
        scanf("%d",&a[i]);

    }
    for(i=9;i>=0;--i)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
