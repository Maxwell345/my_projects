#include <stdio.h>
const long long T=1000000007;
//反面考虑，用2^n减去没有连续1的n位数的个数
long long fib[1000001]={0,2,3};
long long answer[1000001]={1,2,4};
 /*设没有连续1的n位二进制数的个数为fib(n)
 n位不连续数分两种情况
 1. 最高位为0，剩下n-1位没有连续1，fib(n-1)种 
 2. 最高位为1，第二位必为0，剩下n-2位无连续1，fib(n-2)种 
 满足fib(n)=fib(n-1)+fib(n-2), 斐波那契数列     */
int main()
{
	int sample;
	long long n,i,temp;
	
		
		//下面构造首项为2,第二项为3的斐波那契数列 
	for(i=3;i<=1000000;i++)
	{
		fib[i]=(fib[i-1]+fib[i-2])%T;
	}
	for(i=3;i<=1000000;i++)
	{
		answer[i]=(answer[i-1]*2)%T;
	}
	scanf("%d",&sample);
	while(sample--)
	{
		
		scanf("%I64d",&n);
		if(n==1) printf("%d\n",0);
		else if(n==2) printf("%d\n",1);
		else
		{
			temp=answer[n]-fib[n];
			if(temp<0) temp+=T;
			printf("%I64d\n",temp%T);
		}
	}
}     
