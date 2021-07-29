#include <stdio.h>
int main()
{
	double a,b,c,d;
	double left,right,mid,ans;
	int luck;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&left,&right);
	luck=0;
	while(right-left>=0.0000001)
	{
		mid=(left+right)/2;
		if((a*left*left*left+b*left*left+c*left+d)*(a*mid*mid*mid+b*mid*mid+c*mid+d)<0)
		{
			right=mid;
		}
		else if((a*right*right*right+b*right*right+c*right+d)*(a*mid*mid*mid+b*mid*mid+c*mid+d)<0)
		{
			left=mid;
		}
		else
		{
			printf("%lf",mid);
			luck=1;
			break;
		}
	}
	if(!luck)
	{
		ans=left;
		printf("%lf",ans);
	}
}
