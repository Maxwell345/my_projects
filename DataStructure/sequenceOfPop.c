#include <stdio.h>
int main(void)
{
	int testnum,k;
	int i,top,base;
	int stack[8];
	int data[8];
	char output[123];
	for(i=0;i<=7;i++)
	{
		stack[i]=0;
	}
	scanf("%d",&testnum);
	k=0;
	while(testnum--)
	{
		for(i=1;i<=7;i++)
		{
			scanf("%d",&data[i]);
		}
		top=0;base=1;
		for(i=1;i<=7;i++)
		{
			while(stack[top]!=data[i]&&top<=7)
			{
				stack[++top]=base;
				base++;
			}
			if(stack[top]==data[i]) top--;
		}
		if(top==0) output[k]='Y';
		else       output[k]='N';
		k++;
	}
	for(i=0;output[i]!='\0';i++)
	{
		printf("%c",output[i]);
	}
	printf("\n");
	return 0;
}
