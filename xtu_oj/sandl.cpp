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
		//�ϰ벿�� 
		for(h=1;h<=x+1;h++)
		{
			printf("-");
		}
		printf("\n");        //������'-'
		 
		printf("\\");
		for(h1=1;h1<=x-1;h1++)     
		{
			printf(" ");
		}                          
		printf("/");
		printf("\n");          /*��һ�еĿ��к����ߵ�б��*/
		for(i=1;i<=n-1;i++)     /*�����n-1��*/ 
		{
			for(h=1;h<=i;h++)
			{
				printf(" ");
			}                           //��i�е��ʼ��i���ո� 
			printf("\\");
			for(j=1;j<=x-1-2*i;j++)
			{
				printf("*");
			}                      //��i����x-1-2i�� '*' 
			printf("/");
			printf("\n");
		}
		//�°벿��
		for(I=1;I<=n;I++)
		{
			for(h=1;h<=n-I;h++)
			{
				printf(" ");               //��I����ǰ����n-I���ո� 
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
