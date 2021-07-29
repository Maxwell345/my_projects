#include <stdio.h>
int main()
{
	int k,a,b,c,i,x,y;
	scanf("%d",&k);
	while(k--)
	{
		
		
		int flag=0;
		scanf("%d+%d=%d",&a,&b,&c);
		x=a;
		y=b;
		if(a+b==c) printf("%d\n",0);
		for(i=1;i<=8;i++)
		{
			x*=10;
			if(x+y==c)
			{
				printf("%d\n",i);
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			x=a;
			for(i=1;i<=8;i++)
		    {
			    y*=10;
			    if(x+y==c)
			    {
			    	printf("%d\n",-i);
				    break;
			    }
		    }
		}
		
	}
}
