#include <stdio.h>
int main()
{
	int i,n,ans;
	scanf("%d",&n);
	ans=0;
	for(i=1;i<=n;i++)
		ans+=n/i;
	printf("%d\n",ans);
}
