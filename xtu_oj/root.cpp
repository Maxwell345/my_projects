#include <stdio.h>
#include <math.h>
int main(void)
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int a,b,c,dt;
		scanf("%d %d %d",&a,&b,&c);
		if(a==0){
		    if(b==0&&c==0) printf("INF\n");
		    else if(b==0&&c!=0) printf("No\n");
		    else
		    {
		        printf("%d\n",1);	
		    }
		}
		else
		{
			dt=b*b-4*a*c;
			if(dt<0) printf("%d\n",0);
			else if(dt==0) printf("%d\n",1);
			else printf("%d\n",2);
		}
	}
}
