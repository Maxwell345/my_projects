#include <stdio.h>
int main()
{
	double i,hfp,pro;
	hfp=1.0;
	for(i=2.0;i<=100000000.0;i+=2.0)//Ò»ÒÚÏî 
	{
		pro=(i*i)/((i-1)*(i+1));
		hfp*=pro;
	}
	printf("¦Ð¡Ö%.9lf\n",hfp*2);
}
