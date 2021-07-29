#include <stdio.h>
long long fib(long long x)
{
	int i;
	long long f1,f2,temp;
	if(x<=2)
    {
        f2=1;
    }
    else
    {
        f1=1;
        f2=1;
        for(i=3;i<=x;i++)
        {
            temp=f2;
            f2=f1+f2;
            f1=temp;
        }
    }
    return f2;
}
int main(void)
{
	
	long long n;
	while(scanf("%d",&n)!=EOF)
	{
	    if(fib(n)%2==0)
	    {
	    	printf("odd\n");
	    }
	    else printf("even\n");
	}
} 
