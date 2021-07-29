#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		float d=(a+b+c)/2;
		float s=sqrt(d*(d-a)*(d-b)*(d-c));
		printf("%.2f",s);
	}
	else
	{
		printf("Not a triangle.");
	}
	return 0;
}
