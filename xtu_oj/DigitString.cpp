#include <stdio.h>
int main()
{
	int TIMES=1000;
	char s[33];long long sum[17]={0,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	long long n,i,j,max;
	int flag;
	while(TIMES--)
	{
		scanf("%s %I64d",&s,&n);
		for(j=0;s[j]!='\0';j++)
		{
			max=0;
			if(s[j]>='0'&&s[j]<='9'&&s[j]-48>max)
			{
				max=s[j]-48;
			}
			else if(s[j]>='A'&&s[j]<='F'&&s[j]-55>max)
			{
				max=s[j]-55;
			}
		}/*maxΪ�������ֵ*/
		
		for(i=2;i<=16;i++)     //iΪ������ 
		{
			
			sum[i]=0;
			for(j=0;s[j]!='\0';j++)
			{
				if(s[j]>='0'&&s[j]<='9') sum[i]=sum[i]*i+s[j]-48;
				else                     sum[i]=sum[i]*i+s[j]-55;
			}             //�ؾ����㷨 
			
		} //sum[i]Ϊi�������ַ���s��ֵ 
		for(i=2;i<=16;i++)
		{
			flag=0;
			if(i<=max) continue;//���벻�ܴ��ڻ���ڽ����� 
			if(sum[i]==n)
			{
				 
				flag=1;
				printf("%I64d\n",i);
				break;
			}
			
		}
		if(flag==0) printf("Impossible\n");
	}
}
