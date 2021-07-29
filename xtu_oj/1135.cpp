#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		int a,b,c,d,e;
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		printf("%d\n",a+b+c+d+e);
		i++;
	}
	return 0;
}
