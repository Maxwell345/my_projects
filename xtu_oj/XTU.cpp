#include <stdio.h>
int main(void)
{
	int k,i;
	char s[1005];
	int sum,sum2,sum3;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%s",&s);
		sum=0; 
		sum2=0;
		sum3=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='X')
			{
				sum++;
			} 
			if(s[i]=='T')
			{
				sum2++;
			} 
			if(s[i]=='U')
			{
				sum3++;
			} 
		}
		if(sum>sum2)
		{
			sum=sum2;
		}
		if(sum>sum3)
		{
			sum=sum3;
		}                     //将sum,sum1,sum2中的最小值赋给sum
		printf("%d\n",sum); 
	}
}
