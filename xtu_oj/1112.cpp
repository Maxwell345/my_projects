#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		int x1,y1,x2,y2,x3,y3;
		scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
		if((float)(y1-y2)/(float)(x1-x2)==(float)(y2-y3)/(float)(x2-x3))printf("Yes\n");
		else printf("No\n");
		i++;
	}
	return 0;
}
