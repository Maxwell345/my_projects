#include <stdio.h>
#include "my_hfile.h"
int main()
{
	int k,t1,t2;
	scanf("%d",&k);
	printf("%d!  =  %d",k,fact(k));
	scanf("%d%d",&t1,&t2);
	printf("gcd(%d,%d)=%d\n",t1,t2,gcd(t1,t2));
	printf("lcm(%d,%d)=%d",t1,t2,lcm(t1,t2));
}
