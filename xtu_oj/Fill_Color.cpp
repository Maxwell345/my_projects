#include <stdio.h>
#define thatnumber 1000003
int w[1001];
int main(void)
{
	int n,m,i;
	
	while(scanf("%d %d",&n,&m)!=EOF&&n!=0&&m!=0)
	{
		if(n==1) printf("%d\n",m);
		else if(m==2)
		{
			if(n%2==0) printf("%d\n",2);
			else       printf("%d\n",0);
		} 
		else
		{
			w[1]=m%thatnumber;w[2]=m*(m-1)%thatnumber;w[3]=m*(m-1)*(m-2)%thatnumber;
			for(i=4;i<=n;i++)
			{
				w[i]=(w[i-1]*(m-2)%thatnumber+w[i-2]*(m-1)%thatnumber)%thatnumber;
			}
			printf("%d\n",w[n]);
		}
		
		
	}
}
