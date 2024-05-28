#include <stdio.h>
int main()
{
	int m[]={1,2,3,4,5,6,7,8,9,10};
	int max =m[0];
	int j=0;
	for(j=1;j<10;++j)
	{
		if(m[j]>max)
		{
			max=m[j];
		}
	}
	printf("%d\n",max);
	return 0;
 } 
