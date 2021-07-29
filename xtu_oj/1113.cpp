#include <stdio.h>
int main(void)
{
	int s;
	scanf("%d",&s);
	int i=0;
	while (i<s)
	{
		float x1,x2,x3,x4;
		scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
		if(x2<x3||x1>x4)printf("No\n");
		else printf("Yes\n");
		i++;
	}
	return 0;
}
