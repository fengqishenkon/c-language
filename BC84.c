#include <stdio.h>
int f(int a)
{   
    if(a<0)
    {
     return 1;	
	}
    else if(a==0)
    {
    	return 0;
	 } 
	 else
	 {
	 	return -1;
	 }
}
int main()
{
	
    int x=0;
    int y;
    scanf("%d",&x);
	y=f(x);
	printf("%d\n",y);
	return 0;
}
/*��֪һ������y=f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��   

����������
һ�У�����һ������x����-10000<x<10000��
���������
һ�У����y��ֵ��
ʾ��1
���룺
10
����
�����
-1
����
ʾ��2
���룺
-10
����
�����
1*/
