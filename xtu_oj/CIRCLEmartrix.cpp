#include <stdio.h>
int main(void)
{
	int q,n,c,i,j,k,p;
	int I,J,K,P;
	scanf("%d",&q);
	while(q>0)
	{
		scanf("%d",&n);
		c=n+64;
		for(i=1;i<=n;i++)         //上半部分
		{
			for(j=0;j<=i-2;j++)             
		    {
			    printf("%c",c-j);
		    }                        //c-0~c-i+2
		    for(k=1;k<=2*n+1-2*i;k++)
			{
				printf("%c",c-i+1);       //c-n+1重复输出n+2-2i次 
			}	
			for(p=i-2;p>=0;p--)
			{
				printf("%c",c-p);     //c-i+2~c-0 
			} 
			printf("\n");                         	
		}
		
		for(I=n-1;I>=1;I--)                     //从第n-1行开始倒着输出一遍 
		{
			for(J=0;J<=I-2;J++)             
		    {
			    printf("%c",c-J);
		    }                        //c-0~c-i+2
		    for(K=1;K<=2*n+1-2*I;K++)
			{
				printf("%c",c-I+1);       //c-n+1重复输出n+2-2i次 
			}	
			for(P=I-2;P>=0;P--)
			{
				printf("%c",c-P);     //c-i+2~c-0 
			} 
			printf("\n");                         				
		}
		q--;
	}
}
