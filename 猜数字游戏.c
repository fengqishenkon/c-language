#include <stdio.h>
int main()
{
	int i=99;
	int j=0;
	int h=0;
	int f=0;
	printf("--------");
	aa:
	printf("是否进入游戏(1/0)\n");
	scanf("%d",&f);
if(f==1)
{
	for(j=0;j<3;++j)
	{
		printf("请输入一个数：");
		scanf("%d",&h);
		if(h<i)
		{
			printf("猜小了，请重猜\n"); 
		}
		if(h>i)
		{
			printf("猜大了，请重猜\n"); 
		}
		if(h==i)
		{
			printf("猜对了\n");
			goto aa;
			break;
		}
	   if(j==2)
	   {
	   	printf("三次机会已经用完，退出到菜单\n");
	   	goto aa;
	   }
	}
}
	
	return 0;
 } 
