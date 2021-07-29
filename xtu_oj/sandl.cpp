#include <stdio.h>
int main(void)
{
	int t,x,n;
	int h,h1,h2,i,j,I,J;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&x);
		x-=2;
		n=x/2;
		//上半部分 
		for(h=1;h<=x+1;h++)
		{
			printf("-");
		}
		printf("\n");        //顶部的'-'
		 
		printf("\\");
		for(h1=1;h1<=x-1;h1++)     
		{
			printf(" ");
		}                          
		printf("/");
		printf("\n");          /*第一行的空行和两边的斜杠*/
		for(i=1;i<=n-1;i++)     /*再输出n-1行*/ 
		{
			for(h=1;h<=i;h++)
			{
				printf(" ");
			}                           //第i行的最开始有i个空格 
			printf("\\");
			for(j=1;j<=x-1-2*i;j++)
			{
				printf("*");
			}                      //第i行有x-1-2i个 '*' 
			printf("/");
			printf("\n");
		}
		//下半部分
		for(I=1;I<=n;I++)
		{
			for(h=1;h<=n-I;h++)
			{
				printf(" ");               //第I行最前面有n-I个空格 
			}
			printf("/");
			for(J=1;J<=I-1;J++)
			{
				printf(" ");
			}
			printf("*");
			for(J=1;J<=I-1;J++)
			{
				printf(" ");
			}
			printf("\\");
			printf("\n");
		}
		for(h2=1;h2<=x+1;h2++)
		{
			printf("-");
		}
		printf("\n");
		printf("\n");			
		 
		t--;
	}
}
