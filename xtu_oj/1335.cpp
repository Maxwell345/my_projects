#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int j=0;
		int r;
		scanf("%d",&r);
		for(int x=-r;x<=r;x++)
		{
			for(int y=-r;y<=r;y++)
			{
				if(x*x+y*y==r*r)
				j++;
			}
		}
		printf("%d\n",j);
	}
}
