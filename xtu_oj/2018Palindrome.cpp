#include <stdio.h>
int main()
{
	char s[1005];
	char letter[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
	't','u','v','w','x','y','z'};
	int cnt[26];
	int time,i,j;
	int odd;
	time=1000;
	while(time&&scanf("%s",&s)!=EOF)
	{
		for(i=0;i<26;i++)
		{
			cnt[i]=0;
		}
		odd=0;
		for(i=0;s[i]!='\0';i++)
		{
			for(j=0;j<26;j++)
			{
				if(s[i]==letter[j]) cnt[j]++;
			}
		}
		for(i=0;i<26;i++)
		{
			if(cnt[i]%2==1) odd++; 
		}
//		printf("%d\n",odd);
		if(odd==0||odd==1) printf("Yes\n");
		else               printf("No\n");
		time--;
	}
}
