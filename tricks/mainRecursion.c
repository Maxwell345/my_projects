#include <stdio.h>
int a;
int main()
{
	if(a>=100) return 0;
	printf(a%10==0?"%d\n":"%d ",++a);
	main();
}
