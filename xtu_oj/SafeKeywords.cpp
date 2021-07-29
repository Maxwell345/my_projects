#include <stdio.h>
#include <string.h>
int main(void)
{
	int sample,i,j,lgh;
	int big,small,digit,note;
	char s[55];
	char sp[7]={'~','!','@','#','$','%','^'};
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%s",&s);
		lgh=strlen(s);
		big=0;small=0;digit=0;note=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				big=1;
				break;
			}
		}
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				small=1;
				break;
			}
		}
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]>=48&&s[i]<=57)
			{
				digit=1;
				break;
			}
		}
		for(i=0;s[i]!='\0';i++)
		{
			for(j=0;j<7;j++)
			{
				if(s[i]==sp[j])
				{
					note=1;
					break;
				}
			}
			if(note) break;
		}
		if(lgh>=8&&lgh<=16&&big+small+digit+note>=3) printf("YES\n");
		else                                         printf("NO\n");
	}
}
