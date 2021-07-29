#include <stdio.h>
int main()
{
	int sample;
	int a,b,i;
	int suma,sumb;
	scanf("%d",&sample);
	while(sample--)
	{
		scanf("%d %d",&a,&b);
		a--;
		suma=2*(a/6);sumb=2*(b/6);
		for(i=6*(a/6)+1;i<=a;i++)
		{
			if(i%6==1||i%6==5) suma++;
		}
		for(i=6*(b/6)+1;i<=b;i++)
		{
			if(i%6==1||i%6==5) sumb++;
		}
		printf("%d\n",sumb-suma);
		
		
	}
}
