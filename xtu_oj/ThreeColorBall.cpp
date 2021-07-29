#include <stdio.h>
int main(void)
{
	int i,j,k;
	printf("一个黑箱子里面有3个红球，3个黄球和6个绿球，如果从中取出8个球，有多少种颜色搭配?\n\n");
	printf("\n总共有如下几种可能：\n");
	printf("\t红球\t黄球\t绿球\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			for(k=0;k<=6;k++)
			{
				if(i+j+k==8)
				{
					printf("\t%d\t%d\t%d\n",i,j,k);
				}
			}
		}
	} 
	
}
