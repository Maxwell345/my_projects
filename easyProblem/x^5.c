#include <stdio.h>
int po5(int x)
{
	return x*x*x*x*x;
}
int Num5(int n)
{
	int res;
	res=0;
	do{
		res=res+po5(n%10);
		n/=10;
	}while(n>0);
	return res;
}
int main()
{
	int i;
	for(i=10;i<=984748;i++)
	{
		if(Num5(i)==i) printf("%d\n",Num5(i));
	}
}
