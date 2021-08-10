#include <stdio.h>
int main()
{
	double a,b;
	int i;
	scanf("%lf%lf",&a,&b);
	i=0;
	while(1){
		if(i*b<=a&&(i+1)*b>a) break;
		i++;
	}
	printf("%lf\n",a-i*b);
}
