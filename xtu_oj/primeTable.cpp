#include <stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int flag=1;
		for(j=2;j*j<=b;j++)
		{
			if(i%j==0) 
			{
				flag=0;
				break;
			}
		 
		}
		if(flag==1) printf("%d ",i);
	}
}
