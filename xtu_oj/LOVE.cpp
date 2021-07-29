#include <stdio.h>
#define VBN 1000000007
int main(void)
{
	char s[1010];
	int sample,i;
	int L,LO,LOV,LOVE;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%s",&s);
		L=LO=LOV=LOVE=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='L') L=(L+1)%VBN;
			if(s[i]=='O') LO=(LO+L)%VBN;
			if(s[i]=='V') LOV=(LOV+LO)%VBN;
			if(s[i]=='E') LOVE=(LOVE+LOV)%VBN;
		}
		printf("%d\n",LOVE);
	}
}
