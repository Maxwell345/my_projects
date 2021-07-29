#include <stdio.h>
int main()
{
	int SampleNumber;
	scanf("%d",&SampleNumber);
	while(SampleNumber--)
	{
		char s[202];
		char temp;
		int K,L,i;
		scanf("%s %d %d",&s,&K,&L);
		K--;
		for(i=K;i<K+L/2;i++)
		{
			temp=s[i];
			s[i]=s[2*K+L-1-i];
			s[2*K+L-1-i]=temp;
		}
		puts(s);
	}
}
