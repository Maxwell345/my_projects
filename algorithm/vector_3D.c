#include <stdio.h>
#include <math.h>
typedef struct{
	double x,y,z;
}vector;
vector adding(vector a,vector b)
{
	vector sum;
	sum.x=a.x+b.x;sum.y=a.y+b.y;sum.z=a.z+b.z;
	return sum;
}
vector substract(vector a,vector b)
{
	vector d;
	d.x=a.x-b.x;d.y=a.y-b.y;d.z=a.z-b.z;
	return d;
}
vector Multiply(double k,vector a)
{
	vector ans;
	ans.x=k*x;ans.y=k*y;ans.z=k*z;
	return ans;
}
double module(vector a)
{
	return sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
}
double distance(vector a,vector b)
{
	return module(substract(a,b));
}
double DotProduct(vector a,vector b)
{
	return a.x*b.x+a.y*b.y+a.z*b.z;
}
vector CrossProduct(vector a,vector b)
{
	double p,q,r;
	vector ans;
	p=a.y*b.z-a.z*b.y;
	q=a.z*b.x-a.x*b.z;
	r=a.x*b.y-a.y*b.x;
	ans.x=p;ans.y=q;ans.z=r;
	return ans;
}
double MixProduct(vector a,vector b,vector c)
{
	return DotProduct(CrossProduct(a,b),c);
}
int parallel(vector a,vector b)
{
	vector p=CrossProduct(a,b);
	return Module(p)==0?1:0;
}
int verticle(vector a,vector b)
{
	return Dot(a,b)==0?1:0;
}
int sameface(vector a,vector b,vector c)
{
	return MixProduct(a,b,c)==0?1:0;
}
int main()
{
	vector a,b,c,ans2;
	double ans1,ans3,lamda;
	printf("vector a:");
	scanf("%lf%lf%lf",&a.x,&a.y,&a.z);
	printf("vector b:");
	scanf("%lf%lf%lf",&b.x,&b.y,&b.z);
	printf("vector c:");
	scanf("%lf%lf%lf",&c.x,&c.y,&c.z);
	printf("Constant Number lambda:");
	scanf("%lf",&lamda);
	printf("a+b=(%lf, %lf, %lf)\n",adding(a,b).x,adding(a,b).y,adding(a,b).z);
	printf("a-b=(%lf, %lf, %lf)\n",substract(a,b).x,substract(a,b).y,substract(a,b).z);
	printf("lambda * a=(%lf, %lf, %lf)",Multiply(lamda,a).x,Multiply(lamda,a).y,Multiply(lamda,a).z);
	printf("|a|=%lf\t|b|=%lf\t|c|=%lf\n",module(a),module(b),module(c));
	printf("|ab|=%lf\t|bc|=%lf\t|ac|=%lf\n",distance(a,b),distance(b,c),distance(a,c));
	ans1=DotProduct(a,b);
	ans2=CrossProduct(a,b);
	ans3=MixProduct(a,b,c);
	printf("a . b=%lf\na X b=(%lf, %lf, %lf)\n[a b c]=%lf",ans1,ans2.x,ans2.y,ans2.z,ans3);
}
