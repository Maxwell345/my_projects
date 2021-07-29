#include <stdio.h>
int main()
{
	char s[27];
	
	int i,sum;
	while(scanf("%s",&s)!=EOF)
	{
		int a[27]={0};
		sum=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='I') a[i]=1;
			else if(s[i]=='V') a[i]=5;
			else if(s[i]=='X') a[i]=10;
			else if(s[i]=='L') a[i]=50;
			else if(s[i]=='C') a[i]=100;
			else if(s[i]=='D') a[i]=500;
			else if(s[i]=='M') a[i]=1000;
		}
		for(i=0;a[i]!=0;i++)
		{
			if(a[i]>=a[i+1]) sum+=a[i];
			else            sum-=a[i];
		}
		printf("%d\n",sum);
	}
}
