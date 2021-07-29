#include <stdio.h>
int isPerfectNum(int x)
{
	int i,sum;
	sum=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			sum+=i;
		}
		if(sum>x)
		{
			return 0;
		}
	}
	if(sum==x) return 1;
	else       return 0;
	
}
int main(void)
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(isPerfectNum(n)) printf("Yes\n");
		else             printf("No\n");
	}
//    printf("一亿以内的完全数:");
//    int j;
//	for(j=2;j<=100000000;j++)
//	{
//		if(isPerfectNum(j)) printf("%7d ",j);
//	}
}
