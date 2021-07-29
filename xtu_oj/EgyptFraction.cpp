#include <stdio.h>
long long gcd(long long x,long long y)
{
	return y?gcd(y,x%y):x;
}
int main(void)
{
	int sample;
	long long i,a,b,p;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%I64d %I64d",&a,&b);
		while(1)
		{
			i=b/a;
			while(i*a<b) i++;		
			a=i*a-b;
			b=i*b;         //a/b-1/i=(ai-b)/bi 
			p=gcd(a,b);
			a/=p;
			b/=p;
			printf("%I64d",i);
			if(a==0) break;
			printf(" ");
			
			
		}
		printf("\n");	
		
	}
}
