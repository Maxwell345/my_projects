#include <stdio.h>
int main(void)
{
	int x,i,j,k,h,n;
	char c;
	scanf("%d",&x);
	while(x>0)
	{
		getchar();
		scanf("%c",&c);
		n=c-64;
		for(i=1;i<=n;i++) // c-'A'+1´Î 
		{
			for(j=1;j<=n;j++)
			{
				printf(" ");       //c-'A'+1¸ö¿Õ¸ñ 
			}
			printf("%c\n",64+i);
			for(k=1;k<=n-i;k++)
			{
				printf(" ");
			}
			for(h=1;h<=2*i+1;h++)
			{
				printf("%c",64+i);
			}
			printf("\n");
		}
	    x--;
	}
}
