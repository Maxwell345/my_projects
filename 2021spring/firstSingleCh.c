#include <stdio.h>
int main()
{
	char s[100010];
	int cnt[26];
	int i,single;
	single=0;
	for(i=0;i<26;i++)
	{
		cnt[i]=0;
	}
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		cnt[s[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(cnt[i]==1)
		{
			single=1;
			printf("%c\n",i+97);
			break;
		}
	}
	if(!single) printf("no\n");
}
