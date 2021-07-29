#include <stdio.h>
int isprime[1000100]={0,0};
   
int primetable[79000]={0};
int interprime[1000001]={0};
int sum[1000001]={0,0,0,0,1};
int main()
{
	int i,j,J;
	for(i=2;i<1000031;i++)
	{
		isprime[i]=1;
	}
	for(i=2;i*i<=1000031;i++)
	{
		if(isprime[i])
		{
			for(j=i*i;j<=1000031;j+=i)
			{
				isprime[j]=0;
			}
		}
	}
	
	//埃筛 
	j=0;
	for(i=3;i<=1000100;i++)
	{
		if(isprime[i])
		{
			primetable[j]=i;
			j++;
		}
	}            //首项为3的(奇)素数表 
	
		
	for(j=0;primetable[j]!=0;j++)
	{
		J=(primetable[j]+primetable[j+1])/2;
		if(isprime[J]==0) interprime[J]=1;
	}
	 
	 
//	for(i=0;i<=200;i++)
//	{
//		if(interprime[i]) printf("%d ",i);
//	}
	for(i=5;i<1000001;i++)
	{
		sum[i]=sum[i-1]+interprime[i];
	}
	
	int sample;
	long long a,b;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",sum[b]-sum[a-1]);
	}
}
