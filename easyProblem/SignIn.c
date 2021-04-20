#include <stdio.h>
long long gcd(long long x,long long y)
{
	return y?gcd(y,x%y):x;
}
long long qiandao(long long n)
{
	long long j,res;
	res=0;
	for(j=1;j<=n;j++)
	{
		if(gcd(n,j)!=1) res++;
	}
	return res;
}
int main()
{
	long long a,b,ans;
	long long i;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		ans+=qiandao(i);
	}
	printf("%lld\n",ans);
}
