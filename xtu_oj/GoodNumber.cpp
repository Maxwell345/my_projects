#include <stdio.h>
int main()
{
	int i,j;
	long long c[65][65];
	for(i=0;i<65;i++)
	{
		c[i][0]=1;
		c[i][i]=1;
	}
	for(i=1;i<65;i++)
	{
		for(j=1;j<i;j++)
		{
			c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}   //杨辉三角 
//	printf("%I64d %I64d %I64d %I64d\n",c[3][2],c[9][3],c[5][2],c[6][3]);
	int n,k;
	long long sum;
	while(scanf("%d",&n)!=EOF)
	{
		sum=1;
		if(n%2!=0)
		{
			k=(n-1)/2;
			for(i=1;i<=k;i++)
			{
				sum+=(c[n][i]-c[n-1][i-1]);
			}       //减去首位为0的情况 
		}
		else
		{
			k=n/2;
			for(i=1;i<=k-1;i++)
			{
				sum+=(c[n][i]-c[n-1][i-1]);
			}
		}
		printf("%I64d\n",sum);
	}
} 
