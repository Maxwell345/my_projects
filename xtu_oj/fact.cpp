#include <stdio.h>
long long fact(int n)
{
	if(n<0)  return n;  
	else if(n<=1)  return 1;
	else return n*fact(n-1);
}
int main(void)
{
	int x;
	printf("please input a natural number\n");
	scanf("%d",&x);
	if(fact(x)>=0) printf("%d",fact(x));
	else printf("None\n");
}
