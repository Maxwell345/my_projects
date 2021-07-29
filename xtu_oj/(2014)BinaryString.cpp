#include <stdio.h>
int main()
{
	int i,j;
	long long c[1000001][1000001];
	long long answer[1000001];
	for(i=0;i<=1000000;i++)
	{
		answer[i]=0;
	}
	for(i=0;i<=1000000;i++)
	{
		c[i][0]=1;
		c[i][i]=1;
	}
	for(i=1;i<=1000000;i++)
	{
		for(j=1;j<i;j++)
		{
			c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}    //Ñî»ÔÈý½Ç
	for(i=0;i<=1000000;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==2) continue;
			answer[i]=(answer[i]+c[i][j])%1000000007;
		}
	}
	
	int sample;
	scanf("%d",&sample);
	while(sample--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",answer[n]);
	}
}
