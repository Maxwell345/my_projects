#include <stdio.h>
int main(void)
{
	int k,n,i,I,org;
	
	
	scanf("%d",&k);
	while(k--)
	{
	    int flag=1;
	    
		scanf("%d",&n);
		
		if(n>81)
		{
			org=n-81;
		}
		else
		{
			org=1;
		}
		
		for(i=org;i<n;i++)
		{
			int sum=i;
			I=i;
			int t=10;
			while(t>0)
			{
				sum+=I%10;               /*i的末位数字*/
				I=I/10;
				t-=1;
			}                           /* 重复10次计算i的数码累加和sum*/ 
			
			/*printf("%d ",sum);*/
			
			if(sum==n)
			{
				flag=0;
				break;
			}
			
		}
		
		if(flag==1) printf("Yes\n");
		else        printf("No\n");
		
	}
}
