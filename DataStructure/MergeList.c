#include <stdio.h>
int a[10005];
int b[10005];
int c[20010];
int main()
{
	int n,m;
	int i,j,k;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;j=0;k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else if(a[i]>b[j])
		{
			c[k++]=b[j++];
		}
		//avoid repeat
		else
		{
			c[k++]=a[i++];
			j++;
		}
	}
	//deal with the remained data
	if(i<n)
	{
		while(i<n)
		{
			c[k++]=a[i++];
		}
	}
	if(j<m)
	{
		while(j<m)
		{
			c[k++]=b[j++];
		}	
	}
	printf("%d",c[0]);
	for(i=1;c[i]!=0;i++)
	{
		printf(" %d",c[i]);
	}
}
