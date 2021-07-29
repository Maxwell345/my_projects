#include <stdio.h>
int main(void)
{
	int n,i,j;
	int k,m,p;
	while(scanf("%d",&n)!=0)
	{
		if(n==0)  break; 
		n-=1;
		for(j=1;j<=n;j++)          /*第0行的1*/ 
		{
			printf(" ");
		}
		printf("%d\n",1);
		for(i=1;i<=n;i++)           /*输出n行*/
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
			printf("\n");        /*第i行依次输出n-i个空格、1~i、+、i~1和换行*/ 
		}
	} 
}
    

