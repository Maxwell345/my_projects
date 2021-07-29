#include <stdio.h>
int main(void)
{
	int i,letter,digit,space,other;
	char s[9999];
	gets(s);
	letter=0;digit=0;space=0;other=0;
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) letter++;
		else if(s[i]>=48&&s[i]<=57)                        digit++;
		else if(s[i]==' ')                                 space++;
		else                                               other++;
	}
	printf("%d %d %d %d\n",letter,digit,space,other);
}
