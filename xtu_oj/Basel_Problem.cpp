#include <stdio.h>
#include <math.h>
int main(void)
{
	double sum,i;
	char ch; 
	sum=0.0;
	for(i=1.0;i<=1000000000.0;i+=1.0)//�㵽ǰʮ���� 
	{
		sum+=1/(i*i);   //����������,ȫ����Ȼ��ƽ�������������� PI^2/6 
	}
	printf("Բ����ԼΪ%.14f\n",sqrt(6*sum));
	printf("��������ӻس�����\n");
	scanf("%c",&ch);
}
