#include <stdio.h>
int main(void)
{
	long long N,i,fact,sum;
	scanf("%lld",&N);
	sum=0;
	fact=1;
	for(i=1;i<=N;i++)
	{
		fact*=i;
		sum+=fact;
	}
	printf("%lld\n",sum);
}
