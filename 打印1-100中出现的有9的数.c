//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
#include <stdio.h>
int main()
{   int sum=0;
	int i=0;
	for(i=1;i<=89;++i)
	{
		if(i%10==9)
		{
			sum++;
			printf("%d\n",i);
		}
	}
	for(i=90;i<=100;++i)
	{
		if(i/10==9)
		{
			sum++;
			printf("%d\n",i);
		}
	}
	printf("�ܸ�����%d\n",sum);
	
	return 0;
 } 
