#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	int i=1;
	while (i<=t)
	{
		int B,H;
	    scanf("%d %d",&B,&H);
	    printf("%.1f\n",(float)B*H/2);
	    i++;
    }
    return 0;
}

