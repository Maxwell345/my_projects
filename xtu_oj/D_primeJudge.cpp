#include <stdio.h>
int isprime(int n)
{
	int flg=1;
	long long i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flg=0;
			break;
		}
	}
	return flg;
}
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int x,j,J,flag;
		scanf("%d",&x);
		flag=0;
		for(j=2;j*j<=x;j++)
		{
			
			J=x/j;
			if(x%j==0&&isprime(j)&&isprime(J)&&j!=J)
			{
				flag=1;
				break;
			}
			
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
}
