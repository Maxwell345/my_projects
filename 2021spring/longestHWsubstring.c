#include <stdio.h>
int huiwen(char *str,int head,int tail)
{
	if(head==tail||head>tail) return 1;
	if(str[head]==str[tail]) return huiwen(str,head+1,tail-1);
	return 0;
}
int main()
{
	char password[500];
	int i,j,maxlen;
	while(scanf("%s",&password)!=EOF)
	{
		maxlen=1;
		for(i=0;password[i]!='\0';i++)
		{
			for(j=i;password[j]!='\0';j++)
			{
				if(huiwen(password,i,j)&&j-i+1>maxlen)
				{
					maxlen=j-i+1;
				}
			}
		}
		printf("%d\n",maxlen);
	}
}
