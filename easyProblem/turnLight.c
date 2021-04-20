#include <stdio.h>
int main()
{
	int n,m,i,j;
	int mark;
	scanf("%d %d",&n,&m);
	int a[n+1];
	for(i=0;i<=n;i++)
	{
		a[i]=0;
	}
	for(i=1;i<=m;i++)
	{
		for(j=i;j<=n;j+=i)
		{
			a[j]+=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]&1) 
		{
			mark=i;
			printf("%d",mark);
			break;
		}
	}
	for(i=mark+1;i<=n;i++)
	{
		if(a[i]&1) printf(",%d",i);
	}
	printf("\n");
}
