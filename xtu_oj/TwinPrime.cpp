#include <stdio.h>
#define N 5000001
#define SQRN 2250 
int prime[N]={0,0};

int twin[N]={0};
int sum[N]={0};
int main()
{
	int I,j;
    for(I=2;I<N;I++)
    {
	    prime[I]=1;
    }
    for(I=2;I*I<=N;I++)
    {
	    if(prime[I])
	    {
		    for(j=I*I;j<=N;j+=I)
		    {
			    prime[j]=0;
		    }
	    }
    }          //素数筛 
	int sample,a,b,answer;
	scanf("%d",&sample);
	int i;
	for(i=3;i<N;i++)
    {
	    if(prime[i]&&prime[i-2]) twin[i]=1;//twin[i]==1表示i与i-2为孪生素数 
    }
    for(i=5;i<N;i++)
    {
    	sum[i]=sum[i-1]+twin[i];    //sum[i]表示区间[0，i]的孪生素数对数 
    	/*printf("%d ",sum[i]);*/
    }
    /*调试部分*/ 
//	for(i=1;i<=300;i++)
//	{
//		printf("%d ",sum[i]);
//		if(i%15==0) printf("\n");
//	}
	/*调试部分*/
	while(sample--)
	{
		answer=0;
		scanf("%d %d",&a,&b);
		answer=sum[b]-sum[a-1];
		if(twin[a])
		{
			answer--;
		}
		
		if(twin[a+1]) 
		{
			answer--;
		}
		
		printf("%d\n",answer);
	}
}
