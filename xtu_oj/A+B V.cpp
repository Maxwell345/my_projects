#include <stdio.h>
#define N 9
int main()
{
	
	int a,b,c;
	
	int k,i,t,u;
	
	scanf("%d",&k);
	while(k--)
	{
		
		c=0;
		
		scanf("%d %d",&a,&b);
		t=1;
		for(i=1;i<=N;i++)
		{
			
			u=(a%10+b%10)%10;
			
			a/=10;
			b/=10;
			c=c+u*t;
			t*=10;
			
		}
		
		printf("%d\n",c);
	}
}
