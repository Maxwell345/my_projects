#include <stdio.h>
int abs(int x)
{
	return x>0?x:-x;
}
int compare(char ca,char cb)
{
	int flag;
	if(ca==cb) flag=0;
	else
	{
		if(abs(ca-cb)!=32)
		{
			if(ca>=97) ca-=32;
			if(cb>=97) cb-=32;
		}
		if(ca>cb) flag=1;
		else      flag=-1;	
	}
	return flag;
}
int main(void)
{
	int i,ans;
	char str1[1012];
	char str2[1012];
	gets(str1);
	gets(str2);
	i=0;
	while(str1[i]&&str2[i]&&compare(str1[i],str2[i])==0)
	{
		i++;
	}
	ans=compare(str1[i],str2[i]);
	printf("%d\n",ans);
	return 0;
}
