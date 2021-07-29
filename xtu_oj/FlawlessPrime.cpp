#include <stdio.h>
int isprime(int x)
{
	int fg=1;
	int I;
	if(x==0||x==1) return 0;
	for(I=2;I*I<=x;I++)
	{
		if(x%I==0)
		{
			fg=0;
			break;
		}
	}
	return fg;
}   //素数定义法 
int main()
{
	int t9;
	int sample,flag,n;
	
	int i,j;
	char s[11];
	scanf("%d",&sample);
	while(sample--)
	{
		t9=1000000000;
		flag=1;n=0;
		scanf("%s",&s);
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='0')
			{
				printf("No\n");
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			
			continue;
		}
		
		for(i=0;s[i]!='\0';i++)
		{
			n=n*10+s[i]-48;
		}     //秦九韶算法 ,把数字字符串变成十进制数 
		for(i=1;i<=9;i++)
		{
			n=n%t9;
			if(isprime(n)==0)
			{
				flag=0;
				break;
			}
			t9=t9/10;
		}
		if(flag) printf("Yes\n");
		else     printf("No\n");
	}
}
