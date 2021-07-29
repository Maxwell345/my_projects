#include <stdio.h>
const long long T=1000000007;
//���濼�ǣ���2^n��ȥû������1��nλ���ĸ���
long long fib[1000001]={0,2,3};
long long answer[1000001]={1,2,4};
 /*��û������1��nλ���������ĸ���Ϊfib(n)
 nλ�����������������
 1. ���λΪ0��ʣ��n-1λû������1��fib(n-1)�� 
 2. ���λΪ1���ڶ�λ��Ϊ0��ʣ��n-2λ������1��fib(n-2)�� 
 ����fib(n)=fib(n-1)+fib(n-2), 쳲���������     */
int main()
{
	int sample;
	long long n,i,temp;
	
		
		//���湹������Ϊ2,�ڶ���Ϊ3��쳲��������� 
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
