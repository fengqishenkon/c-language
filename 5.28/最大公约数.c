#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int i=0;
	int j=0;
	int h=0;
	int g=0;
	int f=0;
	int o=0;
	int m[]={0};
	int v[]={0};
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;++i)
	{
		if(a%i==0)
		{
	       m[j]=i;
	       j++;
		}
	 }  
	  f=sizeof(m)/sizeof(m[0]);
	  i=0;
	 for(;j>=0;--j)
	 {
	 	m[f-j]=m[j];
	  } 
	 i=0;
	for(i=1;i<=b;++i)
	{
		if(b%i==0)
		{
	       v[h]=i;
	       h++;
		}
	 }  
	 o=sizeof(v)/sizeof(v[0]);
	 for(;o>=0;--o)
	 {
	 	v[o-h]=v[h];
	  } 
	 int n=0;
	 n=(f>o?f:o);
	 int e=0;
   if(f>o)
   {
	 for(g=0;g<f;++g)
	 {
	 	for(e=0;e<o;++e)
	 	{
	 		if(m[g]==v[e])
	 		{
	 			break;
			 }
	 	
		 }
	 }
   }
   else
   {
   	for(g=0;g<o;++g)
	 {
	 	for(e=0;e<f;++e)
	 	{
	 		if(m[g]==v[e])
	 		{
	 			break;
			 }
		 }
	 }
   }
	printf("%d\n",m[g]);
	return 0;
}
