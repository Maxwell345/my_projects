#include <stdio.h>
int main(void)
{
	int x,n,i,j,k,p;
	int I,J,K,P;
	scanf("%d",&x);
	while(x>0)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)       
		{
			for(j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			for(k=0;k<=i-1;k++)
			{
				printf("%c",64+n-k);
			}
			for(p=i-2;p>=0;p--)
			{
				printf("%c",64+n-p);
			}
			printf("\n");
		}                         /*上半部分，n行*/
		
		
		for(I=n-1;I>=1;I--)
		{
			for(J=1;J<=n-I;J++)
			{
				printf(" ");
			}
			for(K=0;K<=I-1;K++)
			{
				printf("%c",64+n-K);
			}
			for(P=I-2;P>=0;P--)
			{
				printf("%c",64+n-P);
			}
			printf("\n");			
		}                                 //把上半部分倒着输出 
		x--;
	}
}
