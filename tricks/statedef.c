#include <stdio.h>
#define f(x) x;x;x;x;x;x;x;x;x;x;
int n;
int main()
{
	f( f(printf("%d ",++n))  printf("\n"); )
	return 0;
}
