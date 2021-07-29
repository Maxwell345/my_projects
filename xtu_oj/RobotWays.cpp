#include <stdio.h>
#define FUCK 1000000007
int main(void)
{
	int sample;
	long long n,m,i,j;
	long long way[101][101];
	way[0][0]=1;
	for(i=1;i<=100;i++)
	{
		way[i][0]=1;
	}
	for(j=1;j<=100;j++)
	{
		way[0][j]=1;
	}
	
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=100;j++)
		{
			way[i][j]=(way[i][j-1]+way[i-1][j]+way[i-1][j-1])%FUCK;
		}
	}
	          // µÝÍÆ¹ØÏµ 
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%I64d %I64d",&n,&m);
		printf("%I64d\n",way[n][m]);
	}
}
