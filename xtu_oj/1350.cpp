#include <stdio.h>
#include <math.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	int i=1;
	while(i<=k)
	{
		float x;
		scanf("%f",&x);
		float h=sqrt(1-x*x);
		printf("%.3f\n",h);
		i++;
	}
}
