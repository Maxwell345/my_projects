#include <stdio.h>
long long Qpower(long long a,long long x,long long VBN)
{
	long long ans=1;
	long long base=a;
	while(x)
	{
		if(x&1) ans=(ans*base)%VBN;
		base=(base*base)%VBN;
		x>>=1;
	}
	return ans;
}
int main()
{
	long long b,p,k,res;
	scanf("%lld %lld %lld",&b,&p,&k);
	res=Qpower(b,p,k);
	printf("%lld^%lld mod %lld=%lld",b,p,k,res);
}
