#include <stdio.h>
int main(void)
{
	int k;
	int M[12];
	M[1]=M[3]=M[5]=M[7]=M[8]=M[10]=M[12]=31;
	M[4]=M[6]=M[9]=M[11]=30;
	scanf("%d",&k);
	while(k>0)
	{
		int y,m,d,i;
		int days=0;
		
		scanf("%d-%d-%d",&y,&m,&d);    //输入y年m月d日 
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			M[2]=29;
		}
		else 
		{
			M[2]=28;
		}
		
		
		for(i=1;i<m;i++)
		{
			days+=M[i];
		}                             
		//y年的1~m-1月天数之和 
		days+=d;   
		/*加上第m月的d天*/ 
		printf("%d\n",days);
		k--;
	}
}
