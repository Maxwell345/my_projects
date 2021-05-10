#include <iostream>
#include <cmath>
int sqrnum(int x)
{
	if((int)sqrt((double)x)*(int)sqrt((double)x)==x) return 1;
	return 0;
}
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	/*while(cin>>n)
	{
		cout<<sqrnum(n)<<"\n";
	}*/
	while(t--)
	{
		cin>>n;
		if((n%4==0&&sqrnum(n/4))||(n%2==0&&sqrnum(n/2))) cout<<"YES\n";
		else											 cout<<"NO\n";
	}
}
