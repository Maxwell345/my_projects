#include <stdio.h>
int main(void)
{
	char c;
	int i,space1,space2,spaceX;
	while(scanf("%c",&c)!=EOF)
	{
		
		getchar();
		spaceX=c-64;
		for(i=0;i<=c-65;i++)
		{
			space1=i;
			space2=2*(c-65-i)+1;
			while(space1--)
			{
				printf(" ");
			}
			printf("%c",c-i);
			while(space2--)
			{
				printf(" ");
			}
			printf("%c\n",c-i);
		}
		while(spaceX--)
		{
			printf(" ");
		}
		printf("%c\n",88);
		for(i=c-65;i>=0;i--)
		{
			space1=i;
			space2=2*(c-65-i)+1;
			while(space1--)
			{
				printf(" ");
			}
			printf("%c",c-i);
			while(space2--)
			{
				printf(" ");
			}
			printf("%c\n",c-i);
		}
	}
}
