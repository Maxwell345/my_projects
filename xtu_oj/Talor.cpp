#include <stdio.h>
#include <math.h>
double jc(int n)   //�׳�
{
	if(n==0||n==1)  
	    return 1;
	else
	    return n*jc(n-1);       //n!=n*(n-1)!
} 
int main()
 
{
	double e = 1.0;				//����e�ĳ�ʼֵ			
	int n = 1;
	int t;
	while(jc(n)<pow(10,8))        //���С��10^-8 
	{
		
	    			
		e += 1.0/jc(n);
		n++;
	}
	printf("e��ֵԼΪ��%.12f\n",e);
}
