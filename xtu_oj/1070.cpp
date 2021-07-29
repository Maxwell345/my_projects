#include <stdio.h>
int main(void)
{
	int p;
	scanf("%d",&p);
	int a=p/100;
	int b=(p%100)/10;
	int c=p%10;
	if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
