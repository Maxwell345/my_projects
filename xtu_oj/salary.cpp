#include <stdio.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		int n;
		scanf("%d",&n);
		if(n>=100)printf("%d\n",200+2*(n-100));
		else printf("%d\n",200-3*(100-n));
	}
}
