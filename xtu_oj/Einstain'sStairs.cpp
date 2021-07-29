#include <stdio.h>
int main(void)
{
	int i,answer;
	printf("爱因斯坦阶梯问题求解:\n");
	printf("如果一个人每一步上2阶,最后剩1阶；\n");
	printf("如果一个人每一步上3阶,最后剩2阶；\n");
	printf("如果一个人每一步上5阶,最后剩4阶；\n");
	printf("如果一个人每一步上6阶,最后剩5阶；\n");
	printf("如果一个人每一步上7阶,最后刚好一阶也不剩；\n");
	for(i=7;i<=200;i+=7)
	{
		if(i%2==1&&i%3==2&&i%5==4&&i%6==5)
		{
			answer=i;
			break;
		}
	}
	printf("\n答案是：这个阶梯共有%d个台阶!\n",answer);
}
