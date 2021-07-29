#include <stdio.h>
#include <math.h>
int main(void)
{
	float x;
	scanf("%f",&x);
	if(x>=0&&x<10)
	{
		printf("%.5f",cos(x+3.0));
	}
	else if(x>=10&&x<20)
	{
		float a=cos(x+7.5);
		printf("%.5f",a*a);
	}
	else if(x>=20&&x<=30)
	{
		float b=cos(x+4.0);
		printf("%.5f",b*b*b*b);
	}
	else
	{
		printf("Not define");
	}
	return 0;
}
