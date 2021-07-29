#include <stdio.h>
long long gcd(long long x,long long y)
{
	long long t;
	long long r=1;
    if(y>x)
	{
        t=x;  
		x=y; 
		y=t;
    }
    do{
    	r=x%y;
    	x=y;
    	y=r;
	}while(r!=0);
	return x;
}     //最大公约数gcd(x,y) 
int main()
{
	int sample;
	long long a,b,i;
	long long son,mum,p;//分子、分母 、上一个分母 
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%I64d %I64d",&a,&b);
		
		son=1;mum=a;
		for(i=a+1;i<=b;i++)
		{
			
			son=son*i+mum;
			mum=mum*i;
			
			p=gcd(son,mum);
			son=son/p;
			mum=mum/p;
			
		}
		
		printf("%I64d",son);
		if(mum>1) printf("/%I64d",mum);
		printf("\n");
	}
}
