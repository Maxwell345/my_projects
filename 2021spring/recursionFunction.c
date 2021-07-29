#include <stdio.h>
double f(double x,double n)
{
	if(n==0) return x;
	else     return x/(n+f(x,n-1));
}
int main()
{
	int n1;
	double x,n2;
	scanf("%lf %d",&x,&n1);
	n2=(double)n1;
	printf("%.2lf\n",f(x,n2));
}
