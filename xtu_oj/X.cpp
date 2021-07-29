#include <stdio.h>
int abs(int x)
{
	return x>=0?x:-x;
}
int main(void)
{
	char c;
	int n,i,j,center;
	while(scanf("%c",&c)!=EOF)
	{
		getchar();
		n=2*(c-64);
		center=c-64;
		char g[n+1][n+1];
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				g[i][j]=' ';
			}
		}
		
		for(i=0;i<=n;i++)
		{
			g[i][i]=64+abs(c-i-64);
			g[n-i][i]=64+abs(c-i-64);
		}
		g[center][center]='X';
		for(i=0;i<=center;i++)
		{
			for(j=0;j<=n-i;j++)
			{
				printf("%c",g[i][j]);
			}
			printf("\n");
		}
		for(i=1;i+center<=n;i++)
		{
			for(j=0;j<=center+i;j++)
			{
				printf("%c",g[i+center][j]);
			}
			printf("\n");
		}
	}
}
