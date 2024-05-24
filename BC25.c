#include <stdio.h>

int main()
{   
    int w=0;
    int H=0;
    double h=0.0;
    scanf("%d %d",&w,&H);
    h=H/100.0;
    printf("%.2f\n",w/(h*h));
    return 0;
}
