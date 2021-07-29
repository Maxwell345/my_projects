#include <stdio.h>
const long long VBN=1000000007;
long long Qpower(long long a,long long x)
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
	long long sample,n,product;
	long long i,s,cnt;
	scanf("%lld",&sample);
	while(sample--)
	{
		scanf("%lld",&n);
		cnt=1;s=0;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				if(i*i!=n) cnt++;
				else       s=i;
			}
		}
		product=Qpower(n,cnt);
		if(s!=0) product=(product*s)%VBN;
		printf("%lld\n",product);
	}
}
