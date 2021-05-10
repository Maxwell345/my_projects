#include <stdio.h>
typedef struct{
	int x;
	int y;
	int b;
}point;
point dots[100000];
int main()
{
	int n,i,ans;
	scanf("%d",&n);
	ans=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&dots[i].x,&dots[i].y);
		dots[i].b=dots[i].x+dots[i].y;
	}
	ans=dots[0].b;
	for(i=1;i<n;i++)
	{
		if(dots[i].b>ans) ans=dots[i].b;
	}
	printf("%d\n",ans);
}
