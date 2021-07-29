#include <stdio.h>
int main(void)
{
	int sample;
	scanf("%d",&sample);
	while(sample--)
	{
		int n,d,i,flag;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		flag=1;
		d=a[1]-a[0];
		for(i=2;i<n;i++)
		{
			if(a[i]-a[i-1]!=d)
			{
				flag=0;
				break;
			}
		}
		if(flag) printf("Yes\n");
		else     printf("No\n");
	}
}
