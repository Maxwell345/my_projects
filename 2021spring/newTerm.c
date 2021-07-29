#include <stdio.h>
int factorial(int n)
{
	if(n==0) return 1;
	return n*factorial(n-1);
}
int main()
{
	int x,t;
	t=10;
	printf("Today is 2021/3/19\n");
	while(t&&scanf("%d",&x)!=EOF)
	{
		if(x<0) break;
		printf("%d\n",factorial(x));
		t--;
	}
}
