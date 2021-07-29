#include <stdio.h>
#include <math.h> 

int main(void)
{
	int n,i,j,k,cnt;
	while(scanf("%d",&n), n!=0)
	{
		long long a[1001];
		cnt=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if((a[j])==a[k]*a[k])  cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
