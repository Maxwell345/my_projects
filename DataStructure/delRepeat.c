#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[i-1]) printf(" %d",a[i]);
	}
}
