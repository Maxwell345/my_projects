#include <stdio.h>
int tri(int x,int y,int z)
{
	if(x+y>z&&x+z>y&&y+z>x) return 1;
	if(x+y==z||x+z==y||y+z==x) return 0;
	return -1;
}
int main()
{
	int a,b,c,d;
	int maxv,i;
	int value[4];
	scanf("%d %d %d %d",&a,&b,&c,&d);
	value[0]=tri(a,b,c);value[1]=tri(a,b,d);
	value[2]=tri(b,c,d);value[3]=tri(a,c,d);
	maxv=value[0];
	for(i=1;i<=3;i++)
	{
		if(value[i]>maxv) maxv=value[i];
	}
	switch(maxv)
	{
		case 1:
			printf("TRIANGLE\n");
			break;
		case 0:
			printf("SEGMENT\n");
			break;
		case -1:
			printf("IMPOSSIBLE\n");
			break;
	}
}
