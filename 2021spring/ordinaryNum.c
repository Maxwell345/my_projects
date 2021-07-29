#include <stdio.h>
int main()
{
	int n,ans,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n<10) ans=n;
		else if(n<100)   ans=9+n/11;
		else if(n<1000)  ans=18+n/111;
		else if(n<10000) ans=27+n/1111;
		else if(n<1e5)   ans=36+n/11111;
		else if(n<1e6)   ans=45+n/111111;
		else if(n<1e7)   ans=54+n/1111111;
		else if(n<1e8)   ans=63+n/11111111;
		else if(n<=1e9)   ans=72+n/111111111;
		printf("%d\n",ans);
	}
}
