#include <stdio.h>
int tonum(char ch)
{
	int res;
	if(ch>='0'&&ch<='9')       res=ch-48;
	else if(ch=='X'||ch=='x')  res=10;
	return res;
}
int check(char *code,int *arr)
{
	int i,sum;
	sum=0;
	for(i=0;i<17;i++)
	{
		sum=sum+arr[i]*tonum(code[i]);
	}
	return sum;
}
int main()
{
	int temp[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2,1};
	char id[20];
	int ans,j,base;
	ans=0;
	scanf("%s",id);
	base=check(id,temp);
	for(j=0;j<11;j++)
	{
		if((base+j)%11==1)
		{
			ans=j;
			break;
		}
	}
	if(ans<10) printf("%d\n",ans);
	else   printf("X\n");
}
