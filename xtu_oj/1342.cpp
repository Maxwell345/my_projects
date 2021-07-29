#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		int a1,b1,c1,a2,b2,c2;
		scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
		float k1,k2,k3;
		k1=(float)a1/a2;
		k2=(float)b1/b2;
		k3=(float)c1/c2;
		if(k1==k2&&k2==k3)printf("Yes\n");
		else printf("No\n");
		i++;
	}
	return 0;
}
