#include <stdio.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		int x=2*m*n;
		int y=(m+n)*(m+n-1);
		if(x==0)printf("%d\n",0);
		else if(x==y)printf("%d\n",1);
		else
		{
			int p,q=y,x;
			int r=1;
			do{
				r=p%q;
				p=q;
				q=r;
			}while(r!=0);
			
			y=y/p;
			x=x/p;
			printf("%d/%d\n",x,y);
		}
	}
}
