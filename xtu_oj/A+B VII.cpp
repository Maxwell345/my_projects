#include <stdio.h>
int main()
{
	int n,m,n0,n1,n2,n3,i;
	while(scanf("%d",&n)!=EOF)
	{
		m=n/1000;n0=n%1000;
		for(i=1;i<=m;i++)
		{
			printf("M");
		}       //n包含m个1000,输出m个'M' 
		n1=n0/100;
		n2=(n0/10)%10;
		n3=n0%10;      //百位、十位、各位的数码 
		if(n1<4)
		{
			for(i=1;i<=n1;i++)
		    {
		    	printf("C");
		    }
		} 
		else if(n1==4) printf("CD");
		else if(n1>=5&&n1<=8)
		{
			printf("D");
			for(i=1;i<=n1-5;i++)
			{
				printf("C");
			}
		}
		else if(n1==9) printf("CM");
		
		
		if(n2<4)
		{
			for(i=1;i<=n2;i++)
			{
				printf("X");
			}
		}
		else if(n2==4) printf("XL");
		else if(n2>=5&&n2<=8)
		{
			printf("L");
			for(i=1;i<=n2-5;i++)
			{
				printf("X");
			}
		}
		else if(n2==9) printf("XC");
		
		
		if(n3<4)
		{
			for(i=1;i<=n3;i++)
			{
				printf("I");
			}
		}
		else if(n3==4) printf("IV");
		else if(n3>=5&&n3<=8)
		{
			printf("V");
			for(i=1;i<=n3-5;i++)
			{
				printf("I");
			}
		}
		else if(n3==9) printf("IX");
		printf("\n");
	}
}
