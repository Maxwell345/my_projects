#include <stdio.h>
int a[5][5];
int rmax[5];
int cmin[5];
int main()
{
	int i,j,flag;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		rmax[i]=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>a[i][rmax[i]]) rmax[i]=j;
		}
	}
	for(j=0;j<5;j++)
	{
		cmin[j]=0;
		for(i=1;i<5;i++)
		{
			if(a[i][j]<a[cmin[j]][j]) cmin[j]=i;
		}
	}
	flag=0;
	/*printf("\n");
	for(i=0;i<5;i++) printf("%d ",rmax[i]);
	printf("\n");
	for(i=0;i<5;i++) printf("%d ",cmin[i]);
	printf("\n");
	printf("\n");*/
	for(i=0;i<5;i++)
	{
		if(cmin[rmax[i]]==i)
		{
			flag=1;
			printf("%d %d %d\n",i+1,rmax[i]+1,a[i][rmax[i]]);
		}
	}
	if(flag==0) printf("not found\n");
}
