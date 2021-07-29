#include <stdio.h>
#include <math.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		long long N,n,m,a,b;
		long long sum=0;
		scanf("%I64d %I64d",&N,&m);
		if(N==1)printf("%I64d\n",9/m+1);
		else {
		    a=1;b=1;n=N-1;
		    while(n--){a*=10;}
		    while(N--){b*=10;}
		    b-=1;
		    a-=1;
		    sum=b/m-a/m;
		    printf("%I64d\n",sum);
		}
	}
}
