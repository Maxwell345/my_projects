#include <stdio.h>
double mabs(double b)
{
	return b>0?b:-b;
}
double cubic(double x,double c)
{
	return x*x*x-c;
}
double der(double xx)
{
	return 3*xx*xx;
}
double newton(double a,double prs)
{
	double x_n,x_next;
	x_next=1687.917;
	do{
		x_n=x_next;
		x_next=x_n-cubic(x_n,a)/der(x_n);
	}while(mabs(x_n-x_next)>prs);
	return x_next;
}
void upset(double y)
{
	printf(y>0?"The number is too big!\n":"The number is too small!\n");
}
void welcome()
{
	printf("please input a number,I will calculate its cubic root.\n");
}
void answer(double org,double value)
{
	printf("The cubic root of %g is %.9f\n",org,value);
}
int main()
{
	double n,res,eps;
	eps=0.0000001;
	welcome();
	while(scanf("%lf",&n)!=EOF){
		if(n>1492.19||n<-1519.42) upset(n);
		else{
			res=newton(n,eps);
			answer(n,res);
		}
	}
}
