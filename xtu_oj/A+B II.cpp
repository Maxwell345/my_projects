#include <stdio.h>
int main(void)
{
	int n,i,j;
	int k,m,p;
	while(scanf("%d",&n)!=0)
	{
		if(n==0)  break; 
		n-=1;
		for(j=1;j<=n;j++)          /*��0�е�1*/ 
		{
			printf(" ");
		}
		printf("%d\n",1);
		for(i=1;i<=n;i++)           /*���n��*/
		{
			for(k=1;k<=n-i;k++)   
			{
				printf(" ");
			}
			for(m=1;m<=i;m++)
			{
				printf("%d",m);
			}
			printf("+");
			for(p=i;p>=1;p--)
			{
				printf("%d",p);
			}                  
			printf("\n");        /*��i���������n-i���ո�1~i��+��i~1�ͻ���*/ 
		}
	} 
}
    

