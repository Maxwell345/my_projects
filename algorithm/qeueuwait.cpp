#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
long long wait[100005];
int main()
{
	int n,i,repeat;
	long long ans;
	cin>>n;
	for(i=0;i<n;i++)
		scanf("%lld",&wait[i]);
	sort(wait,wait+n);
	repeat=n-1;
	for(i=0;i<n-1;i++)
		ans+=wait[i]*(repeat--);
	cout<<ans<<endl;
}
