#include <stdio.h>
int cntfac(int x)
{
	int i,ans;
	ans=0;
	for(i=1;i<=x;i++)
		if(x%i==0) ans++;
	return ans;
}
int main()
{
	int n,sum,j;
	scanf("%d",&n);
	sum=0;
	for(j=1;j<=n;j++)
		sum+=cntfac(j);
	printf("%d\n",sum);
}
