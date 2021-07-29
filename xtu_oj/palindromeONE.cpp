#include <stdio.h>
int main()
{
	int samplenumber;
	scanf("%d",&samplenumber);
	while(samplenumber--)
	{
		char s[202];
		int K,L,i,flag;
		scanf("%s %d %d",&s,&K,&L);
		K--;
		flag=1;
		for(i=K;i<K+L/2;i++)
		{
			if(s[i]!=s[2*K+L-1-i])
			{
				flag=0;
				break;
			}
		}
		if(flag) printf("Yes\n");
		else     printf("No\n");
	}
}
