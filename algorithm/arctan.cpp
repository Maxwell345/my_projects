#include <cstdio>
using namespace std;
int main()
{
	double inf,k,ans;
	ans=0.0;inf=112345678.38;
	for(k=0.0;k<inf;k+=2)
	{
		ans+=(1.0/(2*k+1));
	}
	for(k=1.0;k<inf;k+=2)
	{
		ans-=(1.0/(2*k+1));
	}
	ans*=4.0;
	printf("Pi =%.12lf\n",ans);
}
