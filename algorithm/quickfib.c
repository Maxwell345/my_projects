#include <stdio.h>
long long quickfib(long long n)
{
	long long a=1,b=1,c=1,d=0;
	long long ua=1,ub=0,uc=0,ud=1;
	long long t1,t2,t3,t4;
	while(n)
	{
		if(n&1){
			t1=ua*a+ub*c;t2=ua*b+ub*d;
			t3=uc*a+ud*c;t4=uc*b+ud*d;
			ua=t1;ub=t2;uc=t3;ud=t4;
		}
		t1=a * a + b * c;t2=a * b + b * d;t3=c * a + d * c;t4=c * b + d * d;
		a=t1;b=t2;c=t3;d=t4;
		n>>=1;
	}
	return ub;
}
int main()
{
	long long x;
	while(scanf("%lld",&x)!=EOF){
		if(x<0){
			printf("error:nagetive number");
			continue;
		}
		printf("fib(%lld)=%lld\n",x,quickfib(x));
	}
	return 0;
}
