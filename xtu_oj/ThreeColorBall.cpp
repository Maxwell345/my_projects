#include <stdio.h>
int main(void)
{
	int i,j,k;
	printf("һ��������������3������3�������6�������������ȡ��8�����ж�������ɫ����?\n\n");
	printf("\n�ܹ������¼��ֿ��ܣ�\n");
	printf("\t����\t����\t����\n");
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
