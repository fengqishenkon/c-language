#include <stdio.h>
int main()
{
	int i=99;
	int j=0;
	int h=0;
	int f=0;
	printf("--------");
	aa:
	printf("�Ƿ������Ϸ(1/0)\n");
	scanf("%d",&f);
if(f==1)
{
	for(j=0;j<3;++j)
	{
		printf("������һ������");
		scanf("%d",&h);
		if(h<i)
		{
			printf("��С�ˣ����ز�\n"); 
		}
		if(h>i)
		{
			printf("�´��ˣ����ز�\n"); 
		}
		if(h==i)
		{
			printf("�¶���\n");
			goto aa;
			break;
		}
	   if(j==2)
	   {
	   	printf("���λ����Ѿ����꣬�˳����˵�\n");
	   	goto aa;
	   }
	}
}
	
	return 0;
 } 
