#include <stdio.h>
#define MAXSIZE 255
typedef char ElemType;
typedef struct{
	ElemType brackets[MAXSIZE+1];
	int top;
}stack;
int notbrack(char ch)
{
	if(ch!='['&&ch!=']'&&ch!='{'&&ch!='}'&&ch!='('&&ch!=')') return 1;
	return 0;
}
int matchable(char left,char right)
{
	if((left=='('&&right==')')||(left=='['&&right==']')||(left=='{'&&right=='}')) return 1;
	return 0;
}
int main()
{
	int i,j,k;
	char text[255];
	stack data;
	data.top=0;
	for(i=0;i<=MAXSIZE;i++)
	{
		data.brackets[i]='\0';
	}
	scanf("%s",text);
	for(i=0;text[i]!='\0'&&data.top+1<=MAXSIZE;i++)
	{
		if(notbrack(text[i]))
		{
			continue;
		}
		//printf("data.top+1=%d\n",data.top+1);
		/*if(data.top+1>MAXSIZE)
		{
			printf("the stack is full\n");
			return 0;
		}*/
		else
		{
			data.brackets[++data.top]=text[i];
		}
		
		if(matchable(data.brackets[data.top-1],data.brackets[data.top]))
		{
			data.brackets[data.top]='\0';
			data.brackets[data.top-1]='\0';
			data.top-=2;
		}
		/*print the whole stack
		for(j=1;data.brackets[j]!='\0';j++)
		{
			printf("%c",data.brackets[j]);
		}
		printf("\n");
		print the whole stack*/
	}
	if(data.top==0) printf("OK\n");
	else		    printf("Wrong\n");
}
