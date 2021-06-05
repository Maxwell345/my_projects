#include <stdio.h>
int main()
{
	double i,ans,border;
	scanf("%lf",&border);
	ans=0;
	for(i=1.0;i<=border;i+=2.0)
	{
		ans+=(1.0/i);
	}
	for(i=2.0;i<=border;i+=2.0)
	{
		ans-=(1.0/i);
	}
	printf("%.8lf\n",ans);
}
