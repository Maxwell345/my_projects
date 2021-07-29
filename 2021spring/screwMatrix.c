#include <stdio.h>
int a[31][31];
int border[32][32];
int main()
{
	int n,m,s,t;
	int i,j;
	scanf("%d %d",&n,&m);
	t=n*m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			border[i][j]=1;
		}
	}
	s=0;i=1;j=0;int p,l;
	while(t--)
	{
		if(!border[i-1][j]&&border[i][j+1])
		{
			border[i][j]=0;++s;a[i][++j]=s;
		}
		if(!border[i][j+1]&&border[i+1][j])
		{
			border[i][j]=0;++s;a[++i][j]=s;
		}
		if(!border[i+1][j]&&border[i][j-1])
		{
			border[i][j]=0;++s;a[i][--j]=s;
		}
		if(!border[i][j-1]&&border[i-1][j])
		{
			border[i][j]=0;++s;a[--i][j]=s;
		}
		/*for(p=1;p<=n;p++)
		{
			for(l=1;l<=m;l++)
			{
				printf("%4d",border[p][l]);
			}
			printf("\n");
		}
		printf("*******\n");*/
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
