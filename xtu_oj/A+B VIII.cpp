#include <stdio.h>
int main()
{
	int k;
	long long a,b,i,A,count,sum;
	scanf("%d",&k);
	while(k--)
	{
		sum=1;
		scanf("%I64d %I64d",&a,&b);
		a+=b;
		A=a;
		
		for(i=2;i*i<=a;i++)
		{
			if(a%i!=0) continue;
			count=0;
			do{
				count++;
				a/=i;
			}while(a%i==0);	
			sum*=(count+1);
		}
		
		
		
		if(a>1)
		{
			sum*=2;
		}
		
		
		printf("%I64d\n",sum);
	}
}
