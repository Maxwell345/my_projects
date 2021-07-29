#include <stdio.h>
int price[1002]={0};
int main(void)
{
	int n,m,d_price,sum;
	int i,j,k,temp;
	int sample;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%d %d",&n,&m);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&price[i]);
		}
		for(i=1;i<=n-1;i++)
		{
			k=i;
			for(j=i+1;j<=n;j++)
			{
				if(price[j]<price[k]) k=j;
			}
			if(k!=i)
			{
				temp=price[i];
				price[i]=price[k];
				price[k]=temp;
			}
		}
		//用选择排序法对价格递增排序
		k=m;
		for(i=m;i<=n;i++)
		{
			if(price[i]-price[i-m+1]<price[k]-price[k-m+1]) k=i;
		}
		d_price=price[k]-price[k-m+1];
		sum=0;
		for(i=k-m+1;i<=k;i++)
		{
			sum+=price[i];
		}
		printf("%d %d\n",d_price,sum);
	}
}
