#include <stdio.h>
int main()
{
	long long a[43][43];
	int i,j;
	a[0][0]=1;
	for(i=1;i<=42;i++)
	{
		a[i][0]=0;
	}      //不能向上、下走，到不了y轴上除了原点的点 
	for(j=1;j<=42;j++)
	{
		for(i=0;i<=j;i++)
		{
			if(i==0) a[i][j]=a[1][j-1]+a[1][j-1]+a[0][j-1];
			else     a[i][j]=a[i-1][j-1]+a[i][j-1]+a[i+1][j-1];
		}
	}
	
	int sample,n;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%d",&n);
		printf("%I64d\n",a[0][n]);
	}
}
