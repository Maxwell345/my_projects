#include <stdio.h>
#include <math.h>
double jc(int n)   //阶乘
{
	if(n==0||n==1)  
	    return 1;
	else
	    return n*jc(n-1);       //n!=n*(n-1)!
} 
int main()
 
{
	double e = 1.0;				//定义e的初始值			
	int n = 1;
	int t;
	while(jc(n)<pow(10,8))        //误差小于10^-8 
	{
		
	    			
		e += 1.0/jc(n);
		n++;
	}
	printf("e的值约为：%.12f\n",e);
}
