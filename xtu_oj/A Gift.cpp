#include <stdio.h>
int main(void)
{
	float a,x,y;
	int t=5;
	while(t--)
	{
		printf("\n");
	}
	
	for(y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(x=-2.5f;x<3.2f;x+=0.05f)
		{
			a=x*x+y*y-1;
			if(a*a*a-x*x*y*y*y<=0.0f)
			{
				
				printf("@");
			}
			else
			{
				
				printf(" ");
			}
			/*һ���������ߵķ���Ϊ(x^2+y^2-1)^3-x^2*y^3=0
			���ȺŸĳ�С�ڵ��ڱ�ʾͼ���ڲ���������е�*/
		}
		printf("\n");
	}
	char s1[50];
	scanf("%s",&s1);  //��һ��ֻ��Ϊ���ó��򲻽��� 
}
