#include <stdio.h>
int main()
{
	int samplenumber;
	scanf("%d",&samplenumber);
	while(samplenumber--)
	{
		long long m,n,sum;
		scanf("%I64d",&m);
		if(m%2==0||m%10==5) printf("%d\n",0);
		else
		{
			sum=0;n=0;
			do{
				sum=(sum*10+1)%m;
				n++;
			}while(sum!=0);/*n个1组成的数等于1/9*(10^n-1)*/
			printf("%I64d\n",n);
		}
	}
}
