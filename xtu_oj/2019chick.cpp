#include <stdio.h>
int main(void)
{
	char s[205];
	int sample,i,j;
	int coins,repeat;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%s",&s);
		coins=0;
		repeat=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='#'||s[i]=='X')
			{
				repeat=0;
			}
			//¸üÐÂ 
			if(s[i]=='O')
			{
				coins+=20;
				if(repeat==1||repeat==2) coins+=repeat*10;
				else if(repeat>=3)       coins+=30;
				
			    repeat++;	
			}
		}
		printf("%d\n",coins);
	}
}
