#include <stdio.h>
#define N 10000
int main()
{
	int sample,n;
	int i,p,q,count;
	char s[N+1];
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%s",&s);
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d %d",&p,&q);
			p--;q--;
			count=0;
			for(i=p+1;i<=q;i++)
			{
				if(s[i]!=s[i-1]) count++;
			}
			printf("%d\n",count);
		}
		
	}
}
