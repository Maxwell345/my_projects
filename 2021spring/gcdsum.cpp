#include <iostream>
using namespace std;
long long dgtsum(long long x)
{
	long long sum;
	sum=0;
	do{
		sum+=x%10;
		x/=10;
	}while(x>0);
	return sum;
}
long long gcd(long long a,long long b)
{
	return b?gcd(b,a%b):a;
}
long long gcdsum(long long p)
{
	return gcd(p,dgtsum(p));
}
int main()
{
	int t;
	long long n,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=n;
		while(gcdsum(ans)<=1)
		{
			ans++;
		}
		cout<<ans<<"\n";
	}
}
