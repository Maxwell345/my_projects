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
	for(i=0;i<18;i++)
	{
		sum=sum+arr[i]*tonum(code[i]);
	}
	if(sum%11==1) return 1;
	return 0;
}
int main()
{
	int temp[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2,1};
	char id[20];
	int testnum,ans;
	ans=0;
	scanf("%d",&testnum);
	while(testnum--)
	{
		scanf("%s",id);
		ans+=check(id,temp);
	}
	printf("%d\n",ans);
}
