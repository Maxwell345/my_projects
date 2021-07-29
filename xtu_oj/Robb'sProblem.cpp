#include <stdio.h>
int A[1001][2600];

int main()
{
	A[0][1]=1;
	
	int i,j,tail,n=1;
	for(i=1;i<=1000;i++)
	{
		tail=0;
		for(j=1;j<=n;j++)
		{
			A[i][j]=(A[i-1][j]*i+tail)%10;
			tail=(A[i-1][j]*i+tail)/10;
		}
		while(tail>0)
		{
			n++;
			A[i][n]=tail%10;
			tail=tail/10;
		}
	}
	//printf("%I64d %I64d %I64d\n",&A[6][0],&A[6][1],&A[6][2]);
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		
		
		
		printf("%d\n",A[n][m]);
	}
}
