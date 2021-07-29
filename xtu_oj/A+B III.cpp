#include <stdio.h>
int gcd(int N,int n)
{
	int r,temp;
	if(N<n)
	{
		temp=N;
		N=n;
		n=temp;
	}
	do{
		r=N%n;
		N=n;
		n=r;
	}while(r!=0);
	return N;
}
int main()
{
	int k;
	int n,m,f,F,r;
	scanf("%d",&k);
	while(k--)
	{
		
		scanf("%d %d",&n,&m);
		if(m<3) printf("%d\n",0);
		else if(m==n) printf("%d\n",1);
		else
		{
			int u;
			F=n*(n-1)*(n-2);
			f=m*(m-1)*(m-2);
			
			
			u=gcd(F,f);
			F=F/u;
			f=f/u;
			printf("%d/%d\n",f,F);
			
			
		}
	}
}
