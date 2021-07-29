#include <stdio.h>
#define N 1000000
#define SQRT_N 1000
int x[N+1]={0,0};           //���ڱ������ 
int D[N+1];
long long p[N+1];
int sum[N+1]={0,0,0,0,0};
int main(void)
{
    int i,j,I,J;
    for(i=2;i<=N;i++)
    {
        x[i]=1;
    }
    for(i=2;i<=SQRT_N;i++)
    {
        if(x[i])
        {
            for(j=i*i;j<=N;j+=i)
            {
                x[j]=0;
            }
        }
    }
    //����ɸ����1000000���ڵ������������Ϊ1
    int og=0;
    for(i=0;i<=N;i++)
    {
        if(x[i])
        {
            p[og]=i;
            og++;
        }
        
    }
    //������p[79000]
    for(i=0;i<=N;i++)
    {
        D[i]=0;
    } 
    
    for(j=0;p[j]!=0;j++)
    {
        for(J=j+1;p[J]!=0;J++)
        {
            if(p[j]*p[J]<=(long long)N) 
            {
                D[p[j]*p[J]]=1;
            }
            else break;
        }
    }
    int t,a,b;
	 
	sum[5]=0;
    for(i=6;i<=N;i++)
    {
    	sum[i]=sum[i-1]+D[i];
	}
	
    scanf("%d",&t);
    while(t--)
    {
        
        scanf("%d %d",&a,&b);
        printf("%d\n",sum[b]-sum[a-1]);
    }
}
