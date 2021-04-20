#include <stdio.h>
#include <string.h>
int main()
{
	int len,i;
	char word[40];
	scanf("%s",&word);
	len=strlen(word);
	if(word[len-1]=='r'&&word[len-2]=='e')
	{
		for(i=0;i<len-2;i++)
		{
			printf("%c",word[i]);
		}
		printf("\n");
	}
	else if(word[len-1]=='y'&&word[len-2]=='l')
	{
		for(i=0;i<len-2;i++)
		{
			printf("%c",word[i]);
		}
		printf("\n");
	}
	else if(word[len-1]=='g'&&word[len-2]=='n'&&word[len-3]=='i')
	{
		for(i=0;i<len-3;i++)
		{
			printf("%c",word[i]);
		}
		printf("\n");
	}
}
