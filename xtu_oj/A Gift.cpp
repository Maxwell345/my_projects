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
			/*一种心形曲线的方程为(x^2+y^2-1)^3-x^2*y^3=0
			将等号改成小于等于表示图形内部区域的所有点*/
		}
		printf("\n");
	}
	char s1[50];
	scanf("%s",&s1);  //这一句只是为了让程序不结束 
}
