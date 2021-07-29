#include <stdio.h>
#include <math.h>
int main(void)
{
	double sum,i;
	char ch; 
	sum=0.0;
	for(i=1.0;i<=1000000000.0;i+=1.0)//算到前十亿项 
	{
		sum+=1/(i*i);   //巴塞尔问题,全体自然数平方倒数和收敛于 PI^2/6 
	}
	printf("圆周率约为%.14f\n",sqrt(6*sum));
	printf("按任意键加回车结束\n");
	scanf("%c",&ch);
}
