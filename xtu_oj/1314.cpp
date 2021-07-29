#include <stdio.h>
int gcd(int a,int b)
{
	int temp;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	int r=1;
	do{
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	return a;
}
int main()
{
	int k,n,m;
	int f,F,w;
	scanf("%d",&k);
	while(k--)
	{
		
		scanf("%d %d",&n,&m);
		
		
		if(m==n) printf("%d\n",0);
		else if(m==0||m==1) printf("%d\n",1);
		else
		{
			F=n*(n-1);
			f=F-m*(m-1);
			w=gcd(F,f);
			
			F/=w;
			f/=w;
			printf("%d/%d\n",f,F);
		}
	}
} 
